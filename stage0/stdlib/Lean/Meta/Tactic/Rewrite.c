// Lean compiler output
// Module: Lean.Meta.Tactic.Rewrite
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.KAbstract public import Lean.Meta.Tactic.Apply public import Lean.Meta.BinderNameHint
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_skipAssignedInstances;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_hasBinderNameHint(lean_object*);
lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_MVarId_rewrite_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "Invalid rewrite argument: Expected an equality or iff proof or definition name, but"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__0 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__1;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "is "};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__2 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__3;
static const lean_array_object l_Lean_MVarId_rewrite___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__4 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__4_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__5 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__6 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__6_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Motive is dependent:"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__7 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__7_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__8;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 122, .m_capacity = 122, .m_length = 121, .m_data = "The rewrite tactic cannot substitute terms on which the type of the target expression depends. The type of the expression"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__9 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__9_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__10;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\ndepends on the value"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__11 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__11_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__12;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "motive is not type correct:"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__13 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__14;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nError: "};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__15 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__15_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__16;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 353, .m_capacity = 353, .m_length = 352, .m_data = "\n\nExplanation: The rewrite tactic rewrites an expression 'e' using an equality 'a = b' by the following process. First, it looks for all 'a' in 'e'. Second, it tries to abstract these occurrences of 'a' to create a function 'm := fun _a => ...', called the *motive*, with the property that 'm a' is definitionally equal to 'e'. Third, we observe that '"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__17 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__17_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__18;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "' implies that 'm a = m b', which can be used with lemmas such as '"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__19 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__19_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__20;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__21 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__21_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__22 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__22_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__23_value_aux_0),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(146, 109, 21, 40, 70, 113, 251, 6)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__23 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__23_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 348, .m_capacity = 348, .m_length = 347, .m_data = "' to change the goal. However, if 'e' depends on specific properties of 'a', then the motive 'm' might not typecheck.\n\nPossible solutions: use rewrite's 'occs' configuration option to limit which occurrences are rewritten, or use 'simp' or 'conv' mode, which have strategies for certain kinds of dependencies (these tactics can handle proofs and '"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__24 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__24_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__25;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__26 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__26_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__27 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__27_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "' instances whose types depend on the rewritten term, and 'simp' can apply user-defined '@[congr]' theorems as well)."};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__28 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__28_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__29;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_a"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__30 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__30_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(228, 106, 112, 29, 6, 211, 214, 169)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__31 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__31_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Did not find an occurrence of the pattern"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__32 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__32_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__33;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "\nin the target expression"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__34 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__34_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__35;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "Invalid rewrite argument: The pattern to be substituted is a metavariable (`"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__36 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__36_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__37;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "`) in this equality"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__38 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__38_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__39;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "a value of type"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__40 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__40_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "a proof of"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__41 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__41_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__42 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__42_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__43 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__43_value;
static const lean_string_object l_Lean_MVarId_rewrite___lam__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__44 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__44_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___lam__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_MVarId_rewrite___lam__1___closed__45 = (const lean_object*)&l_Lean_MVarId_rewrite___lam__1___closed__45_value;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__46;
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_rewrite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l_Lean_MVarId_rewrite___closed__0 = (const lean_object*)&l_Lean_MVarId_rewrite___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_rewrite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_rewrite___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 67, 55, 19, 78, 216, 184, 166)}};
static const lean_object* l_Lean_MVarId_rewrite___closed__1 = (const lean_object*)&l_Lean_MVarId_rewrite___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(lean_object* v_opts_44_, lean_object* v_opt_45_){
_start:
{
lean_object* v_name_46_; lean_object* v_defValue_47_; lean_object* v_map_48_; lean_object* v___x_49_; 
v_name_46_ = lean_ctor_get(v_opt_45_, 0);
v_defValue_47_ = lean_ctor_get(v_opt_45_, 1);
v_map_48_ = lean_ctor_get(v_opts_44_, 0);
v___x_49_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_48_, v_name_46_);
if (lean_obj_tag(v___x_49_) == 0)
{
uint8_t v___x_50_; 
v___x_50_ = lean_unbox(v_defValue_47_);
return v___x_50_;
}
else
{
lean_object* v_val_51_; 
v_val_51_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_val_51_);
lean_dec_ref_known(v___x_49_, 1);
if (lean_obj_tag(v_val_51_) == 1)
{
uint8_t v_v_52_; 
v_v_52_ = lean_ctor_get_uint8(v_val_51_, 0);
lean_dec_ref_known(v_val_51_, 0);
return v_v_52_;
}
else
{
uint8_t v___x_53_; 
lean_dec(v_val_51_);
v___x_53_ = lean_unbox(v_defValue_47_);
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7___boxed(lean_object* v_opts_54_, lean_object* v_opt_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(v_opts_54_, v_opt_55_);
lean_dec_ref(v_opt_55_);
lean_dec_ref(v_opts_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(lean_object* v_mvarId_58_, lean_object* v_x_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_58_, v_x_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_73_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_73_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_71_; 
if (v_isShared_69_ == 0)
{
v___x_71_ = v___x_68_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_a_66_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v_a_74_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_65_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_65_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg___boxed(lean_object* v_mvarId_82_, lean_object* v_x_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_82_, v_x_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(lean_object* v_00_u03b1_90_, lean_object* v_mvarId_91_, lean_object* v_x_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_91_, v_x_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___boxed(lean_object* v_00_u03b1_99_, lean_object* v_mvarId_100_, lean_object* v_x_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(v_00_u03b1_99_, v_mvarId_100_, v_x_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0(lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_expr_instantiate1(v_a_108_, v_a_110_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
v___x_117_ = lean_infer_type(v___x_116_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v___x_119_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_a_118_);
lean_dec_ref_known(v___x_117_, 1);
v___x_119_ = l_Lean_Meta_isExprDefEq(v_a_118_, v_a_109_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
return v___x_119_;
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec_ref(v_a_109_);
v_a_120_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_117_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_117_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0___boxed(lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_MVarId_rewrite___lam__0(v_a_128_, v_a_129_, v_a_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec_ref(v_a_130_);
lean_dec_ref(v_a_128_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(size_t v_sz_137_, size_t v_i_138_, lean_object* v_bs_139_){
_start:
{
uint8_t v___x_140_; 
v___x_140_ = lean_usize_dec_lt(v_i_138_, v_sz_137_);
if (v___x_140_ == 0)
{
lean_object* v___x_141_; 
v___x_141_ = l_unsafeCast___redArg(v_bs_139_);
lean_dec_ref(v_bs_139_);
return v___x_141_;
}
else
{
lean_object* v_v_142_; lean_object* v___x_143_; lean_object* v_bs_x27_144_; lean_object* v___x_145_; lean_object* v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_v_142_ = lean_array_uget(v_bs_139_, v_i_138_);
v___x_143_ = lean_unsigned_to_nat(0u);
v_bs_x27_144_ = lean_array_uset(v_bs_139_, v_i_138_, v___x_143_);
v___x_145_ = l_unsafeCast___redArg(v_v_142_);
lean_dec(v_v_142_);
v___x_146_ = l_Lean_Expr_mvarId_x21(v___x_145_);
lean_dec(v___x_145_);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_add(v_i_138_, v___x_147_);
v___x_149_ = l_unsafeCast___redArg(v___x_146_);
lean_dec(v___x_146_);
v___x_150_ = lean_array_uset(v_bs_x27_144_, v_i_138_, v___x_149_);
v_i_138_ = v___x_148_;
v_bs_139_ = v___x_150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3___boxed(lean_object* v_sz_152_, lean_object* v_i_153_, lean_object* v_bs_154_){
_start:
{
size_t v_sz_boxed_155_; size_t v_i_boxed_156_; lean_object* v_res_157_; 
v_sz_boxed_155_ = lean_unbox_usize(v_sz_152_);
lean_dec(v_sz_152_);
v_i_boxed_156_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_res_157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(v_sz_boxed_155_, v_i_boxed_156_, v_bs_154_);
return v_res_157_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(lean_object* v_keys_158_, lean_object* v_i_159_, lean_object* v_k_160_){
_start:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v_keys_158_);
v___x_162_ = lean_nat_dec_lt(v_i_159_, v___x_161_);
if (v___x_162_ == 0)
{
lean_dec(v_i_159_);
return v___x_162_;
}
else
{
lean_object* v_k_x27_163_; uint8_t v___x_164_; 
v_k_x27_163_ = lean_array_fget_borrowed(v_keys_158_, v_i_159_);
v___x_164_ = l_Lean_instBEqMVarId_beq(v_k_160_, v_k_x27_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = lean_nat_add(v_i_159_, v___x_165_);
lean_dec(v_i_159_);
v_i_159_ = v___x_166_;
goto _start;
}
else
{
lean_dec(v_i_159_);
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg___boxed(lean_object* v_keys_168_, lean_object* v_i_169_, lean_object* v_k_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_keys_168_, v_i_169_, v_k_170_);
lean_dec(v_k_170_);
lean_dec_ref(v_keys_168_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(lean_object* v_x_173_, size_t v_x_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_173_) == 0)
{
lean_object* v_es_176_; lean_object* v___x_177_; size_t v___x_178_; size_t v___x_179_; lean_object* v_j_180_; lean_object* v___x_181_; 
v_es_176_ = lean_ctor_get(v_x_173_, 0);
v___x_177_ = lean_box(2);
v___x_178_ = ((size_t)31ULL);
v___x_179_ = lean_usize_land(v_x_174_, v___x_178_);
v_j_180_ = lean_usize_to_nat(v___x_179_);
v___x_181_ = lean_array_get_borrowed(v___x_177_, v_es_176_, v_j_180_);
lean_dec(v_j_180_);
switch(lean_obj_tag(v___x_181_))
{
case 0:
{
lean_object* v_key_182_; uint8_t v___x_183_; 
v_key_182_ = lean_ctor_get(v___x_181_, 0);
v___x_183_ = l_Lean_instBEqMVarId_beq(v_x_175_, v_key_182_);
return v___x_183_;
}
case 1:
{
lean_object* v_node_184_; size_t v___x_185_; size_t v___x_186_; 
v_node_184_ = lean_ctor_get(v___x_181_, 0);
v___x_185_ = ((size_t)5ULL);
v___x_186_ = lean_usize_shift_right(v_x_174_, v___x_185_);
v_x_173_ = v_node_184_;
v_x_174_ = v___x_186_;
goto _start;
}
default: 
{
uint8_t v___x_188_; 
v___x_188_ = 0;
return v___x_188_;
}
}
}
else
{
lean_object* v_ks_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_ks_189_ = lean_ctor_get(v_x_173_, 0);
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_ks_189_, v___x_190_, v_x_175_);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
size_t v_x_17631__boxed_195_; uint8_t v_res_196_; lean_object* v_r_197_; 
v_x_17631__boxed_195_ = lean_unbox_usize(v_x_193_);
lean_dec(v_x_193_);
v_res_196_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_192_, v_x_17631__boxed_195_, v_x_194_);
lean_dec(v_x_194_);
lean_dec_ref(v_x_192_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
uint64_t v___x_200_; size_t v___x_201_; uint8_t v___x_202_; 
v___x_200_ = l_Lean_instHashableMVarId_hash(v_x_199_);
v___x_201_ = lean_uint64_to_usize(v___x_200_);
v___x_202_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_198_, v___x_201_, v_x_199_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg___boxed(lean_object* v_x_203_, lean_object* v_x_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_x_203_, v_x_204_);
lean_dec(v_x_204_);
lean_dec_ref(v_x_203_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(lean_object* v_mvarId_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_210_; lean_object* v_mctx_211_; lean_object* v_eAssignment_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_210_ = lean_st_ref_get(v___y_208_);
v_mctx_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc_ref(v_mctx_211_);
lean_dec(v___x_210_);
v_eAssignment_212_ = lean_ctor_get(v_mctx_211_, 8);
lean_inc_ref(v_eAssignment_212_);
lean_dec_ref(v_mctx_211_);
v___x_213_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_eAssignment_212_, v_mvarId_207_);
lean_dec_ref(v_eAssignment_212_);
v___x_214_ = lean_box(v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg___boxed(lean_object* v_mvarId_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v_mvarId_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec(v_mvarId_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(lean_object* v_as_220_, size_t v_i_221_, size_t v_stop_222_, lean_object* v_b_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_a_230_; uint8_t v___x_234_; 
v___x_234_ = lean_usize_dec_eq(v_i_221_, v_stop_222_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_238_; 
v___x_235_ = lean_array_uget_borrowed(v_as_220_, v_i_221_);
v___x_238_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v___x_235_, v___y_225_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; uint8_t v___x_240_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
lean_dec_ref_known(v___x_238_, 1);
v___x_240_ = lean_unbox(v_a_239_);
lean_dec(v_a_239_);
if (v___x_240_ == 0)
{
goto v___jp_236_;
}
else
{
v_a_230_ = v_b_223_;
goto v___jp_229_;
}
}
else
{
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_241_; uint8_t v___x_242_; 
v_a_241_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_241_);
lean_dec_ref_known(v___x_238_, 1);
v___x_242_ = lean_unbox(v_a_241_);
lean_dec(v_a_241_);
if (v___x_242_ == 0)
{
v_a_230_ = v_b_223_;
goto v___jp_229_;
}
else
{
goto v___jp_236_;
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_b_223_);
v_a_243_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_238_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_238_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
v___jp_236_:
{
lean_object* v___x_237_; 
lean_inc(v___x_235_);
v___x_237_ = lean_array_push(v_b_223_, v___x_235_);
v_a_230_ = v___x_237_;
goto v___jp_229_;
}
}
else
{
lean_object* v___x_251_; 
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v_b_223_);
return v___x_251_;
}
v___jp_229_:
{
size_t v___x_231_; size_t v___x_232_; 
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_add(v_i_221_, v___x_231_);
v_i_221_ = v___x_232_;
v_b_223_ = v_a_230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6___boxed(lean_object* v_as_252_, lean_object* v_i_253_, lean_object* v_stop_254_, lean_object* v_b_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
size_t v_i_boxed_261_; size_t v_stop_boxed_262_; lean_object* v_res_263_; 
v_i_boxed_261_ = lean_unbox_usize(v_i_253_);
lean_dec(v_i_253_);
v_stop_boxed_262_ = lean_unbox_usize(v_stop_254_);
lean_dec(v_stop_254_);
v_res_263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v_as_252_, v_i_boxed_261_, v_stop_boxed_262_, v_b_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec_ref(v_as_252_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(lean_object* v_k_264_, lean_object* v_b_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; 
lean_inc(v___y_269_);
lean_inc_ref(v___y_268_);
lean_inc(v___y_267_);
lean_inc_ref(v___y_266_);
v___x_271_ = lean_apply_6(v_k_264_, v_b_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, lean_box(0));
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed(lean_object* v_k_272_, lean_object* v_b_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(v_k_272_, v_b_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(lean_object* v_name_280_, uint8_t v_bi_281_, lean_object* v_type_282_, lean_object* v_k_283_, uint8_t v_kind_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___f_290_; lean_object* v___x_291_; 
v___f_290_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_290_, 0, v_k_283_);
v___x_291_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_280_, v_bi_281_, v_type_282_, v___f_290_, v_kind_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_291_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
v_a_300_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_291_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_291_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___boxed(lean_object* v_name_308_, lean_object* v_bi_309_, lean_object* v_type_310_, lean_object* v_k_311_, lean_object* v_kind_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
uint8_t v_bi_boxed_318_; uint8_t v_kind_boxed_319_; lean_object* v_res_320_; 
v_bi_boxed_318_ = lean_unbox(v_bi_309_);
v_kind_boxed_319_ = lean_unbox(v_kind_312_);
v_res_320_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_308_, v_bi_boxed_318_, v_type_310_, v_k_311_, v_kind_boxed_319_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(lean_object* v_name_321_, lean_object* v_type_322_, lean_object* v_k_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
uint8_t v___x_329_; uint8_t v___x_330_; lean_object* v___x_331_; 
v___x_329_ = 0;
v___x_330_ = 0;
v___x_331_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_321_, v___x_329_, v_type_322_, v_k_323_, v___x_330_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg___boxed(lean_object* v_name_332_, lean_object* v_type_333_, lean_object* v_k_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v_name_332_, v_type_333_, v_k_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_340_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(lean_object* v_a_341_, lean_object* v_as_342_, size_t v_i_343_, size_t v_stop_344_){
_start:
{
uint8_t v___x_345_; 
v___x_345_ = lean_usize_dec_eq(v_i_343_, v_stop_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_array_uget_borrowed(v_as_342_, v_i_343_);
v___x_347_ = l_Lean_instBEqMVarId_beq(v_a_341_, v___x_346_);
if (v___x_347_ == 0)
{
size_t v___x_348_; size_t v___x_349_; 
v___x_348_ = ((size_t)1ULL);
v___x_349_ = lean_usize_add(v_i_343_, v___x_348_);
v_i_343_ = v___x_349_;
goto _start;
}
else
{
return v___x_347_;
}
}
else
{
uint8_t v___x_351_; 
v___x_351_ = 0;
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6___boxed(lean_object* v_a_352_, lean_object* v_as_353_, lean_object* v_i_354_, lean_object* v_stop_355_){
_start:
{
size_t v_i_boxed_356_; size_t v_stop_boxed_357_; uint8_t v_res_358_; lean_object* v_r_359_; 
v_i_boxed_356_ = lean_unbox_usize(v_i_354_);
lean_dec(v_i_354_);
v_stop_boxed_357_ = lean_unbox_usize(v_stop_355_);
lean_dec(v_stop_355_);
v_res_358_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(v_a_352_, v_as_353_, v_i_boxed_356_, v_stop_boxed_357_);
lean_dec_ref(v_as_353_);
lean_dec(v_a_352_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(lean_object* v_as_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_array_get_size(v_as_360_);
v___x_364_ = lean_nat_dec_lt(v___x_362_, v___x_363_);
if (v___x_364_ == 0)
{
return v___x_364_;
}
else
{
if (v___x_364_ == 0)
{
return v___x_364_;
}
else
{
size_t v___x_365_; size_t v___x_366_; uint8_t v___x_367_; 
v___x_365_ = ((size_t)0ULL);
v___x_366_ = lean_usize_of_nat(v___x_363_);
v___x_367_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(v_a_361_, v_as_360_, v___x_365_, v___x_366_);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_MVarId_rewrite_spec__4___boxed(lean_object* v_as_368_, lean_object* v_a_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(v_as_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_as_368_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(lean_object* v_a_372_, lean_object* v_as_373_, size_t v_i_374_, size_t v_stop_375_, lean_object* v_b_376_){
_start:
{
lean_object* v___y_378_; uint8_t v___x_382_; 
v___x_382_ = lean_usize_dec_eq(v_i_374_, v_stop_375_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = lean_array_uget_borrowed(v_as_373_, v_i_374_);
v___x_384_ = l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(v_a_372_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; 
lean_inc(v___x_383_);
v___x_385_ = lean_array_push(v_b_376_, v___x_383_);
v___y_378_ = v___x_385_;
goto v___jp_377_;
}
else
{
v___y_378_ = v_b_376_;
goto v___jp_377_;
}
}
else
{
return v_b_376_;
}
v___jp_377_:
{
size_t v___x_379_; size_t v___x_380_; 
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_add(v_i_374_, v___x_379_);
v_i_374_ = v___x_380_;
v_b_376_ = v___y_378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5___boxed(lean_object* v_a_386_, lean_object* v_as_387_, lean_object* v_i_388_, lean_object* v_stop_389_, lean_object* v_b_390_){
_start:
{
size_t v_i_boxed_391_; size_t v_stop_boxed_392_; lean_object* v_res_393_; 
v_i_boxed_391_ = lean_unbox_usize(v_i_388_);
lean_dec(v_i_388_);
v_stop_boxed_392_ = lean_unbox_usize(v_stop_389_);
lean_dec(v_stop_389_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_386_, v_as_387_, v_i_boxed_391_, v_stop_boxed_392_, v_b_390_);
lean_dec_ref(v_as_387_);
lean_dec_ref(v_a_386_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(lean_object* v_msgData_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v___x_400_; lean_object* v_env_401_; lean_object* v___x_402_; lean_object* v_toCold_403_; lean_object* v_mctx_404_; lean_object* v_lctx_405_; lean_object* v_options_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_400_ = lean_st_ref_get(v___y_398_);
v_env_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc_ref(v_env_401_);
lean_dec(v___x_400_);
v___x_402_ = lean_st_ref_get(v___y_396_);
v_toCold_403_ = lean_ctor_get(v___y_397_, 0);
v_mctx_404_ = lean_ctor_get(v___x_402_, 0);
lean_inc_ref(v_mctx_404_);
lean_dec(v___x_402_);
v_lctx_405_ = lean_ctor_get(v___y_395_, 2);
v_options_406_ = lean_ctor_get(v_toCold_403_, 2);
lean_inc_ref(v_options_406_);
lean_inc_ref(v_lctx_405_);
v___x_407_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_407_, 0, v_env_401_);
lean_ctor_set(v___x_407_, 1, v_mctx_404_);
lean_ctor_set(v___x_407_, 2, v_lctx_405_);
lean_ctor_set(v___x_407_, 3, v_options_406_);
v___x_408_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v_msgData_394_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3___boxed(lean_object* v_msgData_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(v_msgData_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(lean_object* v_msg_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_ref_423_; lean_object* v___x_424_; lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_433_; 
v_ref_423_ = lean_ctor_get(v___y_420_, 2);
v___x_424_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(v_msg_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_433_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_433_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_433_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_429_; lean_object* v___x_431_; 
lean_inc(v_ref_423_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v_ref_423_);
lean_ctor_set(v___x_429_, 1, v_a_425_);
if (v_isShared_428_ == 0)
{
lean_ctor_set_tag(v___x_427_, 1);
lean_ctor_set(v___x_427_, 0, v___x_429_);
v___x_431_ = v___x_427_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg___boxed(lean_object* v_msg_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v_msg_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_440_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__1(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__0));
v___x_443_ = l_Lean_stringToMessageData(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__3(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__2));
v___x_446_ = l_Lean_stringToMessageData(v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__8(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__7));
v___x_454_ = l_Lean_stringToMessageData(v___x_453_);
return v___x_454_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__10(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__9));
v___x_457_ = l_Lean_stringToMessageData(v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__12(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__11));
v___x_460_ = l_Lean_stringToMessageData(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__14(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__13));
v___x_463_ = l_Lean_stringToMessageData(v___x_462_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__16(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__15));
v___x_466_ = l_Lean_stringToMessageData(v___x_465_);
return v___x_466_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__18(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__17));
v___x_469_ = l_Lean_stringToMessageData(v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__20(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__19));
v___x_472_ = l_Lean_stringToMessageData(v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__25(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__24));
v___x_480_ = l_Lean_stringToMessageData(v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__29(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__28));
v___x_486_ = l_Lean_stringToMessageData(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__33(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__32));
v___x_492_ = l_Lean_stringToMessageData(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__35(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__34));
v___x_495_ = l_Lean_stringToMessageData(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__37(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__36));
v___x_498_ = l_Lean_stringToMessageData(v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__39(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__38));
v___x_501_ = l_Lean_stringToMessageData(v___x_500_);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__46(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = lean_box(0);
v___x_511_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__45));
v___x_512_ = l_Lean_mkConst(v___x_511_, v___x_510_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1(lean_object* v_mvarId_513_, lean_object* v___x_514_, lean_object* v_heq_515_, lean_object* v_e_516_, lean_object* v_config_517_, uint8_t v_symm_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___x_552_; 
lean_inc(v___x_514_);
lean_inc(v_mvarId_513_);
v___x_552_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_513_, v___x_514_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v___x_553_; 
lean_dec_ref_known(v___x_552_, 1);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc_ref(v_heq_515_);
v___x_553_ = lean_infer_type(v_heq_515_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_555_; lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_1092_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
v___x_555_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_a_554_, v___y_520_);
v_a_556_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_558_ = v___x_555_;
v_isShared_559_ = v_isSharedCheck_1092_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_555_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_1092_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_560_; uint8_t v___x_561_; lean_object* v___x_562_; 
v___x_560_ = lean_box(0);
v___x_561_ = 0;
v___x_562_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_556_, v___x_560_, v___x_561_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v_snd_564_; lean_object* v_fst_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_1083_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v_snd_564_ = lean_ctor_get(v_a_563_, 1);
v_fst_565_ = lean_ctor_get(v_a_563_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_a_563_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_567_ = v_a_563_;
v_isShared_568_ = v_isSharedCheck_1083_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_snd_564_);
lean_inc(v_fst_565_);
lean_dec(v_a_563_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_1083_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_1082_; 
v_fst_569_ = lean_ctor_get(v_snd_564_, 0);
v_snd_570_ = lean_ctor_get(v_snd_564_, 1);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_snd_564_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_572_ = v_snd_564_;
v_isShared_573_ = v_isSharedCheck_1082_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_snd_570_);
lean_inc(v_fst_569_);
lean_dec(v_snd_564_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_1082_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; size_t v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v_a_583_; lean_object* v___y_612_; lean_object* v___y_613_; lean_object* v___y_614_; size_t v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; uint8_t v___y_637_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; uint8_t v___y_787_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v_eNew_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_978_; lean_object* v_heq_979_; lean_object* v_heqType_980_; lean_object* v_lhs_981_; lean_object* v_rhs_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v_heq_1006_; lean_object* v_heqType_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
lean_inc_ref(v_heq_515_);
v___x_1063_ = l_Lean_mkAppN(v_heq_515_, v_fst_565_);
v___x_1064_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__43));
v___x_1065_ = lean_unsigned_to_nat(2u);
v___x_1066_ = l_Lean_Expr_isAppOfArity(v_snd_570_, v___x_1064_, v___x_1065_);
if (v___x_1066_ == 0)
{
v_heq_1006_ = v___x_1063_;
v_heqType_1007_ = v_snd_570_;
v___y_1008_ = v___y_519_;
v___y_1009_ = v___y_520_;
v___y_1010_ = v___y_521_;
v___y_1011_ = v___y_522_;
goto v___jp_1005_;
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1067_ = l_Lean_Expr_appFn_x21(v_snd_570_);
v___x_1068_ = l_Lean_Expr_appArg_x21(v___x_1067_);
lean_dec_ref(v___x_1067_);
v___x_1069_ = l_Lean_Expr_appArg_x21(v_snd_570_);
lean_dec(v_snd_570_);
lean_inc_ref(v___x_1069_);
lean_inc_ref(v___x_1068_);
v___x_1070_ = l_Lean_Meta_mkEq(v___x_1068_, v___x_1069_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__46, &l_Lean_MVarId_rewrite___lam__1___closed__46_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__46);
v___x_1073_ = l_Lean_mkApp3(v___x_1072_, v___x_1068_, v___x_1069_, v___x_1063_);
v_heq_1006_ = v___x_1073_;
v_heqType_1007_ = v_a_1071_;
v___y_1008_ = v___y_519_;
v___y_1009_ = v___y_520_;
v___y_1010_ = v___y_521_;
v___y_1011_ = v___y_522_;
goto v___jp_1005_;
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref(v___x_1069_);
lean_dec_ref(v___x_1068_);
lean_dec_ref(v___x_1063_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1074_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1070_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1070_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
v___jp_574_:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_Meta_appendParentTag(v_mvarId_513_, v_fst_565_, v_fst_569_, v___y_576_, v___y_575_, v___y_577_, v___y_580_);
lean_dec(v_fst_569_);
lean_dec(v_fst_565_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_585_ = l_Lean_Meta_getMVarsNoDelayed(v_heq_515_, v___y_576_, v___y_575_, v___y_577_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_576_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_array_get_size(v_a_586_);
v___x_588_ = lean_mk_empty_array_with_capacity(v___y_581_);
v___x_589_ = lean_nat_dec_lt(v___y_581_, v___x_587_);
if (v___x_589_ == 0)
{
lean_dec(v_a_586_);
v___y_544_ = v___y_579_;
v___y_545_ = v_a_583_;
v___y_546_ = v___y_582_;
v___y_547_ = v___x_588_;
goto v___jp_543_;
}
else
{
uint8_t v___x_590_; 
v___x_590_ = lean_nat_dec_le(v___x_587_, v___x_587_);
if (v___x_590_ == 0)
{
if (v___x_589_ == 0)
{
lean_dec(v_a_586_);
v___y_544_ = v___y_579_;
v___y_545_ = v_a_583_;
v___y_546_ = v___y_582_;
v___y_547_ = v___x_588_;
goto v___jp_543_;
}
else
{
size_t v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_usize_of_nat(v___x_587_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_583_, v_a_586_, v___y_578_, v___x_591_, v___x_588_);
lean_dec(v_a_586_);
v___y_544_ = v___y_579_;
v___y_545_ = v_a_583_;
v___y_546_ = v___y_582_;
v___y_547_ = v___x_592_;
goto v___jp_543_;
}
}
else
{
size_t v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_usize_of_nat(v___x_587_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_583_, v_a_586_, v___y_578_, v___x_593_, v___x_588_);
lean_dec(v_a_586_);
v___y_544_ = v___y_579_;
v___y_545_ = v_a_583_;
v___y_546_ = v___y_582_;
v___y_547_ = v___x_594_;
goto v___jp_543_;
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec_ref(v_a_583_);
lean_dec_ref(v___y_582_);
lean_dec_ref(v___y_579_);
v_a_595_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_585_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_585_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec_ref(v_a_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v_heq_515_);
v_a_603_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_584_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_584_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
v___jp_611_:
{
if (lean_obj_tag(v___y_620_) == 0)
{
lean_object* v_a_621_; 
v_a_621_ = lean_ctor_get(v___y_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___y_620_, 1);
v___y_575_ = v___y_613_;
v___y_576_ = v___y_612_;
v___y_577_ = v___y_614_;
v___y_578_ = v___y_615_;
v___y_579_ = v___y_616_;
v___y_580_ = v___y_617_;
v___y_581_ = v___y_618_;
v___y_582_ = v___y_619_;
v_a_583_ = v_a_621_;
goto v___jp_574_;
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
lean_dec_ref(v___y_619_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v_fst_569_);
lean_dec(v_fst_565_);
lean_dec_ref(v_heq_515_);
lean_dec(v_mvarId_513_);
v_a_622_ = lean_ctor_get(v___y_620_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___y_620_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___y_620_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___y_620_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
v___jp_630_:
{
uint8_t v___x_638_; lean_object* v___x_639_; 
v___x_638_ = 0;
lean_inc(v_fst_569_);
lean_inc(v_mvarId_513_);
v___x_639_ = l_Lean_Meta_postprocessAppMVars(v___x_514_, v_mvarId_513_, v_fst_565_, v_fst_569_, v___y_637_, v___x_638_, v___y_632_, v___y_631_, v___y_633_, v___y_635_);
if (lean_obj_tag(v___x_639_) == 0)
{
size_t v_sz_640_; size_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
lean_dec_ref_known(v___x_639_, 1);
v_sz_640_ = lean_array_size(v_fst_565_);
v___x_641_ = ((size_t)0ULL);
v___x_642_ = l_unsafeCast___redArg(v_fst_565_);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(v_sz_640_, v___x_641_, v___x_642_);
v___x_644_ = l_unsafeCast___redArg(v___x_643_);
lean_dec_ref(v___x_643_);
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = lean_array_get_size(v___x_644_);
v___x_647_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__4));
v___x_648_ = lean_nat_dec_lt(v___x_645_, v___x_646_);
if (v___x_648_ == 0)
{
lean_dec(v___x_644_);
v___y_575_ = v___y_631_;
v___y_576_ = v___y_632_;
v___y_577_ = v___y_633_;
v___y_578_ = v___x_641_;
v___y_579_ = v___y_634_;
v___y_580_ = v___y_635_;
v___y_581_ = v___x_645_;
v___y_582_ = v___y_636_;
v_a_583_ = v___x_647_;
goto v___jp_574_;
}
else
{
uint8_t v___x_649_; 
v___x_649_ = lean_nat_dec_le(v___x_646_, v___x_646_);
if (v___x_649_ == 0)
{
if (v___x_648_ == 0)
{
lean_dec(v___x_644_);
v___y_575_ = v___y_631_;
v___y_576_ = v___y_632_;
v___y_577_ = v___y_633_;
v___y_578_ = v___x_641_;
v___y_579_ = v___y_634_;
v___y_580_ = v___y_635_;
v___y_581_ = v___x_645_;
v___y_582_ = v___y_636_;
v_a_583_ = v___x_647_;
goto v___jp_574_;
}
else
{
size_t v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_usize_of_nat(v___x_646_);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v___x_644_, v___x_641_, v___x_650_, v___x_647_, v___y_632_, v___y_631_, v___y_633_, v___y_635_);
lean_dec(v___x_644_);
v___y_612_ = v___y_632_;
v___y_613_ = v___y_631_;
v___y_614_ = v___y_633_;
v___y_615_ = v___x_641_;
v___y_616_ = v___y_634_;
v___y_617_ = v___y_635_;
v___y_618_ = v___x_645_;
v___y_619_ = v___y_636_;
v___y_620_ = v___x_651_;
goto v___jp_611_;
}
}
else
{
size_t v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_usize_of_nat(v___x_646_);
v___x_653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v___x_644_, v___x_641_, v___x_652_, v___x_647_, v___y_632_, v___y_631_, v___y_633_, v___y_635_);
lean_dec(v___x_644_);
v___y_612_ = v___y_632_;
v___y_613_ = v___y_631_;
v___y_614_ = v___y_633_;
v___y_615_ = v___x_641_;
v___y_616_ = v___y_634_;
v___y_617_ = v___y_635_;
v___y_618_ = v___x_645_;
v___y_619_ = v___y_636_;
v___y_620_ = v___x_653_;
goto v___jp_611_;
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec(v_fst_569_);
lean_dec(v_fst_565_);
lean_dec_ref(v_heq_515_);
lean_dec(v_mvarId_513_);
v_a_654_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_639_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_639_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
v___jp_662_:
{
lean_object* v___x_674_; 
lean_inc_ref(v___y_669_);
v___x_674_ = l_Lean_Meta_getLevel(v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_676_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_674_, 1);
lean_inc_ref(v___y_665_);
v___x_676_ = l_Lean_Meta_getLevel(v___y_665_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_toCold_677_; lean_object* v_a_678_; lean_object* v_options_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v_toCold_677_ = lean_ctor_get(v___y_672_, 0);
v_a_678_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_678_);
lean_dec_ref_known(v___x_676_, 1);
v_options_679_ = lean_ctor_get(v_toCold_677_, 2);
v___x_680_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__6));
v___x_681_ = lean_box(0);
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 1);
lean_ctor_set(v___x_572_, 1, v___x_681_);
lean_ctor_set(v___x_572_, 0, v_a_678_);
v___x_683_ = v___x_572_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_678_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v___x_681_);
v___x_683_ = v_reuseFailAlloc_693_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_685_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 1);
lean_ctor_set(v___x_567_, 1, v___x_683_);
lean_ctor_set(v___x_567_, 0, v_a_675_);
v___x_685_ = v___x_567_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_675_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_683_);
v___x_685_ = v_reuseFailAlloc_692_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_686_ = l_Lean_Expr_const___override(v___x_680_, v___x_685_);
v___x_687_ = l_Lean_mkApp6(v___x_686_, v___y_669_, v___y_665_, v___y_666_, v___y_663_, v___y_667_, v___y_668_);
v___x_688_ = l_Lean_Meta_tactic_skipAssignedInstances;
v___x_689_ = l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(v_options_679_, v___x_688_);
if (v___x_689_ == 0)
{
uint8_t v___x_690_; 
v___x_690_ = 1;
v___y_631_ = v___y_671_;
v___y_632_ = v___y_670_;
v___y_633_ = v___y_672_;
v___y_634_ = v___y_664_;
v___y_635_ = v___y_673_;
v___y_636_ = v___x_687_;
v___y_637_ = v___x_690_;
goto v___jp_630_;
}
else
{
uint8_t v___x_691_; 
v___x_691_ = 0;
v___y_631_ = v___y_671_;
v___y_632_ = v___y_670_;
v___y_633_ = v___y_672_;
v___y_634_ = v___y_664_;
v___y_635_ = v___y_673_;
v___y_636_ = v___x_687_;
v___y_637_ = v___x_691_;
goto v___jp_630_;
}
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
lean_dec(v_a_675_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec_ref(v___y_663_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_694_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_676_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_676_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec_ref(v___y_663_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_702_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_674_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_674_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
v___jp_710_:
{
if (lean_obj_tag(v___y_725_) == 0)
{
lean_object* v___x_726_; 
lean_dec_ref_known(v___y_725_, 1);
lean_inc_ref(v___y_716_);
v___x_726_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v___y_724_, v___y_716_, v___y_718_, v___y_714_, v___y_720_, v___y_711_, v___y_719_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; uint8_t v___x_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_unbox(v_a_727_);
lean_dec(v_a_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_729_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__8, &l_Lean_MVarId_rewrite___lam__1___closed__8_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__8);
lean_inc_ref(v___y_715_);
v___x_730_ = l_Lean_MessageData_ofExpr(v___y_715_);
v___x_731_ = l_Lean_indentD(v___x_730_);
v___x_732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_729_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__10, &l_Lean_MVarId_rewrite___lam__1___closed__10_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__10);
v___x_734_ = l_Lean_indentExpr(v___y_722_);
v___x_735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__12, &l_Lean_MVarId_rewrite___lam__1___closed__12_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__12);
v___x_737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_735_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
lean_inc_ref(v___y_713_);
v___x_738_ = l_Lean_indentExpr(v___y_713_);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = l_Lean_MessageData_note(v___x_739_);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_732_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
if (v_isShared_559_ == 0)
{
lean_ctor_set_tag(v___x_558_, 1);
lean_ctor_set(v___x_558_, 0, v___x_741_);
v___x_743_ = v___x_558_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_753_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_744_; 
lean_inc(v_mvarId_513_);
lean_inc(v___x_514_);
v___x_744_ = l_Lean_Meta_throwTacticEx___redArg(v___x_514_, v_mvarId_513_, v___x_743_, v___y_714_, v___y_720_, v___y_711_, v___y_719_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_dec_ref_known(v___x_744_, 1);
v___y_663_ = v___y_717_;
v___y_664_ = v___y_721_;
v___y_665_ = v___y_712_;
v___y_666_ = v___y_713_;
v___y_667_ = v___y_715_;
v___y_668_ = v___y_723_;
v___y_669_ = v___y_716_;
v___y_670_ = v___y_714_;
v___y_671_ = v___y_720_;
v___y_672_ = v___y_711_;
v___y_673_ = v___y_719_;
goto v___jp_662_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_711_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_722_);
lean_del_object(v___x_558_);
v___y_663_ = v___y_717_;
v___y_664_ = v___y_721_;
v___y_665_ = v___y_712_;
v___y_666_ = v___y_713_;
v___y_667_ = v___y_715_;
v___y_668_ = v___y_723_;
v___y_669_ = v___y_716_;
v___y_670_ = v___y_714_;
v___y_671_ = v___y_720_;
v___y_672_ = v___y_711_;
v___y_673_ = v___y_719_;
goto v___jp_662_;
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_711_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_754_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_726_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_726_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec_ref(v___y_711_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_762_ = lean_ctor_get(v___y_725_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___y_725_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___y_725_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___y_725_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
v___jp_770_:
{
if (v___y_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec_ref(v___y_774_);
v___x_788_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__14, &l_Lean_MVarId_rewrite___lam__1___closed__14_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__14);
lean_inc_ref(v___y_776_);
v___x_789_ = l_Lean_MessageData_ofExpr(v___y_776_);
v___x_790_ = l_Lean_indentD(v___x_789_);
v___x_791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_788_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
v___x_792_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__16, &l_Lean_MVarId_rewrite___lam__1___closed__16_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__16);
v___x_793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_791_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
v___x_794_ = l_Lean_Exception_toMessageData(v___y_781_);
v___x_795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_793_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__18, &l_Lean_MVarId_rewrite___lam__1___closed__18_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__18);
v___x_797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__6));
v___x_799_ = l_Lean_MessageData_ofConstName(v___x_798_, v___y_787_);
v___x_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_797_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__20, &l_Lean_MVarId_rewrite___lam__1___closed__20_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__20);
v___x_802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__23));
v___x_804_ = l_Lean_MessageData_ofConstName(v___x_803_, v___y_787_);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_802_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__25, &l_Lean_MVarId_rewrite___lam__1___closed__25_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__25);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__27));
v___x_809_ = l_Lean_MessageData_ofConstName(v___x_808_, v___y_787_);
v___x_810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_807_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__29, &l_Lean_MVarId_rewrite___lam__1___closed__29_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__29);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_inc(v_mvarId_513_);
lean_inc(v___x_514_);
v___x_814_ = l_Lean_Meta_throwTacticEx___redArg(v___x_514_, v_mvarId_513_, v___x_813_, v___y_775_, v___y_782_, v___y_771_, v___y_779_);
v___y_711_ = v___y_771_;
v___y_712_ = v___y_772_;
v___y_713_ = v___y_773_;
v___y_714_ = v___y_775_;
v___y_715_ = v___y_776_;
v___y_716_ = v___y_777_;
v___y_717_ = v___y_778_;
v___y_718_ = v___y_780_;
v___y_719_ = v___y_779_;
v___y_720_ = v___y_782_;
v___y_721_ = v___y_783_;
v___y_722_ = v___y_784_;
v___y_723_ = v___y_786_;
v___y_724_ = v___y_785_;
v___y_725_ = v___x_814_;
goto v___jp_710_;
}
else
{
lean_dec_ref(v___y_781_);
v___y_711_ = v___y_771_;
v___y_712_ = v___y_772_;
v___y_713_ = v___y_773_;
v___y_714_ = v___y_775_;
v___y_715_ = v___y_776_;
v___y_716_ = v___y_777_;
v___y_717_ = v___y_778_;
v___y_718_ = v___y_780_;
v___y_719_ = v___y_779_;
v___y_720_ = v___y_782_;
v___y_721_ = v___y_783_;
v___y_722_ = v___y_784_;
v___y_723_ = v___y_786_;
v___y_724_ = v___y_785_;
v___y_725_ = v___y_774_;
goto v___jp_710_;
}
}
v___jp_815_:
{
lean_object* v___x_828_; 
lean_inc(v___y_827_);
lean_inc_ref(v___y_826_);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc_ref(v___y_820_);
v___x_828_ = lean_infer_type(v___y_820_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___f_830_; lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; lean_object* v___x_835_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc_n(v_a_829_, 2);
lean_dec_ref_known(v___x_828_, 1);
v___f_830_ = lean_alloc_closure((void*)(l_Lean_MVarId_rewrite___lam__0___boxed), 8, 2);
lean_closure_set(v___f_830_, 0, v___y_816_);
lean_closure_set(v___f_830_, 1, v_a_829_);
v___x_831_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__31));
v___x_832_ = 0;
lean_inc_ref(v___y_822_);
v___x_833_ = l_Lean_mkLambda(v___x_831_, v___x_832_, v___y_822_, v___y_818_);
v___x_834_ = 0;
lean_inc_ref(v___x_833_);
v___x_835_ = l_Lean_Meta_check(v___x_833_, v___x_834_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_835_) == 0)
{
v___y_711_ = v___y_826_;
v___y_712_ = v_a_829_;
v___y_713_ = v___y_819_;
v___y_714_ = v___y_824_;
v___y_715_ = v___x_833_;
v___y_716_ = v___y_822_;
v___y_717_ = v___y_817_;
v___y_718_ = v___f_830_;
v___y_719_ = v___y_827_;
v___y_720_ = v___y_825_;
v___y_721_ = v_eNew_823_;
v___y_722_ = v___y_820_;
v___y_723_ = v___y_821_;
v___y_724_ = v___x_831_;
v___y_725_ = v___x_835_;
goto v___jp_710_;
}
else
{
lean_object* v_a_836_; uint8_t v___x_837_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
v___x_837_ = l_Lean_Exception_isInterrupt(v_a_836_);
if (v___x_837_ == 0)
{
uint8_t v___x_838_; 
lean_inc(v_a_836_);
v___x_838_ = l_Lean_Exception_isRuntime(v_a_836_);
v___y_771_ = v___y_826_;
v___y_772_ = v_a_829_;
v___y_773_ = v___y_819_;
v___y_774_ = v___x_835_;
v___y_775_ = v___y_824_;
v___y_776_ = v___x_833_;
v___y_777_ = v___y_822_;
v___y_778_ = v___y_817_;
v___y_779_ = v___y_827_;
v___y_780_ = v___f_830_;
v___y_781_ = v_a_836_;
v___y_782_ = v___y_825_;
v___y_783_ = v_eNew_823_;
v___y_784_ = v___y_820_;
v___y_785_ = v___x_831_;
v___y_786_ = v___y_821_;
v___y_787_ = v___x_838_;
goto v___jp_770_;
}
else
{
v___y_771_ = v___y_826_;
v___y_772_ = v_a_829_;
v___y_773_ = v___y_819_;
v___y_774_ = v___x_835_;
v___y_775_ = v___y_824_;
v___y_776_ = v___x_833_;
v___y_777_ = v___y_822_;
v___y_778_ = v___y_817_;
v___y_779_ = v___y_827_;
v___y_780_ = v___f_830_;
v___y_781_ = v_a_836_;
v___y_782_ = v___y_825_;
v___y_783_ = v_eNew_823_;
v___y_784_ = v___y_820_;
v___y_785_ = v___x_831_;
v___y_786_ = v___y_821_;
v___y_787_ = v___x_837_;
goto v___jp_770_;
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v_eNew_823_);
lean_dec_ref(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v___y_816_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_839_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_828_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_828_);
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
v___jp_847_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v_a_860_; uint8_t v___x_861_; 
v___x_858_ = lean_expr_instantiate1(v___y_848_, v___y_849_);
v___x_859_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v___x_858_, v___y_855_);
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref(v___x_859_);
v___x_861_ = l_Lean_Expr_hasBinderNameHint(v___y_849_);
if (v___x_861_ == 0)
{
lean_inc_ref(v___y_848_);
v___y_816_ = v___y_848_;
v___y_817_ = v___y_849_;
v___y_818_ = v___y_848_;
v___y_819_ = v___y_850_;
v___y_820_ = v___y_851_;
v___y_821_ = v___y_853_;
v___y_822_ = v___y_852_;
v_eNew_823_ = v_a_860_;
v___y_824_ = v___y_854_;
v___y_825_ = v___y_855_;
v___y_826_ = v___y_856_;
v___y_827_ = v___y_857_;
goto v___jp_815_;
}
else
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_Expr_resolveBinderNameHint(v_a_860_, v___y_856_, v___y_857_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
lean_inc_ref(v___y_848_);
v___y_816_ = v___y_848_;
v___y_817_ = v___y_849_;
v___y_818_ = v___y_848_;
v___y_819_ = v___y_850_;
v___y_820_ = v___y_851_;
v___y_821_ = v___y_853_;
v___y_822_ = v___y_852_;
v_eNew_823_ = v_a_863_;
v___y_824_ = v___y_854_;
v___y_825_ = v___y_855_;
v___y_826_ = v___y_856_;
v___y_827_ = v___y_857_;
goto v___jp_815_;
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec_ref(v___y_848_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_864_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_862_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_862_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
v___jp_872_:
{
lean_object* v___x_881_; lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_976_; 
v___x_881_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_516_, v___y_878_);
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_976_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_976_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_976_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
uint8_t v_transparency_886_; uint8_t v_offsetCnstrs_887_; lean_object* v_occs_888_; lean_object* v___x_889_; uint8_t v_foApprox_890_; uint8_t v_ctxApprox_891_; uint8_t v_quasiPatternApprox_892_; uint8_t v_constApprox_893_; uint8_t v_isDefEqStuckEx_894_; uint8_t v_unificationHints_895_; uint8_t v_proofIrrelevance_896_; uint8_t v_assignSyntheticOpaque_897_; uint8_t v_etaStruct_898_; uint8_t v_univApprox_899_; uint8_t v_iota_900_; uint8_t v_beta_901_; uint8_t v_proj_902_; uint8_t v_zeta_903_; uint8_t v_zetaDelta_904_; uint8_t v_zetaUnused_905_; uint8_t v_zetaHave_906_; uint8_t v_canUnfoldPredicateConfig_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_975_; 
v_transparency_886_ = lean_ctor_get_uint8(v_config_517_, sizeof(void*)*1);
v_offsetCnstrs_887_ = lean_ctor_get_uint8(v_config_517_, sizeof(void*)*1 + 1);
v_occs_888_ = lean_ctor_get(v_config_517_, 0);
lean_inc(v_occs_888_);
lean_dec_ref(v_config_517_);
v___x_889_ = l_Lean_Meta_Context_config(v___y_877_);
v_foApprox_890_ = lean_ctor_get_uint8(v___x_889_, 0);
v_ctxApprox_891_ = lean_ctor_get_uint8(v___x_889_, 1);
v_quasiPatternApprox_892_ = lean_ctor_get_uint8(v___x_889_, 2);
v_constApprox_893_ = lean_ctor_get_uint8(v___x_889_, 3);
v_isDefEqStuckEx_894_ = lean_ctor_get_uint8(v___x_889_, 4);
v_unificationHints_895_ = lean_ctor_get_uint8(v___x_889_, 5);
v_proofIrrelevance_896_ = lean_ctor_get_uint8(v___x_889_, 6);
v_assignSyntheticOpaque_897_ = lean_ctor_get_uint8(v___x_889_, 7);
v_etaStruct_898_ = lean_ctor_get_uint8(v___x_889_, 10);
v_univApprox_899_ = lean_ctor_get_uint8(v___x_889_, 11);
v_iota_900_ = lean_ctor_get_uint8(v___x_889_, 12);
v_beta_901_ = lean_ctor_get_uint8(v___x_889_, 13);
v_proj_902_ = lean_ctor_get_uint8(v___x_889_, 14);
v_zeta_903_ = lean_ctor_get_uint8(v___x_889_, 15);
v_zetaDelta_904_ = lean_ctor_get_uint8(v___x_889_, 16);
v_zetaUnused_905_ = lean_ctor_get_uint8(v___x_889_, 17);
v_zetaHave_906_ = lean_ctor_get_uint8(v___x_889_, 18);
v_canUnfoldPredicateConfig_907_ = lean_ctor_get_uint8(v___x_889_, 19);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_975_ == 0)
{
v___x_909_ = v___x_889_;
v_isShared_910_ = v_isSharedCheck_975_;
goto v_resetjp_908_;
}
else
{
lean_dec(v___x_889_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_975_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
uint8_t v_trackZetaDelta_911_; lean_object* v_zetaDeltaSet_912_; lean_object* v_lctx_913_; lean_object* v_localInstances_914_; lean_object* v_defEqCtx_x3f_915_; lean_object* v_synthPendingDepth_916_; lean_object* v_customCanUnfoldPredicate_x3f_917_; uint8_t v_univApprox_918_; uint8_t v_inTypeClassResolution_919_; uint8_t v_cacheInferType_920_; lean_object* v___x_922_; 
v_trackZetaDelta_911_ = lean_ctor_get_uint8(v___y_877_, sizeof(void*)*7);
v_zetaDeltaSet_912_ = lean_ctor_get(v___y_877_, 1);
v_lctx_913_ = lean_ctor_get(v___y_877_, 2);
v_localInstances_914_ = lean_ctor_get(v___y_877_, 3);
v_defEqCtx_x3f_915_ = lean_ctor_get(v___y_877_, 4);
v_synthPendingDepth_916_ = lean_ctor_get(v___y_877_, 5);
v_customCanUnfoldPredicate_x3f_917_ = lean_ctor_get(v___y_877_, 6);
v_univApprox_918_ = lean_ctor_get_uint8(v___y_877_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_919_ = lean_ctor_get_uint8(v___y_877_, sizeof(void*)*7 + 2);
v_cacheInferType_920_ = lean_ctor_get_uint8(v___y_877_, sizeof(void*)*7 + 3);
if (v_isShared_910_ == 0)
{
v___x_922_ = v___x_909_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 0, v_foApprox_890_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 1, v_ctxApprox_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 2, v_quasiPatternApprox_892_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 3, v_constApprox_893_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 4, v_isDefEqStuckEx_894_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 5, v_unificationHints_895_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 6, v_proofIrrelevance_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 7, v_assignSyntheticOpaque_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 10, v_etaStruct_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 11, v_univApprox_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 12, v_iota_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 13, v_beta_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 14, v_proj_902_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 15, v_zeta_903_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 16, v_zetaDelta_904_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 17, v_zetaUnused_905_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 18, v_zetaHave_906_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, 19, v_canUnfoldPredicateConfig_907_);
v___x_922_ = v_reuseFailAlloc_974_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
uint64_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_ctor_set_uint8(v___x_922_, 8, v_offsetCnstrs_887_);
lean_ctor_set_uint8(v___x_922_, 9, v_transparency_886_);
v___x_923_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_922_);
v___x_924_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set_uint64(v___x_924_, sizeof(void*)*1, v___x_923_);
lean_inc(v_customCanUnfoldPredicate_x3f_917_);
lean_inc(v_synthPendingDepth_916_);
lean_inc(v_defEqCtx_x3f_915_);
lean_inc_ref(v_localInstances_914_);
lean_inc_ref(v_lctx_913_);
lean_inc(v_zetaDeltaSet_912_);
v___x_925_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v_zetaDeltaSet_912_);
lean_ctor_set(v___x_925_, 2, v_lctx_913_);
lean_ctor_set(v___x_925_, 3, v_localInstances_914_);
lean_ctor_set(v___x_925_, 4, v_defEqCtx_x3f_915_);
lean_ctor_set(v___x_925_, 5, v_synthPendingDepth_916_);
lean_ctor_set(v___x_925_, 6, v_customCanUnfoldPredicate_x3f_917_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*7, v_trackZetaDelta_911_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*7 + 1, v_univApprox_918_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*7 + 2, v_inTypeClassResolution_919_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*7 + 3, v_cacheInferType_920_);
lean_inc_ref(v___y_874_);
lean_inc(v_a_882_);
v___x_926_ = l_Lean_Meta_kabstract(v_a_882_, v___y_874_, v_occs_888_, v___x_925_, v___y_878_, v___y_879_, v___y_880_);
lean_dec_ref_known(v___x_925_, 7);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; uint8_t v___x_928_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
v___x_928_ = l_Lean_Expr_hasLooseBVars(v_a_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; 
lean_inc_ref(v___y_874_);
lean_inc(v_a_882_);
v___x_929_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_882_, v___y_874_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v_fst_931_; lean_object* v_snd_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_957_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_929_, 1);
v_fst_931_ = lean_ctor_get(v_a_930_, 0);
v_snd_932_ = lean_ctor_get(v_a_930_, 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v_a_930_);
if (v_isSharedCheck_957_ == 0)
{
v___x_934_ = v_a_930_;
v_isShared_935_ = v_isSharedCheck_957_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_snd_932_);
lean_inc(v_fst_931_);
lean_dec(v_a_930_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_957_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_936_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__33, &l_Lean_MVarId_rewrite___lam__1___closed__33_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__33);
v___x_937_ = l_Lean_indentExpr(v_snd_932_);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 7);
lean_ctor_set(v___x_934_, 1, v___x_937_);
lean_ctor_set(v___x_934_, 0, v___x_936_);
v___x_939_ = v___x_934_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_936_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v___x_937_);
v___x_939_ = v_reuseFailAlloc_956_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_940_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__35, &l_Lean_MVarId_rewrite___lam__1___closed__35_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__35);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_indentExpr(v_fst_931_);
v___x_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
if (v_isShared_885_ == 0)
{
lean_ctor_set_tag(v___x_884_, 1);
lean_ctor_set(v___x_884_, 0, v___x_943_);
v___x_945_ = v___x_884_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_955_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; 
lean_inc(v_mvarId_513_);
lean_inc(v___x_514_);
v___x_946_ = l_Lean_Meta_throwTacticEx___redArg(v___x_514_, v_mvarId_513_, v___x_945_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_dec_ref_known(v___x_946_, 1);
v___y_848_ = v_a_927_;
v___y_849_ = v___y_873_;
v___y_850_ = v___y_874_;
v___y_851_ = v_a_882_;
v___y_852_ = v___y_875_;
v___y_853_ = v___y_876_;
v___y_854_ = v___y_877_;
v___y_855_ = v___y_878_;
v___y_856_ = v___y_879_;
v___y_857_ = v___y_880_;
goto v___jp_847_;
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec(v_a_927_);
lean_dec(v_a_882_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec_ref(v___y_873_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_a_927_);
lean_del_object(v___x_884_);
lean_dec(v_a_882_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec_ref(v___y_873_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_958_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_929_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_929_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
else
{
lean_del_object(v___x_884_);
v___y_848_ = v_a_927_;
v___y_849_ = v___y_873_;
v___y_850_ = v___y_874_;
v___y_851_ = v_a_882_;
v___y_852_ = v___y_875_;
v___y_853_ = v___y_876_;
v___y_854_ = v___y_877_;
v___y_855_ = v___y_878_;
v___y_856_ = v___y_879_;
v___y_857_ = v___y_880_;
goto v___jp_847_;
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_del_object(v___x_884_);
lean_dec(v_a_882_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec_ref(v___y_873_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_966_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_926_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_926_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
}
}
v___jp_977_:
{
lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_987_ = l_Lean_Expr_getAppFn(v_lhs_981_);
v___x_988_ = l_Lean_Expr_isMVar(v___x_987_);
lean_dec_ref(v___x_987_);
if (v___x_988_ == 0)
{
lean_dec_ref(v_heqType_980_);
v___y_873_ = v_rhs_982_;
v___y_874_ = v_lhs_981_;
v___y_875_ = v___y_978_;
v___y_876_ = v_heq_979_;
v___y_877_ = v___y_983_;
v___y_878_ = v___y_984_;
v___y_879_ = v___y_985_;
v___y_880_ = v___y_986_;
goto v___jp_872_;
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref(v_rhs_982_);
lean_dec_ref(v_heq_979_);
lean_dec_ref(v___y_978_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v___x_989_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__37, &l_Lean_MVarId_rewrite___lam__1___closed__37_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__37);
v___x_990_ = l_Lean_MessageData_ofExpr(v_lhs_981_);
v___x_991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__39, &l_Lean_MVarId_rewrite___lam__1___closed__39_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__39);
v___x_993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = l_Lean_indentExpr(v_heqType_980_);
v___x_995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v___x_995_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
v___jp_1005_:
{
lean_object* v___x_1012_; 
lean_inc_ref(v_heqType_1007_);
v___x_1012_ = l_Lean_Meta_matchEq_x3f(v_heqType_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
if (lean_obj_tag(v_a_1013_) == 0)
{
lean_object* v___x_1014_; 
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
lean_inc_ref(v_heqType_1007_);
v___x_1014_ = l_Lean_Meta_isProp(v_heqType_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; uint8_t v___x_1016_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref_known(v___x_1014_, 1);
v___x_1016_ = lean_unbox(v_a_1015_);
lean_dec(v_a_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
v___x_1017_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__40));
v___y_525_ = v_heq_1006_;
v___y_526_ = v_heqType_1007_;
v___y_527_ = v___y_1010_;
v___y_528_ = v___y_1011_;
v___y_529_ = v___y_1008_;
v___y_530_ = v___y_1009_;
v___y_531_ = v___x_1017_;
goto v___jp_524_;
}
else
{
lean_object* v___x_1018_; 
v___x_1018_ = ((lean_object*)(l_Lean_MVarId_rewrite___lam__1___closed__41));
v___y_525_ = v_heq_1006_;
v___y_526_ = v_heqType_1007_;
v___y_527_ = v___y_1010_;
v___y_528_ = v___y_1011_;
v___y_529_ = v___y_1008_;
v___y_530_ = v___y_1009_;
v___y_531_ = v___x_1018_;
goto v___jp_524_;
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec_ref(v_heqType_1007_);
lean_dec_ref(v_heq_1006_);
v_a_1019_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1014_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1014_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_val_1027_; lean_object* v_snd_1028_; 
v_val_1027_ = lean_ctor_get(v_a_1013_, 0);
lean_inc(v_val_1027_);
lean_dec_ref_known(v_a_1013_, 1);
v_snd_1028_ = lean_ctor_get(v_val_1027_, 1);
lean_inc(v_snd_1028_);
if (v_symm_518_ == 0)
{
lean_object* v_fst_1029_; lean_object* v_fst_1030_; lean_object* v_snd_1031_; 
v_fst_1029_ = lean_ctor_get(v_val_1027_, 0);
lean_inc(v_fst_1029_);
lean_dec(v_val_1027_);
v_fst_1030_ = lean_ctor_get(v_snd_1028_, 0);
lean_inc(v_fst_1030_);
v_snd_1031_ = lean_ctor_get(v_snd_1028_, 1);
lean_inc(v_snd_1031_);
lean_dec(v_snd_1028_);
v___y_978_ = v_fst_1029_;
v_heq_979_ = v_heq_1006_;
v_heqType_980_ = v_heqType_1007_;
v_lhs_981_ = v_fst_1030_;
v_rhs_982_ = v_snd_1031_;
v___y_983_ = v___y_1008_;
v___y_984_ = v___y_1009_;
v___y_985_ = v___y_1010_;
v___y_986_ = v___y_1011_;
goto v___jp_977_;
}
else
{
lean_object* v_fst_1032_; lean_object* v_fst_1033_; lean_object* v_snd_1034_; lean_object* v___x_1035_; 
lean_dec_ref(v_heqType_1007_);
v_fst_1032_ = lean_ctor_get(v_val_1027_, 0);
lean_inc(v_fst_1032_);
lean_dec(v_val_1027_);
v_fst_1033_ = lean_ctor_get(v_snd_1028_, 0);
lean_inc(v_fst_1033_);
v_snd_1034_ = lean_ctor_get(v_snd_1028_, 1);
lean_inc(v_snd_1034_);
lean_dec(v_snd_1028_);
v___x_1035_ = l_Lean_Meta_mkEqSymm(v_heq_1006_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
lean_inc(v_fst_1033_);
lean_inc(v_snd_1034_);
v___x_1037_ = l_Lean_Meta_mkEq(v_snd_1034_, v_fst_1033_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___y_978_ = v_fst_1032_;
v_heq_979_ = v_a_1036_;
v_heqType_980_ = v_a_1038_;
v_lhs_981_ = v_snd_1034_;
v_rhs_982_ = v_fst_1033_;
v___y_983_ = v___y_1008_;
v___y_984_ = v___y_1009_;
v___y_985_ = v___y_1010_;
v___y_986_ = v___y_1011_;
goto v___jp_977_;
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_a_1036_);
lean_dec(v_snd_1034_);
lean_dec(v_fst_1033_);
lean_dec(v_fst_1032_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1039_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1037_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1037_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec(v_snd_1034_);
lean_dec(v_fst_1033_);
lean_dec(v_fst_1032_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1047_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1035_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1035_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec_ref(v_heqType_1007_);
lean_dec_ref(v_heq_1006_);
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
lean_del_object(v___x_567_);
lean_dec(v_fst_565_);
lean_del_object(v___x_558_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1055_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1012_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1012_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_del_object(v___x_558_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1084_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_562_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_562_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1093_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_553_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_553_);
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
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v_config_517_);
lean_dec_ref(v_e_516_);
lean_dec_ref(v_heq_515_);
lean_dec(v___x_514_);
lean_dec(v_mvarId_513_);
v_a_1101_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_552_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_552_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
v___jp_524_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_532_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__1, &l_Lean_MVarId_rewrite___lam__1___closed__1_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__1);
v___x_533_ = lean_unsigned_to_nat(30u);
v___x_534_ = l_Lean_inlineExpr(v___y_525_, v___x_533_);
v___x_535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_532_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__3, &l_Lean_MVarId_rewrite___lam__1___closed__3_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__3);
v___x_537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
lean_inc_ref(v___y_531_);
v___x_538_ = l_Lean_stringToMessageData(v___y_531_);
v___x_539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = l_Lean_indentExpr(v___y_526_);
v___x_541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v___x_541_, v___y_529_, v___y_530_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v___x_542_;
}
v___jp_543_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = l_Array_append___redArg(v___y_545_, v___y_547_);
lean_dec_ref(v___y_547_);
v___x_549_ = lean_array_to_list(v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_550_, 0, v___y_544_);
lean_ctor_set(v___x_550_, 1, v___y_546_);
lean_ctor_set(v___x_550_, 2, v___x_549_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1___boxed(lean_object* v_mvarId_1109_, lean_object* v___x_1110_, lean_object* v_heq_1111_, lean_object* v_e_1112_, lean_object* v_config_1113_, lean_object* v_symm_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_symm_boxed_1120_; lean_object* v_res_1121_; 
v_symm_boxed_1120_ = lean_unbox(v_symm_1114_);
v_res_1121_ = l_Lean_MVarId_rewrite___lam__1(v_mvarId_1109_, v___x_1110_, v_heq_1111_, v_e_1112_, v_config_1113_, v_symm_boxed_1120_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite(lean_object* v_mvarId_1125_, lean_object* v_e_1126_, lean_object* v_heq_1127_, uint8_t v_symm_1128_, lean_object* v_config_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; 
v___x_1135_ = ((lean_object*)(l_Lean_MVarId_rewrite___closed__1));
v___x_1136_ = lean_box(v_symm_1128_);
lean_inc(v_mvarId_1125_);
v___f_1137_ = lean_alloc_closure((void*)(l_Lean_MVarId_rewrite___lam__1___boxed), 11, 6);
lean_closure_set(v___f_1137_, 0, v_mvarId_1125_);
lean_closure_set(v___f_1137_, 1, v___x_1135_);
lean_closure_set(v___f_1137_, 2, v_heq_1127_);
lean_closure_set(v___f_1137_, 3, v_e_1126_);
lean_closure_set(v___f_1137_, 4, v_config_1129_);
lean_closure_set(v___f_1137_, 5, v___x_1136_);
v___x_1138_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_1125_, v___f_1137_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___boxed(lean_object* v_mvarId_1139_, lean_object* v_e_1140_, lean_object* v_heq_1141_, lean_object* v_symm_1142_, lean_object* v_config_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
uint8_t v_symm_boxed_1149_; lean_object* v_res_1150_; 
v_symm_boxed_1149_ = lean_unbox(v_symm_1142_);
v_res_1150_ = l_Lean_MVarId_rewrite(v_mvarId_1139_, v_e_1140_, v_heq_1141_, v_symm_boxed_1149_, v_config_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
lean_dec(v_a_1147_);
lean_dec_ref(v_a_1146_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(lean_object* v_mvarId_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v_mvarId_1151_, v___y_1153_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___boxed(lean_object* v_mvarId_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(v_mvarId_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v_mvarId_1158_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(lean_object* v_00_u03b1_1165_, lean_object* v_msg_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v_msg_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___boxed(lean_object* v_00_u03b1_1173_, lean_object* v_msg_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(v_00_u03b1_1173_, v_msg_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(lean_object* v_00_u03b1_1181_, lean_object* v_name_1182_, uint8_t v_bi_1183_, lean_object* v_type_1184_, lean_object* v_k_1185_, uint8_t v_kind_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_1182_, v_bi_1183_, v_type_1184_, v_k_1185_, v_kind_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___boxed(lean_object* v_00_u03b1_1193_, lean_object* v_name_1194_, lean_object* v_bi_1195_, lean_object* v_type_1196_, lean_object* v_k_1197_, lean_object* v_kind_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
uint8_t v_bi_boxed_1204_; uint8_t v_kind_boxed_1205_; lean_object* v_res_1206_; 
v_bi_boxed_1204_ = lean_unbox(v_bi_1195_);
v_kind_boxed_1205_ = lean_unbox(v_kind_1198_);
v_res_1206_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(v_00_u03b1_1193_, v_name_1194_, v_bi_boxed_1204_, v_type_1196_, v_k_1197_, v_kind_boxed_1205_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(lean_object* v_00_u03b1_1207_, lean_object* v_name_1208_, lean_object* v_type_1209_, lean_object* v_k_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v_name_1208_, v_type_1209_, v_k_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___boxed(lean_object* v_00_u03b1_1217_, lean_object* v_name_1218_, lean_object* v_type_1219_, lean_object* v_k_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(v_00_u03b1_1217_, v_name_1218_, v_type_1219_, v_k_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
return v_res_1226_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(lean_object* v_00_u03b2_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
uint8_t v___x_1230_; 
v___x_1230_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_x_1228_, v_x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1231_, lean_object* v_x_1232_, lean_object* v_x_1233_){
_start:
{
uint8_t v_res_1234_; lean_object* v_r_1235_; 
v_res_1234_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(v_00_u03b2_1231_, v_x_1232_, v_x_1233_);
lean_dec(v_x_1233_);
lean_dec_ref(v_x_1232_);
v_r_1235_ = lean_box(v_res_1234_);
return v_r_1235_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_1236_, lean_object* v_x_1237_, size_t v_x_1238_, lean_object* v_x_1239_){
_start:
{
uint8_t v___x_1240_; 
v___x_1240_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_1237_, v_x_1238_, v_x_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
size_t v_x_19390__boxed_1245_; uint8_t v_res_1246_; lean_object* v_r_1247_; 
v_x_19390__boxed_1245_ = lean_unbox_usize(v_x_1243_);
lean_dec(v_x_1243_);
v_res_1246_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(v_00_u03b2_1241_, v_x_1242_, v_x_19390__boxed_1245_, v_x_1244_);
lean_dec(v_x_1244_);
lean_dec_ref(v_x_1242_);
v_r_1247_ = lean_box(v_res_1246_);
return v_r_1247_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(lean_object* v_00_u03b2_1248_, lean_object* v_keys_1249_, lean_object* v_vals_1250_, lean_object* v_heq_1251_, lean_object* v_i_1252_, lean_object* v_k_1253_){
_start:
{
uint8_t v___x_1254_; 
v___x_1254_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_keys_1249_, v_i_1252_, v_k_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___boxed(lean_object* v_00_u03b2_1255_, lean_object* v_keys_1256_, lean_object* v_vals_1257_, lean_object* v_heq_1258_, lean_object* v_i_1259_, lean_object* v_k_1260_){
_start:
{
uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_res_1261_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(v_00_u03b2_1255_, v_keys_1256_, v_vals_1257_, v_heq_1258_, v_i_1259_, v_k_1260_);
lean_dec(v_k_1260_);
lean_dec_ref(v_vals_1257_);
lean_dec_ref(v_keys_1256_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_BinderNameHint(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_BinderNameHint(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Open
// Imports: public import Lean.Elab.Util public import Lean.Parser.Command meta import Lean.Parser.Command public import Lean.Linter.AmbiguousOpen import Init.Omega
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
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_activateScoped___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRefOfMonadLiftOfMonadFunctor___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_bind(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadOption___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instFunctorOption___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadOption___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_map(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadOption___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadOption___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
lean_object* l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__0_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__1_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__2 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__2_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__3_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__4_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__5_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__6 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__6_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__0_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__1_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__7_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__7_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__2_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__3_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__4_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__5_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__8 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__8_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__8_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__6_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9_value;
static const lean_string_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__10 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__10_value;
static lean_once_cell_t l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11;
static const lean_string_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__12 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__12_value;
static lean_once_cell_t l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13;
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__14 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "failed to open"};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__0_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__0_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__1_value;
static lean_once_cell_t l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__0_value;
static const lean_array_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__1_value),((lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "openRenamingItem"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openScoped"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__0_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "openOnly"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__1_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openHiding"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__2 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__2_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "openRenaming"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__3 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__3_value;
static const lean_array_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__4 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__4_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed__const__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__37(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__0_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__1_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__2 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__2_value;
static const lean_string_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openSimple"};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__3 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__3_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 238, 134, 92, 162, 110, 43, 67)}};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadOption___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadOption___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadOption___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadOption___lam__3___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instFunctorOption___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_map, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__5_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__6_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__1_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__3_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__7_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_bind, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__7_value),((lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__9_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_getId___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__10_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__11_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__12_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__13_value;
static const lean_closure_object l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_____do__lift_2_, lean_object* v___y_3_){
_start:
{
lean_object* v_toApplicative_4_; lean_object* v_currNamespace_5_; lean_object* v_toPure_6_; lean_object* v___x_7_; 
v_toApplicative_4_ = lean_ctor_get(v_inst_1_, 0);
lean_inc_ref(v_toApplicative_4_);
lean_dec_ref(v_inst_1_);
v_currNamespace_5_ = lean_ctor_get(v_____do__lift_2_, 1);
lean_inc(v_currNamespace_5_);
lean_dec_ref(v_____do__lift_2_);
v_toPure_6_ = lean_ctor_get(v_toApplicative_4_, 1);
lean_inc(v_toPure_6_);
lean_dec_ref(v_toApplicative_4_);
v___x_7_ = lean_apply_2(v_toPure_6_, lean_box(0), v_currNamespace_5_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0___boxed(lean_object* v_inst_8_, lean_object* v_____do__lift_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0(v_inst_8_, v_____do__lift_9_, v___y_10_);
lean_dec(v___y_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1(lean_object* v_inst_12_, lean_object* v_____do__lift_13_, lean_object* v___y_14_){
_start:
{
lean_object* v_toApplicative_15_; lean_object* v_openDecls_16_; lean_object* v_toPure_17_; lean_object* v___x_18_; 
v_toApplicative_15_ = lean_ctor_get(v_inst_12_, 0);
lean_inc_ref(v_toApplicative_15_);
lean_dec_ref(v_inst_12_);
v_openDecls_16_ = lean_ctor_get(v_____do__lift_13_, 0);
lean_inc(v_openDecls_16_);
lean_dec_ref(v_____do__lift_13_);
v_toPure_17_ = lean_ctor_get(v_toApplicative_15_, 1);
lean_inc(v_toPure_17_);
lean_dec_ref(v_toApplicative_15_);
v___x_18_ = lean_apply_2(v_toPure_17_, lean_box(0), v_openDecls_16_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1___boxed(lean_object* v_inst_19_, lean_object* v_____do__lift_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1(v_inst_19_, v_____do__lift_20_, v___y_21_);
lean_dec(v___y_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg(lean_object* v_inst_23_, lean_object* v_inst_24_){
_start:
{
lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
lean_inc_ref_n(v_inst_23_, 3);
v___f_25_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_25_, 0, v_inst_23_);
v___f_26_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_26_, 0, v_inst_23_);
v___x_27_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_27_, 0, lean_box(0));
lean_closure_set(v___x_27_, 1, lean_box(0));
lean_closure_set(v___x_27_, 2, lean_box(0));
lean_closure_set(v___x_27_, 3, v_inst_24_);
lean_inc_ref(v___x_27_);
v___x_28_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_28_, 0, lean_box(0));
lean_closure_set(v___x_28_, 1, lean_box(0));
lean_closure_set(v___x_28_, 2, v_inst_23_);
lean_closure_set(v___x_28_, 3, lean_box(0));
lean_closure_set(v___x_28_, 4, lean_box(0));
lean_closure_set(v___x_28_, 5, v___x_27_);
lean_closure_set(v___x_28_, 6, v___f_25_);
v___x_29_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_29_, 0, lean_box(0));
lean_closure_set(v___x_29_, 1, lean_box(0));
lean_closure_set(v___x_29_, 2, v_inst_23_);
lean_closure_set(v___x_29_, 3, lean_box(0));
lean_closure_set(v___x_29_, 4, lean_box(0));
lean_closure_set(v___x_29_, 5, v___x_27_);
lean_closure_set(v___x_29_, 6, v___f_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_28_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_instMonadResolveNameM(lean_object* v_m_31_, lean_object* v_inst_32_, lean_object* v_inst_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg(v_inst_32_, v_inst_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0(lean_object* v_idStx_35_, lean_object* v_withRef_36_, lean_object* v___x_37_, lean_object* v_oldRef_38_){
_start:
{
lean_object* v_ref_39_; lean_object* v___x_40_; 
v_ref_39_ = l_Lean_replaceRef(v_idStx_35_, v_oldRef_38_);
v___x_40_ = lean_apply_3(v_withRef_36_, lean_box(0), v_ref_39_, v___x_37_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0___boxed(lean_object* v_idStx_41_, lean_object* v_withRef_42_, lean_object* v___x_43_, lean_object* v_oldRef_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0(v_idStx_41_, v_withRef_42_, v___x_43_, v_oldRef_44_);
lean_dec(v_oldRef_44_);
lean_dec(v_idStx_41_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg___lam__1(lean_object* v_declName_46_, lean_object* v_inst_47_, lean_object* v_inst_48_, lean_object* v_inst_49_, lean_object* v_inst_50_, lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_inst_53_, lean_object* v___x_54_, lean_object* v_idStx_55_, lean_object* v_toBind_56_, lean_object* v_toPure_57_, lean_object* v_____do__lift_58_){
_start:
{
uint8_t v___x_59_; uint8_t v___x_60_; 
v___x_59_ = 1;
lean_inc(v_declName_46_);
v___x_60_ = l_Lean_Environment_contains(v_____do__lift_58_, v_declName_46_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v_getRef_61_; lean_object* v_withRef_62_; lean_object* v___x_63_; lean_object* v___f_64_; lean_object* v___x_65_; 
lean_dec(v_toPure_57_);
v_getRef_61_ = lean_ctor_get(v_inst_47_, 0);
lean_inc(v_getRef_61_);
v_withRef_62_ = lean_ctor_get(v_inst_47_, 1);
lean_inc(v_withRef_62_);
lean_dec_ref(v_inst_47_);
v___x_63_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_48_, v_inst_49_, v_inst_50_, v_inst_51_, v_inst_52_, v_inst_53_, v___x_54_, v_declName_46_);
v___f_64_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_64_, 0, v_idStx_55_);
lean_closure_set(v___f_64_, 1, v_withRef_62_);
lean_closure_set(v___f_64_, 2, v___x_63_);
v___x_65_ = lean_apply_4(v_toBind_56_, lean_box(0), lean_box(0), v_getRef_61_, v___f_64_);
return v___x_65_;
}
else
{
lean_object* v___x_66_; 
lean_dec(v_toBind_56_);
lean_dec(v_idStx_55_);
lean_dec_ref(v___x_54_);
lean_dec(v_inst_53_);
lean_dec_ref(v_inst_52_);
lean_dec(v_inst_51_);
lean_dec_ref(v_inst_50_);
lean_dec_ref(v_inst_49_);
lean_dec_ref(v_inst_48_);
lean_dec_ref(v_inst_47_);
v___x_66_ = lean_apply_2(v_toPure_57_, lean_box(0), v_declName_46_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId___redArg(lean_object* v_inst_67_, lean_object* v_inst_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_inst_74_, lean_object* v_inst_75_, lean_object* v_ns_76_, lean_object* v_idStx_77_){
_start:
{
lean_object* v_toApplicative_78_; lean_object* v_toBind_79_; lean_object* v_getEnv_80_; lean_object* v___x_81_; lean_object* v_toPure_82_; lean_object* v___x_83_; lean_object* v_declName_84_; lean_object* v___f_85_; lean_object* v___x_86_; 
v_toApplicative_78_ = lean_ctor_get(v_inst_67_, 0);
v_toBind_79_ = lean_ctor_get(v_inst_67_, 1);
lean_inc_n(v_toBind_79_, 2);
v_getEnv_80_ = lean_ctor_get(v_inst_68_, 0);
lean_inc(v_getEnv_80_);
lean_inc_ref(v_inst_70_);
v___x_81_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_81_, 0, v_inst_69_);
lean_ctor_set(v___x_81_, 1, v_inst_70_);
lean_ctor_set(v___x_81_, 2, v_inst_71_);
v_toPure_82_ = lean_ctor_get(v_toApplicative_78_, 1);
lean_inc(v_toPure_82_);
v___x_83_ = l_Lean_Syntax_getId(v_idStx_77_);
v_declName_84_ = l_Lean_Name_append(v_ns_76_, v___x_83_);
v___f_85_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveId___redArg___lam__1), 13, 12);
lean_closure_set(v___f_85_, 0, v_declName_84_);
lean_closure_set(v___f_85_, 1, v_inst_70_);
lean_closure_set(v___f_85_, 2, v_inst_67_);
lean_closure_set(v___f_85_, 3, v_inst_75_);
lean_closure_set(v___f_85_, 4, v_inst_68_);
lean_closure_set(v___f_85_, 5, v_inst_74_);
lean_closure_set(v___f_85_, 6, v_inst_73_);
lean_closure_set(v___f_85_, 7, v_inst_72_);
lean_closure_set(v___f_85_, 8, v___x_81_);
lean_closure_set(v___f_85_, 9, v_idStx_77_);
lean_closure_set(v___f_85_, 10, v_toBind_79_);
lean_closure_set(v___f_85_, 11, v_toPure_82_);
v___x_86_ = lean_apply_4(v_toBind_79_, lean_box(0), lean_box(0), v_getEnv_80_, v___f_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveId(lean_object* v_m_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_inst_93_, lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_ns_97_, lean_object* v_idStx_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Elab_OpenDecl_resolveId___redArg(v_inst_88_, v_inst_89_, v_inst_90_, v_inst_91_, v_inst_92_, v_inst_93_, v_inst_94_, v_inst_95_, v_inst_96_, v_ns_97_, v_idStx_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg___lam__0(lean_object* v_decl_100_, lean_object* v_s_101_){
_start:
{
lean_object* v_openDecls_102_; lean_object* v_currNamespace_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_113_; 
v_openDecls_102_ = lean_ctor_get(v_s_101_, 0);
v_currNamespace_103_ = lean_ctor_get(v_s_101_, 1);
v_isSharedCheck_113_ = !lean_is_exclusive(v_s_101_);
if (v_isSharedCheck_113_ == 0)
{
v___x_105_ = v_s_101_;
v_isShared_106_ = v_isSharedCheck_113_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_currNamespace_103_);
lean_inc(v_openDecls_102_);
lean_dec(v_s_101_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_113_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_107_ = lean_box(0);
v___x_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_108_, 0, v_decl_100_);
lean_ctor_set(v___x_108_, 1, v_openDecls_102_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 0, v___x_108_);
v___x_110_ = v___x_105_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v_currNamespace_103_);
v___x_110_ = v_reuseFailAlloc_112_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_107_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
return v___x_111_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(lean_object* v_inst_114_, lean_object* v_decl_115_, lean_object* v_a_116_){
_start:
{
lean_object* v___f_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___f_117_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_117_, 0, v_decl_115_);
lean_inc(v_a_116_);
v___x_118_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_118_, 0, lean_box(0));
lean_closure_set(v___x_118_, 1, lean_box(0));
lean_closure_set(v___x_118_, 2, lean_box(0));
lean_closure_set(v___x_118_, 3, v_a_116_);
lean_closure_set(v___x_118_, 4, v___f_117_);
v___x_119_ = lean_apply_2(v_inst_114_, lean_box(0), v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg___boxed(lean_object* v_inst_120_, lean_object* v_decl_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_120_, v_decl_121_, v_a_122_);
lean_dec(v_a_122_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl(lean_object* v_m_124_, lean_object* v_inst_125_, lean_object* v_decl_126_, lean_object* v_a_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_125_, v_decl_126_, v_a_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___boxed(lean_object* v_m_129_, lean_object* v_inst_130_, lean_object* v_decl_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl(v_m_129_, v_inst_130_, v_decl_131_, v_a_132_);
lean_dec(v_a_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__0(lean_object* v_x_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = l_Lean_mkConst(v_x_134_, v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__1(lean_object* v_toPure_137_, lean_object* v_p_138_){
_start:
{
lean_object* v_snd_139_; lean_object* v_fst_140_; lean_object* v_snd_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_150_; 
v_snd_139_ = lean_ctor_get(v_p_138_, 1);
lean_inc(v_snd_139_);
lean_dec_ref(v_p_138_);
v_fst_140_ = lean_ctor_get(v_snd_139_, 0);
v_snd_141_ = lean_ctor_get(v_snd_139_, 1);
v_isSharedCheck_150_ = !lean_is_exclusive(v_snd_139_);
if (v_isSharedCheck_150_ == 0)
{
v___x_143_ = v_snd_139_;
v_isShared_144_ = v_isSharedCheck_150_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_snd_141_);
lean_inc(v_fst_140_);
lean_dec(v_snd_139_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_150_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_fst_140_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_snd_141_);
v___x_146_ = v_reuseFailAlloc_149_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
v___x_148_ = lean_apply_2(v_toPure_137_, lean_box(0), v___x_147_);
return v___x_148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__2(lean_object* v_snd_151_, lean_object* v_fst_152_, lean_object* v_toPure_153_, lean_object* v_declName_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_155_ = lean_array_push(v_snd_151_, v_declName_154_);
v___x_156_ = lean_box(0);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v_fst_152_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_156_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
v___x_159_ = lean_apply_2(v_toPure_153_, lean_box(0), v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__3(lean_object* v_fst_160_, lean_object* v_snd_161_, lean_object* v_toPure_162_, lean_object* v_ex_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_164_ = lean_array_push(v_fst_160_, v_ex_163_);
v___x_165_ = lean_box(0);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v_snd_161_);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_165_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_apply_2(v_toPure_162_, lean_box(0), v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__4(lean_object* v_inst_169_, lean_object* v_toPure_170_, lean_object* v_inst_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_inst_176_, lean_object* v_inst_177_, lean_object* v_inst_178_, lean_object* v_idStx_179_, lean_object* v_toBind_180_, lean_object* v___f_181_, lean_object* v_a_182_, lean_object* v_x_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_fst_185_; lean_object* v_snd_186_; lean_object* v_tryCatch_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_fst_185_ = lean_ctor_get(v___y_184_, 0);
lean_inc_n(v_fst_185_, 2);
v_snd_186_ = lean_ctor_get(v___y_184_, 1);
lean_inc_n(v_snd_186_, 2);
lean_dec_ref(v___y_184_);
v_tryCatch_187_ = lean_ctor_get(v_inst_169_, 1);
lean_inc(v_tryCatch_187_);
lean_inc(v_toPure_170_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__2), 4, 3);
lean_closure_set(v___f_188_, 0, v_snd_186_);
lean_closure_set(v___f_188_, 1, v_fst_185_);
lean_closure_set(v___f_188_, 2, v_toPure_170_);
v___f_189_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_189_, 0, v_fst_185_);
lean_closure_set(v___f_189_, 1, v_snd_186_);
lean_closure_set(v___f_189_, 2, v_toPure_170_);
v___x_190_ = l_Lean_Elab_OpenDecl_resolveId___redArg(v_inst_171_, v_inst_172_, v_inst_169_, v_inst_173_, v_inst_174_, v_inst_175_, v_inst_176_, v_inst_177_, v_inst_178_, v_a_182_, v_idStx_179_);
lean_inc(v_toBind_180_);
v___x_191_ = lean_apply_4(v_toBind_180_, lean_box(0), lean_box(0), v___x_190_, v___f_188_);
v___x_192_ = lean_apply_3(v_tryCatch_187_, lean_box(0), v___x_191_, v___f_189_);
v___x_193_ = lean_apply_4(v_toBind_180_, lean_box(0), lean_box(0), v___x_192_, v___f_181_);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__10));
v___x_215_ = l_Lean_stringToMessageData(v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__12));
v___x_218_ = l_Lean_stringToMessageData(v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6(lean_object* v_snd_220_, lean_object* v_inst_221_, lean_object* v_idStx_222_, lean_object* v___f_223_, lean_object* v_inst_224_, lean_object* v___x_225_, lean_object* v_toBind_226_, lean_object* v___x_227_, lean_object* v_toPure_228_, lean_object* v_____r_229_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_230_ = lean_array_get_size(v_snd_220_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_dec_eq(v___x_230_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v_getRef_234_; lean_object* v_withRef_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_261_; 
lean_dec(v_toPure_228_);
v___x_233_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9));
v_getRef_234_ = lean_ctor_get(v_inst_221_, 0);
v_withRef_235_ = lean_ctor_get(v_inst_221_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_inst_221_);
if (v_isSharedCheck_261_ == 0)
{
v___x_237_ = v_inst_221_;
v_isShared_238_ = v_isSharedCheck_261_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_withRef_235_);
lean_inc(v_getRef_234_);
lean_dec(v_inst_221_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_261_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_239_ = lean_obj_once(&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11, &l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11_once, _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__11);
v___x_240_ = l_Lean_Syntax_getId(v_idStx_222_);
v___x_241_ = l_Lean_MessageData_ofName(v___x_240_);
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 7);
lean_ctor_set(v___x_237_, 1, v___x_241_);
lean_ctor_set(v___x_237_, 0, v___x_239_);
v___x_243_ = v___x_237_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_239_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v___x_241_);
v___x_243_ = v_reuseFailAlloc_260_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; size_t v_sz_246_; size_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___f_258_; lean_object* v___x_259_; 
v___x_244_ = lean_obj_once(&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13, &l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13_once, _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__13);
v___x_245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v_sz_246_ = lean_array_size(v_snd_220_);
v___x_247_ = ((size_t)0ULL);
v___x_248_ = l_unsafeCast___redArg(v_snd_220_);
v___x_249_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_233_, v___f_223_, v_sz_246_, v___x_247_, v___x_248_);
v___x_250_ = l_unsafeCast___redArg(v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = lean_array_to_list(v___x_250_);
v___x_252_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__14));
v___x_253_ = lean_box(0);
v___x_254_ = l_List_mapTR_loop___redArg(v___x_252_, v___x_251_, v___x_253_);
v___x_255_ = l_Lean_MessageData_ofList(v___x_254_);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_245_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = l_Lean_throwError___redArg(v_inst_224_, v___x_225_, v___x_256_);
v___f_258_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveId___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_258_, 0, v_idStx_222_);
lean_closure_set(v___f_258_, 1, v_withRef_235_);
lean_closure_set(v___f_258_, 2, v___x_257_);
v___x_259_ = lean_apply_4(v_toBind_226_, lean_box(0), lean_box(0), v_getRef_234_, v___f_258_);
return v___x_259_;
}
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec(v_toBind_226_);
lean_dec_ref(v___x_225_);
lean_dec_ref(v_inst_224_);
lean_dec_ref(v___f_223_);
lean_dec(v_idStx_222_);
lean_dec_ref(v_inst_221_);
v___x_262_ = lean_array_fget_borrowed(v_snd_220_, v___x_227_);
lean_inc(v___x_262_);
v___x_263_ = lean_apply_2(v_toPure_228_, lean_box(0), v___x_262_);
return v___x_263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___boxed(lean_object* v_snd_264_, lean_object* v_inst_265_, lean_object* v_idStx_266_, lean_object* v___f_267_, lean_object* v_inst_268_, lean_object* v___x_269_, lean_object* v_toBind_270_, lean_object* v___x_271_, lean_object* v_toPure_272_, lean_object* v_____r_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6(v_snd_264_, v_inst_265_, v_idStx_266_, v___f_267_, v_inst_268_, v___x_269_, v_toBind_270_, v___x_271_, v_toPure_272_, v_____r_273_);
lean_dec(v___x_271_);
lean_dec(v_snd_264_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__5(lean_object* v___f_275_, lean_object* v_____r_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_apply_1(v___f_275_, v_____r_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7(lean_object* v_idStx_278_, lean_object* v_withRef_279_, lean_object* v___y_280_, lean_object* v_oldRef_281_){
_start:
{
lean_object* v_ref_282_; lean_object* v___x_283_; 
v_ref_282_ = l_Lean_replaceRef(v_idStx_278_, v_oldRef_281_);
v___x_283_ = lean_apply_3(v_withRef_279_, lean_box(0), v_ref_282_, v___y_280_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7___boxed(lean_object* v_idStx_284_, lean_object* v_withRef_285_, lean_object* v___y_286_, lean_object* v_oldRef_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7(v_idStx_284_, v_withRef_285_, v___y_286_, v_oldRef_287_);
lean_dec(v_oldRef_287_);
lean_dec(v_idStx_284_);
return v_res_288_;
}
}
static lean_object* _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__1));
v___x_293_ = l_Lean_MessageData_ofFormat(v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8(lean_object* v_inst_294_, lean_object* v_idStx_295_, lean_object* v___f_296_, lean_object* v_inst_297_, lean_object* v___x_298_, lean_object* v_toBind_299_, lean_object* v___x_300_, lean_object* v_toPure_301_, lean_object* v_nss_302_, lean_object* v_inst_303_, lean_object* v_inst_304_, lean_object* v_____s_305_){
_start:
{
lean_object* v_fst_306_; lean_object* v_snd_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_fst_306_ = lean_ctor_get(v_____s_305_, 0);
lean_inc(v_fst_306_);
v_snd_307_ = lean_ctor_get(v_____s_305_, 1);
lean_inc_n(v_snd_307_, 2);
lean_dec_ref(v_____s_305_);
lean_inc(v_toPure_301_);
lean_inc(v___x_300_);
lean_inc(v_toBind_299_);
lean_inc_ref(v___x_298_);
lean_inc_ref(v_inst_297_);
lean_inc_ref(v___f_296_);
lean_inc(v_idStx_295_);
lean_inc_ref(v_inst_294_);
v___f_308_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___boxed), 10, 9);
lean_closure_set(v___f_308_, 0, v_snd_307_);
lean_closure_set(v___f_308_, 1, v_inst_294_);
lean_closure_set(v___f_308_, 2, v_idStx_295_);
lean_closure_set(v___f_308_, 3, v___f_296_);
lean_closure_set(v___f_308_, 4, v_inst_297_);
lean_closure_set(v___f_308_, 5, v___x_298_);
lean_closure_set(v___f_308_, 6, v_toBind_299_);
lean_closure_set(v___f_308_, 7, v___x_300_);
lean_closure_set(v___f_308_, 8, v_toPure_301_);
v___x_309_ = lean_array_get_size(v_fst_306_);
v___x_310_ = l_List_lengthTR___redArg(v_nss_302_);
v___x_311_ = lean_nat_dec_eq(v___x_309_, v___x_310_);
lean_dec(v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec_ref(v___f_308_);
lean_dec(v_fst_306_);
lean_dec_ref(v_inst_304_);
lean_dec_ref(v_inst_303_);
v___x_312_ = lean_box(0);
v___x_313_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6(v_snd_307_, v_inst_294_, v_idStx_295_, v___f_296_, v_inst_297_, v___x_298_, v_toBind_299_, v___x_300_, v_toPure_301_, v___x_312_);
lean_dec(v___x_300_);
lean_dec(v_snd_307_);
return v___x_313_;
}
else
{
lean_object* v___f_314_; lean_object* v___y_316_; lean_object* v___x_322_; uint8_t v___x_323_; 
lean_dec(v_snd_307_);
lean_dec(v_toPure_301_);
lean_dec_ref(v___f_296_);
v___f_314_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__5), 2, 1);
lean_closure_set(v___f_314_, 0, v___f_308_);
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_dec_eq(v___x_309_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec_ref(v_inst_304_);
lean_dec(v___x_300_);
v___x_324_ = lean_obj_once(&l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2, &l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2_once, _init_l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___closed__2);
v___x_325_ = l_Lean_Elab_throwErrorWithNestedErrors___redArg(v___x_298_, v_inst_297_, v_inst_303_, v___x_324_, v_fst_306_);
lean_dec(v_fst_306_);
v___y_316_ = v___x_325_;
goto v___jp_315_;
}
else
{
lean_object* v_throw_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec_ref(v_inst_303_);
lean_dec_ref(v___x_298_);
lean_dec_ref(v_inst_297_);
v_throw_326_ = lean_ctor_get(v_inst_304_, 0);
lean_inc(v_throw_326_);
lean_dec_ref(v_inst_304_);
v___x_327_ = lean_array_fget(v_fst_306_, v___x_300_);
lean_dec(v___x_300_);
lean_dec(v_fst_306_);
v___x_328_ = lean_apply_2(v_throw_326_, lean_box(0), v___x_327_);
v___y_316_ = v___x_328_;
goto v___jp_315_;
}
v___jp_315_:
{
lean_object* v_getRef_317_; lean_object* v_withRef_318_; lean_object* v___f_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_getRef_317_ = lean_ctor_get(v_inst_294_, 0);
lean_inc(v_getRef_317_);
v_withRef_318_ = lean_ctor_get(v_inst_294_, 1);
lean_inc(v_withRef_318_);
lean_dec_ref(v_inst_294_);
v___f_319_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__7___boxed), 4, 3);
lean_closure_set(v___f_319_, 0, v_idStx_295_);
lean_closure_set(v___f_319_, 1, v_withRef_318_);
lean_closure_set(v___f_319_, 2, v___y_316_);
lean_inc(v_toBind_299_);
v___x_320_ = lean_apply_4(v_toBind_299_, lean_box(0), lean_box(0), v_getRef_317_, v___f_319_);
v___x_321_ = lean_apply_4(v_toBind_299_, lean_box(0), lean_box(0), v___x_320_, v___f_314_);
return v___x_321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___boxed(lean_object* v_inst_329_, lean_object* v_idStx_330_, lean_object* v___f_331_, lean_object* v_inst_332_, lean_object* v___x_333_, lean_object* v_toBind_334_, lean_object* v___x_335_, lean_object* v_toPure_336_, lean_object* v_nss_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_____s_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8(v_inst_329_, v_idStx_330_, v___f_331_, v_inst_332_, v___x_333_, v_toBind_334_, v___x_335_, v_toPure_336_, v_nss_337_, v_inst_338_, v_inst_339_, v_____s_340_);
lean_dec(v_nss_337_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg(lean_object* v_inst_347_, lean_object* v_inst_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_inst_353_, lean_object* v_inst_354_, lean_object* v_inst_355_, lean_object* v_nss_356_, lean_object* v_idStx_357_){
_start:
{
lean_object* v_toApplicative_358_; lean_object* v_toBind_359_; lean_object* v_toPure_360_; lean_object* v___f_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___f_364_; lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___f_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_toApplicative_358_ = lean_ctor_get(v_inst_347_, 0);
v_toBind_359_ = lean_ctor_get(v_inst_347_, 1);
lean_inc_n(v_toBind_359_, 3);
v_toPure_360_ = lean_ctor_get(v_toApplicative_358_, 1);
v___f_361_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__0));
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___closed__2));
lean_inc_n(v_toPure_360_, 3);
v___f_364_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_364_, 0, v_toPure_360_);
lean_inc(v_idStx_357_);
lean_inc_ref(v_inst_353_);
lean_inc(v_inst_351_);
lean_inc_ref_n(v_inst_350_, 2);
lean_inc_ref_n(v_inst_347_, 2);
lean_inc_ref_n(v_inst_349_, 2);
v___f_365_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__4), 16, 13);
lean_closure_set(v___f_365_, 0, v_inst_349_);
lean_closure_set(v___f_365_, 1, v_toPure_360_);
lean_closure_set(v___f_365_, 2, v_inst_347_);
lean_closure_set(v___f_365_, 3, v_inst_348_);
lean_closure_set(v___f_365_, 4, v_inst_350_);
lean_closure_set(v___f_365_, 5, v_inst_351_);
lean_closure_set(v___f_365_, 6, v_inst_352_);
lean_closure_set(v___f_365_, 7, v_inst_353_);
lean_closure_set(v___f_365_, 8, v_inst_354_);
lean_closure_set(v___f_365_, 9, v_inst_355_);
lean_closure_set(v___f_365_, 10, v_idStx_357_);
lean_closure_set(v___f_365_, 11, v_toBind_359_);
lean_closure_set(v___f_365_, 12, v___f_364_);
v___x_366_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_366_, 0, v_inst_349_);
lean_ctor_set(v___x_366_, 1, v_inst_350_);
lean_ctor_set(v___x_366_, 2, v_inst_351_);
lean_inc(v_nss_356_);
v___f_367_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__8___boxed), 12, 11);
lean_closure_set(v___f_367_, 0, v_inst_350_);
lean_closure_set(v___f_367_, 1, v_idStx_357_);
lean_closure_set(v___f_367_, 2, v___f_361_);
lean_closure_set(v___f_367_, 3, v_inst_347_);
lean_closure_set(v___f_367_, 4, v___x_366_);
lean_closure_set(v___f_367_, 5, v_toBind_359_);
lean_closure_set(v___f_367_, 6, v___x_362_);
lean_closure_set(v___f_367_, 7, v_toPure_360_);
lean_closure_set(v___f_367_, 8, v_nss_356_);
lean_closure_set(v___f_367_, 9, v_inst_353_);
lean_closure_set(v___f_367_, 10, v_inst_349_);
v___x_368_ = l_List_forIn_x27_loop___redArg(v_inst_347_, v___f_365_, v_nss_356_, v___x_363_);
lean_dec(v_nss_356_);
v___x_369_ = lean_apply_4(v_toBind_359_, lean_box(0), lean_box(0), v___x_368_, v___f_367_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore(lean_object* v_m_370_, lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_nss_380_, lean_object* v_idStx_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg(v_inst_371_, v_inst_372_, v_inst_373_, v_inst_374_, v_inst_375_, v_inst_376_, v_inst_377_, v_inst_378_, v_inst_379_, v_nss_380_, v_idStx_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__0(lean_object* v_toApplicative_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_openDecls_385_; lean_object* v_toPure_386_; lean_object* v___x_387_; 
v_openDecls_385_ = lean_ctor_get(v_a_384_, 0);
lean_inc(v_openDecls_385_);
lean_dec_ref(v_a_384_);
v_toPure_386_ = lean_ctor_get(v_toApplicative_383_, 1);
lean_inc(v_toPure_386_);
lean_dec_ref(v_toApplicative_383_);
v___x_387_ = lean_apply_2(v_toPure_386_, lean_box(0), v_openDecls_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1(lean_object* v_inst_388_, lean_object* v_toBind_389_, lean_object* v___f_390_, lean_object* v_____r_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_inc(v___y_392_);
v___x_393_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_393_, 0, lean_box(0));
lean_closure_set(v___x_393_, 1, lean_box(0));
lean_closure_set(v___x_393_, 2, v___y_392_);
v___x_394_ = lean_apply_2(v_inst_388_, lean_box(0), v___x_393_);
v___x_395_ = lean_apply_4(v_toBind_389_, lean_box(0), lean_box(0), v___x_394_, v___f_390_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1___boxed(lean_object* v_inst_396_, lean_object* v_toBind_397_, lean_object* v___f_398_, lean_object* v_____r_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1(v_inst_396_, v_toBind_397_, v___f_398_, v_____r_399_, v___y_400_);
lean_dec(v___y_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2(lean_object* v_x_402_){
_start:
{
lean_object* v_fst_403_; 
v_fst_403_ = lean_ctor_get(v_x_402_, 0);
lean_inc(v_fst_403_);
return v_fst_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2___boxed(lean_object* v_x_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__2(v_x_404_);
lean_dec_ref(v_x_404_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3(lean_object* v_x_406_){
_start:
{
lean_object* v_snd_407_; 
v_snd_407_ = lean_ctor_get(v_x_406_, 1);
lean_inc(v_snd_407_);
return v_snd_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3___boxed(lean_object* v_x_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__3(v_x_408_);
lean_dec_ref(v_x_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__4(lean_object* v_a_410_, lean_object* v_toPure_411_, lean_object* v_s_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_a_410_);
lean_ctor_set(v___x_413_, 1, v_s_412_);
v___x_414_ = lean_apply_2(v_toPure_411_, lean_box(0), v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__5(lean_object* v_toPure_415_, lean_object* v_ref_416_, lean_object* v_inst_417_, lean_object* v_toBind_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___f_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___f_420_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__4), 3, 2);
lean_closure_set(v___f_420_, 0, v_a_419_);
lean_closure_set(v___f_420_, 1, v_toPure_415_);
v___x_421_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_421_, 0, lean_box(0));
lean_closure_set(v___x_421_, 1, lean_box(0));
lean_closure_set(v___x_421_, 2, v_ref_416_);
v___x_422_ = lean_apply_2(v_inst_417_, lean_box(0), v___x_421_);
v___x_423_ = lean_apply_4(v_toBind_418_, lean_box(0), lean_box(0), v___x_422_, v___f_420_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__6(lean_object* v___f_424_, lean_object* v_ref_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = lean_apply_2(v___f_424_, v_a_426_, v_ref_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7(lean_object* v___f_428_, lean_object* v_ref_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_box(0);
v___x_432_ = lean_apply_2(v___f_428_, v___x_431_, v_ref_429_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9(lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v___x_437_, lean_object* v___x_438_, lean_object* v_x_439_){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_440_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___closed__0));
v___x_441_ = l_Lean_Name_mkStr4(v___x_434_, v___x_435_, v___x_436_, v___x_440_);
lean_inc(v_x_439_);
v___x_442_ = l_Lean_Syntax_isOfKind(v_x_439_, v___x_441_);
lean_dec(v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; 
lean_dec(v_x_439_);
v___x_443_ = lean_box(0);
return v___x_443_;
}
else
{
lean_object* v_froms_444_; lean_object* v_tos_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_froms_444_ = l_Lean_Syntax_getArg(v_x_439_, v___x_437_);
v_tos_445_ = l_Lean_Syntax_getArg(v_x_439_, v___x_438_);
lean_dec(v_x_439_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v_froms_444_);
lean_ctor_set(v___x_446_, 1, v_tos_445_);
v___x_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___boxed(lean_object* v___x_448_, lean_object* v___x_449_, lean_object* v___x_450_, lean_object* v___x_451_, lean_object* v___x_452_, lean_object* v_x_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9(v___x_448_, v___x_449_, v___x_450_, v___x_451_, v___x_452_, v_x_453_);
lean_dec(v___x_452_);
lean_dec(v___x_451_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8(lean_object* v___x_455_, lean_object* v_toPure_456_, lean_object* v_a_457_){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_455_);
v___x_459_ = lean_apply_2(v_toPure_456_, lean_box(0), v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10(lean_object* v_snd_460_, lean_object* v_a_461_, lean_object* v_inst_462_, lean_object* v_toBind_463_, lean_object* v___f_464_, lean_object* v_____r_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_467_ = l_Lean_Syntax_getId(v_snd_460_);
v___x_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v_a_461_);
v___x_469_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_462_, v___x_468_, v___y_466_);
v___x_470_ = lean_apply_4(v_toBind_463_, lean_box(0), lean_box(0), v___x_469_, v___f_464_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10___boxed(lean_object* v_snd_471_, lean_object* v_a_472_, lean_object* v_inst_473_, lean_object* v_toBind_474_, lean_object* v___f_475_, lean_object* v_____r_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10(v_snd_471_, v_a_472_, v_inst_473_, v_toBind_474_, v___f_475_, v_____r_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec(v_snd_471_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11(lean_object* v___f_479_, lean_object* v___y_480_, lean_object* v_a_481_){
_start:
{
lean_object* v___x_482_; 
lean_inc(v___y_480_);
v___x_482_ = lean_apply_2(v___f_479_, v_a_481_, v___y_480_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11___boxed(lean_object* v___f_483_, lean_object* v___y_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11(v___f_483_, v___y_484_, v_a_485_);
lean_dec(v___y_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12(lean_object* v___x_487_, lean_object* v___x_488_, lean_object* v___x_489_, lean_object* v___x_490_, lean_object* v_snd_491_, lean_object* v_a_492_, lean_object* v___x_493_, lean_object* v___y_494_, lean_object* v_toBind_495_, lean_object* v___f_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_3650__overap_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_3650__overap_498_ = l_Lean_Elab_addConstInfo___redArg(v___x_487_, v___x_488_, v___x_489_, v___x_490_, v_snd_491_, v_a_492_, v___x_493_);
lean_inc(v___y_494_);
v___x_499_ = lean_apply_1(v___x_3650__overap_498_, v___y_494_);
v___x_500_ = lean_apply_4(v_toBind_495_, lean_box(0), lean_box(0), v___x_499_, v___f_496_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12___boxed(lean_object* v___x_501_, lean_object* v___x_502_, lean_object* v___x_503_, lean_object* v___x_504_, lean_object* v_snd_505_, lean_object* v_a_506_, lean_object* v___x_507_, lean_object* v___y_508_, lean_object* v_toBind_509_, lean_object* v___f_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12(v___x_501_, v___x_502_, v___x_503_, v___x_504_, v_snd_505_, v_a_506_, v___x_507_, v___y_508_, v_toBind_509_, v___f_510_, v_a_511_);
lean_dec(v___y_508_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13(lean_object* v___f_513_, lean_object* v___x_514_, lean_object* v___y_515_, lean_object* v___x_516_, lean_object* v___x_517_, lean_object* v___x_518_, lean_object* v___x_519_, lean_object* v_snd_520_, lean_object* v_a_521_, lean_object* v_toBind_522_, lean_object* v___f_523_, lean_object* v_fst_524_, lean_object* v_a_525_){
_start:
{
uint8_t v_enabled_526_; 
v_enabled_526_ = lean_ctor_get_uint8(v_a_525_, sizeof(void*)*3);
if (v_enabled_526_ == 0)
{
lean_object* v___x_527_; 
lean_dec(v_fst_524_);
lean_dec(v___f_523_);
lean_dec(v_toBind_522_);
lean_dec(v_a_521_);
lean_dec(v_snd_520_);
lean_dec_ref(v___x_519_);
lean_dec_ref(v___x_518_);
lean_dec_ref(v___x_517_);
lean_dec_ref(v___x_516_);
lean_inc(v___y_515_);
v___x_527_ = lean_apply_2(v___f_513_, v___x_514_, v___y_515_);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___f_529_; lean_object* v___x_3665__overap_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec(v___f_513_);
v___x_528_ = lean_box(0);
lean_inc(v_toBind_522_);
lean_inc_n(v___y_515_, 2);
lean_inc(v_a_521_);
lean_inc_ref(v___x_519_);
lean_inc_ref(v___x_518_);
lean_inc_ref(v___x_517_);
lean_inc_ref(v___x_516_);
v___f_529_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_529_, 0, v___x_516_);
lean_closure_set(v___f_529_, 1, v___x_517_);
lean_closure_set(v___f_529_, 2, v___x_518_);
lean_closure_set(v___f_529_, 3, v___x_519_);
lean_closure_set(v___f_529_, 4, v_snd_520_);
lean_closure_set(v___f_529_, 5, v_a_521_);
lean_closure_set(v___f_529_, 6, v___x_528_);
lean_closure_set(v___f_529_, 7, v___y_515_);
lean_closure_set(v___f_529_, 8, v_toBind_522_);
lean_closure_set(v___f_529_, 9, v___f_523_);
v___x_3665__overap_530_ = l_Lean_Elab_addConstInfo___redArg(v___x_516_, v___x_517_, v___x_518_, v___x_519_, v_fst_524_, v_a_521_, v___x_528_);
v___x_531_ = lean_apply_1(v___x_3665__overap_530_, v___y_515_);
v___x_532_ = lean_apply_4(v_toBind_522_, lean_box(0), lean_box(0), v___x_531_, v___f_529_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13___boxed(lean_object* v___f_533_, lean_object* v___x_534_, lean_object* v___y_535_, lean_object* v___x_536_, lean_object* v___x_537_, lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v_snd_540_, lean_object* v_a_541_, lean_object* v_toBind_542_, lean_object* v___f_543_, lean_object* v_fst_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13(v___f_533_, v___x_534_, v___y_535_, v___x_536_, v___x_537_, v___x_538_, v___x_539_, v_snd_540_, v_a_541_, v_toBind_542_, v___f_543_, v_fst_544_, v_a_545_);
lean_dec_ref(v_a_545_);
lean_dec(v___y_535_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14(lean_object* v_inst_547_, lean_object* v_snd_548_, lean_object* v_inst_549_, lean_object* v_toBind_550_, lean_object* v___f_551_, lean_object* v___y_552_, lean_object* v___x_553_, lean_object* v___x_554_, lean_object* v___x_555_, lean_object* v___x_556_, lean_object* v___x_557_, lean_object* v_fst_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_getInfoState_560_; lean_object* v___f_561_; lean_object* v___f_562_; lean_object* v___f_563_; lean_object* v___x_564_; 
v_getInfoState_560_ = lean_ctor_get(v_inst_547_, 0);
lean_inc(v_getInfoState_560_);
lean_dec_ref(v_inst_547_);
lean_inc_n(v_toBind_550_, 2);
lean_inc(v_a_559_);
lean_inc(v_snd_548_);
v___f_561_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__10___boxed), 7, 5);
lean_closure_set(v___f_561_, 0, v_snd_548_);
lean_closure_set(v___f_561_, 1, v_a_559_);
lean_closure_set(v___f_561_, 2, v_inst_549_);
lean_closure_set(v___f_561_, 3, v_toBind_550_);
lean_closure_set(v___f_561_, 4, v___f_551_);
lean_inc_n(v___y_552_, 2);
lean_inc_ref(v___f_561_);
v___f_562_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11___boxed), 3, 2);
lean_closure_set(v___f_562_, 0, v___f_561_);
lean_closure_set(v___f_562_, 1, v___y_552_);
v___f_563_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__13___boxed), 13, 12);
lean_closure_set(v___f_563_, 0, v___f_561_);
lean_closure_set(v___f_563_, 1, v___x_553_);
lean_closure_set(v___f_563_, 2, v___y_552_);
lean_closure_set(v___f_563_, 3, v___x_554_);
lean_closure_set(v___f_563_, 4, v___x_555_);
lean_closure_set(v___f_563_, 5, v___x_556_);
lean_closure_set(v___f_563_, 6, v___x_557_);
lean_closure_set(v___f_563_, 7, v_snd_548_);
lean_closure_set(v___f_563_, 8, v_a_559_);
lean_closure_set(v___f_563_, 9, v_toBind_550_);
lean_closure_set(v___f_563_, 10, v___f_562_);
lean_closure_set(v___f_563_, 11, v_fst_558_);
v___x_564_ = lean_apply_4(v_toBind_550_, lean_box(0), lean_box(0), v_getInfoState_560_, v___f_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14___boxed(lean_object* v_inst_565_, lean_object* v_snd_566_, lean_object* v_inst_567_, lean_object* v_toBind_568_, lean_object* v___f_569_, lean_object* v___y_570_, lean_object* v___x_571_, lean_object* v___x_572_, lean_object* v___x_573_, lean_object* v___x_574_, lean_object* v___x_575_, lean_object* v_fst_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14(v_inst_565_, v_snd_566_, v_inst_567_, v_toBind_568_, v___f_569_, v___y_570_, v___x_571_, v___x_572_, v___x_573_, v___x_574_, v___x_575_, v_fst_576_, v_a_577_);
lean_dec(v___y_570_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15(lean_object* v_inst_579_, lean_object* v_inst_580_, lean_object* v_toBind_581_, lean_object* v___f_582_, lean_object* v___x_583_, lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v___x_588_, lean_object* v___x_589_, lean_object* v___x_590_, lean_object* v___f_591_, lean_object* v___x_592_, lean_object* v___x_593_, lean_object* v___x_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_x_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_fst_600_; lean_object* v_snd_601_; lean_object* v___f_602_; lean_object* v___x_3703__overap_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_fst_600_ = lean_ctor_get(v_a_596_, 0);
lean_inc_n(v_fst_600_, 2);
v_snd_601_ = lean_ctor_get(v_a_596_, 1);
lean_inc(v_snd_601_);
lean_dec_ref(v_a_596_);
lean_inc_ref(v___x_586_);
lean_inc_ref(v___x_584_);
lean_inc_n(v___y_599_, 2);
lean_inc(v_toBind_581_);
v___f_602_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__14___boxed), 13, 12);
lean_closure_set(v___f_602_, 0, v_inst_579_);
lean_closure_set(v___f_602_, 1, v_snd_601_);
lean_closure_set(v___f_602_, 2, v_inst_580_);
lean_closure_set(v___f_602_, 3, v_toBind_581_);
lean_closure_set(v___f_602_, 4, v___f_582_);
lean_closure_set(v___f_602_, 5, v___y_599_);
lean_closure_set(v___f_602_, 6, v___x_583_);
lean_closure_set(v___f_602_, 7, v___x_584_);
lean_closure_set(v___f_602_, 8, v___x_585_);
lean_closure_set(v___f_602_, 9, v___x_586_);
lean_closure_set(v___f_602_, 10, v___x_587_);
lean_closure_set(v___f_602_, 11, v_fst_600_);
v___x_3703__overap_603_ = l_Lean_Elab_OpenDecl_resolveId___redArg(v___x_584_, v___x_586_, v___x_588_, v___x_589_, v___x_590_, v___f_591_, v___x_592_, v___x_593_, v___x_594_, v_a_595_, v_fst_600_);
v___x_604_ = lean_apply_1(v___x_3703__overap_603_, v___y_599_);
v___x_605_ = lean_apply_4(v_toBind_581_, lean_box(0), lean_box(0), v___x_604_, v___f_602_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_inst_606_ = _args[0];
lean_object* v_inst_607_ = _args[1];
lean_object* v_toBind_608_ = _args[2];
lean_object* v___f_609_ = _args[3];
lean_object* v___x_610_ = _args[4];
lean_object* v___x_611_ = _args[5];
lean_object* v___x_612_ = _args[6];
lean_object* v___x_613_ = _args[7];
lean_object* v___x_614_ = _args[8];
lean_object* v___x_615_ = _args[9];
lean_object* v___x_616_ = _args[10];
lean_object* v___x_617_ = _args[11];
lean_object* v___f_618_ = _args[12];
lean_object* v___x_619_ = _args[13];
lean_object* v___x_620_ = _args[14];
lean_object* v___x_621_ = _args[15];
lean_object* v_a_622_ = _args[16];
lean_object* v_a_623_ = _args[17];
lean_object* v_x_624_ = _args[18];
lean_object* v___y_625_ = _args[19];
lean_object* v___y_626_ = _args[20];
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15(v_inst_606_, v_inst_607_, v_toBind_608_, v___f_609_, v___x_610_, v___x_611_, v___x_612_, v___x_613_, v___x_614_, v___x_615_, v___x_616_, v___x_617_, v___f_618_, v___x_619_, v___x_620_, v___x_621_, v_a_622_, v_a_623_, v_x_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16(lean_object* v_froms_628_, lean_object* v_tos_629_, lean_object* v_toPure_630_, lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_toBind_633_, lean_object* v___x_634_, lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v___x_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v___f_641_, lean_object* v___x_642_, lean_object* v___x_643_, lean_object* v___x_644_, lean_object* v_a_645_, size_t v___x_646_, lean_object* v_ref_647_, lean_object* v___f_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___f_652_; lean_object* v___f_653_; size_t v_sz_654_; lean_object* v___x_3724__overap_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_650_ = l_Array_zip___redArg(v_froms_628_, v_tos_629_);
v___x_651_ = lean_box(0);
v___f_652_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8), 3, 2);
lean_closure_set(v___f_652_, 0, v___x_651_);
lean_closure_set(v___f_652_, 1, v_toPure_630_);
lean_inc_ref(v___x_634_);
lean_inc(v_toBind_633_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__15___boxed), 21, 17);
lean_closure_set(v___f_653_, 0, v_inst_631_);
lean_closure_set(v___f_653_, 1, v_inst_632_);
lean_closure_set(v___f_653_, 2, v_toBind_633_);
lean_closure_set(v___f_653_, 3, v___f_652_);
lean_closure_set(v___f_653_, 4, v___x_651_);
lean_closure_set(v___f_653_, 5, v___x_634_);
lean_closure_set(v___f_653_, 6, v___x_635_);
lean_closure_set(v___f_653_, 7, v___x_636_);
lean_closure_set(v___f_653_, 8, v___x_637_);
lean_closure_set(v___f_653_, 9, v___x_638_);
lean_closure_set(v___f_653_, 10, v___x_639_);
lean_closure_set(v___f_653_, 11, v___x_640_);
lean_closure_set(v___f_653_, 12, v___f_641_);
lean_closure_set(v___f_653_, 13, v___x_642_);
lean_closure_set(v___f_653_, 14, v___x_643_);
lean_closure_set(v___f_653_, 15, v___x_644_);
lean_closure_set(v___f_653_, 16, v_a_645_);
v_sz_654_ = lean_array_size(v___x_650_);
v___x_3724__overap_655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_634_, v___x_650_, v___f_653_, v_sz_654_, v___x_646_, v___x_651_);
v___x_656_ = lean_apply_1(v___x_3724__overap_655_, v_ref_647_);
v___x_657_ = lean_apply_4(v_toBind_633_, lean_box(0), lean_box(0), v___x_656_, v___f_648_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16___boxed(lean_object** _args){
lean_object* v_froms_658_ = _args[0];
lean_object* v_tos_659_ = _args[1];
lean_object* v_toPure_660_ = _args[2];
lean_object* v_inst_661_ = _args[3];
lean_object* v_inst_662_ = _args[4];
lean_object* v_toBind_663_ = _args[5];
lean_object* v___x_664_ = _args[6];
lean_object* v___x_665_ = _args[7];
lean_object* v___x_666_ = _args[8];
lean_object* v___x_667_ = _args[9];
lean_object* v___x_668_ = _args[10];
lean_object* v___x_669_ = _args[11];
lean_object* v___x_670_ = _args[12];
lean_object* v___f_671_ = _args[13];
lean_object* v___x_672_ = _args[14];
lean_object* v___x_673_ = _args[15];
lean_object* v___x_674_ = _args[16];
lean_object* v_a_675_ = _args[17];
lean_object* v___x_676_ = _args[18];
lean_object* v_ref_677_ = _args[19];
lean_object* v___f_678_ = _args[20];
lean_object* v_a_679_ = _args[21];
_start:
{
size_t v___x_4601__boxed_680_; lean_object* v_res_681_; 
v___x_4601__boxed_680_ = lean_unbox_usize(v___x_676_);
lean_dec(v___x_676_);
v_res_681_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16(v_froms_658_, v_tos_659_, v_toPure_660_, v_inst_661_, v_inst_662_, v_toBind_663_, v___x_664_, v___x_665_, v___x_666_, v___x_667_, v___x_668_, v___x_669_, v___x_670_, v___f_671_, v___x_672_, v___x_673_, v___x_674_, v_a_675_, v___x_4601__boxed_680_, v_ref_677_, v___f_678_, v_a_679_);
lean_dec(v_tos_659_);
lean_dec(v_froms_658_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17(lean_object* v_froms_682_, lean_object* v_tos_683_, lean_object* v_toPure_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_toBind_687_, lean_object* v___x_688_, lean_object* v___x_689_, lean_object* v___x_690_, lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v___x_693_, lean_object* v___x_694_, lean_object* v___f_695_, lean_object* v___x_696_, lean_object* v___x_697_, lean_object* v___x_698_, size_t v___x_699_, lean_object* v_ref_700_, lean_object* v___f_701_, lean_object* v___x_702_, lean_object* v_nsStx_703_, lean_object* v_a_704_){
_start:
{
lean_object* v___x_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_3744__overap_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_705_ = lean_box_usize(v___x_699_);
lean_inc(v_ref_700_);
lean_inc(v_a_704_);
lean_inc_ref(v___x_698_);
lean_inc(v___x_697_);
lean_inc_ref(v___x_696_);
lean_inc(v___f_695_);
lean_inc_ref(v___x_690_);
lean_inc_ref(v___x_688_);
lean_inc(v_toBind_687_);
v___f_706_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__16___boxed), 22, 21);
lean_closure_set(v___f_706_, 0, v_froms_682_);
lean_closure_set(v___f_706_, 1, v_tos_683_);
lean_closure_set(v___f_706_, 2, v_toPure_684_);
lean_closure_set(v___f_706_, 3, v_inst_685_);
lean_closure_set(v___f_706_, 4, v_inst_686_);
lean_closure_set(v___f_706_, 5, v_toBind_687_);
lean_closure_set(v___f_706_, 6, v___x_688_);
lean_closure_set(v___f_706_, 7, v___x_689_);
lean_closure_set(v___f_706_, 8, v___x_690_);
lean_closure_set(v___f_706_, 9, v___x_691_);
lean_closure_set(v___f_706_, 10, v___x_692_);
lean_closure_set(v___f_706_, 11, v___x_693_);
lean_closure_set(v___f_706_, 12, v___x_694_);
lean_closure_set(v___f_706_, 13, v___f_695_);
lean_closure_set(v___f_706_, 14, v___x_696_);
lean_closure_set(v___f_706_, 15, v___x_697_);
lean_closure_set(v___f_706_, 16, v___x_698_);
lean_closure_set(v___f_706_, 17, v_a_704_);
lean_closure_set(v___f_706_, 18, v___x_705_);
lean_closure_set(v___f_706_, 19, v_ref_700_);
lean_closure_set(v___f_706_, 20, v___f_701_);
v___x_707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_707_, 0, v_a_704_);
lean_ctor_set(v___x_707_, 1, v___x_702_);
v___x_3744__overap_708_ = l_Lean_Linter_checkAmbiguousOpen___redArg(v___x_688_, v___x_690_, v___x_697_, v___x_696_, v___f_695_, v___x_698_, v_nsStx_703_, v___x_707_);
v___x_709_ = lean_apply_1(v___x_3744__overap_708_, v_ref_700_);
v___x_710_ = lean_apply_4(v_toBind_687_, lean_box(0), lean_box(0), v___x_709_, v___f_706_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_froms_711_ = _args[0];
lean_object* v_tos_712_ = _args[1];
lean_object* v_toPure_713_ = _args[2];
lean_object* v_inst_714_ = _args[3];
lean_object* v_inst_715_ = _args[4];
lean_object* v_toBind_716_ = _args[5];
lean_object* v___x_717_ = _args[6];
lean_object* v___x_718_ = _args[7];
lean_object* v___x_719_ = _args[8];
lean_object* v___x_720_ = _args[9];
lean_object* v___x_721_ = _args[10];
lean_object* v___x_722_ = _args[11];
lean_object* v___x_723_ = _args[12];
lean_object* v___f_724_ = _args[13];
lean_object* v___x_725_ = _args[14];
lean_object* v___x_726_ = _args[15];
lean_object* v___x_727_ = _args[16];
lean_object* v___x_728_ = _args[17];
lean_object* v_ref_729_ = _args[18];
lean_object* v___f_730_ = _args[19];
lean_object* v___x_731_ = _args[20];
lean_object* v_nsStx_732_ = _args[21];
lean_object* v_a_733_ = _args[22];
_start:
{
size_t v___x_4658__boxed_734_; lean_object* v_res_735_; 
v___x_4658__boxed_734_ = lean_unbox_usize(v___x_728_);
lean_dec(v___x_728_);
v_res_735_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17(v_froms_711_, v_tos_712_, v_toPure_713_, v_inst_714_, v_inst_715_, v_toBind_716_, v___x_717_, v___x_718_, v___x_719_, v___x_720_, v___x_721_, v___x_722_, v___x_723_, v___f_724_, v___x_725_, v___x_726_, v___x_727_, v___x_4658__boxed_734_, v_ref_729_, v___f_730_, v___x_731_, v_nsStx_732_, v_a_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18(uint8_t v___x_736_, uint8_t v___x_737_, lean_object* v_x1_738_, lean_object* v_x2_739_){
_start:
{
lean_object* v_fst_740_; uint8_t v___x_741_; 
v_fst_740_ = lean_ctor_get(v_x1_738_, 0);
v___x_741_ = lean_unbox(v_fst_740_);
if (v___x_741_ == 0)
{
lean_object* v_snd_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_x2_739_);
v_snd_742_ = lean_ctor_get(v_x1_738_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x1_738_);
if (v_isSharedCheck_750_ == 0)
{
lean_object* v_unused_751_; 
v_unused_751_ = lean_ctor_get(v_x1_738_, 0);
lean_dec(v_unused_751_);
v___x_744_ = v_x1_738_;
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_snd_742_);
lean_dec(v_x1_738_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = lean_box(v___x_736_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_746_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_746_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_snd_742_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
else
{
lean_object* v_snd_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_761_; 
v_snd_752_ = lean_ctor_get(v_x1_738_, 1);
v_isSharedCheck_761_ = !lean_is_exclusive(v_x1_738_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v_x1_738_, 0);
lean_dec(v_unused_762_);
v___x_754_ = v_x1_738_;
v_isShared_755_ = v_isSharedCheck_761_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_snd_752_);
lean_dec(v_x1_738_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_761_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_756_ = lean_array_push(v_snd_752_, v_x2_739_);
v___x_757_ = lean_box(v___x_737_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 1, v___x_756_);
lean_ctor_set(v___x_754_, 0, v___x_757_);
v___x_759_ = v___x_754_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_756_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18___boxed(lean_object* v___x_763_, lean_object* v___x_764_, lean_object* v_x1_765_, lean_object* v_x2_766_){
_start:
{
uint8_t v___x_4703__boxed_767_; uint8_t v___x_4704__boxed_768_; lean_object* v_res_769_; 
v___x_4703__boxed_767_ = lean_unbox(v___x_763_);
v___x_4704__boxed_768_ = lean_unbox(v___x_764_);
v_res_769_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18(v___x_4703__boxed_767_, v___x_4704__boxed_768_, v_x1_765_, v_x2_766_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20(lean_object* v_ids_770_, lean_object* v___f_771_, lean_object* v_a_772_, lean_object* v_inst_773_, lean_object* v_ref_774_, lean_object* v_toBind_775_, lean_object* v___f_776_, lean_object* v_a_777_){
_start:
{
lean_object* v___x_778_; size_t v_sz_779_; size_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_778_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9));
v_sz_779_ = lean_array_size(v_ids_770_);
v___x_780_ = ((size_t)0ULL);
v___x_781_ = l_unsafeCast___redArg(v_ids_770_);
v___x_782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_778_, v___f_771_, v_sz_779_, v___x_780_, v___x_781_);
v___x_783_ = l_unsafeCast___redArg(v___x_782_);
lean_dec(v___x_782_);
v___x_784_ = lean_array_to_list(v___x_783_);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v_a_772_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_773_, v___x_785_, v_ref_774_);
v___x_787_ = lean_apply_4(v_toBind_775_, lean_box(0), lean_box(0), v___x_786_, v___f_776_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20___boxed(lean_object* v_ids_788_, lean_object* v___f_789_, lean_object* v_a_790_, lean_object* v_inst_791_, lean_object* v_ref_792_, lean_object* v_toBind_793_, lean_object* v___f_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20(v_ids_788_, v___f_789_, v_a_790_, v_inst_791_, v_ref_792_, v_toBind_793_, v___f_794_, v_a_795_);
lean_dec(v_ref_792_);
lean_dec(v_ids_788_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21(lean_object* v___x_797_, lean_object* v_toPure_798_, lean_object* v___x_799_, lean_object* v___x_800_, lean_object* v___x_801_, lean_object* v___x_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v___y_805_, lean_object* v_toBind_806_, lean_object* v___f_807_, lean_object* v_a_808_){
_start:
{
uint8_t v_enabled_809_; 
v_enabled_809_ = lean_ctor_get_uint8(v_a_808_, sizeof(void*)*3);
if (v_enabled_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; 
lean_dec(v___f_807_);
lean_dec(v_toBind_806_);
lean_dec(v_a_804_);
lean_dec(v_a_803_);
lean_dec_ref(v___x_802_);
lean_dec_ref(v___x_801_);
lean_dec_ref(v___x_800_);
lean_dec_ref(v___x_799_);
v___x_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_797_);
v___x_811_ = lean_apply_2(v_toPure_798_, lean_box(0), v___x_810_);
return v___x_811_;
}
else
{
lean_object* v___x_812_; lean_object* v___x_3791__overap_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_dec(v_toPure_798_);
v___x_812_ = lean_box(0);
v___x_3791__overap_813_ = l_Lean_Elab_addConstInfo___redArg(v___x_799_, v___x_800_, v___x_801_, v___x_802_, v_a_803_, v_a_804_, v___x_812_);
lean_inc(v___y_805_);
v___x_814_ = lean_apply_1(v___x_3791__overap_813_, v___y_805_);
v___x_815_ = lean_apply_4(v_toBind_806_, lean_box(0), lean_box(0), v___x_814_, v___f_807_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21___boxed(lean_object* v___x_816_, lean_object* v_toPure_817_, lean_object* v___x_818_, lean_object* v___x_819_, lean_object* v___x_820_, lean_object* v___x_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v___y_824_, lean_object* v_toBind_825_, lean_object* v___f_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21(v___x_816_, v_toPure_817_, v___x_818_, v___x_819_, v___x_820_, v___x_821_, v_a_822_, v_a_823_, v___y_824_, v_toBind_825_, v___f_826_, v_a_827_);
lean_dec_ref(v_a_827_);
lean_dec(v___y_824_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19(lean_object* v_inst_829_, lean_object* v___x_830_, lean_object* v_toPure_831_, lean_object* v___x_832_, lean_object* v___x_833_, lean_object* v___x_834_, lean_object* v___x_835_, lean_object* v_a_836_, lean_object* v___y_837_, lean_object* v_toBind_838_, lean_object* v___f_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_getInfoState_841_; lean_object* v___f_842_; lean_object* v___x_843_; 
v_getInfoState_841_ = lean_ctor_get(v_inst_829_, 0);
lean_inc(v_getInfoState_841_);
lean_dec_ref(v_inst_829_);
lean_inc(v_toBind_838_);
lean_inc(v___y_837_);
v___f_842_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__21___boxed), 12, 11);
lean_closure_set(v___f_842_, 0, v___x_830_);
lean_closure_set(v___f_842_, 1, v_toPure_831_);
lean_closure_set(v___f_842_, 2, v___x_832_);
lean_closure_set(v___f_842_, 3, v___x_833_);
lean_closure_set(v___f_842_, 4, v___x_834_);
lean_closure_set(v___f_842_, 5, v___x_835_);
lean_closure_set(v___f_842_, 6, v_a_836_);
lean_closure_set(v___f_842_, 7, v_a_840_);
lean_closure_set(v___f_842_, 8, v___y_837_);
lean_closure_set(v___f_842_, 9, v_toBind_838_);
lean_closure_set(v___f_842_, 10, v___f_839_);
v___x_843_ = lean_apply_4(v_toBind_838_, lean_box(0), lean_box(0), v_getInfoState_841_, v___f_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19___boxed(lean_object* v_inst_844_, lean_object* v___x_845_, lean_object* v_toPure_846_, lean_object* v___x_847_, lean_object* v___x_848_, lean_object* v___x_849_, lean_object* v___x_850_, lean_object* v_a_851_, lean_object* v___y_852_, lean_object* v_toBind_853_, lean_object* v___f_854_, lean_object* v_a_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19(v_inst_844_, v___x_845_, v_toPure_846_, v___x_847_, v___x_848_, v___x_849_, v___x_850_, v_a_851_, v___y_852_, v_toBind_853_, v___f_854_, v_a_855_);
lean_dec(v___y_852_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22(lean_object* v_inst_857_, lean_object* v___x_858_, lean_object* v_toPure_859_, lean_object* v___x_860_, lean_object* v___x_861_, lean_object* v___x_862_, lean_object* v___x_863_, lean_object* v_toBind_864_, lean_object* v___f_865_, lean_object* v___x_866_, lean_object* v___x_867_, lean_object* v___x_868_, lean_object* v___f_869_, lean_object* v___x_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_x_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___f_878_; lean_object* v___x_3821__overap_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_inc(v_toBind_864_);
lean_inc_n(v___y_877_, 2);
lean_inc(v_a_874_);
lean_inc_ref(v___x_862_);
lean_inc_ref(v___x_860_);
v___f_878_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__19___boxed), 12, 11);
lean_closure_set(v___f_878_, 0, v_inst_857_);
lean_closure_set(v___f_878_, 1, v___x_858_);
lean_closure_set(v___f_878_, 2, v_toPure_859_);
lean_closure_set(v___f_878_, 3, v___x_860_);
lean_closure_set(v___f_878_, 4, v___x_861_);
lean_closure_set(v___f_878_, 5, v___x_862_);
lean_closure_set(v___f_878_, 6, v___x_863_);
lean_closure_set(v___f_878_, 7, v_a_874_);
lean_closure_set(v___f_878_, 8, v___y_877_);
lean_closure_set(v___f_878_, 9, v_toBind_864_);
lean_closure_set(v___f_878_, 10, v___f_865_);
v___x_3821__overap_879_ = l_Lean_Elab_OpenDecl_resolveId___redArg(v___x_860_, v___x_862_, v___x_866_, v___x_867_, v___x_868_, v___f_869_, v___x_870_, v___x_871_, v___x_872_, v_a_873_, v_a_874_);
v___x_880_ = lean_apply_1(v___x_3821__overap_879_, v___y_877_);
v___x_881_ = lean_apply_4(v_toBind_864_, lean_box(0), lean_box(0), v___x_880_, v___f_878_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22___boxed(lean_object** _args){
lean_object* v_inst_882_ = _args[0];
lean_object* v___x_883_ = _args[1];
lean_object* v_toPure_884_ = _args[2];
lean_object* v___x_885_ = _args[3];
lean_object* v___x_886_ = _args[4];
lean_object* v___x_887_ = _args[5];
lean_object* v___x_888_ = _args[6];
lean_object* v_toBind_889_ = _args[7];
lean_object* v___f_890_ = _args[8];
lean_object* v___x_891_ = _args[9];
lean_object* v___x_892_ = _args[10];
lean_object* v___x_893_ = _args[11];
lean_object* v___f_894_ = _args[12];
lean_object* v___x_895_ = _args[13];
lean_object* v___x_896_ = _args[14];
lean_object* v___x_897_ = _args[15];
lean_object* v_a_898_ = _args[16];
lean_object* v_a_899_ = _args[17];
lean_object* v_x_900_ = _args[18];
lean_object* v___y_901_ = _args[19];
lean_object* v___y_902_ = _args[20];
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22(v_inst_882_, v___x_883_, v_toPure_884_, v___x_885_, v___x_886_, v___x_887_, v___x_888_, v_toBind_889_, v___f_890_, v___x_891_, v___x_892_, v___x_893_, v___f_894_, v___x_895_, v___x_896_, v___x_897_, v_a_898_, v_a_899_, v_x_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23(lean_object* v_toPure_904_, lean_object* v_inst_905_, lean_object* v___x_906_, lean_object* v___x_907_, lean_object* v___x_908_, lean_object* v___x_909_, lean_object* v_toBind_910_, lean_object* v___x_911_, lean_object* v___x_912_, lean_object* v___x_913_, lean_object* v___f_914_, lean_object* v___x_915_, lean_object* v___x_916_, lean_object* v___x_917_, lean_object* v_a_918_, lean_object* v_ids_919_, lean_object* v_ref_920_, lean_object* v___f_921_, lean_object* v_a_922_){
_start:
{
lean_object* v___x_923_; lean_object* v___f_924_; lean_object* v___f_925_; size_t v_sz_926_; size_t v___x_927_; lean_object* v___x_3840__overap_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_923_ = lean_box(0);
lean_inc(v_toPure_904_);
v___f_924_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8), 3, 2);
lean_closure_set(v___f_924_, 0, v___x_923_);
lean_closure_set(v___f_924_, 1, v_toPure_904_);
lean_inc(v_toBind_910_);
lean_inc_ref(v___x_906_);
v___f_925_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__22___boxed), 21, 17);
lean_closure_set(v___f_925_, 0, v_inst_905_);
lean_closure_set(v___f_925_, 1, v___x_923_);
lean_closure_set(v___f_925_, 2, v_toPure_904_);
lean_closure_set(v___f_925_, 3, v___x_906_);
lean_closure_set(v___f_925_, 4, v___x_907_);
lean_closure_set(v___f_925_, 5, v___x_908_);
lean_closure_set(v___f_925_, 6, v___x_909_);
lean_closure_set(v___f_925_, 7, v_toBind_910_);
lean_closure_set(v___f_925_, 8, v___f_924_);
lean_closure_set(v___f_925_, 9, v___x_911_);
lean_closure_set(v___f_925_, 10, v___x_912_);
lean_closure_set(v___f_925_, 11, v___x_913_);
lean_closure_set(v___f_925_, 12, v___f_914_);
lean_closure_set(v___f_925_, 13, v___x_915_);
lean_closure_set(v___f_925_, 14, v___x_916_);
lean_closure_set(v___f_925_, 15, v___x_917_);
lean_closure_set(v___f_925_, 16, v_a_918_);
v_sz_926_ = lean_array_size(v_ids_919_);
v___x_927_ = ((size_t)0ULL);
v___x_3840__overap_928_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_906_, v_ids_919_, v___f_925_, v_sz_926_, v___x_927_, v___x_923_);
v___x_929_ = lean_apply_1(v___x_3840__overap_928_, v_ref_920_);
v___x_930_ = lean_apply_4(v_toBind_910_, lean_box(0), lean_box(0), v___x_929_, v___f_921_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23___boxed(lean_object** _args){
lean_object* v_toPure_931_ = _args[0];
lean_object* v_inst_932_ = _args[1];
lean_object* v___x_933_ = _args[2];
lean_object* v___x_934_ = _args[3];
lean_object* v___x_935_ = _args[4];
lean_object* v___x_936_ = _args[5];
lean_object* v_toBind_937_ = _args[6];
lean_object* v___x_938_ = _args[7];
lean_object* v___x_939_ = _args[8];
lean_object* v___x_940_ = _args[9];
lean_object* v___f_941_ = _args[10];
lean_object* v___x_942_ = _args[11];
lean_object* v___x_943_ = _args[12];
lean_object* v___x_944_ = _args[13];
lean_object* v_a_945_ = _args[14];
lean_object* v_ids_946_ = _args[15];
lean_object* v_ref_947_ = _args[16];
lean_object* v___f_948_ = _args[17];
lean_object* v_a_949_ = _args[18];
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23(v_toPure_931_, v_inst_932_, v___x_933_, v___x_934_, v___x_935_, v___x_936_, v_toBind_937_, v___x_938_, v___x_939_, v___x_940_, v___f_941_, v___x_942_, v___x_943_, v___x_944_, v_a_945_, v_ids_946_, v_ref_947_, v___f_948_, v_a_949_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__24(lean_object* v___x_951_, lean_object* v___x_952_, lean_object* v___f_953_, lean_object* v_a_954_, lean_object* v_ref_955_, lean_object* v_toBind_956_, lean_object* v___f_957_, lean_object* v_a_958_){
_start:
{
lean_object* v___x_3846__overap_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_3846__overap_959_ = l_Lean_activateScoped___redArg(v___x_951_, v___x_952_, v___f_953_, v_a_954_);
v___x_960_ = lean_apply_1(v___x_3846__overap_959_, v_ref_955_);
v___x_961_ = lean_apply_4(v_toBind_956_, lean_box(0), lean_box(0), v___x_960_, v___f_957_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25(lean_object* v_ids_962_, lean_object* v___f_963_, lean_object* v_inst_964_, lean_object* v_ref_965_, lean_object* v_toBind_966_, lean_object* v___f_967_, lean_object* v_toPure_968_, lean_object* v_inst_969_, lean_object* v___x_970_, lean_object* v___x_971_, lean_object* v___x_972_, lean_object* v___x_973_, lean_object* v___x_974_, lean_object* v___x_975_, lean_object* v___x_976_, lean_object* v___f_977_, lean_object* v___x_978_, lean_object* v___x_979_, lean_object* v___x_980_, lean_object* v___f_981_, lean_object* v___x_982_, lean_object* v_nsStx_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___f_985_; lean_object* v___f_986_; lean_object* v___f_987_; lean_object* v___x_988_; lean_object* v___x_3869__overap_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_inc_n(v_toBind_966_, 3);
lean_inc_n(v_ref_965_, 3);
lean_inc_n(v_a_984_, 3);
lean_inc(v_ids_962_);
v___f_985_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__20___boxed), 8, 7);
lean_closure_set(v___f_985_, 0, v_ids_962_);
lean_closure_set(v___f_985_, 1, v___f_963_);
lean_closure_set(v___f_985_, 2, v_a_984_);
lean_closure_set(v___f_985_, 3, v_inst_964_);
lean_closure_set(v___f_985_, 4, v_ref_965_);
lean_closure_set(v___f_985_, 5, v_toBind_966_);
lean_closure_set(v___f_985_, 6, v___f_967_);
lean_inc_ref(v___x_980_);
lean_inc(v___x_979_);
lean_inc_ref(v___x_978_);
lean_inc(v___f_977_);
lean_inc_ref_n(v___x_972_, 2);
lean_inc_ref_n(v___x_970_, 2);
v___f_986_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__23___boxed), 19, 18);
lean_closure_set(v___f_986_, 0, v_toPure_968_);
lean_closure_set(v___f_986_, 1, v_inst_969_);
lean_closure_set(v___f_986_, 2, v___x_970_);
lean_closure_set(v___f_986_, 3, v___x_971_);
lean_closure_set(v___f_986_, 4, v___x_972_);
lean_closure_set(v___f_986_, 5, v___x_973_);
lean_closure_set(v___f_986_, 6, v_toBind_966_);
lean_closure_set(v___f_986_, 7, v___x_974_);
lean_closure_set(v___f_986_, 8, v___x_975_);
lean_closure_set(v___f_986_, 9, v___x_976_);
lean_closure_set(v___f_986_, 10, v___f_977_);
lean_closure_set(v___f_986_, 11, v___x_978_);
lean_closure_set(v___f_986_, 12, v___x_979_);
lean_closure_set(v___f_986_, 13, v___x_980_);
lean_closure_set(v___f_986_, 14, v_a_984_);
lean_closure_set(v___f_986_, 15, v_ids_962_);
lean_closure_set(v___f_986_, 16, v_ref_965_);
lean_closure_set(v___f_986_, 17, v___f_985_);
v___f_987_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__24), 8, 7);
lean_closure_set(v___f_987_, 0, v___x_970_);
lean_closure_set(v___f_987_, 1, v___x_972_);
lean_closure_set(v___f_987_, 2, v___f_981_);
lean_closure_set(v___f_987_, 3, v_a_984_);
lean_closure_set(v___f_987_, 4, v_ref_965_);
lean_closure_set(v___f_987_, 5, v_toBind_966_);
lean_closure_set(v___f_987_, 6, v___f_986_);
v___x_988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_988_, 0, v_a_984_);
lean_ctor_set(v___x_988_, 1, v___x_982_);
v___x_3869__overap_989_ = l_Lean_Linter_checkAmbiguousOpen___redArg(v___x_970_, v___x_972_, v___x_979_, v___x_978_, v___f_977_, v___x_980_, v_nsStx_983_, v___x_988_);
v___x_990_ = lean_apply_1(v___x_3869__overap_989_, v_ref_965_);
v___x_991_ = lean_apply_4(v_toBind_966_, lean_box(0), lean_box(0), v___x_990_, v___f_987_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25___boxed(lean_object** _args){
lean_object* v_ids_992_ = _args[0];
lean_object* v___f_993_ = _args[1];
lean_object* v_inst_994_ = _args[2];
lean_object* v_ref_995_ = _args[3];
lean_object* v_toBind_996_ = _args[4];
lean_object* v___f_997_ = _args[5];
lean_object* v_toPure_998_ = _args[6];
lean_object* v_inst_999_ = _args[7];
lean_object* v___x_1000_ = _args[8];
lean_object* v___x_1001_ = _args[9];
lean_object* v___x_1002_ = _args[10];
lean_object* v___x_1003_ = _args[11];
lean_object* v___x_1004_ = _args[12];
lean_object* v___x_1005_ = _args[13];
lean_object* v___x_1006_ = _args[14];
lean_object* v___f_1007_ = _args[15];
lean_object* v___x_1008_ = _args[16];
lean_object* v___x_1009_ = _args[17];
lean_object* v___x_1010_ = _args[18];
lean_object* v___f_1011_ = _args[19];
lean_object* v___x_1012_ = _args[20];
lean_object* v_nsStx_1013_ = _args[21];
lean_object* v_a_1014_ = _args[22];
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25(v_ids_992_, v___f_993_, v_inst_994_, v_ref_995_, v_toBind_996_, v___f_997_, v_toPure_998_, v_inst_999_, v___x_1000_, v___x_1001_, v___x_1002_, v___x_1003_, v___x_1004_, v___x_1005_, v___x_1006_, v___f_1007_, v___x_1008_, v___x_1009_, v___x_1010_, v___f_1011_, v___x_1012_, v_nsStx_1013_, v_a_1014_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28(lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_inst_1018_, lean_object* v_toBind_1019_, lean_object* v___f_1020_, lean_object* v_____r_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1023_ = l_Lean_TSyntax_getId(v_a_1016_);
v___x_1024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
lean_ctor_set(v___x_1024_, 1, v_a_1017_);
v___x_1025_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_1018_, v___x_1024_, v___y_1022_);
v___x_1026_ = lean_apply_4(v_toBind_1019_, lean_box(0), lean_box(0), v___x_1025_, v___f_1020_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28___boxed(lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_inst_1029_, lean_object* v_toBind_1030_, lean_object* v___f_1031_, lean_object* v_____r_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28(v_a_1027_, v_a_1028_, v_inst_1029_, v_toBind_1030_, v___f_1031_, v_____r_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec(v_a_1027_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27(lean_object* v___f_1035_, lean_object* v___x_1036_, lean_object* v___y_1037_, lean_object* v___x_1038_, lean_object* v___x_1039_, lean_object* v___x_1040_, lean_object* v___x_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_toBind_1044_, lean_object* v___f_1045_, lean_object* v_a_1046_){
_start:
{
uint8_t v_enabled_1047_; 
v_enabled_1047_ = lean_ctor_get_uint8(v_a_1046_, sizeof(void*)*3);
if (v_enabled_1047_ == 0)
{
lean_object* v___x_1048_; 
lean_dec(v___f_1045_);
lean_dec(v_toBind_1044_);
lean_dec(v_a_1043_);
lean_dec(v_a_1042_);
lean_dec_ref(v___x_1041_);
lean_dec_ref(v___x_1040_);
lean_dec_ref(v___x_1039_);
lean_dec_ref(v___x_1038_);
lean_inc(v___y_1037_);
v___x_1048_ = lean_apply_2(v___f_1035_, v___x_1036_, v___y_1037_);
return v___x_1048_;
}
else
{
lean_object* v___x_1049_; lean_object* v___x_3898__overap_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec(v___f_1035_);
v___x_1049_ = lean_box(0);
v___x_3898__overap_1050_ = l_Lean_Elab_addConstInfo___redArg(v___x_1038_, v___x_1039_, v___x_1040_, v___x_1041_, v_a_1042_, v_a_1043_, v___x_1049_);
lean_inc(v___y_1037_);
v___x_1051_ = lean_apply_1(v___x_3898__overap_1050_, v___y_1037_);
v___x_1052_ = lean_apply_4(v_toBind_1044_, lean_box(0), lean_box(0), v___x_1051_, v___f_1045_);
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27___boxed(lean_object* v___f_1053_, lean_object* v___x_1054_, lean_object* v___y_1055_, lean_object* v___x_1056_, lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v___x_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_toBind_1062_, lean_object* v___f_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27(v___f_1053_, v___x_1054_, v___y_1055_, v___x_1056_, v___x_1057_, v___x_1058_, v___x_1059_, v_a_1060_, v_a_1061_, v_toBind_1062_, v___f_1063_, v_a_1064_);
lean_dec_ref(v_a_1064_);
lean_dec(v___y_1055_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26(lean_object* v_inst_1066_, lean_object* v_a_1067_, lean_object* v_inst_1068_, lean_object* v_toBind_1069_, lean_object* v___f_1070_, lean_object* v___y_1071_, lean_object* v___x_1072_, lean_object* v___x_1073_, lean_object* v___x_1074_, lean_object* v___x_1075_, lean_object* v___x_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_getInfoState_1078_; lean_object* v___f_1079_; lean_object* v___f_1080_; lean_object* v___f_1081_; lean_object* v___x_1082_; 
v_getInfoState_1078_ = lean_ctor_get(v_inst_1066_, 0);
lean_inc(v_getInfoState_1078_);
lean_dec_ref(v_inst_1066_);
lean_inc_n(v_toBind_1069_, 2);
lean_inc(v_a_1077_);
lean_inc(v_a_1067_);
v___f_1079_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__28___boxed), 7, 5);
lean_closure_set(v___f_1079_, 0, v_a_1067_);
lean_closure_set(v___f_1079_, 1, v_a_1077_);
lean_closure_set(v___f_1079_, 2, v_inst_1068_);
lean_closure_set(v___f_1079_, 3, v_toBind_1069_);
lean_closure_set(v___f_1079_, 4, v___f_1070_);
lean_inc_n(v___y_1071_, 2);
lean_inc_ref(v___f_1079_);
v___f_1080_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__11___boxed), 3, 2);
lean_closure_set(v___f_1080_, 0, v___f_1079_);
lean_closure_set(v___f_1080_, 1, v___y_1071_);
v___f_1081_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__27___boxed), 12, 11);
lean_closure_set(v___f_1081_, 0, v___f_1079_);
lean_closure_set(v___f_1081_, 1, v___x_1072_);
lean_closure_set(v___f_1081_, 2, v___y_1071_);
lean_closure_set(v___f_1081_, 3, v___x_1073_);
lean_closure_set(v___f_1081_, 4, v___x_1074_);
lean_closure_set(v___f_1081_, 5, v___x_1075_);
lean_closure_set(v___f_1081_, 6, v___x_1076_);
lean_closure_set(v___f_1081_, 7, v_a_1067_);
lean_closure_set(v___f_1081_, 8, v_a_1077_);
lean_closure_set(v___f_1081_, 9, v_toBind_1069_);
lean_closure_set(v___f_1081_, 10, v___f_1080_);
v___x_1082_ = lean_apply_4(v_toBind_1069_, lean_box(0), lean_box(0), v_getInfoState_1078_, v___f_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26___boxed(lean_object* v_inst_1083_, lean_object* v_a_1084_, lean_object* v_inst_1085_, lean_object* v_toBind_1086_, lean_object* v___f_1087_, lean_object* v___y_1088_, lean_object* v___x_1089_, lean_object* v___x_1090_, lean_object* v___x_1091_, lean_object* v___x_1092_, lean_object* v___x_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26(v_inst_1083_, v_a_1084_, v_inst_1085_, v_toBind_1086_, v___f_1087_, v___y_1088_, v___x_1089_, v___x_1090_, v___x_1091_, v___x_1092_, v___x_1093_, v_a_1094_);
lean_dec(v___y_1088_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29(lean_object* v_inst_1096_, lean_object* v_inst_1097_, lean_object* v_toBind_1098_, lean_object* v___f_1099_, lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v___x_1104_, lean_object* v___x_1105_, lean_object* v___x_1106_, lean_object* v___x_1107_, lean_object* v___f_1108_, lean_object* v___x_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_x_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___f_1117_; lean_object* v___x_3932__overap_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_inc_ref(v___x_1103_);
lean_inc_ref(v___x_1101_);
lean_inc_n(v___y_1116_, 2);
lean_inc(v_toBind_1098_);
lean_inc(v_a_1113_);
v___f_1117_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__26___boxed), 12, 11);
lean_closure_set(v___f_1117_, 0, v_inst_1096_);
lean_closure_set(v___f_1117_, 1, v_a_1113_);
lean_closure_set(v___f_1117_, 2, v_inst_1097_);
lean_closure_set(v___f_1117_, 3, v_toBind_1098_);
lean_closure_set(v___f_1117_, 4, v___f_1099_);
lean_closure_set(v___f_1117_, 5, v___y_1116_);
lean_closure_set(v___f_1117_, 6, v___x_1100_);
lean_closure_set(v___f_1117_, 7, v___x_1101_);
lean_closure_set(v___f_1117_, 8, v___x_1102_);
lean_closure_set(v___f_1117_, 9, v___x_1103_);
lean_closure_set(v___f_1117_, 10, v___x_1104_);
v___x_3932__overap_1118_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg(v___x_1101_, v___x_1103_, v___x_1105_, v___x_1106_, v___x_1107_, v___f_1108_, v___x_1109_, v___x_1110_, v___x_1111_, v_a_1112_, v_a_1113_);
v___x_1119_ = lean_apply_1(v___x_3932__overap_1118_, v___y_1116_);
v___x_1120_ = lean_apply_4(v_toBind_1098_, lean_box(0), lean_box(0), v___x_1119_, v___f_1117_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29___boxed(lean_object** _args){
lean_object* v_inst_1121_ = _args[0];
lean_object* v_inst_1122_ = _args[1];
lean_object* v_toBind_1123_ = _args[2];
lean_object* v___f_1124_ = _args[3];
lean_object* v___x_1125_ = _args[4];
lean_object* v___x_1126_ = _args[5];
lean_object* v___x_1127_ = _args[6];
lean_object* v___x_1128_ = _args[7];
lean_object* v___x_1129_ = _args[8];
lean_object* v___x_1130_ = _args[9];
lean_object* v___x_1131_ = _args[10];
lean_object* v___x_1132_ = _args[11];
lean_object* v___f_1133_ = _args[12];
lean_object* v___x_1134_ = _args[13];
lean_object* v___x_1135_ = _args[14];
lean_object* v___x_1136_ = _args[15];
lean_object* v_a_1137_ = _args[16];
lean_object* v_a_1138_ = _args[17];
lean_object* v_x_1139_ = _args[18];
lean_object* v___y_1140_ = _args[19];
lean_object* v___y_1141_ = _args[20];
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29(v_inst_1121_, v_inst_1122_, v_toBind_1123_, v___f_1124_, v___x_1125_, v___x_1126_, v___x_1127_, v___x_1128_, v___x_1129_, v___x_1130_, v___x_1131_, v___x_1132_, v___f_1133_, v___x_1134_, v___x_1135_, v___x_1136_, v_a_1137_, v_a_1138_, v_x_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30(lean_object* v_toPure_1143_, lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_toBind_1146_, lean_object* v___x_1147_, lean_object* v___x_1148_, lean_object* v___x_1149_, lean_object* v___x_1150_, lean_object* v___x_1151_, lean_object* v___x_1152_, lean_object* v___x_1153_, lean_object* v___f_1154_, lean_object* v___x_1155_, lean_object* v___x_1156_, lean_object* v___x_1157_, lean_object* v_a_1158_, lean_object* v_ids_1159_, lean_object* v_ref_1160_, lean_object* v___f_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v___x_1163_; lean_object* v___f_1164_; lean_object* v___f_1165_; size_t v_sz_1166_; size_t v___x_1167_; lean_object* v___x_3952__overap_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1163_ = lean_box(0);
v___f_1164_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8), 3, 2);
lean_closure_set(v___f_1164_, 0, v___x_1163_);
lean_closure_set(v___f_1164_, 1, v_toPure_1143_);
lean_inc_ref(v___x_1147_);
lean_inc(v_toBind_1146_);
v___f_1165_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__29___boxed), 21, 17);
lean_closure_set(v___f_1165_, 0, v_inst_1144_);
lean_closure_set(v___f_1165_, 1, v_inst_1145_);
lean_closure_set(v___f_1165_, 2, v_toBind_1146_);
lean_closure_set(v___f_1165_, 3, v___f_1164_);
lean_closure_set(v___f_1165_, 4, v___x_1163_);
lean_closure_set(v___f_1165_, 5, v___x_1147_);
lean_closure_set(v___f_1165_, 6, v___x_1148_);
lean_closure_set(v___f_1165_, 7, v___x_1149_);
lean_closure_set(v___f_1165_, 8, v___x_1150_);
lean_closure_set(v___f_1165_, 9, v___x_1151_);
lean_closure_set(v___f_1165_, 10, v___x_1152_);
lean_closure_set(v___f_1165_, 11, v___x_1153_);
lean_closure_set(v___f_1165_, 12, v___f_1154_);
lean_closure_set(v___f_1165_, 13, v___x_1155_);
lean_closure_set(v___f_1165_, 14, v___x_1156_);
lean_closure_set(v___f_1165_, 15, v___x_1157_);
lean_closure_set(v___f_1165_, 16, v_a_1158_);
v_sz_1166_ = lean_array_size(v_ids_1159_);
v___x_1167_ = ((size_t)0ULL);
v___x_3952__overap_1168_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1147_, v_ids_1159_, v___f_1165_, v_sz_1166_, v___x_1167_, v___x_1163_);
v___x_1169_ = lean_apply_1(v___x_3952__overap_1168_, v_ref_1160_);
v___x_1170_ = lean_apply_4(v_toBind_1146_, lean_box(0), lean_box(0), v___x_1169_, v___f_1161_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30___boxed(lean_object** _args){
lean_object* v_toPure_1171_ = _args[0];
lean_object* v_inst_1172_ = _args[1];
lean_object* v_inst_1173_ = _args[2];
lean_object* v_toBind_1174_ = _args[3];
lean_object* v___x_1175_ = _args[4];
lean_object* v___x_1176_ = _args[5];
lean_object* v___x_1177_ = _args[6];
lean_object* v___x_1178_ = _args[7];
lean_object* v___x_1179_ = _args[8];
lean_object* v___x_1180_ = _args[9];
lean_object* v___x_1181_ = _args[10];
lean_object* v___f_1182_ = _args[11];
lean_object* v___x_1183_ = _args[12];
lean_object* v___x_1184_ = _args[13];
lean_object* v___x_1185_ = _args[14];
lean_object* v_a_1186_ = _args[15];
lean_object* v_ids_1187_ = _args[16];
lean_object* v_ref_1188_ = _args[17];
lean_object* v___f_1189_ = _args[18];
lean_object* v_a_1190_ = _args[19];
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30(v_toPure_1171_, v_inst_1172_, v_inst_1173_, v_toBind_1174_, v___x_1175_, v___x_1176_, v___x_1177_, v___x_1178_, v___x_1179_, v___x_1180_, v___x_1181_, v___f_1182_, v___x_1183_, v___x_1184_, v___x_1185_, v_a_1186_, v_ids_1187_, v_ref_1188_, v___f_1189_, v_a_1190_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31(lean_object* v_toPure_1192_, lean_object* v_inst_1193_, lean_object* v_inst_1194_, lean_object* v_toBind_1195_, lean_object* v___x_1196_, lean_object* v___x_1197_, lean_object* v___x_1198_, lean_object* v___x_1199_, lean_object* v___x_1200_, lean_object* v___x_1201_, lean_object* v___x_1202_, lean_object* v___f_1203_, lean_object* v___x_1204_, lean_object* v___x_1205_, lean_object* v___x_1206_, lean_object* v_ids_1207_, lean_object* v_ref_1208_, lean_object* v___f_1209_, lean_object* v_ns_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v___f_1212_; lean_object* v___x_3969__overap_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_inc(v_ref_1208_);
lean_inc(v_a_1211_);
lean_inc_ref(v___x_1206_);
lean_inc(v___x_1205_);
lean_inc_ref(v___x_1204_);
lean_inc(v___f_1203_);
lean_inc_ref(v___x_1198_);
lean_inc_ref(v___x_1196_);
lean_inc(v_toBind_1195_);
v___f_1212_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__30___boxed), 20, 19);
lean_closure_set(v___f_1212_, 0, v_toPure_1192_);
lean_closure_set(v___f_1212_, 1, v_inst_1193_);
lean_closure_set(v___f_1212_, 2, v_inst_1194_);
lean_closure_set(v___f_1212_, 3, v_toBind_1195_);
lean_closure_set(v___f_1212_, 4, v___x_1196_);
lean_closure_set(v___f_1212_, 5, v___x_1197_);
lean_closure_set(v___f_1212_, 6, v___x_1198_);
lean_closure_set(v___f_1212_, 7, v___x_1199_);
lean_closure_set(v___f_1212_, 8, v___x_1200_);
lean_closure_set(v___f_1212_, 9, v___x_1201_);
lean_closure_set(v___f_1212_, 10, v___x_1202_);
lean_closure_set(v___f_1212_, 11, v___f_1203_);
lean_closure_set(v___f_1212_, 12, v___x_1204_);
lean_closure_set(v___f_1212_, 13, v___x_1205_);
lean_closure_set(v___f_1212_, 14, v___x_1206_);
lean_closure_set(v___f_1212_, 15, v_a_1211_);
lean_closure_set(v___f_1212_, 16, v_ids_1207_);
lean_closure_set(v___f_1212_, 17, v_ref_1208_);
lean_closure_set(v___f_1212_, 18, v___f_1209_);
v___x_3969__overap_1213_ = l_Lean_Linter_checkAmbiguousOpen___redArg(v___x_1196_, v___x_1198_, v___x_1205_, v___x_1204_, v___f_1203_, v___x_1206_, v_ns_1210_, v_a_1211_);
v___x_1214_ = lean_apply_1(v___x_3969__overap_1213_, v_ref_1208_);
v___x_1215_ = lean_apply_4(v_toBind_1195_, lean_box(0), lean_box(0), v___x_1214_, v___f_1212_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_toPure_1216_ = _args[0];
lean_object* v_inst_1217_ = _args[1];
lean_object* v_inst_1218_ = _args[2];
lean_object* v_toBind_1219_ = _args[3];
lean_object* v___x_1220_ = _args[4];
lean_object* v___x_1221_ = _args[5];
lean_object* v___x_1222_ = _args[6];
lean_object* v___x_1223_ = _args[7];
lean_object* v___x_1224_ = _args[8];
lean_object* v___x_1225_ = _args[9];
lean_object* v___x_1226_ = _args[10];
lean_object* v___f_1227_ = _args[11];
lean_object* v___x_1228_ = _args[12];
lean_object* v___x_1229_ = _args[13];
lean_object* v___x_1230_ = _args[14];
lean_object* v_ids_1231_ = _args[15];
lean_object* v_ref_1232_ = _args[16];
lean_object* v___f_1233_ = _args[17];
lean_object* v_ns_1234_ = _args[18];
lean_object* v_a_1235_ = _args[19];
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31(v_toPure_1216_, v_inst_1217_, v_inst_1218_, v_toBind_1219_, v___x_1220_, v___x_1221_, v___x_1222_, v___x_1223_, v___x_1224_, v___x_1225_, v___x_1226_, v___f_1227_, v___x_1228_, v___x_1229_, v___x_1230_, v_ids_1231_, v_ref_1232_, v___f_1233_, v_ns_1234_, v_a_1235_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34(lean_object* v___x_1237_, lean_object* v___x_1238_, lean_object* v___f_1239_, lean_object* v_toBind_1240_, lean_object* v___f_1241_, lean_object* v_a_1242_, lean_object* v_x_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_3984__overap_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_3984__overap_1246_ = l_Lean_activateScoped___redArg(v___x_1237_, v___x_1238_, v___f_1239_, v_a_1242_);
lean_inc(v___y_1245_);
v___x_1247_ = lean_apply_1(v___x_3984__overap_1246_, v___y_1245_);
v___x_1248_ = lean_apply_4(v_toBind_1240_, lean_box(0), lean_box(0), v___x_1247_, v___f_1241_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34___boxed(lean_object* v___x_1249_, lean_object* v___x_1250_, lean_object* v___f_1251_, lean_object* v_toBind_1252_, lean_object* v___f_1253_, lean_object* v_a_1254_, lean_object* v_x_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34(v___x_1249_, v___x_1250_, v___f_1251_, v_toBind_1252_, v___f_1253_, v_a_1254_, v_x_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33(lean_object* v___x_1259_, lean_object* v___f_1260_, lean_object* v_a_1261_, lean_object* v___x_1262_, lean_object* v___y_1263_, lean_object* v_toBind_1264_, lean_object* v___f_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v___x_3994__overap_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_3994__overap_1267_ = l_List_forIn_x27_loop___redArg(v___x_1259_, v___f_1260_, v_a_1261_, v___x_1262_);
lean_inc(v___y_1263_);
v___x_1268_ = lean_apply_1(v___x_3994__overap_1267_, v___y_1263_);
v___x_1269_ = lean_apply_4(v_toBind_1264_, lean_box(0), lean_box(0), v___x_1268_, v___f_1265_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33___boxed(lean_object* v___x_1270_, lean_object* v___f_1271_, lean_object* v_a_1272_, lean_object* v___x_1273_, lean_object* v___y_1274_, lean_object* v_toBind_1275_, lean_object* v___f_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33(v___x_1270_, v___f_1271_, v_a_1272_, v___x_1273_, v___y_1274_, v_toBind_1275_, v___f_1276_, v_a_1277_);
lean_dec(v___y_1274_);
lean_dec(v_a_1272_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32(lean_object* v___x_1279_, lean_object* v___f_1280_, lean_object* v___x_1281_, lean_object* v___y_1282_, lean_object* v_toBind_1283_, lean_object* v___f_1284_, lean_object* v___x_1285_, lean_object* v___x_1286_, lean_object* v___x_1287_, lean_object* v___f_1288_, lean_object* v___x_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_){
_start:
{
lean_object* v___f_1292_; lean_object* v___x_4007__overap_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_inc(v_toBind_1283_);
lean_inc_n(v___y_1282_, 2);
lean_inc(v_a_1291_);
lean_inc_ref(v___x_1279_);
v___f_1292_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__33___boxed), 8, 7);
lean_closure_set(v___f_1292_, 0, v___x_1279_);
lean_closure_set(v___f_1292_, 1, v___f_1280_);
lean_closure_set(v___f_1292_, 2, v_a_1291_);
lean_closure_set(v___f_1292_, 3, v___x_1281_);
lean_closure_set(v___f_1292_, 4, v___y_1282_);
lean_closure_set(v___f_1292_, 5, v_toBind_1283_);
lean_closure_set(v___f_1292_, 6, v___f_1284_);
v___x_4007__overap_1293_ = l_Lean_Linter_checkAmbiguousOpen___redArg(v___x_1279_, v___x_1285_, v___x_1286_, v___x_1287_, v___f_1288_, v___x_1289_, v_a_1290_, v_a_1291_);
v___x_1294_ = lean_apply_1(v___x_4007__overap_1293_, v___y_1282_);
v___x_1295_ = lean_apply_4(v_toBind_1283_, lean_box(0), lean_box(0), v___x_1294_, v___f_1292_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32___boxed(lean_object* v___x_1296_, lean_object* v___f_1297_, lean_object* v___x_1298_, lean_object* v___y_1299_, lean_object* v_toBind_1300_, lean_object* v___f_1301_, lean_object* v___x_1302_, lean_object* v___x_1303_, lean_object* v___x_1304_, lean_object* v___f_1305_, lean_object* v___x_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32(v___x_1296_, v___f_1297_, v___x_1298_, v___y_1299_, v_toBind_1300_, v___f_1301_, v___x_1302_, v___x_1303_, v___x_1304_, v___f_1305_, v___x_1306_, v_a_1307_, v_a_1308_);
lean_dec(v___y_1299_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35(lean_object* v___x_1310_, lean_object* v___f_1311_, lean_object* v___x_1312_, lean_object* v_toBind_1313_, lean_object* v___f_1314_, lean_object* v___x_1315_, lean_object* v___x_1316_, lean_object* v___x_1317_, lean_object* v___f_1318_, lean_object* v___x_1319_, lean_object* v___x_1320_, lean_object* v_a_1321_, lean_object* v_x_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___f_1325_; lean_object* v___x_4023__overap_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_inc(v_a_1321_);
lean_inc_ref(v___x_1319_);
lean_inc_ref(v___x_1315_);
lean_inc(v_toBind_1313_);
lean_inc_n(v___y_1324_, 2);
lean_inc_ref(v___x_1310_);
v___f_1325_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__32___boxed), 13, 12);
lean_closure_set(v___f_1325_, 0, v___x_1310_);
lean_closure_set(v___f_1325_, 1, v___f_1311_);
lean_closure_set(v___f_1325_, 2, v___x_1312_);
lean_closure_set(v___f_1325_, 3, v___y_1324_);
lean_closure_set(v___f_1325_, 4, v_toBind_1313_);
lean_closure_set(v___f_1325_, 5, v___f_1314_);
lean_closure_set(v___f_1325_, 6, v___x_1315_);
lean_closure_set(v___f_1325_, 7, v___x_1316_);
lean_closure_set(v___f_1325_, 8, v___x_1317_);
lean_closure_set(v___f_1325_, 9, v___f_1318_);
lean_closure_set(v___f_1325_, 10, v___x_1319_);
lean_closure_set(v___f_1325_, 11, v_a_1321_);
v___x_4023__overap_1326_ = l_Lean_resolveNamespace___redArg(v___x_1310_, v___x_1319_, v___x_1315_, v___x_1320_, v_a_1321_);
v___x_1327_ = lean_apply_1(v___x_4023__overap_1326_, v___y_1324_);
v___x_1328_ = lean_apply_4(v_toBind_1313_, lean_box(0), lean_box(0), v___x_1327_, v___f_1325_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35___boxed(lean_object* v___x_1329_, lean_object* v___f_1330_, lean_object* v___x_1331_, lean_object* v_toBind_1332_, lean_object* v___f_1333_, lean_object* v___x_1334_, lean_object* v___x_1335_, lean_object* v___x_1336_, lean_object* v___f_1337_, lean_object* v___x_1338_, lean_object* v___x_1339_, lean_object* v_a_1340_, lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35(v___x_1329_, v___f_1330_, v___x_1331_, v_toBind_1332_, v___f_1333_, v___x_1334_, v___x_1335_, v___x_1336_, v___f_1337_, v___x_1338_, v___x_1339_, v_a_1340_, v_x_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38(lean_object* v___x_1345_, lean_object* v___x_1346_, lean_object* v___f_1347_, lean_object* v_a_1348_, lean_object* v___y_1349_, lean_object* v_toBind_1350_, lean_object* v___f_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v___x_4036__overap_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_4036__overap_1353_ = l_Lean_activateScoped___redArg(v___x_1345_, v___x_1346_, v___f_1347_, v_a_1348_);
lean_inc(v___y_1349_);
v___x_1354_ = lean_apply_1(v___x_4036__overap_1353_, v___y_1349_);
v___x_1355_ = lean_apply_4(v_toBind_1350_, lean_box(0), lean_box(0), v___x_1354_, v___f_1351_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38___boxed(lean_object* v___x_1356_, lean_object* v___x_1357_, lean_object* v___f_1358_, lean_object* v_a_1359_, lean_object* v___y_1360_, lean_object* v_toBind_1361_, lean_object* v___f_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38(v___x_1356_, v___x_1357_, v___f_1358_, v_a_1359_, v___y_1360_, v_toBind_1361_, v___f_1362_, v_a_1363_);
lean_dec(v___y_1360_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36(lean_object* v___x_1365_, lean_object* v___x_1366_, lean_object* v___f_1367_, lean_object* v_toBind_1368_, lean_object* v___f_1369_, lean_object* v___x_1370_, lean_object* v_inst_1371_, lean_object* v_a_1372_, lean_object* v_x_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___f_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
lean_inc(v_toBind_1368_);
lean_inc(v___y_1375_);
lean_inc(v_a_1372_);
v___f_1376_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__38___boxed), 8, 7);
lean_closure_set(v___f_1376_, 0, v___x_1365_);
lean_closure_set(v___f_1376_, 1, v___x_1366_);
lean_closure_set(v___f_1376_, 2, v___f_1367_);
lean_closure_set(v___f_1376_, 3, v_a_1372_);
lean_closure_set(v___f_1376_, 4, v___y_1375_);
lean_closure_set(v___f_1376_, 5, v_toBind_1368_);
lean_closure_set(v___f_1376_, 6, v___f_1369_);
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1372_);
lean_ctor_set(v___x_1377_, 1, v___x_1370_);
v___x_1378_ = l___private_Lean_Elab_Open_0__Lean_Elab_OpenDecl_addOpenDecl___redArg(v_inst_1371_, v___x_1377_, v___y_1375_);
v___x_1379_ = lean_apply_4(v_toBind_1368_, lean_box(0), lean_box(0), v___x_1378_, v___f_1376_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36___boxed(lean_object* v___x_1380_, lean_object* v___x_1381_, lean_object* v___f_1382_, lean_object* v_toBind_1383_, lean_object* v___f_1384_, lean_object* v___x_1385_, lean_object* v_inst_1386_, lean_object* v_a_1387_, lean_object* v_x_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36(v___x_1380_, v___x_1381_, v___f_1382_, v_toBind_1383_, v___f_1384_, v___x_1385_, v_inst_1386_, v_a_1387_, v_x_1388_, v___y_1389_, v___y_1390_);
lean_dec(v___y_1390_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42(lean_object* v_toPure_1400_, lean_object* v_inst_1401_, lean_object* v_toBind_1402_, uint8_t v___x_1403_, lean_object* v___x_1404_, lean_object* v___x_1405_, lean_object* v___x_1406_, lean_object* v_stx_1407_, lean_object* v___f_1408_, lean_object* v___x_1409_, lean_object* v___x_1410_, lean_object* v___f_1411_, lean_object* v___f_1412_, lean_object* v_inst_1413_, lean_object* v___x_1414_, lean_object* v___x_1415_, lean_object* v___x_1416_, lean_object* v___x_1417_, lean_object* v___x_1418_, lean_object* v___x_1419_, lean_object* v___f_1420_, lean_object* v___x_1421_, lean_object* v___x_1422_, lean_object* v___x_1423_, lean_object* v___f_1424_, lean_object* v___f_1425_, lean_object* v_ref_1426_){
_start:
{
lean_object* v___f_1427_; 
lean_inc(v_toBind_1402_);
lean_inc(v_inst_1401_);
lean_inc(v_ref_1426_);
lean_inc(v_toPure_1400_);
v___f_1427_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1427_, 0, v_toPure_1400_);
lean_closure_set(v___f_1427_, 1, v_ref_1426_);
lean_closure_set(v___f_1427_, 2, v_inst_1401_);
lean_closure_set(v___f_1427_, 3, v_toBind_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__0));
lean_inc_ref(v___x_1406_);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
v___x_1429_ = l_Lean_Name_mkStr4(v___x_1404_, v___x_1405_, v___x_1406_, v___x_1428_);
lean_inc(v_stx_1407_);
v___x_1430_ = l_Lean_Syntax_isOfKind(v_stx_1407_, v___x_1429_);
lean_dec(v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
v___x_1431_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__1));
lean_inc_ref(v___x_1406_);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
v___x_1432_ = l_Lean_Name_mkStr4(v___x_1404_, v___x_1405_, v___x_1406_, v___x_1431_);
lean_inc(v_stx_1407_);
v___x_1433_ = l_Lean_Syntax_isOfKind(v_stx_1407_, v___x_1432_);
lean_dec(v___x_1432_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1434_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__2));
lean_inc_ref(v___x_1406_);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
v___x_1435_ = l_Lean_Name_mkStr4(v___x_1404_, v___x_1405_, v___x_1406_, v___x_1434_);
lean_inc(v_stx_1407_);
v___x_1436_ = l_Lean_Syntax_isOfKind(v_stx_1407_, v___x_1435_);
lean_dec(v___x_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
lean_dec(v___f_1425_);
lean_dec_ref(v___f_1424_);
v___x_1437_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__3));
lean_inc_ref(v___x_1406_);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
v___x_1438_ = l_Lean_Name_mkStr4(v___x_1404_, v___x_1405_, v___x_1406_, v___x_1437_);
lean_inc(v_stx_1407_);
v___x_1439_ = l_Lean_Syntax_isOfKind(v_stx_1407_, v___x_1438_);
lean_dec(v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___f_1440_; lean_object* v___x_4127__overap_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref(v___x_1423_);
lean_dec(v___x_1422_);
lean_dec_ref(v___x_1421_);
lean_dec(v___f_1420_);
lean_dec(v___x_1419_);
lean_dec_ref(v___x_1418_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1414_);
lean_dec_ref(v_inst_1413_);
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec_ref(v___x_1410_);
lean_dec(v_stx_1407_);
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec(v_inst_1401_);
lean_dec(v_toPure_1400_);
lean_inc(v_ref_1426_);
v___f_1440_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__6), 3, 2);
lean_closure_set(v___f_1440_, 0, v___f_1408_);
lean_closure_set(v___f_1440_, 1, v_ref_1426_);
v___x_4127__overap_1441_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v___x_1409_);
v___x_1442_ = lean_apply_1(v___x_4127__overap_1441_, v_ref_1426_);
lean_inc(v_toBind_1402_);
v___x_1443_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1442_, v___f_1440_);
v___x_1444_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1443_, v___f_1427_);
return v___x_1444_;
}
else
{
lean_object* v___f_1445_; lean_object* v___f_1446_; lean_object* v___x_1447_; lean_object* v_nsStx_1448_; lean_object* v___x_1449_; lean_object* v___f_1450_; lean_object* v___y_1452_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
lean_inc_n(v_ref_1426_, 2);
lean_inc(v___f_1408_);
v___f_1445_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7), 3, 2);
lean_closure_set(v___f_1445_, 0, v___f_1408_);
lean_closure_set(v___f_1445_, 1, v_ref_1426_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__6), 3, 2);
lean_closure_set(v___f_1446_, 0, v___f_1408_);
lean_closure_set(v___f_1446_, 1, v_ref_1426_);
v___x_1447_ = lean_unsigned_to_nat(0u);
v_nsStx_1448_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1447_);
v___x_1449_ = lean_unsigned_to_nat(2u);
v___f_1450_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__9___boxed), 6, 5);
lean_closure_set(v___f_1450_, 0, v___x_1404_);
lean_closure_set(v___f_1450_, 1, v___x_1405_);
lean_closure_set(v___f_1450_, 2, v___x_1406_);
lean_closure_set(v___f_1450_, 3, v___x_1447_);
lean_closure_set(v___f_1450_, 4, v___x_1449_);
v___x_1477_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1449_);
lean_dec(v_stx_1407_);
v___x_1478_ = l_Lean_Syntax_getArgs(v___x_1477_);
lean_dec(v___x_1477_);
v___x_1479_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___closed__4));
v___x_1480_ = lean_array_get_size(v___x_1478_);
v___x_1481_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9));
v___x_1482_ = lean_nat_dec_lt(v___x_1447_, v___x_1480_);
if (v___x_1482_ == 0)
{
lean_dec_ref(v___x_1478_);
v___y_1452_ = v___x_1479_;
goto v___jp_1451_;
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___f_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; size_t v___x_1488_; size_t v___x_1489_; lean_object* v___x_1490_; lean_object* v_snd_1491_; 
v___x_1483_ = lean_box(v___x_1439_);
v___x_1484_ = lean_box(v___x_1436_);
v___f_1485_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__18___boxed), 4, 2);
lean_closure_set(v___f_1485_, 0, v___x_1483_);
lean_closure_set(v___f_1485_, 1, v___x_1484_);
v___x_1486_ = lean_box(v___x_1482_);
v___x_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
lean_ctor_set(v___x_1487_, 1, v___x_1479_);
v___x_1488_ = ((size_t)0ULL);
v___x_1489_ = lean_usize_of_nat(v___x_1480_);
v___x_1490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1481_, v___f_1485_, v___x_1478_, v___x_1488_, v___x_1489_, v___x_1487_);
v_snd_1491_ = lean_ctor_get(v___x_1490_, 1);
lean_inc(v_snd_1491_);
lean_dec(v___x_1490_);
v___y_1452_ = v_snd_1491_;
goto v___jp_1451_;
}
v___jp_1451_:
{
size_t v_sz_1453_; size_t v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_sz_1453_ = lean_array_size(v___y_1452_);
v___x_1454_ = ((size_t)0ULL);
v___x_1455_ = l_unsafeCast___redArg(v___y_1452_);
lean_dec_ref(v___y_1452_);
v___x_1456_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1410_, v___f_1450_, v_sz_1453_, v___x_1454_, v___x_1455_);
v___x_1457_ = l_unsafeCast___redArg(v___x_1456_);
lean_dec(v___x_1456_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v___x_4141__overap_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
lean_dec(v_nsStx_1448_);
lean_dec_ref(v___f_1445_);
lean_dec_ref(v___x_1423_);
lean_dec(v___x_1422_);
lean_dec_ref(v___x_1421_);
lean_dec(v___f_1420_);
lean_dec(v___x_1419_);
lean_dec_ref(v___x_1418_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v___x_1414_);
lean_dec_ref(v_inst_1413_);
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec(v_inst_1401_);
lean_dec(v_toPure_1400_);
v___x_4141__overap_1458_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v___x_1409_);
v___x_1459_ = lean_apply_1(v___x_4141__overap_1458_, v_ref_1426_);
lean_inc(v_toBind_1402_);
v___x_1460_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1459_, v___f_1446_);
v___x_1461_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1460_, v___f_1427_);
return v___x_1461_;
}
else
{
lean_object* v_val_1462_; lean_object* v___x_1463_; size_t v_sz_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v_tos_1467_; lean_object* v___x_1468_; lean_object* v_froms_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___f_1472_; lean_object* v___x_4160__overap_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
lean_dec_ref(v___f_1446_);
v_val_1462_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_val_1462_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1463_ = ((lean_object*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg___lam__6___closed__9));
v_sz_1464_ = lean_array_size(v_val_1462_);
v___x_1465_ = l_unsafeCast___redArg(v_val_1462_);
lean_dec(v_val_1462_);
lean_inc(v___x_1465_);
v___x_1466_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1463_, v___f_1411_, v_sz_1464_, v___x_1454_, v___x_1465_);
v_tos_1467_ = l_unsafeCast___redArg(v___x_1466_);
lean_dec(v___x_1466_);
v___x_1468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1463_, v___f_1412_, v_sz_1464_, v___x_1454_, v___x_1465_);
v_froms_1469_ = l_unsafeCast___redArg(v___x_1468_);
lean_dec(v___x_1468_);
v___x_1470_ = lean_box(0);
v___x_1471_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed__const__1));
lean_inc(v_nsStx_1448_);
lean_inc(v_ref_1426_);
lean_inc_ref(v___x_1423_);
lean_inc_ref(v___x_1417_);
lean_inc_ref(v___x_1416_);
lean_inc_ref(v___x_1414_);
lean_inc_n(v_toBind_1402_, 2);
v___f_1472_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__17___boxed), 23, 22);
lean_closure_set(v___f_1472_, 0, v_froms_1469_);
lean_closure_set(v___f_1472_, 1, v_tos_1467_);
lean_closure_set(v___f_1472_, 2, v_toPure_1400_);
lean_closure_set(v___f_1472_, 3, v_inst_1413_);
lean_closure_set(v___f_1472_, 4, v_inst_1401_);
lean_closure_set(v___f_1472_, 5, v_toBind_1402_);
lean_closure_set(v___f_1472_, 6, v___x_1414_);
lean_closure_set(v___f_1472_, 7, v___x_1415_);
lean_closure_set(v___f_1472_, 8, v___x_1416_);
lean_closure_set(v___f_1472_, 9, v___x_1417_);
lean_closure_set(v___f_1472_, 10, v___x_1409_);
lean_closure_set(v___f_1472_, 11, v___x_1418_);
lean_closure_set(v___f_1472_, 12, v___x_1419_);
lean_closure_set(v___f_1472_, 13, v___f_1420_);
lean_closure_set(v___f_1472_, 14, v___x_1421_);
lean_closure_set(v___f_1472_, 15, v___x_1422_);
lean_closure_set(v___f_1472_, 16, v___x_1423_);
lean_closure_set(v___f_1472_, 17, v___x_1471_);
lean_closure_set(v___f_1472_, 18, v_ref_1426_);
lean_closure_set(v___f_1472_, 19, v___f_1445_);
lean_closure_set(v___f_1472_, 20, v___x_1470_);
lean_closure_set(v___f_1472_, 21, v_nsStx_1448_);
v___x_4160__overap_1473_ = l_Lean_resolveUniqueNamespace___redArg(v___x_1414_, v___x_1423_, v___x_1416_, v___x_1417_, v_nsStx_1448_);
v___x_1474_ = lean_apply_1(v___x_4160__overap_1473_, v_ref_1426_);
v___x_1475_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1474_, v___f_1472_);
v___x_1476_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1475_, v___f_1427_);
return v___x_1476_;
}
}
}
}
else
{
lean_object* v___f_1492_; lean_object* v___x_1493_; lean_object* v_nsStx_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v_ids_1499_; lean_object* v___f_1500_; lean_object* v___x_4190__overap_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_inc_n(v_ref_1426_, 2);
v___f_1492_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__6), 3, 2);
lean_closure_set(v___f_1492_, 0, v___f_1408_);
lean_closure_set(v___f_1492_, 1, v_ref_1426_);
v___x_1493_ = lean_unsigned_to_nat(0u);
v_nsStx_1494_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1493_);
v___x_1495_ = lean_unsigned_to_nat(2u);
v___x_1496_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1495_);
lean_dec(v_stx_1407_);
v___x_1497_ = lean_box(0);
v___x_1498_ = l_Lean_Syntax_getArgs(v___x_1496_);
lean_dec(v___x_1496_);
v_ids_1499_ = l_unsafeCast___redArg(v___x_1498_);
lean_dec_ref(v___x_1498_);
lean_inc(v_nsStx_1494_);
lean_inc_ref(v___x_1423_);
lean_inc_ref(v___x_1417_);
lean_inc_ref(v___x_1416_);
lean_inc_ref(v___x_1414_);
lean_inc_n(v_toBind_1402_, 2);
v___f_1500_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__25___boxed), 23, 22);
lean_closure_set(v___f_1500_, 0, v_ids_1499_);
lean_closure_set(v___f_1500_, 1, v___f_1424_);
lean_closure_set(v___f_1500_, 2, v_inst_1401_);
lean_closure_set(v___f_1500_, 3, v_ref_1426_);
lean_closure_set(v___f_1500_, 4, v_toBind_1402_);
lean_closure_set(v___f_1500_, 5, v___f_1492_);
lean_closure_set(v___f_1500_, 6, v_toPure_1400_);
lean_closure_set(v___f_1500_, 7, v_inst_1413_);
lean_closure_set(v___f_1500_, 8, v___x_1414_);
lean_closure_set(v___f_1500_, 9, v___x_1415_);
lean_closure_set(v___f_1500_, 10, v___x_1416_);
lean_closure_set(v___f_1500_, 11, v___x_1417_);
lean_closure_set(v___f_1500_, 12, v___x_1409_);
lean_closure_set(v___f_1500_, 13, v___x_1418_);
lean_closure_set(v___f_1500_, 14, v___x_1419_);
lean_closure_set(v___f_1500_, 15, v___f_1420_);
lean_closure_set(v___f_1500_, 16, v___x_1421_);
lean_closure_set(v___f_1500_, 17, v___x_1422_);
lean_closure_set(v___f_1500_, 18, v___x_1423_);
lean_closure_set(v___f_1500_, 19, v___f_1425_);
lean_closure_set(v___f_1500_, 20, v___x_1497_);
lean_closure_set(v___f_1500_, 21, v_nsStx_1494_);
v___x_4190__overap_1501_ = l_Lean_resolveUniqueNamespace___redArg(v___x_1414_, v___x_1423_, v___x_1416_, v___x_1417_, v_nsStx_1494_);
v___x_1502_ = lean_apply_1(v___x_4190__overap_1501_, v_ref_1426_);
v___x_1503_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1502_, v___f_1500_);
v___x_1504_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1503_, v___f_1427_);
return v___x_1504_;
}
}
else
{
lean_object* v___f_1505_; lean_object* v___x_1506_; lean_object* v_ns_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v_ids_1511_; lean_object* v___f_1512_; lean_object* v___x_4199__overap_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec(v___f_1425_);
lean_dec_ref(v___f_1424_);
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_inc_n(v_ref_1426_, 2);
v___f_1505_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7), 3, 2);
lean_closure_set(v___f_1505_, 0, v___f_1408_);
lean_closure_set(v___f_1505_, 1, v_ref_1426_);
v___x_1506_ = lean_unsigned_to_nat(0u);
v_ns_1507_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1506_);
v___x_1508_ = lean_unsigned_to_nat(2u);
v___x_1509_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1508_);
lean_dec(v_stx_1407_);
v___x_1510_ = l_Lean_Syntax_getArgs(v___x_1509_);
lean_dec(v___x_1509_);
v_ids_1511_ = l_unsafeCast___redArg(v___x_1510_);
lean_dec_ref(v___x_1510_);
lean_inc(v_ns_1507_);
lean_inc_ref(v___x_1423_);
lean_inc_ref(v___x_1417_);
lean_inc_ref(v___x_1416_);
lean_inc_ref(v___x_1414_);
lean_inc_n(v_toBind_1402_, 2);
v___f_1512_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__31___boxed), 20, 19);
lean_closure_set(v___f_1512_, 0, v_toPure_1400_);
lean_closure_set(v___f_1512_, 1, v_inst_1413_);
lean_closure_set(v___f_1512_, 2, v_inst_1401_);
lean_closure_set(v___f_1512_, 3, v_toBind_1402_);
lean_closure_set(v___f_1512_, 4, v___x_1414_);
lean_closure_set(v___f_1512_, 5, v___x_1415_);
lean_closure_set(v___f_1512_, 6, v___x_1416_);
lean_closure_set(v___f_1512_, 7, v___x_1417_);
lean_closure_set(v___f_1512_, 8, v___x_1409_);
lean_closure_set(v___f_1512_, 9, v___x_1418_);
lean_closure_set(v___f_1512_, 10, v___x_1419_);
lean_closure_set(v___f_1512_, 11, v___f_1420_);
lean_closure_set(v___f_1512_, 12, v___x_1421_);
lean_closure_set(v___f_1512_, 13, v___x_1422_);
lean_closure_set(v___f_1512_, 14, v___x_1423_);
lean_closure_set(v___f_1512_, 15, v_ids_1511_);
lean_closure_set(v___f_1512_, 16, v_ref_1426_);
lean_closure_set(v___f_1512_, 17, v___f_1505_);
lean_closure_set(v___f_1512_, 18, v_ns_1507_);
v___x_4199__overap_1513_ = l_Lean_resolveNamespace___redArg(v___x_1414_, v___x_1423_, v___x_1416_, v___x_1417_, v_ns_1507_);
v___x_1514_ = lean_apply_1(v___x_4199__overap_1513_, v_ref_1426_);
v___x_1515_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1514_, v___f_1512_);
v___x_1516_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1515_, v___f_1427_);
return v___x_1516_;
}
}
else
{
lean_object* v___f_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v_nss_1521_; lean_object* v___x_1522_; lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; size_t v_sz_1526_; size_t v___x_1527_; lean_object* v___x_4212__overap_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
lean_dec_ref(v___f_1424_);
lean_dec(v___x_1419_);
lean_dec_ref(v___x_1418_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v_inst_1413_);
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1409_);
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec(v_inst_1401_);
lean_inc(v_ref_1426_);
v___f_1517_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7), 3, 2);
lean_closure_set(v___f_1517_, 0, v___f_1408_);
lean_closure_set(v___f_1517_, 1, v_ref_1426_);
v___x_1518_ = lean_unsigned_to_nat(1u);
v___x_1519_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1518_);
lean_dec(v_stx_1407_);
v___x_1520_ = l_Lean_Syntax_getArgs(v___x_1519_);
lean_dec(v___x_1519_);
v_nss_1521_ = l_unsafeCast___redArg(v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = lean_box(0);
v___f_1523_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8), 3, 2);
lean_closure_set(v___f_1523_, 0, v___x_1522_);
lean_closure_set(v___f_1523_, 1, v_toPure_1400_);
lean_inc_ref(v___f_1523_);
lean_inc_n(v_toBind_1402_, 3);
lean_inc_ref(v___x_1416_);
lean_inc_ref_n(v___x_1414_, 2);
v___f_1524_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__34___boxed), 9, 5);
lean_closure_set(v___f_1524_, 0, v___x_1414_);
lean_closure_set(v___f_1524_, 1, v___x_1416_);
lean_closure_set(v___f_1524_, 2, v___f_1425_);
lean_closure_set(v___f_1524_, 3, v_toBind_1402_);
lean_closure_set(v___f_1524_, 4, v___f_1523_);
v___f_1525_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35___boxed), 15, 11);
lean_closure_set(v___f_1525_, 0, v___x_1414_);
lean_closure_set(v___f_1525_, 1, v___f_1524_);
lean_closure_set(v___f_1525_, 2, v___x_1522_);
lean_closure_set(v___f_1525_, 3, v_toBind_1402_);
lean_closure_set(v___f_1525_, 4, v___f_1523_);
lean_closure_set(v___f_1525_, 5, v___x_1416_);
lean_closure_set(v___f_1525_, 6, v___x_1422_);
lean_closure_set(v___f_1525_, 7, v___x_1421_);
lean_closure_set(v___f_1525_, 8, v___f_1420_);
lean_closure_set(v___f_1525_, 9, v___x_1423_);
lean_closure_set(v___f_1525_, 10, v___x_1417_);
v_sz_1526_ = lean_array_size(v_nss_1521_);
v___x_1527_ = ((size_t)0ULL);
v___x_4212__overap_1528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1414_, v_nss_1521_, v___f_1525_, v_sz_1526_, v___x_1527_, v___x_1522_);
v___x_1529_ = lean_apply_1(v___x_4212__overap_1528_, v_ref_1426_);
v___x_1530_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1529_, v___f_1517_);
v___x_1531_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1530_, v___f_1427_);
return v___x_1531_;
}
}
else
{
lean_object* v___f_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_nss_1537_; lean_object* v___x_1538_; lean_object* v___f_1539_; lean_object* v___f_1540_; lean_object* v___f_1541_; size_t v_sz_1542_; size_t v___x_1543_; lean_object* v___x_4226__overap_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_dec_ref(v___f_1424_);
lean_dec(v___x_1419_);
lean_dec_ref(v___x_1418_);
lean_dec_ref(v___x_1415_);
lean_dec_ref(v_inst_1413_);
lean_dec_ref(v___f_1412_);
lean_dec_ref(v___f_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1409_);
lean_dec_ref(v___x_1406_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_inc(v_ref_1426_);
v___f_1532_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__7), 3, 2);
lean_closure_set(v___f_1532_, 0, v___f_1408_);
lean_closure_set(v___f_1532_, 1, v_ref_1426_);
v___x_1533_ = lean_unsigned_to_nat(0u);
v___x_1534_ = l_Lean_Syntax_getArg(v_stx_1407_, v___x_1533_);
lean_dec(v_stx_1407_);
v___x_1535_ = lean_box(0);
v___x_1536_ = l_Lean_Syntax_getArgs(v___x_1534_);
lean_dec(v___x_1534_);
v_nss_1537_ = l_unsafeCast___redArg(v___x_1536_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = lean_box(0);
v___f_1539_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__8), 3, 2);
lean_closure_set(v___f_1539_, 0, v___x_1538_);
lean_closure_set(v___f_1539_, 1, v_toPure_1400_);
lean_inc_ref(v___f_1539_);
lean_inc_n(v_toBind_1402_, 3);
lean_inc_ref(v___x_1416_);
lean_inc_ref_n(v___x_1414_, 2);
v___f_1540_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__36___boxed), 11, 7);
lean_closure_set(v___f_1540_, 0, v___x_1414_);
lean_closure_set(v___f_1540_, 1, v___x_1416_);
lean_closure_set(v___f_1540_, 2, v___f_1425_);
lean_closure_set(v___f_1540_, 3, v_toBind_1402_);
lean_closure_set(v___f_1540_, 4, v___f_1539_);
lean_closure_set(v___f_1540_, 5, v___x_1535_);
lean_closure_set(v___f_1540_, 6, v_inst_1401_);
v___f_1541_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__35___boxed), 15, 11);
lean_closure_set(v___f_1541_, 0, v___x_1414_);
lean_closure_set(v___f_1541_, 1, v___f_1540_);
lean_closure_set(v___f_1541_, 2, v___x_1538_);
lean_closure_set(v___f_1541_, 3, v_toBind_1402_);
lean_closure_set(v___f_1541_, 4, v___f_1539_);
lean_closure_set(v___f_1541_, 5, v___x_1416_);
lean_closure_set(v___f_1541_, 6, v___x_1422_);
lean_closure_set(v___f_1541_, 7, v___x_1421_);
lean_closure_set(v___f_1541_, 8, v___f_1420_);
lean_closure_set(v___f_1541_, 9, v___x_1423_);
lean_closure_set(v___f_1541_, 10, v___x_1417_);
v_sz_1542_ = lean_array_size(v_nss_1537_);
v___x_1543_ = ((size_t)0ULL);
v___x_4226__overap_1544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1414_, v_nss_1537_, v___f_1541_, v_sz_1542_, v___x_1543_, v___x_1538_);
v___x_1545_ = lean_apply_1(v___x_4226__overap_1544_, v_ref_1426_);
v___x_1546_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1545_, v___f_1532_);
v___x_1547_ = lean_apply_4(v_toBind_1402_, lean_box(0), lean_box(0), v___x_1546_, v___f_1427_);
return v___x_1547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed(lean_object** _args){
lean_object* v_toPure_1548_ = _args[0];
lean_object* v_inst_1549_ = _args[1];
lean_object* v_toBind_1550_ = _args[2];
lean_object* v___x_1551_ = _args[3];
lean_object* v___x_1552_ = _args[4];
lean_object* v___x_1553_ = _args[5];
lean_object* v___x_1554_ = _args[6];
lean_object* v_stx_1555_ = _args[7];
lean_object* v___f_1556_ = _args[8];
lean_object* v___x_1557_ = _args[9];
lean_object* v___x_1558_ = _args[10];
lean_object* v___f_1559_ = _args[11];
lean_object* v___f_1560_ = _args[12];
lean_object* v_inst_1561_ = _args[13];
lean_object* v___x_1562_ = _args[14];
lean_object* v___x_1563_ = _args[15];
lean_object* v___x_1564_ = _args[16];
lean_object* v___x_1565_ = _args[17];
lean_object* v___x_1566_ = _args[18];
lean_object* v___x_1567_ = _args[19];
lean_object* v___f_1568_ = _args[20];
lean_object* v___x_1569_ = _args[21];
lean_object* v___x_1570_ = _args[22];
lean_object* v___x_1571_ = _args[23];
lean_object* v___f_1572_ = _args[24];
lean_object* v___f_1573_ = _args[25];
lean_object* v_ref_1574_ = _args[26];
_start:
{
uint8_t v___x_5537__boxed_1575_; lean_object* v_res_1576_; 
v___x_5537__boxed_1575_ = lean_unbox(v___x_1551_);
v_res_1576_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42(v_toPure_1548_, v_inst_1549_, v_toBind_1550_, v___x_5537__boxed_1575_, v___x_1552_, v___x_1553_, v___x_1554_, v_stx_1555_, v___f_1556_, v___x_1557_, v___x_1558_, v___f_1559_, v___f_1560_, v_inst_1561_, v___x_1562_, v___x_1563_, v___x_1564_, v___x_1565_, v___x_1566_, v___x_1567_, v___f_1568_, v___x_1569_, v___x_1570_, v___x_1571_, v___f_1572_, v___f_1573_, v_ref_1574_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__37(lean_object* v_toPure_1577_, lean_object* v_____x_1578_){
_start:
{
lean_object* v_fst_1579_; lean_object* v___x_1580_; 
v_fst_1579_ = lean_ctor_get(v_____x_1578_, 0);
lean_inc(v_fst_1579_);
lean_dec_ref(v_____x_1578_);
v___x_1580_ = lean_apply_2(v_toPure_1577_, lean_box(0), v_fst_1579_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39(lean_object* v_toApplicative_1590_, lean_object* v_stx_1591_, lean_object* v_____do__lift_1592_, lean_object* v_inst_1593_, lean_object* v_toBind_1594_, lean_object* v___f_1595_, lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v___f_1598_, lean_object* v___f_1599_, lean_object* v_inst_1600_, lean_object* v___x_1601_, lean_object* v___x_1602_, lean_object* v___x_1603_, lean_object* v___x_1604_, lean_object* v___x_1605_, lean_object* v___x_1606_, lean_object* v___f_1607_, lean_object* v___x_1608_, lean_object* v___x_1609_, lean_object* v___x_1610_, lean_object* v___f_1611_, lean_object* v___f_1612_, lean_object* v_____do__lift_1613_){
_start:
{
lean_object* v_toPure_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___f_1624_; lean_object* v___f_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_toPure_1614_ = lean_ctor_get(v_toApplicative_1590_, 1);
lean_inc_n(v_toPure_1614_, 2);
lean_dec_ref(v_toApplicative_1590_);
v___x_1615_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__0));
v___x_1616_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__1));
v___x_1617_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__2));
v___x_1618_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___closed__4));
lean_inc(v_stx_1591_);
v___x_1619_ = l_Lean_Syntax_isOfKind(v_stx_1591_, v___x_1618_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v_____do__lift_1592_);
lean_ctor_set(v___x_1620_, 1, v_____do__lift_1613_);
v___x_1621_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1621_, 0, lean_box(0));
lean_closure_set(v___x_1621_, 1, lean_box(0));
lean_closure_set(v___x_1621_, 2, v___x_1620_);
lean_inc(v_inst_1593_);
v___x_1622_ = lean_apply_2(v_inst_1593_, lean_box(0), v___x_1621_);
v___x_1623_ = lean_box(v___x_1619_);
lean_inc_n(v_toBind_1594_, 2);
v___f_1624_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__42___boxed), 27, 26);
lean_closure_set(v___f_1624_, 0, v_toPure_1614_);
lean_closure_set(v___f_1624_, 1, v_inst_1593_);
lean_closure_set(v___f_1624_, 2, v_toBind_1594_);
lean_closure_set(v___f_1624_, 3, v___x_1623_);
lean_closure_set(v___f_1624_, 4, v___x_1615_);
lean_closure_set(v___f_1624_, 5, v___x_1616_);
lean_closure_set(v___f_1624_, 6, v___x_1617_);
lean_closure_set(v___f_1624_, 7, v_stx_1591_);
lean_closure_set(v___f_1624_, 8, v___f_1595_);
lean_closure_set(v___f_1624_, 9, v___x_1596_);
lean_closure_set(v___f_1624_, 10, v___x_1597_);
lean_closure_set(v___f_1624_, 11, v___f_1598_);
lean_closure_set(v___f_1624_, 12, v___f_1599_);
lean_closure_set(v___f_1624_, 13, v_inst_1600_);
lean_closure_set(v___f_1624_, 14, v___x_1601_);
lean_closure_set(v___f_1624_, 15, v___x_1602_);
lean_closure_set(v___f_1624_, 16, v___x_1603_);
lean_closure_set(v___f_1624_, 17, v___x_1604_);
lean_closure_set(v___f_1624_, 18, v___x_1605_);
lean_closure_set(v___f_1624_, 19, v___x_1606_);
lean_closure_set(v___f_1624_, 20, v___f_1607_);
lean_closure_set(v___f_1624_, 21, v___x_1608_);
lean_closure_set(v___f_1624_, 22, v___x_1609_);
lean_closure_set(v___f_1624_, 23, v___x_1610_);
lean_closure_set(v___f_1624_, 24, v___f_1611_);
lean_closure_set(v___f_1624_, 25, v___f_1612_);
v___f_1625_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__37), 2, 1);
lean_closure_set(v___f_1625_, 0, v_toPure_1614_);
v___x_1626_ = lean_apply_4(v_toBind_1594_, lean_box(0), lean_box(0), v___x_1622_, v___f_1624_);
v___x_1627_ = lean_apply_4(v_toBind_1594_, lean_box(0), lean_box(0), v___x_1626_, v___f_1625_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_toApplicative_1628_ = _args[0];
lean_object* v_stx_1629_ = _args[1];
lean_object* v_____do__lift_1630_ = _args[2];
lean_object* v_inst_1631_ = _args[3];
lean_object* v_toBind_1632_ = _args[4];
lean_object* v___f_1633_ = _args[5];
lean_object* v___x_1634_ = _args[6];
lean_object* v___x_1635_ = _args[7];
lean_object* v___f_1636_ = _args[8];
lean_object* v___f_1637_ = _args[9];
lean_object* v_inst_1638_ = _args[10];
lean_object* v___x_1639_ = _args[11];
lean_object* v___x_1640_ = _args[12];
lean_object* v___x_1641_ = _args[13];
lean_object* v___x_1642_ = _args[14];
lean_object* v___x_1643_ = _args[15];
lean_object* v___x_1644_ = _args[16];
lean_object* v___f_1645_ = _args[17];
lean_object* v___x_1646_ = _args[18];
lean_object* v___x_1647_ = _args[19];
lean_object* v___x_1648_ = _args[20];
lean_object* v___f_1649_ = _args[21];
lean_object* v___f_1650_ = _args[22];
lean_object* v_____do__lift_1651_ = _args[23];
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39(v_toApplicative_1628_, v_stx_1629_, v_____do__lift_1630_, v_inst_1631_, v_toBind_1632_, v___f_1633_, v___x_1634_, v___x_1635_, v___f_1636_, v___f_1637_, v_inst_1638_, v___x_1639_, v___x_1640_, v___x_1641_, v___x_1642_, v___x_1643_, v___x_1644_, v___f_1645_, v___x_1646_, v___x_1647_, v___x_1648_, v___f_1649_, v___f_1650_, v_____do__lift_1651_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40(lean_object* v_toApplicative_1653_, lean_object* v_stx_1654_, lean_object* v_inst_1655_, lean_object* v_toBind_1656_, lean_object* v___f_1657_, lean_object* v___x_1658_, lean_object* v___x_1659_, lean_object* v___f_1660_, lean_object* v___f_1661_, lean_object* v_inst_1662_, lean_object* v___x_1663_, lean_object* v___x_1664_, lean_object* v___x_1665_, lean_object* v___x_1666_, lean_object* v___x_1667_, lean_object* v___x_1668_, lean_object* v___f_1669_, lean_object* v___x_1670_, lean_object* v___x_1671_, lean_object* v___x_1672_, lean_object* v___f_1673_, lean_object* v___f_1674_, lean_object* v_getCurrNamespace_1675_, lean_object* v_____do__lift_1676_){
_start:
{
lean_object* v___f_1677_; lean_object* v___x_1678_; 
lean_inc(v_toBind_1656_);
v___f_1677_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__39___boxed), 24, 23);
lean_closure_set(v___f_1677_, 0, v_toApplicative_1653_);
lean_closure_set(v___f_1677_, 1, v_stx_1654_);
lean_closure_set(v___f_1677_, 2, v_____do__lift_1676_);
lean_closure_set(v___f_1677_, 3, v_inst_1655_);
lean_closure_set(v___f_1677_, 4, v_toBind_1656_);
lean_closure_set(v___f_1677_, 5, v___f_1657_);
lean_closure_set(v___f_1677_, 6, v___x_1658_);
lean_closure_set(v___f_1677_, 7, v___x_1659_);
lean_closure_set(v___f_1677_, 8, v___f_1660_);
lean_closure_set(v___f_1677_, 9, v___f_1661_);
lean_closure_set(v___f_1677_, 10, v_inst_1662_);
lean_closure_set(v___f_1677_, 11, v___x_1663_);
lean_closure_set(v___f_1677_, 12, v___x_1664_);
lean_closure_set(v___f_1677_, 13, v___x_1665_);
lean_closure_set(v___f_1677_, 14, v___x_1666_);
lean_closure_set(v___f_1677_, 15, v___x_1667_);
lean_closure_set(v___f_1677_, 16, v___x_1668_);
lean_closure_set(v___f_1677_, 17, v___f_1669_);
lean_closure_set(v___f_1677_, 18, v___x_1670_);
lean_closure_set(v___f_1677_, 19, v___x_1671_);
lean_closure_set(v___f_1677_, 20, v___x_1672_);
lean_closure_set(v___f_1677_, 21, v___f_1673_);
lean_closure_set(v___f_1677_, 22, v___f_1674_);
v___x_1678_ = lean_apply_4(v_toBind_1656_, lean_box(0), lean_box(0), v_getCurrNamespace_1675_, v___f_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_toApplicative_1679_ = _args[0];
lean_object* v_stx_1680_ = _args[1];
lean_object* v_inst_1681_ = _args[2];
lean_object* v_toBind_1682_ = _args[3];
lean_object* v___f_1683_ = _args[4];
lean_object* v___x_1684_ = _args[5];
lean_object* v___x_1685_ = _args[6];
lean_object* v___f_1686_ = _args[7];
lean_object* v___f_1687_ = _args[8];
lean_object* v_inst_1688_ = _args[9];
lean_object* v___x_1689_ = _args[10];
lean_object* v___x_1690_ = _args[11];
lean_object* v___x_1691_ = _args[12];
lean_object* v___x_1692_ = _args[13];
lean_object* v___x_1693_ = _args[14];
lean_object* v___x_1694_ = _args[15];
lean_object* v___f_1695_ = _args[16];
lean_object* v___x_1696_ = _args[17];
lean_object* v___x_1697_ = _args[18];
lean_object* v___x_1698_ = _args[19];
lean_object* v___f_1699_ = _args[20];
lean_object* v___f_1700_ = _args[21];
lean_object* v_getCurrNamespace_1701_ = _args[22];
lean_object* v_____do__lift_1702_ = _args[23];
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40(v_toApplicative_1679_, v_stx_1680_, v_inst_1681_, v_toBind_1682_, v___f_1683_, v___x_1684_, v___x_1685_, v___f_1686_, v___f_1687_, v_inst_1688_, v___x_1689_, v___x_1690_, v___x_1691_, v___x_1692_, v___x_1693_, v___x_1694_, v___f_1695_, v___x_1696_, v___x_1697_, v___x_1698_, v___f_1699_, v___f_1700_, v_getCurrNamespace_1701_, v_____do__lift_1702_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl___redArg(lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_inst_1730_, lean_object* v_inst_1731_, lean_object* v_inst_1732_, lean_object* v_inst_1733_, lean_object* v_inst_1734_, lean_object* v_inst_1735_, lean_object* v_inst_1736_, lean_object* v_inst_1737_, lean_object* v_stx_1738_){
_start:
{
lean_object* v___x_1739_; lean_object* v_toApplicative_1740_; lean_object* v_toBind_1741_; lean_object* v_getCurrNamespace_1742_; lean_object* v_getOpenDecls_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1782_; 
v___x_1739_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__9));
v_toApplicative_1740_ = lean_ctor_get(v_inst_1728_, 0);
lean_inc_ref(v_toApplicative_1740_);
v_toBind_1741_ = lean_ctor_get(v_inst_1728_, 1);
lean_inc(v_toBind_1741_);
v_getCurrNamespace_1742_ = lean_ctor_get(v_inst_1736_, 0);
v_getOpenDecls_1743_ = lean_ctor_get(v_inst_1736_, 1);
v_isSharedCheck_1782_ = !lean_is_exclusive(v_inst_1736_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1745_ = v_inst_1736_;
v_isShared_1746_ = v_isSharedCheck_1782_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_getOpenDecls_1743_);
lean_inc(v_getCurrNamespace_1742_);
lean_dec(v_inst_1736_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1782_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v___f_1748_; lean_object* v___f_1749_; lean_object* v___x_1751_; 
lean_inc_ref(v_inst_1728_);
v___x_1747_ = l_StateRefT_x27_instMonad___redArg(v_inst_1728_);
lean_inc_ref(v_inst_1730_);
v___f_1748_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1748_, 0, v_inst_1730_);
v___f_1749_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1749_, 0, v_inst_1730_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 1, v___f_1749_);
lean_ctor_set(v___x_1745_, 0, v___f_1748_);
v___x_1751_ = v___x_1745_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___f_1748_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v___f_1749_);
v___x_1751_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___x_1752_; lean_object* v_getEnv_1753_; lean_object* v_modifyEnv_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1780_; 
lean_inc(v_inst_1733_);
v___x_1752_ = l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg(v_inst_1728_, v_inst_1733_);
v_getEnv_1753_ = lean_ctor_get(v_inst_1729_, 0);
v_modifyEnv_1754_ = lean_ctor_get(v_inst_1729_, 1);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_inst_1729_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1756_ = v_inst_1729_;
v_isShared_1757_ = v_isSharedCheck_1780_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_modifyEnv_1754_);
lean_inc(v_getEnv_1753_);
lean_dec(v_inst_1729_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1780_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___f_1758_; lean_object* v___f_1759_; lean_object* v___f_1760_; lean_object* v___f_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1767_; 
lean_inc_ref(v_toApplicative_1740_);
v___f_1758_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1758_, 0, v_toApplicative_1740_);
lean_inc(v_toBind_1741_);
lean_inc(v_inst_1733_);
v___f_1759_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1759_, 0, v_inst_1733_);
lean_closure_set(v___f_1759_, 1, v_toBind_1741_);
lean_closure_set(v___f_1759_, 2, v___f_1758_);
v___f_1760_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__10));
v___f_1761_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__11));
v___f_1762_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__12));
v___x_1763_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__13));
v___f_1764_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1764_, 0, v_modifyEnv_1754_);
lean_closure_set(v___f_1764_, 1, v___x_1763_);
v___x_1765_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_1765_, 0, lean_box(0));
lean_closure_set(v___x_1765_, 1, lean_box(0));
lean_closure_set(v___x_1765_, 2, lean_box(0));
lean_closure_set(v___x_1765_, 3, lean_box(0));
lean_closure_set(v___x_1765_, 4, v_getEnv_1753_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 1, v___f_1764_);
lean_ctor_set(v___x_1756_, 0, v___x_1765_);
v___x_1767_ = v___x_1756_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1765_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v___f_1764_);
v___x_1767_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___f_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___f_1776_; lean_object* v___f_1777_; lean_object* v___x_1778_; 
v___x_1768_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__14));
v___x_1769_ = l_Lean_instMonadRefOfMonadLiftOfMonadFunctor___redArg(v___x_1763_, v___x_1768_, v_inst_1731_);
v___f_1770_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1770_, 0, v_inst_1732_);
lean_closure_set(v___f_1770_, 1, v___x_1763_);
lean_inc_ref(v___x_1747_);
lean_inc_ref(v___f_1770_);
v___x_1771_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_1770_, v___x_1747_);
lean_inc(v___x_1771_);
lean_inc_ref(v___x_1769_);
lean_inc_ref(v___x_1751_);
v___x_1772_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1751_);
lean_ctor_set(v___x_1772_, 1, v___x_1769_);
lean_ctor_set(v___x_1772_, 2, v___x_1771_);
v___x_1773_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_1773_, 0, lean_box(0));
lean_closure_set(v___x_1773_, 1, lean_box(0));
lean_closure_set(v___x_1773_, 2, lean_box(0));
lean_closure_set(v___x_1773_, 3, lean_box(0));
lean_closure_set(v___x_1773_, 4, v_inst_1735_);
v___x_1774_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_1763_, v_inst_1734_);
lean_inc_ref(v_inst_1737_);
v___x_1775_ = l_Lean_Elab_instMonadInfoTreeOfMonadLift___redArg(v___x_1763_, v_inst_1737_);
lean_inc(v_inst_1733_);
v___f_1776_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1776_, 0, v_inst_1733_);
lean_closure_set(v___f_1776_, 1, v___x_1763_);
lean_inc(v_toBind_1741_);
v___f_1777_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___lam__40___boxed), 24, 23);
lean_closure_set(v___f_1777_, 0, v_toApplicative_1740_);
lean_closure_set(v___f_1777_, 1, v_stx_1738_);
lean_closure_set(v___f_1777_, 2, v_inst_1733_);
lean_closure_set(v___f_1777_, 3, v_toBind_1741_);
lean_closure_set(v___f_1777_, 4, v___f_1759_);
lean_closure_set(v___f_1777_, 5, v___x_1751_);
lean_closure_set(v___f_1777_, 6, v___x_1739_);
lean_closure_set(v___f_1777_, 7, v___f_1762_);
lean_closure_set(v___f_1777_, 8, v___f_1761_);
lean_closure_set(v___f_1777_, 9, v_inst_1737_);
lean_closure_set(v___f_1777_, 10, v___x_1747_);
lean_closure_set(v___f_1777_, 11, v___x_1775_);
lean_closure_set(v___f_1777_, 12, v___x_1767_);
lean_closure_set(v___f_1777_, 13, v___x_1772_);
lean_closure_set(v___f_1777_, 14, v___x_1769_);
lean_closure_set(v___f_1777_, 15, v___x_1771_);
lean_closure_set(v___f_1777_, 16, v___f_1770_);
lean_closure_set(v___f_1777_, 17, v___x_1774_);
lean_closure_set(v___f_1777_, 18, v___x_1773_);
lean_closure_set(v___f_1777_, 19, v___x_1752_);
lean_closure_set(v___f_1777_, 20, v___f_1760_);
lean_closure_set(v___f_1777_, 21, v___f_1776_);
lean_closure_set(v___f_1777_, 22, v_getCurrNamespace_1742_);
v___x_1778_ = lean_apply_4(v_toBind_1741_, lean_box(0), lean_box(0), v_getOpenDecls_1743_, v___f_1777_);
return v___x_1778_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_elabOpenDecl(lean_object* v_m_1783_, lean_object* v_inst_1784_, lean_object* v_inst_1785_, lean_object* v_inst_1786_, lean_object* v_inst_1787_, lean_object* v_inst_1788_, lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_stx_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_Elab_OpenDecl_elabOpenDecl___redArg(v_inst_1784_, v_inst_1785_, v_inst_1786_, v_inst_1787_, v_inst_1788_, v_inst_1789_, v_inst_1790_, v_inst_1791_, v_inst_1792_, v_inst_1793_, v_stx_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__0(lean_object* v_a_1796_, lean_object* v_toPure_1797_, lean_object* v_s_1798_){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1799_, 0, v_a_1796_);
lean_ctor_set(v___x_1799_, 1, v_s_1798_);
v___x_1800_ = lean_apply_2(v_toPure_1797_, lean_box(0), v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__1(lean_object* v_toPure_1801_, lean_object* v_ref_1802_, lean_object* v_inst_1803_, lean_object* v_toBind_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v___f_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___f_1806_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1806_, 0, v_a_1805_);
lean_closure_set(v___f_1806_, 1, v_toPure_1801_);
v___x_1807_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1807_, 0, lean_box(0));
lean_closure_set(v___x_1807_, 1, lean_box(0));
lean_closure_set(v___x_1807_, 2, v_ref_1802_);
v___x_1808_ = lean_apply_2(v_inst_1803_, lean_box(0), v___x_1807_);
v___x_1809_ = lean_apply_4(v_toBind_1804_, lean_box(0), lean_box(0), v___x_1808_, v___f_1806_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__2(lean_object* v_toPure_1810_, lean_object* v_inst_1811_, lean_object* v_toBind_1812_, lean_object* v___x_1813_, lean_object* v___x_1814_, lean_object* v___x_1815_, lean_object* v___x_1816_, lean_object* v___x_1817_, lean_object* v___f_1818_, lean_object* v___x_1819_, lean_object* v___x_1820_, lean_object* v___x_1821_, lean_object* v_nss_1822_, lean_object* v_idStx_1823_, lean_object* v_ref_1824_){
_start:
{
lean_object* v___f_1825_; lean_object* v___x_107__overap_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_inc(v_toBind_1812_);
lean_inc(v_ref_1824_);
v___f_1825_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1825_, 0, v_toPure_1810_);
lean_closure_set(v___f_1825_, 1, v_ref_1824_);
lean_closure_set(v___f_1825_, 2, v_inst_1811_);
lean_closure_set(v___f_1825_, 3, v_toBind_1812_);
v___x_107__overap_1826_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespacesCore___redArg(v___x_1813_, v___x_1814_, v___x_1815_, v___x_1816_, v___x_1817_, v___f_1818_, v___x_1819_, v___x_1820_, v___x_1821_, v_nss_1822_, v_idStx_1823_);
v___x_1827_ = lean_apply_1(v___x_107__overap_1826_, v_ref_1824_);
v___x_1828_ = lean_apply_4(v_toBind_1812_, lean_box(0), lean_box(0), v___x_1827_, v___f_1825_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__3(lean_object* v_toPure_1829_, lean_object* v_____x_1830_){
_start:
{
lean_object* v_fst_1831_; lean_object* v___x_1832_; 
v_fst_1831_ = lean_ctor_get(v_____x_1830_, 0);
lean_inc(v_fst_1831_);
lean_dec_ref(v_____x_1830_);
v___x_1832_ = lean_apply_2(v_toPure_1829_, lean_box(0), v_fst_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__4(lean_object* v_toApplicative_1833_, lean_object* v_____do__lift_1834_, lean_object* v_inst_1835_, lean_object* v_toBind_1836_, lean_object* v___x_1837_, lean_object* v___x_1838_, lean_object* v___x_1839_, lean_object* v___x_1840_, lean_object* v___x_1841_, lean_object* v___f_1842_, lean_object* v___x_1843_, lean_object* v___x_1844_, lean_object* v___x_1845_, lean_object* v_nss_1846_, lean_object* v_idStx_1847_, lean_object* v_____do__lift_1848_){
_start:
{
lean_object* v_toPure_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_toPure_1849_ = lean_ctor_get(v_toApplicative_1833_, 1);
lean_inc_n(v_toPure_1849_, 2);
lean_dec_ref(v_toApplicative_1833_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v_____do__lift_1834_);
lean_ctor_set(v___x_1850_, 1, v_____do__lift_1848_);
v___x_1851_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1851_, 0, lean_box(0));
lean_closure_set(v___x_1851_, 1, lean_box(0));
lean_closure_set(v___x_1851_, 2, v___x_1850_);
lean_inc(v_inst_1835_);
v___x_1852_ = lean_apply_2(v_inst_1835_, lean_box(0), v___x_1851_);
lean_inc_n(v_toBind_1836_, 2);
v___f_1853_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__2), 15, 14);
lean_closure_set(v___f_1853_, 0, v_toPure_1849_);
lean_closure_set(v___f_1853_, 1, v_inst_1835_);
lean_closure_set(v___f_1853_, 2, v_toBind_1836_);
lean_closure_set(v___f_1853_, 3, v___x_1837_);
lean_closure_set(v___f_1853_, 4, v___x_1838_);
lean_closure_set(v___f_1853_, 5, v___x_1839_);
lean_closure_set(v___f_1853_, 6, v___x_1840_);
lean_closure_set(v___f_1853_, 7, v___x_1841_);
lean_closure_set(v___f_1853_, 8, v___f_1842_);
lean_closure_set(v___f_1853_, 9, v___x_1843_);
lean_closure_set(v___f_1853_, 10, v___x_1844_);
lean_closure_set(v___f_1853_, 11, v___x_1845_);
lean_closure_set(v___f_1853_, 12, v_nss_1846_);
lean_closure_set(v___f_1853_, 13, v_idStx_1847_);
v___f_1854_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__3), 2, 1);
lean_closure_set(v___f_1854_, 0, v_toPure_1849_);
v___x_1855_ = lean_apply_4(v_toBind_1836_, lean_box(0), lean_box(0), v___x_1852_, v___f_1853_);
v___x_1856_ = lean_apply_4(v_toBind_1836_, lean_box(0), lean_box(0), v___x_1855_, v___f_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__5(lean_object* v_toApplicative_1857_, lean_object* v_inst_1858_, lean_object* v_toBind_1859_, lean_object* v___x_1860_, lean_object* v___x_1861_, lean_object* v___x_1862_, lean_object* v___x_1863_, lean_object* v___x_1864_, lean_object* v___f_1865_, lean_object* v___x_1866_, lean_object* v___x_1867_, lean_object* v___x_1868_, lean_object* v_nss_1869_, lean_object* v_idStx_1870_, lean_object* v_getCurrNamespace_1871_, lean_object* v_____do__lift_1872_){
_start:
{
lean_object* v___f_1873_; lean_object* v___x_1874_; 
lean_inc(v_toBind_1859_);
v___f_1873_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__4), 16, 15);
lean_closure_set(v___f_1873_, 0, v_toApplicative_1857_);
lean_closure_set(v___f_1873_, 1, v_____do__lift_1872_);
lean_closure_set(v___f_1873_, 2, v_inst_1858_);
lean_closure_set(v___f_1873_, 3, v_toBind_1859_);
lean_closure_set(v___f_1873_, 4, v___x_1860_);
lean_closure_set(v___f_1873_, 5, v___x_1861_);
lean_closure_set(v___f_1873_, 6, v___x_1862_);
lean_closure_set(v___f_1873_, 7, v___x_1863_);
lean_closure_set(v___f_1873_, 8, v___x_1864_);
lean_closure_set(v___f_1873_, 9, v___f_1865_);
lean_closure_set(v___f_1873_, 10, v___x_1866_);
lean_closure_set(v___f_1873_, 11, v___x_1867_);
lean_closure_set(v___f_1873_, 12, v___x_1868_);
lean_closure_set(v___f_1873_, 13, v_nss_1869_);
lean_closure_set(v___f_1873_, 14, v_idStx_1870_);
v___x_1874_ = lean_apply_4(v_toBind_1859_, lean_box(0), lean_box(0), v_getCurrNamespace_1871_, v___f_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg(lean_object* v_inst_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_, lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_nss_1884_, lean_object* v_idStx_1885_){
_start:
{
lean_object* v_toApplicative_1886_; lean_object* v_toBind_1887_; lean_object* v_getCurrNamespace_1888_; lean_object* v_getOpenDecls_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1920_; 
v_toApplicative_1886_ = lean_ctor_get(v_inst_1875_, 0);
lean_inc_ref(v_toApplicative_1886_);
v_toBind_1887_ = lean_ctor_get(v_inst_1875_, 1);
lean_inc(v_toBind_1887_);
v_getCurrNamespace_1888_ = lean_ctor_get(v_inst_1883_, 0);
v_getOpenDecls_1889_ = lean_ctor_get(v_inst_1883_, 1);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_inst_1883_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1891_ = v_inst_1883_;
v_isShared_1892_ = v_isSharedCheck_1920_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_getOpenDecls_1889_);
lean_inc(v_getCurrNamespace_1888_);
lean_dec(v_inst_1883_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1920_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; lean_object* v_getEnv_1894_; lean_object* v_modifyEnv_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1919_; 
lean_inc_ref(v_inst_1875_);
v___x_1893_ = l_StateRefT_x27_instMonad___redArg(v_inst_1875_);
v_getEnv_1894_ = lean_ctor_get(v_inst_1876_, 0);
v_modifyEnv_1895_ = lean_ctor_get(v_inst_1876_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_inst_1876_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1897_ = v_inst_1876_;
v_isShared_1898_ = v_isSharedCheck_1919_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_modifyEnv_1895_);
lean_inc(v_getEnv_1894_);
lean_dec(v_inst_1876_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1919_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1899_; lean_object* v___f_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1899_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__13));
v___f_1900_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1900_, 0, v_modifyEnv_1895_);
lean_closure_set(v___f_1900_, 1, v___x_1899_);
v___x_1901_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_1901_, 0, lean_box(0));
lean_closure_set(v___x_1901_, 1, lean_box(0));
lean_closure_set(v___x_1901_, 2, lean_box(0));
lean_closure_set(v___x_1901_, 3, lean_box(0));
lean_closure_set(v___x_1901_, 4, v_getEnv_1894_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 1, v___f_1900_);
lean_ctor_set(v___x_1897_, 0, v___x_1901_);
v___x_1903_ = v___x_1897_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___f_1900_);
v___x_1903_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___f_1904_; lean_object* v___f_1905_; lean_object* v___x_1907_; 
lean_inc_ref(v_inst_1877_);
v___f_1904_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1904_, 0, v_inst_1877_);
v___f_1905_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1905_, 0, v_inst_1877_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 1, v___f_1905_);
lean_ctor_set(v___x_1891_, 0, v___f_1904_);
v___x_1907_ = v___x_1891_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___f_1904_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v___f_1905_);
v___x_1907_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___f_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___f_1915_; lean_object* v___x_1916_; 
v___x_1908_ = ((lean_object*)(l_Lean_Elab_OpenDecl_elabOpenDecl___redArg___closed__14));
v___x_1909_ = l_Lean_instMonadRefOfMonadLiftOfMonadFunctor___redArg(v___x_1899_, v___x_1908_, v_inst_1878_);
v___f_1910_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1910_, 0, v_inst_1879_);
lean_closure_set(v___f_1910_, 1, v___x_1899_);
lean_inc_ref(v___x_1893_);
lean_inc_ref(v___f_1910_);
v___x_1911_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_1910_, v___x_1893_);
v___x_1912_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_1899_, v_inst_1881_);
v___x_1913_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_1913_, 0, lean_box(0));
lean_closure_set(v___x_1913_, 1, lean_box(0));
lean_closure_set(v___x_1913_, 2, lean_box(0));
lean_closure_set(v___x_1913_, 3, lean_box(0));
lean_closure_set(v___x_1913_, 4, v_inst_1882_);
lean_inc(v_inst_1880_);
v___x_1914_ = l_Lean_Elab_OpenDecl_instMonadResolveNameM___redArg(v_inst_1875_, v_inst_1880_);
lean_inc(v_toBind_1887_);
v___f_1915_ = lean_alloc_closure((void*)(l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg___lam__5), 16, 15);
lean_closure_set(v___f_1915_, 0, v_toApplicative_1886_);
lean_closure_set(v___f_1915_, 1, v_inst_1880_);
lean_closure_set(v___f_1915_, 2, v_toBind_1887_);
lean_closure_set(v___f_1915_, 3, v___x_1893_);
lean_closure_set(v___f_1915_, 4, v___x_1903_);
lean_closure_set(v___f_1915_, 5, v___x_1907_);
lean_closure_set(v___f_1915_, 6, v___x_1909_);
lean_closure_set(v___f_1915_, 7, v___x_1911_);
lean_closure_set(v___f_1915_, 8, v___f_1910_);
lean_closure_set(v___f_1915_, 9, v___x_1912_);
lean_closure_set(v___f_1915_, 10, v___x_1913_);
lean_closure_set(v___f_1915_, 11, v___x_1914_);
lean_closure_set(v___f_1915_, 12, v_nss_1884_);
lean_closure_set(v___f_1915_, 13, v_idStx_1885_);
lean_closure_set(v___f_1915_, 14, v_getCurrNamespace_1888_);
v___x_1916_ = lean_apply_4(v_toBind_1887_, lean_box(0), lean_box(0), v_getOpenDecls_1889_, v___f_1915_);
return v___x_1916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces(lean_object* v_m_1921_, lean_object* v_inst_1922_, lean_object* v_inst_1923_, lean_object* v_inst_1924_, lean_object* v_inst_1925_, lean_object* v_inst_1926_, lean_object* v_inst_1927_, lean_object* v_inst_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_nss_1931_, lean_object* v_idStx_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lean_Elab_OpenDecl_resolveNameUsingNamespaces___redArg(v_inst_1922_, v_inst_1923_, v_inst_1924_, v_inst_1925_, v_inst_1926_, v_inst_1927_, v_inst_1928_, v_inst_1929_, v_inst_1930_, v_nss_1931_, v_idStx_1932_);
return v___x_1933_;
}
}
lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_AmbiguousOpen(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Open(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_AmbiguousOpen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Open(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_AmbiguousOpen(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Open(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_AmbiguousOpen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Open(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Open(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Open(builtin);
}
#ifdef __cplusplus
}
#endif

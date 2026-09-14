// Lean compiler output
// Module: Lean.ResolveName
// Imports: public import Lean.Modifiers public import Lean.Exception public import Lean.Namespace public import Lean.Log
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstantAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_dbgToString___boxed(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SMap_instInhabited___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_logWarning___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_getM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l_Lean_Environment_isNamespace(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
lean_object* l_OptionT_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_lift___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_List_filterMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instAlternative___redArg(lean_object*);
lean_object* l_Option_isNone___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesRef;
static const lean_string_object l_Lean_registerReservedNamePredicate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = "failed to register reserved name suffix predicate, this operation can only be performed during initialization"};
static const lean_object* l_Lean_registerReservedNamePredicate___closed__0 = (const lean_object*)&l_Lean_registerReservedNamePredicate___closed__0_value;
static lean_once_cell_t l_Lean_registerReservedNamePredicate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerReservedNamePredicate___closed__1;
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesExt;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_isReservedName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isReservedName___closed__0;
static lean_once_cell_t l_Lean_isReservedName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isReservedName___closed__1;
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "aliasExtension"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 78, 120, 122, 20, 252, 110, 252)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addAliasEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_aliasExtension;
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getAliasState___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAliasState___closed__0;
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "privateInPublic"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 227, .m_capacity = 227, .m_length = 226, .m_data = "(module system) Export `private` declarations, allowing for arbitrary access to them while code is being ported to the module system. Such accesses will generate warnings\n    unless `backward.privateInPublic.warn` is disabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ResolveName"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 52, 68, 203, 224, 27, 156, 169)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "(module system) Warn on accesses to `private` declarations that are allowed only by `backward.privateInPublic` being enabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(50, 1, 203, 3, 164, 240, 100, 244)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0 = (const lean_object*)&l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object*);
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.ResolveName"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.ResolveName.resolveNamespaceUsingScope\?"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value;
static lean_once_cell_t l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveGlobalName___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveGlobalName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unknown namespace `"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveNamespace___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__0_value;
static const lean_array_object l_Lean_resolveNamespace___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__1 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__1_value;
static const lean_string_object l_Lean_resolveNamespace___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__2 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value;
static const lean_ctor_object l_Lean_resolveNamespace___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value)}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__3 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__3_value;
static lean_once_cell_t l_Lean_resolveNamespace___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_resolveNamespace___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ambiguous namespace `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`, possible interpretations: `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveUniqueNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__0 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__0_value;
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__1 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ensureNoOverload___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__0_value;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Ambiguous identifier `"};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__1 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__1_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__2;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`; possible interpretations: "};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__3_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__4;
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__5 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ensureNonAmbiguous"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ensureNonAmbiguous___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__1;
static const lean_closure_object l_Lean_ensureNonAmbiguous___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_dbgToString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__2 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__2_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__3_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__4 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__9 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveLocalName___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_isNone___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__4));
v___x_9_ = l_Lean_stringToMessageData(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_declName_12_, lean_object* v_reservedName_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_14_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__1, &l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1);
v___x_15_ = 0;
v___x_16_ = l_Lean_MessageData_ofConstName(v_declName_12_, v___x_15_);
v___x_17_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_14_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__3, &l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3);
v___x_19_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = 1;
v___x_21_ = l_Lean_MessageData_ofConstName(v_reservedName_13_, v___x_20_);
v___x_22_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_19_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__5, &l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5);
v___x_24_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = l_Lean_throwError___redArg(v_inst_10_, v_inst_11_, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object* v_m_26_, lean_object* v_inst_27_, lean_object* v_inst_28_, lean_object* v_declName_29_, lean_object* v_reservedName_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_27_, v_inst_28_, v_declName_29_, v_reservedName_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object* v_reservedName_32_, lean_object* v_toPure_33_, lean_object* v_inst_34_, lean_object* v_inst_35_, lean_object* v_declName_36_, lean_object* v_____do__lift_37_){
_start:
{
uint8_t v___x_38_; uint8_t v___x_39_; 
v___x_38_ = 1;
lean_inc(v_reservedName_32_);
v___x_39_ = l_Lean_Environment_contains(v_____do__lift_37_, v_reservedName_32_, v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_dec(v_declName_36_);
lean_dec_ref(v_inst_35_);
lean_dec_ref(v_inst_34_);
lean_dec(v_reservedName_32_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_2(v_toPure_33_, lean_box(0), v___x_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; 
lean_dec(v_toPure_33_);
v___x_42_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_34_, v_inst_35_, v_declName_36_, v_reservedName_32_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_declName_46_, lean_object* v_suffix_47_){
_start:
{
lean_object* v_toApplicative_48_; lean_object* v_toBind_49_; lean_object* v_getEnv_50_; lean_object* v_toPure_51_; lean_object* v_reservedName_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_toApplicative_48_ = lean_ctor_get(v_inst_43_, 0);
v_toBind_49_ = lean_ctor_get(v_inst_43_, 1);
lean_inc(v_toBind_49_);
v_getEnv_50_ = lean_ctor_get(v_inst_44_, 0);
lean_inc(v_getEnv_50_);
lean_dec_ref(v_inst_44_);
v_toPure_51_ = lean_ctor_get(v_toApplicative_48_, 1);
lean_inc(v_toPure_51_);
lean_inc(v_declName_46_);
v_reservedName_52_ = l_Lean_Name_str___override(v_declName_46_, v_suffix_47_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_ensureReservedNameAvailable___redArg___lam__0), 6, 5);
lean_closure_set(v___f_53_, 0, v_reservedName_52_);
lean_closure_set(v___f_53_, 1, v_toPure_51_);
lean_closure_set(v___f_53_, 2, v_inst_43_);
lean_closure_set(v___f_53_, 3, v_inst_45_);
lean_closure_set(v___f_53_, 4, v_declName_46_);
v___x_54_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v_getEnv_50_, v___f_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object* v_m_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_declName_59_, lean_object* v_suffix_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_ensureReservedNameAvailable___redArg(v_inst_56_, v_inst_57_, v_inst_58_, v_declName_59_, v_suffix_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_));
v___x_66_ = lean_st_mk_ref(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
return v_res_69_;
}
}
static lean_object* _init_l_Lean_registerReservedNamePredicate___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lean_registerReservedNamePredicate___closed__0));
v___x_72_ = lean_mk_io_user_error(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object* v_p_73_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = l_Lean_initializing();
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec_ref(v_p_73_);
v___x_76_ = lean_obj_once(&l_Lean_registerReservedNamePredicate___closed__1, &l_Lean_registerReservedNamePredicate___closed__1_once, _init_l_Lean_registerReservedNamePredicate___closed__1);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = l_Lean_reservedNamePredicatesRef;
v___x_79_ = lean_st_ref_take(v___x_78_);
v___x_80_ = lean_array_push(v___x_79_, v_p_73_);
v___x_81_ = lean_st_ref_put(v___x_78_, v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object* v_p_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_registerReservedNamePredicate(v_p_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(lean_object* v___x_86_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_st_ref_get(v___x_86_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object* v___x_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(v___x_90_);
lean_dec(v___x_90_);
return v_res_92_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_93_; lean_object* v___f_94_; 
v___x_93_ = l_Lean_reservedNamePredicatesRef;
v___f_94_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_94_, 0, v___x_93_);
return v___f_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_96_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_);
v___x_97_ = lean_box(0);
v___x_98_ = lean_box(2);
v___x_99_ = l_Lean_registerEnvExtension___redArg(v___f_96_, v___x_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
return v_res_101_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object* v_env_102_, lean_object* v_name_103_, lean_object* v_as_104_, size_t v_i_105_, size_t v_stop_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lean_usize_dec_eq(v_i_105_, v_stop_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_153__overap_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_153__overap_108_ = lean_array_uget_borrowed(v_as_104_, v_i_105_);
lean_inc(v___x_153__overap_108_);
lean_inc(v_name_103_);
lean_inc_ref(v_env_102_);
v___x_109_ = lean_apply_2(v___x_153__overap_108_, v_env_102_, v_name_103_);
v___x_110_ = lean_unbox(v___x_109_);
if (v___x_110_ == 0)
{
size_t v___x_111_; size_t v___x_112_; 
v___x_111_ = ((size_t)1ULL);
v___x_112_ = lean_usize_add(v_i_105_, v___x_111_);
v_i_105_ = v___x_112_;
goto _start;
}
else
{
uint8_t v___x_114_; 
lean_dec(v_name_103_);
lean_dec_ref(v_env_102_);
v___x_114_ = lean_unbox(v___x_109_);
return v___x_114_;
}
}
else
{
uint8_t v___x_115_; 
lean_dec(v_name_103_);
lean_dec_ref(v_env_102_);
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object* v_env_116_, lean_object* v_name_117_, lean_object* v_as_118_, lean_object* v_i_119_, lean_object* v_stop_120_){
_start:
{
size_t v_i_boxed_121_; size_t v_stop_boxed_122_; uint8_t v_res_123_; lean_object* v_r_124_; 
v_i_boxed_121_ = lean_unbox_usize(v_i_119_);
lean_dec(v_i_119_);
v_stop_boxed_122_ = lean_unbox_usize(v_stop_120_);
lean_dec(v_stop_120_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_116_, v_name_117_, v_as_118_, v_i_boxed_121_, v_stop_boxed_122_);
lean_dec_ref(v_as_118_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__0(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Array_instInhabited___redArg();
return v___x_125_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__1(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_box(0);
v___x_127_ = l_unsafeCast___redArg(v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object* v_env_128_, lean_object* v_name_129_){
_start:
{
lean_object* v___x_130_; lean_object* v_asyncMode_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_130_ = l_Lean_reservedNamePredicatesExt;
v_asyncMode_131_ = lean_ctor_get(v___x_130_, 2);
v___x_132_ = lean_obj_once(&l_Lean_isReservedName___closed__0, &l_Lean_isReservedName___closed__0_once, _init_l_Lean_isReservedName___closed__0);
v___x_133_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
lean_inc_ref(v_env_128_);
v___x_134_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_132_, v___x_130_, v_env_128_, v_asyncMode_131_, v___x_133_);
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = lean_array_get_size(v___x_134_);
v___x_137_ = lean_nat_dec_lt(v___x_135_, v___x_136_);
if (v___x_137_ == 0)
{
lean_dec(v___x_134_);
lean_dec(v_name_129_);
lean_dec_ref(v_env_128_);
return v___x_137_;
}
else
{
if (v___x_137_ == 0)
{
lean_dec(v___x_134_);
lean_dec(v_name_129_);
lean_dec_ref(v_env_128_);
return v___x_137_;
}
else
{
size_t v___x_138_; size_t v___x_139_; uint8_t v___x_140_; 
v___x_138_ = ((size_t)0ULL);
v___x_139_ = lean_usize_of_nat(v___x_136_);
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_128_, v_name_129_, v___x_134_, v___x_138_, v___x_139_);
lean_dec(v___x_134_);
return v___x_140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object* v_env_141_, lean_object* v_name_142_){
_start:
{
uint8_t v_res_143_; lean_object* v_r_144_; 
v_res_143_ = lean_is_reserved_name(v_env_141_, v_name_142_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_145_, lean_object* v_x_146_, lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
lean_object* v_ks_149_; lean_object* v_vs_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_174_; 
v_ks_149_ = lean_ctor_get(v_x_145_, 0);
v_vs_150_ = lean_ctor_get(v_x_145_, 1);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_174_ == 0)
{
v___x_152_ = v_x_145_;
v_isShared_153_ = v_isSharedCheck_174_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_vs_150_);
lean_inc(v_ks_149_);
lean_dec(v_x_145_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_174_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_array_get_size(v_ks_149_);
v___x_155_ = lean_nat_dec_lt(v_x_146_, v___x_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
lean_dec(v_x_146_);
v___x_156_ = lean_array_push(v_ks_149_, v_x_147_);
v___x_157_ = lean_array_push(v_vs_150_, v_x_148_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 1, v___x_157_);
lean_ctor_set(v___x_152_, 0, v___x_156_);
v___x_159_ = v___x_152_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_156_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
else
{
lean_object* v_k_x27_161_; uint8_t v___x_162_; 
v_k_x27_161_ = lean_array_fget_borrowed(v_ks_149_, v_x_146_);
v___x_162_ = lean_name_eq(v_x_147_, v_k_x27_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_164_; 
if (v_isShared_153_ == 0)
{
v___x_164_ = v___x_152_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_ks_149_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_vs_150_);
v___x_164_ = v_reuseFailAlloc_168_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = lean_nat_add(v_x_146_, v___x_165_);
lean_dec(v_x_146_);
v_x_145_ = v___x_164_;
v_x_146_ = v___x_166_;
goto _start;
}
}
else
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_169_ = lean_array_fset(v_ks_149_, v_x_146_, v_x_147_);
v___x_170_ = lean_array_fset(v_vs_150_, v_x_146_, v_x_148_);
lean_dec(v_x_146_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 1, v___x_170_);
lean_ctor_set(v___x_152_, 0, v___x_169_);
v___x_172_ = v___x_152_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object* v_n_175_, lean_object* v_k_176_, lean_object* v_v_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_n_175_, v___x_178_, v_k_176_, v_v_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_box(0);
v___x_181_ = l_unsafeCast___redArg(v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object* v_x_183_, size_t v_x_184_, size_t v_x_185_, lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
if (lean_obj_tag(v_x_183_) == 0)
{
lean_object* v_es_188_; size_t v___x_189_; size_t v___x_190_; lean_object* v_j_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_es_188_ = lean_ctor_get(v_x_183_, 0);
v___x_189_ = ((size_t)31ULL);
v___x_190_ = lean_usize_land(v_x_184_, v___x_189_);
v_j_191_ = lean_usize_to_nat(v___x_190_);
v___x_192_ = lean_array_get_size(v_es_188_);
v___x_193_ = lean_nat_dec_lt(v_j_191_, v___x_192_);
if (v___x_193_ == 0)
{
lean_dec(v_j_191_);
lean_dec(v_x_187_);
lean_dec(v_x_186_);
return v_x_183_;
}
else
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_232_; 
lean_inc_ref(v_es_188_);
v_isSharedCheck_232_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_x_183_, 0);
lean_dec(v_unused_233_);
v___x_195_ = v_x_183_;
v_isShared_196_ = v_isSharedCheck_232_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_x_183_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_232_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v_v_197_; lean_object* v___x_198_; lean_object* v_xs_x27_199_; lean_object* v___y_201_; 
v_v_197_ = lean_array_fget(v_es_188_, v_j_191_);
v___x_198_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0);
v_xs_x27_199_ = lean_array_fset(v_es_188_, v_j_191_, v___x_198_);
switch(lean_obj_tag(v_v_197_))
{
case 0:
{
lean_object* v_key_206_; lean_object* v_val_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_217_; 
v_key_206_ = lean_ctor_get(v_v_197_, 0);
v_val_207_ = lean_ctor_get(v_v_197_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v_v_197_);
if (v_isSharedCheck_217_ == 0)
{
v___x_209_ = v_v_197_;
v_isShared_210_ = v_isSharedCheck_217_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_val_207_);
lean_inc(v_key_206_);
lean_dec(v_v_197_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_217_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
uint8_t v___x_211_; 
v___x_211_ = lean_name_eq(v_x_186_, v_key_206_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_del_object(v___x_209_);
v___x_212_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_206_, v_val_207_, v_x_186_, v_x_187_);
v___x_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
v___y_201_ = v___x_213_;
goto v___jp_200_;
}
else
{
lean_object* v___x_215_; 
lean_dec(v_val_207_);
lean_dec(v_key_206_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v_x_187_);
lean_ctor_set(v___x_209_, 0, v_x_186_);
v___x_215_ = v___x_209_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_x_186_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_x_187_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
v___y_201_ = v___x_215_;
goto v___jp_200_;
}
}
}
}
case 1:
{
lean_object* v_node_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_230_; 
v_node_218_ = lean_ctor_get(v_v_197_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v_v_197_);
if (v_isSharedCheck_230_ == 0)
{
v___x_220_ = v_v_197_;
v_isShared_221_ = v_isSharedCheck_230_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_node_218_);
lean_dec(v_v_197_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_230_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
size_t v___x_222_; size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_222_ = ((size_t)5ULL);
v___x_223_ = lean_usize_shift_right(v_x_184_, v___x_222_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_x_185_, v___x_224_);
v___x_226_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_node_218_, v___x_223_, v___x_225_, v_x_186_, v_x_187_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_226_);
v___x_228_ = v___x_220_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
v___y_201_ = v___x_228_;
goto v___jp_200_;
}
}
}
default: 
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_x_186_);
lean_ctor_set(v___x_231_, 1, v_x_187_);
v___y_201_ = v___x_231_;
goto v___jp_200_;
}
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = lean_array_fset(v_xs_x27_199_, v_j_191_, v___y_201_);
lean_dec(v_j_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_202_);
v___x_204_ = v___x_195_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
else
{
lean_object* v_ks_234_; lean_object* v_vs_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_253_; 
v_ks_234_ = lean_ctor_get(v_x_183_, 0);
v_vs_235_ = lean_ctor_get(v_x_183_, 1);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_183_);
if (v_isSharedCheck_253_ == 0)
{
v___x_237_ = v_x_183_;
v_isShared_238_ = v_isSharedCheck_253_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_vs_235_);
lean_inc(v_ks_234_);
lean_dec(v_x_183_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_253_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_ks_234_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v_vs_235_);
v___x_240_ = v_reuseFailAlloc_252_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v_newNode_241_; size_t v___x_242_; uint8_t v___x_243_; 
v_newNode_241_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v___x_240_, v_x_186_, v_x_187_);
v___x_242_ = ((size_t)7ULL);
v___x_243_ = lean_usize_dec_le(v___x_242_, v_x_185_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_244_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_241_);
v___x_245_ = lean_unsigned_to_nat(4u);
v___x_246_ = lean_nat_dec_lt(v___x_244_, v___x_245_);
lean_dec(v___x_244_);
if (v___x_246_ == 0)
{
lean_object* v_ks_247_; lean_object* v_vs_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_ks_247_ = lean_ctor_get(v_newNode_241_, 0);
lean_inc_ref(v_ks_247_);
v_vs_248_ = lean_ctor_get(v_newNode_241_, 1);
lean_inc_ref(v_vs_248_);
lean_dec_ref(v_newNode_241_);
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__1);
v___x_251_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_x_185_, v_ks_247_, v_vs_248_, v___x_249_, v___x_250_);
lean_dec_ref(v_vs_248_);
lean_dec_ref(v_ks_247_);
return v___x_251_;
}
else
{
return v_newNode_241_;
}
}
else
{
return v_newNode_241_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t v_depth_254_, lean_object* v_keys_255_, lean_object* v_vals_256_, lean_object* v_i_257_, lean_object* v_entries_258_){
_start:
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_array_get_size(v_keys_255_);
v___x_260_ = lean_nat_dec_lt(v_i_257_, v___x_259_);
if (v___x_260_ == 0)
{
lean_dec(v_i_257_);
return v_entries_258_;
}
else
{
lean_object* v_k_261_; lean_object* v_v_262_; uint64_t v___y_264_; lean_object* v___x_275_; 
v_k_261_ = lean_array_fget_borrowed(v_keys_255_, v_i_257_);
v_v_262_ = lean_array_fget_borrowed(v_vals_256_, v_i_257_);
v___x_275_ = l_unsafeCast___redArg(v_k_261_);
if (lean_obj_tag(v___x_275_) == 0)
{
uint64_t v___x_276_; 
v___x_276_ = 1723ULL;
v___y_264_ = v___x_276_;
goto v___jp_263_;
}
else
{
uint64_t v_hash_277_; 
v_hash_277_ = lean_ctor_get_uint64(v___x_275_, sizeof(void*)*2);
lean_dec(v___x_275_);
v___y_264_ = v_hash_277_;
goto v___jp_263_;
}
v___jp_263_:
{
size_t v_h_265_; size_t v___x_266_; lean_object* v___x_267_; size_t v___x_268_; size_t v___x_269_; size_t v___x_270_; size_t v_h_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_h_265_ = lean_uint64_to_usize(v___y_264_);
v___x_266_ = ((size_t)5ULL);
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = ((size_t)1ULL);
v___x_269_ = lean_usize_sub(v_depth_254_, v___x_268_);
v___x_270_ = lean_usize_mul(v___x_266_, v___x_269_);
v_h_271_ = lean_usize_shift_right(v_h_265_, v___x_270_);
v___x_272_ = lean_nat_add(v_i_257_, v___x_267_);
lean_dec(v_i_257_);
lean_inc(v_v_262_);
lean_inc(v_k_261_);
v___x_273_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_entries_258_, v_h_271_, v_depth_254_, v_k_261_, v_v_262_);
v_i_257_ = v___x_272_;
v_entries_258_ = v___x_273_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_278_, lean_object* v_keys_279_, lean_object* v_vals_280_, lean_object* v_i_281_, lean_object* v_entries_282_){
_start:
{
size_t v_depth_boxed_283_; lean_object* v_res_284_; 
v_depth_boxed_283_ = lean_unbox_usize(v_depth_278_);
lean_dec(v_depth_278_);
v_res_284_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_boxed_283_, v_keys_279_, v_vals_280_, v_i_281_, v_entries_282_);
lean_dec_ref(v_vals_280_);
lean_dec_ref(v_keys_279_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_285_, lean_object* v_x_286_, lean_object* v_x_287_, lean_object* v_x_288_, lean_object* v_x_289_){
_start:
{
size_t v_x_1089__boxed_290_; size_t v_x_1090__boxed_291_; lean_object* v_res_292_; 
v_x_1089__boxed_290_ = lean_unbox_usize(v_x_286_);
lean_dec(v_x_286_);
v_x_1090__boxed_291_ = lean_unbox_usize(v_x_287_);
lean_dec(v_x_287_);
v_res_292_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_285_, v_x_1089__boxed_290_, v_x_1090__boxed_291_, v_x_288_, v_x_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object* v_x_293_, lean_object* v_x_294_, lean_object* v_x_295_){
_start:
{
uint64_t v___y_297_; lean_object* v___x_301_; 
v___x_301_ = l_unsafeCast___redArg(v_x_294_);
if (lean_obj_tag(v___x_301_) == 0)
{
uint64_t v___x_302_; 
v___x_302_ = 1723ULL;
v___y_297_ = v___x_302_;
goto v___jp_296_;
}
else
{
uint64_t v_hash_303_; 
v_hash_303_ = lean_ctor_get_uint64(v___x_301_, sizeof(void*)*2);
lean_dec(v___x_301_);
v___y_297_ = v_hash_303_;
goto v___jp_296_;
}
v___jp_296_:
{
size_t v___x_298_; size_t v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_uint64_to_usize(v___y_297_);
v___x_299_ = ((size_t)1ULL);
v___x_300_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_293_, v___x_298_, v___x_299_, v_x_294_, v_x_295_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
return v_x_304_;
}
else
{
lean_object* v_key_306_; lean_object* v_value_307_; lean_object* v_tail_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_335_; 
v_key_306_ = lean_ctor_get(v_x_305_, 0);
v_value_307_ = lean_ctor_get(v_x_305_, 1);
v_tail_308_ = lean_ctor_get(v_x_305_, 2);
v_isSharedCheck_335_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_335_ == 0)
{
v___x_310_ = v_x_305_;
v_isShared_311_ = v_isSharedCheck_335_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_tail_308_);
lean_inc(v_value_307_);
lean_inc(v_key_306_);
lean_dec(v_x_305_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_335_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; uint64_t v___y_314_; lean_object* v___x_332_; 
v___x_312_ = lean_array_get_size(v_x_304_);
v___x_332_ = l_unsafeCast___redArg(v_key_306_);
if (lean_obj_tag(v___x_332_) == 0)
{
uint64_t v___x_333_; 
v___x_333_ = 1723ULL;
v___y_314_ = v___x_333_;
goto v___jp_313_;
}
else
{
uint64_t v_hash_334_; 
v_hash_334_ = lean_ctor_get_uint64(v___x_332_, sizeof(void*)*2);
lean_dec(v___x_332_);
v___y_314_ = v_hash_334_;
goto v___jp_313_;
}
v___jp_313_:
{
uint64_t v___x_315_; uint64_t v___x_316_; uint64_t v_fold_317_; uint64_t v___x_318_; uint64_t v___x_319_; uint64_t v___x_320_; size_t v___x_321_; size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_315_ = 32ULL;
v___x_316_ = lean_uint64_shift_right(v___y_314_, v___x_315_);
v_fold_317_ = lean_uint64_xor(v___y_314_, v___x_316_);
v___x_318_ = 16ULL;
v___x_319_ = lean_uint64_shift_right(v_fold_317_, v___x_318_);
v___x_320_ = lean_uint64_xor(v_fold_317_, v___x_319_);
v___x_321_ = lean_uint64_to_usize(v___x_320_);
v___x_322_ = lean_usize_of_nat(v___x_312_);
v___x_323_ = ((size_t)1ULL);
v___x_324_ = lean_usize_sub(v___x_322_, v___x_323_);
v___x_325_ = lean_usize_land(v___x_321_, v___x_324_);
v___x_326_ = lean_array_uget_borrowed(v_x_304_, v___x_325_);
lean_inc(v___x_326_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 2, v___x_326_);
v___x_328_ = v___x_310_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_key_306_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_value_307_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v___x_326_);
v___x_328_ = v_reuseFailAlloc_331_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; 
v___x_329_ = lean_array_uset(v_x_304_, v___x_325_, v___x_328_);
v_x_304_ = v___x_329_;
v_x_305_ = v_tail_308_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object* v_i_336_, lean_object* v_source_337_, lean_object* v_target_338_){
_start:
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_array_get_size(v_source_337_);
v___x_340_ = lean_nat_dec_lt(v_i_336_, v___x_339_);
if (v___x_340_ == 0)
{
lean_dec_ref(v_source_337_);
lean_dec(v_i_336_);
return v_target_338_;
}
else
{
lean_object* v_es_341_; lean_object* v___x_342_; lean_object* v_source_343_; lean_object* v_target_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_es_341_ = lean_array_fget(v_source_337_, v_i_336_);
v___x_342_ = lean_box(0);
v_source_343_ = lean_array_fset(v_source_337_, v_i_336_, v___x_342_);
v_target_344_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_target_338_, v_es_341_);
v___x_345_ = lean_unsigned_to_nat(1u);
v___x_346_ = lean_nat_add(v_i_336_, v___x_345_);
lean_dec(v_i_336_);
v_i_336_ = v___x_346_;
v_source_337_ = v_source_343_;
v_target_338_ = v_target_344_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_data_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_nbuckets_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_349_ = lean_array_get_size(v_data_348_);
v___x_350_ = lean_unsigned_to_nat(2u);
v_nbuckets_351_ = lean_nat_mul(v___x_349_, v___x_350_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_box(0);
v___x_354_ = lean_mk_array(v_nbuckets_351_, v___x_353_);
v___x_355_ = lean_array_propagate_mark(v_data_348_, v___x_354_);
v___x_356_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v___x_352_, v_data_348_, v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object* v_a_357_, lean_object* v_x_358_){
_start:
{
if (lean_obj_tag(v_x_358_) == 0)
{
uint8_t v___x_359_; 
v___x_359_ = 0;
return v___x_359_;
}
else
{
lean_object* v_key_360_; lean_object* v_tail_361_; uint8_t v___x_362_; 
v_key_360_ = lean_ctor_get(v_x_358_, 0);
v_tail_361_ = lean_ctor_get(v_x_358_, 2);
v___x_362_ = lean_name_eq(v_key_360_, v_a_357_);
if (v___x_362_ == 0)
{
v_x_358_ = v_tail_361_;
goto _start;
}
else
{
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_364_, lean_object* v_x_365_){
_start:
{
uint8_t v_res_366_; lean_object* v_r_367_; 
v_res_366_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_364_, v_x_365_);
lean_dec(v_x_365_);
lean_dec(v_a_364_);
v_r_367_ = lean_box(v_res_366_);
return v_r_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object* v_a_368_, lean_object* v_b_369_, lean_object* v_x_370_){
_start:
{
if (lean_obj_tag(v_x_370_) == 0)
{
lean_dec(v_b_369_);
lean_dec(v_a_368_);
return v_x_370_;
}
else
{
lean_object* v_key_371_; lean_object* v_value_372_; lean_object* v_tail_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_385_; 
v_key_371_ = lean_ctor_get(v_x_370_, 0);
v_value_372_ = lean_ctor_get(v_x_370_, 1);
v_tail_373_ = lean_ctor_get(v_x_370_, 2);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_370_);
if (v_isSharedCheck_385_ == 0)
{
v___x_375_ = v_x_370_;
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_tail_373_);
lean_inc(v_value_372_);
lean_inc(v_key_371_);
lean_dec(v_x_370_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_385_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
uint8_t v___x_377_; 
v___x_377_ = lean_name_eq(v_key_371_, v_a_368_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_368_, v_b_369_, v_tail_373_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 2, v___x_378_);
v___x_380_ = v___x_375_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_key_371_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_value_372_);
lean_ctor_set(v_reuseFailAlloc_381_, 2, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
else
{
lean_object* v___x_383_; 
lean_dec(v_value_372_);
lean_dec(v_key_371_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v_b_369_);
lean_ctor_set(v___x_375_, 0, v_a_368_);
v___x_383_ = v___x_375_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_368_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_b_369_);
lean_ctor_set(v_reuseFailAlloc_384_, 2, v_tail_373_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object* v_m_386_, lean_object* v_a_387_, lean_object* v_b_388_){
_start:
{
lean_object* v_size_389_; lean_object* v_buckets_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_437_; 
v_size_389_ = lean_ctor_get(v_m_386_, 0);
v_buckets_390_ = lean_ctor_get(v_m_386_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_m_386_);
if (v_isSharedCheck_437_ == 0)
{
v___x_392_ = v_m_386_;
v_isShared_393_ = v_isSharedCheck_437_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_buckets_390_);
lean_inc(v_size_389_);
lean_dec(v_m_386_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_437_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; uint64_t v___y_396_; lean_object* v___x_434_; 
v___x_394_ = lean_array_get_size(v_buckets_390_);
v___x_434_ = l_unsafeCast___redArg(v_a_387_);
if (lean_obj_tag(v___x_434_) == 0)
{
uint64_t v___x_435_; 
v___x_435_ = 1723ULL;
v___y_396_ = v___x_435_;
goto v___jp_395_;
}
else
{
uint64_t v_hash_436_; 
v_hash_436_ = lean_ctor_get_uint64(v___x_434_, sizeof(void*)*2);
lean_dec(v___x_434_);
v___y_396_ = v_hash_436_;
goto v___jp_395_;
}
v___jp_395_:
{
uint64_t v___x_397_; uint64_t v___x_398_; uint64_t v_fold_399_; uint64_t v___x_400_; uint64_t v___x_401_; uint64_t v___x_402_; size_t v___x_403_; size_t v___x_404_; size_t v___x_405_; size_t v___x_406_; size_t v___x_407_; lean_object* v_bkt_408_; uint8_t v___x_409_; 
v___x_397_ = 32ULL;
v___x_398_ = lean_uint64_shift_right(v___y_396_, v___x_397_);
v_fold_399_ = lean_uint64_xor(v___y_396_, v___x_398_);
v___x_400_ = 16ULL;
v___x_401_ = lean_uint64_shift_right(v_fold_399_, v___x_400_);
v___x_402_ = lean_uint64_xor(v_fold_399_, v___x_401_);
v___x_403_ = lean_uint64_to_usize(v___x_402_);
v___x_404_ = lean_usize_of_nat(v___x_394_);
v___x_405_ = ((size_t)1ULL);
v___x_406_ = lean_usize_sub(v___x_404_, v___x_405_);
v___x_407_ = lean_usize_land(v___x_403_, v___x_406_);
v_bkt_408_ = lean_array_uget_borrowed(v_buckets_390_, v___x_407_);
v___x_409_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_387_, v_bkt_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v_size_x27_411_; lean_object* v___x_412_; lean_object* v_buckets_x27_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_410_ = lean_unsigned_to_nat(1u);
v_size_x27_411_ = lean_nat_add(v_size_389_, v___x_410_);
lean_dec(v_size_389_);
lean_inc(v_bkt_408_);
v___x_412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_412_, 0, v_a_387_);
lean_ctor_set(v___x_412_, 1, v_b_388_);
lean_ctor_set(v___x_412_, 2, v_bkt_408_);
v_buckets_x27_413_ = lean_array_uset(v_buckets_390_, v___x_407_, v___x_412_);
v___x_414_ = lean_unsigned_to_nat(4u);
v___x_415_ = lean_nat_mul(v_size_x27_411_, v___x_414_);
v___x_416_ = lean_unsigned_to_nat(3u);
v___x_417_ = lean_nat_div(v___x_415_, v___x_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_array_get_size(v_buckets_x27_413_);
v___x_419_ = lean_nat_dec_le(v___x_417_, v___x_418_);
lean_dec(v___x_417_);
if (v___x_419_ == 0)
{
lean_object* v_val_420_; lean_object* v___x_422_; 
v_val_420_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_buckets_x27_413_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v_val_420_);
lean_ctor_set(v___x_392_, 0, v_size_x27_411_);
v___x_422_ = v___x_392_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_size_x27_411_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_val_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
else
{
lean_object* v___x_425_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v_buckets_x27_413_);
lean_ctor_set(v___x_392_, 0, v_size_x27_411_);
v___x_425_ = v___x_392_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_size_x27_411_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_buckets_x27_413_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
else
{
lean_object* v___x_427_; lean_object* v_buckets_x27_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
lean_inc(v_bkt_408_);
v___x_427_ = lean_box(0);
v_buckets_x27_428_ = lean_array_uset(v_buckets_390_, v___x_407_, v___x_427_);
v___x_429_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_387_, v_b_388_, v_bkt_408_);
v___x_430_ = lean_array_uset(v_buckets_x27_428_, v___x_407_, v___x_429_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_430_);
v___x_432_ = v___x_392_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_size_389_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
uint8_t v_stage_u2081_441_; 
v_stage_u2081_441_ = lean_ctor_get_uint8(v_x_438_, sizeof(void*)*2);
if (v_stage_u2081_441_ == 0)
{
lean_object* v_map_u2081_442_; lean_object* v_map_u2082_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_451_; 
v_map_u2081_442_ = lean_ctor_get(v_x_438_, 0);
v_map_u2082_443_ = lean_ctor_get(v_x_438_, 1);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_438_);
if (v_isSharedCheck_451_ == 0)
{
v___x_445_ = v_x_438_;
v_isShared_446_ = v_isSharedCheck_451_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_map_u2082_443_);
lean_inc(v_map_u2081_442_);
lean_dec(v_x_438_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_451_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_map_u2082_443_, v_x_439_, v_x_440_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 1, v___x_447_);
v___x_449_ = v___x_445_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_map_u2081_442_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v___x_447_);
lean_ctor_set_uint8(v_reuseFailAlloc_450_, sizeof(void*)*2, v_stage_u2081_441_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
else
{
lean_object* v_map_u2081_452_; lean_object* v_map_u2082_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
v_map_u2081_452_ = lean_ctor_get(v_x_438_, 0);
v_map_u2082_453_ = lean_ctor_get(v_x_438_, 1);
v_isSharedCheck_461_ = !lean_is_exclusive(v_x_438_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v_x_438_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_map_u2082_453_);
lean_inc(v_map_u2081_452_);
lean_dec(v_x_438_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_map_u2081_452_, v_x_439_, v_x_440_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 0, v___x_457_);
v___x_459_ = v___x_455_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_map_u2082_453_);
lean_ctor_set_uint8(v_reuseFailAlloc_460_, sizeof(void*)*2, v_stage_u2081_441_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_462_, lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_box(0);
return v___x_464_;
}
else
{
lean_object* v_key_465_; lean_object* v_value_466_; lean_object* v_tail_467_; uint8_t v___x_468_; 
v_key_465_ = lean_ctor_get(v_x_463_, 0);
v_value_466_ = lean_ctor_get(v_x_463_, 1);
v_tail_467_ = lean_ctor_get(v_x_463_, 2);
v___x_468_ = lean_name_eq(v_key_465_, v_a_462_);
if (v___x_468_ == 0)
{
v_x_463_ = v_tail_467_;
goto _start;
}
else
{
lean_object* v___x_470_; 
lean_inc(v_value_466_);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v_value_466_);
return v___x_470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_471_, lean_object* v_x_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_471_, v_x_472_);
lean_dec(v_x_472_);
lean_dec(v_a_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object* v_m_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_buckets_476_; lean_object* v___x_477_; uint64_t v___y_479_; lean_object* v___x_493_; 
v_buckets_476_ = lean_ctor_get(v_m_474_, 1);
v___x_477_ = lean_array_get_size(v_buckets_476_);
v___x_493_ = l_unsafeCast___redArg(v_a_475_);
if (lean_obj_tag(v___x_493_) == 0)
{
uint64_t v___x_494_; 
v___x_494_ = 1723ULL;
v___y_479_ = v___x_494_;
goto v___jp_478_;
}
else
{
uint64_t v_hash_495_; 
v_hash_495_ = lean_ctor_get_uint64(v___x_493_, sizeof(void*)*2);
lean_dec(v___x_493_);
v___y_479_ = v_hash_495_;
goto v___jp_478_;
}
v___jp_478_:
{
uint64_t v___x_480_; uint64_t v___x_481_; uint64_t v_fold_482_; uint64_t v___x_483_; uint64_t v___x_484_; uint64_t v___x_485_; size_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_480_ = 32ULL;
v___x_481_ = lean_uint64_shift_right(v___y_479_, v___x_480_);
v_fold_482_ = lean_uint64_xor(v___y_479_, v___x_481_);
v___x_483_ = 16ULL;
v___x_484_ = lean_uint64_shift_right(v_fold_482_, v___x_483_);
v___x_485_ = lean_uint64_xor(v_fold_482_, v___x_484_);
v___x_486_ = lean_uint64_to_usize(v___x_485_);
v___x_487_ = lean_usize_of_nat(v___x_477_);
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_sub(v___x_487_, v___x_488_);
v___x_490_ = lean_usize_land(v___x_486_, v___x_489_);
v___x_491_ = lean_array_uget_borrowed(v_buckets_476_, v___x_490_);
v___x_492_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_475_, v___x_491_);
return v___x_492_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object* v_m_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_496_, v_a_497_);
lean_dec(v_a_497_);
lean_dec_ref(v_m_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_499_, lean_object* v_vals_500_, lean_object* v_i_501_, lean_object* v_k_502_){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_get_size(v_keys_499_);
v___x_504_ = lean_nat_dec_lt(v_i_501_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v_i_501_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_k_x27_506_; uint8_t v___x_507_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_keys_499_, v_i_501_);
v___x_507_ = lean_name_eq(v_k_502_, v_k_x27_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_i_501_, v___x_508_);
lean_dec(v_i_501_);
v_i_501_ = v___x_509_;
goto _start;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_array_fget_borrowed(v_vals_500_, v_i_501_);
lean_dec(v_i_501_);
lean_inc(v___x_511_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_i_515_, lean_object* v_k_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_513_, v_vals_514_, v_i_515_, v_k_516_);
lean_dec(v_k_516_);
lean_dec_ref(v_vals_514_);
lean_dec_ref(v_keys_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_518_, size_t v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_es_521_; lean_object* v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_j_525_; lean_object* v___x_526_; 
v_es_521_ = lean_ctor_get(v_x_518_, 0);
v___x_522_ = lean_box(2);
v___x_523_ = ((size_t)31ULL);
v___x_524_ = lean_usize_land(v_x_519_, v___x_523_);
v_j_525_ = lean_usize_to_nat(v___x_524_);
v___x_526_ = lean_array_get_borrowed(v___x_522_, v_es_521_, v_j_525_);
lean_dec(v_j_525_);
switch(lean_obj_tag(v___x_526_))
{
case 0:
{
lean_object* v_key_527_; lean_object* v_val_528_; uint8_t v___x_529_; 
v_key_527_ = lean_ctor_get(v___x_526_, 0);
v_val_528_ = lean_ctor_get(v___x_526_, 1);
v___x_529_ = lean_name_eq(v_x_520_, v_key_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
lean_inc(v_val_528_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_val_528_);
return v___x_531_;
}
}
case 1:
{
lean_object* v_node_532_; size_t v___x_533_; size_t v___x_534_; 
v_node_532_ = lean_ctor_get(v___x_526_, 0);
v___x_533_ = ((size_t)5ULL);
v___x_534_ = lean_usize_shift_right(v_x_519_, v___x_533_);
v_x_518_ = v_node_532_;
v_x_519_ = v___x_534_;
goto _start;
}
default: 
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
}
else
{
lean_object* v_ks_537_; lean_object* v_vs_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_ks_537_ = lean_ctor_get(v_x_518_, 0);
v_vs_538_ = lean_ctor_get(v_x_518_, 1);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_537_, v_vs_538_, v___x_539_, v_x_520_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
size_t v_x_1604__boxed_544_; lean_object* v_res_545_; 
v_x_1604__boxed_544_ = lean_unbox_usize(v_x_542_);
lean_dec(v_x_542_);
v_res_545_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_541_, v_x_1604__boxed_544_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_x_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
uint64_t v___y_549_; lean_object* v___x_552_; 
v___x_552_ = l_unsafeCast___redArg(v_x_547_);
if (lean_obj_tag(v___x_552_) == 0)
{
uint64_t v___x_553_; 
v___x_553_ = 1723ULL;
v___y_549_ = v___x_553_;
goto v___jp_548_;
}
else
{
uint64_t v_hash_554_; 
v_hash_554_ = lean_ctor_get_uint64(v___x_552_, sizeof(void*)*2);
lean_dec(v___x_552_);
v___y_549_ = v_hash_554_;
goto v___jp_548_;
}
v___jp_548_:
{
size_t v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_uint64_to_usize(v___y_549_);
v___x_551_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_546_, v___x_550_, v_x_547_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_555_, v_x_556_);
lean_dec(v_x_556_);
lean_dec_ref(v_x_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
uint8_t v_stage_u2081_560_; 
v_stage_u2081_560_ = lean_ctor_get_uint8(v_x_558_, sizeof(void*)*2);
if (v_stage_u2081_560_ == 0)
{
lean_object* v_map_u2081_561_; lean_object* v_map_u2082_562_; lean_object* v___x_563_; 
v_map_u2081_561_ = lean_ctor_get(v_x_558_, 0);
v_map_u2082_562_ = lean_ctor_get(v_x_558_, 1);
v___x_563_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_map_u2082_562_, v_x_559_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_561_, v_x_559_);
return v___x_564_;
}
else
{
return v___x_563_;
}
}
else
{
lean_object* v_map_u2081_565_; lean_object* v___x_566_; 
v_map_u2081_565_ = lean_ctor_get(v_x_558_, 0);
v___x_566_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_565_, v_x_559_);
return v___x_566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object* v_x_567_, lean_object* v_x_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_567_, v_x_568_);
lean_dec(v_x_568_);
lean_dec_ref(v_x_567_);
return v_res_569_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object* v_a_570_, lean_object* v_x_571_){
_start:
{
if (lean_obj_tag(v_x_571_) == 0)
{
uint8_t v___x_572_; 
v___x_572_ = 0;
return v___x_572_;
}
else
{
lean_object* v_head_573_; lean_object* v_tail_574_; uint8_t v___x_575_; 
v_head_573_ = lean_ctor_get(v_x_571_, 0);
v_tail_574_ = lean_ctor_get(v_x_571_, 1);
v___x_575_ = lean_name_eq(v_a_570_, v_head_573_);
if (v___x_575_ == 0)
{
v_x_571_ = v_tail_574_;
goto _start;
}
else
{
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object* v_a_577_, lean_object* v_x_578_){
_start:
{
uint8_t v_res_579_; lean_object* v_r_580_; 
v_res_579_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_a_577_, v_x_578_);
lean_dec(v_x_578_);
lean_dec(v_a_577_);
v_r_580_ = lean_box(v_res_579_);
return v_r_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object* v_s_581_, lean_object* v_e_582_){
_start:
{
lean_object* v_fst_583_; lean_object* v_snd_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_600_; 
v_fst_583_ = lean_ctor_get(v_e_582_, 0);
v_snd_584_ = lean_ctor_get(v_e_582_, 1);
v_isSharedCheck_600_ = !lean_is_exclusive(v_e_582_);
if (v_isSharedCheck_600_ == 0)
{
v___x_586_ = v_e_582_;
v_isShared_587_ = v_isSharedCheck_600_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_snd_584_);
lean_inc(v_fst_583_);
lean_dec(v_e_582_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_600_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_s_581_, v_fst_583_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_589_ = lean_box(0);
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 1);
lean_ctor_set(v___x_586_, 1, v___x_589_);
lean_ctor_set(v___x_586_, 0, v_snd_584_);
v___x_591_ = v___x_586_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_snd_584_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v___x_589_);
v___x_591_ = v_reuseFailAlloc_593_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_581_, v_fst_583_, v___x_591_);
return v___x_592_;
}
}
else
{
lean_object* v_val_594_; uint8_t v___x_595_; 
v_val_594_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_val_594_);
lean_dec_ref_known(v___x_588_, 1);
v___x_595_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_snd_584_, v_val_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_597_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 1);
lean_ctor_set(v___x_586_, 1, v_val_594_);
lean_ctor_set(v___x_586_, 0, v_snd_584_);
v___x_597_ = v___x_586_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_snd_584_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_val_594_);
v___x_597_ = v_reuseFailAlloc_599_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_581_, v_fst_583_, v___x_597_);
return v___x_598_;
}
}
else
{
lean_dec(v_val_594_);
lean_del_object(v___x_586_);
lean_dec(v_snd_584_);
lean_dec(v_fst_583_);
return v_s_581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object* v_00_u03b2_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_602_, v_x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object* v_00_u03b2_605_, lean_object* v_x_606_, lean_object* v_x_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(v_00_u03b2_605_, v_x_606_, v_x_607_);
lean_dec(v_x_607_);
lean_dec_ref(v_x_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object* v_00_u03b2_609_, lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_x_610_, v_x_611_, v_x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object* v_00_u03b2_614_, lean_object* v_x_615_, lean_object* v_x_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_615_, v_x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_618_, lean_object* v_x_619_, lean_object* v_x_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(v_00_u03b2_618_, v_x_619_, v_x_620_);
lean_dec(v_x_620_);
lean_dec_ref(v_x_619_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object* v_00_u03b2_622_, lean_object* v_m_623_, lean_object* v_a_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_623_, v_a_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object* v_00_u03b2_626_, lean_object* v_m_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(v_00_u03b2_626_, v_m_627_, v_a_628_);
lean_dec(v_a_628_);
lean_dec_ref(v_m_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object* v_00_u03b2_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_x_631_, v_x_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object* v_00_u03b2_635_, lean_object* v_m_636_, lean_object* v_a_637_, lean_object* v_b_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_m_636_, v_a_637_, v_b_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_640_, lean_object* v_x_641_, size_t v_x_642_, lean_object* v_x_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_641_, v_x_642_, v_x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_645_, lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_){
_start:
{
size_t v_x_1771__boxed_649_; lean_object* v_res_650_; 
v_x_1771__boxed_649_ = lean_unbox_usize(v_x_647_);
lean_dec(v_x_647_);
v_res_650_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(v_00_u03b2_645_, v_x_646_, v_x_1771__boxed_649_, v_x_648_);
lean_dec(v_x_648_);
lean_dec_ref(v_x_646_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_651_, lean_object* v_a_652_, lean_object* v_x_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_655_, lean_object* v_a_656_, lean_object* v_x_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(v_00_u03b2_655_, v_a_656_, v_x_657_);
lean_dec(v_x_657_);
lean_dec(v_a_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_659_, lean_object* v_x_660_, size_t v_x_661_, size_t v_x_662_, lean_object* v_x_663_, lean_object* v_x_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_660_, v_x_661_, v_x_662_, v_x_663_, v_x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_666_, lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_){
_start:
{
size_t v_x_1787__boxed_672_; size_t v_x_1788__boxed_673_; lean_object* v_res_674_; 
v_x_1787__boxed_672_ = lean_unbox_usize(v_x_668_);
lean_dec(v_x_668_);
v_x_1788__boxed_673_ = lean_unbox_usize(v_x_669_);
lean_dec(v_x_669_);
v_res_674_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(v_00_u03b2_666_, v_x_667_, v_x_1787__boxed_672_, v_x_1788__boxed_673_, v_x_670_, v_x_671_);
return v_res_674_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_675_, lean_object* v_a_676_, lean_object* v_x_677_){
_start:
{
uint8_t v___x_678_; 
v___x_678_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_679_, lean_object* v_a_680_, lean_object* v_x_681_){
_start:
{
uint8_t v_res_682_; lean_object* v_r_683_; 
v_res_682_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(v_00_u03b2_679_, v_a_680_, v_x_681_);
lean_dec(v_x_681_);
lean_dec(v_a_680_);
v_r_683_ = lean_box(v_res_682_);
return v_r_683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_684_, lean_object* v_data_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_data_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_687_, lean_object* v_a_688_, lean_object* v_b_689_, lean_object* v_x_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_688_, v_b_689_, v_x_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_692_, lean_object* v_keys_693_, lean_object* v_vals_694_, lean_object* v_heq_695_, lean_object* v_i_696_, lean_object* v_k_697_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_693_, v_vals_694_, v_i_696_, v_k_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_699_, lean_object* v_keys_700_, lean_object* v_vals_701_, lean_object* v_heq_702_, lean_object* v_i_703_, lean_object* v_k_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_699_, v_keys_700_, v_vals_701_, v_heq_702_, v_i_703_, v_k_704_);
lean_dec(v_k_704_);
lean_dec_ref(v_vals_701_);
lean_dec_ref(v_keys_700_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_706_, lean_object* v_n_707_, lean_object* v_k_708_, lean_object* v_v_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v_n_707_, v_k_708_, v_v_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_711_, size_t v_depth_712_, lean_object* v_keys_713_, lean_object* v_vals_714_, lean_object* v_heq_715_, lean_object* v_i_716_, lean_object* v_entries_717_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_712_, v_keys_713_, v_vals_714_, v_i_716_, v_entries_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_719_, lean_object* v_depth_720_, lean_object* v_keys_721_, lean_object* v_vals_722_, lean_object* v_heq_723_, lean_object* v_i_724_, lean_object* v_entries_725_){
_start:
{
size_t v_depth_boxed_726_; lean_object* v_res_727_; 
v_depth_boxed_726_ = lean_unbox_usize(v_depth_720_);
lean_dec(v_depth_720_);
v_res_727_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(v_00_u03b2_719_, v_depth_boxed_726_, v_keys_721_, v_vals_722_, v_heq_723_, v_i_724_, v_entries_725_);
lean_dec_ref(v_vals_722_);
lean_dec_ref(v_keys_721_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_728_, lean_object* v_i_729_, lean_object* v_source_730_, lean_object* v_target_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v_i_729_, v_source_730_, v_target_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_, lean_object* v_x_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_x_734_, v_x_735_, v_x_736_, v_x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object* v_00_u03b2_739_, lean_object* v_x_740_, lean_object* v_x_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_x_740_, v_x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_743_){
_start:
{
uint8_t v_stage_u2081_744_; 
v_stage_u2081_744_ = lean_ctor_get_uint8(v_m_743_, sizeof(void*)*2);
if (v_stage_u2081_744_ == 0)
{
return v_m_743_;
}
else
{
lean_object* v_map_u2081_745_; lean_object* v_map_u2082_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_754_; 
v_map_u2081_745_ = lean_ctor_get(v_m_743_, 0);
v_map_u2082_746_ = lean_ctor_get(v_m_743_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_m_743_);
if (v_isSharedCheck_754_ == 0)
{
v___x_748_ = v_m_743_;
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_map_u2082_746_);
lean_inc(v_map_u2081_745_);
lean_dec(v_m_743_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
uint8_t v___x_750_; lean_object* v___x_752_; 
v___x_750_ = 0;
if (v_isShared_749_ == 0)
{
v___x_752_ = v___x_748_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_map_u2081_745_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_map_u2082_746_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_ctor_set_uint8(v___x_752_, sizeof(void*)*2, v___x_750_);
return v___x_752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_755_, lean_object* v_m_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v_m_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lean_array_mk(v_es_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_760_, size_t v_i_761_, size_t v_stop_762_, lean_object* v_b_763_){
_start:
{
uint8_t v___x_764_; 
v___x_764_ = lean_usize_dec_eq(v_i_761_, v_stop_762_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; lean_object* v___x_766_; size_t v___x_767_; size_t v___x_768_; 
v___x_765_ = lean_array_uget_borrowed(v_as_760_, v_i_761_);
lean_inc(v___x_765_);
v___x_766_ = l_Lean_addAliasEntry(v_b_763_, v___x_765_);
v___x_767_ = ((size_t)1ULL);
v___x_768_ = lean_usize_add(v_i_761_, v___x_767_);
v_i_761_ = v___x_768_;
v_b_763_ = v___x_766_;
goto _start;
}
else
{
return v_b_763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_770_, lean_object* v_i_771_, lean_object* v_stop_772_, lean_object* v_b_773_){
_start:
{
size_t v_i_boxed_774_; size_t v_stop_boxed_775_; lean_object* v_res_776_; 
v_i_boxed_774_ = lean_unbox_usize(v_i_771_);
lean_dec(v_i_771_);
v_stop_boxed_775_ = lean_unbox_usize(v_stop_772_);
lean_dec(v_stop_772_);
v_res_776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v_as_770_, v_i_boxed_774_, v_stop_boxed_775_, v_b_773_);
lean_dec_ref(v_as_770_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_777_, size_t v_i_778_, size_t v_stop_779_, lean_object* v_b_780_){
_start:
{
lean_object* v___y_782_; uint8_t v___x_786_; 
v___x_786_ = lean_usize_dec_eq(v_i_778_, v_stop_779_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_787_ = lean_array_uget_borrowed(v_as_777_, v_i_778_);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = lean_array_get_size(v___x_787_);
v___x_790_ = lean_nat_dec_lt(v___x_788_, v___x_789_);
if (v___x_790_ == 0)
{
v___y_782_ = v_b_780_;
goto v___jp_781_;
}
else
{
size_t v___x_791_; size_t v___x_792_; lean_object* v___x_793_; 
v___x_791_ = ((size_t)0ULL);
v___x_792_ = lean_usize_of_nat(v___x_789_);
v___x_793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_787_, v___x_791_, v___x_792_, v_b_780_);
v___y_782_ = v___x_793_;
goto v___jp_781_;
}
}
else
{
return v_b_780_;
}
v___jp_781_:
{
size_t v___x_783_; size_t v___x_784_; 
v___x_783_ = ((size_t)1ULL);
v___x_784_ = lean_usize_add(v_i_778_, v___x_783_);
v_i_778_ = v___x_784_;
v_b_780_ = v___y_782_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_794_, lean_object* v_i_795_, lean_object* v_stop_796_, lean_object* v_b_797_){
_start:
{
size_t v_i_boxed_798_; size_t v_stop_boxed_799_; lean_object* v_res_800_; 
v_i_boxed_798_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_stop_boxed_799_ = lean_unbox_usize(v_stop_796_);
lean_dec(v_stop_796_);
v_res_800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_794_, v_i_boxed_798_, v_stop_boxed_799_, v_b_797_);
lean_dec_ref(v_as_794_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object* v_initState_801_, lean_object* v_as_802_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = lean_array_get_size(v_as_802_);
v___x_805_ = lean_nat_dec_lt(v___x_803_, v___x_804_);
if (v___x_805_ == 0)
{
return v_initState_801_;
}
else
{
size_t v___x_806_; size_t v___x_807_; lean_object* v___x_808_; 
v___x_806_ = ((size_t)0ULL);
v___x_807_ = lean_usize_of_nat(v___x_804_);
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_802_, v___x_806_, v___x_807_, v_initState_801_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_809_, lean_object* v_as_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v_initState_809_, v_as_810_);
lean_dec_ref(v_as_810_);
return v_res_811_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_812_ = lean_box(0);
v___x_813_ = lean_unsigned_to_nat(16u);
v___x_814_ = lean_mk_array(v___x_813_, v___x_812_);
return v___x_814_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
lean_ctor_set(v___x_817_, 1, v___x_815_);
return v___x_817_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_818_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; lean_object* v___x_824_; 
v___x_821_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_822_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_823_ = 1;
v___x_824_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set(v___x_824_, 1, v___x_821_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*2, v___x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_825_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_827_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v___x_826_, v_es_825_);
v___x_828_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_es_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(v_es_829_);
lean_dec_ref(v_es_829_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_));
v___x_848_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object* v_env_851_, lean_object* v_a_852_, lean_object* v_e_853_){
_start:
{
lean_object* v___x_854_; lean_object* v_toEnvExtension_855_; lean_object* v_asyncMode_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_854_ = l_Lean_aliasExtension;
v_toEnvExtension_855_ = lean_ctor_get(v___x_854_, 0);
v_asyncMode_856_ = lean_ctor_get(v_toEnvExtension_855_, 2);
v___x_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_857_, 0, v_a_852_);
lean_ctor_set(v___x_857_, 1, v_e_853_);
v___x_858_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
v___x_859_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_854_, v_env_851_, v___x_857_, v_asyncMode_856_, v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l_Lean_getAliasState___closed__0(void){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_SMap_instInhabited___redArg();
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object* v_env_861_){
_start:
{
lean_object* v___x_862_; lean_object* v_toEnvExtension_863_; lean_object* v_asyncMode_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_862_ = l_Lean_aliasExtension;
v_toEnvExtension_863_ = lean_ctor_get(v___x_862_, 0);
v_asyncMode_864_ = lean_ctor_get(v_toEnvExtension_863_, 2);
v___x_865_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_866_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
v___x_867_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_865_, v___x_862_, v_env_861_, v_asyncMode_864_, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object* v_env_868_, uint8_t v_skipProtected_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
if (lean_obj_tag(v_a_870_) == 0)
{
lean_object* v___x_872_; 
lean_dec_ref(v_env_868_);
v___x_872_ = l_List_reverse___redArg(v_a_871_);
return v___x_872_;
}
else
{
lean_object* v_head_873_; lean_object* v_tail_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_885_; 
v_head_873_ = lean_ctor_get(v_a_870_, 0);
v_tail_874_ = lean_ctor_get(v_a_870_, 1);
v_isSharedCheck_885_ = !lean_is_exclusive(v_a_870_);
if (v_isSharedCheck_885_ == 0)
{
v___x_876_ = v_a_870_;
v_isShared_877_ = v_isSharedCheck_885_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_tail_874_);
lean_inc(v_head_873_);
lean_dec(v_a_870_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_885_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
uint8_t v___x_878_; 
lean_inc(v_head_873_);
lean_inc_ref(v_env_868_);
v___x_878_ = l_Lean_isProtected(v_env_868_, v_head_873_);
if (v___x_878_ == 0)
{
if (v_skipProtected_869_ == 0)
{
lean_del_object(v___x_876_);
lean_dec(v_head_873_);
v_a_870_ = v_tail_874_;
goto _start;
}
else
{
lean_object* v___x_881_; 
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 1, v_a_871_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_head_873_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_a_871_);
v___x_881_ = v_reuseFailAlloc_883_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
v_a_870_ = v_tail_874_;
v_a_871_ = v___x_881_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_876_);
lean_dec(v_head_873_);
v_a_870_ = v_tail_874_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object* v_env_886_, lean_object* v_skipProtected_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
uint8_t v_skipProtected_boxed_890_; lean_object* v_res_891_; 
v_skipProtected_boxed_890_ = lean_unbox(v_skipProtected_887_);
v_res_891_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_886_, v_skipProtected_boxed_890_, v_a_888_, v_a_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object* v_env_892_, lean_object* v_a_893_, uint8_t v_skipProtected_894_){
_start:
{
lean_object* v___x_895_; lean_object* v_toEnvExtension_896_; lean_object* v_asyncMode_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_895_ = l_Lean_aliasExtension;
v_toEnvExtension_896_ = lean_ctor_get(v___x_895_, 0);
v_asyncMode_897_ = lean_ctor_get(v_toEnvExtension_896_, 2);
v___x_898_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_899_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
lean_inc_ref(v_env_892_);
v___x_900_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_898_, v___x_895_, v_env_892_, v_asyncMode_897_, v___x_899_);
v___x_901_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v___x_900_, v_a_893_);
lean_dec(v___x_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_902_; 
lean_dec_ref(v_env_892_);
v___x_902_ = lean_box(0);
return v___x_902_;
}
else
{
if (v_skipProtected_894_ == 0)
{
lean_object* v_val_903_; 
lean_dec_ref(v_env_892_);
v_val_903_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_val_903_);
lean_dec_ref_known(v___x_901_, 1);
return v_val_903_;
}
else
{
lean_object* v_val_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_val_904_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_val_904_);
lean_dec_ref_known(v___x_901_, 1);
v___x_905_ = lean_box(0);
v___x_906_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_892_, v_skipProtected_894_, v_val_904_, v___x_905_);
return v___x_906_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object* v_env_907_, lean_object* v_a_908_, lean_object* v_skipProtected_909_){
_start:
{
uint8_t v_skipProtected_boxed_910_; lean_object* v_res_911_; 
v_skipProtected_boxed_910_ = lean_unbox(v_skipProtected_909_);
v_res_911_ = l_Lean_getAliases(v_env_907_, v_a_908_, v_skipProtected_boxed_910_);
lean_dec(v_a_908_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object* v_e_912_, lean_object* v_as_913_, lean_object* v_a_914_, lean_object* v_es_915_){
_start:
{
uint8_t v___x_916_; 
v___x_916_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_e_912_, v_es_915_);
if (v___x_916_ == 0)
{
lean_dec(v_a_914_);
return v_as_913_;
}
else
{
lean_object* v___x_917_; 
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v_a_914_);
lean_ctor_set(v___x_917_, 1, v_as_913_);
return v___x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object* v_e_918_, lean_object* v_as_919_, lean_object* v_a_920_, lean_object* v_es_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_getRevAliases___lam__0(v_e_918_, v_as_919_, v_a_920_, v_es_921_);
lean_dec(v_es_921_);
lean_dec(v_e_918_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_923_, lean_object* v_keys_924_, lean_object* v_vals_925_, lean_object* v_i_926_, lean_object* v_acc_927_){
_start:
{
lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_928_ = lean_array_get_size(v_keys_924_);
v___x_929_ = lean_nat_dec_lt(v_i_926_, v___x_928_);
if (v___x_929_ == 0)
{
lean_dec(v_i_926_);
lean_dec(v_f_923_);
return v_acc_927_;
}
else
{
lean_object* v_k_930_; lean_object* v_v_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_k_930_ = lean_array_fget_borrowed(v_keys_924_, v_i_926_);
v_v_931_ = lean_array_fget_borrowed(v_vals_925_, v_i_926_);
lean_inc(v_f_923_);
lean_inc(v_v_931_);
lean_inc(v_k_930_);
v___x_932_ = lean_apply_3(v_f_923_, v_acc_927_, v_k_930_, v_v_931_);
v___x_933_ = lean_unsigned_to_nat(1u);
v___x_934_ = lean_nat_add(v_i_926_, v___x_933_);
lean_dec(v_i_926_);
v_i_926_ = v___x_934_;
v_acc_927_ = v___x_932_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_936_, lean_object* v_keys_937_, lean_object* v_vals_938_, lean_object* v_i_939_, lean_object* v_acc_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_936_, v_keys_937_, v_vals_938_, v_i_939_, v_acc_940_);
lean_dec_ref(v_vals_938_);
lean_dec_ref(v_keys_937_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_f_942_, lean_object* v_as_943_, size_t v_i_944_, size_t v_stop_945_, lean_object* v_b_946_){
_start:
{
lean_object* v___y_948_; uint8_t v___x_952_; 
v___x_952_ = lean_usize_dec_eq(v_i_944_, v_stop_945_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; 
v___x_953_ = lean_array_uget_borrowed(v_as_943_, v_i_944_);
switch(lean_obj_tag(v___x_953_))
{
case 0:
{
lean_object* v_key_954_; lean_object* v_val_955_; lean_object* v___x_956_; 
v_key_954_ = lean_ctor_get(v___x_953_, 0);
v_val_955_ = lean_ctor_get(v___x_953_, 1);
lean_inc(v_f_942_);
lean_inc(v_val_955_);
lean_inc(v_key_954_);
v___x_956_ = lean_apply_3(v_f_942_, v_b_946_, v_key_954_, v_val_955_);
v___y_948_ = v___x_956_;
goto v___jp_947_;
}
case 1:
{
lean_object* v_node_957_; lean_object* v___x_958_; 
v_node_957_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_f_942_);
v___x_958_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_942_, v_node_957_, v_b_946_);
v___y_948_ = v___x_958_;
goto v___jp_947_;
}
default: 
{
v___y_948_ = v_b_946_;
goto v___jp_947_;
}
}
}
else
{
lean_dec(v_f_942_);
return v_b_946_;
}
v___jp_947_:
{
size_t v___x_949_; size_t v___x_950_; 
v___x_949_ = ((size_t)1ULL);
v___x_950_ = lean_usize_add(v_i_944_, v___x_949_);
v_i_944_ = v___x_950_;
v_b_946_ = v___y_948_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_f_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v_es_962_; lean_object* v___x_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v_es_962_ = lean_ctor_get(v_x_960_, 0);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = lean_array_get_size(v_es_962_);
v___x_965_ = lean_nat_dec_lt(v___x_963_, v___x_964_);
if (v___x_965_ == 0)
{
lean_dec(v_f_959_);
return v_x_961_;
}
else
{
size_t v___x_966_; size_t v___x_967_; lean_object* v___x_968_; 
v___x_966_ = ((size_t)0ULL);
v___x_967_ = lean_usize_of_nat(v___x_964_);
v___x_968_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_959_, v_es_962_, v___x_966_, v___x_967_, v_x_961_);
return v___x_968_;
}
}
else
{
lean_object* v_ks_969_; lean_object* v_vs_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_ks_969_ = lean_ctor_get(v_x_960_, 0);
v_vs_970_ = lean_ctor_get(v_x_960_, 1);
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_959_, v_ks_969_, v_vs_970_, v___x_971_, v_x_961_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_973_, v_x_974_, v_x_975_);
lean_dec_ref(v_x_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_977_, lean_object* v_as_978_, lean_object* v_i_979_, lean_object* v_stop_980_, lean_object* v_b_981_){
_start:
{
size_t v_i_boxed_982_; size_t v_stop_boxed_983_; lean_object* v_res_984_; 
v_i_boxed_982_ = lean_unbox_usize(v_i_979_);
lean_dec(v_i_979_);
v_stop_boxed_983_ = lean_unbox_usize(v_stop_980_);
lean_dec(v_stop_980_);
v_res_984_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_977_, v_as_978_, v_i_boxed_982_, v_stop_boxed_983_, v_b_981_);
lean_dec_ref(v_as_978_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object* v_f_985_, lean_object* v_x1_986_, lean_object* v_x2_987_, lean_object* v_x3_988_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = lean_apply_3(v_f_985_, v_x1_986_, v_x2_987_, v_x3_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object* v_map_990_, lean_object* v_f_991_, lean_object* v_init_992_){
_start:
{
lean_object* v___f_993_; lean_object* v___x_994_; 
v___f_993_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_993_, 0, v_f_991_);
v___x_994_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v___f_993_, v_map_990_, v_init_992_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object* v_map_995_, lean_object* v_f_996_, lean_object* v_init_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_995_, v_f_996_, v_init_997_);
lean_dec_ref(v_map_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object* v_f_999_, lean_object* v_x_1000_, lean_object* v_x_1001_){
_start:
{
if (lean_obj_tag(v_x_1001_) == 0)
{
lean_dec(v_f_999_);
return v_x_1000_;
}
else
{
lean_object* v_key_1002_; lean_object* v_value_1003_; lean_object* v_tail_1004_; lean_object* v___x_1005_; 
v_key_1002_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_key_1002_);
v_value_1003_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_value_1003_);
v_tail_1004_ = lean_ctor_get(v_x_1001_, 2);
lean_inc(v_tail_1004_);
lean_dec_ref_known(v_x_1001_, 3);
lean_inc(v_f_999_);
v___x_1005_ = lean_apply_3(v_f_999_, v_x_1000_, v_key_1002_, v_value_1003_);
v_x_1000_ = v___x_1005_;
v_x_1001_ = v_tail_1004_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object* v_f_1007_, lean_object* v_as_1008_, size_t v_i_1009_, size_t v_stop_1010_, lean_object* v_b_1011_){
_start:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_usize_dec_eq(v_i_1009_, v_stop_1010_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; size_t v___x_1015_; size_t v___x_1016_; 
v___x_1013_ = lean_array_uget_borrowed(v_as_1008_, v_i_1009_);
lean_inc(v___x_1013_);
lean_inc(v_f_1007_);
v___x_1014_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1007_, v_b_1011_, v___x_1013_);
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_add(v_i_1009_, v___x_1015_);
v_i_1009_ = v___x_1016_;
v_b_1011_ = v___x_1014_;
goto _start;
}
else
{
lean_dec(v_f_1007_);
return v_b_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object* v_f_1018_, lean_object* v_as_1019_, lean_object* v_i_1020_, lean_object* v_stop_1021_, lean_object* v_b_1022_){
_start:
{
size_t v_i_boxed_1023_; size_t v_stop_boxed_1024_; lean_object* v_res_1025_; 
v_i_boxed_1023_ = lean_unbox_usize(v_i_1020_);
lean_dec(v_i_1020_);
v_stop_boxed_1024_ = lean_unbox_usize(v_stop_1021_);
lean_dec(v_stop_1021_);
v_res_1025_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1018_, v_as_1019_, v_i_boxed_1023_, v_stop_boxed_1024_, v_b_1022_);
lean_dec_ref(v_as_1019_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object* v_f_1026_, lean_object* v_init_1027_, lean_object* v_m_1028_){
_start:
{
lean_object* v_map_u2081_1029_; lean_object* v_map_u2082_1030_; lean_object* v_buckets_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v_map_u2081_1029_ = lean_ctor_get(v_m_1028_, 0);
v_map_u2082_1030_ = lean_ctor_get(v_m_1028_, 1);
v_buckets_1031_ = lean_ctor_get(v_map_u2081_1029_, 1);
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = lean_array_get_size(v_buckets_1031_);
v___x_1034_ = lean_nat_dec_lt(v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1030_, v_f_1026_, v_init_1027_);
return v___x_1035_;
}
else
{
size_t v___x_1036_; size_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1036_ = ((size_t)0ULL);
v___x_1037_ = lean_usize_of_nat(v___x_1033_);
lean_inc(v_f_1026_);
v___x_1038_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1026_, v_buckets_1031_, v___x_1036_, v___x_1037_, v_init_1027_);
v___x_1039_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1030_, v_f_1026_, v___x_1038_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object* v_f_1040_, lean_object* v_init_1041_, lean_object* v_m_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1040_, v_init_1041_, v_m_1042_);
lean_dec_ref(v_m_1042_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object* v_env_1044_, lean_object* v_e_1045_){
_start:
{
lean_object* v___x_1046_; lean_object* v_toEnvExtension_1047_; lean_object* v_asyncMode_1048_; lean_object* v___f_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1046_ = l_Lean_aliasExtension;
v_toEnvExtension_1047_ = lean_ctor_get(v___x_1046_, 0);
v_asyncMode_1048_ = lean_ctor_get(v_toEnvExtension_1047_, 2);
v___f_1049_ = lean_alloc_closure((void*)(l_Lean_getRevAliases___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1049_, 0, v_e_1045_);
v___x_1050_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_1051_ = lean_box(0);
v___x_1052_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
v___x_1053_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1050_, v___x_1046_, v_env_1044_, v_asyncMode_1048_, v___x_1052_);
v___x_1054_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v___f_1049_, v___x_1051_, v___x_1053_);
lean_dec(v___x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object* v_00_u03b2_1055_, lean_object* v_00_u03c3_1056_, lean_object* v_f_1057_, lean_object* v_init_1058_, lean_object* v_m_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1057_, v_init_1058_, v_m_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object* v_00_u03b2_1061_, lean_object* v_00_u03c3_1062_, lean_object* v_f_1063_, lean_object* v_init_1064_, lean_object* v_m_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(v_00_u03b2_1061_, v_00_u03c3_1062_, v_f_1063_, v_init_1064_, v_m_1065_);
lean_dec_ref(v_m_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object* v_00_u03b2_1067_, lean_object* v_00_u03c3_1068_, lean_object* v_f_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1069_, v_x_1070_, v_x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object* v_00_u03c3_1073_, lean_object* v_00_u03b2_1074_, lean_object* v_map_1075_, lean_object* v_f_1076_, lean_object* v_init_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1075_, v_f_1076_, v_init_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1079_, lean_object* v_00_u03b2_1080_, lean_object* v_map_1081_, lean_object* v_f_1082_, lean_object* v_init_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(v_00_u03c3_1079_, v_00_u03b2_1080_, v_map_1081_, v_f_1082_, v_init_1083_);
lean_dec_ref(v_map_1081_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object* v_00_u03b2_1085_, lean_object* v_00_u03c3_1086_, lean_object* v_f_1087_, lean_object* v_as_1088_, size_t v_i_1089_, size_t v_stop_1090_, lean_object* v_b_1091_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1087_, v_as_1088_, v_i_1089_, v_stop_1090_, v_b_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1093_, lean_object* v_00_u03c3_1094_, lean_object* v_f_1095_, lean_object* v_as_1096_, lean_object* v_i_1097_, lean_object* v_stop_1098_, lean_object* v_b_1099_){
_start:
{
size_t v_i_boxed_1100_; size_t v_stop_boxed_1101_; lean_object* v_res_1102_; 
v_i_boxed_1100_ = lean_unbox_usize(v_i_1097_);
lean_dec(v_i_1097_);
v_stop_boxed_1101_ = lean_unbox_usize(v_stop_1098_);
lean_dec(v_stop_1098_);
v_res_1102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(v_00_u03b2_1093_, v_00_u03c3_1094_, v_f_1095_, v_as_1096_, v_i_boxed_1100_, v_stop_boxed_1101_, v_b_1099_);
lean_dec_ref(v_as_1096_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object* v_map_1103_, lean_object* v_f_1104_, lean_object* v_init_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1104_, v_map_1103_, v_init_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_map_1107_, lean_object* v_f_1108_, lean_object* v_init_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(v_map_1107_, v_f_1108_, v_init_1109_);
lean_dec_ref(v_map_1107_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object* v_00_u03c3_1111_, lean_object* v_00_u03b2_1112_, lean_object* v_map_1113_, lean_object* v_f_1114_, lean_object* v_init_1115_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1114_, v_map_1113_, v_init_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03c3_1117_, lean_object* v_00_u03b2_1118_, lean_object* v_map_1119_, lean_object* v_f_1120_, lean_object* v_init_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(v_00_u03c3_1117_, v_00_u03b2_1118_, v_map_1119_, v_f_1120_, v_init_1121_);
lean_dec_ref(v_map_1119_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03c3_1123_, lean_object* v_00_u03b1_1124_, lean_object* v_00_u03b2_1125_, lean_object* v_f_1126_, lean_object* v_x_1127_, lean_object* v_x_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1126_, v_x_1127_, v_x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_1130_, lean_object* v_00_u03b1_1131_, lean_object* v_00_u03b2_1132_, lean_object* v_f_1133_, lean_object* v_x_1134_, lean_object* v_x_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(v_00_u03c3_1130_, v_00_u03b1_1131_, v_00_u03b2_1132_, v_f_1133_, v_x_1134_, v_x_1135_);
lean_dec_ref(v_x_1134_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1137_, lean_object* v_00_u03b2_1138_, lean_object* v_00_u03c3_1139_, lean_object* v_f_1140_, lean_object* v_as_1141_, size_t v_i_1142_, size_t v_stop_1143_, lean_object* v_b_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1140_, v_as_1141_, v_i_1142_, v_stop_1143_, v_b_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1146_, lean_object* v_00_u03b2_1147_, lean_object* v_00_u03c3_1148_, lean_object* v_f_1149_, lean_object* v_as_1150_, lean_object* v_i_1151_, lean_object* v_stop_1152_, lean_object* v_b_1153_){
_start:
{
size_t v_i_boxed_1154_; size_t v_stop_boxed_1155_; lean_object* v_res_1156_; 
v_i_boxed_1154_ = lean_unbox_usize(v_i_1151_);
lean_dec(v_i_1151_);
v_stop_boxed_1155_ = lean_unbox_usize(v_stop_1152_);
lean_dec(v_stop_1152_);
v_res_1156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1146_, v_00_u03b2_1147_, v_00_u03c3_1148_, v_f_1149_, v_as_1150_, v_i_boxed_1154_, v_stop_boxed_1155_, v_b_1153_);
lean_dec_ref(v_as_1150_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03c3_1157_, lean_object* v_00_u03b1_1158_, lean_object* v_00_u03b2_1159_, lean_object* v_f_1160_, lean_object* v_keys_1161_, lean_object* v_vals_1162_, lean_object* v_heq_1163_, lean_object* v_i_1164_, lean_object* v_acc_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1160_, v_keys_1161_, v_vals_1162_, v_i_1164_, v_acc_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1167_, lean_object* v_00_u03b1_1168_, lean_object* v_00_u03b2_1169_, lean_object* v_f_1170_, lean_object* v_keys_1171_, lean_object* v_vals_1172_, lean_object* v_heq_1173_, lean_object* v_i_1174_, lean_object* v_acc_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(v_00_u03c3_1167_, v_00_u03b1_1168_, v_00_u03b2_1169_, v_f_1170_, v_keys_1171_, v_vals_1172_, v_heq_1173_, v_i_1174_, v_acc_1175_);
lean_dec_ref(v_vals_1172_);
lean_dec_ref(v_keys_1171_);
return v_res_1176_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1177_, lean_object* v_declName_1178_){
_start:
{
uint8_t v___y_1180_; uint8_t v___x_1183_; 
v___x_1183_ = l_Lean_Environment_containsOnBranch(v_env_1177_, v_declName_1178_);
if (v___x_1183_ == 0)
{
uint8_t v___x_1184_; 
lean_inc(v_declName_1178_);
lean_inc_ref(v_env_1177_);
v___x_1184_ = lean_is_reserved_name(v_env_1177_, v_declName_1178_);
v___y_1180_ = v___x_1184_;
goto v___jp_1179_;
}
else
{
v___y_1180_ = v___x_1183_;
goto v___jp_1179_;
}
v___jp_1179_:
{
if (v___y_1180_ == 0)
{
uint8_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 1;
v___x_1182_ = l_Lean_Environment_contains(v_env_1177_, v_declName_1178_, v___x_1181_);
return v___x_1182_;
}
else
{
lean_dec(v_declName_1178_);
lean_dec_ref(v_env_1177_);
return v___y_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1185_, lean_object* v_declName_1186_){
_start:
{
uint8_t v_res_1187_; lean_object* v_r_1188_; 
v_res_1187_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1185_, v_declName_1186_);
v_r_1188_ = lean_box(v_res_1187_);
return v_r_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1189_, lean_object* v_decl_1190_, lean_object* v_ref_1191_){
_start:
{
lean_object* v_defValue_1193_; lean_object* v_descr_1194_; lean_object* v_deprecation_x3f_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_defValue_1193_ = lean_ctor_get(v_decl_1190_, 0);
v_descr_1194_ = lean_ctor_get(v_decl_1190_, 1);
v_deprecation_x3f_1195_ = lean_ctor_get(v_decl_1190_, 2);
v___x_1196_ = lean_alloc_ctor(1, 0, 1);
v___x_1197_ = lean_unbox(v_defValue_1193_);
lean_ctor_set_uint8(v___x_1196_, 0, v___x_1197_);
lean_inc(v_deprecation_x3f_1195_);
lean_inc_ref(v_descr_1194_);
lean_inc_n(v_name_1189_, 2);
v___x_1198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1198_, 0, v_name_1189_);
lean_ctor_set(v___x_1198_, 1, v_ref_1191_);
lean_ctor_set(v___x_1198_, 2, v___x_1196_);
lean_ctor_set(v___x_1198_, 3, v_descr_1194_);
lean_ctor_set(v___x_1198_, 4, v_deprecation_x3f_1195_);
v___x_1199_ = lean_register_option(v_name_1189_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1207_; 
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; 
v_unused_1208_ = lean_ctor_get(v___x_1199_, 0);
lean_dec(v_unused_1208_);
v___x_1201_ = v___x_1199_;
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
else
{
lean_dec(v___x_1199_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1207_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; lean_object* v___x_1205_; 
lean_inc(v_defValue_1193_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v_name_1189_);
lean_ctor_set(v___x_1203_, 1, v_defValue_1193_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1203_);
v___x_1205_ = v___x_1201_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1203_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v_name_1189_);
v_a_1209_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1199_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1199_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1217_, lean_object* v_decl_1218_, lean_object* v_ref_1219_, lean_object* v_a_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1217_, v_decl_1218_, v_ref_1219_);
lean_dec_ref(v_decl_1218_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1240_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1241_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1242_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1243_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1240_, v___x_1241_, v___x_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1265_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1266_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1267_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1264_, v___x_1265_, v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1269_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1270_, lean_object* v_opt_1271_){
_start:
{
lean_object* v_name_1272_; lean_object* v_defValue_1273_; lean_object* v_map_1274_; lean_object* v___x_1275_; 
v_name_1272_ = lean_ctor_get(v_opt_1271_, 0);
v_defValue_1273_ = lean_ctor_get(v_opt_1271_, 1);
v_map_1274_ = lean_ctor_get(v_opts_1270_, 0);
v___x_1275_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1274_, v_name_1272_);
if (lean_obj_tag(v___x_1275_) == 0)
{
uint8_t v___x_1276_; 
v___x_1276_ = lean_unbox(v_defValue_1273_);
return v___x_1276_;
}
else
{
lean_object* v_val_1277_; 
v_val_1277_ = lean_ctor_get(v___x_1275_, 0);
lean_inc(v_val_1277_);
lean_dec_ref_known(v___x_1275_, 1);
if (lean_obj_tag(v_val_1277_) == 1)
{
uint8_t v_v_1278_; 
v_v_1278_ = lean_ctor_get_uint8(v_val_1277_, 0);
lean_dec_ref_known(v_val_1277_, 0);
return v_v_1278_;
}
else
{
uint8_t v___x_1279_; 
lean_dec(v_val_1277_);
v___x_1279_ = lean_unbox(v_defValue_1273_);
return v___x_1279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1280_, lean_object* v_opt_1281_){
_start:
{
uint8_t v_res_1282_; lean_object* v_r_1283_; 
v_res_1282_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1280_, v_opt_1281_);
lean_dec_ref(v_opt_1281_);
lean_dec_ref(v_opts_1280_);
v_r_1283_ = lean_box(v_res_1282_);
return v_r_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1287_, lean_object* v_env_1288_, lean_object* v_as_1289_, size_t v_sz_1290_, size_t v_i_1291_, lean_object* v_b_1292_){
_start:
{
uint8_t v___x_1293_; 
v___x_1293_ = lean_usize_dec_lt(v_i_1291_, v_sz_1290_);
if (v___x_1293_ == 0)
{
lean_dec_ref(v_env_1288_);
lean_dec(v_declName_1287_);
lean_inc_ref(v_b_1292_);
return v_b_1292_;
}
else
{
lean_object* v_a_1294_; lean_object* v_toImport_1295_; lean_object* v_module_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_a_1294_ = lean_array_uget_borrowed(v_as_1289_, v_i_1291_);
v_toImport_1295_ = lean_ctor_get(v_a_1294_, 0);
v_module_1296_ = lean_ctor_get(v_toImport_1295_, 0);
v___x_1297_ = lean_box(0);
lean_inc(v_declName_1287_);
lean_inc(v_module_1296_);
v___x_1298_ = l_Lean_mkPrivateNameCore(v_module_1296_, v_declName_1287_);
lean_inc(v___x_1298_);
lean_inc_ref(v_env_1288_);
v___x_1299_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1288_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; size_t v___x_1301_; size_t v___x_1302_; 
lean_dec(v___x_1298_);
v___x_1300_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v___x_1301_ = ((size_t)1ULL);
v___x_1302_ = lean_usize_add(v_i_1291_, v___x_1301_);
v_i_1291_ = v___x_1302_;
v_b_1292_ = v___x_1300_;
goto _start;
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
lean_dec_ref(v_env_1288_);
lean_dec(v_declName_1287_);
v___x_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1298_);
v___x_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___x_1297_);
return v___x_1306_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object* v_declName_1307_, lean_object* v_env_1308_, lean_object* v_as_1309_, lean_object* v_sz_1310_, lean_object* v_i_1311_, lean_object* v_b_1312_){
_start:
{
size_t v_sz_boxed_1313_; size_t v_i_boxed_1314_; lean_object* v_res_1315_; 
v_sz_boxed_1313_ = lean_unbox_usize(v_sz_1310_);
lean_dec(v_sz_1310_);
v_i_boxed_1314_ = lean_unbox_usize(v_i_1311_);
lean_dec(v_i_1311_);
v_res_1315_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1307_, v_env_1308_, v_as_1309_, v_sz_boxed_1313_, v_i_boxed_1314_, v_b_1312_);
lean_dec_ref(v_b_1312_);
lean_dec_ref(v_as_1309_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1316_, lean_object* v_opts_1317_, lean_object* v_declName_1318_){
_start:
{
uint8_t v_isExporting_1334_; 
v_isExporting_1334_ = lean_ctor_get_uint8(v_env_1316_, sizeof(void*)*8);
if (v_isExporting_1334_ == 0)
{
goto v___jp_1319_;
}
else
{
lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1336_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1317_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_dec(v_declName_1318_);
lean_dec_ref(v_env_1316_);
v___x_1337_ = lean_box(0);
return v___x_1337_;
}
else
{
goto v___jp_1319_;
}
}
v___jp_1319_:
{
lean_object* v___x_1320_; uint8_t v___x_1321_; 
lean_inc(v_declName_1318_);
v___x_1320_ = l_Lean_mkPrivateName(v_env_1316_, v_declName_1318_);
lean_inc(v___x_1320_);
lean_inc_ref(v_env_1316_);
v___x_1321_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1316_, v___x_1320_);
if (v___x_1321_ == 0)
{
lean_object* v___x_1322_; uint8_t v_isModule_1323_; 
lean_dec(v___x_1320_);
v___x_1322_ = l_Lean_Environment_header(v_env_1316_);
v_isModule_1323_ = lean_ctor_get_uint8(v___x_1322_, sizeof(void*)*7 + 4);
if (v_isModule_1323_ == 0)
{
lean_object* v___x_1324_; 
lean_dec_ref(v___x_1322_);
lean_dec(v_declName_1318_);
lean_dec_ref(v_env_1316_);
v___x_1324_ = lean_box(0);
return v___x_1324_;
}
else
{
lean_object* v_importAllModules_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; size_t v_sz_1328_; size_t v___x_1329_; lean_object* v___x_1330_; lean_object* v_fst_1331_; 
v_importAllModules_1325_ = lean_ctor_get(v___x_1322_, 5);
lean_inc_ref(v_importAllModules_1325_);
lean_dec_ref(v___x_1322_);
v___x_1326_ = lean_box(0);
v___x_1327_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1328_ = lean_array_size(v_importAllModules_1325_);
v___x_1329_ = ((size_t)0ULL);
v___x_1330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1318_, v_env_1316_, v_importAllModules_1325_, v_sz_1328_, v___x_1329_, v___x_1327_);
lean_dec_ref(v_importAllModules_1325_);
v_fst_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_fst_1331_);
lean_dec_ref(v___x_1330_);
if (lean_obj_tag(v_fst_1331_) == 0)
{
return v___x_1326_;
}
else
{
lean_object* v_val_1332_; 
v_val_1332_ = lean_ctor_get(v_fst_1331_, 0);
lean_inc(v_val_1332_);
lean_dec_ref_known(v_fst_1331_, 1);
return v_val_1332_;
}
}
}
else
{
lean_object* v___x_1333_; 
lean_dec(v_declName_1318_);
lean_dec_ref(v_env_1316_);
v___x_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1320_);
return v___x_1333_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1338_, lean_object* v_opts_1339_, lean_object* v_declName_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1338_, v_opts_1339_, v_declName_1340_);
lean_dec_ref(v_opts_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1342_, lean_object* v_opts_1343_, lean_object* v_ns_1344_, lean_object* v_id_1345_){
_start:
{
lean_object* v_resolvedId_1346_; uint8_t v___x_1347_; lean_object* v_resolvedIds_1348_; 
lean_inc(v_id_1345_);
v_resolvedId_1346_ = l_Lean_Name_append(v_ns_1344_, v_id_1345_);
v___x_1347_ = l_Lean_Name_isAtomic(v_id_1345_);
lean_dec(v_id_1345_);
lean_inc_ref(v_env_1342_);
v_resolvedIds_1348_ = l_Lean_getAliases(v_env_1342_, v_resolvedId_1346_, v___x_1347_);
if (v___x_1347_ == 0)
{
goto v___jp_1349_;
}
else
{
uint8_t v___x_1355_; 
lean_inc(v_resolvedId_1346_);
lean_inc_ref(v_env_1342_);
v___x_1355_ = l_Lean_isProtected(v_env_1342_, v_resolvedId_1346_);
if (v___x_1355_ == 0)
{
goto v___jp_1349_;
}
else
{
lean_dec(v_resolvedId_1346_);
lean_dec_ref(v_env_1342_);
return v_resolvedIds_1348_;
}
}
v___jp_1349_:
{
uint8_t v___x_1350_; 
lean_inc(v_resolvedId_1346_);
lean_inc_ref(v_env_1342_);
v___x_1350_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1342_, v_resolvedId_1346_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
v___x_1351_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1342_, v_opts_1343_, v_resolvedId_1346_);
if (lean_obj_tag(v___x_1351_) == 1)
{
lean_object* v_val_1352_; lean_object* v___x_1353_; 
v_val_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_val_1352_);
lean_dec_ref_known(v___x_1351_, 1);
v___x_1353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1353_, 0, v_val_1352_);
lean_ctor_set(v___x_1353_, 1, v_resolvedIds_1348_);
return v___x_1353_;
}
else
{
lean_dec(v___x_1351_);
return v_resolvedIds_1348_;
}
}
else
{
lean_object* v___x_1354_; 
lean_dec_ref(v_env_1342_);
v___x_1354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_resolvedId_1346_);
lean_ctor_set(v___x_1354_, 1, v_resolvedIds_1348_);
return v___x_1354_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1356_, lean_object* v_opts_1357_, lean_object* v_ns_1358_, lean_object* v_id_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1356_, v_opts_1357_, v_ns_1358_, v_id_1359_);
lean_dec_ref(v_opts_1357_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1361_, lean_object* v_opts_1362_, lean_object* v_id_1363_, lean_object* v_x_1364_){
_start:
{
if (lean_obj_tag(v_x_1364_) == 1)
{
lean_object* v_pre_1365_; lean_object* v___x_1366_; 
v_pre_1365_ = lean_ctor_get(v_x_1364_, 0);
lean_inc(v_pre_1365_);
lean_inc(v_id_1363_);
lean_inc_ref(v_env_1361_);
v___x_1366_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1361_, v_opts_1362_, v_x_1364_, v_id_1363_);
if (lean_obj_tag(v___x_1366_) == 0)
{
v_x_1364_ = v_pre_1365_;
goto _start;
}
else
{
lean_dec(v_pre_1365_);
lean_dec(v_id_1363_);
lean_dec_ref(v_env_1361_);
return v___x_1366_;
}
}
else
{
lean_object* v___x_1368_; 
lean_dec(v_x_1364_);
lean_dec(v_id_1363_);
lean_dec_ref(v_env_1361_);
v___x_1368_ = lean_box(0);
return v___x_1368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1369_, lean_object* v_opts_1370_, lean_object* v_id_1371_, lean_object* v_x_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1369_, v_opts_1370_, v_id_1371_, v_x_1372_);
lean_dec_ref(v_opts_1370_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1374_, lean_object* v_opts_1375_, lean_object* v_id_1376_){
_start:
{
uint8_t v___x_1377_; 
v___x_1377_ = l_Lean_Name_isAtomic(v_id_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_resolvedId_1380_; uint8_t v___x_1381_; 
v___x_1378_ = l_Lean_rootNamespace;
v___x_1379_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
v_resolvedId_1380_ = l_Lean_Name_replacePrefix(v_id_1376_, v___x_1378_, v___x_1379_);
lean_inc(v_resolvedId_1380_);
lean_inc_ref(v_env_1374_);
v___x_1381_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1374_, v_resolvedId_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; 
v___x_1382_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1374_, v_opts_1375_, v_resolvedId_1380_);
return v___x_1382_;
}
else
{
lean_object* v___x_1383_; 
lean_dec_ref(v_env_1374_);
v___x_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1383_, 0, v_resolvedId_1380_);
return v___x_1383_;
}
}
else
{
lean_object* v___x_1384_; 
lean_dec(v_id_1376_);
lean_dec_ref(v_env_1374_);
v___x_1384_ = lean_box(0);
return v___x_1384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1385_, lean_object* v_opts_1386_, lean_object* v_id_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1385_, v_opts_1386_, v_id_1387_);
lean_dec_ref(v_opts_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1389_, lean_object* v_opts_1390_, lean_object* v_id_1391_, lean_object* v_x_1392_, lean_object* v_x_1393_){
_start:
{
if (lean_obj_tag(v_x_1392_) == 0)
{
lean_dec(v_id_1391_);
lean_dec_ref(v_env_1389_);
return v_x_1393_;
}
else
{
lean_object* v_head_1394_; 
v_head_1394_ = lean_ctor_get(v_x_1392_, 0);
lean_inc(v_head_1394_);
if (lean_obj_tag(v_head_1394_) == 0)
{
lean_object* v_tail_1395_; lean_object* v_ns_1396_; lean_object* v_except_1397_; uint8_t v___x_1398_; 
v_tail_1395_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_tail_1395_);
lean_dec_ref_known(v_x_1392_, 2);
v_ns_1396_ = lean_ctor_get(v_head_1394_, 0);
lean_inc(v_ns_1396_);
v_except_1397_ = lean_ctor_get(v_head_1394_, 1);
lean_inc(v_except_1397_);
lean_dec_ref_known(v_head_1394_, 2);
v___x_1398_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1391_, v_except_1397_);
lean_dec(v_except_1397_);
if (v___x_1398_ == 0)
{
lean_object* v_newResolvedIds_1399_; lean_object* v___x_1400_; 
lean_inc(v_id_1391_);
lean_inc_ref(v_env_1389_);
v_newResolvedIds_1399_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1389_, v_opts_1390_, v_ns_1396_, v_id_1391_);
v___x_1400_ = l_List_appendTR___redArg(v_newResolvedIds_1399_, v_x_1393_);
v_x_1392_ = v_tail_1395_;
v_x_1393_ = v___x_1400_;
goto _start;
}
else
{
lean_dec(v_ns_1396_);
v_x_1392_ = v_tail_1395_;
goto _start;
}
}
else
{
lean_object* v_tail_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1423_; 
v_tail_1403_ = lean_ctor_get(v_x_1392_, 1);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_x_1392_);
if (v_isSharedCheck_1423_ == 0)
{
lean_object* v_unused_1424_; 
v_unused_1424_ = lean_ctor_get(v_x_1392_, 0);
lean_dec(v_unused_1424_);
v___x_1405_ = v_x_1392_;
v_isShared_1406_ = v_isSharedCheck_1423_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_tail_1403_);
lean_dec(v_x_1392_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1423_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v_id_1407_; lean_object* v_declName_1408_; uint8_t v___x_1409_; 
v_id_1407_ = lean_ctor_get(v_head_1394_, 0);
lean_inc(v_id_1407_);
v_declName_1408_ = lean_ctor_get(v_head_1394_, 1);
lean_inc(v_declName_1408_);
lean_dec_ref_known(v_head_1394_, 2);
v___x_1409_ = lean_name_eq(v_id_1407_, v_id_1391_);
if (v___x_1409_ == 0)
{
uint8_t v___x_1410_; 
v___x_1410_ = l_Lean_Name_isPrefixOf(v_id_1407_, v_id_1391_);
if (v___x_1410_ == 0)
{
lean_dec(v_declName_1408_);
lean_dec(v_id_1407_);
lean_del_object(v___x_1405_);
v_x_1392_ = v_tail_1403_;
goto _start;
}
else
{
lean_object* v_candidate_1412_; uint8_t v___x_1413_; 
lean_inc(v_id_1391_);
v_candidate_1412_ = l_Lean_Name_replacePrefix(v_id_1391_, v_id_1407_, v_declName_1408_);
lean_dec(v_declName_1408_);
lean_dec(v_id_1407_);
lean_inc(v_candidate_1412_);
lean_inc_ref(v_env_1389_);
v___x_1413_ = l_Lean_Environment_contains(v_env_1389_, v_candidate_1412_, v___x_1410_);
if (v___x_1413_ == 0)
{
lean_dec(v_candidate_1412_);
lean_del_object(v___x_1405_);
v_x_1392_ = v_tail_1403_;
goto _start;
}
else
{
lean_object* v___x_1416_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 1, v_x_1393_);
lean_ctor_set(v___x_1405_, 0, v_candidate_1412_);
v___x_1416_ = v___x_1405_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_candidate_1412_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v_x_1393_);
v___x_1416_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
v_x_1392_ = v_tail_1403_;
v_x_1393_ = v___x_1416_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1420_; 
lean_dec(v_id_1407_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 1, v_x_1393_);
lean_ctor_set(v___x_1405_, 0, v_declName_1408_);
v___x_1420_ = v___x_1405_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_declName_1408_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v_x_1393_);
v___x_1420_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
v_x_1392_ = v_tail_1403_;
v_x_1393_ = v___x_1420_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1425_, lean_object* v_opts_1426_, lean_object* v_id_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1425_, v_opts_1426_, v_id_1427_, v_x_1428_, v_x_1429_);
lean_dec_ref(v_opts_1426_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1432_){
_start:
{
lean_object* v___f_1433_; lean_object* v___x_1434_; 
v___f_1433_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1434_ = l_List_eraseDupsBy___redArg(v___f_1433_, v_as_1432_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_){
_start:
{
if (lean_obj_tag(v_a_1436_) == 0)
{
lean_object* v___x_1438_; 
lean_dec(v_projs_1435_);
v___x_1438_ = l_List_reverse___redArg(v_a_1437_);
return v___x_1438_;
}
else
{
lean_object* v_head_1439_; lean_object* v_tail_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1449_; 
v_head_1439_ = lean_ctor_get(v_a_1436_, 0);
v_tail_1440_ = lean_ctor_get(v_a_1436_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_a_1436_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1442_ = v_a_1436_;
v_isShared_1443_ = v_isSharedCheck_1449_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_tail_1440_);
lean_inc(v_head_1439_);
lean_dec(v_a_1436_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1449_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; 
lean_inc(v_projs_1435_);
v___x_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_head_1439_);
lean_ctor_set(v___x_1444_, 1, v_projs_1435_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v_a_1437_);
lean_ctor_set(v___x_1442_, 0, v___x_1444_);
v___x_1446_ = v___x_1442_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_a_1437_);
v___x_1446_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
v_a_1436_ = v_tail_1440_;
v_a_1437_ = v___x_1446_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1450_, lean_object* v_opts_1451_, lean_object* v_ns_1452_, lean_object* v_openDecls_1453_, lean_object* v_extractionResult_1454_, lean_object* v_id_1455_, lean_object* v_projs_1456_){
_start:
{
if (lean_obj_tag(v_id_1455_) == 1)
{
lean_object* v_pre_1457_; lean_object* v_str_1458_; lean_object* v_imported_1459_; lean_object* v_ctx_1460_; lean_object* v_scopes_1461_; lean_object* v___x_1462_; lean_object* v_id_1463_; lean_object* v___y_1465_; lean_object* v___x_1475_; lean_object* v___y_1477_; 
v_pre_1457_ = lean_ctor_get(v_id_1455_, 0);
lean_inc(v_pre_1457_);
v_str_1458_ = lean_ctor_get(v_id_1455_, 1);
lean_inc_ref(v_str_1458_);
v_imported_1459_ = lean_ctor_get(v_extractionResult_1454_, 1);
v_ctx_1460_ = lean_ctor_get(v_extractionResult_1454_, 2);
v_scopes_1461_ = lean_ctor_get(v_extractionResult_1454_, 3);
lean_inc(v_scopes_1461_);
lean_inc(v_ctx_1460_);
lean_inc(v_imported_1459_);
v___x_1462_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1462_, 0, v_id_1455_);
lean_ctor_set(v___x_1462_, 1, v_imported_1459_);
lean_ctor_set(v___x_1462_, 2, v_ctx_1460_);
lean_ctor_set(v___x_1462_, 3, v_scopes_1461_);
v_id_1463_ = l_Lean_MacroScopesView_review(v___x_1462_);
lean_inc(v_ns_1452_);
lean_inc(v_id_1463_);
lean_inc_ref(v_env_1450_);
v___x_1475_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1450_, v_opts_1451_, v_id_1463_, v_ns_1452_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v___x_1482_; 
lean_inc(v_id_1463_);
lean_inc_ref(v_env_1450_);
v___x_1482_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1450_, v_opts_1451_, v_id_1463_);
if (lean_obj_tag(v___x_1482_) == 0)
{
uint8_t v___x_1483_; 
lean_inc(v_id_1463_);
lean_inc_ref(v_env_1450_);
v___x_1483_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1450_, v_id_1463_);
if (v___x_1483_ == 0)
{
v___y_1477_ = v___x_1475_;
goto v___jp_1476_;
}
else
{
lean_object* v___x_1484_; 
lean_inc(v_id_1463_);
v___x_1484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_id_1463_);
lean_ctor_set(v___x_1484_, 1, v___x_1475_);
v___y_1477_ = v___x_1484_;
goto v___jp_1476_;
}
}
else
{
lean_object* v_val_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_dec(v_id_1463_);
lean_dec_ref(v_str_1458_);
lean_dec(v_pre_1457_);
lean_dec(v_openDecls_1453_);
lean_dec(v_ns_1452_);
lean_dec_ref(v_env_1450_);
v_val_1485_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_val_1485_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v_val_1485_);
lean_ctor_set(v___x_1486_, 1, v_projs_1456_);
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1486_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
return v___x_1488_;
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_dec(v_id_1463_);
lean_dec_ref(v_str_1458_);
lean_dec(v_pre_1457_);
lean_dec(v_openDecls_1453_);
lean_dec(v_ns_1452_);
lean_dec_ref(v_env_1450_);
v___x_1489_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1475_);
v___x_1490_ = lean_box(0);
v___x_1491_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1456_, v___x_1489_, v___x_1490_);
return v___x_1491_;
}
v___jp_1464_:
{
lean_object* v_resolvedIds_1466_; uint8_t v___x_1467_; lean_object* v___x_1468_; lean_object* v_resolvedIds_1469_; 
lean_inc(v_openDecls_1453_);
lean_inc(v_id_1463_);
lean_inc_ref_n(v_env_1450_, 2);
v_resolvedIds_1466_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1450_, v_opts_1451_, v_id_1463_, v_openDecls_1453_, v___y_1465_);
v___x_1467_ = l_Lean_Name_isAtomic(v_id_1463_);
v___x_1468_ = l_Lean_getAliases(v_env_1450_, v_id_1463_, v___x_1467_);
lean_dec(v_id_1463_);
v_resolvedIds_1469_ = l_List_appendTR___redArg(v___x_1468_, v_resolvedIds_1466_);
if (lean_obj_tag(v_resolvedIds_1469_) == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_str_1458_);
lean_ctor_set(v___x_1470_, 1, v_projs_1456_);
v_id_1455_ = v_pre_1457_;
v_projs_1456_ = v___x_1470_;
goto _start;
}
else
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_dec_ref(v_str_1458_);
lean_dec(v_pre_1457_);
lean_dec(v_openDecls_1453_);
lean_dec(v_ns_1452_);
lean_dec_ref(v_env_1450_);
v___x_1472_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1469_);
v___x_1473_ = lean_box(0);
v___x_1474_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1456_, v___x_1472_, v___x_1473_);
return v___x_1474_;
}
}
v___jp_1476_:
{
lean_object* v___x_1478_; 
lean_inc(v_id_1463_);
lean_inc_ref(v_env_1450_);
v___x_1478_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1450_, v_opts_1451_, v_id_1463_);
if (lean_obj_tag(v___x_1478_) == 1)
{
lean_object* v_val_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_val_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_val_1479_);
lean_dec_ref_known(v___x_1478_, 1);
v___x_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1480_, 0, v_val_1479_);
lean_ctor_set(v___x_1480_, 1, v___x_1475_);
v___x_1481_ = l_List_appendTR___redArg(v___x_1480_, v___y_1477_);
v___y_1465_ = v___x_1481_;
goto v___jp_1464_;
}
else
{
lean_dec(v___x_1478_);
lean_dec(v___x_1475_);
v___y_1465_ = v___y_1477_;
goto v___jp_1464_;
}
}
}
else
{
lean_object* v___x_1492_; 
lean_dec(v_projs_1456_);
lean_dec(v_id_1455_);
lean_dec(v_openDecls_1453_);
lean_dec(v_ns_1452_);
lean_dec_ref(v_env_1450_);
v___x_1492_ = lean_box(0);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1493_, lean_object* v_opts_1494_, lean_object* v_ns_1495_, lean_object* v_openDecls_1496_, lean_object* v_extractionResult_1497_, lean_object* v_id_1498_, lean_object* v_projs_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1493_, v_opts_1494_, v_ns_1495_, v_openDecls_1496_, v_extractionResult_1497_, v_id_1498_, v_projs_1499_);
lean_dec_ref(v_extractionResult_1497_);
lean_dec_ref(v_opts_1494_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1501_, lean_object* v_opts_1502_, lean_object* v_ns_1503_, lean_object* v_openDecls_1504_, lean_object* v_id_1505_){
_start:
{
lean_object* v_extractionResult_1506_; lean_object* v_name_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_extractionResult_1506_ = l_Lean_extractMacroScopes(v_id_1505_);
v_name_1507_ = lean_ctor_get(v_extractionResult_1506_, 0);
lean_inc(v_name_1507_);
v___x_1508_ = lean_box(0);
v___x_1509_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1501_, v_opts_1502_, v_ns_1503_, v_openDecls_1504_, v_extractionResult_1506_, v_name_1507_, v___x_1508_);
lean_dec_ref(v_extractionResult_1506_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1510_, lean_object* v_opts_1511_, lean_object* v_ns_1512_, lean_object* v_openDecls_1513_, lean_object* v_id_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lean_ResolveName_resolveGlobalName(v_env_1510_, v_opts_1511_, v_ns_1512_, v_openDecls_1513_, v_id_1514_);
lean_dec_ref(v_opts_1511_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1516_){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_panic_fn_borrowed(v___x_1517_, v_msg_1516_);
return v___x_1518_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1522_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1523_ = lean_unsigned_to_nat(9u);
v___x_1524_ = lean_unsigned_to_nat(230u);
v___x_1525_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1526_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1527_ = l_mkPanicMessageWithDecl(v___x_1526_, v___x_1525_, v___x_1524_, v___x_1523_, v___x_1522_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1528_, lean_object* v_n_1529_, lean_object* v_ns_1530_){
_start:
{
switch(lean_obj_tag(v_ns_1530_))
{
case 1:
{
lean_object* v_pre_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v_pre_1531_ = lean_ctor_get(v_ns_1530_, 0);
lean_inc(v_pre_1531_);
lean_inc(v_n_1529_);
v___x_1532_ = l_Lean_Name_append(v_ns_1530_, v_n_1529_);
lean_inc_ref(v_env_1528_);
v___x_1533_ = l_Lean_Environment_isNamespace(v_env_1528_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_dec(v___x_1532_);
v_ns_1530_ = v_pre_1531_;
goto _start;
}
else
{
lean_object* v___x_1535_; 
lean_dec(v_pre_1531_);
lean_dec(v_n_1529_);
lean_dec_ref(v_env_1528_);
v___x_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1532_);
return v___x_1535_;
}
}
case 0:
{
lean_object* v___x_1536_; lean_object* v_n_1537_; uint8_t v___x_1538_; 
v___x_1536_ = l_Lean_rootNamespace;
v_n_1537_ = l_Lean_Name_replacePrefix(v_n_1529_, v___x_1536_, v_ns_1530_);
v___x_1538_ = l_Lean_Environment_isNamespace(v_env_1528_, v_n_1537_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; 
lean_dec(v_n_1537_);
v___x_1539_ = lean_box(0);
return v___x_1539_;
}
else
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_n_1537_);
return v___x_1540_;
}
}
default: 
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_dec(v_ns_1530_);
lean_dec(v_n_1529_);
lean_dec_ref(v_env_1528_);
v___x_1541_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1542_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1541_);
return v___x_1542_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1543_, lean_object* v_n_1544_, lean_object* v_x_1545_){
_start:
{
if (lean_obj_tag(v_x_1545_) == 0)
{
lean_object* v___x_1546_; 
lean_dec(v_n_1544_);
lean_dec_ref(v_env_1543_);
v___x_1546_ = lean_box(0);
return v___x_1546_;
}
else
{
lean_object* v_head_1547_; 
v_head_1547_ = lean_ctor_get(v_x_1545_, 0);
if (lean_obj_tag(v_head_1547_) == 0)
{
lean_object* v_tail_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1565_; 
lean_inc_ref(v_head_1547_);
v_tail_1548_ = lean_ctor_get(v_x_1545_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_x_1545_);
if (v_isSharedCheck_1565_ == 0)
{
lean_object* v_unused_1566_; 
v_unused_1566_ = lean_ctor_get(v_x_1545_, 0);
lean_dec(v_unused_1566_);
v___x_1550_ = v_x_1545_;
v_isShared_1551_ = v_isSharedCheck_1565_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_tail_1548_);
lean_dec(v_x_1545_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1565_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v_ns_1552_; lean_object* v_except_1553_; lean_object* v___x_1554_; uint8_t v___y_1556_; uint8_t v___x_1562_; 
v_ns_1552_ = lean_ctor_get(v_head_1547_, 0);
lean_inc(v_ns_1552_);
v_except_1553_ = lean_ctor_get(v_head_1547_, 1);
lean_inc(v_except_1553_);
lean_dec_ref_known(v_head_1547_, 2);
lean_inc(v_n_1544_);
v___x_1554_ = l_Lean_Name_append(v_ns_1552_, v_n_1544_);
lean_inc_ref(v_env_1543_);
v___x_1562_ = l_Lean_Environment_isNamespace(v_env_1543_, v___x_1554_);
if (v___x_1562_ == 0)
{
lean_dec(v_except_1553_);
v___y_1556_ = v___x_1562_;
goto v___jp_1555_;
}
else
{
uint8_t v___x_1563_; 
v___x_1563_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1544_, v_except_1553_);
lean_dec(v_except_1553_);
if (v___x_1563_ == 0)
{
v___y_1556_ = v___x_1562_;
goto v___jp_1555_;
}
else
{
lean_dec(v___x_1554_);
lean_del_object(v___x_1550_);
v_x_1545_ = v_tail_1548_;
goto _start;
}
}
v___jp_1555_:
{
if (v___y_1556_ == 0)
{
lean_dec(v___x_1554_);
lean_del_object(v___x_1550_);
v_x_1545_ = v_tail_1548_;
goto _start;
}
else
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1558_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1543_, v_n_1544_, v_tail_1548_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 1, v___x_1558_);
lean_ctor_set(v___x_1550_, 0, v___x_1554_);
v___x_1560_ = v___x_1550_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
else
{
lean_object* v_tail_1567_; 
v_tail_1567_ = lean_ctor_get(v_x_1545_, 1);
lean_inc(v_tail_1567_);
lean_dec_ref_known(v_x_1545_, 2);
v_x_1545_ = v_tail_1567_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object* v_env_1569_, lean_object* v_ns_1570_, lean_object* v_openDecls_1571_, lean_object* v_id_1572_){
_start:
{
lean_object* v___x_1573_; 
lean_inc(v_id_1572_);
lean_inc_ref(v_env_1569_);
v___x_1573_ = l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(v_env_1569_, v_id_1572_, v_ns_1570_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1569_, v_id_1572_, v_openDecls_1571_);
return v___x_1574_;
}
else
{
lean_object* v_val_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v_val_1575_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_val_1575_);
lean_dec_ref_known(v___x_1573_, 1);
v___x_1576_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1569_, v_id_1572_, v_openDecls_1571_);
v___x_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_val_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
return v___x_1577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object* v_inst_1578_, lean_object* v_inst_1579_){
_start:
{
lean_object* v_getCurrNamespace_1580_; lean_object* v_getOpenDecls_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1590_; 
v_getCurrNamespace_1580_ = lean_ctor_get(v_inst_1579_, 0);
v_getOpenDecls_1581_ = lean_ctor_get(v_inst_1579_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_inst_1579_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1583_ = v_inst_1579_;
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_getOpenDecls_1581_);
lean_inc(v_getCurrNamespace_1580_);
lean_dec(v_inst_1579_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
lean_inc(v_inst_1578_);
v___x_1585_ = lean_apply_2(v_inst_1578_, lean_box(0), v_getCurrNamespace_1580_);
v___x_1586_ = lean_apply_2(v_inst_1578_, lean_box(0), v_getOpenDecls_1581_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 1, v___x_1586_);
lean_ctor_set(v___x_1583_, 0, v___x_1585_);
v___x_1588_ = v___x_1583_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v___x_1586_);
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
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object* v_m_1591_, lean_object* v_n_1592_, lean_object* v_inst_1593_, lean_object* v_inst_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v_inst_1593_, v_inst_1594_);
return v___x_1595_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0));
v___x_1598_ = l_Lean_stringToMessageData(v___x_1597_);
return v___x_1598_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1600_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2));
v___x_1601_ = l_Lean_stringToMessageData(v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1602_, lean_object* v_toPure_1603_, lean_object* v_id_1604_, lean_object* v_inst_1605_, lean_object* v_inst_1606_, lean_object* v_inst_1607_, lean_object* v_inst_1608_, uint8_t v_____do__lift_1609_){
_start:
{
uint8_t v_isExporting_1613_; 
v_isExporting_1613_ = lean_ctor_get_uint8(v_____do__lift_1602_, sizeof(void*)*8);
if (v_isExporting_1613_ == 0)
{
lean_dec(v_inst_1608_);
lean_dec(v_inst_1607_);
lean_dec_ref(v_inst_1606_);
lean_dec_ref(v_inst_1605_);
lean_dec(v_id_1604_);
goto v___jp_1610_;
}
else
{
uint8_t v___x_1614_; 
v___x_1614_ = l_Lean_isPrivateName(v_id_1604_);
if (v___x_1614_ == 0)
{
lean_dec(v_inst_1608_);
lean_dec(v_inst_1607_);
lean_dec_ref(v_inst_1606_);
lean_dec_ref(v_inst_1605_);
lean_dec(v_id_1604_);
goto v___jp_1610_;
}
else
{
if (v_____do__lift_1609_ == 0)
{
lean_dec(v_inst_1608_);
lean_dec(v_inst_1607_);
lean_dec_ref(v_inst_1606_);
lean_dec_ref(v_inst_1605_);
lean_dec(v_id_1604_);
goto v___jp_1610_;
}
else
{
lean_object* v___x_1615_; uint8_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec(v_toPure_1603_);
v___x_1615_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1616_ = 0;
v___x_1617_ = l_Lean_MessageData_ofConstName(v_id_1604_, v___x_1616_);
v___x_1618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1615_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = l_Lean_logWarning___redArg(v_inst_1605_, v_inst_1606_, v_inst_1607_, v_inst_1608_, v___x_1620_);
return v___x_1621_;
}
}
}
v___jp_1610_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_apply_2(v_toPure_1603_, lean_box(0), v___x_1611_);
return v___x_1612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1622_, lean_object* v_toPure_1623_, lean_object* v_id_1624_, lean_object* v_inst_1625_, lean_object* v_inst_1626_, lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_____do__lift_1629_){
_start:
{
uint8_t v_____do__lift_199__boxed_1630_; lean_object* v_res_1631_; 
v_____do__lift_199__boxed_1630_ = lean_unbox(v_____do__lift_1629_);
v_res_1631_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1622_, v_toPure_1623_, v_id_1624_, v_inst_1625_, v_inst_1626_, v_inst_1627_, v_inst_1628_, v_____do__lift_199__boxed_1630_);
lean_dec_ref(v_____do__lift_1622_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toPure_1632_, lean_object* v_id_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_inst_1636_, lean_object* v_inst_1637_, lean_object* v___x_1638_, lean_object* v_toBind_1639_, lean_object* v_____do__lift_1640_){
_start:
{
lean_object* v___f_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
lean_inc(v_inst_1637_);
lean_inc_ref(v_inst_1634_);
v___f_1641_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1641_, 0, v_____do__lift_1640_);
lean_closure_set(v___f_1641_, 1, v_toPure_1632_);
lean_closure_set(v___f_1641_, 2, v_id_1633_);
lean_closure_set(v___f_1641_, 3, v_inst_1634_);
lean_closure_set(v___f_1641_, 4, v_inst_1635_);
lean_closure_set(v___f_1641_, 5, v_inst_1636_);
lean_closure_set(v___f_1641_, 6, v_inst_1637_);
v___x_1642_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1643_ = l_Lean_Option_getM___redArg(v_inst_1634_, v_inst_1637_, v___x_1638_, v___x_1642_);
v___x_1644_ = lean_apply_4(v_toBind_1639_, lean_box(0), lean_box(0), v___x_1643_, v___f_1641_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1645_, lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_id_1650_){
_start:
{
lean_object* v___x_1651_; lean_object* v_toApplicative_1652_; lean_object* v_toBind_1653_; lean_object* v_getEnv_1654_; lean_object* v_toPure_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; 
v___x_1651_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1652_ = lean_ctor_get(v_inst_1645_, 0);
v_toBind_1653_ = lean_ctor_get(v_inst_1645_, 1);
lean_inc_n(v_toBind_1653_, 2);
v_getEnv_1654_ = lean_ctor_get(v_inst_1646_, 0);
lean_inc(v_getEnv_1654_);
lean_dec_ref(v_inst_1646_);
v_toPure_1655_ = lean_ctor_get(v_toApplicative_1652_, 1);
lean_inc(v_toPure_1655_);
v___f_1656_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1656_, 0, v_toPure_1655_);
lean_closure_set(v___f_1656_, 1, v_id_1650_);
lean_closure_set(v___f_1656_, 2, v_inst_1645_);
lean_closure_set(v___f_1656_, 3, v_inst_1648_);
lean_closure_set(v___f_1656_, 4, v_inst_1649_);
lean_closure_set(v___f_1656_, 5, v_inst_1647_);
lean_closure_set(v___f_1656_, 6, v___x_1651_);
lean_closure_set(v___f_1656_, 7, v_toBind_1653_);
v___x_1657_ = lean_apply_4(v_toBind_1653_, lean_box(0), lean_box(0), v_getEnv_1654_, v___f_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object* v_m_1658_, lean_object* v_inst_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_inst_1663_, lean_object* v_id_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1659_, v_inst_1660_, v_inst_1661_, v_inst_1662_, v_inst_1663_, v_id_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_env_1666_, lean_object* v_n_1667_, lean_object* v_toPure_1668_, uint8_t v___y_1669_, uint8_t v___x_1670_, lean_object* v_____r_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1666_, v_n_1667_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_box(v___y_1669_);
v___x_1674_ = lean_apply_2(v_toPure_1668_, lean_box(0), v___x_1673_);
return v___x_1674_;
}
else
{
lean_object* v_val_1675_; lean_object* v___x_1676_; uint8_t v_isModule_1677_; 
v_val_1675_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_val_1675_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1676_ = l_Lean_Environment_header(v_env_1666_);
v_isModule_1677_ = lean_ctor_get_uint8(v___x_1676_, sizeof(void*)*7 + 4);
if (v_isModule_1677_ == 0)
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
lean_dec_ref(v___x_1676_);
lean_dec(v_val_1675_);
v___x_1678_ = lean_box(v___x_1670_);
v___x_1679_ = lean_apply_2(v_toPure_1668_, lean_box(0), v___x_1678_);
return v___x_1679_;
}
else
{
lean_object* v_modules_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_modules_1680_ = lean_ctor_get(v___x_1676_, 3);
lean_inc_ref(v_modules_1680_);
lean_dec_ref(v___x_1676_);
v___x_1681_ = lean_array_get_size(v_modules_1680_);
v___x_1682_ = lean_nat_dec_lt(v_val_1675_, v___x_1681_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec_ref(v_modules_1680_);
lean_dec(v_val_1675_);
v___x_1683_ = lean_box(v_isModule_1677_);
v___x_1684_ = lean_apply_2(v_toPure_1668_, lean_box(0), v___x_1683_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v_toImport_1686_; uint8_t v_importAll_1687_; 
v___x_1685_ = lean_array_fget(v_modules_1680_, v_val_1675_);
lean_dec(v_val_1675_);
lean_dec_ref(v_modules_1680_);
v_toImport_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc_ref(v_toImport_1686_);
lean_dec(v___x_1685_);
v_importAll_1687_ = lean_ctor_get_uint8(v_toImport_1686_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1686_);
if (v_importAll_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = lean_box(v_isModule_1677_);
v___x_1689_ = lean_apply_2(v_toPure_1668_, lean_box(0), v___x_1688_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_box(v___y_1669_);
v___x_1691_ = lean_apply_2(v_toPure_1668_, lean_box(0), v___x_1690_);
return v___x_1691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object* v_env_1692_, lean_object* v_n_1693_, lean_object* v_toPure_1694_, lean_object* v___y_1695_, lean_object* v___x_1696_, lean_object* v_____r_1697_){
_start:
{
uint8_t v___y_386__boxed_1698_; uint8_t v___x_387__boxed_1699_; lean_object* v_res_1700_; 
v___y_386__boxed_1698_ = lean_unbox(v___y_1695_);
v___x_387__boxed_1699_ = lean_unbox(v___x_1696_);
v_res_1700_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_env_1692_, v_n_1693_, v_toPure_1694_, v___y_386__boxed_1698_, v___x_387__boxed_1699_, v_____r_1697_);
lean_dec(v_n_1693_);
lean_dec_ref(v_env_1692_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1701_, lean_object* v_n_1702_, lean_object* v_toPure_1703_, uint8_t v___x_1704_, lean_object* v_inst_1705_, lean_object* v_inst_1706_, lean_object* v_inst_1707_, lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_toBind_1710_, uint8_t v___y_1711_, uint8_t v_____do__lift_1712_){
_start:
{
uint8_t v___y_1714_; uint8_t v_isExporting_1720_; 
v_isExporting_1720_ = lean_ctor_get_uint8(v_env_1701_, sizeof(void*)*8);
if (v_isExporting_1720_ == 0)
{
v___y_1714_ = v___y_1711_;
goto v___jp_1713_;
}
else
{
if (v_____do__lift_1712_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
lean_dec(v_toBind_1710_);
lean_dec(v_inst_1709_);
lean_dec_ref(v_inst_1708_);
lean_dec(v_inst_1707_);
lean_dec_ref(v_inst_1706_);
lean_dec_ref(v_inst_1705_);
lean_dec(v_n_1702_);
lean_dec_ref(v_env_1701_);
v___x_1721_ = lean_box(v___x_1704_);
v___x_1722_ = lean_apply_2(v_toPure_1703_, lean_box(0), v___x_1721_);
return v___x_1722_;
}
else
{
v___y_1714_ = v___y_1711_;
goto v___jp_1713_;
}
}
v___jp_1713_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___f_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1715_ = lean_box(v___y_1714_);
v___x_1716_ = lean_box(v___x_1704_);
lean_inc(v_n_1702_);
v___f_1717_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1717_, 0, v_env_1701_);
lean_closure_set(v___f_1717_, 1, v_n_1702_);
lean_closure_set(v___f_1717_, 2, v_toPure_1703_);
lean_closure_set(v___f_1717_, 3, v___x_1715_);
lean_closure_set(v___f_1717_, 4, v___x_1716_);
v___x_1718_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1705_, v_inst_1706_, v_inst_1707_, v_inst_1708_, v_inst_1709_, v_n_1702_);
v___x_1719_ = lean_apply_4(v_toBind_1710_, lean_box(0), lean_box(0), v___x_1718_, v___f_1717_);
return v___x_1719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1723_, lean_object* v_n_1724_, lean_object* v_toPure_1725_, lean_object* v___x_1726_, lean_object* v_inst_1727_, lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_inst_1730_, lean_object* v_inst_1731_, lean_object* v_toBind_1732_, lean_object* v___y_1733_, lean_object* v_____do__lift_1734_){
_start:
{
uint8_t v___x_427__boxed_1735_; uint8_t v___y_433__boxed_1736_; uint8_t v_____do__lift_434__boxed_1737_; lean_object* v_res_1738_; 
v___x_427__boxed_1735_ = lean_unbox(v___x_1726_);
v___y_433__boxed_1736_ = lean_unbox(v___y_1733_);
v_____do__lift_434__boxed_1737_ = lean_unbox(v_____do__lift_1734_);
v_res_1738_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1723_, v_n_1724_, v_toPure_1725_, v___x_427__boxed_1735_, v_inst_1727_, v_inst_1728_, v_inst_1729_, v_inst_1730_, v_inst_1731_, v_toBind_1732_, v___y_433__boxed_1736_, v_____do__lift_434__boxed_1737_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_n_1739_, lean_object* v_toPure_1740_, uint8_t v___x_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_inst_1744_, lean_object* v_inst_1745_, lean_object* v_inst_1746_, lean_object* v_toBind_1747_, uint8_t v___y_1748_, lean_object* v___x_1749_, lean_object* v_env_1750_){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___f_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1751_ = lean_box(v___x_1741_);
v___x_1752_ = lean_box(v___y_1748_);
lean_inc(v_toBind_1747_);
lean_inc(v_inst_1744_);
lean_inc_ref(v_inst_1742_);
v___f_1753_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_1753_, 0, v_env_1750_);
lean_closure_set(v___f_1753_, 1, v_n_1739_);
lean_closure_set(v___f_1753_, 2, v_toPure_1740_);
lean_closure_set(v___f_1753_, 3, v___x_1751_);
lean_closure_set(v___f_1753_, 4, v_inst_1742_);
lean_closure_set(v___f_1753_, 5, v_inst_1743_);
lean_closure_set(v___f_1753_, 6, v_inst_1744_);
lean_closure_set(v___f_1753_, 7, v_inst_1745_);
lean_closure_set(v___f_1753_, 8, v_inst_1746_);
lean_closure_set(v___f_1753_, 9, v_toBind_1747_);
lean_closure_set(v___f_1753_, 10, v___x_1752_);
v___x_1754_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1755_ = l_Lean_Option_getM___redArg(v_inst_1742_, v_inst_1744_, v___x_1749_, v___x_1754_);
v___x_1756_ = lean_apply_4(v_toBind_1747_, lean_box(0), lean_box(0), v___x_1755_, v___f_1753_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_n_1757_, lean_object* v_toPure_1758_, lean_object* v___x_1759_, lean_object* v_inst_1760_, lean_object* v_inst_1761_, lean_object* v_inst_1762_, lean_object* v_inst_1763_, lean_object* v_inst_1764_, lean_object* v_toBind_1765_, lean_object* v___y_1766_, lean_object* v___x_1767_, lean_object* v_env_1768_){
_start:
{
uint8_t v___x_469__boxed_1769_; uint8_t v___y_475__boxed_1770_; lean_object* v_res_1771_; 
v___x_469__boxed_1769_ = lean_unbox(v___x_1759_);
v___y_475__boxed_1770_ = lean_unbox(v___y_1766_);
v_res_1771_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_n_1757_, v_toPure_1758_, v___x_469__boxed_1769_, v_inst_1760_, v_inst_1761_, v_inst_1762_, v_inst_1763_, v_inst_1764_, v_toBind_1765_, v___y_475__boxed_1770_, v___x_1767_, v_env_1768_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_inst_1776_, lean_object* v_n_1777_){
_start:
{
lean_object* v___x_1778_; uint8_t v___y_1780_; uint8_t v___x_1795_; 
v___x_1778_ = l_Lean_KVMap_instValueBool;
v___x_1795_ = l_Lean_isPrivateName(v_n_1777_);
if (v___x_1795_ == 0)
{
uint8_t v___x_1796_; 
v___x_1796_ = 1;
v___y_1780_ = v___x_1796_;
goto v___jp_1779_;
}
else
{
uint8_t v___x_1797_; 
v___x_1797_ = 0;
v___y_1780_ = v___x_1797_;
goto v___jp_1779_;
}
v___jp_1779_:
{
if (v___y_1780_ == 0)
{
lean_object* v_toApplicative_1781_; lean_object* v_toBind_1782_; lean_object* v_toPure_1783_; lean_object* v_getEnv_1784_; uint8_t v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___f_1788_; lean_object* v___x_1789_; 
v_toApplicative_1781_ = lean_ctor_get(v_inst_1774_, 0);
v_toBind_1782_ = lean_ctor_get(v_inst_1774_, 1);
lean_inc_n(v_toBind_1782_, 2);
v_toPure_1783_ = lean_ctor_get(v_toApplicative_1781_, 1);
lean_inc(v_toPure_1783_);
v_getEnv_1784_ = lean_ctor_get(v_inst_1775_, 0);
lean_inc(v_getEnv_1784_);
v___x_1785_ = 1;
v___x_1786_ = lean_box(v___x_1785_);
v___x_1787_ = lean_box(v___y_1780_);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1788_, 0, v_n_1777_);
lean_closure_set(v___f_1788_, 1, v_toPure_1783_);
lean_closure_set(v___f_1788_, 2, v___x_1786_);
lean_closure_set(v___f_1788_, 3, v_inst_1774_);
lean_closure_set(v___f_1788_, 4, v_inst_1775_);
lean_closure_set(v___f_1788_, 5, v_inst_1776_);
lean_closure_set(v___f_1788_, 6, v_inst_1772_);
lean_closure_set(v___f_1788_, 7, v_inst_1773_);
lean_closure_set(v___f_1788_, 8, v_toBind_1782_);
lean_closure_set(v___f_1788_, 9, v___x_1787_);
lean_closure_set(v___f_1788_, 10, v___x_1778_);
v___x_1789_ = lean_apply_4(v_toBind_1782_, lean_box(0), lean_box(0), v_getEnv_1784_, v___f_1788_);
return v___x_1789_;
}
else
{
lean_object* v_toApplicative_1790_; lean_object* v_toPure_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_toApplicative_1790_ = lean_ctor_get(v_inst_1774_, 0);
lean_inc_ref(v_toApplicative_1790_);
lean_dec(v_n_1777_);
lean_dec(v_inst_1776_);
lean_dec_ref(v_inst_1775_);
lean_dec_ref(v_inst_1774_);
lean_dec(v_inst_1773_);
lean_dec_ref(v_inst_1772_);
v_toPure_1791_ = lean_ctor_get(v_toApplicative_1790_, 1);
lean_inc(v_toPure_1791_);
lean_dec_ref(v_toApplicative_1790_);
v___x_1792_ = 0;
v___x_1793_ = lean_box(v___x_1792_);
v___x_1794_ = lean_apply_2(v_toPure_1791_, lean_box(0), v___x_1793_);
return v___x_1794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1798_, lean_object* v_inst_1799_, lean_object* v_inst_1800_, lean_object* v_inst_1801_, lean_object* v_inst_1802_, lean_object* v_inst_1803_, lean_object* v_n_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1799_, v_inst_1800_, v_inst_1801_, v_inst_1802_, v_inst_1803_, v_n_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1806_){
_start:
{
lean_object* v_fst_1807_; uint8_t v___x_1808_; 
v_fst_1807_ = lean_ctor_get(v_x_1806_, 0);
v___x_1808_ = l_Lean_isPrivateName(v_fst_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1809_){
_start:
{
uint8_t v_res_1810_; lean_object* v_r_1811_; 
v_res_1810_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1809_);
lean_dec_ref(v_x_1809_);
v_r_1811_ = lean_box(v_res_1810_);
return v_r_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1812_, lean_object* v_res_1813_, lean_object* v_____r_1814_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = lean_apply_2(v_toPure_1812_, lean_box(0), v_res_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1816_, lean_object* v_toPure_1817_, lean_object* v_res_1818_, lean_object* v___f_1819_, lean_object* v_inst_1820_, lean_object* v_inst_1821_, lean_object* v_inst_1822_, lean_object* v_inst_1823_, lean_object* v_inst_1824_, lean_object* v_toBind_1825_, lean_object* v___f_1826_, lean_object* v_____do__lift_1827_){
_start:
{
if (v_enableLog_1816_ == 0)
{
lean_object* v___x_1828_; 
lean_dec(v___f_1826_);
lean_dec(v_toBind_1825_);
lean_dec(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec(v_inst_1822_);
lean_dec_ref(v_inst_1821_);
lean_dec_ref(v_inst_1820_);
lean_dec_ref(v___f_1819_);
v___x_1828_ = lean_apply_2(v_toPure_1817_, lean_box(0), v_res_1818_);
return v___x_1828_;
}
else
{
uint8_t v_isExporting_1829_; 
v_isExporting_1829_ = lean_ctor_get_uint8(v_____do__lift_1827_, sizeof(void*)*8);
if (v_isExporting_1829_ == 0)
{
lean_object* v___x_1830_; 
lean_dec(v___f_1826_);
lean_dec(v_toBind_1825_);
lean_dec(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec(v_inst_1822_);
lean_dec_ref(v_inst_1821_);
lean_dec_ref(v_inst_1820_);
lean_dec_ref(v___f_1819_);
v___x_1830_ = lean_apply_2(v_toPure_1817_, lean_box(0), v_res_1818_);
return v___x_1830_;
}
else
{
lean_object* v___x_1831_; 
lean_inc(v_res_1818_);
v___x_1831_ = l_List_find_x3f___redArg(v___f_1819_, v_res_1818_);
if (lean_obj_tag(v___x_1831_) == 1)
{
lean_object* v_val_1832_; lean_object* v_fst_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_dec(v_res_1818_);
lean_dec(v_toPure_1817_);
v_val_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_val_1832_);
lean_dec_ref_known(v___x_1831_, 1);
v_fst_1833_ = lean_ctor_get(v_val_1832_, 0);
lean_inc(v_fst_1833_);
lean_dec(v_val_1832_);
v___x_1834_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1820_, v_inst_1821_, v_inst_1822_, v_inst_1823_, v_inst_1824_, v_fst_1833_);
v___x_1835_ = lean_apply_4(v_toBind_1825_, lean_box(0), lean_box(0), v___x_1834_, v___f_1826_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; 
lean_dec(v___x_1831_);
lean_dec(v___f_1826_);
lean_dec(v_toBind_1825_);
lean_dec(v_inst_1824_);
lean_dec_ref(v_inst_1823_);
lean_dec(v_inst_1822_);
lean_dec_ref(v_inst_1821_);
lean_dec_ref(v_inst_1820_);
v___x_1836_ = lean_apply_2(v_toPure_1817_, lean_box(0), v_res_1818_);
return v___x_1836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1837_, lean_object* v_toPure_1838_, lean_object* v_res_1839_, lean_object* v___f_1840_, lean_object* v_inst_1841_, lean_object* v_inst_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_inst_1845_, lean_object* v_toBind_1846_, lean_object* v___f_1847_, lean_object* v_____do__lift_1848_){
_start:
{
uint8_t v_enableLog_boxed_1849_; lean_object* v_res_1850_; 
v_enableLog_boxed_1849_ = lean_unbox(v_enableLog_1837_);
v_res_1850_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1849_, v_toPure_1838_, v_res_1839_, v___f_1840_, v_inst_1841_, v_inst_1842_, v_inst_1843_, v_inst_1844_, v_inst_1845_, v_toBind_1846_, v___f_1847_, v_____do__lift_1848_);
lean_dec_ref(v_____do__lift_1848_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1851_, lean_object* v_____do__lift_1852_, lean_object* v_____do__lift_1853_, lean_object* v_id_1854_, lean_object* v_toPure_1855_, uint8_t v_enableLog_1856_, lean_object* v___f_1857_, lean_object* v_inst_1858_, lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_inst_1861_, lean_object* v_inst_1862_, lean_object* v_toBind_1863_, lean_object* v_getEnv_1864_, lean_object* v_____do__lift_1865_){
_start:
{
lean_object* v_res_1866_; lean_object* v___f_1867_; lean_object* v___x_1868_; lean_object* v___f_1869_; lean_object* v___x_1870_; 
v_res_1866_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1851_, v_____do__lift_1852_, v_____do__lift_1853_, v_____do__lift_1865_, v_id_1854_);
lean_inc(v_res_1866_);
lean_inc(v_toPure_1855_);
v___f_1867_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1867_, 0, v_toPure_1855_);
lean_closure_set(v___f_1867_, 1, v_res_1866_);
v___x_1868_ = lean_box(v_enableLog_1856_);
lean_inc(v_toBind_1863_);
v___f_1869_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1869_, 0, v___x_1868_);
lean_closure_set(v___f_1869_, 1, v_toPure_1855_);
lean_closure_set(v___f_1869_, 2, v_res_1866_);
lean_closure_set(v___f_1869_, 3, v___f_1857_);
lean_closure_set(v___f_1869_, 4, v_inst_1858_);
lean_closure_set(v___f_1869_, 5, v_inst_1859_);
lean_closure_set(v___f_1869_, 6, v_inst_1860_);
lean_closure_set(v___f_1869_, 7, v_inst_1861_);
lean_closure_set(v___f_1869_, 8, v_inst_1862_);
lean_closure_set(v___f_1869_, 9, v_toBind_1863_);
lean_closure_set(v___f_1869_, 10, v___f_1867_);
v___x_1870_ = lean_apply_4(v_toBind_1863_, lean_box(0), lean_box(0), v_getEnv_1864_, v___f_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_1871_, lean_object* v_____do__lift_1872_, lean_object* v_____do__lift_1873_, lean_object* v_id_1874_, lean_object* v_toPure_1875_, lean_object* v_enableLog_1876_, lean_object* v___f_1877_, lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_toBind_1883_, lean_object* v_getEnv_1884_, lean_object* v_____do__lift_1885_){
_start:
{
uint8_t v_enableLog_boxed_1886_; lean_object* v_res_1887_; 
v_enableLog_boxed_1886_ = lean_unbox(v_enableLog_1876_);
v_res_1887_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_1871_, v_____do__lift_1872_, v_____do__lift_1873_, v_id_1874_, v_toPure_1875_, v_enableLog_boxed_1886_, v___f_1877_, v_inst_1878_, v_inst_1879_, v_inst_1880_, v_inst_1881_, v_inst_1882_, v_toBind_1883_, v_getEnv_1884_, v_____do__lift_1885_);
lean_dec_ref(v_____do__lift_1872_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_1888_, lean_object* v_____do__lift_1889_, lean_object* v_id_1890_, lean_object* v_toPure_1891_, uint8_t v_enableLog_1892_, lean_object* v___f_1893_, lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v_toBind_1899_, lean_object* v_getEnv_1900_, lean_object* v_getOpenDecls_1901_, lean_object* v_____do__lift_1902_){
_start:
{
lean_object* v___x_1903_; lean_object* v___f_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_box(v_enableLog_1892_);
lean_inc(v_toBind_1899_);
v___f_1904_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_1904_, 0, v_____do__lift_1888_);
lean_closure_set(v___f_1904_, 1, v_____do__lift_1889_);
lean_closure_set(v___f_1904_, 2, v_____do__lift_1902_);
lean_closure_set(v___f_1904_, 3, v_id_1890_);
lean_closure_set(v___f_1904_, 4, v_toPure_1891_);
lean_closure_set(v___f_1904_, 5, v___x_1903_);
lean_closure_set(v___f_1904_, 6, v___f_1893_);
lean_closure_set(v___f_1904_, 7, v_inst_1894_);
lean_closure_set(v___f_1904_, 8, v_inst_1895_);
lean_closure_set(v___f_1904_, 9, v_inst_1896_);
lean_closure_set(v___f_1904_, 10, v_inst_1897_);
lean_closure_set(v___f_1904_, 11, v_inst_1898_);
lean_closure_set(v___f_1904_, 12, v_toBind_1899_);
lean_closure_set(v___f_1904_, 13, v_getEnv_1900_);
v___x_1905_ = lean_apply_4(v_toBind_1899_, lean_box(0), lean_box(0), v_getOpenDecls_1901_, v___f_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_1906_, lean_object* v_____do__lift_1907_, lean_object* v_id_1908_, lean_object* v_toPure_1909_, lean_object* v_enableLog_1910_, lean_object* v___f_1911_, lean_object* v_inst_1912_, lean_object* v_inst_1913_, lean_object* v_inst_1914_, lean_object* v_inst_1915_, lean_object* v_inst_1916_, lean_object* v_toBind_1917_, lean_object* v_getEnv_1918_, lean_object* v_getOpenDecls_1919_, lean_object* v_____do__lift_1920_){
_start:
{
uint8_t v_enableLog_boxed_1921_; lean_object* v_res_1922_; 
v_enableLog_boxed_1921_ = lean_unbox(v_enableLog_1910_);
v_res_1922_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_1906_, v_____do__lift_1907_, v_id_1908_, v_toPure_1909_, v_enableLog_boxed_1921_, v___f_1911_, v_inst_1912_, v_inst_1913_, v_inst_1914_, v_inst_1915_, v_inst_1916_, v_toBind_1917_, v_getEnv_1918_, v_getOpenDecls_1919_, v_____do__lift_1920_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_1923_, lean_object* v_____do__lift_1924_, lean_object* v_id_1925_, lean_object* v_toPure_1926_, uint8_t v_enableLog_1927_, lean_object* v___f_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_toBind_1934_, lean_object* v_getEnv_1935_, lean_object* v_____do__lift_1936_){
_start:
{
lean_object* v_getCurrNamespace_1937_; lean_object* v_getOpenDecls_1938_; lean_object* v___x_1939_; lean_object* v___f_1940_; lean_object* v___x_1941_; 
v_getCurrNamespace_1937_ = lean_ctor_get(v_inst_1923_, 0);
lean_inc(v_getCurrNamespace_1937_);
v_getOpenDecls_1938_ = lean_ctor_get(v_inst_1923_, 1);
lean_inc(v_getOpenDecls_1938_);
lean_dec_ref(v_inst_1923_);
v___x_1939_ = lean_box(v_enableLog_1927_);
lean_inc(v_toBind_1934_);
v___f_1940_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_1940_, 0, v_____do__lift_1924_);
lean_closure_set(v___f_1940_, 1, v_____do__lift_1936_);
lean_closure_set(v___f_1940_, 2, v_id_1925_);
lean_closure_set(v___f_1940_, 3, v_toPure_1926_);
lean_closure_set(v___f_1940_, 4, v___x_1939_);
lean_closure_set(v___f_1940_, 5, v___f_1928_);
lean_closure_set(v___f_1940_, 6, v_inst_1929_);
lean_closure_set(v___f_1940_, 7, v_inst_1930_);
lean_closure_set(v___f_1940_, 8, v_inst_1931_);
lean_closure_set(v___f_1940_, 9, v_inst_1932_);
lean_closure_set(v___f_1940_, 10, v_inst_1933_);
lean_closure_set(v___f_1940_, 11, v_toBind_1934_);
lean_closure_set(v___f_1940_, 12, v_getEnv_1935_);
lean_closure_set(v___f_1940_, 13, v_getOpenDecls_1938_);
v___x_1941_ = lean_apply_4(v_toBind_1934_, lean_box(0), lean_box(0), v_getCurrNamespace_1937_, v___f_1940_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_1942_, lean_object* v_____do__lift_1943_, lean_object* v_id_1944_, lean_object* v_toPure_1945_, lean_object* v_enableLog_1946_, lean_object* v___f_1947_, lean_object* v_inst_1948_, lean_object* v_inst_1949_, lean_object* v_inst_1950_, lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v_toBind_1953_, lean_object* v_getEnv_1954_, lean_object* v_____do__lift_1955_){
_start:
{
uint8_t v_enableLog_boxed_1956_; lean_object* v_res_1957_; 
v_enableLog_boxed_1956_ = lean_unbox(v_enableLog_1946_);
v_res_1957_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_1942_, v_____do__lift_1943_, v_id_1944_, v_toPure_1945_, v_enableLog_boxed_1956_, v___f_1947_, v_inst_1948_, v_inst_1949_, v_inst_1950_, v_inst_1951_, v_inst_1952_, v_toBind_1953_, v_getEnv_1954_, v_____do__lift_1955_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_1958_, lean_object* v_id_1959_, lean_object* v_toPure_1960_, uint8_t v_enableLog_1961_, lean_object* v___f_1962_, lean_object* v_inst_1963_, lean_object* v_inst_1964_, lean_object* v_inst_1965_, lean_object* v_inst_1966_, lean_object* v_inst_1967_, lean_object* v_toBind_1968_, lean_object* v_getEnv_1969_, lean_object* v_____do__lift_1970_){
_start:
{
lean_object* v___x_1971_; lean_object* v___f_1972_; lean_object* v___x_1973_; 
v___x_1971_ = lean_box(v_enableLog_1961_);
lean_inc(v_toBind_1968_);
lean_inc(v_inst_1965_);
v___f_1972_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_1972_, 0, v_inst_1958_);
lean_closure_set(v___f_1972_, 1, v_____do__lift_1970_);
lean_closure_set(v___f_1972_, 2, v_id_1959_);
lean_closure_set(v___f_1972_, 3, v_toPure_1960_);
lean_closure_set(v___f_1972_, 4, v___x_1971_);
lean_closure_set(v___f_1972_, 5, v___f_1962_);
lean_closure_set(v___f_1972_, 6, v_inst_1963_);
lean_closure_set(v___f_1972_, 7, v_inst_1964_);
lean_closure_set(v___f_1972_, 8, v_inst_1965_);
lean_closure_set(v___f_1972_, 9, v_inst_1966_);
lean_closure_set(v___f_1972_, 10, v_inst_1967_);
lean_closure_set(v___f_1972_, 11, v_toBind_1968_);
lean_closure_set(v___f_1972_, 12, v_getEnv_1969_);
v___x_1973_ = lean_apply_4(v_toBind_1968_, lean_box(0), lean_box(0), v_inst_1965_, v___f_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_1974_, lean_object* v_id_1975_, lean_object* v_toPure_1976_, lean_object* v_enableLog_1977_, lean_object* v___f_1978_, lean_object* v_inst_1979_, lean_object* v_inst_1980_, lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_inst_1983_, lean_object* v_toBind_1984_, lean_object* v_getEnv_1985_, lean_object* v_____do__lift_1986_){
_start:
{
uint8_t v_enableLog_boxed_1987_; lean_object* v_res_1988_; 
v_enableLog_boxed_1987_ = lean_unbox(v_enableLog_1977_);
v_res_1988_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_1974_, v_id_1975_, v_toPure_1976_, v_enableLog_boxed_1987_, v___f_1978_, v_inst_1979_, v_inst_1980_, v_inst_1981_, v_inst_1982_, v_inst_1983_, v_toBind_1984_, v_getEnv_1985_, v_____do__lift_1986_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_1990_, lean_object* v_inst_1991_, lean_object* v_inst_1992_, lean_object* v_inst_1993_, lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_id_1996_, uint8_t v_enableLog_1997_){
_start:
{
lean_object* v_toApplicative_1998_; lean_object* v_toBind_1999_; lean_object* v_getEnv_2000_; lean_object* v_toPure_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; 
v_toApplicative_1998_ = lean_ctor_get(v_inst_1990_, 0);
v_toBind_1999_ = lean_ctor_get(v_inst_1990_, 1);
lean_inc_n(v_toBind_1999_, 2);
v_getEnv_2000_ = lean_ctor_get(v_inst_1992_, 0);
lean_inc_n(v_getEnv_2000_, 2);
v_toPure_2001_ = lean_ctor_get(v_toApplicative_1998_, 1);
lean_inc(v_toPure_2001_);
v___f_2002_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2003_ = lean_box(v_enableLog_1997_);
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2004_, 0, v_inst_1991_);
lean_closure_set(v___f_2004_, 1, v_id_1996_);
lean_closure_set(v___f_2004_, 2, v_toPure_2001_);
lean_closure_set(v___f_2004_, 3, v___x_2003_);
lean_closure_set(v___f_2004_, 4, v___f_2002_);
lean_closure_set(v___f_2004_, 5, v_inst_1990_);
lean_closure_set(v___f_2004_, 6, v_inst_1992_);
lean_closure_set(v___f_2004_, 7, v_inst_1993_);
lean_closure_set(v___f_2004_, 8, v_inst_1994_);
lean_closure_set(v___f_2004_, 9, v_inst_1995_);
lean_closure_set(v___f_2004_, 10, v_toBind_1999_);
lean_closure_set(v___f_2004_, 11, v_getEnv_2000_);
v___x_2005_ = lean_apply_4(v_toBind_1999_, lean_box(0), lean_box(0), v_getEnv_2000_, v___f_2004_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2006_, lean_object* v_inst_2007_, lean_object* v_inst_2008_, lean_object* v_inst_2009_, lean_object* v_inst_2010_, lean_object* v_inst_2011_, lean_object* v_id_2012_, lean_object* v_enableLog_2013_){
_start:
{
uint8_t v_enableLog_boxed_2014_; lean_object* v_res_2015_; 
v_enableLog_boxed_2014_ = lean_unbox(v_enableLog_2013_);
v_res_2015_ = l_Lean_resolveGlobalName___redArg(v_inst_2006_, v_inst_2007_, v_inst_2008_, v_inst_2009_, v_inst_2010_, v_inst_2011_, v_id_2012_, v_enableLog_boxed_2014_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2016_, lean_object* v_inst_2017_, lean_object* v_inst_2018_, lean_object* v_inst_2019_, lean_object* v_inst_2020_, lean_object* v_inst_2021_, lean_object* v_inst_2022_, lean_object* v_id_2023_, uint8_t v_enableLog_2024_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_resolveGlobalName___redArg(v_inst_2017_, v_inst_2018_, v_inst_2019_, v_inst_2020_, v_inst_2021_, v_inst_2022_, v_id_2023_, v_enableLog_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2026_, lean_object* v_inst_2027_, lean_object* v_inst_2028_, lean_object* v_inst_2029_, lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_inst_2032_, lean_object* v_id_2033_, lean_object* v_enableLog_2034_){
_start:
{
uint8_t v_enableLog_boxed_2035_; lean_object* v_res_2036_; 
v_enableLog_boxed_2035_ = lean_unbox(v_enableLog_2034_);
v_res_2036_ = l_Lean_resolveGlobalName(v_m_2026_, v_inst_2027_, v_inst_2028_, v_inst_2029_, v_inst_2030_, v_inst_2031_, v_inst_2032_, v_id_2033_, v_enableLog_boxed_2035_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2037_, lean_object* v_nss_2038_, lean_object* v_____r_2039_){
_start:
{
lean_object* v___x_2040_; 
v___x_2040_ = lean_apply_2(v_toPure_2037_, lean_box(0), v_nss_2038_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2043_, lean_object* v_____do__lift_2044_, lean_object* v_id_2045_, uint8_t v_allowEmpty_2046_, lean_object* v_toPure_2047_, lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_toBind_2050_, lean_object* v_____do__lift_2051_){
_start:
{
lean_object* v_nss_2052_; 
lean_inc(v_id_2045_);
v_nss_2052_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2043_, v_____do__lift_2044_, v_____do__lift_2051_, v_id_2045_);
if (v_allowEmpty_2046_ == 0)
{
uint8_t v___x_2053_; 
v___x_2053_ = l_List_isEmpty___redArg(v_nss_2052_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; 
lean_dec(v_toBind_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v_inst_2048_);
lean_dec(v_id_2045_);
v___x_2054_ = lean_apply_2(v_toPure_2047_, lean_box(0), v_nss_2052_);
return v___x_2054_;
}
else
{
lean_object* v___f_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___f_2055_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2055_, 0, v_toPure_2047_);
lean_closure_set(v___f_2055_, 1, v_nss_2052_);
v___x_2056_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2057_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2045_, v___x_2053_);
v___x_2058_ = lean_string_append(v___x_2056_, v___x_2057_);
lean_dec_ref(v___x_2057_);
v___x_2059_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2060_ = lean_string_append(v___x_2058_, v___x_2059_);
v___x_2061_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
v___x_2062_ = l_Lean_MessageData_ofFormat(v___x_2061_);
v___x_2063_ = l_Lean_throwError___redArg(v_inst_2048_, v_inst_2049_, v___x_2062_);
v___x_2064_ = lean_apply_4(v_toBind_2050_, lean_box(0), lean_box(0), v___x_2063_, v___f_2055_);
return v___x_2064_;
}
}
else
{
lean_object* v___x_2065_; 
lean_dec(v_toBind_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v_inst_2048_);
lean_dec(v_id_2045_);
v___x_2065_ = lean_apply_2(v_toPure_2047_, lean_box(0), v_nss_2052_);
return v___x_2065_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2066_, lean_object* v_____do__lift_2067_, lean_object* v_id_2068_, lean_object* v_allowEmpty_2069_, lean_object* v_toPure_2070_, lean_object* v_inst_2071_, lean_object* v_inst_2072_, lean_object* v_toBind_2073_, lean_object* v_____do__lift_2074_){
_start:
{
uint8_t v_allowEmpty_boxed_2075_; lean_object* v_res_2076_; 
v_allowEmpty_boxed_2075_ = lean_unbox(v_allowEmpty_2069_);
v_res_2076_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2066_, v_____do__lift_2067_, v_id_2068_, v_allowEmpty_boxed_2075_, v_toPure_2070_, v_inst_2071_, v_inst_2072_, v_toBind_2073_, v_____do__lift_2074_);
return v_res_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2077_, lean_object* v_id_2078_, uint8_t v_allowEmpty_2079_, lean_object* v_toPure_2080_, lean_object* v_inst_2081_, lean_object* v_inst_2082_, lean_object* v_toBind_2083_, lean_object* v_getOpenDecls_2084_, lean_object* v_____do__lift_2085_){
_start:
{
lean_object* v___x_2086_; lean_object* v___f_2087_; lean_object* v___x_2088_; 
v___x_2086_ = lean_box(v_allowEmpty_2079_);
lean_inc(v_toBind_2083_);
v___f_2087_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2087_, 0, v_____do__lift_2077_);
lean_closure_set(v___f_2087_, 1, v_____do__lift_2085_);
lean_closure_set(v___f_2087_, 2, v_id_2078_);
lean_closure_set(v___f_2087_, 3, v___x_2086_);
lean_closure_set(v___f_2087_, 4, v_toPure_2080_);
lean_closure_set(v___f_2087_, 5, v_inst_2081_);
lean_closure_set(v___f_2087_, 6, v_inst_2082_);
lean_closure_set(v___f_2087_, 7, v_toBind_2083_);
v___x_2088_ = lean_apply_4(v_toBind_2083_, lean_box(0), lean_box(0), v_getOpenDecls_2084_, v___f_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2089_, lean_object* v_id_2090_, lean_object* v_allowEmpty_2091_, lean_object* v_toPure_2092_, lean_object* v_inst_2093_, lean_object* v_inst_2094_, lean_object* v_toBind_2095_, lean_object* v_getOpenDecls_2096_, lean_object* v_____do__lift_2097_){
_start:
{
uint8_t v_allowEmpty_boxed_2098_; lean_object* v_res_2099_; 
v_allowEmpty_boxed_2098_ = lean_unbox(v_allowEmpty_2091_);
v_res_2099_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2089_, v_id_2090_, v_allowEmpty_boxed_2098_, v_toPure_2092_, v_inst_2093_, v_inst_2094_, v_toBind_2095_, v_getOpenDecls_2096_, v_____do__lift_2097_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2100_, lean_object* v_id_2101_, uint8_t v_allowEmpty_2102_, lean_object* v_toPure_2103_, lean_object* v_inst_2104_, lean_object* v_inst_2105_, lean_object* v_toBind_2106_, lean_object* v_____do__lift_2107_){
_start:
{
lean_object* v_getCurrNamespace_2108_; lean_object* v_getOpenDecls_2109_; lean_object* v___x_2110_; lean_object* v___f_2111_; lean_object* v___x_2112_; 
v_getCurrNamespace_2108_ = lean_ctor_get(v_inst_2100_, 0);
lean_inc(v_getCurrNamespace_2108_);
v_getOpenDecls_2109_ = lean_ctor_get(v_inst_2100_, 1);
lean_inc(v_getOpenDecls_2109_);
lean_dec_ref(v_inst_2100_);
v___x_2110_ = lean_box(v_allowEmpty_2102_);
lean_inc(v_toBind_2106_);
v___f_2111_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2111_, 0, v_____do__lift_2107_);
lean_closure_set(v___f_2111_, 1, v_id_2101_);
lean_closure_set(v___f_2111_, 2, v___x_2110_);
lean_closure_set(v___f_2111_, 3, v_toPure_2103_);
lean_closure_set(v___f_2111_, 4, v_inst_2104_);
lean_closure_set(v___f_2111_, 5, v_inst_2105_);
lean_closure_set(v___f_2111_, 6, v_toBind_2106_);
lean_closure_set(v___f_2111_, 7, v_getOpenDecls_2109_);
v___x_2112_ = lean_apply_4(v_toBind_2106_, lean_box(0), lean_box(0), v_getCurrNamespace_2108_, v___f_2111_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2113_, lean_object* v_id_2114_, lean_object* v_allowEmpty_2115_, lean_object* v_toPure_2116_, lean_object* v_inst_2117_, lean_object* v_inst_2118_, lean_object* v_toBind_2119_, lean_object* v_____do__lift_2120_){
_start:
{
uint8_t v_allowEmpty_boxed_2121_; lean_object* v_res_2122_; 
v_allowEmpty_boxed_2121_ = lean_unbox(v_allowEmpty_2115_);
v_res_2122_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2113_, v_id_2114_, v_allowEmpty_boxed_2121_, v_toPure_2116_, v_inst_2117_, v_inst_2118_, v_toBind_2119_, v_____do__lift_2120_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_inst_2126_, lean_object* v_id_2127_, uint8_t v_allowEmpty_2128_){
_start:
{
lean_object* v_toApplicative_2129_; lean_object* v_toBind_2130_; lean_object* v_getEnv_2131_; lean_object* v_toPure_2132_; lean_object* v___x_2133_; lean_object* v___f_2134_; lean_object* v___x_2135_; 
v_toApplicative_2129_ = lean_ctor_get(v_inst_2123_, 0);
v_toBind_2130_ = lean_ctor_get(v_inst_2123_, 1);
lean_inc_n(v_toBind_2130_, 2);
v_getEnv_2131_ = lean_ctor_get(v_inst_2125_, 0);
lean_inc(v_getEnv_2131_);
lean_dec_ref(v_inst_2125_);
v_toPure_2132_ = lean_ctor_get(v_toApplicative_2129_, 1);
lean_inc(v_toPure_2132_);
v___x_2133_ = lean_box(v_allowEmpty_2128_);
v___f_2134_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2134_, 0, v_inst_2124_);
lean_closure_set(v___f_2134_, 1, v_id_2127_);
lean_closure_set(v___f_2134_, 2, v___x_2133_);
lean_closure_set(v___f_2134_, 3, v_toPure_2132_);
lean_closure_set(v___f_2134_, 4, v_inst_2123_);
lean_closure_set(v___f_2134_, 5, v_inst_2126_);
lean_closure_set(v___f_2134_, 6, v_toBind_2130_);
v___x_2135_ = lean_apply_4(v_toBind_2130_, lean_box(0), lean_box(0), v_getEnv_2131_, v___f_2134_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2136_, lean_object* v_inst_2137_, lean_object* v_inst_2138_, lean_object* v_inst_2139_, lean_object* v_id_2140_, lean_object* v_allowEmpty_2141_){
_start:
{
uint8_t v_allowEmpty_boxed_2142_; lean_object* v_res_2143_; 
v_allowEmpty_boxed_2142_ = lean_unbox(v_allowEmpty_2141_);
v_res_2143_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2136_, v_inst_2137_, v_inst_2138_, v_inst_2139_, v_id_2140_, v_allowEmpty_boxed_2142_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2144_, lean_object* v_inst_2145_, lean_object* v_inst_2146_, lean_object* v_inst_2147_, lean_object* v_inst_2148_, lean_object* v_id_2149_, uint8_t v_allowEmpty_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2145_, v_inst_2146_, v_inst_2147_, v_inst_2148_, v_id_2149_, v_allowEmpty_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_id_2157_, lean_object* v_allowEmpty_2158_){
_start:
{
uint8_t v_allowEmpty_boxed_2159_; lean_object* v_res_2160_; 
v_allowEmpty_boxed_2159_ = lean_unbox(v_allowEmpty_2158_);
v_res_2160_ = l_Lean_resolveNamespaceCore(v_m_2152_, v_inst_2153_, v_inst_2154_, v_inst_2155_, v_inst_2156_, v_id_2157_, v_allowEmpty_boxed_2159_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2161_){
_start:
{
if (lean_obj_tag(v_x_2161_) == 0)
{
lean_object* v_ns_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_ns_2162_ = lean_ctor_get(v_x_2161_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v_x_2161_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v_x_2161_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_ns_2162_);
lean_dec(v_x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set_tag(v___x_2164_, 1);
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_ns_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
else
{
lean_object* v___x_2170_; 
lean_dec_ref(v_x_2161_);
v___x_2170_ = lean_box(0);
return v___x_2170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2171_, lean_object* v_withRef_2172_, lean_object* v___x_2173_, lean_object* v_oldRef_2174_){
_start:
{
lean_object* v_ref_2175_; lean_object* v___x_2176_; 
v_ref_2175_ = l_Lean_replaceRef(v_x_2171_, v_oldRef_2174_);
v___x_2176_ = lean_apply_3(v_withRef_2172_, lean_box(0), v_ref_2175_, v___x_2173_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2177_, lean_object* v_withRef_2178_, lean_object* v___x_2179_, lean_object* v_oldRef_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2177_, v_withRef_2178_, v___x_2179_, v_oldRef_2180_);
lean_dec(v_oldRef_2180_);
lean_dec(v_x_2177_);
return v_res_2181_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2189_ = l_Lean_MessageData_ofFormat(v___x_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2190_, lean_object* v_inst_2191_, lean_object* v_inst_2192_, lean_object* v_inst_2193_, lean_object* v_x_2194_){
_start:
{
if (lean_obj_tag(v_x_2194_) == 3)
{
lean_object* v_toApplicative_2195_; lean_object* v_toBind_2196_; lean_object* v_toPure_2197_; lean_object* v_toMonadRef_2198_; lean_object* v_val_2199_; lean_object* v_preresolved_2200_; lean_object* v___f_2201_; lean_object* v___x_2202_; lean_object* v_pre_2203_; uint8_t v___x_2204_; 
v_toApplicative_2195_ = lean_ctor_get(v_inst_2190_, 0);
v_toBind_2196_ = lean_ctor_get(v_inst_2190_, 1);
lean_inc(v_toBind_2196_);
v_toPure_2197_ = lean_ctor_get(v_toApplicative_2195_, 1);
v_toMonadRef_2198_ = lean_ctor_get(v_inst_2193_, 1);
v_val_2199_ = lean_ctor_get(v_x_2194_, 2);
v_preresolved_2200_ = lean_ctor_get(v_x_2194_, 3);
v___f_2201_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2202_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2200_);
v_pre_2203_ = l_List_filterMapTR_go___redArg(v___f_2201_, v_preresolved_2200_, v___x_2202_);
v___x_2204_ = l_List_isEmpty___redArg(v_pre_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
lean_inc(v_toPure_2197_);
lean_dec(v_toBind_2196_);
lean_dec_ref_known(v_x_2194_, 4);
lean_dec_ref(v_inst_2193_);
lean_dec_ref(v_inst_2192_);
lean_dec_ref(v_inst_2191_);
lean_dec_ref(v_inst_2190_);
v___x_2205_ = lean_apply_2(v_toPure_2197_, lean_box(0), v_pre_2203_);
return v___x_2205_;
}
else
{
lean_object* v_getRef_2206_; lean_object* v_withRef_2207_; uint8_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; 
lean_dec(v_pre_2203_);
v_getRef_2206_ = lean_ctor_get(v_toMonadRef_2198_, 0);
lean_inc(v_getRef_2206_);
v_withRef_2207_ = lean_ctor_get(v_toMonadRef_2198_, 1);
lean_inc(v_withRef_2207_);
v___x_2208_ = 0;
lean_inc(v_val_2199_);
v___x_2209_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2190_, v_inst_2191_, v_inst_2192_, v_inst_2193_, v_val_2199_, v___x_2208_);
v___f_2210_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2210_, 0, v_x_2194_);
lean_closure_set(v___f_2210_, 1, v_withRef_2207_);
lean_closure_set(v___f_2210_, 2, v___x_2209_);
v___x_2211_ = lean_apply_4(v_toBind_2196_, lean_box(0), lean_box(0), v_getRef_2206_, v___f_2210_);
return v___x_2211_;
}
}
else
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_dec_ref(v_inst_2192_);
lean_dec_ref(v_inst_2191_);
v___x_2212_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2213_ = l_Lean_throwErrorAt___redArg(v_inst_2190_, v_inst_2193_, v_x_2194_, v___x_2212_);
return v___x_2213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2214_, lean_object* v_inst_2215_, lean_object* v_inst_2216_, lean_object* v_inst_2217_, lean_object* v_inst_2218_, lean_object* v_x_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lean_resolveNamespace___redArg(v_inst_2215_, v_inst_2216_, v_inst_2217_, v_inst_2218_, v_x_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2223_, lean_object* v___f_2224_, lean_object* v_inst_2225_, lean_object* v_inst_2226_, lean_object* v_toPure_2227_, lean_object* v_____do__lift_2228_){
_start:
{
if (lean_obj_tag(v_____do__lift_2228_) == 1)
{
lean_object* v_tail_2244_; 
v_tail_2244_ = lean_ctor_get(v_____do__lift_2228_, 1);
if (lean_obj_tag(v_tail_2244_) == 0)
{
lean_object* v_head_2245_; lean_object* v___x_2246_; 
lean_dec_ref(v_inst_2226_);
lean_dec_ref(v_inst_2225_);
lean_dec_ref(v___f_2224_);
v_head_2245_ = lean_ctor_get(v_____do__lift_2228_, 0);
lean_inc(v_head_2245_);
lean_dec_ref_known(v_____do__lift_2228_, 2);
v___x_2246_ = lean_apply_2(v_toPure_2227_, lean_box(0), v_head_2245_);
return v___x_2246_;
}
else
{
lean_dec(v_toPure_2227_);
goto v___jp_2229_;
}
}
else
{
lean_dec(v_toPure_2227_);
goto v___jp_2229_;
}
v___jp_2229_:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; uint8_t v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2230_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2231_ = l_Lean_TSyntax_getId(v_id_2223_);
v___x_2232_ = 1;
v___x_2233_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2231_, v___x_2232_);
v___x_2234_ = lean_string_append(v___x_2230_, v___x_2233_);
lean_dec_ref(v___x_2233_);
v___x_2235_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2236_ = lean_string_append(v___x_2234_, v___x_2235_);
v___x_2237_ = l_List_toString___redArg(v___f_2224_, v_____do__lift_2228_);
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
lean_dec_ref(v___x_2237_);
v___x_2239_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2240_ = lean_string_append(v___x_2238_, v___x_2239_);
v___x_2241_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
v___x_2242_ = l_Lean_MessageData_ofFormat(v___x_2241_);
v___x_2243_ = l_Lean_throwError___redArg(v_inst_2225_, v_inst_2226_, v___x_2242_);
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2247_, lean_object* v___f_2248_, lean_object* v_inst_2249_, lean_object* v_inst_2250_, lean_object* v_toPure_2251_, lean_object* v_____do__lift_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2247_, v___f_2248_, v_inst_2249_, v_inst_2250_, v_toPure_2251_, v_____do__lift_2252_);
lean_dec(v_id_2247_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2255_, lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_inst_2258_, lean_object* v_id_2259_){
_start:
{
lean_object* v_toApplicative_2260_; lean_object* v_toBind_2261_; lean_object* v_toPure_2262_; lean_object* v___f_2263_; lean_object* v___x_2264_; lean_object* v___f_2265_; lean_object* v___x_2266_; 
v_toApplicative_2260_ = lean_ctor_get(v_inst_2255_, 0);
v_toBind_2261_ = lean_ctor_get(v_inst_2255_, 1);
lean_inc(v_toBind_2261_);
v_toPure_2262_ = lean_ctor_get(v_toApplicative_2260_, 1);
lean_inc(v_toPure_2262_);
v___f_2263_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2259_);
lean_inc_ref(v_inst_2258_);
lean_inc_ref(v_inst_2255_);
v___x_2264_ = l_Lean_resolveNamespace___redArg(v_inst_2255_, v_inst_2256_, v_inst_2257_, v_inst_2258_, v_id_2259_);
v___f_2265_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2265_, 0, v_id_2259_);
lean_closure_set(v___f_2265_, 1, v___f_2263_);
lean_closure_set(v___f_2265_, 2, v_inst_2255_);
lean_closure_set(v___f_2265_, 3, v_inst_2258_);
lean_closure_set(v___f_2265_, 4, v_toPure_2262_);
v___x_2266_ = lean_apply_4(v_toBind_2261_, lean_box(0), lean_box(0), v___x_2264_, v___f_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2267_, lean_object* v_inst_2268_, lean_object* v_inst_2269_, lean_object* v_inst_2270_, lean_object* v_inst_2271_, lean_object* v_id_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2268_, v_inst_2269_, v_inst_2270_, v_inst_2271_, v_id_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2274_){
_start:
{
lean_object* v_snd_2275_; uint8_t v___x_2276_; 
v_snd_2275_ = lean_ctor_get(v_x_2274_, 1);
v___x_2276_ = l_List_isEmpty___redArg(v_snd_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2277_){
_start:
{
uint8_t v_res_2278_; lean_object* v_r_2279_; 
v_res_2278_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2277_);
lean_dec_ref(v_x_2277_);
v_r_2279_ = lean_box(v_res_2278_);
return v_r_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2280_){
_start:
{
lean_object* v_fst_2281_; 
v_fst_2281_ = lean_ctor_get(v_x_2280_, 0);
lean_inc(v_fst_2281_);
return v_fst_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2282_);
lean_dec_ref(v_x_2282_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2284_, lean_object* v_cs_2285_, lean_object* v_toPure_2286_, lean_object* v_____r_2287_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2288_ = lean_box(0);
v___x_2289_ = l_List_mapTR_loop___redArg(v___f_2284_, v_cs_2285_, v___x_2288_);
v___x_2290_ = lean_apply_2(v_toPure_2286_, lean_box(0), v___x_2289_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2291_, lean_object* v_____r_2292_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_apply_1(v___f_2291_, v_____r_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2294_, lean_object* v_inst_2295_, lean_object* v_inst_2296_, lean_object* v_n_2297_, lean_object* v_toBind_2298_, lean_object* v___f_2299_, lean_object* v_____do__lift_2300_){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2294_, v_inst_2295_, v_inst_2296_, v_____do__lift_2300_, v_n_2297_);
v___x_2302_ = lean_apply_4(v_toBind_2298_, lean_box(0), lean_box(0), v___x_2301_, v___f_2299_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2305_, lean_object* v_inst_2306_, lean_object* v_inst_2307_, lean_object* v_n_2308_, lean_object* v_cs_2309_){
_start:
{
lean_object* v_toApplicative_2310_; lean_object* v_toBind_2311_; lean_object* v_toPure_2312_; lean_object* v_toMonadRef_2313_; lean_object* v___f_2314_; lean_object* v___f_2315_; lean_object* v___x_2316_; lean_object* v_cs_2317_; lean_object* v___f_2318_; uint8_t v___x_2319_; 
v_toApplicative_2310_ = lean_ctor_get(v_inst_2305_, 0);
v_toBind_2311_ = lean_ctor_get(v_inst_2305_, 1);
lean_inc(v_toBind_2311_);
v_toPure_2312_ = lean_ctor_get(v_toApplicative_2310_, 1);
v_toMonadRef_2313_ = lean_ctor_get(v_inst_2307_, 1);
v___f_2314_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2315_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2316_ = lean_box(0);
v_cs_2317_ = l_List_filterTR_loop___redArg(v___f_2314_, v_cs_2309_, v___x_2316_);
lean_inc(v_toPure_2312_);
lean_inc(v_cs_2317_);
v___f_2318_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2318_, 0, v___f_2315_);
lean_closure_set(v___f_2318_, 1, v_cs_2317_);
lean_closure_set(v___f_2318_, 2, v_toPure_2312_);
v___x_2319_ = l_List_isEmpty___redArg(v_cs_2317_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
lean_inc(v_toPure_2312_);
lean_dec_ref(v___f_2318_);
lean_dec(v_toBind_2311_);
lean_dec(v_n_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec_ref(v_inst_2306_);
lean_dec_ref(v_inst_2305_);
v___x_2320_ = lean_box(0);
v___x_2321_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2315_, v_cs_2317_, v_toPure_2312_, v___x_2320_);
return v___x_2321_;
}
else
{
lean_object* v_getRef_2322_; lean_object* v___f_2323_; lean_object* v___f_2324_; lean_object* v___x_2325_; 
lean_dec(v_cs_2317_);
v_getRef_2322_ = lean_ctor_get(v_toMonadRef_2313_, 0);
lean_inc(v_getRef_2322_);
v___f_2323_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2323_, 0, v___f_2318_);
lean_inc(v_toBind_2311_);
v___f_2324_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2324_, 0, v_inst_2305_);
lean_closure_set(v___f_2324_, 1, v_inst_2306_);
lean_closure_set(v___f_2324_, 2, v_inst_2307_);
lean_closure_set(v___f_2324_, 3, v_n_2308_);
lean_closure_set(v___f_2324_, 4, v_toBind_2311_);
lean_closure_set(v___f_2324_, 5, v___f_2323_);
v___x_2325_ = lean_apply_4(v_toBind_2311_, lean_box(0), lean_box(0), v_getRef_2322_, v___f_2324_);
return v___x_2325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2326_, lean_object* v_inst_2327_, lean_object* v_inst_2328_, lean_object* v_inst_2329_, lean_object* v_n_2330_, lean_object* v_cs_2331_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l_Lean_filterFieldList___redArg(v_inst_2327_, v_inst_2328_, v_inst_2329_, v_n_2330_, v_cs_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2333_, lean_object* v_inst_2334_, lean_object* v_inst_2335_, lean_object* v_n_2336_, lean_object* v_cs_2337_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_filterFieldList___redArg(v_inst_2333_, v_inst_2334_, v_inst_2335_, v_n_2336_, v_cs_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2339_, lean_object* v_inst_2340_, lean_object* v_inst_2341_, lean_object* v_inst_2342_, lean_object* v_inst_2343_, lean_object* v_inst_2344_, lean_object* v_inst_2345_, lean_object* v_n_2346_){
_start:
{
lean_object* v_toBind_2347_; lean_object* v___f_2348_; uint8_t v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v_toBind_2347_ = lean_ctor_get(v_inst_2339_, 1);
lean_inc(v_toBind_2347_);
lean_inc(v_n_2346_);
lean_inc_ref(v_inst_2341_);
lean_inc_ref(v_inst_2339_);
v___f_2348_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2348_, 0, v_inst_2339_);
lean_closure_set(v___f_2348_, 1, v_inst_2341_);
lean_closure_set(v___f_2348_, 2, v_inst_2345_);
lean_closure_set(v___f_2348_, 3, v_n_2346_);
v___x_2349_ = 1;
v___x_2350_ = l_Lean_resolveGlobalName___redArg(v_inst_2339_, v_inst_2340_, v_inst_2341_, v_inst_2342_, v_inst_2343_, v_inst_2344_, v_n_2346_, v___x_2349_);
v___x_2351_ = lean_apply_4(v_toBind_2347_, lean_box(0), lean_box(0), v___x_2350_, v___f_2348_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2352_, lean_object* v_inst_2353_, lean_object* v_inst_2354_, lean_object* v_inst_2355_, lean_object* v_inst_2356_, lean_object* v_inst_2357_, lean_object* v_inst_2358_, lean_object* v_inst_2359_, lean_object* v_n_2360_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2353_, v_inst_2354_, v_inst_2355_, v_inst_2356_, v_inst_2357_, v_inst_2358_, v_inst_2359_, v_n_2360_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2362_){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_box(0);
v___x_2364_ = l_Lean_mkConst(v_declName_2362_, v___x_2363_);
return v___x_2364_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2368_ = l_Lean_stringToMessageData(v___x_2367_);
return v___x_2368_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2371_ = l_Lean_stringToMessageData(v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_n_2375_, lean_object* v_cs_2376_){
_start:
{
lean_object* v_toApplicative_2377_; lean_object* v_toPure_2378_; lean_object* v___f_2379_; 
v_toApplicative_2377_ = lean_ctor_get(v_inst_2373_, 0);
v_toPure_2378_ = lean_ctor_get(v_toApplicative_2377_, 1);
v___f_2379_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2376_) == 1)
{
lean_object* v_tail_2393_; 
v_tail_2393_ = lean_ctor_get(v_cs_2376_, 1);
if (lean_obj_tag(v_tail_2393_) == 0)
{
lean_object* v_head_2394_; lean_object* v___x_2395_; 
lean_inc(v_toPure_2378_);
lean_dec(v_n_2375_);
lean_dec_ref(v_inst_2374_);
lean_dec_ref(v_inst_2373_);
v_head_2394_ = lean_ctor_get(v_cs_2376_, 0);
lean_inc(v_head_2394_);
lean_dec_ref_known(v_cs_2376_, 2);
v___x_2395_ = lean_apply_2(v_toPure_2378_, lean_box(0), v_head_2394_);
return v___x_2395_;
}
else
{
goto v___jp_2380_;
}
}
else
{
goto v___jp_2380_;
}
v___jp_2380_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2381_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2382_ = l_Lean_MessageData_ofName(v_n_2375_);
v___x_2383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2381_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
v___x_2384_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2383_);
lean_ctor_set(v___x_2385_, 1, v___x_2384_);
v___x_2386_ = lean_box(0);
v___x_2387_ = l_List_mapTR_loop___redArg(v___f_2379_, v_cs_2376_, v___x_2386_);
v___x_2388_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2389_ = l_List_mapTR_loop___redArg(v___x_2388_, v___x_2387_, v___x_2386_);
v___x_2390_ = l_Lean_MessageData_ofList(v___x_2389_);
v___x_2391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2385_);
lean_ctor_set(v___x_2391_, 1, v___x_2390_);
v___x_2392_ = l_Lean_throwError___redArg(v_inst_2373_, v_inst_2374_, v___x_2391_);
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2396_, lean_object* v_inst_2397_, lean_object* v_inst_2398_, lean_object* v_n_2399_, lean_object* v_cs_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Lean_ensureNoOverload___redArg(v_inst_2397_, v_inst_2398_, v_n_2399_, v_cs_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2402_, lean_object* v_inst_2403_, lean_object* v_n_2404_, lean_object* v_____do__lift_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Lean_ensureNoOverload___redArg(v_inst_2402_, v_inst_2403_, v_n_2404_, v_____do__lift_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2407_, lean_object* v_inst_2408_, lean_object* v_inst_2409_, lean_object* v_inst_2410_, lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_n_2414_){
_start:
{
lean_object* v_toBind_2415_; lean_object* v___f_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v_toBind_2415_ = lean_ctor_get(v_inst_2407_, 1);
lean_inc(v_toBind_2415_);
lean_inc(v_n_2414_);
lean_inc_ref(v_inst_2413_);
lean_inc_ref(v_inst_2407_);
v___f_2416_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2416_, 0, v_inst_2407_);
lean_closure_set(v___f_2416_, 1, v_inst_2413_);
lean_closure_set(v___f_2416_, 2, v_n_2414_);
v___x_2417_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2407_, v_inst_2408_, v_inst_2409_, v_inst_2410_, v_inst_2411_, v_inst_2412_, v_inst_2413_, v_n_2414_);
v___x_2418_ = lean_apply_4(v_toBind_2415_, lean_box(0), lean_box(0), v___x_2417_, v___f_2416_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2419_, lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_inst_2422_, lean_object* v_inst_2423_, lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_n_2427_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2420_, v_inst_2421_, v_inst_2422_, v_inst_2423_, v_inst_2424_, v_inst_2425_, v_inst_2426_, v_n_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2429_){
_start:
{
if (lean_obj_tag(v_x_2429_) == 1)
{
lean_object* v_fields_2430_; 
v_fields_2430_ = lean_ctor_get(v_x_2429_, 1);
if (lean_obj_tag(v_fields_2430_) == 0)
{
lean_object* v_n_2431_; lean_object* v___x_2432_; 
v_n_2431_ = lean_ctor_get(v_x_2429_, 0);
lean_inc(v_n_2431_);
v___x_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2432_, 0, v_n_2431_);
return v___x_2432_;
}
else
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_box(0);
return v___x_2433_;
}
}
else
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_box(0);
return v___x_2434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2435_);
lean_dec_ref(v_x_2435_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2437_, lean_object* v_withRef_2438_, lean_object* v___x_2439_, lean_object* v_oldRef_2440_){
_start:
{
lean_object* v_ref_2441_; lean_object* v___x_2442_; 
v_ref_2441_ = l_Lean_replaceRef(v_stx_2437_, v_oldRef_2440_);
v___x_2442_ = lean_apply_3(v_withRef_2438_, lean_box(0), v_ref_2441_, v___x_2439_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2443_, lean_object* v_withRef_2444_, lean_object* v___x_2445_, lean_object* v_oldRef_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2443_, v_withRef_2444_, v___x_2445_, v_oldRef_2446_);
lean_dec(v_oldRef_2446_);
lean_dec(v_stx_2443_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2449_, lean_object* v_inst_2450_, lean_object* v_stx_2451_, lean_object* v_k_2452_){
_start:
{
if (lean_obj_tag(v_stx_2451_) == 3)
{
lean_object* v_toApplicative_2453_; lean_object* v_toBind_2454_; lean_object* v_toPure_2455_; lean_object* v_toMonadRef_2456_; lean_object* v_val_2457_; lean_object* v_preresolved_2458_; lean_object* v___f_2459_; lean_object* v___x_2460_; lean_object* v_pre_2461_; uint8_t v___x_2462_; 
v_toApplicative_2453_ = lean_ctor_get(v_inst_2449_, 0);
lean_inc_ref(v_toApplicative_2453_);
v_toBind_2454_ = lean_ctor_get(v_inst_2449_, 1);
lean_inc(v_toBind_2454_);
lean_dec_ref(v_inst_2449_);
v_toPure_2455_ = lean_ctor_get(v_toApplicative_2453_, 1);
lean_inc(v_toPure_2455_);
lean_dec_ref(v_toApplicative_2453_);
v_toMonadRef_2456_ = lean_ctor_get(v_inst_2450_, 1);
lean_inc_ref(v_toMonadRef_2456_);
lean_dec_ref(v_inst_2450_);
v_val_2457_ = lean_ctor_get(v_stx_2451_, 2);
v_preresolved_2458_ = lean_ctor_get(v_stx_2451_, 3);
v___f_2459_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2460_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2458_);
v_pre_2461_ = l_List_filterMapTR_go___redArg(v___f_2459_, v_preresolved_2458_, v___x_2460_);
v___x_2462_ = l_List_isEmpty___redArg(v_pre_2461_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; 
lean_dec_ref(v_toMonadRef_2456_);
lean_dec(v_toBind_2454_);
lean_dec_ref_known(v_stx_2451_, 4);
lean_dec(v_k_2452_);
v___x_2463_ = lean_apply_2(v_toPure_2455_, lean_box(0), v_pre_2461_);
return v___x_2463_;
}
else
{
lean_object* v_getRef_2464_; lean_object* v_withRef_2465_; lean_object* v___x_2466_; lean_object* v___f_2467_; lean_object* v___x_2468_; 
lean_dec(v_pre_2461_);
lean_dec(v_toPure_2455_);
v_getRef_2464_ = lean_ctor_get(v_toMonadRef_2456_, 0);
lean_inc(v_getRef_2464_);
v_withRef_2465_ = lean_ctor_get(v_toMonadRef_2456_, 1);
lean_inc(v_withRef_2465_);
lean_dec_ref(v_toMonadRef_2456_);
lean_inc(v_val_2457_);
v___x_2466_ = lean_apply_1(v_k_2452_, v_val_2457_);
v___f_2467_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2467_, 0, v_stx_2451_);
lean_closure_set(v___f_2467_, 1, v_withRef_2465_);
lean_closure_set(v___f_2467_, 2, v___x_2466_);
v___x_2468_ = lean_apply_4(v_toBind_2454_, lean_box(0), lean_box(0), v_getRef_2464_, v___f_2467_);
return v___x_2468_;
}
}
else
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
lean_dec(v_k_2452_);
v___x_2469_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2470_ = l_Lean_throwErrorAt___redArg(v_inst_2449_, v_inst_2450_, v_stx_2451_, v___x_2469_);
return v___x_2470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2471_, lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_stx_2474_, lean_object* v_k_2475_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2472_, v_inst_2473_, v_stx_2474_, v_k_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2477_, lean_object* v_inst_2478_, lean_object* v_inst_2479_, lean_object* v_inst_2480_, lean_object* v_inst_2481_, lean_object* v_inst_2482_, lean_object* v_inst_2483_, lean_object* v_stx_2484_){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
lean_inc_ref(v_inst_2483_);
lean_inc_ref(v_inst_2477_);
v___x_2485_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2485_, 0, lean_box(0));
lean_closure_set(v___x_2485_, 1, v_inst_2477_);
lean_closure_set(v___x_2485_, 2, v_inst_2478_);
lean_closure_set(v___x_2485_, 3, v_inst_2479_);
lean_closure_set(v___x_2485_, 4, v_inst_2480_);
lean_closure_set(v___x_2485_, 5, v_inst_2481_);
lean_closure_set(v___x_2485_, 6, v_inst_2482_);
lean_closure_set(v___x_2485_, 7, v_inst_2483_);
v___x_2486_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2477_, v_inst_2483_, v_stx_2484_, v___x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2487_, lean_object* v_inst_2488_, lean_object* v_inst_2489_, lean_object* v_inst_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_inst_2494_, lean_object* v_stx_2495_){
_start:
{
lean_object* v___x_2496_; 
v___x_2496_ = l_Lean_resolveGlobalConst___redArg(v_inst_2488_, v_inst_2489_, v_inst_2490_, v_inst_2491_, v_inst_2492_, v_inst_2493_, v_inst_2494_, v_stx_2495_);
return v___x_2496_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2498_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2499_ = lean_unsigned_to_nat(11u);
v___x_2500_ = lean_unsigned_to_nat(429u);
v___x_2501_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2502_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2503_ = l_mkPanicMessageWithDecl(v___x_2502_, v___x_2501_, v___x_2500_, v___x_2499_, v___x_2498_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2507_, lean_object* v_inst_2508_, lean_object* v_id_2509_, lean_object* v_cs_2510_){
_start:
{
if (lean_obj_tag(v_cs_2510_) == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
lean_dec(v_id_2509_);
lean_dec_ref(v_inst_2508_);
v___x_2511_ = l_Lean_instInhabitedName;
v___x_2512_ = l_instInhabitedOfMonad___redArg(v_inst_2507_, v___x_2511_);
v___x_2513_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2514_ = l_panic___redArg(v___x_2512_, v___x_2513_);
lean_dec(v___x_2512_);
return v___x_2514_;
}
else
{
lean_object* v_tail_2515_; 
v_tail_2515_ = lean_ctor_get(v_cs_2510_, 1);
if (lean_obj_tag(v_tail_2515_) == 0)
{
lean_object* v_toApplicative_2516_; lean_object* v_toPure_2517_; lean_object* v_head_2518_; lean_object* v___x_2519_; 
v_toApplicative_2516_ = lean_ctor_get(v_inst_2507_, 0);
lean_inc_ref(v_toApplicative_2516_);
lean_dec(v_id_2509_);
lean_dec_ref(v_inst_2508_);
lean_dec_ref(v_inst_2507_);
v_toPure_2517_ = lean_ctor_get(v_toApplicative_2516_, 1);
lean_inc(v_toPure_2517_);
lean_dec_ref(v_toApplicative_2516_);
v_head_2518_ = lean_ctor_get(v_cs_2510_, 0);
lean_inc(v_head_2518_);
lean_dec_ref_known(v_cs_2510_, 2);
v___x_2519_ = lean_apply_2(v_toPure_2517_, lean_box(0), v_head_2518_);
return v___x_2519_;
}
else
{
lean_object* v___f_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___f_2520_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2521_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2522_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2523_ = lean_box(0);
v___x_2524_ = 0;
lean_inc(v_id_2509_);
v___x_2525_ = l_Lean_Syntax_formatStx(v_id_2509_, v___x_2523_, v___x_2524_);
v___x_2526_ = l_Std_Format_defWidth;
v___x_2527_ = lean_unsigned_to_nat(0u);
v___x_2528_ = l_Std_Format_pretty(v___x_2525_, v___x_2526_, v___x_2527_, v___x_2527_);
v___x_2529_ = lean_string_append(v___x_2522_, v___x_2528_);
lean_dec_ref(v___x_2528_);
v___x_2530_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2531_ = lean_string_append(v___x_2529_, v___x_2530_);
v___x_2532_ = lean_box(0);
v___x_2533_ = l_List_mapTR_loop___redArg(v___f_2520_, v_cs_2510_, v___x_2532_);
v___x_2534_ = l_List_toString___redArg(v___x_2521_, v___x_2533_);
v___x_2535_ = lean_string_append(v___x_2531_, v___x_2534_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
v___x_2537_ = l_Lean_MessageData_ofFormat(v___x_2536_);
v___x_2538_ = l_Lean_throwErrorAt___redArg(v_inst_2507_, v_inst_2508_, v_id_2509_, v___x_2537_);
return v___x_2538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2539_, lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_id_2542_, lean_object* v_cs_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2540_, v_inst_2541_, v_id_2542_, v_cs_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2545_, lean_object* v_inst_2546_, lean_object* v_id_2547_, lean_object* v_____do__lift_2548_){
_start:
{
lean_object* v___x_2549_; 
v___x_2549_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2545_, v_inst_2546_, v_id_2547_, v_____do__lift_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2550_, lean_object* v_inst_2551_, lean_object* v_inst_2552_, lean_object* v_inst_2553_, lean_object* v_inst_2554_, lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_id_2557_){
_start:
{
lean_object* v_toBind_2558_; lean_object* v___f_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_toBind_2558_ = lean_ctor_get(v_inst_2550_, 1);
lean_inc(v_toBind_2558_);
lean_inc(v_id_2557_);
lean_inc_ref(v_inst_2556_);
lean_inc_ref(v_inst_2550_);
v___f_2559_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2559_, 0, v_inst_2550_);
lean_closure_set(v___f_2559_, 1, v_inst_2556_);
lean_closure_set(v___f_2559_, 2, v_id_2557_);
v___x_2560_ = l_Lean_resolveGlobalConst___redArg(v_inst_2550_, v_inst_2551_, v_inst_2552_, v_inst_2553_, v_inst_2554_, v_inst_2555_, v_inst_2556_, v_id_2557_);
v___x_2561_ = lean_apply_4(v_toBind_2558_, lean_box(0), lean_box(0), v___x_2560_, v___f_2559_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2562_, lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_inst_2567_, lean_object* v_inst_2568_, lean_object* v_inst_2569_, lean_object* v_id_2570_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2563_, v_inst_2564_, v_inst_2565_, v_inst_2566_, v_inst_2567_, v_inst_2568_, v_inst_2569_, v_id_2570_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v___f_2572_, lean_object* v___f_2573_, uint8_t v_globalDeclFoundNext_2574_, uint8_t v_globalDeclFound_2575_, lean_object* v_r_2576_){
_start:
{
lean_object* v___x_2577_; lean_object* v_r_2578_; uint8_t v___x_2579_; 
v___x_2577_ = lean_box(0);
v_r_2578_ = l_List_filterTR_loop___redArg(v___f_2572_, v_r_2576_, v___x_2577_);
v___x_2579_ = l_List_isEmpty___redArg(v_r_2578_);
lean_dec(v_r_2578_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_box(v_globalDeclFoundNext_2574_);
v___x_2582_ = lean_apply_2(v___f_2573_, v___x_2580_, v___x_2581_);
return v___x_2582_;
}
else
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2583_ = lean_box(0);
v___x_2584_ = lean_box(v_globalDeclFound_2575_);
v___x_2585_ = lean_apply_2(v___f_2573_, v___x_2583_, v___x_2584_);
return v___x_2585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object* v___f_2586_, lean_object* v___f_2587_, lean_object* v_globalDeclFoundNext_2588_, lean_object* v_globalDeclFound_2589_, lean_object* v_r_2590_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2591_; uint8_t v_globalDeclFound_boxed_2592_; lean_object* v_res_2593_; 
v_globalDeclFoundNext_boxed_2591_ = lean_unbox(v_globalDeclFoundNext_2588_);
v_globalDeclFound_boxed_2592_ = lean_unbox(v_globalDeclFound_2589_);
v_res_2593_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v___f_2586_, v___f_2587_, v_globalDeclFoundNext_boxed_2591_, v_globalDeclFound_boxed_2592_, v_r_2590_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_str_2594_, lean_object* v_projs_2595_, lean_object* v_inst_2596_, lean_object* v_inst_2597_, lean_object* v_inst_2598_, lean_object* v_inst_2599_, lean_object* v_inst_2600_, lean_object* v_inst_2601_, lean_object* v_view_2602_, lean_object* v_findLocalDecl_x3f_2603_, lean_object* v_pre_2604_, lean_object* v_____r_2605_, lean_object* v_globalDeclFoundNext_2606_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2607_; lean_object* v_res_2608_; 
v_globalDeclFoundNext_boxed_2607_ = lean_unbox(v_globalDeclFoundNext_2606_);
v_res_2608_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2594_, v_projs_2595_, v_inst_2596_, v_inst_2597_, v_inst_2598_, v_inst_2599_, v_inst_2600_, v_inst_2601_, v_view_2602_, v_findLocalDecl_x3f_2603_, v_pre_2604_, v_____r_2605_, v_globalDeclFoundNext_boxed_2607_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2609_, lean_object* v_inst_2610_, lean_object* v_inst_2611_, lean_object* v_inst_2612_, lean_object* v_inst_2613_, lean_object* v_inst_2614_, lean_object* v_view_2615_, lean_object* v_findLocalDecl_x3f_2616_, lean_object* v_n_2617_, lean_object* v_projs_2618_, uint8_t v_globalDeclFound_2619_){
_start:
{
lean_object* v_toApplicative_2620_; lean_object* v_imported_2621_; lean_object* v_ctx_2622_; lean_object* v_scopes_2623_; lean_object* v_toBind_2624_; lean_object* v_toPure_2625_; lean_object* v___f_2626_; lean_object* v_givenNameView_2627_; uint8_t v___y_2629_; 
v_toApplicative_2620_ = lean_ctor_get(v_inst_2609_, 0);
v_imported_2621_ = lean_ctor_get(v_view_2615_, 1);
v_ctx_2622_ = lean_ctor_get(v_view_2615_, 2);
v_scopes_2623_ = lean_ctor_get(v_view_2615_, 3);
v_toBind_2624_ = lean_ctor_get(v_inst_2609_, 1);
v_toPure_2625_ = lean_ctor_get(v_toApplicative_2620_, 1);
v___f_2626_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
lean_inc(v_scopes_2623_);
lean_inc(v_ctx_2622_);
lean_inc(v_imported_2621_);
lean_inc(v_n_2617_);
v_givenNameView_2627_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_2627_, 0, v_n_2617_);
lean_ctor_set(v_givenNameView_2627_, 1, v_imported_2621_);
lean_ctor_set(v_givenNameView_2627_, 2, v_ctx_2622_);
lean_ctor_set(v_givenNameView_2627_, 3, v_scopes_2623_);
if (v_globalDeclFound_2619_ == 0)
{
v___y_2629_ = v_globalDeclFound_2619_;
goto v___jp_2628_;
}
else
{
uint8_t v___x_2665_; 
v___x_2665_ = l_List_isEmpty___redArg(v_projs_2618_);
if (v___x_2665_ == 0)
{
v___y_2629_ = v_globalDeclFound_2619_;
goto v___jp_2628_;
}
else
{
uint8_t v___x_2666_; 
v___x_2666_ = 0;
v___y_2629_ = v___x_2666_;
goto v___jp_2628_;
}
}
v___jp_2628_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = lean_box(v___y_2629_);
lean_inc_ref(v_findLocalDecl_x3f_2616_);
lean_inc_ref(v_givenNameView_2627_);
v___x_2631_ = lean_apply_2(v_findLocalDecl_x3f_2616_, v_givenNameView_2627_, v___x_2630_);
if (lean_obj_tag(v___x_2631_) == 0)
{
if (lean_obj_tag(v_n_2617_) == 1)
{
lean_object* v_pre_2632_; lean_object* v_str_2633_; lean_object* v___f_2634_; 
v_pre_2632_ = lean_ctor_get(v_n_2617_, 0);
lean_inc_n(v_pre_2632_, 2);
v_str_2633_ = lean_ctor_get(v_n_2617_, 1);
lean_inc_ref_n(v_str_2633_, 2);
lean_dec_ref_known(v_n_2617_, 2);
lean_inc_ref(v_findLocalDecl_x3f_2616_);
lean_inc_ref(v_view_2615_);
lean_inc(v_inst_2614_);
lean_inc_ref(v_inst_2613_);
lean_inc(v_inst_2612_);
lean_inc_ref(v_inst_2611_);
lean_inc_ref(v_inst_2610_);
lean_inc_ref(v_inst_2609_);
lean_inc(v_projs_2618_);
v___f_2634_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2634_, 0, v_str_2633_);
lean_closure_set(v___f_2634_, 1, v_projs_2618_);
lean_closure_set(v___f_2634_, 2, v_inst_2609_);
lean_closure_set(v___f_2634_, 3, v_inst_2610_);
lean_closure_set(v___f_2634_, 4, v_inst_2611_);
lean_closure_set(v___f_2634_, 5, v_inst_2612_);
lean_closure_set(v___f_2634_, 6, v_inst_2613_);
lean_closure_set(v___f_2634_, 7, v_inst_2614_);
lean_closure_set(v___f_2634_, 8, v_view_2615_);
lean_closure_set(v___f_2634_, 9, v_findLocalDecl_x3f_2616_);
lean_closure_set(v___f_2634_, 10, v_pre_2632_);
if (v_globalDeclFound_2619_ == 0)
{
uint8_t v_globalDeclFoundNext_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___f_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
lean_inc(v_toBind_2624_);
lean_dec_ref(v_str_2633_);
lean_dec(v_pre_2632_);
lean_dec(v_projs_2618_);
lean_dec_ref(v_findLocalDecl_x3f_2616_);
lean_dec_ref(v_view_2615_);
v_globalDeclFoundNext_2635_ = 1;
v___x_2636_ = lean_box(v_globalDeclFoundNext_2635_);
v___x_2637_ = lean_box(v_globalDeclFound_2619_);
v___f_2638_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2638_, 0, v___f_2626_);
lean_closure_set(v___f_2638_, 1, v___f_2634_);
lean_closure_set(v___f_2638_, 2, v___x_2636_);
lean_closure_set(v___f_2638_, 3, v___x_2637_);
v___x_2639_ = l_Lean_MacroScopesView_review(v_givenNameView_2627_);
v___x_2640_ = l_Lean_resolveGlobalName___redArg(v_inst_2609_, v_inst_2610_, v_inst_2611_, v_inst_2612_, v_inst_2613_, v_inst_2614_, v___x_2639_, v_globalDeclFound_2619_);
v___x_2641_ = lean_apply_4(v_toBind_2624_, lean_box(0), lean_box(0), v___x_2640_, v___f_2638_);
return v___x_2641_;
}
else
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
lean_dec_ref(v___f_2634_);
lean_dec_ref_known(v_givenNameView_2627_, 4);
v___x_2642_ = lean_box(0);
v___x_2643_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2633_, v_projs_2618_, v_inst_2609_, v_inst_2610_, v_inst_2611_, v_inst_2612_, v_inst_2613_, v_inst_2614_, v_view_2615_, v_findLocalDecl_x3f_2616_, v_pre_2632_, v___x_2642_, v_globalDeclFound_2619_);
return v___x_2643_;
}
}
else
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
lean_inc(v_toPure_2625_);
lean_dec_ref_known(v_givenNameView_2627_, 4);
lean_dec(v_projs_2618_);
lean_dec(v_n_2617_);
lean_dec_ref(v_findLocalDecl_x3f_2616_);
lean_dec_ref(v_view_2615_);
lean_dec(v_inst_2614_);
lean_dec_ref(v_inst_2613_);
lean_dec(v_inst_2612_);
lean_dec_ref(v_inst_2611_);
lean_dec_ref(v_inst_2610_);
lean_dec_ref(v_inst_2609_);
v___x_2644_ = lean_box(0);
v___x_2645_ = lean_apply_2(v_toPure_2625_, lean_box(0), v___x_2644_);
return v___x_2645_;
}
}
else
{
lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2662_; 
lean_inc(v_toPure_2625_);
lean_dec_ref_known(v_givenNameView_2627_, 4);
lean_dec(v_n_2617_);
lean_dec_ref(v_findLocalDecl_x3f_2616_);
lean_dec_ref(v_view_2615_);
lean_dec(v_inst_2614_);
lean_dec_ref(v_inst_2613_);
lean_dec(v_inst_2612_);
lean_dec_ref(v_inst_2611_);
lean_dec_ref(v_inst_2610_);
v_isSharedCheck_2662_ = !lean_is_exclusive(v_inst_2609_);
if (v_isSharedCheck_2662_ == 0)
{
lean_object* v_unused_2663_; lean_object* v_unused_2664_; 
v_unused_2663_ = lean_ctor_get(v_inst_2609_, 1);
lean_dec(v_unused_2663_);
v_unused_2664_ = lean_ctor_get(v_inst_2609_, 0);
lean_dec(v_unused_2664_);
v___x_2647_ = v_inst_2609_;
v_isShared_2648_ = v_isSharedCheck_2662_;
goto v_resetjp_2646_;
}
else
{
lean_dec(v_inst_2609_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2662_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v_val_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2661_; 
v_val_2649_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2651_ = v___x_2631_;
v_isShared_2652_ = v_isSharedCheck_2661_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_val_2649_);
lean_dec(v___x_2631_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2661_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2653_; lean_object* v___x_2655_; 
v___x_2653_ = l_Lean_LocalDecl_toExpr(v_val_2649_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 1, v_projs_2618_);
lean_ctor_set(v___x_2647_, 0, v___x_2653_);
v___x_2655_ = v___x_2647_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_projs_2618_);
v___x_2655_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
lean_object* v___x_2657_; 
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2655_);
v___x_2657_ = v___x_2651_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; 
v___x_2658_ = lean_apply_2(v_toPure_2625_, lean_box(0), v___x_2657_);
return v___x_2658_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_str_2667_, lean_object* v_projs_2668_, lean_object* v_inst_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, lean_object* v_inst_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_view_2675_, lean_object* v_findLocalDecl_x3f_2676_, lean_object* v_pre_2677_, lean_object* v_____r_2678_, uint8_t v_globalDeclFoundNext_2679_){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2680_, 0, v_str_2667_);
lean_ctor_set(v___x_2680_, 1, v_projs_2668_);
v___x_2681_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2669_, v_inst_2670_, v_inst_2671_, v_inst_2672_, v_inst_2673_, v_inst_2674_, v_view_2675_, v_findLocalDecl_x3f_2676_, v_pre_2677_, v___x_2680_, v_globalDeclFoundNext_2679_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object* v_inst_2682_, lean_object* v_inst_2683_, lean_object* v_inst_2684_, lean_object* v_inst_2685_, lean_object* v_inst_2686_, lean_object* v_inst_2687_, lean_object* v_view_2688_, lean_object* v_findLocalDecl_x3f_2689_, lean_object* v_n_2690_, lean_object* v_projs_2691_, lean_object* v_globalDeclFound_2692_){
_start:
{
uint8_t v_globalDeclFound_boxed_2693_; lean_object* v_res_2694_; 
v_globalDeclFound_boxed_2693_ = lean_unbox(v_globalDeclFound_2692_);
v_res_2694_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2682_, v_inst_2683_, v_inst_2684_, v_inst_2685_, v_inst_2686_, v_inst_2687_, v_view_2688_, v_findLocalDecl_x3f_2689_, v_n_2690_, v_projs_2691_, v_globalDeclFound_boxed_2693_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2695_, lean_object* v_inst_2696_, lean_object* v_inst_2697_, lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_view_2702_, lean_object* v_findLocalDecl_x3f_2703_, lean_object* v_n_2704_, lean_object* v_projs_2705_, uint8_t v_globalDeclFound_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2696_, v_inst_2697_, v_inst_2698_, v_inst_2699_, v_inst_2700_, v_inst_2701_, v_view_2702_, v_findLocalDecl_x3f_2703_, v_n_2704_, v_projs_2705_, v_globalDeclFound_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object* v_m_2708_, lean_object* v_inst_2709_, lean_object* v_inst_2710_, lean_object* v_inst_2711_, lean_object* v_inst_2712_, lean_object* v_inst_2713_, lean_object* v_inst_2714_, lean_object* v_view_2715_, lean_object* v_findLocalDecl_x3f_2716_, lean_object* v_n_2717_, lean_object* v_projs_2718_, lean_object* v_globalDeclFound_2719_){
_start:
{
uint8_t v_globalDeclFound_boxed_2720_; lean_object* v_res_2721_; 
v_globalDeclFound_boxed_2720_ = lean_unbox(v_globalDeclFound_2719_);
v_res_2721_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(v_m_2708_, v_inst_2709_, v_inst_2710_, v_inst_2711_, v_inst_2712_, v_inst_2713_, v_inst_2714_, v_view_2715_, v_findLocalDecl_x3f_2716_, v_n_2717_, v_projs_2718_, v_globalDeclFound_boxed_2720_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2722_, lean_object* v_givenNameView_2723_, lean_object* v_fullDeclName_2724_, lean_object* v_ns_2725_){
_start:
{
lean_object* v_name_2726_; lean_object* v_imported_2727_; lean_object* v_ctx_2728_; lean_object* v_scopes_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; uint8_t v___x_2733_; 
v_name_2726_ = lean_ctor_get(v_givenNameView_2723_, 0);
v_imported_2727_ = lean_ctor_get(v_givenNameView_2723_, 1);
v_ctx_2728_ = lean_ctor_get(v_givenNameView_2723_, 2);
v_scopes_2729_ = lean_ctor_get(v_givenNameView_2723_, 3);
lean_inc(v_name_2726_);
lean_inc(v_ns_2725_);
v___x_2730_ = l_Lean_Name_append(v_ns_2725_, v_name_2726_);
lean_inc(v_scopes_2729_);
lean_inc(v_ctx_2728_);
lean_inc(v_imported_2727_);
v___x_2731_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
lean_ctor_set(v___x_2731_, 1, v_imported_2727_);
lean_ctor_set(v___x_2731_, 2, v_ctx_2728_);
lean_ctor_set(v___x_2731_, 3, v_scopes_2729_);
v___x_2732_ = l_Lean_MacroScopesView_review(v___x_2731_);
v___x_2733_ = lean_name_eq(v___x_2732_, v_fullDeclName_2724_);
lean_dec(v___x_2732_);
if (v___x_2733_ == 0)
{
if (lean_obj_tag(v_ns_2725_) == 1)
{
lean_object* v_pre_2734_; 
v_pre_2734_ = lean_ctor_get(v_ns_2725_, 0);
lean_inc(v_pre_2734_);
lean_dec_ref_known(v_ns_2725_, 2);
v_ns_2725_ = v_pre_2734_;
goto _start;
}
else
{
lean_object* v___x_2736_; 
lean_dec(v_ns_2725_);
lean_dec_ref(v_givenNameView_2723_);
lean_dec_ref(v_localDecl_2722_);
v___x_2736_ = lean_box(0);
return v___x_2736_;
}
}
else
{
lean_object* v___x_2737_; 
lean_dec(v_ns_2725_);
lean_dec_ref(v_givenNameView_2723_);
v___x_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2737_, 0, v_localDecl_2722_);
return v___x_2737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2738_, lean_object* v_givenNameView_2739_, lean_object* v_fullDeclName_2740_, lean_object* v_ns_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2738_, v_givenNameView_2739_, v_fullDeclName_2740_, v_ns_2741_);
lean_dec(v_fullDeclName_2740_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2743_, lean_object* v_givenName_2744_){
_start:
{
lean_object* v___x_2745_; uint8_t v___x_2746_; 
v___x_2745_ = l_Lean_LocalDecl_userName(v_localDecl_2743_);
v___x_2746_ = lean_name_eq(v___x_2745_, v_givenName_2744_);
lean_dec(v___x_2745_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; 
lean_dec_ref(v_localDecl_2743_);
v___x_2747_ = lean_box(0);
return v___x_2747_;
}
else
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2748_, 0, v_localDecl_2743_);
return v___x_2748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2749_, lean_object* v_givenName_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2749_, v_givenName_2750_);
lean_dec(v_givenName_2750_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2752_, lean_object* v_givenName_2753_, uint8_t v_skipAuxDecl_2754_, lean_object* v___f_2755_, lean_object* v_auxDeclToFullName_2756_, lean_object* v_currNamespace_2757_, lean_object* v_givenNameView_2758_, lean_object* v_x_2759_){
_start:
{
if (lean_obj_tag(v_x_2759_) == 0)
{
lean_dec_ref(v_givenNameView_2758_);
lean_dec(v_currNamespace_2757_);
lean_dec(v_auxDeclToFullName_2756_);
lean_dec_ref(v___f_2755_);
lean_dec(v_givenName_2753_);
lean_dec_ref(v_matchLocalDecl_x3f_2752_);
return v_x_2759_;
}
else
{
lean_object* v_val_2760_; uint8_t v___x_2761_; 
v_val_2760_ = lean_ctor_get(v_x_2759_, 0);
v___x_2761_ = l_Lean_LocalDecl_isAuxDecl(v_val_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; 
lean_inc(v_val_2760_);
lean_dec_ref_known(v_x_2759_, 1);
lean_dec_ref(v_givenNameView_2758_);
lean_dec(v_currNamespace_2757_);
lean_dec(v_auxDeclToFullName_2756_);
lean_dec_ref(v___f_2755_);
v___x_2762_ = lean_apply_2(v_matchLocalDecl_x3f_2752_, v_val_2760_, v_givenName_2753_);
return v___x_2762_;
}
else
{
if (v_skipAuxDecl_2754_ == 0)
{
if (v___x_2761_ == 0)
{
lean_object* v___x_2763_; 
lean_dec_ref_known(v_x_2759_, 1);
lean_dec_ref(v_givenNameView_2758_);
lean_dec(v_currNamespace_2757_);
lean_dec(v_auxDeclToFullName_2756_);
lean_dec_ref(v___f_2755_);
lean_dec(v_givenName_2753_);
lean_dec_ref(v_matchLocalDecl_x3f_2752_);
v___x_2763_ = lean_box(0);
return v___x_2763_;
}
else
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = l_Lean_LocalDecl_fvarId(v_val_2760_);
v___x_2765_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2755_, v_auxDeclToFullName_2756_, v___x_2764_);
if (lean_obj_tag(v___x_2765_) == 1)
{
lean_object* v_val_2766_; lean_object* v_fullDeclView_2767_; lean_object* v___y_2769_; lean_object* v_name_2790_; lean_object* v___x_2791_; 
lean_dec(v_givenName_2753_);
lean_dec_ref(v_matchLocalDecl_x3f_2752_);
v_val_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_val_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v_fullDeclView_2767_ = l_Lean_extractMacroScopes(v_val_2766_);
v_name_2790_ = lean_ctor_get(v_fullDeclView_2767_, 0);
lean_inc_n(v_name_2790_, 2);
v___x_2791_ = l_Lean_privateToUserName_x3f(v_name_2790_);
if (lean_obj_tag(v___x_2791_) == 0)
{
v___y_2769_ = v_name_2790_;
goto v___jp_2768_;
}
else
{
lean_object* v_val_2792_; 
lean_dec(v_name_2790_);
v_val_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_val_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___y_2769_ = v_val_2792_;
goto v___jp_2768_;
}
v___jp_2768_:
{
lean_object* v_imported_2770_; lean_object* v_ctx_2771_; lean_object* v_scopes_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2788_; 
v_imported_2770_ = lean_ctor_get(v_fullDeclView_2767_, 1);
v_ctx_2771_ = lean_ctor_get(v_fullDeclView_2767_, 2);
v_scopes_2772_ = lean_ctor_get(v_fullDeclView_2767_, 3);
v_isSharedCheck_2788_ = !lean_is_exclusive(v_fullDeclView_2767_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v_fullDeclView_2767_, 0);
lean_dec(v_unused_2789_);
v___x_2774_ = v_fullDeclView_2767_;
v_isShared_2775_ = v_isSharedCheck_2788_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_scopes_2772_);
lean_inc(v_ctx_2771_);
lean_inc(v_imported_2770_);
lean_dec(v_fullDeclView_2767_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2788_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v_fullDeclView_2777_; 
if (v_isShared_2775_ == 0)
{
lean_ctor_set(v___x_2774_, 0, v___y_2769_);
v_fullDeclView_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___y_2769_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v_imported_2770_);
lean_ctor_set(v_reuseFailAlloc_2787_, 2, v_ctx_2771_);
lean_ctor_set(v_reuseFailAlloc_2787_, 3, v_scopes_2772_);
v_fullDeclView_2777_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v_fullDeclName_2778_; uint8_t v___x_2779_; 
lean_inc_ref(v_fullDeclView_2777_);
v_fullDeclName_2778_ = l_Lean_MacroScopesView_review(v_fullDeclView_2777_);
v___x_2779_ = l_Lean_Name_isPrefixOf(v_currNamespace_2757_, v_fullDeclName_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
lean_inc(v_val_2760_);
lean_dec_ref(v_fullDeclView_2777_);
lean_dec_ref_known(v_x_2759_, 1);
v___x_2780_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2760_, v_givenNameView_2758_, v_fullDeclName_2778_, v_currNamespace_2757_);
lean_dec(v_fullDeclName_2778_);
return v___x_2780_;
}
else
{
lean_object* v___x_2781_; lean_object* v_localDeclNameView_2782_; uint8_t v___x_2783_; 
lean_dec(v_fullDeclName_2778_);
lean_dec(v_currNamespace_2757_);
v___x_2781_ = l_Lean_LocalDecl_userName(v_val_2760_);
v_localDeclNameView_2782_ = l_Lean_extractMacroScopes(v___x_2781_);
v___x_2783_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2782_, v_givenNameView_2758_);
lean_dec_ref(v_localDeclNameView_2782_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; 
lean_dec_ref(v_fullDeclView_2777_);
lean_dec_ref_known(v_x_2759_, 1);
lean_dec_ref(v_givenNameView_2758_);
v___x_2784_ = lean_box(0);
return v___x_2784_;
}
else
{
uint8_t v___x_2785_; 
v___x_2785_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2758_, v_fullDeclView_2777_);
lean_dec_ref(v_fullDeclView_2777_);
lean_dec_ref(v_givenNameView_2758_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2786_; 
lean_dec_ref_known(v_x_2759_, 1);
v___x_2786_ = lean_box(0);
return v___x_2786_;
}
else
{
return v_x_2759_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2793_; 
lean_inc(v_val_2760_);
lean_dec(v___x_2765_);
lean_dec_ref_known(v_x_2759_, 1);
lean_dec_ref(v_givenNameView_2758_);
lean_dec(v_currNamespace_2757_);
v___x_2793_ = lean_apply_2(v_matchLocalDecl_x3f_2752_, v_val_2760_, v_givenName_2753_);
return v___x_2793_;
}
}
}
else
{
lean_object* v___x_2794_; 
lean_dec_ref_known(v_x_2759_, 1);
lean_dec_ref(v_givenNameView_2758_);
lean_dec(v_currNamespace_2757_);
lean_dec(v_auxDeclToFullName_2756_);
lean_dec_ref(v___f_2755_);
lean_dec(v_givenName_2753_);
lean_dec_ref(v_matchLocalDecl_x3f_2752_);
v___x_2794_ = lean_box(0);
return v___x_2794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object* v_matchLocalDecl_x3f_2795_, lean_object* v_givenName_2796_, lean_object* v_skipAuxDecl_2797_, lean_object* v___f_2798_, lean_object* v_auxDeclToFullName_2799_, lean_object* v_currNamespace_2800_, lean_object* v_givenNameView_2801_, lean_object* v_x_2802_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2803_; lean_object* v_res_2804_; 
v_skipAuxDecl_boxed_2803_ = lean_unbox(v_skipAuxDecl_2797_);
v_res_2804_ = l_Lean_resolveLocalName___redArg___lam__1(v_matchLocalDecl_x3f_2795_, v_givenName_2796_, v_skipAuxDecl_boxed_2803_, v___f_2798_, v_auxDeclToFullName_2799_, v_currNamespace_2800_, v_givenNameView_2801_, v_x_2802_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2805_, lean_object* v_matchLocalDecl_x3f_2806_, lean_object* v_givenName_2807_, lean_object* v_x_2808_){
_start:
{
if (lean_obj_tag(v_x_2808_) == 0)
{
lean_dec(v_givenName_2807_);
lean_dec_ref(v_matchLocalDecl_x3f_2806_);
return v_x_2808_;
}
else
{
lean_object* v_val_2809_; uint8_t v___x_2810_; 
v_val_2809_ = lean_ctor_get(v_x_2808_, 0);
lean_inc(v_val_2809_);
lean_dec_ref_known(v_x_2808_, 1);
v___x_2810_ = l_Lean_LocalDecl_isAuxDecl(v_val_2809_);
if (v___x_2810_ == 0)
{
lean_dec(v_val_2809_);
lean_dec(v_givenName_2807_);
lean_dec_ref(v_matchLocalDecl_x3f_2806_);
lean_inc(v_localDecl_x3f_2805_);
return v_localDecl_x3f_2805_;
}
else
{
lean_object* v___x_2811_; 
v___x_2811_ = lean_apply_2(v_matchLocalDecl_x3f_2806_, v_val_2809_, v_givenName_2807_);
return v___x_2811_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2812_, lean_object* v_matchLocalDecl_x3f_2813_, lean_object* v_givenName_2814_, lean_object* v_x_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2812_, v_matchLocalDecl_x3f_2813_, v_givenName_2814_, v_x_2815_);
lean_dec(v_localDecl_x3f_2812_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2836_, lean_object* v_matchLocalDecl_x3f_2837_, lean_object* v___f_2838_, lean_object* v_auxDeclToFullName_2839_, lean_object* v_currNamespace_2840_, lean_object* v_givenNameView_2841_, uint8_t v_skipAuxDecl_2842_){
_start:
{
lean_object* v_decls_2843_; lean_object* v_givenName_2844_; lean_object* v___x_2845_; lean_object* v___f_2846_; lean_object* v___x_2847_; lean_object* v_localDecl_x3f_2848_; 
v_decls_2843_ = lean_ctor_get(v_lctx_2836_, 1);
lean_inc_ref_n(v_decls_2843_, 2);
lean_dec_ref(v_lctx_2836_);
lean_inc_ref(v_givenNameView_2841_);
v_givenName_2844_ = l_Lean_MacroScopesView_review(v_givenNameView_2841_);
v___x_2845_ = lean_box(v_skipAuxDecl_2842_);
lean_inc(v_givenName_2844_);
lean_inc_ref(v_matchLocalDecl_x3f_2837_);
v___f_2846_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2846_, 0, v_matchLocalDecl_x3f_2837_);
lean_closure_set(v___f_2846_, 1, v_givenName_2844_);
lean_closure_set(v___f_2846_, 2, v___x_2845_);
lean_closure_set(v___f_2846_, 3, v___f_2838_);
lean_closure_set(v___f_2846_, 4, v_auxDeclToFullName_2839_);
lean_closure_set(v___f_2846_, 5, v_currNamespace_2840_);
lean_closure_set(v___f_2846_, 6, v_givenNameView_2841_);
v___x_2847_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2848_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2847_, v_decls_2843_, v___f_2846_);
if (lean_obj_tag(v_localDecl_x3f_2848_) == 0)
{
if (v_skipAuxDecl_2842_ == 0)
{
lean_object* v___f_2849_; lean_object* v___x_2850_; 
v___f_2849_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2849_, 0, v_localDecl_x3f_2848_);
lean_closure_set(v___f_2849_, 1, v_matchLocalDecl_x3f_2837_);
lean_closure_set(v___f_2849_, 2, v_givenName_2844_);
v___x_2850_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2847_, v_decls_2843_, v___f_2849_);
return v___x_2850_;
}
else
{
lean_dec(v_givenName_2844_);
lean_dec_ref(v_decls_2843_);
lean_dec_ref(v_matchLocalDecl_x3f_2837_);
return v_localDecl_x3f_2848_;
}
}
else
{
lean_dec(v_givenName_2844_);
lean_dec_ref(v_decls_2843_);
lean_dec_ref(v_matchLocalDecl_x3f_2837_);
return v_localDecl_x3f_2848_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object* v_lctx_2851_, lean_object* v_matchLocalDecl_x3f_2852_, lean_object* v___f_2853_, lean_object* v_auxDeclToFullName_2854_, lean_object* v_currNamespace_2855_, lean_object* v_givenNameView_2856_, lean_object* v_skipAuxDecl_2857_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2858_; lean_object* v_res_2859_; 
v_skipAuxDecl_boxed_2858_ = lean_unbox(v_skipAuxDecl_2857_);
v_res_2859_ = l_Lean_resolveLocalName___redArg___lam__3(v_lctx_2851_, v_matchLocalDecl_x3f_2852_, v___f_2853_, v_auxDeclToFullName_2854_, v_currNamespace_2855_, v_givenNameView_2856_, v_skipAuxDecl_boxed_2858_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2860_, lean_object* v_lctx_2861_, lean_object* v_matchLocalDecl_x3f_2862_, lean_object* v___f_2863_, lean_object* v_auxDeclToFullName_2864_, lean_object* v_inst_2865_, lean_object* v_inst_2866_, lean_object* v_inst_2867_, lean_object* v_inst_2868_, lean_object* v_inst_2869_, lean_object* v_inst_2870_, lean_object* v_currNamespace_2871_){
_start:
{
lean_object* v_view_2872_; lean_object* v_name_2873_; lean_object* v_findLocalDecl_x3f_2874_; lean_object* v___x_2875_; uint8_t v___x_2876_; lean_object* v___x_2877_; 
v_view_2872_ = l_Lean_extractMacroScopes(v_n_2860_);
v_name_2873_ = lean_ctor_get(v_view_2872_, 0);
lean_inc(v_name_2873_);
v_findLocalDecl_x3f_2874_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v_findLocalDecl_x3f_2874_, 0, v_lctx_2861_);
lean_closure_set(v_findLocalDecl_x3f_2874_, 1, v_matchLocalDecl_x3f_2862_);
lean_closure_set(v_findLocalDecl_x3f_2874_, 2, v___f_2863_);
lean_closure_set(v_findLocalDecl_x3f_2874_, 3, v_auxDeclToFullName_2864_);
lean_closure_set(v_findLocalDecl_x3f_2874_, 4, v_currNamespace_2871_);
v___x_2875_ = lean_box(0);
v___x_2876_ = 0;
v___x_2877_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2865_, v_inst_2866_, v_inst_2867_, v_inst_2868_, v_inst_2869_, v_inst_2870_, v_view_2872_, v_findLocalDecl_x3f_2874_, v_name_2873_, v___x_2875_, v___x_2876_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_2878_, lean_object* v_n_2879_, lean_object* v_lctx_2880_, lean_object* v_matchLocalDecl_x3f_2881_, lean_object* v___f_2882_, lean_object* v_inst_2883_, lean_object* v_inst_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_toBind_2888_, lean_object* v_____do__lift_2889_){
_start:
{
lean_object* v_auxDeclToFullName_2890_; lean_object* v_getCurrNamespace_2891_; lean_object* v___f_2892_; lean_object* v___x_2893_; 
v_auxDeclToFullName_2890_ = lean_ctor_get(v_____do__lift_2889_, 2);
lean_inc(v_auxDeclToFullName_2890_);
lean_dec_ref(v_____do__lift_2889_);
v_getCurrNamespace_2891_ = lean_ctor_get(v_inst_2878_, 0);
lean_inc(v_getCurrNamespace_2891_);
v___f_2892_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_2892_, 0, v_n_2879_);
lean_closure_set(v___f_2892_, 1, v_lctx_2880_);
lean_closure_set(v___f_2892_, 2, v_matchLocalDecl_x3f_2881_);
lean_closure_set(v___f_2892_, 3, v___f_2882_);
lean_closure_set(v___f_2892_, 4, v_auxDeclToFullName_2890_);
lean_closure_set(v___f_2892_, 5, v_inst_2883_);
lean_closure_set(v___f_2892_, 6, v_inst_2878_);
lean_closure_set(v___f_2892_, 7, v_inst_2884_);
lean_closure_set(v___f_2892_, 8, v_inst_2885_);
lean_closure_set(v___f_2892_, 9, v_inst_2886_);
lean_closure_set(v___f_2892_, 10, v_inst_2887_);
v___x_2893_ = lean_apply_4(v_toBind_2888_, lean_box(0), lean_box(0), v_getCurrNamespace_2891_, v___f_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_2894_, lean_object* v_n_2895_, lean_object* v_matchLocalDecl_x3f_2896_, lean_object* v___f_2897_, lean_object* v_inst_2898_, lean_object* v_inst_2899_, lean_object* v_inst_2900_, lean_object* v_inst_2901_, lean_object* v_inst_2902_, lean_object* v_toBind_2903_, lean_object* v_inst_2904_, lean_object* v_lctx_2905_){
_start:
{
lean_object* v___f_2906_; lean_object* v___x_2907_; 
lean_inc(v_toBind_2903_);
v___f_2906_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_2906_, 0, v_inst_2894_);
lean_closure_set(v___f_2906_, 1, v_n_2895_);
lean_closure_set(v___f_2906_, 2, v_lctx_2905_);
lean_closure_set(v___f_2906_, 3, v_matchLocalDecl_x3f_2896_);
lean_closure_set(v___f_2906_, 4, v___f_2897_);
lean_closure_set(v___f_2906_, 5, v_inst_2898_);
lean_closure_set(v___f_2906_, 6, v_inst_2899_);
lean_closure_set(v___f_2906_, 7, v_inst_2900_);
lean_closure_set(v___f_2906_, 8, v_inst_2901_);
lean_closure_set(v___f_2906_, 9, v_inst_2902_);
lean_closure_set(v___f_2906_, 10, v_toBind_2903_);
v___x_2907_ = lean_apply_4(v_toBind_2903_, lean_box(0), lean_box(0), v_inst_2904_, v___f_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_2910_, lean_object* v_inst_2911_, lean_object* v_inst_2912_, lean_object* v_inst_2913_, lean_object* v_inst_2914_, lean_object* v_inst_2915_, lean_object* v_inst_2916_, lean_object* v_n_2917_){
_start:
{
lean_object* v_toBind_2918_; lean_object* v___f_2919_; lean_object* v_matchLocalDecl_x3f_2920_; lean_object* v___f_2921_; lean_object* v___x_2922_; 
v_toBind_2918_ = lean_ctor_get(v_inst_2910_, 1);
lean_inc_n(v_toBind_2918_, 2);
v___f_2919_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_2920_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_2916_);
v___f_2921_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_2921_, 0, v_inst_2911_);
lean_closure_set(v___f_2921_, 1, v_n_2917_);
lean_closure_set(v___f_2921_, 2, v_matchLocalDecl_x3f_2920_);
lean_closure_set(v___f_2921_, 3, v___f_2919_);
lean_closure_set(v___f_2921_, 4, v_inst_2910_);
lean_closure_set(v___f_2921_, 5, v_inst_2912_);
lean_closure_set(v___f_2921_, 6, v_inst_2913_);
lean_closure_set(v___f_2921_, 7, v_inst_2914_);
lean_closure_set(v___f_2921_, 8, v_inst_2915_);
lean_closure_set(v___f_2921_, 9, v_toBind_2918_);
lean_closure_set(v___f_2921_, 10, v_inst_2916_);
v___x_2922_ = lean_apply_4(v_toBind_2918_, lean_box(0), lean_box(0), v_inst_2916_, v___f_2921_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_2923_, lean_object* v_inst_2924_, lean_object* v_inst_2925_, lean_object* v_inst_2926_, lean_object* v_inst_2927_, lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_inst_2930_, lean_object* v_n_2931_){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lean_resolveLocalName___redArg(v_inst_2924_, v_inst_2925_, v_inst_2926_, v_inst_2927_, v_inst_2928_, v_inst_2929_, v_inst_2930_, v_n_2931_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_2933_, uint8_t v_____do__lift_2934_){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2935_ = lean_box(v_____do__lift_2934_);
v___x_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
v___x_2937_ = lean_apply_2(v_toPure_2933_, lean_box(0), v___x_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_2938_, lean_object* v_____do__lift_2939_){
_start:
{
uint8_t v_____do__lift_1062__boxed_2940_; lean_object* v_res_2941_; 
v_____do__lift_1062__boxed_2940_ = lean_unbox(v_____do__lift_2939_);
v_res_2941_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_2938_, v_____do__lift_1062__boxed_2940_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_2942_, lean_object* v___y_2943_, lean_object* v_____do__lift_2944_){
_start:
{
if (lean_obj_tag(v_____do__lift_2944_) == 0)
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
lean_dec(v___y_2943_);
v___x_2945_ = lean_box(0);
v___x_2946_ = lean_apply_2(v_toPure_2942_, lean_box(0), v___x_2945_);
return v___x_2946_;
}
else
{
lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2954_; 
v_isSharedCheck_2954_ = !lean_is_exclusive(v_____do__lift_2944_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; 
v_unused_2955_ = lean_ctor_get(v_____do__lift_2944_, 0);
lean_dec(v_unused_2955_);
v___x_2948_ = v_____do__lift_2944_;
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
else
{
lean_dec(v_____do__lift_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2954_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 0, v___y_2943_);
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___y_2943_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_apply_2(v_toPure_2942_, lean_box(0), v___x_2951_);
return v___x_2952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_2958_, lean_object* v_toBind_2959_, lean_object* v___f_2960_, lean_object* v_____do__lift_2961_){
_start:
{
if (lean_obj_tag(v_____do__lift_2961_) == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec(v___f_2960_);
lean_dec(v_toBind_2959_);
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_apply_2(v_toPure_2958_, lean_box(0), v___x_2962_);
return v___x_2963_;
}
else
{
lean_object* v_val_2964_; uint8_t v___x_2965_; 
v_val_2964_ = lean_ctor_get(v_____do__lift_2961_, 0);
v___x_2965_ = lean_unbox(v_val_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_apply_2(v_toPure_2958_, lean_box(0), v___x_2966_);
v___x_2968_ = lean_apply_4(v_toBind_2959_, lean_box(0), lean_box(0), v___x_2967_, v___f_2960_);
return v___x_2968_;
}
else
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2969_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_2970_ = lean_apply_2(v_toPure_2958_, lean_box(0), v___x_2969_);
v___x_2971_ = lean_apply_4(v_toBind_2959_, lean_box(0), lean_box(0), v___x_2970_, v___f_2960_);
return v___x_2971_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_2972_, lean_object* v_toBind_2973_, lean_object* v___f_2974_, lean_object* v_____do__lift_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_2972_, v_toBind_2973_, v___f_2974_, v_____do__lift_2975_);
lean_dec(v_____do__lift_2975_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_2977_, lean_object* v_filter_2978_, lean_object* v___y_2979_, lean_object* v_toBind_2980_, lean_object* v___f_2981_, lean_object* v___f_2982_, lean_object* v_____do__lift_2983_){
_start:
{
if (lean_obj_tag(v_____do__lift_2983_) == 0)
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
lean_dec(v___f_2982_);
lean_dec(v___f_2981_);
lean_dec(v_toBind_2980_);
lean_dec(v___y_2979_);
lean_dec(v_filter_2978_);
v___x_2984_ = lean_box(0);
v___x_2985_ = lean_apply_2(v_toPure_2977_, lean_box(0), v___x_2984_);
return v___x_2985_;
}
else
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
lean_dec(v_toPure_2977_);
v___x_2986_ = lean_apply_1(v_filter_2978_, v___y_2979_);
lean_inc(v_toBind_2980_);
v___x_2987_ = lean_apply_4(v_toBind_2980_, lean_box(0), lean_box(0), v___x_2986_, v___f_2981_);
v___x_2988_ = lean_apply_4(v_toBind_2980_, lean_box(0), lean_box(0), v___x_2987_, v___f_2982_);
return v___x_2988_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_2989_, lean_object* v_filter_2990_, lean_object* v___y_2991_, lean_object* v_toBind_2992_, lean_object* v___f_2993_, lean_object* v___f_2994_, lean_object* v_____do__lift_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_2989_, v_filter_2990_, v___y_2991_, v_toBind_2992_, v___f_2993_, v___f_2994_, v_____do__lift_2995_);
lean_dec(v_____do__lift_2995_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_2997_, lean_object* v_n_u2080_2998_, lean_object* v_toBind_2999_, lean_object* v___f_3000_, lean_object* v_____do__lift_3001_){
_start:
{
if (lean_obj_tag(v_____do__lift_3001_) == 0)
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
lean_dec(v___f_3000_);
lean_dec(v_toBind_2999_);
v___x_3005_ = lean_box(0);
v___x_3006_ = lean_apply_2(v_toPure_2997_, lean_box(0), v___x_3005_);
return v___x_3006_;
}
else
{
lean_object* v_val_3007_; 
v_val_3007_ = lean_ctor_get(v_____do__lift_3001_, 0);
if (lean_obj_tag(v_val_3007_) == 1)
{
lean_object* v_tail_3008_; 
v_tail_3008_ = lean_ctor_get(v_val_3007_, 1);
if (lean_obj_tag(v_tail_3008_) == 0)
{
lean_object* v_head_3009_; lean_object* v_fst_3010_; uint8_t v___x_3011_; 
v_head_3009_ = lean_ctor_get(v_val_3007_, 0);
v_fst_3010_ = lean_ctor_get(v_head_3009_, 0);
v___x_3011_ = lean_name_eq(v_fst_3010_, v_n_u2080_2998_);
if (v___x_3011_ == 0)
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3012_ = lean_box(0);
v___x_3013_ = lean_apply_2(v_toPure_2997_, lean_box(0), v___x_3012_);
v___x_3014_ = lean_apply_4(v_toBind_2999_, lean_box(0), lean_box(0), v___x_3013_, v___f_3000_);
return v___x_3014_;
}
else
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3015_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3016_ = lean_apply_2(v_toPure_2997_, lean_box(0), v___x_3015_);
v___x_3017_ = lean_apply_4(v_toBind_2999_, lean_box(0), lean_box(0), v___x_3016_, v___f_3000_);
return v___x_3017_;
}
}
else
{
lean_dec(v___f_3000_);
lean_dec(v_toBind_2999_);
goto v___jp_3002_;
}
}
else
{
lean_dec(v___f_3000_);
lean_dec(v_toBind_2999_);
goto v___jp_3002_;
}
}
v___jp_3002_:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = lean_box(0);
v___x_3004_ = lean_apply_2(v_toPure_2997_, lean_box(0), v___x_3003_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_3018_, lean_object* v_n_u2080_3019_, lean_object* v_toBind_3020_, lean_object* v___f_3021_, lean_object* v_____do__lift_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_3018_, v_n_u2080_3019_, v_toBind_3020_, v___f_3021_, v_____do__lift_3022_);
lean_dec(v_____do__lift_3022_);
lean_dec(v_n_u2080_3019_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_3024_, lean_object* v_inst_3025_, lean_object* v_inst_3026_, lean_object* v_inst_3027_, lean_object* v_inst_3028_, lean_object* v_inst_3029_, lean_object* v_n_u2080_3030_, lean_object* v_filter_3031_, lean_object* v_view_x3f_3032_, lean_object* v_n_3033_){
_start:
{
lean_object* v___f_3034_; lean_object* v___f_3035_; lean_object* v___f_3036_; lean_object* v___f_3037_; lean_object* v___f_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v_toApplicative_3046_; lean_object* v_getEnv_3047_; lean_object* v_modifyEnv_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3086_; 
lean_inc_ref_n(v_inst_3024_, 8);
v___f_3034_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3034_, 0, v_inst_3024_);
v___f_3035_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3035_, 0, v_inst_3024_);
v___f_3036_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3036_, 0, v_inst_3024_);
v___f_3037_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3037_, 0, v_inst_3024_);
v___f_3038_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3038_, 0, v_inst_3024_);
v___x_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___f_3034_);
lean_ctor_set(v___x_3039_, 1, v___f_3035_);
v___x_3040_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3040_, 0, lean_box(0));
lean_closure_set(v___x_3040_, 1, v_inst_3024_);
v___x_3041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
lean_ctor_set(v___x_3041_, 2, v___f_3036_);
lean_ctor_set(v___x_3041_, 3, v___f_3037_);
lean_ctor_set(v___x_3041_, 4, v___f_3038_);
v___x_3042_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3042_, 0, lean_box(0));
lean_closure_set(v___x_3042_, 1, v_inst_3024_);
v___x_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3041_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_3044_, 0, lean_box(0));
lean_closure_set(v___x_3044_, 1, v_inst_3024_);
lean_inc_ref(v___x_3044_);
v___x_3045_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_3044_, v_inst_3025_);
v_toApplicative_3046_ = lean_ctor_get(v_inst_3024_, 0);
lean_inc_ref(v_toApplicative_3046_);
v_getEnv_3047_ = lean_ctor_get(v_inst_3026_, 0);
v_modifyEnv_3048_ = lean_ctor_get(v_inst_3026_, 1);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_inst_3026_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3050_ = v_inst_3026_;
v_isShared_3051_ = v_isSharedCheck_3086_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_modifyEnv_3048_);
lean_inc(v_getEnv_3047_);
lean_dec(v_inst_3026_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3086_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v_toBind_3052_; lean_object* v_toPure_3053_; lean_object* v___f_3054_; lean_object* v___f_3055_; lean_object* v___f_3056_; lean_object* v___x_3057_; lean_object* v___x_3059_; 
v_toBind_3052_ = lean_ctor_get(v_inst_3024_, 1);
lean_inc_n(v_toBind_3052_, 2);
lean_dec_ref(v_inst_3024_);
v_toPure_3053_ = lean_ctor_get(v_toApplicative_3046_, 1);
lean_inc_n(v_toPure_3053_, 3);
lean_dec_ref(v_toApplicative_3046_);
lean_inc_ref(v___x_3044_);
v___f_3054_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3054_, 0, v_modifyEnv_3048_);
lean_closure_set(v___f_3054_, 1, v___x_3044_);
v___f_3055_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3055_, 0, v_toPure_3053_);
v___f_3056_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3056_, 0, v_toPure_3053_);
lean_inc_ref(v___f_3056_);
v___x_3057_ = lean_apply_4(v_toBind_3052_, lean_box(0), lean_box(0), v_getEnv_3047_, v___f_3056_);
if (v_isShared_3051_ == 0)
{
lean_ctor_set(v___x_3050_, 1, v___f_3054_);
lean_ctor_set(v___x_3050_, 0, v___x_3057_);
v___x_3059_ = v___x_3050_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3057_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v___f_3054_);
v___x_3059_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___f_3062_; lean_object* v___y_3064_; 
lean_inc(v_toBind_3052_);
v___x_3060_ = lean_apply_4(v_toBind_3052_, lean_box(0), lean_box(0), v_inst_3027_, v___f_3056_);
lean_inc_ref(v___x_3044_);
v___x_3061_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_3044_, v_inst_3028_);
v___f_3062_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3062_, 0, v_inst_3029_);
lean_closure_set(v___f_3062_, 1, v___x_3044_);
if (lean_obj_tag(v_view_x3f_3032_) == 1)
{
lean_object* v_val_3072_; lean_object* v_imported_3073_; lean_object* v_ctx_3074_; lean_object* v_scopes_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3083_; 
v_val_3072_ = lean_ctor_get(v_view_x3f_3032_, 0);
lean_inc(v_val_3072_);
lean_dec_ref_known(v_view_x3f_3032_, 1);
v_imported_3073_ = lean_ctor_get(v_val_3072_, 1);
v_ctx_3074_ = lean_ctor_get(v_val_3072_, 2);
v_scopes_3075_ = lean_ctor_get(v_val_3072_, 3);
v_isSharedCheck_3083_ = !lean_is_exclusive(v_val_3072_);
if (v_isSharedCheck_3083_ == 0)
{
lean_object* v_unused_3084_; 
v_unused_3084_ = lean_ctor_get(v_val_3072_, 0);
lean_dec(v_unused_3084_);
v___x_3077_ = v_val_3072_;
v_isShared_3078_ = v_isSharedCheck_3083_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_scopes_3075_);
lean_inc(v_ctx_3074_);
lean_inc(v_imported_3073_);
lean_dec(v_val_3072_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3083_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 0, v_n_3033_);
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_n_3033_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_imported_3073_);
lean_ctor_set(v_reuseFailAlloc_3082_, 2, v_ctx_3074_);
lean_ctor_set(v_reuseFailAlloc_3082_, 3, v_scopes_3075_);
v___x_3080_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; 
v___x_3081_ = l_Lean_MacroScopesView_review(v___x_3080_);
v___y_3064_ = v___x_3081_;
goto v___jp_3063_;
}
}
}
else
{
lean_dec(v_view_x3f_3032_);
v___y_3064_ = v_n_3033_;
goto v___jp_3063_;
}
v___jp_3063_:
{
lean_object* v___f_3065_; lean_object* v___f_3066_; lean_object* v___f_3067_; lean_object* v___f_3068_; uint8_t v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
lean_inc_n(v___y_3064_, 2);
lean_inc_n(v_toPure_3053_, 3);
v___f_3065_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3065_, 0, v_toPure_3053_);
lean_closure_set(v___f_3065_, 1, v___y_3064_);
lean_inc_n(v_toBind_3052_, 3);
v___f_3066_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3066_, 0, v_toPure_3053_);
lean_closure_set(v___f_3066_, 1, v_toBind_3052_);
lean_closure_set(v___f_3066_, 2, v___f_3065_);
v___f_3067_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_3067_, 0, v_toPure_3053_);
lean_closure_set(v___f_3067_, 1, v_filter_3031_);
lean_closure_set(v___f_3067_, 2, v___y_3064_);
lean_closure_set(v___f_3067_, 3, v_toBind_3052_);
lean_closure_set(v___f_3067_, 4, v___f_3055_);
lean_closure_set(v___f_3067_, 5, v___f_3066_);
v___f_3068_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_3068_, 0, v_toPure_3053_);
lean_closure_set(v___f_3068_, 1, v_n_u2080_3030_);
lean_closure_set(v___f_3068_, 2, v_toBind_3052_);
lean_closure_set(v___f_3068_, 3, v___f_3067_);
v___x_3069_ = 0;
v___x_3070_ = l_Lean_resolveGlobalName___redArg(v___x_3043_, v___x_3045_, v___x_3059_, v___x_3060_, v___x_3061_, v___f_3062_, v___y_3064_, v___x_3069_);
v___x_3071_ = lean_apply_4(v_toBind_3052_, lean_box(0), lean_box(0), v___x_3070_, v___f_3068_);
return v___x_3071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3087_, lean_object* v_inst_3088_, lean_object* v_inst_3089_, lean_object* v_inst_3090_, lean_object* v_inst_3091_, lean_object* v_inst_3092_, lean_object* v_inst_3093_, lean_object* v_n_u2080_3094_, lean_object* v_filter_3095_, lean_object* v_view_x3f_3096_, lean_object* v_n_3097_){
_start:
{
lean_object* v___x_3098_; 
v___x_3098_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3088_, v_inst_3089_, v_inst_3090_, v_inst_3091_, v_inst_3092_, v_inst_3093_, v_n_u2080_3094_, v_filter_3095_, v_view_x3f_3096_, v_n_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3103_, lean_object* v_____x_3104_){
_start:
{
if (lean_obj_tag(v_____x_3104_) == 0)
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3106_ = lean_apply_2(v_toPure_3103_, lean_box(0), v___x_3105_);
return v___x_3106_;
}
else
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_apply_2(v_toPure_3103_, lean_box(0), v_____x_3104_);
return v___x_3107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3108_, lean_object* v_____do__lift_3109_){
_start:
{
if (lean_obj_tag(v_____do__lift_3109_) == 0)
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = lean_box(0);
v___x_3111_ = lean_apply_2(v_toPure_3108_, lean_box(0), v___x_3110_);
return v___x_3111_;
}
else
{
lean_object* v_val_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3121_; 
v_val_3112_ = lean_ctor_get(v_____do__lift_3109_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_____do__lift_3109_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3114_ = v_____do__lift_3109_;
v_isShared_3115_ = v_isSharedCheck_3121_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_val_3112_);
lean_dec(v_____do__lift_3109_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3121_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3116_; lean_object* v___x_3118_; 
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v_val_3112_);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v___x_3116_);
v___x_3118_ = v___x_3114_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
lean_object* v___x_3119_; 
v___x_3119_ = lean_apply_2(v_toPure_3108_, lean_box(0), v___x_3118_);
return v___x_3119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3122_, lean_object* v___x_3123_, lean_object* v_____do__lift_3124_){
_start:
{
if (lean_obj_tag(v_____do__lift_3124_) == 0)
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_apply_2(v_toPure_3122_, lean_box(0), v___x_3123_);
return v___x_3125_;
}
else
{
lean_object* v_val_3126_; lean_object* v_fst_3127_; lean_object* v___x_3128_; 
lean_dec(v___x_3123_);
v_val_3126_ = lean_ctor_get(v_____do__lift_3124_, 0);
lean_inc(v_val_3126_);
lean_dec_ref_known(v_____do__lift_3124_, 1);
v_fst_3127_ = lean_ctor_get(v_val_3126_, 0);
lean_inc(v_fst_3127_);
lean_dec(v_val_3126_);
v___x_3128_ = lean_apply_2(v_toPure_3122_, lean_box(0), v_fst_3127_);
return v___x_3128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v_____do__lift_3132_){
_start:
{
if (lean_obj_tag(v_____do__lift_3132_) == 0)
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
lean_dec(v___x_3131_);
lean_dec(v___x_3130_);
v___x_3133_ = lean_box(0);
v___x_3134_ = lean_apply_2(v_toPure_3129_, lean_box(0), v___x_3133_);
return v___x_3134_;
}
else
{
lean_object* v_val_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3166_; 
v_val_3135_ = lean_ctor_get(v_____do__lift_3132_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v_____do__lift_3132_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3137_ = v_____do__lift_3132_;
v_isShared_3138_ = v_isSharedCheck_3166_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_val_3135_);
lean_dec(v_____do__lift_3132_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3166_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
if (lean_obj_tag(v_val_3135_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v___x_3131_);
v_a_3139_ = lean_ctor_get(v_val_3135_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v_val_3135_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3141_ = v_val_3135_;
v_isShared_3142_ = v_isSharedCheck_3152_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v_val_3135_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3152_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3144_; 
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v_a_3139_);
v___x_3144_ = v___x_3137_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3139_);
v___x_3144_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; lean_object* v___x_3147_; 
v___x_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
lean_ctor_set(v___x_3145_, 1, v___x_3130_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3145_);
v___x_3147_ = v___x_3141_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3145_);
v___x_3147_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
v___x_3149_ = lean_apply_2(v_toPure_3129_, lean_box(0), v___x_3148_);
return v___x_3149_;
}
}
}
}
else
{
lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3164_; 
v_isSharedCheck_3164_ = !lean_is_exclusive(v_val_3135_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v_val_3135_, 0);
lean_dec(v_unused_3165_);
v___x_3154_ = v_val_3135_;
v_isShared_3155_ = v_isSharedCheck_3164_;
goto v_resetjp_3153_;
}
else
{
lean_dec(v_val_3135_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3164_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
v___x_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3131_);
lean_ctor_set(v___x_3156_, 1, v___x_3130_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3156_);
v___x_3158_ = v___x_3154_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v___x_3156_);
v___x_3158_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
lean_object* v___x_3160_; 
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v___x_3158_);
v___x_3160_ = v___x_3137_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v___x_3158_);
v___x_3160_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; 
v___x_3161_ = lean_apply_2(v_toPure_3129_, lean_box(0), v___x_3160_);
return v___x_3161_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3167_, lean_object* v___x_3168_, lean_object* v_inst_3169_, lean_object* v_inst_3170_, lean_object* v_inst_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_n_u2080_3175_, lean_object* v_filter_3176_, lean_object* v_view_x3f_3177_, lean_object* v_toBind_3178_, lean_object* v___f_3179_, lean_object* v___f_3180_, lean_object* v_a_3181_, lean_object* v_x_3182_, lean_object* v___y_3183_){
_start:
{
lean_object* v_snd_3184_; lean_object* v___x_3185_; lean_object* v___f_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v_snd_3184_ = lean_ctor_get(v___y_3183_, 1);
lean_inc(v_snd_3184_);
lean_dec_ref(v___y_3183_);
v___x_3185_ = l_Lean_Name_appendCore(v_a_3181_, v_snd_3184_);
lean_inc(v___x_3185_);
v___f_3186_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3186_, 0, v_toPure_3167_);
lean_closure_set(v___f_3186_, 1, v___x_3185_);
lean_closure_set(v___f_3186_, 2, v___x_3168_);
v___x_3187_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3169_, v_inst_3170_, v_inst_3171_, v_inst_3172_, v_inst_3173_, v_inst_3174_, v_n_u2080_3175_, v_filter_3176_, v_view_x3f_3177_, v___x_3185_);
lean_inc_n(v_toBind_3178_, 2);
v___x_3188_ = lean_apply_4(v_toBind_3178_, lean_box(0), lean_box(0), v___x_3187_, v___f_3179_);
v___x_3189_ = lean_apply_4(v_toBind_3178_, lean_box(0), lean_box(0), v___x_3188_, v___f_3180_);
v___x_3190_ = lean_apply_4(v_toBind_3178_, lean_box(0), lean_box(0), v___x_3189_, v___f_3186_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3191_ = _args[0];
lean_object* v___x_3192_ = _args[1];
lean_object* v_inst_3193_ = _args[2];
lean_object* v_inst_3194_ = _args[3];
lean_object* v_inst_3195_ = _args[4];
lean_object* v_inst_3196_ = _args[5];
lean_object* v_inst_3197_ = _args[6];
lean_object* v_inst_3198_ = _args[7];
lean_object* v_n_u2080_3199_ = _args[8];
lean_object* v_filter_3200_ = _args[9];
lean_object* v_view_x3f_3201_ = _args[10];
lean_object* v_toBind_3202_ = _args[11];
lean_object* v___f_3203_ = _args[12];
lean_object* v___f_3204_ = _args[13];
lean_object* v_a_3205_ = _args[14];
lean_object* v_x_3206_ = _args[15];
lean_object* v___y_3207_ = _args[16];
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3191_, v___x_3192_, v_inst_3193_, v_inst_3194_, v_inst_3195_, v_inst_3196_, v_inst_3197_, v_inst_3198_, v_n_u2080_3199_, v_filter_3200_, v_view_x3f_3201_, v_toBind_3202_, v___f_3203_, v___f_3204_, v_a_3205_, v_x_3206_, v___y_3207_);
lean_dec(v_a_3205_);
return v_res_3208_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = lean_obj_once(&l_Lean_isReservedName___closed__1, &l_Lean_isReservedName___closed__1_once, _init_l_Lean_isReservedName___closed__1);
v___x_3210_ = lean_box(0);
v___x_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
lean_ctor_set(v___x_3211_, 1, v___x_3209_);
return v___x_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3212_, lean_object* v_n_3213_, lean_object* v_inst_3214_, lean_object* v_inst_3215_, lean_object* v_inst_3216_, lean_object* v_inst_3217_, lean_object* v_inst_3218_, lean_object* v_inst_3219_, lean_object* v_n_u2080_3220_, lean_object* v_filter_3221_, lean_object* v_view_x3f_3222_, lean_object* v_toBind_3223_, lean_object* v___f_3224_, lean_object* v___f_3225_, lean_object* v___x_3226_, lean_object* v_____do__lift_3227_){
_start:
{
if (lean_obj_tag(v_____do__lift_3227_) == 0)
{
lean_object* v___x_3228_; lean_object* v___x_3229_; 
lean_dec_ref(v___x_3226_);
lean_dec(v___f_3225_);
lean_dec(v___f_3224_);
lean_dec(v_toBind_3223_);
lean_dec(v_view_x3f_3222_);
lean_dec(v_filter_3221_);
lean_dec(v_n_u2080_3220_);
lean_dec(v_inst_3219_);
lean_dec_ref(v_inst_3218_);
lean_dec(v_inst_3217_);
lean_dec_ref(v_inst_3216_);
lean_dec_ref(v_inst_3215_);
lean_dec_ref(v_inst_3214_);
lean_dec(v_n_3213_);
v___x_3228_ = lean_box(0);
v___x_3229_ = lean_apply_2(v_toPure_3212_, lean_box(0), v___x_3228_);
return v___x_3229_;
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___f_3233_; lean_object* v___f_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3230_ = l_Lean_privateToUserName(v_n_3213_);
v___x_3231_ = l_Lean_Name_componentsRev(v___x_3230_);
v___x_3232_ = lean_box(0);
lean_inc(v_toPure_3212_);
v___f_3233_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3233_, 0, v_toPure_3212_);
lean_closure_set(v___f_3233_, 1, v___x_3232_);
lean_inc(v_toBind_3223_);
v___f_3234_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3234_, 0, v_toPure_3212_);
lean_closure_set(v___f_3234_, 1, v___x_3232_);
lean_closure_set(v___f_3234_, 2, v_inst_3214_);
lean_closure_set(v___f_3234_, 3, v_inst_3215_);
lean_closure_set(v___f_3234_, 4, v_inst_3216_);
lean_closure_set(v___f_3234_, 5, v_inst_3217_);
lean_closure_set(v___f_3234_, 6, v_inst_3218_);
lean_closure_set(v___f_3234_, 7, v_inst_3219_);
lean_closure_set(v___f_3234_, 8, v_n_u2080_3220_);
lean_closure_set(v___f_3234_, 9, v_filter_3221_);
lean_closure_set(v___f_3234_, 10, v_view_x3f_3222_);
lean_closure_set(v___f_3234_, 11, v_toBind_3223_);
lean_closure_set(v___f_3234_, 12, v___f_3224_);
lean_closure_set(v___f_3234_, 13, v___f_3225_);
v___x_3235_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0, &l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_once, _init_l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0);
v___x_3236_ = l_List_forIn_x27_loop___redArg(v___x_3226_, v___f_3234_, v___x_3231_, v___x_3235_);
lean_dec(v___x_3231_);
v___x_3237_ = lean_apply_4(v_toBind_3223_, lean_box(0), lean_box(0), v___x_3236_, v___f_3233_);
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3238_, lean_object* v_n_3239_, lean_object* v_inst_3240_, lean_object* v_inst_3241_, lean_object* v_inst_3242_, lean_object* v_inst_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_n_u2080_3246_, lean_object* v_filter_3247_, lean_object* v_view_x3f_3248_, lean_object* v_toBind_3249_, lean_object* v___f_3250_, lean_object* v___f_3251_, lean_object* v___x_3252_, lean_object* v_____do__lift_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3238_, v_n_3239_, v_inst_3240_, v_inst_3241_, v_inst_3242_, v_inst_3243_, v_inst_3244_, v_inst_3245_, v_n_u2080_3246_, v_filter_3247_, v_view_x3f_3248_, v_toBind_3249_, v___f_3250_, v___f_3251_, v___x_3252_, v_____do__lift_3253_);
lean_dec(v_____do__lift_3253_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3255_, lean_object* v_inst_3256_, lean_object* v_inst_3257_, lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_n_u2080_3261_, lean_object* v_filter_3262_, lean_object* v_view_x3f_3263_, lean_object* v_n_3264_){
_start:
{
lean_object* v___f_3265_; lean_object* v___f_3266_; lean_object* v___f_3267_; lean_object* v___f_3268_; lean_object* v___f_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___y_3276_; uint8_t v___x_3284_; 
lean_inc_ref_n(v_inst_3255_, 7);
v___f_3265_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3265_, 0, v_inst_3255_);
v___f_3266_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3266_, 0, v_inst_3255_);
v___f_3267_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3267_, 0, v_inst_3255_);
v___f_3268_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3268_, 0, v_inst_3255_);
v___f_3269_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3269_, 0, v_inst_3255_);
v___x_3270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___f_3265_);
lean_ctor_set(v___x_3270_, 1, v___f_3266_);
v___x_3271_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3271_, 0, lean_box(0));
lean_closure_set(v___x_3271_, 1, v_inst_3255_);
v___x_3272_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
lean_ctor_set(v___x_3272_, 2, v___f_3267_);
lean_ctor_set(v___x_3272_, 3, v___f_3268_);
lean_ctor_set(v___x_3272_, 4, v___f_3269_);
v___x_3273_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3273_, 0, lean_box(0));
lean_closure_set(v___x_3273_, 1, v_inst_3255_);
v___x_3274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3272_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3284_ = l_Lean_Name_hasMacroScopes(v_n_3264_);
if (v___x_3284_ == 0)
{
lean_object* v_toApplicative_3285_; lean_object* v_toPure_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v_toApplicative_3285_ = lean_ctor_get(v_inst_3255_, 0);
v_toPure_3286_ = lean_ctor_get(v_toApplicative_3285_, 1);
v___x_3287_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3286_);
v___x_3288_ = lean_apply_2(v_toPure_3286_, lean_box(0), v___x_3287_);
v___y_3276_ = v___x_3288_;
goto v___jp_3275_;
}
else
{
lean_object* v_toApplicative_3289_; lean_object* v_toPure_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v_toApplicative_3289_ = lean_ctor_get(v_inst_3255_, 0);
v_toPure_3290_ = lean_ctor_get(v_toApplicative_3289_, 1);
v___x_3291_ = lean_box(0);
lean_inc(v_toPure_3290_);
v___x_3292_ = lean_apply_2(v_toPure_3290_, lean_box(0), v___x_3291_);
v___y_3276_ = v___x_3292_;
goto v___jp_3275_;
}
v___jp_3275_:
{
lean_object* v_toApplicative_3277_; lean_object* v_toBind_3278_; lean_object* v_toPure_3279_; lean_object* v___f_3280_; lean_object* v___f_3281_; lean_object* v___f_3282_; lean_object* v___x_3283_; 
v_toApplicative_3277_ = lean_ctor_get(v_inst_3255_, 0);
v_toBind_3278_ = lean_ctor_get(v_inst_3255_, 1);
lean_inc_n(v_toBind_3278_, 2);
v_toPure_3279_ = lean_ctor_get(v_toApplicative_3277_, 1);
lean_inc_n(v_toPure_3279_, 3);
v___f_3280_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3280_, 0, v_toPure_3279_);
v___f_3281_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3281_, 0, v_toPure_3279_);
v___f_3282_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3282_, 0, v_toPure_3279_);
lean_closure_set(v___f_3282_, 1, v_n_3264_);
lean_closure_set(v___f_3282_, 2, v_inst_3255_);
lean_closure_set(v___f_3282_, 3, v_inst_3256_);
lean_closure_set(v___f_3282_, 4, v_inst_3257_);
lean_closure_set(v___f_3282_, 5, v_inst_3258_);
lean_closure_set(v___f_3282_, 6, v_inst_3259_);
lean_closure_set(v___f_3282_, 7, v_inst_3260_);
lean_closure_set(v___f_3282_, 8, v_n_u2080_3261_);
lean_closure_set(v___f_3282_, 9, v_filter_3262_);
lean_closure_set(v___f_3282_, 10, v_view_x3f_3263_);
lean_closure_set(v___f_3282_, 11, v_toBind_3278_);
lean_closure_set(v___f_3282_, 12, v___f_3281_);
lean_closure_set(v___f_3282_, 13, v___f_3280_);
lean_closure_set(v___f_3282_, 14, v___x_3274_);
v___x_3283_ = lean_apply_4(v_toBind_3278_, lean_box(0), lean_box(0), v___y_3276_, v___f_3282_);
return v___x_3283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3293_, lean_object* v_inst_3294_, lean_object* v_inst_3295_, lean_object* v_inst_3296_, lean_object* v_inst_3297_, lean_object* v_inst_3298_, lean_object* v_inst_3299_, lean_object* v_n_u2080_3300_, lean_object* v_filter_3301_, lean_object* v_view_x3f_3302_, lean_object* v_n_3303_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3294_, v_inst_3295_, v_inst_3296_, v_inst_3297_, v_inst_3298_, v_inst_3299_, v_n_u2080_3300_, v_filter_3301_, v_view_x3f_3302_, v_n_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3305_, lean_object* v_x1_3306_, lean_object* v_x2_3307_){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___x_3308_ = l_Lean_Name_getPrefix(v_x2_3307_);
v___x_3309_ = l_Lean_Name_getPrefix(v_n_u2081_3305_);
v___x_3310_ = l_Lean_Name_isPrefixOf(v___x_3308_, v___x_3309_);
lean_dec(v___x_3309_);
lean_dec(v___x_3308_);
if (v___x_3310_ == 0)
{
lean_dec(v_x2_3307_);
return v_x1_3306_;
}
else
{
lean_object* v___x_3311_; 
v___x_3311_ = lean_array_push(v_x1_3306_, v_x2_3307_);
return v___x_3311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3312_, lean_object* v_x1_3313_, lean_object* v_x2_3314_){
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3312_, v_x1_3313_, v_x2_3314_);
lean_dec(v_n_u2081_3312_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3316_, lean_object* v_n_u2081_3317_, lean_object* v_inst_3318_, lean_object* v_inst_3319_, lean_object* v_inst_3320_, lean_object* v_inst_3321_, lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_n_u2080_3324_, lean_object* v_filter_3325_, lean_object* v_toPure_3326_, lean_object* v_____do__lift_3327_){
_start:
{
if (lean_obj_tag(v_____do__lift_3327_) == 0)
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
lean_dec(v_toPure_3326_);
v___x_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3328_, 0, v_view_3316_);
v___x_3329_ = l_Lean_rootNamespace;
v___x_3330_ = l_Lean_Name_append(v___x_3329_, v_n_u2081_3317_);
v___x_3331_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3318_, v_inst_3319_, v_inst_3320_, v_inst_3321_, v_inst_3322_, v_inst_3323_, v_n_u2080_3324_, v_filter_3325_, v___x_3328_, v___x_3330_);
return v___x_3331_;
}
else
{
lean_object* v___x_3332_; 
lean_dec(v_filter_3325_);
lean_dec(v_n_u2080_3324_);
lean_dec(v_inst_3323_);
lean_dec_ref(v_inst_3322_);
lean_dec(v_inst_3321_);
lean_dec_ref(v_inst_3320_);
lean_dec_ref(v_inst_3319_);
lean_dec_ref(v_inst_3318_);
lean_dec(v_n_u2081_3317_);
lean_dec_ref(v_view_3316_);
v___x_3332_ = lean_apply_2(v_toPure_3326_, lean_box(0), v_____do__lift_3327_);
return v___x_3332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3333_, lean_object* v_inst_3334_, lean_object* v_inst_3335_, lean_object* v_inst_3336_, lean_object* v_inst_3337_, lean_object* v_inst_3338_, lean_object* v_inst_3339_, lean_object* v_n_u2080_3340_, lean_object* v_filter_3341_, lean_object* v___x_3342_, lean_object* v_toBind_3343_, lean_object* v___f_3344_, uint8_t v_allowHorizAliases_3345_, lean_object* v___f_3346_, lean_object* v_____do__lift_3347_){
_start:
{
lean_object* v_aliases_3349_; 
if (lean_obj_tag(v_____do__lift_3347_) == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
lean_dec_ref(v___f_3346_);
lean_dec(v___f_3344_);
lean_dec(v_toBind_3343_);
lean_dec_ref(v___x_3342_);
lean_dec(v_filter_3341_);
lean_dec(v_n_u2080_3340_);
lean_dec(v_inst_3339_);
lean_dec_ref(v_inst_3338_);
lean_dec(v_inst_3337_);
lean_dec_ref(v_inst_3336_);
lean_dec_ref(v_inst_3335_);
lean_dec_ref(v_inst_3334_);
v___x_3355_ = lean_box(0);
v___x_3356_ = lean_apply_2(v_toPure_3333_, lean_box(0), v___x_3355_);
return v___x_3356_;
}
else
{
lean_object* v_val_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v_toPure_3333_);
v_val_3357_ = lean_ctor_get(v_____do__lift_3347_, 0);
lean_inc(v_val_3357_);
lean_dec_ref_known(v_____do__lift_3347_, 1);
lean_inc(v_n_u2080_3340_);
v___x_3358_ = l_Lean_getRevAliases(v_val_3357_, v_n_u2080_3340_);
v___x_3359_ = lean_array_mk(v___x_3358_);
if (v_allowHorizAliases_3345_ == 0)
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = lean_array_get_size(v___x_3359_);
v___x_3362_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3363_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3364_ = lean_nat_dec_lt(v___x_3360_, v___x_3361_);
if (v___x_3364_ == 0)
{
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___f_3346_);
v_aliases_3349_ = v___x_3362_;
goto v___jp_3348_;
}
else
{
uint8_t v___x_3365_; 
v___x_3365_ = lean_nat_dec_le(v___x_3361_, v___x_3361_);
if (v___x_3365_ == 0)
{
if (v___x_3364_ == 0)
{
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___f_3346_);
v_aliases_3349_ = v___x_3362_;
goto v___jp_3348_;
}
else
{
size_t v___x_3366_; size_t v___x_3367_; lean_object* v___x_3368_; 
v___x_3366_ = ((size_t)0ULL);
v___x_3367_ = lean_usize_of_nat(v___x_3361_);
v___x_3368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3363_, v___f_3346_, v___x_3359_, v___x_3366_, v___x_3367_, v___x_3362_);
v_aliases_3349_ = v___x_3368_;
goto v___jp_3348_;
}
}
else
{
size_t v___x_3369_; size_t v___x_3370_; lean_object* v___x_3371_; 
v___x_3369_ = ((size_t)0ULL);
v___x_3370_ = lean_usize_of_nat(v___x_3361_);
v___x_3371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3363_, v___f_3346_, v___x_3359_, v___x_3369_, v___x_3370_, v___x_3362_);
v_aliases_3349_ = v___x_3371_;
goto v___jp_3348_;
}
}
}
else
{
lean_dec_ref(v___f_3346_);
v_aliases_3349_ = v___x_3359_;
goto v___jp_3348_;
}
}
v___jp_3348_:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3350_ = lean_box(0);
v___x_3351_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3351_, 0, lean_box(0));
lean_closure_set(v___x_3351_, 1, v_inst_3334_);
lean_closure_set(v___x_3351_, 2, v_inst_3335_);
lean_closure_set(v___x_3351_, 3, v_inst_3336_);
lean_closure_set(v___x_3351_, 4, v_inst_3337_);
lean_closure_set(v___x_3351_, 5, v_inst_3338_);
lean_closure_set(v___x_3351_, 6, v_inst_3339_);
lean_closure_set(v___x_3351_, 7, v_n_u2080_3340_);
lean_closure_set(v___x_3351_, 8, v_filter_3341_);
lean_closure_set(v___x_3351_, 9, v___x_3350_);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3342_, v___x_3351_, v_aliases_3349_, v___x_3352_);
v___x_3354_ = lean_apply_4(v_toBind_3343_, lean_box(0), lean_box(0), v___x_3353_, v___f_3344_);
return v___x_3354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3372_, lean_object* v_inst_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_inst_3376_, lean_object* v_inst_3377_, lean_object* v_inst_3378_, lean_object* v_n_u2080_3379_, lean_object* v_filter_3380_, lean_object* v___x_3381_, lean_object* v_toBind_3382_, lean_object* v___f_3383_, lean_object* v_allowHorizAliases_3384_, lean_object* v___f_3385_, lean_object* v_____do__lift_3386_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3387_; lean_object* v_res_3388_; 
v_allowHorizAliases_boxed_3387_ = lean_unbox(v_allowHorizAliases_3384_);
v_res_3388_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3372_, v_inst_3373_, v_inst_3374_, v_inst_3375_, v_inst_3376_, v_inst_3377_, v_inst_3378_, v_n_u2080_3379_, v_filter_3380_, v___x_3381_, v_toBind_3382_, v___f_3383_, v_allowHorizAliases_boxed_3387_, v___f_3385_, v_____do__lift_3386_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3389_, lean_object* v_____do__lift_3390_){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_____do__lift_3390_);
v___x_3392_ = lean_apply_2(v_toPure_3389_, lean_box(0), v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3393_, lean_object* v_inst_3394_, lean_object* v_inst_3395_, lean_object* v_inst_3396_, lean_object* v_inst_3397_, lean_object* v_inst_3398_, lean_object* v_inst_3399_, lean_object* v_n_u2080_3400_, lean_object* v_filter_3401_, lean_object* v___x_3402_, lean_object* v_toPure_3403_, lean_object* v_____do__lift_3404_){
_start:
{
if (lean_obj_tag(v_____do__lift_3404_) == 0)
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
lean_dec(v_toPure_3403_);
v___x_3405_ = l_Lean_rootNamespace;
v___x_3406_ = l_Lean_Name_append(v___x_3405_, v_n_u2081_3393_);
v___x_3407_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3394_, v_inst_3395_, v_inst_3396_, v_inst_3397_, v_inst_3398_, v_inst_3399_, v_n_u2080_3400_, v_filter_3401_, v___x_3402_, v___x_3406_);
return v___x_3407_;
}
else
{
lean_object* v___x_3408_; 
lean_dec(v___x_3402_);
lean_dec(v_filter_3401_);
lean_dec(v_n_u2080_3400_);
lean_dec(v_inst_3399_);
lean_dec_ref(v_inst_3398_);
lean_dec(v_inst_3397_);
lean_dec_ref(v_inst_3396_);
lean_dec_ref(v_inst_3395_);
lean_dec_ref(v_inst_3394_);
lean_dec(v_n_u2081_3393_);
v___x_3408_ = lean_apply_2(v_toPure_3403_, lean_box(0), v_____do__lift_3404_);
return v___x_3408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3409_, lean_object* v_inst_3410_, lean_object* v_inst_3411_, lean_object* v_inst_3412_, lean_object* v_inst_3413_, lean_object* v_inst_3414_, lean_object* v_n_u2080_3415_, uint8_t v_fullNames_3416_, uint8_t v_allowHorizAliases_3417_, lean_object* v_filter_3418_){
_start:
{
lean_object* v_view_3419_; lean_object* v_name_3420_; lean_object* v_n_u2081_3421_; lean_object* v___x_3422_; 
lean_inc(v_n_u2080_3415_);
v_view_3419_ = l_Lean_extractMacroScopes(v_n_u2080_3415_);
v_name_3420_ = lean_ctor_get(v_view_3419_, 0);
lean_inc(v_name_3420_);
v_n_u2081_3421_ = l_Lean_privateToUserName(v_name_3420_);
lean_inc_ref(v_inst_3409_);
v___x_3422_ = l_OptionT_instAlternative___redArg(v_inst_3409_);
if (v_fullNames_3416_ == 0)
{
lean_object* v_toApplicative_3423_; lean_object* v_getEnv_3424_; lean_object* v_toBind_3425_; lean_object* v_toPure_3426_; lean_object* v___f_3427_; lean_object* v___f_3428_; lean_object* v___x_3429_; lean_object* v___f_3430_; lean_object* v___f_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_toApplicative_3423_ = lean_ctor_get(v_inst_3409_, 0);
v_getEnv_3424_ = lean_ctor_get(v_inst_3411_, 0);
lean_inc(v_getEnv_3424_);
v_toBind_3425_ = lean_ctor_get(v_inst_3409_, 1);
lean_inc_n(v_toBind_3425_, 3);
v_toPure_3426_ = lean_ctor_get(v_toApplicative_3423_, 1);
lean_inc_n(v_toPure_3426_, 3);
lean_inc(v_n_u2081_3421_);
v___f_3427_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3427_, 0, v_n_u2081_3421_);
lean_inc(v_filter_3418_);
lean_inc(v_n_u2080_3415_);
lean_inc(v_inst_3414_);
lean_inc_ref(v_inst_3413_);
lean_inc(v_inst_3412_);
lean_inc_ref(v_inst_3411_);
lean_inc_ref(v_inst_3410_);
lean_inc_ref(v_inst_3409_);
v___f_3428_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3428_, 0, v_view_3419_);
lean_closure_set(v___f_3428_, 1, v_n_u2081_3421_);
lean_closure_set(v___f_3428_, 2, v_inst_3409_);
lean_closure_set(v___f_3428_, 3, v_inst_3410_);
lean_closure_set(v___f_3428_, 4, v_inst_3411_);
lean_closure_set(v___f_3428_, 5, v_inst_3412_);
lean_closure_set(v___f_3428_, 6, v_inst_3413_);
lean_closure_set(v___f_3428_, 7, v_inst_3414_);
lean_closure_set(v___f_3428_, 8, v_n_u2080_3415_);
lean_closure_set(v___f_3428_, 9, v_filter_3418_);
lean_closure_set(v___f_3428_, 10, v_toPure_3426_);
v___x_3429_ = lean_box(v_allowHorizAliases_3417_);
v___f_3430_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_3430_, 0, v_toPure_3426_);
lean_closure_set(v___f_3430_, 1, v_inst_3409_);
lean_closure_set(v___f_3430_, 2, v_inst_3410_);
lean_closure_set(v___f_3430_, 3, v_inst_3411_);
lean_closure_set(v___f_3430_, 4, v_inst_3412_);
lean_closure_set(v___f_3430_, 5, v_inst_3413_);
lean_closure_set(v___f_3430_, 6, v_inst_3414_);
lean_closure_set(v___f_3430_, 7, v_n_u2080_3415_);
lean_closure_set(v___f_3430_, 8, v_filter_3418_);
lean_closure_set(v___f_3430_, 9, v___x_3422_);
lean_closure_set(v___f_3430_, 10, v_toBind_3425_);
lean_closure_set(v___f_3430_, 11, v___f_3428_);
lean_closure_set(v___f_3430_, 12, v___x_3429_);
lean_closure_set(v___f_3430_, 13, v___f_3427_);
v___f_3431_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3431_, 0, v_toPure_3426_);
v___x_3432_ = lean_apply_4(v_toBind_3425_, lean_box(0), lean_box(0), v_getEnv_3424_, v___f_3431_);
v___x_3433_ = lean_apply_4(v_toBind_3425_, lean_box(0), lean_box(0), v___x_3432_, v___f_3430_);
return v___x_3433_;
}
else
{
lean_object* v_toApplicative_3434_; lean_object* v_toBind_3435_; lean_object* v_toPure_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___f_3439_; lean_object* v___x_3440_; 
lean_dec_ref(v___x_3422_);
v_toApplicative_3434_ = lean_ctor_get(v_inst_3409_, 0);
v_toBind_3435_ = lean_ctor_get(v_inst_3409_, 1);
lean_inc(v_toBind_3435_);
v_toPure_3436_ = lean_ctor_get(v_toApplicative_3434_, 1);
lean_inc(v_toPure_3436_);
v___x_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3437_, 0, v_view_3419_);
lean_inc(v_n_u2081_3421_);
lean_inc_ref(v___x_3437_);
lean_inc(v_filter_3418_);
lean_inc(v_n_u2080_3415_);
lean_inc(v_inst_3414_);
lean_inc_ref(v_inst_3413_);
lean_inc(v_inst_3412_);
lean_inc_ref(v_inst_3411_);
lean_inc_ref(v_inst_3410_);
lean_inc_ref(v_inst_3409_);
v___x_3438_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3409_, v_inst_3410_, v_inst_3411_, v_inst_3412_, v_inst_3413_, v_inst_3414_, v_n_u2080_3415_, v_filter_3418_, v___x_3437_, v_n_u2081_3421_);
v___f_3439_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3439_, 0, v_n_u2081_3421_);
lean_closure_set(v___f_3439_, 1, v_inst_3409_);
lean_closure_set(v___f_3439_, 2, v_inst_3410_);
lean_closure_set(v___f_3439_, 3, v_inst_3411_);
lean_closure_set(v___f_3439_, 4, v_inst_3412_);
lean_closure_set(v___f_3439_, 5, v_inst_3413_);
lean_closure_set(v___f_3439_, 6, v_inst_3414_);
lean_closure_set(v___f_3439_, 7, v_n_u2080_3415_);
lean_closure_set(v___f_3439_, 8, v_filter_3418_);
lean_closure_set(v___f_3439_, 9, v___x_3437_);
lean_closure_set(v___f_3439_, 10, v_toPure_3436_);
v___x_3440_ = lean_apply_4(v_toBind_3435_, lean_box(0), lean_box(0), v___x_3438_, v___f_3439_);
return v___x_3440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3441_, lean_object* v_inst_3442_, lean_object* v_inst_3443_, lean_object* v_inst_3444_, lean_object* v_inst_3445_, lean_object* v_inst_3446_, lean_object* v_n_u2080_3447_, lean_object* v_fullNames_3448_, lean_object* v_allowHorizAliases_3449_, lean_object* v_filter_3450_){
_start:
{
uint8_t v_fullNames_boxed_3451_; uint8_t v_allowHorizAliases_boxed_3452_; lean_object* v_res_3453_; 
v_fullNames_boxed_3451_ = lean_unbox(v_fullNames_3448_);
v_allowHorizAliases_boxed_3452_ = lean_unbox(v_allowHorizAliases_3449_);
v_res_3453_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3441_, v_inst_3442_, v_inst_3443_, v_inst_3444_, v_inst_3445_, v_inst_3446_, v_n_u2080_3447_, v_fullNames_boxed_3451_, v_allowHorizAliases_boxed_3452_, v_filter_3450_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3454_, lean_object* v_inst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_inst_3458_, lean_object* v_inst_3459_, lean_object* v_inst_3460_, lean_object* v_n_u2080_3461_, uint8_t v_fullNames_3462_, uint8_t v_allowHorizAliases_3463_, lean_object* v_filter_3464_){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3455_, v_inst_3456_, v_inst_3457_, v_inst_3458_, v_inst_3459_, v_inst_3460_, v_n_u2080_3461_, v_fullNames_3462_, v_allowHorizAliases_3463_, v_filter_3464_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_inst_3472_, lean_object* v_n_u2080_3473_, lean_object* v_fullNames_3474_, lean_object* v_allowHorizAliases_3475_, lean_object* v_filter_3476_){
_start:
{
uint8_t v_fullNames_boxed_3477_; uint8_t v_allowHorizAliases_boxed_3478_; lean_object* v_res_3479_; 
v_fullNames_boxed_3477_ = lean_unbox(v_fullNames_3474_);
v_allowHorizAliases_boxed_3478_ = lean_unbox(v_allowHorizAliases_3475_);
v_res_3479_ = l_Lean_unresolveNameGlobal_x3f(v_m_3466_, v_inst_3467_, v_inst_3468_, v_inst_3469_, v_inst_3470_, v_inst_3471_, v_inst_3472_, v_n_u2080_3473_, v_fullNames_boxed_3477_, v_allowHorizAliases_boxed_3478_, v_filter_3476_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3480_, lean_object* v_n_u2080_3481_, lean_object* v_n_x3f_3482_){
_start:
{
if (lean_obj_tag(v_n_x3f_3482_) == 0)
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_apply_2(v_toPure_3480_, lean_box(0), v_n_u2080_3481_);
return v___x_3483_;
}
else
{
lean_object* v_val_3484_; lean_object* v___x_3485_; 
lean_dec(v_n_u2080_3481_);
v_val_3484_ = lean_ctor_get(v_n_x3f_3482_, 0);
lean_inc(v_val_3484_);
lean_dec_ref_known(v_n_x3f_3482_, 1);
v___x_3485_ = lean_apply_2(v_toPure_3480_, lean_box(0), v_val_3484_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3486_, lean_object* v_inst_3487_, lean_object* v_inst_3488_, lean_object* v_inst_3489_, lean_object* v_inst_3490_, lean_object* v_inst_3491_, lean_object* v_n_u2080_3492_, uint8_t v_fullNames_3493_, uint8_t v_allowHorizAliases_3494_, lean_object* v_filter_3495_){
_start:
{
lean_object* v_toApplicative_3496_; lean_object* v_toBind_3497_; lean_object* v_toPure_3498_; lean_object* v___x_3499_; lean_object* v___f_3500_; lean_object* v___x_3501_; 
v_toApplicative_3496_ = lean_ctor_get(v_inst_3486_, 0);
v_toBind_3497_ = lean_ctor_get(v_inst_3486_, 1);
lean_inc(v_toBind_3497_);
v_toPure_3498_ = lean_ctor_get(v_toApplicative_3496_, 1);
lean_inc(v_toPure_3498_);
lean_inc(v_n_u2080_3492_);
v___x_3499_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3486_, v_inst_3487_, v_inst_3488_, v_inst_3489_, v_inst_3490_, v_inst_3491_, v_n_u2080_3492_, v_fullNames_3493_, v_allowHorizAliases_3494_, v_filter_3495_);
v___f_3500_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3500_, 0, v_toPure_3498_);
lean_closure_set(v___f_3500_, 1, v_n_u2080_3492_);
v___x_3501_ = lean_apply_4(v_toBind_3497_, lean_box(0), lean_box(0), v___x_3499_, v___f_3500_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3502_, lean_object* v_inst_3503_, lean_object* v_inst_3504_, lean_object* v_inst_3505_, lean_object* v_inst_3506_, lean_object* v_inst_3507_, lean_object* v_n_u2080_3508_, lean_object* v_fullNames_3509_, lean_object* v_allowHorizAliases_3510_, lean_object* v_filter_3511_){
_start:
{
uint8_t v_fullNames_boxed_3512_; uint8_t v_allowHorizAliases_boxed_3513_; lean_object* v_res_3514_; 
v_fullNames_boxed_3512_ = lean_unbox(v_fullNames_3509_);
v_allowHorizAliases_boxed_3513_ = lean_unbox(v_allowHorizAliases_3510_);
v_res_3514_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3502_, v_inst_3503_, v_inst_3504_, v_inst_3505_, v_inst_3506_, v_inst_3507_, v_n_u2080_3508_, v_fullNames_boxed_3512_, v_allowHorizAliases_boxed_3513_, v_filter_3511_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3515_, lean_object* v_inst_3516_, lean_object* v_inst_3517_, lean_object* v_inst_3518_, lean_object* v_inst_3519_, lean_object* v_inst_3520_, lean_object* v_inst_3521_, lean_object* v_n_u2080_3522_, uint8_t v_fullNames_3523_, uint8_t v_allowHorizAliases_3524_, lean_object* v_filter_3525_){
_start:
{
lean_object* v___x_3526_; 
v___x_3526_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3516_, v_inst_3517_, v_inst_3518_, v_inst_3519_, v_inst_3520_, v_inst_3521_, v_n_u2080_3522_, v_fullNames_3523_, v_allowHorizAliases_3524_, v_filter_3525_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3527_, lean_object* v_inst_3528_, lean_object* v_inst_3529_, lean_object* v_inst_3530_, lean_object* v_inst_3531_, lean_object* v_inst_3532_, lean_object* v_inst_3533_, lean_object* v_n_u2080_3534_, lean_object* v_fullNames_3535_, lean_object* v_allowHorizAliases_3536_, lean_object* v_filter_3537_){
_start:
{
uint8_t v_fullNames_boxed_3538_; uint8_t v_allowHorizAliases_boxed_3539_; lean_object* v_res_3540_; 
v_fullNames_boxed_3538_ = lean_unbox(v_fullNames_3535_);
v_allowHorizAliases_boxed_3539_ = lean_unbox(v_allowHorizAliases_3536_);
v_res_3540_ = l_Lean_unresolveNameGlobal(v_m_3527_, v_inst_3528_, v_inst_3529_, v_inst_3530_, v_inst_3531_, v_inst_3532_, v_inst_3533_, v_n_u2080_3534_, v_fullNames_boxed_3538_, v_allowHorizAliases_boxed_3539_, v_filter_3537_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3542_, lean_object* v_inst_3543_, lean_object* v_inst_3544_, lean_object* v_inst_3545_, lean_object* v_inst_3546_, lean_object* v_inst_3547_, lean_object* v_inst_3548_, lean_object* v_inst_3549_, lean_object* v_n_3550_){
_start:
{
lean_object* v_map_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v_map_3551_ = lean_ctor_get(v_toFunctor_3542_, 0);
lean_inc(v_map_3551_);
lean_dec_ref(v_toFunctor_3542_);
v___x_3552_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3553_ = l_Lean_resolveLocalName___redArg(v_inst_3543_, v_inst_3544_, v_inst_3545_, v_inst_3546_, v_inst_3547_, v_inst_3548_, v_inst_3549_, v_n_3550_);
v___x_3554_ = lean_apply_4(v_map_3551_, lean_box(0), lean_box(0), v___x_3552_, v___x_3553_);
return v___x_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3555_, lean_object* v_inst_3556_, lean_object* v_inst_3557_, lean_object* v_inst_3558_, lean_object* v_inst_3559_, lean_object* v_inst_3560_, lean_object* v_inst_3561_, lean_object* v_n_u2080_3562_, uint8_t v_fullNames_3563_){
_start:
{
lean_object* v_toApplicative_3564_; lean_object* v_toFunctor_3565_; uint8_t v___x_3566_; lean_object* v___f_3567_; lean_object* v___x_3568_; 
v_toApplicative_3564_ = lean_ctor_get(v_inst_3555_, 0);
v_toFunctor_3565_ = lean_ctor_get(v_toApplicative_3564_, 0);
v___x_3566_ = 0;
lean_inc(v_inst_3560_);
lean_inc_ref(v_inst_3559_);
lean_inc(v_inst_3558_);
lean_inc_ref(v_inst_3557_);
lean_inc_ref(v_inst_3556_);
lean_inc_ref(v_inst_3555_);
lean_inc_ref(v_toFunctor_3565_);
v___f_3567_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3567_, 0, v_toFunctor_3565_);
lean_closure_set(v___f_3567_, 1, v_inst_3555_);
lean_closure_set(v___f_3567_, 2, v_inst_3556_);
lean_closure_set(v___f_3567_, 3, v_inst_3557_);
lean_closure_set(v___f_3567_, 4, v_inst_3558_);
lean_closure_set(v___f_3567_, 5, v_inst_3559_);
lean_closure_set(v___f_3567_, 6, v_inst_3560_);
lean_closure_set(v___f_3567_, 7, v_inst_3561_);
v___x_3568_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3555_, v_inst_3556_, v_inst_3557_, v_inst_3558_, v_inst_3559_, v_inst_3560_, v_n_u2080_3562_, v_fullNames_3563_, v___x_3566_, v___f_3567_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_inst_3574_, lean_object* v_inst_3575_, lean_object* v_n_u2080_3576_, lean_object* v_fullNames_3577_){
_start:
{
uint8_t v_fullNames_boxed_3578_; lean_object* v_res_3579_; 
v_fullNames_boxed_3578_ = lean_unbox(v_fullNames_3577_);
v_res_3579_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3569_, v_inst_3570_, v_inst_3571_, v_inst_3572_, v_inst_3573_, v_inst_3574_, v_inst_3575_, v_n_u2080_3576_, v_fullNames_boxed_3578_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3580_, lean_object* v_inst_3581_, lean_object* v_inst_3582_, lean_object* v_inst_3583_, lean_object* v_inst_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_n_u2080_3588_, uint8_t v_fullNames_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3581_, v_inst_3582_, v_inst_3583_, v_inst_3584_, v_inst_3585_, v_inst_3586_, v_inst_3587_, v_n_u2080_3588_, v_fullNames_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3591_, lean_object* v_inst_3592_, lean_object* v_inst_3593_, lean_object* v_inst_3594_, lean_object* v_inst_3595_, lean_object* v_inst_3596_, lean_object* v_inst_3597_, lean_object* v_inst_3598_, lean_object* v_n_u2080_3599_, lean_object* v_fullNames_3600_){
_start:
{
uint8_t v_fullNames_boxed_3601_; lean_object* v_res_3602_; 
v_fullNames_boxed_3601_ = lean_unbox(v_fullNames_3600_);
v_res_3602_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3591_, v_inst_3592_, v_inst_3593_, v_inst_3594_, v_inst_3595_, v_inst_3596_, v_inst_3597_, v_inst_3598_, v_n_u2080_3599_, v_fullNames_boxed_3601_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3603_, lean_object* v_inst_3604_, lean_object* v_inst_3605_, lean_object* v_inst_3606_, lean_object* v_inst_3607_, lean_object* v_inst_3608_, lean_object* v_inst_3609_, lean_object* v_n_u2080_3610_, uint8_t v_fullNames_3611_){
_start:
{
lean_object* v_toApplicative_3612_; lean_object* v_toBind_3613_; lean_object* v_toPure_3614_; lean_object* v___x_3615_; lean_object* v___f_3616_; lean_object* v___x_3617_; 
v_toApplicative_3612_ = lean_ctor_get(v_inst_3603_, 0);
v_toBind_3613_ = lean_ctor_get(v_inst_3603_, 1);
lean_inc(v_toBind_3613_);
v_toPure_3614_ = lean_ctor_get(v_toApplicative_3612_, 1);
lean_inc(v_toPure_3614_);
lean_inc(v_n_u2080_3610_);
v___x_3615_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3603_, v_inst_3604_, v_inst_3605_, v_inst_3606_, v_inst_3607_, v_inst_3608_, v_inst_3609_, v_n_u2080_3610_, v_fullNames_3611_);
v___f_3616_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3616_, 0, v_toPure_3614_);
lean_closure_set(v___f_3616_, 1, v_n_u2080_3610_);
v___x_3617_ = lean_apply_4(v_toBind_3613_, lean_box(0), lean_box(0), v___x_3615_, v___f_3616_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3618_, lean_object* v_inst_3619_, lean_object* v_inst_3620_, lean_object* v_inst_3621_, lean_object* v_inst_3622_, lean_object* v_inst_3623_, lean_object* v_inst_3624_, lean_object* v_n_u2080_3625_, lean_object* v_fullNames_3626_){
_start:
{
uint8_t v_fullNames_boxed_3627_; lean_object* v_res_3628_; 
v_fullNames_boxed_3627_ = lean_unbox(v_fullNames_3626_);
v_res_3628_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3618_, v_inst_3619_, v_inst_3620_, v_inst_3621_, v_inst_3622_, v_inst_3623_, v_inst_3624_, v_n_u2080_3625_, v_fullNames_boxed_3627_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3629_, lean_object* v_inst_3630_, lean_object* v_inst_3631_, lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_, lean_object* v_inst_3635_, lean_object* v_inst_3636_, lean_object* v_n_u2080_3637_, uint8_t v_fullNames_3638_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3630_, v_inst_3631_, v_inst_3632_, v_inst_3633_, v_inst_3634_, v_inst_3635_, v_inst_3636_, v_n_u2080_3637_, v_fullNames_3638_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3640_, lean_object* v_inst_3641_, lean_object* v_inst_3642_, lean_object* v_inst_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_n_u2080_3648_, lean_object* v_fullNames_3649_){
_start:
{
uint8_t v_fullNames_boxed_3650_; lean_object* v_res_3651_; 
v_fullNames_boxed_3650_ = lean_unbox(v_fullNames_3649_);
v_res_3651_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3640_, v_inst_3641_, v_inst_3642_, v_inst_3643_, v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_, v_n_u2080_3648_, v_fullNames_boxed_3650_);
return v_res_3651_;
}
}
lean_object* runtime_initialize_Lean_Modifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Namespace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesRef);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesExt);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_aliasExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_aliasExtension);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic_warn = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic_warn);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Modifiers(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Lean_Namespace(uint8_t builtin);
lean_object* initialize_Lean_Log(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ResolveName(builtin);
}
#ifdef __cplusplus
}
#endif

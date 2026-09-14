// Lean compiler output
// Module: Lean.Elab.Tactic.RenameInaccessibles
// Imports: public import Lean.Elab.Term import Lean.Elab.Binders
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getAt_x3f(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_MacroScopesView_equalScope(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_InfoTree_substitute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_renameInaccessibles___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_renameInaccessibles___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_renameInaccessibles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_renameInaccessibles___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "too many variable names provided"};
static const lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_renameInaccessibles___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_renameInaccessibles___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_renameInaccessibles___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_9_ = lean_apply_7(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed(lean_object* v_x_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0(v_x_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_12_);
lean_dec_ref(v___y_11_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(lean_object* v_mvarId_19_, lean_object* v_x_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
lean_inc(v___y_22_);
lean_inc_ref(v___y_21_);
v___f_28_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_28_, 0, v_x_20_);
lean_closure_set(v___f_28_, 1, v___y_21_);
lean_closure_set(v___f_28_, 2, v___y_22_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_19_, v___f_28_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
return v___x_29_;
}
else
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg___boxed(lean_object* v_mvarId_38_, lean_object* v_x_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(v_mvarId_38_, v_x_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(lean_object* v_00_u03b1_48_, lean_object* v_mvarId_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___redArg(v_mvarId_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed(lean_object* v_00_u03b1_59_, lean_object* v_mvarId_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1(v_00_u03b1_59_, v_mvarId_60_, v_x_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(lean_object* v_as_70_, size_t v_sz_71_, size_t v_i_72_, lean_object* v_b_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_usize_dec_lt(v_i_72_, v_sz_71_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_b_73_);
return v___x_82_;
}
else
{
lean_object* v_a_83_; lean_object* v_fst_84_; lean_object* v_snd_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_a_83_ = lean_array_uget_borrowed(v_as_70_, v_i_72_);
v_fst_84_ = lean_ctor_get(v_a_83_, 0);
v_snd_85_ = lean_ctor_get(v_a_83_, 1);
v___x_86_ = lean_box(0);
lean_inc(v_fst_84_);
v___x_87_ = l_Lean_mkFVar(v_fst_84_);
lean_inc(v_snd_85_);
v___x_88_ = l_Lean_Elab_Term_addLocalVarInfo(v_snd_85_, v___x_87_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
if (lean_obj_tag(v___x_88_) == 0)
{
size_t v___x_89_; size_t v___x_90_; 
lean_dec_ref_known(v___x_88_, 1);
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_add(v_i_72_, v___x_89_);
v_i_72_ = v___x_90_;
v_b_73_ = v___x_86_;
goto _start;
}
else
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0___boxed(lean_object* v_as_92_, lean_object* v_sz_93_, lean_object* v_i_94_, lean_object* v_b_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_93_);
lean_dec(v_sz_93_);
v_i_boxed_104_ = lean_unbox_usize(v_i_94_);
lean_dec(v_i_94_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(v_as_92_, v_sz_boxed_103_, v_i_boxed_104_, v_b_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec_ref(v_as_92_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0(lean_object* v_fst_106_, size_t v_sz_107_, size_t v___x_108_, lean_object* v___x_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__0(v_fst_106_, v_sz_107_, v___x_108_, v___x_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_124_ == 0)
{
lean_object* v_unused_125_; 
v_unused_125_ = lean_ctor_get(v___x_117_, 0);
lean_dec(v_unused_125_);
v___x_119_ = v___x_117_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_dec(v___x_117_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_109_);
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_109_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
else
{
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed(lean_object* v_fst_126_, lean_object* v_sz_127_, lean_object* v___x_128_, lean_object* v___x_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
size_t v_sz_boxed_137_; size_t v___x_20457__boxed_138_; lean_object* v_res_139_; 
v_sz_boxed_137_ = lean_unbox_usize(v_sz_127_);
lean_dec(v_sz_127_);
v___x_20457__boxed_138_ = lean_unbox_usize(v___x_128_);
lean_dec(v___x_128_);
v_res_139_ = l_Lean_Elab_Tactic_renameInaccessibles___lam__0(v_fst_126_, v_sz_boxed_137_, v___x_20457__boxed_138_, v___x_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v_fst_126_);
return v_res_139_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_unsigned_to_nat(32u);
v___x_141_ = lean_mk_empty_array_with_capacity(v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_143_ = ((size_t)5ULL);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_unsigned_to_nat(32u);
v___x_146_ = lean_mk_empty_array_with_capacity(v___x_145_);
v___x_147_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_148_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_144_);
lean_ctor_set(v___x_148_, 3, v___x_144_);
lean_ctor_set_usize(v___x_148_, 4, v___x_143_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; lean_object* v_infoState_152_; lean_object* v_trees_153_; lean_object* v___x_154_; lean_object* v_infoState_155_; lean_object* v_env_156_; lean_object* v_nextMacroScope_157_; lean_object* v_ngen_158_; lean_object* v_auxDeclNGen_159_; lean_object* v_traceState_160_; lean_object* v_cache_161_; lean_object* v_messages_162_; lean_object* v_snapshotTasks_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_184_; 
v___x_151_ = lean_st_ref_get(v___y_149_);
v_infoState_152_ = lean_ctor_get(v___x_151_, 7);
lean_inc_ref(v_infoState_152_);
lean_dec(v___x_151_);
v_trees_153_ = lean_ctor_get(v_infoState_152_, 2);
lean_inc_ref(v_trees_153_);
lean_dec_ref(v_infoState_152_);
v___x_154_ = lean_st_ref_take(v___y_149_);
v_infoState_155_ = lean_ctor_get(v___x_154_, 7);
v_env_156_ = lean_ctor_get(v___x_154_, 0);
v_nextMacroScope_157_ = lean_ctor_get(v___x_154_, 1);
v_ngen_158_ = lean_ctor_get(v___x_154_, 2);
v_auxDeclNGen_159_ = lean_ctor_get(v___x_154_, 3);
v_traceState_160_ = lean_ctor_get(v___x_154_, 4);
v_cache_161_ = lean_ctor_get(v___x_154_, 5);
v_messages_162_ = lean_ctor_get(v___x_154_, 6);
v_snapshotTasks_163_ = lean_ctor_get(v___x_154_, 8);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_184_ == 0)
{
v___x_165_ = v___x_154_;
v_isShared_166_ = v_isSharedCheck_184_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_snapshotTasks_163_);
lean_inc(v_infoState_155_);
lean_inc(v_messages_162_);
lean_inc(v_cache_161_);
lean_inc(v_traceState_160_);
lean_inc(v_auxDeclNGen_159_);
lean_inc(v_ngen_158_);
lean_inc(v_nextMacroScope_157_);
lean_inc(v_env_156_);
lean_dec(v___x_154_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_184_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
uint8_t v_enabled_167_; lean_object* v_assignment_168_; lean_object* v_lazyAssignment_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_182_; 
v_enabled_167_ = lean_ctor_get_uint8(v_infoState_155_, sizeof(void*)*3);
v_assignment_168_ = lean_ctor_get(v_infoState_155_, 0);
v_lazyAssignment_169_ = lean_ctor_get(v_infoState_155_, 1);
v_isSharedCheck_182_ = !lean_is_exclusive(v_infoState_155_);
if (v_isSharedCheck_182_ == 0)
{
lean_object* v_unused_183_; 
v_unused_183_ = lean_ctor_get(v_infoState_155_, 2);
lean_dec(v_unused_183_);
v___x_171_ = v_infoState_155_;
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_lazyAssignment_169_);
lean_inc(v_assignment_168_);
lean_dec(v_infoState_155_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_173_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___closed__1);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 2, v___x_173_);
v___x_175_ = v___x_171_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_assignment_168_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v_lazyAssignment_169_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v___x_173_);
lean_ctor_set_uint8(v_reuseFailAlloc_181_, sizeof(void*)*3, v_enabled_167_);
v___x_175_ = v_reuseFailAlloc_181_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_177_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 7, v___x_175_);
v___x_177_ = v___x_165_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_env_156_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v_nextMacroScope_157_);
lean_ctor_set(v_reuseFailAlloc_180_, 2, v_ngen_158_);
lean_ctor_set(v_reuseFailAlloc_180_, 3, v_auxDeclNGen_159_);
lean_ctor_set(v_reuseFailAlloc_180_, 4, v_traceState_160_);
lean_ctor_set(v_reuseFailAlloc_180_, 5, v_cache_161_);
lean_ctor_set(v_reuseFailAlloc_180_, 6, v_messages_162_);
lean_ctor_set(v_reuseFailAlloc_180_, 7, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_180_, 8, v_snapshotTasks_163_);
v___x_177_ = v_reuseFailAlloc_180_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_st_ref_put(v___y_149_, v___x_177_);
v___x_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_179_, 0, v_trees_153_);
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_185_);
lean_dec(v___y_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(lean_object* v___x_188_, lean_object* v_ctx_x3f_189_, size_t v_sz_190_, size_t v_i_191_, lean_object* v_bs_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = lean_usize_dec_lt(v_i_191_, v_sz_190_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v_ctx_x3f_189_);
v___x_201_ = l_unsafeCast___redArg(v_bs_192_);
lean_dec_ref(v_bs_192_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
else
{
lean_object* v_assignment_203_; lean_object* v_v_204_; lean_object* v___x_205_; lean_object* v_bs_x27_206_; lean_object* v_a_208_; lean_object* v___x_214_; lean_object* v_tree_215_; lean_object* v___x_216_; 
v_assignment_203_ = lean_ctor_get(v___x_188_, 0);
v_v_204_ = lean_array_uget(v_bs_192_, v_i_191_);
v___x_205_ = lean_unsigned_to_nat(0u);
v_bs_x27_206_ = lean_array_uset(v_bs_192_, v_i_191_, v___x_205_);
v___x_214_ = l_unsafeCast___redArg(v_v_204_);
lean_dec(v_v_204_);
v_tree_215_ = l_Lean_Elab_InfoTree_substitute(v___x_214_, v_assignment_203_);
lean_inc_ref(v_ctx_x3f_189_);
lean_inc(v___y_198_);
lean_inc_ref(v___y_197_);
lean_inc(v___y_196_);
lean_inc_ref(v___y_195_);
lean_inc(v___y_194_);
lean_inc_ref(v___y_193_);
v___x_216_ = lean_apply_7(v_ctx_x3f_189_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, lean_box(0));
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_216_, 1);
if (lean_obj_tag(v_a_217_) == 0)
{
v_a_208_ = v_tree_215_;
goto v___jp_207_;
}
else
{
lean_object* v_val_218_; lean_object* v___x_219_; 
v_val_218_ = lean_ctor_get(v_a_217_, 0);
lean_inc(v_val_218_);
lean_dec_ref_known(v_a_217_, 1);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_val_218_);
lean_ctor_set(v___x_219_, 1, v_tree_215_);
v_a_208_ = v___x_219_;
goto v___jp_207_;
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v_tree_215_);
lean_dec_ref(v_bs_x27_206_);
lean_dec_ref(v_ctx_x3f_189_);
v_a_220_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_216_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_216_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
v___jp_207_:
{
size_t v___x_209_; size_t v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_add(v_i_191_, v___x_209_);
v___x_211_ = l_unsafeCast___redArg(v_a_208_);
lean_dec_ref(v_a_208_);
v___x_212_ = lean_array_uset(v_bs_x27_206_, v_i_191_, v___x_211_);
v_i_191_ = v___x_210_;
v_bs_192_ = v___x_212_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed(lean_object* v___x_228_, lean_object* v_ctx_x3f_229_, lean_object* v_sz_230_, lean_object* v_i_231_, lean_object* v_bs_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
size_t v_sz_boxed_240_; size_t v_i_boxed_241_; lean_object* v_res_242_; 
v_sz_boxed_240_ = lean_unbox_usize(v_sz_230_);
lean_dec(v_sz_230_);
v_i_boxed_241_ = lean_unbox_usize(v_i_231_);
lean_dec(v_i_231_);
v_res_242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12(v___x_228_, v_ctx_x3f_229_, v_sz_boxed_240_, v_i_boxed_241_, v_bs_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec_ref(v___x_228_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14___boxed(lean_object* v___x_245_, lean_object* v_ctx_x3f_246_, lean_object* v_sz_247_, lean_object* v_i_248_, lean_object* v_bs_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
size_t v_sz_boxed_257_; size_t v_i_boxed_258_; lean_object* v_res_259_; 
v_sz_boxed_257_ = lean_unbox_usize(v_sz_247_);
lean_dec(v_sz_247_);
v_i_boxed_258_ = lean_unbox_usize(v_i_248_);
lean_dec(v_i_248_);
v_res_259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(v___x_245_, v_ctx_x3f_246_, v_sz_boxed_257_, v_i_boxed_258_, v_bs_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(lean_object* v___x_260_, lean_object* v_ctx_x3f_261_, lean_object* v_x_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_object* v_cs_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_300_; 
v_cs_270_ = lean_ctor_get(v_x_262_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_300_ == 0)
{
v___x_272_ = v_x_262_;
v_isShared_273_ = v_isSharedCheck_300_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_cs_270_);
lean_dec(v_x_262_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_300_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
size_t v_sz_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_20014__overap_279_; lean_object* v___x_280_; 
v_sz_274_ = lean_array_size(v_cs_270_);
v___x_275_ = l_unsafeCast___redArg(v_cs_270_);
lean_dec_ref(v_cs_270_);
v___x_276_ = lean_box_usize(v_sz_274_);
v___x_277_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1));
v___x_278_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14___boxed), 12, 5);
lean_closure_set(v___x_278_, 0, v___x_260_);
lean_closure_set(v___x_278_, 1, v_ctx_x3f_261_);
lean_closure_set(v___x_278_, 2, v___x_276_);
lean_closure_set(v___x_278_, 3, v___x_277_);
lean_closure_set(v___x_278_, 4, v___x_275_);
v___x_20014__overap_279_ = l_unsafeCast___redArg(v___x_278_);
lean_dec_ref(v___x_278_);
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc_ref(v___y_265_);
lean_inc(v___y_264_);
lean_inc_ref(v___y_263_);
v___x_280_ = lean_apply_7(v___x_20014__overap_279_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, lean_box(0));
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_291_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_291_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v_a_281_);
v___x_286_ = v___x_272_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_290_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_288_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_286_);
v___x_288_ = v___x_283_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_286_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_del_object(v___x_272_);
v_a_292_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_280_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_280_);
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
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_vs_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_331_; 
v_vs_301_ = lean_ctor_get(v_x_262_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_331_ == 0)
{
v___x_303_ = v_x_262_;
v_isShared_304_ = v_isSharedCheck_331_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_vs_301_);
lean_dec(v_x_262_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_331_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
size_t v_sz_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_20017__overap_310_; lean_object* v___x_311_; 
v_sz_305_ = lean_array_size(v_vs_301_);
v___x_306_ = l_unsafeCast___redArg(v_vs_301_);
lean_dec_ref(v_vs_301_);
v___x_307_ = lean_box_usize(v_sz_305_);
v___x_308_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1));
v___x_309_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed), 12, 5);
lean_closure_set(v___x_309_, 0, v___x_260_);
lean_closure_set(v___x_309_, 1, v_ctx_x3f_261_);
lean_closure_set(v___x_309_, 2, v___x_307_);
lean_closure_set(v___x_309_, 3, v___x_308_);
lean_closure_set(v___x_309_, 4, v___x_306_);
v___x_20017__overap_310_ = l_unsafeCast___redArg(v___x_309_);
lean_dec_ref(v___x_309_);
lean_inc(v___y_268_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc_ref(v___y_265_);
lean_inc(v___y_264_);
lean_inc_ref(v___y_263_);
v___x_311_ = lean_apply_7(v___x_20017__overap_310_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, lean_box(0));
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_322_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v_a_312_);
v___x_317_ = v___x_303_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_321_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
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
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_del_object(v___x_303_);
v_a_323_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_311_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_311_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11_spec__14(lean_object* v___x_332_, lean_object* v_ctx_x3f_333_, size_t v_sz_334_, size_t v_i_335_, lean_object* v_bs_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
uint8_t v___x_344_; 
v___x_344_ = lean_usize_dec_lt(v_i_335_, v_sz_334_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec_ref(v_ctx_x3f_333_);
lean_dec_ref(v___x_332_);
v___x_345_ = l_unsafeCast___redArg(v_bs_336_);
lean_dec_ref(v_bs_336_);
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
else
{
lean_object* v_v_347_; lean_object* v___x_348_; lean_object* v_bs_x27_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_v_347_ = lean_array_uget(v_bs_336_, v_i_335_);
v___x_348_ = lean_unsigned_to_nat(0u);
v_bs_x27_349_ = lean_array_uset(v_bs_336_, v_i_335_, v___x_348_);
v___x_350_ = l_unsafeCast___redArg(v_v_347_);
lean_dec(v_v_347_);
lean_inc_ref(v_ctx_x3f_333_);
lean_inc_ref(v___x_332_);
v___x_351_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_332_, v_ctx_x3f_333_, v___x_350_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; size_t v___x_353_; size_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = ((size_t)1ULL);
v___x_354_ = lean_usize_add(v_i_335_, v___x_353_);
v___x_355_ = l_unsafeCast___redArg(v_a_352_);
lean_dec(v_a_352_);
v___x_356_ = lean_array_uset(v_bs_x27_349_, v_i_335_, v___x_355_);
v_i_335_ = v___x_354_;
v_bs_336_ = v___x_356_;
goto _start;
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
lean_dec_ref(v_bs_x27_349_);
lean_dec_ref(v_ctx_x3f_333_);
lean_dec_ref(v___x_332_);
v_a_358_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_351_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_351_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed(lean_object* v___x_366_, lean_object* v_ctx_x3f_367_, lean_object* v_x_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_366_, v_ctx_x3f_367_, v_x_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(lean_object* v___x_377_, lean_object* v_ctx_x3f_378_, lean_object* v_t_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_root_387_; lean_object* v_tail_388_; lean_object* v_size_389_; size_t v_shift_390_; lean_object* v_tailOff_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_431_; 
v_root_387_ = lean_ctor_get(v_t_379_, 0);
v_tail_388_ = lean_ctor_get(v_t_379_, 1);
v_size_389_ = lean_ctor_get(v_t_379_, 2);
v_shift_390_ = lean_ctor_get_usize(v_t_379_, 4);
v_tailOff_391_ = lean_ctor_get(v_t_379_, 3);
v_isSharedCheck_431_ = !lean_is_exclusive(v_t_379_);
if (v_isSharedCheck_431_ == 0)
{
v___x_393_ = v_t_379_;
v_isShared_394_ = v_isSharedCheck_431_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_tailOff_391_);
lean_inc(v_size_389_);
lean_inc(v_tail_388_);
lean_inc(v_root_387_);
lean_dec(v_t_379_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_431_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; 
lean_inc_ref(v_ctx_x3f_378_);
lean_inc_ref(v___x_377_);
v___x_395_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11(v___x_377_, v_ctx_x3f_378_, v_root_387_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; size_t v_sz_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_19998__overap_402_; lean_object* v___x_403_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v_sz_397_ = lean_array_size(v_tail_388_);
v___x_398_ = l_unsafeCast___redArg(v_tail_388_);
lean_dec_ref(v_tail_388_);
v___x_399_ = lean_box_usize(v_sz_397_);
v___x_400_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1));
v___x_401_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__12___boxed), 12, 5);
lean_closure_set(v___x_401_, 0, v___x_377_);
lean_closure_set(v___x_401_, 1, v_ctx_x3f_378_);
lean_closure_set(v___x_401_, 2, v___x_399_);
lean_closure_set(v___x_401_, 3, v___x_400_);
lean_closure_set(v___x_401_, 4, v___x_398_);
v___x_19998__overap_402_ = l_unsafeCast___redArg(v___x_401_);
lean_dec_ref(v___x_401_);
lean_inc(v___y_385_);
lean_inc_ref(v___y_384_);
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
lean_inc(v___y_381_);
lean_inc_ref(v___y_380_);
v___x_403_ = lean_apply_7(v___x_19998__overap_402_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, lean_box(0));
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_414_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_414_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_414_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_414_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 1, v_a_404_);
lean_ctor_set(v___x_393_, 0, v_a_396_);
v___x_409_ = v___x_393_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_396_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_a_404_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_size_389_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_tailOff_391_);
lean_ctor_set_usize(v_reuseFailAlloc_413_, 4, v_shift_390_);
v___x_409_ = v_reuseFailAlloc_413_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_411_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_409_);
v___x_411_ = v___x_406_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
lean_dec(v_a_396_);
lean_del_object(v___x_393_);
lean_dec(v_tailOff_391_);
lean_dec(v_size_389_);
v_a_415_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_403_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_403_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_del_object(v___x_393_);
lean_dec(v_tailOff_391_);
lean_dec(v_size_389_);
lean_dec_ref(v_tail_388_);
lean_dec_ref(v_ctx_x3f_378_);
lean_dec_ref(v___x_377_);
v_a_423_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_395_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_395_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6___boxed(lean_object* v___x_432_, lean_object* v_ctx_x3f_433_, lean_object* v_t_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(v___x_432_, v_ctx_x3f_433_, v_t_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(lean_object* v___y_443_, lean_object* v_ctx_x3f_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v_a_450_, lean_object* v_a_x3f_451_){
_start:
{
lean_object* v___x_453_; lean_object* v_infoState_454_; lean_object* v_trees_455_; lean_object* v___x_456_; 
v___x_453_ = lean_st_ref_get(v___y_443_);
v_infoState_454_ = lean_ctor_get(v___x_453_, 7);
lean_inc_ref(v_infoState_454_);
lean_dec(v___x_453_);
v_trees_455_ = lean_ctor_get(v_infoState_454_, 2);
lean_inc_ref(v_trees_455_);
v___x_456_ = l_Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6(v_infoState_454_, v_ctx_x3f_444_, v_trees_455_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_443_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_495_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_495_ == 0)
{
v___x_459_ = v___x_456_;
v_isShared_460_ = v_isSharedCheck_495_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_456_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_495_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v_infoState_462_; lean_object* v_env_463_; lean_object* v_nextMacroScope_464_; lean_object* v_ngen_465_; lean_object* v_auxDeclNGen_466_; lean_object* v_traceState_467_; lean_object* v_cache_468_; lean_object* v_messages_469_; lean_object* v_snapshotTasks_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_494_; 
v___x_461_ = lean_st_ref_take(v___y_443_);
v_infoState_462_ = lean_ctor_get(v___x_461_, 7);
v_env_463_ = lean_ctor_get(v___x_461_, 0);
v_nextMacroScope_464_ = lean_ctor_get(v___x_461_, 1);
v_ngen_465_ = lean_ctor_get(v___x_461_, 2);
v_auxDeclNGen_466_ = lean_ctor_get(v___x_461_, 3);
v_traceState_467_ = lean_ctor_get(v___x_461_, 4);
v_cache_468_ = lean_ctor_get(v___x_461_, 5);
v_messages_469_ = lean_ctor_get(v___x_461_, 6);
v_snapshotTasks_470_ = lean_ctor_get(v___x_461_, 8);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_494_ == 0)
{
v___x_472_ = v___x_461_;
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_snapshotTasks_470_);
lean_inc(v_infoState_462_);
lean_inc(v_messages_469_);
lean_inc(v_cache_468_);
lean_inc(v_traceState_467_);
lean_inc(v_auxDeclNGen_466_);
lean_inc(v_ngen_465_);
lean_inc(v_nextMacroScope_464_);
lean_inc(v_env_463_);
lean_dec(v___x_461_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
uint8_t v_enabled_474_; lean_object* v_assignment_475_; lean_object* v_lazyAssignment_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_492_; 
v_enabled_474_ = lean_ctor_get_uint8(v_infoState_462_, sizeof(void*)*3);
v_assignment_475_ = lean_ctor_get(v_infoState_462_, 0);
v_lazyAssignment_476_ = lean_ctor_get(v_infoState_462_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v_infoState_462_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; 
v_unused_493_ = lean_ctor_get(v_infoState_462_, 2);
lean_dec(v_unused_493_);
v___x_478_ = v_infoState_462_;
v_isShared_479_ = v_isSharedCheck_492_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_lazyAssignment_476_);
lean_inc(v_assignment_475_);
lean_dec(v_infoState_462_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_492_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v___x_480_ = lean_box(0);
v___x_481_ = l_Lean_PersistentArray_append___redArg(v_a_450_, v_a_457_);
lean_dec(v_a_457_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 2, v___x_481_);
v___x_483_ = v___x_478_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_assignment_475_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_lazyAssignment_476_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v___x_481_);
lean_ctor_set_uint8(v_reuseFailAlloc_491_, sizeof(void*)*3, v_enabled_474_);
v___x_483_ = v_reuseFailAlloc_491_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_485_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 7, v___x_483_);
v___x_485_ = v___x_472_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_env_463_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_nextMacroScope_464_);
lean_ctor_set(v_reuseFailAlloc_490_, 2, v_ngen_465_);
lean_ctor_set(v_reuseFailAlloc_490_, 3, v_auxDeclNGen_466_);
lean_ctor_set(v_reuseFailAlloc_490_, 4, v_traceState_467_);
lean_ctor_set(v_reuseFailAlloc_490_, 5, v_cache_468_);
lean_ctor_set(v_reuseFailAlloc_490_, 6, v_messages_469_);
lean_ctor_set(v_reuseFailAlloc_490_, 7, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_490_, 8, v_snapshotTasks_470_);
v___x_485_ = v_reuseFailAlloc_490_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_486_ = lean_st_ref_put(v___y_443_, v___x_485_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_480_);
v___x_488_ = v___x_459_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_480_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec_ref(v_a_450_);
v_a_496_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_456_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_456_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___y_504_, lean_object* v_ctx_x3f_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v_a_511_, lean_object* v_a_x3f_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_504_, v_ctx_x3f_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v_a_511_, v_a_x3f_512_);
lean_dec(v_a_x3f_512_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_504_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(lean_object* v_x_515_, lean_object* v_ctx_x3f_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___x_524_; lean_object* v_infoState_525_; uint8_t v_enabled_526_; 
v___x_524_ = lean_st_ref_get(v___y_522_);
v_infoState_525_ = lean_ctor_get(v___x_524_, 7);
lean_inc_ref(v_infoState_525_);
lean_dec(v___x_524_);
v_enabled_526_ = lean_ctor_get_uint8(v_infoState_525_, sizeof(void*)*3);
lean_dec_ref(v_infoState_525_);
if (v_enabled_526_ == 0)
{
lean_object* v___x_527_; 
lean_dec_ref(v_ctx_x3f_516_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
v___x_527_ = lean_apply_7(v_x_515_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v_a_529_; lean_object* v_r_530_; 
v___x_528_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_522_);
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref(v___x_528_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
v_r_530_ = lean_apply_7(v_x_515_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
if (lean_obj_tag(v_r_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_555_; 
v_a_531_ = lean_ctor_get(v_r_530_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v_r_530_);
if (v_isSharedCheck_555_ == 0)
{
v___x_533_ = v_r_530_;
v_isShared_534_ = v_isSharedCheck_555_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v_r_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_555_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
lean_inc(v_a_531_);
if (v_isShared_534_ == 0)
{
lean_ctor_set_tag(v___x_533_, 1);
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_554_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; 
v___x_537_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_522_, v_ctx_x3f_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v_a_529_, v___x_536_);
lean_dec_ref(v___x_536_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_544_ == 0)
{
lean_object* v_unused_545_; 
v_unused_545_ = lean_ctor_get(v___x_537_, 0);
lean_dec(v_unused_545_);
v___x_539_ = v___x_537_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_dec(v___x_537_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v_a_531_);
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_531_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec(v_a_531_);
v_a_546_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_537_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_537_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_a_556_ = lean_ctor_get(v_r_530_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v_r_530_, 1);
v___x_557_ = lean_box(0);
v___x_558_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___lam__0(v___y_522_, v_ctx_x3f_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v_a_529_, v___x_557_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_565_ == 0)
{
lean_object* v_unused_566_; 
v_unused_566_ = lean_ctor_get(v___x_558_, 0);
lean_dec(v_unused_566_);
v___x_560_ = v___x_558_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_dec(v___x_558_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 1);
lean_ctor_set(v___x_560_, 0, v_a_556_);
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_556_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
lean_dec(v_a_556_);
v_a_567_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_558_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_558_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg___boxed(lean_object* v_x_575_, lean_object* v_ctx_x3f_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_575_, v_ctx_x3f_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; lean_object* v_env_590_; lean_object* v___x_591_; lean_object* v_toCold_592_; lean_object* v_mctx_593_; lean_object* v_options_594_; lean_object* v_currNamespace_595_; lean_object* v_openDecls_596_; lean_object* v___x_597_; lean_object* v_ngen_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_589_ = lean_st_ref_get(v___y_587_);
v_env_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc_ref(v_env_590_);
lean_dec(v___x_589_);
v___x_591_ = lean_st_ref_get(v___y_585_);
v_toCold_592_ = lean_ctor_get(v___y_586_, 0);
v_mctx_593_ = lean_ctor_get(v___x_591_, 0);
lean_inc_ref(v_mctx_593_);
lean_dec(v___x_591_);
v_options_594_ = lean_ctor_get(v_toCold_592_, 2);
v_currNamespace_595_ = lean_ctor_get(v_toCold_592_, 4);
v_openDecls_596_ = lean_ctor_get(v_toCold_592_, 5);
v___x_597_ = lean_st_ref_get(v___y_587_);
v_ngen_598_ = lean_ctor_get(v___x_597_, 2);
lean_inc_ref(v_ngen_598_);
lean_dec(v___x_597_);
v___x_599_ = lean_box(0);
v___x_600_ = l_Lean_instInhabitedFileMap_default;
lean_inc(v_openDecls_596_);
lean_inc(v_currNamespace_595_);
lean_inc_ref(v_options_594_);
v___x_601_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_601_, 0, v_env_590_);
lean_ctor_set(v___x_601_, 1, v___x_599_);
lean_ctor_set(v___x_601_, 2, v___x_600_);
lean_ctor_set(v___x_601_, 3, v_mctx_593_);
lean_ctor_set(v___x_601_, 4, v_options_594_);
lean_ctor_set(v___x_601_, 5, v_currNamespace_595_);
lean_ctor_set(v___x_601_, 6, v_openDecls_596_);
lean_ctor_set(v___x_601_, 7, v_ngen_598_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; lean_object* v_toCold_616_; lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_641_; 
v___x_615_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_611_, v___y_612_, v___y_613_);
v_toCold_616_ = lean_ctor_get(v___y_612_, 0);
v_a_617_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_641_ == 0)
{
v___x_619_ = v___x_615_;
v_isShared_620_ = v_isSharedCheck_641_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_615_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_641_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v_fileMap_621_; lean_object* v_env_622_; lean_object* v_mctx_623_; lean_object* v_options_624_; lean_object* v_currNamespace_625_; lean_object* v_openDecls_626_; lean_object* v_ngen_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_638_; 
v_fileMap_621_ = lean_ctor_get(v_toCold_616_, 1);
v_env_622_ = lean_ctor_get(v_a_617_, 0);
v_mctx_623_ = lean_ctor_get(v_a_617_, 3);
v_options_624_ = lean_ctor_get(v_a_617_, 4);
v_currNamespace_625_ = lean_ctor_get(v_a_617_, 5);
v_openDecls_626_ = lean_ctor_get(v_a_617_, 6);
v_ngen_627_ = lean_ctor_get(v_a_617_, 7);
v_isSharedCheck_638_ = !lean_is_exclusive(v_a_617_);
if (v_isSharedCheck_638_ == 0)
{
lean_object* v_unused_639_; lean_object* v_unused_640_; 
v_unused_639_ = lean_ctor_get(v_a_617_, 2);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_a_617_, 1);
lean_dec(v_unused_640_);
v___x_629_ = v_a_617_;
v_isShared_630_ = v_isSharedCheck_638_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_ngen_627_);
lean_inc(v_openDecls_626_);
lean_inc(v_currNamespace_625_);
lean_inc(v_options_624_);
lean_inc(v_mctx_623_);
lean_inc(v_env_622_);
lean_dec(v_a_617_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_638_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_631_ = lean_box(0);
lean_inc_ref(v_fileMap_621_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 2, v_fileMap_621_);
lean_ctor_set(v___x_629_, 1, v___x_631_);
v___x_633_ = v___x_629_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_env_622_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v_fileMap_621_);
lean_ctor_set(v_reuseFailAlloc_637_, 3, v_mctx_623_);
lean_ctor_set(v_reuseFailAlloc_637_, 4, v_options_624_);
lean_ctor_set(v_reuseFailAlloc_637_, 5, v_currNamespace_625_);
lean_ctor_set(v_reuseFailAlloc_637_, 6, v_openDecls_626_);
lean_ctor_set(v_reuseFailAlloc_637_, 7, v_ngen_627_);
v___x_633_ = v_reuseFailAlloc_637_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_635_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_633_);
v___x_635_ = v___x_619_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2___boxed(lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v___x_657_; lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_667_; 
v___x_657_ = l_Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2(v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
v_a_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_667_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_667_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_667_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v_a_658_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_663_);
v___x_665_ = v___x_660_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0___boxed(lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___lam__0(v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(lean_object* v_x_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v___f_685_; lean_object* v___x_686_; 
v___f_685_ = ((lean_object*)(l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___closed__0));
v___x_686_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_677_, v___f_685_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg___boxed(lean_object* v_x_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v_x_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(lean_object* v_snd_696_, lean_object* v___x_697_, lean_object* v_____r_698_, lean_object* v_lctx_699_, lean_object* v_hs_700_, lean_object* v_info_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_709_ = l_Lean_NameSet_insert(v_snd_696_, v___x_697_);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_info_701_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v_hs_700_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_lctx_699_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0___boxed(lean_object* v_snd_715_, lean_object* v___x_716_, lean_object* v_____r_717_, lean_object* v_lctx_718_, lean_object* v_hs_719_, lean_object* v_info_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(v_snd_715_, v___x_716_, v_____r_717_, v_lctx_718_, v_hs_719_, v_info_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(lean_object* v_fst_729_, lean_object* v___f_730_, lean_object* v_snd_731_, lean_object* v_____r_732_, lean_object* v_lctx_733_, lean_object* v_info_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_742_ = lean_array_pop(v_fst_729_);
v___x_743_ = lean_array_get_size(v___x_742_);
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_nat_dec_eq(v___x_743_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec(v_snd_731_);
v___x_746_ = lean_box(0);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
lean_inc(v___y_738_);
lean_inc_ref(v___y_737_);
lean_inc(v___y_736_);
lean_inc_ref(v___y_735_);
v___x_747_ = lean_apply_11(v___f_730_, v___x_746_, v_lctx_733_, v___x_742_, v_info_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, lean_box(0));
return v___x_747_;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec_ref(v___f_730_);
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v_info_734_);
lean_ctor_set(v___x_748_, 1, v_snd_731_);
v___x_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_742_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v_lctx_733_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1___boxed(lean_object* v_fst_753_, lean_object* v___f_754_, lean_object* v_snd_755_, lean_object* v_____r_756_, lean_object* v_lctx_757_, lean_object* v_info_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_fst_753_, v___f_754_, v_snd_755_, v_____r_756_, v_lctx_757_, v_info_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(lean_object* v_upperBound_775_, lean_object* v___x_776_, lean_object* v_val_777_, lean_object* v_a_778_, lean_object* v_b_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_a_788_; lean_object* v___y_793_; uint8_t v___x_812_; 
v___x_812_ = lean_nat_dec_lt(v_a_778_, v_upperBound_775_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; 
lean_dec(v_a_778_);
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v_b_779_);
return v___x_813_;
}
else
{
lean_object* v_snd_814_; lean_object* v_snd_815_; lean_object* v_fst_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_889_; 
v_snd_814_ = lean_ctor_get(v_b_779_, 1);
lean_inc(v_snd_814_);
v_snd_815_ = lean_ctor_get(v_snd_814_, 1);
lean_inc(v_snd_815_);
v_fst_816_ = lean_ctor_get(v_b_779_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_b_779_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v_b_779_, 1);
lean_dec(v_unused_890_);
v___x_818_ = v_b_779_;
v_isShared_819_ = v_isSharedCheck_889_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_fst_816_);
lean_dec(v_b_779_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_889_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_fst_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_887_; 
v_fst_820_ = lean_ctor_get(v_snd_814_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v_snd_814_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v_snd_814_, 1);
lean_dec(v_unused_888_);
v___x_822_ = v_snd_814_;
v_isShared_823_ = v_isSharedCheck_887_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_fst_820_);
lean_dec(v_snd_814_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_887_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_fst_824_; lean_object* v_snd_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_886_; 
v_fst_824_ = lean_ctor_get(v_snd_815_, 0);
v_snd_825_ = lean_ctor_get(v_snd_815_, 1);
v_isSharedCheck_886_ = !lean_is_exclusive(v_snd_815_);
if (v_isSharedCheck_886_ == 0)
{
v___x_827_ = v_snd_815_;
v_isShared_828_ = v_isSharedCheck_886_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_snd_825_);
lean_inc(v_fst_824_);
lean_dec(v_snd_815_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_886_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_829_ = lean_nat_sub(v___x_776_, v_a_778_);
v___x_830_ = lean_unsigned_to_nat(1u);
v___x_831_ = lean_nat_sub(v___x_829_, v___x_830_);
lean_dec(v___x_829_);
v___x_832_ = l_Lean_LocalContext_getAt_x3f(v_fst_816_, v___x_831_);
lean_dec(v___x_831_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v___x_834_; 
if (v_isShared_828_ == 0)
{
v___x_834_ = v___x_827_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_fst_824_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_snd_825_);
v___x_834_ = v_reuseFailAlloc_841_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v___x_836_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v___x_834_);
v___x_836_ = v___x_822_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_fst_820_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_834_);
v___x_836_ = v_reuseFailAlloc_840_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_838_; 
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 1, v___x_836_);
v___x_838_ = v___x_818_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_fst_816_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
v_a_788_ = v___x_838_;
goto v___jp_787_;
}
}
}
}
else
{
lean_object* v_val_842_; uint8_t v___x_843_; 
v_val_842_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_val_842_);
lean_dec_ref_known(v___x_832_, 1);
v___x_843_ = l_Lean_LocalDecl_isImplementationDetail(v_val_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; lean_object* v___f_845_; lean_object* v___y_847_; lean_object* v___x_872_; uint8_t v___x_873_; 
lean_del_object(v___x_822_);
lean_del_object(v___x_818_);
v___x_844_ = l_Lean_LocalDecl_userName(v_val_842_);
lean_inc_n(v___x_844_, 2);
lean_inc(v_snd_825_);
v___f_845_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0___boxed), 13, 2);
lean_closure_set(v___f_845_, 0, v_snd_825_);
lean_closure_set(v___f_845_, 1, v___x_844_);
v___x_872_ = l_Lean_extractMacroScopes(v___x_844_);
v___x_873_ = l_Lean_MacroScopesView_equalScope(v___x_872_, v_val_777_);
lean_dec_ref(v___x_872_);
if (v___x_873_ == 0)
{
lean_dec(v___x_844_);
goto v___jp_857_;
}
else
{
if (v___x_843_ == 0)
{
uint8_t v___x_874_; 
v___x_874_ = l_Lean_NameSet_contains(v_snd_825_, v___x_844_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_876_; 
lean_dec_ref(v___f_845_);
lean_dec(v_val_842_);
lean_del_object(v___x_827_);
v___x_875_ = lean_box(0);
v___x_876_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__0(v_snd_825_, v___x_844_, v___x_875_, v_fst_816_, v_fst_820_, v_fst_824_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v___y_793_ = v___x_876_;
goto v___jp_792_;
}
else
{
lean_dec(v___x_844_);
goto v___jp_857_;
}
}
else
{
lean_dec(v___x_844_);
goto v___jp_857_;
}
}
v___jp_846_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_848_ = l_Lean_TSyntax_getId(v___y_847_);
v___x_849_ = l_Lean_LocalDecl_fvarId(v_val_842_);
lean_dec(v_val_842_);
lean_inc(v___x_849_);
v___x_850_ = l_Lean_LocalContext_setUserName(v_fst_816_, v___x_849_, v___x_848_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 1, v___y_847_);
lean_ctor_set(v___x_827_, 0, v___x_849_);
v___x_852_ = v___x_827_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v___y_847_);
v___x_852_ = v_reuseFailAlloc_856_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = lean_array_push(v_fst_824_, v___x_852_);
v___x_854_ = lean_box(0);
v___x_855_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_fst_820_, v___f_845_, v_snd_825_, v___x_854_, v___x_850_, v___x_853_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v___y_793_ = v___x_855_;
goto v___jp_792_;
}
}
v___jp_857_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_858_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2));
v___x_859_ = lean_box(0);
v___x_860_ = lean_array_get_size(v_fst_820_);
v___x_861_ = lean_nat_sub(v___x_860_, v___x_830_);
v___x_862_ = lean_array_get_borrowed(v___x_859_, v_fst_820_, v___x_861_);
lean_dec(v___x_861_);
lean_inc(v___x_862_);
v___x_863_ = l_Lean_Syntax_isOfKind(v___x_862_, v___x_858_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec(v_val_842_);
lean_del_object(v___x_827_);
v___x_864_ = lean_box(0);
v___x_865_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_fst_820_, v___f_845_, v_snd_825_, v___x_864_, v_fst_816_, v_fst_824_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v___y_793_ = v___x_865_;
goto v___jp_792_;
}
else
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = l_Lean_Syntax_getArg(v___x_862_, v___x_866_);
if (v___x_843_ == 0)
{
lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_868_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4));
lean_inc(v___x_867_);
v___x_869_ = l_Lean_Syntax_isOfKind(v___x_867_, v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec(v___x_867_);
lean_dec(v_val_842_);
lean_del_object(v___x_827_);
v___x_870_ = lean_box(0);
v___x_871_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___lam__1(v_fst_820_, v___f_845_, v_snd_825_, v___x_870_, v_fst_816_, v_fst_824_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v___y_793_ = v___x_871_;
goto v___jp_792_;
}
else
{
v___y_847_ = v___x_867_;
goto v___jp_846_;
}
}
else
{
v___y_847_ = v___x_867_;
goto v___jp_846_;
}
}
}
}
else
{
lean_object* v___x_878_; 
lean_dec(v_val_842_);
if (v_isShared_828_ == 0)
{
v___x_878_ = v___x_827_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_fst_824_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_snd_825_);
v___x_878_ = v_reuseFailAlloc_885_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_880_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v___x_878_);
v___x_880_ = v___x_822_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_fst_820_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v___x_878_);
v___x_880_ = v_reuseFailAlloc_884_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
lean_object* v___x_882_; 
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 1, v___x_880_);
v___x_882_ = v___x_818_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_fst_816_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
v_a_788_ = v___x_882_;
goto v___jp_787_;
}
}
}
}
}
}
}
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_nat_add(v_a_778_, v___x_789_);
lean_dec(v_a_778_);
v_a_778_ = v___x_790_;
v_b_779_ = v_a_788_;
goto _start;
}
v___jp_792_:
{
if (lean_obj_tag(v___y_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_803_; 
v_a_794_ = lean_ctor_get(v___y_793_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_803_ == 0)
{
v___x_796_ = v___y_793_;
v_isShared_797_ = v_isSharedCheck_803_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___y_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_803_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
if (lean_obj_tag(v_a_794_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; 
lean_dec(v_a_778_);
v_a_798_ = lean_ctor_get(v_a_794_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v_a_794_, 1);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v_a_798_);
v___x_800_ = v___x_796_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
else
{
lean_object* v_a_802_; 
lean_del_object(v___x_796_);
v_a_802_ = lean_ctor_get(v_a_794_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v_a_794_, 1);
v_a_788_ = v_a_802_;
goto v___jp_787_;
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_778_);
v_a_804_ = lean_ctor_get(v___y_793_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___y_793_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___y_793_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___boxed(lean_object* v_upperBound_891_, lean_object* v___x_892_, lean_object* v_val_893_, lean_object* v_a_894_, lean_object* v_b_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v_upperBound_891_, v___x_892_, v_val_893_, v_a_894_, v_b_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec_ref(v_val_893_);
lean_dec(v___x_892_);
lean_dec(v_upperBound_891_);
return v_res_903_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(uint8_t v_suppressElabErrors_912_, uint8_t v___y_913_, lean_object* v_x_914_){
_start:
{
if (lean_obj_tag(v_x_914_) == 1)
{
lean_object* v_pre_915_; 
v_pre_915_ = lean_ctor_get(v_x_914_, 0);
switch(lean_obj_tag(v_pre_915_))
{
case 1:
{
lean_object* v_pre_916_; 
v_pre_916_ = lean_ctor_get(v_pre_915_, 0);
switch(lean_obj_tag(v_pre_916_))
{
case 0:
{
lean_object* v_str_917_; lean_object* v_str_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v_str_917_ = lean_ctor_get(v_x_914_, 1);
v_str_918_ = lean_ctor_get(v_pre_915_, 1);
v___x_919_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__0));
v___x_920_ = lean_string_dec_eq(v_str_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__1));
v___x_922_ = lean_string_dec_eq(v_str_918_, v___x_921_);
if (v___x_922_ == 0)
{
return v___x_922_;
}
else
{
lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_923_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__2));
v___x_924_ = lean_string_dec_eq(v_str_917_, v___x_923_);
if (v___x_924_ == 0)
{
return v___x_924_;
}
else
{
return v_suppressElabErrors_912_;
}
}
}
else
{
lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__3));
v___x_926_ = lean_string_dec_eq(v_str_917_, v___x_925_);
if (v___x_926_ == 0)
{
return v___x_926_;
}
else
{
return v_suppressElabErrors_912_;
}
}
}
case 1:
{
lean_object* v_pre_927_; 
v_pre_927_ = lean_ctor_get(v_pre_916_, 0);
if (lean_obj_tag(v_pre_927_) == 0)
{
lean_object* v_str_928_; lean_object* v_str_929_; lean_object* v_str_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_str_928_ = lean_ctor_get(v_x_914_, 1);
v_str_929_ = lean_ctor_get(v_pre_915_, 1);
v_str_930_ = lean_ctor_get(v_pre_916_, 1);
v___x_931_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__4));
v___x_932_ = lean_string_dec_eq(v_str_930_, v___x_931_);
if (v___x_932_ == 0)
{
return v___x_932_;
}
else
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__5));
v___x_934_ = lean_string_dec_eq(v_str_929_, v___x_933_);
if (v___x_934_ == 0)
{
return v___x_934_;
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__6));
v___x_936_ = lean_string_dec_eq(v_str_928_, v___x_935_);
if (v___x_936_ == 0)
{
return v___x_936_;
}
else
{
return v_suppressElabErrors_912_;
}
}
}
}
else
{
return v___y_913_;
}
}
default: 
{
return v___y_913_;
}
}
}
case 0:
{
lean_object* v_str_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_str_937_ = lean_ctor_get(v_x_914_, 1);
v___x_938_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___closed__7));
v___x_939_ = lean_string_dec_eq(v_str_937_, v___x_938_);
if (v___x_939_ == 0)
{
return v___x_939_;
}
else
{
return v_suppressElabErrors_912_;
}
}
default: 
{
return v___y_913_;
}
}
}
else
{
return v___y_913_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_940_, lean_object* v___y_941_, lean_object* v_x_942_){
_start:
{
uint8_t v_suppressElabErrors_boxed_943_; uint8_t v___y_21700__boxed_944_; uint8_t v_res_945_; lean_object* v_r_946_; 
v_suppressElabErrors_boxed_943_ = lean_unbox(v_suppressElabErrors_940_);
v___y_21700__boxed_944_ = lean_unbox(v___y_941_);
v_res_945_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0(v_suppressElabErrors_boxed_943_, v___y_21700__boxed_944_, v_x_942_);
lean_dec(v_x_942_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(lean_object* v_opts_947_, lean_object* v_opt_948_){
_start:
{
lean_object* v_name_949_; lean_object* v_defValue_950_; lean_object* v_map_951_; lean_object* v___x_952_; 
v_name_949_ = lean_ctor_get(v_opt_948_, 0);
v_defValue_950_ = lean_ctor_get(v_opt_948_, 1);
v_map_951_ = lean_ctor_get(v_opts_947_, 0);
v___x_952_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_951_, v_name_949_);
if (lean_obj_tag(v___x_952_) == 0)
{
uint8_t v___x_953_; 
v___x_953_ = lean_unbox(v_defValue_950_);
return v___x_953_;
}
else
{
lean_object* v_val_954_; 
v_val_954_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_val_954_);
lean_dec_ref_known(v___x_952_, 1);
if (lean_obj_tag(v_val_954_) == 1)
{
uint8_t v_v_955_; 
v_v_955_ = lean_ctor_get_uint8(v_val_954_, 0);
lean_dec_ref_known(v_val_954_, 0);
return v_v_955_;
}
else
{
uint8_t v___x_956_; 
lean_dec(v_val_954_);
v___x_956_ = lean_unbox(v_defValue_950_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20___boxed(lean_object* v_opts_957_, lean_object* v_opt_958_){
_start:
{
uint8_t v_res_959_; lean_object* v_r_960_; 
v_res_959_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(v_opts_957_, v_opt_958_);
lean_dec_ref(v_opt_958_);
lean_dec_ref(v_opts_957_);
v_r_960_ = lean_box(v_res_959_);
return v_r_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(lean_object* v_msgData_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; lean_object* v_env_968_; lean_object* v___x_969_; lean_object* v_toCold_970_; lean_object* v_mctx_971_; lean_object* v_lctx_972_; lean_object* v_options_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_967_ = lean_st_ref_get(v___y_965_);
v_env_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc_ref(v_env_968_);
lean_dec(v___x_967_);
v___x_969_ = lean_st_ref_get(v___y_963_);
v_toCold_970_ = lean_ctor_get(v___y_964_, 0);
v_mctx_971_ = lean_ctor_get(v___x_969_, 0);
lean_inc_ref(v_mctx_971_);
lean_dec(v___x_969_);
v_lctx_972_ = lean_ctor_get(v___y_962_, 2);
v_options_973_ = lean_ctor_get(v_toCold_970_, 2);
lean_inc_ref(v_options_973_);
lean_inc_ref(v_lctx_972_);
v___x_974_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_974_, 0, v_env_968_);
lean_ctor_set(v___x_974_, 1, v_mctx_971_);
lean_ctor_set(v___x_974_, 2, v_lctx_972_);
lean_ctor_set(v___x_974_, 3, v_options_973_);
v___x_975_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v_msgData_961_);
v___x_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19___boxed(lean_object* v_msgData_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(v_msgData_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(lean_object* v_ref_985_, lean_object* v_msgData_986_, uint8_t v_severity_987_, uint8_t v_isSilent_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___y_995_; lean_object* v___y_996_; uint8_t v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; uint8_t v___y_1000_; lean_object* v___y_1001_; lean_object* v_currNamespace_1002_; lean_object* v_openDecls_1003_; lean_object* v___y_1004_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; uint8_t v___y_1036_; uint8_t v___y_1037_; uint8_t v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; uint8_t v___y_1062_; uint8_t v___y_1063_; uint8_t v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; uint8_t v___y_1076_; uint8_t v___y_1077_; uint8_t v___y_1078_; uint8_t v___x_1083_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; uint8_t v___y_1091_; uint8_t v___y_1092_; uint8_t v___y_1093_; uint8_t v___y_1095_; uint8_t v___x_1113_; 
v___x_1083_ = 2;
v___x_1113_ = l_Lean_instBEqMessageSeverity_beq(v_severity_987_, v___x_1083_);
if (v___x_1113_ == 0)
{
v___y_1095_ = v___x_1113_;
goto v___jp_1094_;
}
else
{
uint8_t v___x_1114_; 
lean_inc_ref(v_msgData_986_);
v___x_1114_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_986_);
v___y_1095_ = v___x_1114_;
goto v___jp_1094_;
}
v___jp_994_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v_env_1009_; lean_object* v_nextMacroScope_1010_; lean_object* v_ngen_1011_; lean_object* v_auxDeclNGen_1012_; lean_object* v_traceState_1013_; lean_object* v_cache_1014_; lean_object* v_messages_1015_; lean_object* v_infoState_1016_; lean_object* v_snapshotTasks_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1028_; 
lean_inc(v_openDecls_1003_);
lean_inc(v_currNamespace_1002_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v_currNamespace_1002_);
lean_ctor_set(v___x_1005_, 1, v_openDecls_1003_);
v___x_1006_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
lean_ctor_set(v___x_1006_, 1, v___y_1001_);
lean_inc_ref(v___y_996_);
lean_inc_ref(v___y_995_);
v___x_1007_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1007_, 0, v___y_995_);
lean_ctor_set(v___x_1007_, 1, v___y_999_);
lean_ctor_set(v___x_1007_, 2, v___y_998_);
lean_ctor_set(v___x_1007_, 3, v___y_996_);
lean_ctor_set(v___x_1007_, 4, v___x_1006_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*5, v___y_1000_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*5 + 1, v___y_997_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*5 + 2, v_isSilent_988_);
v___x_1008_ = lean_st_ref_take(v___y_1004_);
v_env_1009_ = lean_ctor_get(v___x_1008_, 0);
v_nextMacroScope_1010_ = lean_ctor_get(v___x_1008_, 1);
v_ngen_1011_ = lean_ctor_get(v___x_1008_, 2);
v_auxDeclNGen_1012_ = lean_ctor_get(v___x_1008_, 3);
v_traceState_1013_ = lean_ctor_get(v___x_1008_, 4);
v_cache_1014_ = lean_ctor_get(v___x_1008_, 5);
v_messages_1015_ = lean_ctor_get(v___x_1008_, 6);
v_infoState_1016_ = lean_ctor_get(v___x_1008_, 7);
v_snapshotTasks_1017_ = lean_ctor_get(v___x_1008_, 8);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1019_ = v___x_1008_;
v_isShared_1020_ = v_isSharedCheck_1028_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_snapshotTasks_1017_);
lean_inc(v_infoState_1016_);
lean_inc(v_messages_1015_);
lean_inc(v_cache_1014_);
lean_inc(v_traceState_1013_);
lean_inc(v_auxDeclNGen_1012_);
lean_inc(v_ngen_1011_);
lean_inc(v_nextMacroScope_1010_);
lean_inc(v_env_1009_);
lean_dec(v___x_1008_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1028_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1021_ = lean_box(0);
v___x_1022_ = l_Lean_MessageLog_add(v___x_1007_, v_messages_1015_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 6, v___x_1022_);
v___x_1024_ = v___x_1019_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_env_1009_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_nextMacroScope_1010_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v_ngen_1011_);
lean_ctor_set(v_reuseFailAlloc_1027_, 3, v_auxDeclNGen_1012_);
lean_ctor_set(v_reuseFailAlloc_1027_, 4, v_traceState_1013_);
lean_ctor_set(v_reuseFailAlloc_1027_, 5, v_cache_1014_);
lean_ctor_set(v_reuseFailAlloc_1027_, 6, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1027_, 7, v_infoState_1016_);
lean_ctor_set(v_reuseFailAlloc_1027_, 8, v_snapshotTasks_1017_);
v___x_1024_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_st_ref_put(v___y_1004_, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1021_);
return v___x_1026_;
}
}
}
v___jp_1029_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1055_; 
v___x_1040_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_986_);
v___x_1041_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__19(v___x_1040_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1055_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1055_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_inc_ref_n(v___y_1035_, 2);
v___x_1046_ = l_Lean_FileMap_toPosition(v___y_1035_, v___y_1034_);
lean_dec(v___y_1034_);
v___x_1047_ = l_Lean_FileMap_toPosition(v___y_1035_, v___y_1039_);
lean_dec(v___y_1039_);
v___x_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
v___x_1049_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___closed__0));
if (v___y_1038_ == 0)
{
lean_del_object(v___x_1044_);
lean_dec_ref(v___y_1032_);
v___y_995_ = v___y_1033_;
v___y_996_ = v___x_1049_;
v___y_997_ = v___y_1036_;
v___y_998_ = v___x_1048_;
v___y_999_ = v___x_1046_;
v___y_1000_ = v___y_1037_;
v___y_1001_ = v_a_1042_;
v_currNamespace_1002_ = v___y_1031_;
v_openDecls_1003_ = v___y_1030_;
v___y_1004_ = v___y_992_;
goto v___jp_994_;
}
else
{
uint8_t v___x_1050_; 
lean_inc(v_a_1042_);
v___x_1050_ = l_Lean_MessageData_hasTag(v___y_1032_, v_a_1042_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1053_; 
lean_dec_ref_known(v___x_1048_, 1);
lean_dec_ref(v___x_1046_);
lean_dec(v_a_1042_);
v___x_1051_ = lean_box(0);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1051_);
v___x_1053_ = v___x_1044_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
else
{
lean_del_object(v___x_1044_);
v___y_995_ = v___y_1033_;
v___y_996_ = v___x_1049_;
v___y_997_ = v___y_1036_;
v___y_998_ = v___x_1048_;
v___y_999_ = v___x_1046_;
v___y_1000_ = v___y_1037_;
v___y_1001_ = v_a_1042_;
v_currNamespace_1002_ = v___y_1031_;
v_openDecls_1003_ = v___y_1030_;
v___y_1004_ = v___y_992_;
goto v___jp_994_;
}
}
}
}
v___jp_1056_:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_Syntax_getTailPos_x3f(v___y_1065_, v___y_1063_);
lean_dec(v___y_1065_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_inc(v___y_1066_);
v___y_1030_ = v___y_1057_;
v___y_1031_ = v___y_1058_;
v___y_1032_ = v___y_1059_;
v___y_1033_ = v___y_1060_;
v___y_1034_ = v___y_1066_;
v___y_1035_ = v___y_1061_;
v___y_1036_ = v___y_1062_;
v___y_1037_ = v___y_1063_;
v___y_1038_ = v___y_1064_;
v___y_1039_ = v___y_1066_;
goto v___jp_1029_;
}
else
{
lean_object* v_val_1068_; 
v_val_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_val_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___y_1030_ = v___y_1057_;
v___y_1031_ = v___y_1058_;
v___y_1032_ = v___y_1059_;
v___y_1033_ = v___y_1060_;
v___y_1034_ = v___y_1066_;
v___y_1035_ = v___y_1061_;
v___y_1036_ = v___y_1062_;
v___y_1037_ = v___y_1063_;
v___y_1038_ = v___y_1064_;
v___y_1039_ = v_val_1068_;
goto v___jp_1029_;
}
}
v___jp_1069_:
{
lean_object* v_ref_1079_; lean_object* v___x_1080_; 
v_ref_1079_ = l_Lean_replaceRef(v_ref_985_, v___y_1074_);
v___x_1080_ = l_Lean_Syntax_getPos_x3f(v_ref_1079_, v___y_1076_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_unsigned_to_nat(0u);
v___y_1057_ = v___y_1070_;
v___y_1058_ = v___y_1071_;
v___y_1059_ = v___y_1072_;
v___y_1060_ = v___y_1073_;
v___y_1061_ = v___y_1075_;
v___y_1062_ = v___y_1078_;
v___y_1063_ = v___y_1076_;
v___y_1064_ = v___y_1077_;
v___y_1065_ = v_ref_1079_;
v___y_1066_ = v___x_1081_;
goto v___jp_1056_;
}
else
{
lean_object* v_val_1082_; 
v_val_1082_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_val_1082_);
lean_dec_ref_known(v___x_1080_, 1);
v___y_1057_ = v___y_1070_;
v___y_1058_ = v___y_1071_;
v___y_1059_ = v___y_1072_;
v___y_1060_ = v___y_1073_;
v___y_1061_ = v___y_1075_;
v___y_1062_ = v___y_1078_;
v___y_1063_ = v___y_1076_;
v___y_1064_ = v___y_1077_;
v___y_1065_ = v_ref_1079_;
v___y_1066_ = v_val_1082_;
goto v___jp_1056_;
}
}
v___jp_1084_:
{
if (v___y_1093_ == 0)
{
v___y_1070_ = v___y_1087_;
v___y_1071_ = v___y_1088_;
v___y_1072_ = v___y_1089_;
v___y_1073_ = v___y_1085_;
v___y_1074_ = v___y_1090_;
v___y_1075_ = v___y_1086_;
v___y_1076_ = v___y_1091_;
v___y_1077_ = v___y_1092_;
v___y_1078_ = v_severity_987_;
goto v___jp_1069_;
}
else
{
v___y_1070_ = v___y_1087_;
v___y_1071_ = v___y_1088_;
v___y_1072_ = v___y_1089_;
v___y_1073_ = v___y_1085_;
v___y_1074_ = v___y_1090_;
v___y_1075_ = v___y_1086_;
v___y_1076_ = v___y_1091_;
v___y_1077_ = v___y_1092_;
v___y_1078_ = v___x_1083_;
goto v___jp_1069_;
}
}
v___jp_1094_:
{
if (v___y_1095_ == 0)
{
lean_object* v_toCold_1096_; lean_object* v_ref_1097_; uint8_t v_suppressElabErrors_1098_; lean_object* v_fileName_1099_; lean_object* v_fileMap_1100_; lean_object* v_options_1101_; lean_object* v_currNamespace_1102_; lean_object* v_openDecls_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___f_1106_; uint8_t v___x_1107_; uint8_t v___x_1108_; 
v_toCold_1096_ = lean_ctor_get(v___y_991_, 0);
v_ref_1097_ = lean_ctor_get(v___y_991_, 2);
v_suppressElabErrors_1098_ = lean_ctor_get_uint8(v___y_991_, sizeof(void*)*3 + 1);
v_fileName_1099_ = lean_ctor_get(v_toCold_1096_, 0);
v_fileMap_1100_ = lean_ctor_get(v_toCold_1096_, 1);
v_options_1101_ = lean_ctor_get(v_toCold_1096_, 2);
v_currNamespace_1102_ = lean_ctor_get(v_toCold_1096_, 4);
v_openDecls_1103_ = lean_ctor_get(v_toCold_1096_, 5);
v___x_1104_ = lean_box(v_suppressElabErrors_1098_);
v___x_1105_ = lean_box(v___y_1095_);
v___f_1106_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1106_, 0, v___x_1104_);
lean_closure_set(v___f_1106_, 1, v___x_1105_);
v___x_1107_ = 1;
v___x_1108_ = l_Lean_instBEqMessageSeverity_beq(v_severity_987_, v___x_1107_);
if (v___x_1108_ == 0)
{
v___y_1085_ = v_fileName_1099_;
v___y_1086_ = v_fileMap_1100_;
v___y_1087_ = v_openDecls_1103_;
v___y_1088_ = v_currNamespace_1102_;
v___y_1089_ = v___f_1106_;
v___y_1090_ = v_ref_1097_;
v___y_1091_ = v___y_1095_;
v___y_1092_ = v_suppressElabErrors_1098_;
v___y_1093_ = v___x_1108_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1109_ = l_Lean_warningAsError;
v___x_1110_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12_spec__20(v_options_1101_, v___x_1109_);
v___y_1085_ = v_fileName_1099_;
v___y_1086_ = v_fileMap_1100_;
v___y_1087_ = v_openDecls_1103_;
v___y_1088_ = v_currNamespace_1102_;
v___y_1089_ = v___f_1106_;
v___y_1090_ = v_ref_1097_;
v___y_1091_ = v___y_1095_;
v___y_1092_ = v_suppressElabErrors_1098_;
v___y_1093_ = v___x_1110_;
goto v___jp_1084_;
}
}
else
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec_ref(v_msgData_986_);
v___x_1111_ = lean_box(0);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg___boxed(lean_object* v_ref_1115_, lean_object* v_msgData_1116_, lean_object* v_severity_1117_, lean_object* v_isSilent_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
uint8_t v_severity_boxed_1124_; uint8_t v_isSilent_boxed_1125_; lean_object* v_res_1126_; 
v_severity_boxed_1124_ = lean_unbox(v_severity_1117_);
v_isSilent_boxed_1125_ = lean_unbox(v_isSilent_1118_);
v_res_1126_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1115_, v_msgData_1116_, v_severity_boxed_1124_, v_isSilent_boxed_1125_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v_ref_1115_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(lean_object* v_msgData_1127_, uint8_t v_severity_1128_, uint8_t v_isSilent_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v_ref_1137_; lean_object* v___x_1138_; 
v_ref_1137_ = lean_ctor_get(v___y_1134_, 2);
v___x_1138_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1137_, v_msgData_1127_, v_severity_1128_, v_isSilent_1129_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7___boxed(lean_object* v_msgData_1139_, lean_object* v_severity_1140_, lean_object* v_isSilent_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
uint8_t v_severity_boxed_1149_; uint8_t v_isSilent_boxed_1150_; lean_object* v_res_1151_; 
v_severity_boxed_1149_ = lean_unbox(v_severity_1140_);
v_isSilent_boxed_1150_ = lean_unbox(v_isSilent_1141_);
v_res_1151_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(v_msgData_1139_, v_severity_boxed_1149_, v_isSilent_boxed_1150_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(lean_object* v_msgData_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
uint8_t v___x_1160_; uint8_t v___x_1161_; lean_object* v___x_1162_; 
v___x_1160_ = 2;
v___x_1161_ = 0;
v___x_1162_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7(v_msgData_1152_, v___x_1160_, v___x_1161_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4___boxed(lean_object* v_msgData_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(v_msgData_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(lean_object* v_as_1175_, size_t v_sz_1176_, size_t v_i_1177_, lean_object* v_b_1178_){
_start:
{
lean_object* v_a_1180_; uint8_t v___x_1184_; 
v___x_1184_ = lean_usize_dec_lt(v_i_1177_, v_sz_1176_);
if (v___x_1184_ == 0)
{
lean_inc_ref(v_b_1178_);
return v_b_1178_;
}
else
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v_a_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1185_ = lean_box(0);
v___x_1186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0));
v_a_1187_ = lean_array_uget_borrowed(v_as_1175_, v_i_1177_);
v___x_1188_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__2));
lean_inc(v_a_1187_);
v___x_1189_ = l_Lean_Syntax_isOfKind(v_a_1187_, v___x_1188_);
if (v___x_1189_ == 0)
{
v_a_1180_ = v___x_1186_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1190_ = lean_unsigned_to_nat(0u);
v___x_1191_ = l_Lean_Syntax_getArg(v_a_1187_, v___x_1190_);
v___x_1192_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg___closed__4));
lean_inc(v___x_1191_);
v___x_1193_ = l_Lean_Syntax_isOfKind(v___x_1191_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_dec(v___x_1191_);
v_a_1180_ = v___x_1186_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1194_ = l_Lean_TSyntax_getId(v___x_1191_);
lean_dec(v___x_1191_);
v___x_1195_ = l_Lean_extractMacroScopes(v___x_1194_);
v___x_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
v___x_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___x_1185_);
return v___x_1198_;
}
}
}
v___jp_1179_:
{
size_t v___x_1181_; size_t v___x_1182_; 
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1177_, v___x_1181_);
v_i_1177_ = v___x_1182_;
v_b_1178_ = v_a_1180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___boxed(lean_object* v_as_1199_, lean_object* v_sz_1200_, lean_object* v_i_1201_, lean_object* v_b_1202_){
_start:
{
size_t v_sz_boxed_1203_; size_t v_i_boxed_1204_; lean_object* v_res_1205_; 
v_sz_boxed_1203_ = lean_unbox_usize(v_sz_1200_);
lean_dec(v_sz_1200_);
v_i_boxed_1204_ = lean_unbox_usize(v_i_1201_);
lean_dec(v_i_1201_);
v_res_1205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(v_as_1199_, v_sz_boxed_1203_, v_i_boxed_1204_, v_b_1202_);
lean_dec_ref(v_b_1202_);
lean_dec_ref(v_as_1199_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(lean_object* v_x_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_, lean_object* v_x_1209_){
_start:
{
lean_object* v_ks_1210_; lean_object* v_vs_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1235_; 
v_ks_1210_ = lean_ctor_get(v_x_1206_, 0);
v_vs_1211_ = lean_ctor_get(v_x_1206_, 1);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_x_1206_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1213_ = v_x_1206_;
v_isShared_1214_ = v_isSharedCheck_1235_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_vs_1211_);
lean_inc(v_ks_1210_);
lean_dec(v_x_1206_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1235_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = lean_array_get_size(v_ks_1210_);
v___x_1216_ = lean_nat_dec_lt(v_x_1207_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
lean_dec(v_x_1207_);
v___x_1217_ = lean_array_push(v_ks_1210_, v_x_1208_);
v___x_1218_ = lean_array_push(v_vs_1211_, v_x_1209_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1218_);
lean_ctor_set(v___x_1213_, 0, v___x_1217_);
v___x_1220_ = v___x_1213_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_object* v_k_x27_1222_; uint8_t v___x_1223_; 
v_k_x27_1222_ = lean_array_fget_borrowed(v_ks_1210_, v_x_1207_);
v___x_1223_ = l_Lean_instBEqMVarId_beq(v_x_1208_, v_k_x27_1222_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1225_; 
if (v_isShared_1214_ == 0)
{
v___x_1225_ = v___x_1213_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_ks_1210_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_vs_1211_);
v___x_1225_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_add(v_x_1207_, v___x_1226_);
lean_dec(v_x_1207_);
v_x_1206_ = v___x_1225_;
v_x_1207_ = v___x_1227_;
goto _start;
}
}
else
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1230_ = lean_array_fset(v_ks_1210_, v_x_1207_, v_x_1208_);
v___x_1231_ = lean_array_fset(v_vs_1211_, v_x_1207_, v_x_1209_);
lean_dec(v_x_1207_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___x_1231_);
lean_ctor_set(v___x_1213_, 0, v___x_1230_);
v___x_1233_ = v___x_1213_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(lean_object* v_n_1236_, lean_object* v_k_1237_, lean_object* v_v_1238_){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_unsigned_to_nat(0u);
v___x_1240_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(v_n_1236_, v___x_1239_, v_k_1237_, v_v_1238_);
return v___x_1240_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_box(0);
v___x_1242_ = l_unsafeCast___redArg(v___x_1241_);
return v___x_1242_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(lean_object* v_x_1244_, size_t v_x_1245_, size_t v_x_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_object* v_es_1249_; size_t v___x_1250_; size_t v___x_1251_; lean_object* v_j_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; 
v_es_1249_ = lean_ctor_get(v_x_1244_, 0);
v___x_1250_ = ((size_t)31ULL);
v___x_1251_ = lean_usize_land(v_x_1245_, v___x_1250_);
v_j_1252_ = lean_usize_to_nat(v___x_1251_);
v___x_1253_ = lean_array_get_size(v_es_1249_);
v___x_1254_ = lean_nat_dec_lt(v_j_1252_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_dec(v_j_1252_);
lean_dec(v_x_1248_);
lean_dec(v_x_1247_);
return v_x_1244_;
}
else
{
lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1293_; 
lean_inc_ref(v_es_1249_);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1293_ == 0)
{
lean_object* v_unused_1294_; 
v_unused_1294_ = lean_ctor_get(v_x_1244_, 0);
lean_dec(v_unused_1294_);
v___x_1256_ = v_x_1244_;
v_isShared_1257_ = v_isSharedCheck_1293_;
goto v_resetjp_1255_;
}
else
{
lean_dec(v_x_1244_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1293_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v_v_1258_; lean_object* v___x_1259_; lean_object* v_xs_x27_1260_; lean_object* v___y_1262_; 
v_v_1258_ = lean_array_fget(v_es_1249_, v_j_1252_);
v___x_1259_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__0);
v_xs_x27_1260_ = lean_array_fset(v_es_1249_, v_j_1252_, v___x_1259_);
switch(lean_obj_tag(v_v_1258_))
{
case 0:
{
lean_object* v_key_1267_; lean_object* v_val_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1278_; 
v_key_1267_ = lean_ctor_get(v_v_1258_, 0);
v_val_1268_ = lean_ctor_get(v_v_1258_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_v_1258_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1270_ = v_v_1258_;
v_isShared_1271_ = v_isSharedCheck_1278_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_val_1268_);
lean_inc(v_key_1267_);
lean_dec(v_v_1258_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1278_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
uint8_t v___x_1272_; 
v___x_1272_ = l_Lean_instBEqMVarId_beq(v_x_1247_, v_key_1267_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_del_object(v___x_1270_);
v___x_1273_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1267_, v_val_1268_, v_x_1247_, v_x_1248_);
v___x_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
v___y_1262_ = v___x_1274_;
goto v___jp_1261_;
}
else
{
lean_object* v___x_1276_; 
lean_dec(v_val_1268_);
lean_dec(v_key_1267_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v_x_1248_);
lean_ctor_set(v___x_1270_, 0, v_x_1247_);
v___x_1276_ = v___x_1270_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_x_1247_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_x_1248_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
v___y_1262_ = v___x_1276_;
goto v___jp_1261_;
}
}
}
}
case 1:
{
lean_object* v_node_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1291_; 
v_node_1279_ = lean_ctor_get(v_v_1258_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_v_1258_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1281_ = v_v_1258_;
v_isShared_1282_ = v_isSharedCheck_1291_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_node_1279_);
lean_dec(v_v_1258_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1291_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
size_t v___x_1283_; size_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1283_ = ((size_t)5ULL);
v___x_1284_ = lean_usize_shift_right(v_x_1245_, v___x_1283_);
v___x_1285_ = ((size_t)1ULL);
v___x_1286_ = lean_usize_add(v_x_1246_, v___x_1285_);
v___x_1287_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_node_1279_, v___x_1284_, v___x_1286_, v_x_1247_, v_x_1248_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1287_);
v___x_1289_ = v___x_1281_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1287_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
v___y_1262_ = v___x_1289_;
goto v___jp_1261_;
}
}
}
default: 
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v_x_1247_);
lean_ctor_set(v___x_1292_, 1, v_x_1248_);
v___y_1262_ = v___x_1292_;
goto v___jp_1261_;
}
}
v___jp_1261_:
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1263_ = lean_array_fset(v_xs_x27_1260_, v_j_1252_, v___y_1262_);
lean_dec(v_j_1252_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1263_);
v___x_1265_ = v___x_1256_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
else
{
lean_object* v_ks_1295_; lean_object* v_vs_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1314_; 
v_ks_1295_ = lean_ctor_get(v_x_1244_, 0);
v_vs_1296_ = lean_ctor_get(v_x_1244_, 1);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1298_ = v_x_1244_;
v_isShared_1299_ = v_isSharedCheck_1314_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_vs_1296_);
lean_inc(v_ks_1295_);
lean_dec(v_x_1244_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1314_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_ks_1295_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_vs_1296_);
v___x_1301_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v_newNode_1302_; size_t v___x_1303_; uint8_t v___x_1304_; 
v_newNode_1302_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(v___x_1301_, v_x_1247_, v_x_1248_);
v___x_1303_ = ((size_t)7ULL);
v___x_1304_ = lean_usize_dec_le(v___x_1303_, v_x_1246_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1305_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1302_);
v___x_1306_ = lean_unsigned_to_nat(4u);
v___x_1307_ = lean_nat_dec_lt(v___x_1305_, v___x_1306_);
lean_dec(v___x_1305_);
if (v___x_1307_ == 0)
{
lean_object* v_ks_1308_; lean_object* v_vs_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_ks_1308_ = lean_ctor_get(v_newNode_1302_, 0);
lean_inc_ref(v_ks_1308_);
v_vs_1309_ = lean_ctor_get(v_newNode_1302_, 1);
lean_inc_ref(v_vs_1309_);
lean_dec_ref(v_newNode_1302_);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___closed__1);
v___x_1312_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_x_1246_, v_ks_1308_, v_vs_1309_, v___x_1310_, v___x_1311_);
lean_dec_ref(v_vs_1309_);
lean_dec_ref(v_ks_1308_);
return v___x_1312_;
}
else
{
return v_newNode_1302_;
}
}
else
{
return v_newNode_1302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(size_t v_depth_1315_, lean_object* v_keys_1316_, lean_object* v_vals_1317_, lean_object* v_i_1318_, lean_object* v_entries_1319_){
_start:
{
lean_object* v___x_1320_; uint8_t v___x_1321_; 
v___x_1320_ = lean_array_get_size(v_keys_1316_);
v___x_1321_ = lean_nat_dec_lt(v_i_1318_, v___x_1320_);
if (v___x_1321_ == 0)
{
lean_dec(v_i_1318_);
return v_entries_1319_;
}
else
{
lean_object* v_k_1322_; lean_object* v_v_1323_; uint64_t v___x_1324_; size_t v_h_1325_; size_t v___x_1326_; lean_object* v___x_1327_; size_t v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; size_t v_h_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_k_1322_ = lean_array_fget_borrowed(v_keys_1316_, v_i_1318_);
v_v_1323_ = lean_array_fget_borrowed(v_vals_1317_, v_i_1318_);
v___x_1324_ = l_Lean_instHashableMVarId_hash(v_k_1322_);
v_h_1325_ = lean_uint64_to_usize(v___x_1324_);
v___x_1326_ = ((size_t)5ULL);
v___x_1327_ = lean_unsigned_to_nat(1u);
v___x_1328_ = ((size_t)1ULL);
v___x_1329_ = lean_usize_sub(v_depth_1315_, v___x_1328_);
v___x_1330_ = lean_usize_mul(v___x_1326_, v___x_1329_);
v_h_1331_ = lean_usize_shift_right(v_h_1325_, v___x_1330_);
v___x_1332_ = lean_nat_add(v_i_1318_, v___x_1327_);
lean_dec(v_i_1318_);
lean_inc(v_v_1323_);
lean_inc(v_k_1322_);
v___x_1333_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_entries_1319_, v_h_1331_, v_depth_1315_, v_k_1322_, v_v_1323_);
v_i_1318_ = v___x_1332_;
v_entries_1319_ = v___x_1333_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg___boxed(lean_object* v_depth_1335_, lean_object* v_keys_1336_, lean_object* v_vals_1337_, lean_object* v_i_1338_, lean_object* v_entries_1339_){
_start:
{
size_t v_depth_boxed_1340_; lean_object* v_res_1341_; 
v_depth_boxed_1340_ = lean_unbox_usize(v_depth_1335_);
lean_dec(v_depth_1335_);
v_res_1341_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_depth_boxed_1340_, v_keys_1336_, v_vals_1337_, v_i_1338_, v_entries_1339_);
lean_dec_ref(v_vals_1337_);
lean_dec_ref(v_keys_1336_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_x_1342_, lean_object* v_x_1343_, lean_object* v_x_1344_, lean_object* v_x_1345_, lean_object* v_x_1346_){
_start:
{
size_t v_x_22220__boxed_1347_; size_t v_x_22221__boxed_1348_; lean_object* v_res_1349_; 
v_x_22220__boxed_1347_ = lean_unbox_usize(v_x_1343_);
lean_dec(v_x_1343_);
v_x_22221__boxed_1348_ = lean_unbox_usize(v_x_1344_);
lean_dec(v_x_1344_);
v_res_1349_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1342_, v_x_22220__boxed_1347_, v_x_22221__boxed_1348_, v_x_1345_, v_x_1346_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_){
_start:
{
uint64_t v___x_1353_; size_t v___x_1354_; size_t v___x_1355_; lean_object* v___x_1356_; 
v___x_1353_ = l_Lean_instHashableMVarId_hash(v_x_1351_);
v___x_1354_ = lean_uint64_to_usize(v___x_1353_);
v___x_1355_ = ((size_t)1ULL);
v___x_1356_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1350_, v___x_1354_, v___x_1355_, v_x_1351_, v_x_1352_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(lean_object* v_mvarId_1357_, lean_object* v_val_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; lean_object* v_mctx_1362_; lean_object* v_cache_1363_; lean_object* v_zetaDeltaFVarIds_1364_; lean_object* v_postponed_1365_; lean_object* v_diag_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1395_; 
v___x_1361_ = lean_st_ref_take(v___y_1359_);
v_mctx_1362_ = lean_ctor_get(v___x_1361_, 0);
v_cache_1363_ = lean_ctor_get(v___x_1361_, 1);
v_zetaDeltaFVarIds_1364_ = lean_ctor_get(v___x_1361_, 2);
v_postponed_1365_ = lean_ctor_get(v___x_1361_, 3);
v_diag_1366_ = lean_ctor_get(v___x_1361_, 4);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1368_ = v___x_1361_;
v_isShared_1369_ = v_isSharedCheck_1395_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_diag_1366_);
lean_inc(v_postponed_1365_);
lean_inc(v_zetaDeltaFVarIds_1364_);
lean_inc(v_cache_1363_);
lean_inc(v_mctx_1362_);
lean_dec(v___x_1361_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1395_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v_depth_1370_; lean_object* v_levelAssignDepth_1371_; lean_object* v_lmvarCounter_1372_; lean_object* v_mvarCounter_1373_; lean_object* v_lDecls_1374_; lean_object* v_decls_1375_; lean_object* v_userNames_1376_; lean_object* v_lAssignment_1377_; lean_object* v_eAssignment_1378_; lean_object* v_dAssignment_1379_; lean_object* v_instanceTypedMVars_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1394_; 
v_depth_1370_ = lean_ctor_get(v_mctx_1362_, 0);
v_levelAssignDepth_1371_ = lean_ctor_get(v_mctx_1362_, 1);
v_lmvarCounter_1372_ = lean_ctor_get(v_mctx_1362_, 2);
v_mvarCounter_1373_ = lean_ctor_get(v_mctx_1362_, 3);
v_lDecls_1374_ = lean_ctor_get(v_mctx_1362_, 4);
v_decls_1375_ = lean_ctor_get(v_mctx_1362_, 5);
v_userNames_1376_ = lean_ctor_get(v_mctx_1362_, 6);
v_lAssignment_1377_ = lean_ctor_get(v_mctx_1362_, 7);
v_eAssignment_1378_ = lean_ctor_get(v_mctx_1362_, 8);
v_dAssignment_1379_ = lean_ctor_get(v_mctx_1362_, 9);
v_instanceTypedMVars_1380_ = lean_ctor_get(v_mctx_1362_, 10);
v_isSharedCheck_1394_ = !lean_is_exclusive(v_mctx_1362_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1382_ = v_mctx_1362_;
v_isShared_1383_ = v_isSharedCheck_1394_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_instanceTypedMVars_1380_);
lean_inc(v_dAssignment_1379_);
lean_inc(v_eAssignment_1378_);
lean_inc(v_lAssignment_1377_);
lean_inc(v_userNames_1376_);
lean_inc(v_decls_1375_);
lean_inc(v_lDecls_1374_);
lean_inc(v_mvarCounter_1373_);
lean_inc(v_lmvarCounter_1372_);
lean_inc(v_levelAssignDepth_1371_);
lean_inc(v_depth_1370_);
lean_dec(v_mctx_1362_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1394_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(v_eAssignment_1378_, v_mvarId_1357_, v_val_1358_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 8, v___x_1385_);
v___x_1387_ = v___x_1382_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_depth_1370_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v_levelAssignDepth_1371_);
lean_ctor_set(v_reuseFailAlloc_1393_, 2, v_lmvarCounter_1372_);
lean_ctor_set(v_reuseFailAlloc_1393_, 3, v_mvarCounter_1373_);
lean_ctor_set(v_reuseFailAlloc_1393_, 4, v_lDecls_1374_);
lean_ctor_set(v_reuseFailAlloc_1393_, 5, v_decls_1375_);
lean_ctor_set(v_reuseFailAlloc_1393_, 6, v_userNames_1376_);
lean_ctor_set(v_reuseFailAlloc_1393_, 7, v_lAssignment_1377_);
lean_ctor_set(v_reuseFailAlloc_1393_, 8, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1393_, 9, v_dAssignment_1379_);
lean_ctor_set(v_reuseFailAlloc_1393_, 10, v_instanceTypedMVars_1380_);
v___x_1387_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1389_; 
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 0, v___x_1387_);
v___x_1389_ = v___x_1368_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1387_);
lean_ctor_set(v_reuseFailAlloc_1392_, 1, v_cache_1363_);
lean_ctor_set(v_reuseFailAlloc_1392_, 2, v_zetaDeltaFVarIds_1364_);
lean_ctor_set(v_reuseFailAlloc_1392_, 3, v_postponed_1365_);
lean_ctor_set(v_reuseFailAlloc_1392_, 4, v_diag_1366_);
v___x_1389_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_st_ref_put(v___y_1359_, v___x_1389_);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1384_);
return v___x_1391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg___boxed(lean_object* v_mvarId_1396_, lean_object* v_val_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1396_, v_val_1397_, v___y_1398_);
lean_dec(v___y_1398_);
return v_res_1400_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__1(void){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = l_Lean_NameSet_empty;
v___x_1404_ = ((lean_object*)(l_Lean_Elab_Tactic_renameInaccessibles___closed__0));
v___x_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
lean_ctor_set(v___x_1405_, 1, v___x_1403_);
return v___x_1405_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__3(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lean_Elab_Tactic_renameInaccessibles___closed__2));
v___x_1408_ = l_Lean_stringToMessageData(v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles(lean_object* v_mvarId_1409_, lean_object* v_hs_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1418_ = lean_array_get_size(v_hs_1410_);
v___x_1419_ = lean_unsigned_to_nat(0u);
v___x_1420_ = lean_nat_dec_eq(v___x_1418_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; 
lean_inc(v_mvarId_1409_);
v___x_1421_ = l_Lean_MVarId_getDecl(v_mvarId_1409_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1525_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1525_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1525_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; size_t v_sz_1429_; size_t v___x_1430_; lean_object* v___x_1431_; lean_object* v_fst_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1523_; 
v___x_1426_ = l_unsafeCast___redArg(v_hs_1410_);
v___x_1427_ = lean_box(0);
v___x_1428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5___closed__0));
v_sz_1429_ = lean_array_size(v___x_1426_);
v___x_1430_ = ((size_t)0ULL);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_renameInaccessibles_spec__5(v___x_1426_, v_sz_1429_, v___x_1430_, v___x_1428_);
lean_dec(v___x_1426_);
v_fst_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v___x_1431_, 1);
lean_dec(v_unused_1524_);
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1523_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_fst_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1523_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
if (lean_obj_tag(v_fst_1432_) == 0)
{
lean_object* v___x_1437_; 
lean_del_object(v___x_1434_);
lean_dec(v_a_1422_);
lean_dec_ref(v_hs_1410_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v_mvarId_1409_);
v___x_1437_ = v___x_1424_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_mvarId_1409_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
else
{
lean_object* v_val_1439_; 
v_val_1439_ = lean_ctor_get(v_fst_1432_, 0);
lean_inc(v_val_1439_);
lean_dec_ref_known(v_fst_1432_, 1);
if (lean_obj_tag(v_val_1439_) == 1)
{
lean_object* v_val_1440_; lean_object* v_userName_1441_; lean_object* v_lctx_1442_; lean_object* v_type_1443_; lean_object* v_localInstances_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1448_; 
lean_del_object(v___x_1424_);
v_val_1440_ = lean_ctor_get(v_val_1439_, 0);
lean_inc(v_val_1440_);
lean_dec_ref_known(v_val_1439_, 1);
v_userName_1441_ = lean_ctor_get(v_a_1422_, 0);
lean_inc(v_userName_1441_);
v_lctx_1442_ = lean_ctor_get(v_a_1422_, 1);
lean_inc_ref_n(v_lctx_1442_, 2);
v_type_1443_ = lean_ctor_get(v_a_1422_, 2);
lean_inc_ref(v_type_1443_);
v_localInstances_1444_ = lean_ctor_get(v_a_1422_, 4);
lean_inc_ref(v_localInstances_1444_);
lean_dec(v_a_1422_);
v___x_1445_ = lean_local_ctx_num_indices(v_lctx_1442_);
v___x_1446_ = lean_obj_once(&l_Lean_Elab_Tactic_renameInaccessibles___closed__1, &l_Lean_Elab_Tactic_renameInaccessibles___closed__1_once, _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__1);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 1, v___x_1446_);
lean_ctor_set(v___x_1434_, 0, v_hs_1410_);
v___x_1448_ = v___x_1434_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_hs_1410_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v_lctx_1442_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v___x_1445_, v___x_1445_, v_val_1440_, v___x_1419_, v___x_1449_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_);
lean_dec(v_val_1440_);
lean_dec(v___x_1445_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_snd_1452_; lean_object* v_snd_1453_; lean_object* v_fst_1454_; lean_object* v_fst_1455_; lean_object* v_fst_1456_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___x_1499_; uint8_t v___x_1500_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___x_1450_, 1);
v_snd_1452_ = lean_ctor_get(v_a_1451_, 1);
lean_inc(v_snd_1452_);
v_snd_1453_ = lean_ctor_get(v_snd_1452_, 1);
lean_inc(v_snd_1453_);
v_fst_1454_ = lean_ctor_get(v_a_1451_, 0);
lean_inc(v_fst_1454_);
lean_dec(v_a_1451_);
v_fst_1455_ = lean_ctor_get(v_snd_1452_, 0);
lean_inc(v_fst_1455_);
lean_dec(v_snd_1452_);
v_fst_1456_ = lean_ctor_get(v_snd_1453_, 0);
lean_inc(v_fst_1456_);
lean_dec(v_snd_1453_);
v___x_1499_ = lean_array_get_size(v_fst_1455_);
lean_dec(v_fst_1455_);
v___x_1500_ = lean_nat_dec_eq(v___x_1499_, v___x_1419_);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_obj_once(&l_Lean_Elab_Tactic_renameInaccessibles___closed__3, &l_Lean_Elab_Tactic_renameInaccessibles___closed__3_once, _init_l_Lean_Elab_Tactic_renameInaccessibles___closed__3);
v___x_1502_ = l_Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4(v___x_1501_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_dec_ref_known(v___x_1502_, 1);
v___y_1458_ = v_a_1411_;
v___y_1459_ = v_a_1412_;
v___y_1460_ = v_a_1413_;
v___y_1461_ = v_a_1414_;
v___y_1462_ = v_a_1415_;
v___y_1463_ = v_a_1416_;
goto v___jp_1457_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_fst_1456_);
lean_dec(v_fst_1454_);
lean_dec_ref(v_localInstances_1444_);
lean_dec_ref(v_type_1443_);
lean_dec(v_userName_1441_);
lean_dec(v_mvarId_1409_);
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
else
{
v___y_1458_ = v_a_1411_;
v___y_1459_ = v_a_1412_;
v___y_1460_ = v_a_1413_;
v___y_1461_ = v_a_1414_;
v___y_1462_ = v_a_1415_;
v___y_1463_ = v_a_1416_;
goto v___jp_1457_;
}
v___jp_1457_:
{
uint8_t v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = 2;
v___x_1465_ = l_Lean_Meta_mkFreshExprMVarAt(v_fst_1454_, v_localInstances_1444_, v_type_1443_, v___x_1464_, v_userName_1441_, v___x_1419_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1467_; size_t v_sz_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___f_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref_known(v___x_1465_, 1);
v___x_1467_ = l_Lean_Expr_mvarId_x21(v_a_1466_);
v_sz_1468_ = lean_array_size(v_fst_1456_);
v___x_1469_ = lean_box_usize(v_sz_1468_);
v___x_1470_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__6_spec__11___boxed__const__1));
v___f_1471_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_renameInaccessibles___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1471_, 0, v_fst_1456_);
lean_closure_set(v___f_1471_, 1, v___x_1469_);
lean_closure_set(v___f_1471_, 2, v___x_1470_);
lean_closure_set(v___f_1471_, 3, v___x_1427_);
lean_inc(v___x_1467_);
v___x_1472_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__1___boxed), 10, 3);
lean_closure_set(v___x_1472_, 0, lean_box(0));
lean_closure_set(v___x_1472_, 1, v___x_1467_);
lean_closure_set(v___x_1472_, 2, v___f_1471_);
v___x_1473_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v___x_1472_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec_ref_known(v___x_1473_, 1);
v___x_1474_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1409_, v_a_1466_, v___y_1461_);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; 
v_unused_1482_ = lean_ctor_get(v___x_1474_, 0);
lean_dec(v_unused_1482_);
v___x_1476_ = v___x_1474_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v___x_1474_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1467_);
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1467_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v___x_1467_);
lean_dec(v_a_1466_);
lean_dec(v_mvarId_1409_);
v_a_1483_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1473_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1473_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v_fst_1456_);
lean_dec(v_mvarId_1409_);
v_a_1491_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1465_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1465_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
lean_dec_ref(v_localInstances_1444_);
lean_dec_ref(v_type_1443_);
lean_dec(v_userName_1441_);
lean_dec(v_mvarId_1409_);
v_a_1511_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___x_1450_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1450_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
}
else
{
lean_object* v___x_1521_; 
lean_dec(v_val_1439_);
lean_del_object(v___x_1434_);
lean_dec(v_a_1422_);
lean_dec_ref(v_hs_1410_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v_mvarId_1409_);
v___x_1521_ = v___x_1424_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_mvarId_1409_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
lean_dec_ref(v_hs_1410_);
lean_dec(v_mvarId_1409_);
v_a_1526_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1421_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1421_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
else
{
lean_object* v___x_1534_; 
lean_dec_ref(v_hs_1410_);
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v_mvarId_1409_);
return v___x_1534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_renameInaccessibles___boxed(lean_object* v_mvarId_1535_, lean_object* v_hs_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_Elab_Tactic_renameInaccessibles(v_mvarId_1535_, v_hs_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_);
lean_dec(v_a_1542_);
lean_dec_ref(v_a_1541_);
lean_dec(v_a_1540_);
lean_dec_ref(v_a_1539_);
lean_dec(v_a_1538_);
lean_dec_ref(v_a_1537_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(lean_object* v_00_u03b1_1545_, lean_object* v_x_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___redArg(v_x_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2___boxed(lean_object* v_00_u03b1_1555_, lean_object* v_x_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2(v_00_u03b1_1555_, v_x_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(lean_object* v_mvarId_1565_, lean_object* v_val_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___redArg(v_mvarId_1565_, v_val_1566_, v___y_1570_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3___boxed(lean_object* v_mvarId_1575_, lean_object* v_val_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3(v_mvarId_1575_, v_val_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(lean_object* v_upperBound_1585_, lean_object* v___x_1586_, lean_object* v_val_1587_, lean_object* v_inst_1588_, lean_object* v_R_1589_, lean_object* v_a_1590_, lean_object* v_b_1591_, lean_object* v_c_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___redArg(v_upperBound_1585_, v___x_1586_, v_val_1587_, v_a_1590_, v_b_1591_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6___boxed(lean_object* v_upperBound_1601_, lean_object* v___x_1602_, lean_object* v_val_1603_, lean_object* v_inst_1604_, lean_object* v_R_1605_, lean_object* v_a_1606_, lean_object* v_b_1607_, lean_object* v_c_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_renameInaccessibles_spec__6(v_upperBound_1601_, v___x_1602_, v_val_1603_, v_inst_1604_, v_R_1605_, v_a_1606_, v_b_1607_, v_c_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec_ref(v_val_1603_);
lean_dec(v___x_1602_);
lean_dec(v_upperBound_1601_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___redArg(v___y_1620_, v___y_1621_, v___y_1622_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3___boxed(lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Elab_CommandContextInfo_saveNoFileMap___at___00Lean_Elab_CommandContextInfo_save___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__2_spec__3(v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___redArg(v___y_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5___boxed(lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3_spec__5(v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(lean_object* v_00_u03b1_1649_, lean_object* v_x_1650_, lean_object* v_ctx_x3f_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___redArg(v_x_1650_, v_ctx_x3f_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1660_, lean_object* v_x_1661_, lean_object* v_ctx_x3f_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l___private_Lean_Elab_InfoTree_Main_0__Lean_Elab_withSavedPartialInfoContext___at___00Lean_Elab_withSaveInfoContext___at___00Lean_Elab_Tactic_renameInaccessibles_spec__2_spec__3(v_00_u03b1_1660_, v_x_1661_, v_ctx_x3f_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5(lean_object* v_00_u03b2_1671_, lean_object* v_x_1672_, lean_object* v_x_1673_, lean_object* v_x_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5___redArg(v_x_1672_, v_x_1673_, v_x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1676_, lean_object* v_x_1677_, size_t v_x_1678_, size_t v_x_1679_, lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___redArg(v_x_1677_, v_x_1678_, v_x_1679_, v_x_1680_, v_x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1683_, lean_object* v_x_1684_, lean_object* v_x_1685_, lean_object* v_x_1686_, lean_object* v_x_1687_, lean_object* v_x_1688_){
_start:
{
size_t v_x_22836__boxed_1689_; size_t v_x_22837__boxed_1690_; lean_object* v_res_1691_; 
v_x_22836__boxed_1689_ = lean_unbox_usize(v_x_1685_);
lean_dec(v_x_1685_);
v_x_22837__boxed_1690_ = lean_unbox_usize(v_x_1686_);
lean_dec(v_x_1686_);
v_res_1691_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9(v_00_u03b2_1683_, v_x_1684_, v_x_22836__boxed_1689_, v_x_22837__boxed_1690_, v_x_1687_, v_x_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(lean_object* v_ref_1692_, lean_object* v_msgData_1693_, uint8_t v_severity_1694_, uint8_t v_isSilent_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___redArg(v_ref_1692_, v_msgData_1693_, v_severity_1694_, v_isSilent_1695_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12___boxed(lean_object* v_ref_1704_, lean_object* v_msgData_1705_, lean_object* v_severity_1706_, lean_object* v_isSilent_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
uint8_t v_severity_boxed_1715_; uint8_t v_isSilent_boxed_1716_; lean_object* v_res_1717_; 
v_severity_boxed_1715_ = lean_unbox(v_severity_1706_);
v_isSilent_boxed_1716_ = lean_unbox(v_isSilent_1707_);
v_res_1717_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_renameInaccessibles_spec__4_spec__7_spec__12(v_ref_1704_, v_msgData_1705_, v_severity_boxed_1715_, v_isSilent_boxed_1716_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v_ref_1704_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15(lean_object* v_00_u03b2_1718_, lean_object* v_n_1719_, lean_object* v_k_1720_, lean_object* v_v_1721_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15___redArg(v_n_1719_, v_k_1720_, v_v_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(lean_object* v_00_u03b2_1723_, size_t v_depth_1724_, lean_object* v_keys_1725_, lean_object* v_vals_1726_, lean_object* v_heq_1727_, lean_object* v_i_1728_, lean_object* v_entries_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___redArg(v_depth_1724_, v_keys_1725_, v_vals_1726_, v_i_1728_, v_entries_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1731_, lean_object* v_depth_1732_, lean_object* v_keys_1733_, lean_object* v_vals_1734_, lean_object* v_heq_1735_, lean_object* v_i_1736_, lean_object* v_entries_1737_){
_start:
{
size_t v_depth_boxed_1738_; lean_object* v_res_1739_; 
v_depth_boxed_1738_ = lean_unbox_usize(v_depth_1732_);
lean_dec(v_depth_1732_);
v_res_1739_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__16(v_00_u03b2_1731_, v_depth_boxed_1738_, v_keys_1733_, v_vals_1734_, v_heq_1735_, v_i_1736_, v_entries_1737_);
lean_dec_ref(v_vals_1734_);
lean_dec_ref(v_keys_1733_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18(lean_object* v_00_u03b2_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_, lean_object* v_x_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_renameInaccessibles_spec__3_spec__5_spec__9_spec__15_spec__18___redArg(v_x_1741_, v_x_1742_, v_x_1743_, v_x_1744_);
return v___x_1745_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Binders(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_RenameInaccessibles(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_RenameInaccessibles(builtin);
}
#ifdef __cplusplus
}
#endif

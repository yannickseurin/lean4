// Lean compiler output
// Module: Lean.Meta.CasesInfo
// Imports: public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getForallBody(lean_object*);
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
uint8_t l_Lean_isCasesOnLike(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_default_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_default_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedCasesAltInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedCasesAltInfo_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedCasesAltInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedCasesAltInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedCasesAltInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedCasesAltInfo;
LEAN_EXPORT lean_object* l_Lean_CasesInfo_numAlts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesInfo_numAlts___boxed(lean_object*);
static const lean_closure_object l_panic___at___00Lean_getCasesInfo_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_getCasesInfo_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.CasesInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.getCasesInfo\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: mr.isApp\n          "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "assertion violation: motiveArg == xs[discrPos]!\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getCasesInfo_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "assertion violation: r.isApp\n      "};
static const lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_getCasesInfo_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__1;
static const lean_string_object l_Lean_getCasesInfo_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "assertion violation: r.appArg!.isFVar  -- major argument\n      "};
static const lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_getCasesInfo_x3f___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__3;
static const lean_string_object l_Lean_getCasesInfo_x3f___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "assertion violation: r.getAppFn.isFVar -- motive\n      "};
static const lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__4 = (const lean_object*)&l_Lean_getCasesInfo_x3f___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__5;
static const lean_array_object l_Lean_getCasesInfo_x3f___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__6 = (const lean_object*)&l_Lean_getCasesInfo_x3f___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__7;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__8;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___lam__0___closed__9;
static const lean_ctor_object l_Lean_getCasesInfo_x3f___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_getCasesInfo_x3f___lam__0___boxed__const__1 = (const lean_object*)&l_Lean_getCasesInfo_x3f___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__0;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__1;
static const lean_array_object l_Lean_getCasesInfo_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getCasesInfo_x3f___closed__2 = (const lean_object*)&l_Lean_getCasesInfo_x3f___closed__2_value;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__3;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__4;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__5;
static lean_once_cell_t l_Lean_getCasesInfo_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getCasesInfo_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_CasesAltInfo_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_ctorName_8_; lean_object* v_numFields_9_; lean_object* v___x_10_; 
v_ctorName_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_ctorName_8_);
v_numFields_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_numFields_9_);
lean_dec_ref_known(v_t_6_, 2);
v___x_10_ = lean_apply_2(v_k_7_, v_ctorName_8_, v_numFields_9_);
return v___x_10_;
}
else
{
lean_object* v_numHyps_11_; lean_object* v___x_12_; 
v_numHyps_11_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_numHyps_11_);
lean_dec_ref_known(v_t_6_, 1);
v___x_12_ = lean_apply_1(v_k_7_, v_numHyps_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_CasesAltInfo_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_CasesAltInfo_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctor_elim___redArg(lean_object* v_t_25_, lean_object* v_ctor_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_CasesAltInfo_ctorElim___redArg(v_t_25_, v_ctor_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_ctor_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_ctor_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_CasesAltInfo_ctorElim___redArg(v_t_29_, v_ctor_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_default_elim___redArg(lean_object* v_t_33_, lean_object* v_default_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_CasesAltInfo_ctorElim___redArg(v_t_33_, v_default_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesAltInfo_default_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_default_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_CasesAltInfo_ctorElim___redArg(v_t_37_, v_default_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_instInhabitedCasesAltInfo_default___closed__0(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = l_unsafeCast___redArg(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_instInhabitedCasesAltInfo_default___closed__1(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_obj_once(&l_Lean_instInhabitedCasesAltInfo_default___closed__0, &l_Lean_instInhabitedCasesAltInfo_default___closed__0_once, _init_l_Lean_instInhabitedCasesAltInfo_default___closed__0);
v___x_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_instInhabitedCasesAltInfo_default(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&l_Lean_instInhabitedCasesAltInfo_default___closed__1, &l_Lean_instInhabitedCasesAltInfo_default___closed__1_once, _init_l_Lean_instInhabitedCasesAltInfo_default___closed__1);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_instInhabitedCasesAltInfo(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_instInhabitedCasesAltInfo_default;
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesInfo_numAlts(lean_object* v_c_48_){
_start:
{
lean_object* v_altNumParams_49_; lean_object* v___x_50_; 
v_altNumParams_49_ = lean_ctor_get(v_c_48_, 6);
v___x_50_ = lean_array_get_size(v_altNumParams_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_CasesInfo_numAlts___boxed(lean_object* v_c_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_CasesInfo_numAlts(v_c_51_);
lean_dec_ref(v_c_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__0(lean_object* v_msg_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v___f_60_; lean_object* v___x_3403__overap_61_; lean_object* v___x_62_; 
v___f_60_ = ((lean_object*)(l_panic___at___00Lean_getCasesInfo_x3f_spec__0___closed__0));
v___x_3403__overap_61_ = lean_panic_fn_borrowed(v___f_60_, v_msg_54_);
lean_inc(v___y_58_);
lean_inc_ref(v___y_57_);
lean_inc(v___y_56_);
lean_inc_ref(v___y_55_);
v___x_62_ = lean_apply_5(v___x_3403__overap_61_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, lean_box(0));
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__0___boxed(lean_object* v_msg_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v_msg_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__2(lean_object* v_msg_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___f_76_; lean_object* v___x_3425__overap_77_; lean_object* v___x_78_; 
v___f_76_ = ((lean_object*)(l_panic___at___00Lean_getCasesInfo_x3f_spec__0___closed__0));
v___x_3425__overap_77_ = lean_panic_fn_borrowed(v___f_76_, v_msg_70_);
lean_inc(v___y_74_);
lean_inc_ref(v___y_73_);
lean_inc(v___y_72_);
lean_inc_ref(v___y_71_);
v___x_78_ = lean_apply_5(v___x_3425__overap_77_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, lean_box(0));
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getCasesInfo_x3f_spec__2___boxed(lean_object* v_msg_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__2(v_msg_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0(lean_object* v_k_86_, lean_object* v_b_87_, lean_object* v_c_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; 
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
v___x_94_ = lean_apply_7(v_k_86_, v_b_87_, v_c_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, lean_box(0));
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0___boxed(lean_object* v_k_95_, lean_object* v_b_96_, lean_object* v_c_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0(v_k_95_, v_b_96_, v_c_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(lean_object* v_type_104_, lean_object* v_k_105_, uint8_t v_cleanupAnnotations_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v___f_112_; uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___f_112_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_112_, 0, v_k_105_);
v___x_113_ = 0;
v___x_114_ = lean_box(0);
v___x_115_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_113_, v___x_114_, v_type_104_, v___f_112_, v_cleanupAnnotations_106_, v___x_113_, v___y_107_, v___y_108_, v___y_109_, v___y_110_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
v_a_124_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_115_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_115_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg___boxed(lean_object* v_type_132_, lean_object* v_k_133_, lean_object* v_cleanupAnnotations_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_140_; lean_object* v_res_141_; 
v_cleanupAnnotations_boxed_140_ = lean_unbox(v_cleanupAnnotations_134_);
v_res_141_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(v_type_132_, v_k_133_, v_cleanupAnnotations_boxed_140_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5(lean_object* v_00_u03b1_142_, lean_object* v_type_143_, lean_object* v_k_144_, uint8_t v_cleanupAnnotations_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(v_type_143_, v_k_144_, v_cleanupAnnotations_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___boxed(lean_object* v_00_u03b1_152_, lean_object* v_type_153_, lean_object* v_k_154_, lean_object* v_cleanupAnnotations_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_161_; lean_object* v_res_162_; 
v_cleanupAnnotations_boxed_161_ = lean_unbox(v_cleanupAnnotations_155_);
v_res_162_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5(v_00_u03b1_152_, v_type_153_, v_k_154_, v_cleanupAnnotations_boxed_161_, v___y_156_, v___y_157_, v___y_158_, v___y_159_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6___redArg(lean_object* v_a_163_, lean_object* v_b_164_){
_start:
{
lean_object* v_next_165_; 
v_next_165_ = lean_ctor_get(v_a_163_, 0);
lean_inc(v_next_165_);
if (lean_obj_tag(v_next_165_) == 0)
{
lean_dec_ref(v_a_163_);
return v_b_164_;
}
else
{
lean_object* v_upperBound_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_186_; 
v_upperBound_166_ = lean_ctor_get(v_a_163_, 1);
v_isSharedCheck_186_ = !lean_is_exclusive(v_a_163_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v_a_163_, 0);
lean_dec(v_unused_187_);
v___x_168_ = v_a_163_;
v_isShared_169_ = v_isSharedCheck_186_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_upperBound_166_);
lean_dec(v_a_163_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_186_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v_val_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_185_; 
v_val_170_ = lean_ctor_get(v_next_165_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_next_165_);
if (v_isSharedCheck_185_ == 0)
{
v___x_172_ = v_next_165_;
v_isShared_173_ = v_isSharedCheck_185_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_val_170_);
lean_dec(v_next_165_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_185_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
uint8_t v___x_174_; 
v___x_174_ = lean_nat_dec_lt(v_val_170_, v_upperBound_166_);
if (v___x_174_ == 0)
{
lean_del_object(v___x_172_);
lean_dec(v_val_170_);
lean_del_object(v___x_168_);
lean_dec(v_upperBound_166_);
return v_b_164_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_val_170_, v___x_175_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 0, v___x_176_);
v___x_178_ = v___x_172_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_184_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_180_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_178_);
v___x_180_ = v___x_168_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_upperBound_166_);
v___x_180_ = v_reuseFailAlloc_183_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_181_; 
v___x_181_ = lean_array_push(v_b_164_, v_val_170_);
v_a_163_ = v___x_180_;
v_b_164_ = v___x_181_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4(lean_object* v_xs_188_, lean_object* v_v_189_, lean_object* v_i_190_){
_start:
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_array_get_size(v_xs_188_);
v___x_192_ = lean_nat_dec_lt(v_i_190_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
lean_dec(v_i_190_);
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_array_fget_borrowed(v_xs_188_, v_i_190_);
v___x_195_ = lean_expr_eqv(v___x_194_, v_v_189_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(1u);
v___x_197_ = lean_nat_add(v_i_190_, v___x_196_);
lean_dec(v_i_190_);
v_i_190_ = v___x_197_;
goto _start;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v_i_190_);
return v___x_199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4___boxed(lean_object* v_xs_200_, lean_object* v_v_201_, lean_object* v_i_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4(v_xs_200_, v_v_201_, v_i_202_);
lean_dec_ref(v_v_201_);
lean_dec_ref(v_xs_200_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1(lean_object* v_xs_204_, lean_object* v_v_205_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1_spec__4(v_xs_204_, v_v_205_, v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1___boxed(lean_object* v_xs_208_, lean_object* v_v_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1(v_xs_208_, v_v_209_);
lean_dec_ref(v_v_209_);
lean_dec_ref(v_xs_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1(lean_object* v_xs_211_, lean_object* v_v_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1_spec__1(v_xs_211_, v_v_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
else
{
lean_object* v_val_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
v_val_215_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_213_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_val_215_);
lean_dec(v___x_213_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_val_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1___boxed(lean_object* v_xs_223_, lean_object* v_v_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1(v_xs_223_, v_v_224_);
lean_dec_ref(v_v_224_);
lean_dec_ref(v_xs_223_);
return v_res_225_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_instMonadEIO___redArg();
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5(lean_object* v_msg_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v_toApplicative_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_300_; 
v___x_237_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__0);
v___x_238_ = l_StateRefT_x27_instMonad___redArg(v___x_237_);
v_toApplicative_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; 
v_unused_301_ = lean_ctor_get(v___x_238_, 1);
lean_dec(v_unused_301_);
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_300_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_toApplicative_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_300_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v_toFunctor_243_; lean_object* v_toSeq_244_; lean_object* v_toSeqLeft_245_; lean_object* v_toSeqRight_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_298_; 
v_toFunctor_243_ = lean_ctor_get(v_toApplicative_239_, 0);
v_toSeq_244_ = lean_ctor_get(v_toApplicative_239_, 2);
v_toSeqLeft_245_ = lean_ctor_get(v_toApplicative_239_, 3);
v_toSeqRight_246_ = lean_ctor_get(v_toApplicative_239_, 4);
v_isSharedCheck_298_ = !lean_is_exclusive(v_toApplicative_239_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; 
v_unused_299_ = lean_ctor_get(v_toApplicative_239_, 1);
lean_dec(v_unused_299_);
v___x_248_ = v_toApplicative_239_;
v_isShared_249_ = v_isSharedCheck_298_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_toSeqRight_246_);
lean_inc(v_toSeqLeft_245_);
lean_inc(v_toSeq_244_);
lean_inc(v_toFunctor_243_);
lean_dec(v_toApplicative_239_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_298_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___f_250_; lean_object* v___f_251_; lean_object* v___f_252_; lean_object* v___f_253_; lean_object* v___x_254_; lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___x_259_; 
v___f_250_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__1));
v___f_251_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__2));
lean_inc_ref(v_toFunctor_243_);
v___f_252_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_252_, 0, v_toFunctor_243_);
v___f_253_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_253_, 0, v_toFunctor_243_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___f_252_);
lean_ctor_set(v___x_254_, 1, v___f_253_);
v___f_255_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_255_, 0, v_toSeqRight_246_);
v___f_256_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_256_, 0, v_toSeqLeft_245_);
v___f_257_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_257_, 0, v_toSeq_244_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 4, v___f_255_);
lean_ctor_set(v___x_248_, 3, v___f_256_);
lean_ctor_set(v___x_248_, 2, v___f_257_);
lean_ctor_set(v___x_248_, 1, v___f_250_);
lean_ctor_set(v___x_248_, 0, v___x_254_);
v___x_259_ = v___x_248_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v___f_250_);
lean_ctor_set(v_reuseFailAlloc_297_, 2, v___f_257_);
lean_ctor_set(v_reuseFailAlloc_297_, 3, v___f_256_);
lean_ctor_set(v_reuseFailAlloc_297_, 4, v___f_255_);
v___x_259_ = v_reuseFailAlloc_297_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_261_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 1, v___f_251_);
lean_ctor_set(v___x_241_, 0, v___x_259_);
v___x_261_ = v___x_241_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_259_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v___f_251_);
v___x_261_ = v_reuseFailAlloc_296_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; lean_object* v_toApplicative_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_294_; 
v___x_262_ = l_StateRefT_x27_instMonad___redArg(v___x_261_);
v_toApplicative_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v___x_262_, 1);
lean_dec(v_unused_295_);
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_294_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_toApplicative_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_294_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_toFunctor_267_; lean_object* v_toSeq_268_; lean_object* v_toSeqLeft_269_; lean_object* v_toSeqRight_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_292_; 
v_toFunctor_267_ = lean_ctor_get(v_toApplicative_263_, 0);
v_toSeq_268_ = lean_ctor_get(v_toApplicative_263_, 2);
v_toSeqLeft_269_ = lean_ctor_get(v_toApplicative_263_, 3);
v_toSeqRight_270_ = lean_ctor_get(v_toApplicative_263_, 4);
v_isSharedCheck_292_ = !lean_is_exclusive(v_toApplicative_263_);
if (v_isSharedCheck_292_ == 0)
{
lean_object* v_unused_293_; 
v_unused_293_ = lean_ctor_get(v_toApplicative_263_, 1);
lean_dec(v_unused_293_);
v___x_272_ = v_toApplicative_263_;
v_isShared_273_ = v_isSharedCheck_292_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_toSeqRight_270_);
lean_inc(v_toSeqLeft_269_);
lean_inc(v_toSeq_268_);
lean_inc(v_toFunctor_267_);
lean_dec(v_toApplicative_263_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_292_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_283_; 
v___f_274_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__3));
v___f_275_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___closed__4));
lean_inc_ref(v_toFunctor_267_);
v___f_276_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_276_, 0, v_toFunctor_267_);
v___f_277_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_277_, 0, v_toFunctor_267_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___f_276_);
lean_ctor_set(v___x_278_, 1, v___f_277_);
v___f_279_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_279_, 0, v_toSeqRight_270_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_280_, 0, v_toSeqLeft_269_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_281_, 0, v_toSeq_268_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 4, v___f_279_);
lean_ctor_set(v___x_272_, 3, v___f_280_);
lean_ctor_set(v___x_272_, 2, v___f_281_);
lean_ctor_set(v___x_272_, 1, v___f_274_);
lean_ctor_set(v___x_272_, 0, v___x_278_);
v___x_283_ = v___x_272_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v___f_274_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v___f_281_);
lean_ctor_set(v_reuseFailAlloc_291_, 3, v___f_280_);
lean_ctor_set(v_reuseFailAlloc_291_, 4, v___f_279_);
v___x_283_ = v_reuseFailAlloc_291_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 1, v___f_275_);
lean_ctor_set(v___x_265_, 0, v___x_283_);
v___x_285_ = v___x_265_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v___f_275_);
v___x_285_ = v_reuseFailAlloc_290_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_5485__overap_288_; lean_object* v___x_289_; 
v___x_286_ = lean_box(0);
v___x_287_ = l_instInhabitedOfMonad___redArg(v___x_285_, v___x_286_);
v___x_5485__overap_288_ = lean_panic_fn_borrowed(v___x_287_, v_msg_231_);
lean_dec(v___x_287_);
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
lean_inc(v___y_233_);
lean_inc_ref(v___y_232_);
v___x_289_ = lean_apply_5(v___x_5485__overap_288_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, lean_box(0));
return v___x_289_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5___boxed(lean_object* v_msg_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5(v_msg_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7(lean_object* v_msgData_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v___x_315_; lean_object* v_env_316_; lean_object* v___x_317_; lean_object* v_toCold_318_; lean_object* v_mctx_319_; lean_object* v_lctx_320_; lean_object* v_options_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_315_ = lean_st_ref_get(v___y_313_);
v_env_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc_ref(v_env_316_);
lean_dec(v___x_315_);
v___x_317_ = lean_st_ref_get(v___y_311_);
v_toCold_318_ = lean_ctor_get(v___y_312_, 0);
v_mctx_319_ = lean_ctor_get(v___x_317_, 0);
lean_inc_ref(v_mctx_319_);
lean_dec(v___x_317_);
v_lctx_320_ = lean_ctor_get(v___y_310_, 2);
v_options_321_ = lean_ctor_get(v_toCold_318_, 2);
lean_inc_ref(v_options_321_);
lean_inc_ref(v_lctx_320_);
v___x_322_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_322_, 0, v_env_316_);
lean_ctor_set(v___x_322_, 1, v_mctx_319_);
lean_ctor_set(v___x_322_, 2, v_lctx_320_);
lean_ctor_set(v___x_322_, 3, v_options_321_);
v___x_323_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v_msgData_309_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7___boxed(lean_object* v_msgData_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7(v_msgData_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg(lean_object* v_msg_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_ref_338_; lean_object* v___x_339_; lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_348_; 
v_ref_338_ = lean_ctor_get(v___y_335_, 2);
v___x_339_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4_spec__7(v_msg_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_348_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_348_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_348_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_346_; 
lean_inc(v_ref_338_);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v_ref_338_);
lean_ctor_set(v___x_344_, 1, v_a_340_);
if (v_isShared_343_ == 0)
{
lean_ctor_set_tag(v___x_342_, 1);
lean_ctor_set(v___x_342_, 0, v___x_344_);
v___x_346_ = v___x_342_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg___boxed(lean_object* v_msg_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg(v_msg_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_355_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__0));
v___x_358_ = l_Lean_stringToMessageData(v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__2));
v___x_361_ = l_Lean_stringToMessageData(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_365_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6));
v___x_366_ = lean_unsigned_to_nat(11u);
v___x_367_ = lean_unsigned_to_nat(122u);
v___x_368_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__5));
v___x_369_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__4));
v___x_370_ = l_mkPanicMessageWithDecl(v___x_369_, v___x_368_, v___x_367_, v___x_366_, v___x_365_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3(lean_object* v_constName_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_385_; lean_object* v_env_386_; uint8_t v___x_387_; lean_object* v___x_388_; 
v___x_385_ = lean_st_ref_get(v___y_375_);
v_env_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc_ref(v_env_386_);
lean_dec(v___x_385_);
v___x_387_ = 0;
lean_inc(v_constName_371_);
v___x_388_ = l_Lean_Environment_findAsync_x3f(v_env_386_, v_constName_371_, v___x_387_);
if (lean_obj_tag(v___x_388_) == 1)
{
lean_object* v_val_389_; uint8_t v_kind_390_; 
v_val_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_val_389_);
lean_dec_ref_known(v___x_388_, 1);
v_kind_390_ = lean_ctor_get_uint8(v_val_389_, sizeof(void*)*3);
if (v_kind_390_ == 6)
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_389_);
if (lean_obj_tag(v___x_391_) == 6)
{
lean_object* v_val_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v_constName_371_);
v_val_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_val_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set_tag(v___x_394_, 0);
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_val_392_);
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
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec_ref(v___x_391_);
v___x_400_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__7);
v___x_401_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__5(v___x_400_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_410_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_410_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
if (lean_obj_tag(v_a_402_) == 0)
{
lean_del_object(v___x_404_);
goto v___jp_377_;
}
else
{
lean_object* v_val_406_; lean_object* v___x_408_; 
lean_dec(v_constName_371_);
v_val_406_ = lean_ctor_get(v_a_402_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v_a_402_, 1);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_val_406_);
v___x_408_ = v___x_404_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_val_406_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_dec(v_constName_371_);
v_a_411_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_401_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_401_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
else
{
lean_dec(v_val_389_);
goto v___jp_377_;
}
}
else
{
lean_dec(v___x_388_);
goto v___jp_377_;
}
v___jp_377_:
{
lean_object* v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_378_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1);
v___x_379_ = 0;
v___x_380_ = l_Lean_MessageData_ofConstName(v_constName_371_, v___x_379_);
v___x_381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_378_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__3);
v___x_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg(v___x_383_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___boxed(lean_object* v_constName_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3(v_constName_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_425_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_429_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__2));
v___x_430_ = lean_unsigned_to_nat(10u);
v___x_431_ = lean_unsigned_to_nat(75u);
v___x_432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_434_ = l_mkPanicMessageWithDecl(v___x_433_, v___x_432_, v___x_431_, v___x_430_, v___x_429_);
return v___x_434_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_435_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6));
v___x_436_ = lean_unsigned_to_nat(65u);
v___x_437_ = lean_unsigned_to_nat(84u);
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_439_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_440_ = l_mkPanicMessageWithDecl(v___x_439_, v___x_438_, v___x_437_, v___x_436_, v___x_435_);
return v___x_440_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__5));
v___x_443_ = lean_unsigned_to_nat(12u);
v___x_444_ = lean_unsigned_to_nat(80u);
v___x_445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_447_ = l_mkPanicMessageWithDecl(v___x_446_, v___x_445_, v___x_444_, v___x_443_, v___x_442_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0(lean_object* v___x_448_, lean_object* v_ys_449_, lean_object* v_mr_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
uint8_t v___x_456_; 
v___x_456_ = l_Lean_Expr_isApp(v_mr_450_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__3);
v___x_458_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__2(v___x_457_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_458_;
}
else
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = l_Lean_Expr_appArg_x21(v_mr_450_);
v___x_460_ = l_Lean_Expr_isFVar(v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = l_Lean_Expr_getAppFn(v___x_459_);
lean_dec_ref(v___x_459_);
v___x_462_ = l_Lean_Expr_constName_x3f(v___x_461_);
lean_dec_ref(v___x_461_);
if (lean_obj_tag(v___x_462_) == 1)
{
lean_object* v_val_463_; lean_object* v___x_464_; 
v_val_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc_n(v_val_463_, 2);
lean_dec_ref_known(v___x_462_, 1);
v___x_464_ = l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3(v_val_463_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_474_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_474_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_numFields_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v_numFields_469_ = lean_ctor_get(v_a_465_, 4);
lean_inc(v_numFields_469_);
lean_dec(v_a_465_);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v_val_463_);
lean_ctor_set(v___x_470_, 1, v_numFields_469_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_470_);
v___x_472_ = v___x_467_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_val_463_);
v_a_475_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_464_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_464_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_dec(v___x_462_);
v___x_483_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__4);
v___x_484_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__2(v___x_483_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_484_;
}
}
else
{
uint8_t v___x_485_; 
v___x_485_ = lean_expr_eqv(v___x_459_, v___x_448_);
lean_dec_ref(v___x_459_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__6);
v___x_487_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__2(v___x_486_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_487_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_array_get_size(v_ys_449_);
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___boxed(lean_object* v___x_491_, lean_object* v_ys_492_, lean_object* v_mr_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0(v___x_491_, v_ys_492_, v_mr_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec_ref(v_mr_493_);
lean_dec_ref(v_ys_492_);
lean_dec_ref(v___x_491_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7(lean_object* v_val_500_, lean_object* v_a_501_, lean_object* v___x_502_, size_t v_sz_503_, size_t v_i_504_, lean_object* v_bs_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_lt(v_i_504_, v_sz_503_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref(v___x_502_);
v___x_512_ = l_unsafeCast___redArg(v_bs_505_);
lean_dec_ref(v_bs_505_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
else
{
lean_object* v___f_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v_v_517_; lean_object* v___x_518_; lean_object* v_bs_x27_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; lean_object* v___x_525_; 
lean_inc_ref(v___x_502_);
v___f_514_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___boxed), 8, 1);
lean_closure_set(v___f_514_, 0, v___x_502_);
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = l_Lean_instInhabitedExpr;
v_v_517_ = lean_array_uget(v_bs_505_, v_i_504_);
v___x_518_ = lean_unsigned_to_nat(0u);
v_bs_x27_519_ = lean_array_uset(v_bs_505_, v_i_504_, v___x_518_);
v___x_520_ = l_unsafeCast___redArg(v_v_517_);
lean_dec(v_v_517_);
v___x_521_ = lean_nat_sub(v___x_520_, v_val_500_);
lean_dec(v___x_520_);
v___x_522_ = lean_nat_sub(v___x_521_, v___x_515_);
lean_dec(v___x_521_);
v___x_523_ = lean_array_get_borrowed(v___x_516_, v_a_501_, v___x_522_);
lean_dec(v___x_522_);
v___x_524_ = 0;
lean_inc(v___x_523_);
v___x_525_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(v___x_523_, v___f_514_, v___x_524_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; size_t v___x_527_; size_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_dec_ref_known(v___x_525_, 1);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = lean_usize_add(v_i_504_, v___x_527_);
v___x_529_ = l_unsafeCast___redArg(v_a_526_);
lean_dec(v_a_526_);
v___x_530_ = lean_array_uset(v_bs_x27_519_, v_i_504_, v___x_529_);
v_i_504_ = v___x_528_;
v_bs_505_ = v___x_530_;
goto _start;
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_bs_x27_519_);
lean_dec_ref(v___x_502_);
v_a_532_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_525_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_525_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___boxed(lean_object* v_val_540_, lean_object* v_a_541_, lean_object* v___x_542_, lean_object* v_sz_543_, lean_object* v_i_544_, lean_object* v_bs_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
size_t v_sz_boxed_551_; size_t v_i_boxed_552_; lean_object* v_res_553_; 
v_sz_boxed_551_ = lean_unbox_usize(v_sz_543_);
lean_dec(v_sz_543_);
v_i_boxed_552_ = lean_unbox_usize(v_i_544_);
lean_dec(v_i_544_);
v_res_553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7(v_val_540_, v_a_541_, v___x_542_, v_sz_boxed_551_, v_i_boxed_552_, v_bs_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec_ref(v_a_541_);
lean_dec(v_val_540_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4(size_t v_sz_554_, size_t v_i_555_, lean_object* v_bs_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v___x_562_; 
v___x_562_ = lean_usize_dec_lt(v_i_555_, v_sz_554_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = l_unsafeCast___redArg(v_bs_556_);
lean_dec_ref(v_bs_556_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
else
{
lean_object* v_v_565_; lean_object* v___x_566_; lean_object* v_bs_x27_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v_v_565_ = lean_array_uget(v_bs_556_, v_i_555_);
v___x_566_ = lean_unsigned_to_nat(0u);
v_bs_x27_567_ = lean_array_uset(v_bs_556_, v_i_555_, v___x_566_);
v___x_568_ = l_unsafeCast___redArg(v_v_565_);
lean_dec(v_v_565_);
lean_inc(v___y_560_);
lean_inc_ref(v___y_559_);
lean_inc(v___y_558_);
lean_inc_ref(v___y_557_);
v___x_569_ = lean_infer_type(v___x_568_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; size_t v___x_571_; size_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_569_, 1);
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_add(v_i_555_, v___x_571_);
v___x_573_ = l_unsafeCast___redArg(v_a_570_);
lean_dec(v_a_570_);
v___x_574_ = lean_array_uset(v_bs_x27_567_, v_i_555_, v___x_573_);
v_i_555_ = v___x_572_;
v_bs_556_ = v___x_574_;
goto _start;
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref(v_bs_x27_567_);
v_a_576_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_569_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_569_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4___boxed(lean_object* v_sz_584_, lean_object* v_i_585_, lean_object* v_bs_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
size_t v_sz_boxed_592_; size_t v_i_boxed_593_; lean_object* v_res_594_; 
v_sz_boxed_592_ = lean_unbox_usize(v_sz_584_);
lean_dec(v_sz_584_);
v_i_boxed_593_ = lean_unbox_usize(v_i_585_);
lean_dec(v_i_585_);
v_res_594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4(v_sz_boxed_592_, v_i_boxed_593_, v_bs_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
return v_res_594_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_596_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___closed__0));
v___x_597_ = lean_unsigned_to_nat(6u);
v___x_598_ = lean_unsigned_to_nat(63u);
v___x_599_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_600_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_601_ = l_mkPanicMessageWithDecl(v___x_600_, v___x_599_, v___x_598_, v___x_597_, v___x_596_);
return v___x_601_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_603_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___closed__2));
v___x_604_ = lean_unsigned_to_nat(6u);
v___x_605_ = lean_unsigned_to_nat(64u);
v___x_606_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_607_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_608_ = l_mkPanicMessageWithDecl(v___x_607_, v___x_606_, v___x_605_, v___x_604_, v___x_603_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__5(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_610_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___closed__4));
v___x_611_ = lean_unsigned_to_nat(6u);
v___x_612_ = lean_unsigned_to_nat(65u);
v___x_613_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_615_ = l_mkPanicMessageWithDecl(v___x_614_, v___x_613_, v___x_612_, v___x_611_, v___x_610_);
return v___x_615_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__7(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_618_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6));
v___x_619_ = lean_unsigned_to_nat(76u);
v___x_620_ = lean_unsigned_to_nat(68u);
v___x_621_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_623_ = l_mkPanicMessageWithDecl(v___x_622_, v___x_621_, v___x_620_, v___x_619_, v___x_618_);
return v___x_623_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__8(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_624_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6));
v___x_625_ = lean_unsigned_to_nat(51u);
v___x_626_ = lean_unsigned_to_nat(67u);
v___x_627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_629_ = l_mkPanicMessageWithDecl(v___x_628_, v___x_627_, v___x_626_, v___x_625_, v___x_624_);
return v___x_629_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___lam__0___closed__9(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_630_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__6));
v___x_631_ = lean_unsigned_to_nat(49u);
v___x_632_ = lean_unsigned_to_nat(66u);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__1));
v___x_634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___lam__0___closed__0));
v___x_635_ = l_mkPanicMessageWithDecl(v___x_634_, v___x_633_, v___x_632_, v___x_631_, v___x_630_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___lam__0(lean_object* v___x_638_, lean_object* v_declName_639_, lean_object* v_xs_640_, lean_object* v_r_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
uint8_t v___x_647_; 
v___x_647_ = l_Lean_Expr_isApp(v_r_641_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
lean_dec(v_declName_639_);
v___x_648_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__1, &l_Lean_getCasesInfo_x3f___lam__0___closed__1_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__1);
v___x_649_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_648_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_649_;
}
else
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = l_Lean_Expr_appArg_x21(v_r_641_);
v___x_651_ = l_Lean_Expr_isFVar(v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec_ref(v___x_650_);
lean_dec(v_declName_639_);
v___x_652_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__3, &l_Lean_getCasesInfo_x3f___lam__0___closed__3_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__3);
v___x_653_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_652_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = l_Lean_Expr_getAppFn(v_r_641_);
v___x_655_ = l_Lean_Expr_isFVar(v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec_ref(v___x_654_);
lean_dec_ref(v___x_650_);
lean_dec(v_declName_639_);
v___x_656_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__5, &l_Lean_getCasesInfo_x3f___lam__0___closed__5_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__5);
v___x_657_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_656_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_657_;
}
else
{
lean_object* v___x_658_; 
v___x_658_ = l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1(v_xs_640_, v___x_650_);
lean_dec_ref(v___x_650_);
if (lean_obj_tag(v___x_658_) == 1)
{
lean_object* v_val_659_; lean_object* v___x_660_; 
v_val_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = l_Array_idxOf_x3f___at___00Lean_getCasesInfo_x3f_spec__1(v_xs_640_, v___x_654_);
if (lean_obj_tag(v___x_660_) == 1)
{
lean_object* v_val_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_750_; 
v_val_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_750_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_750_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_val_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_750_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_array_get_size(v_xs_640_);
v___x_666_ = lean_array_get_borrowed(v___x_638_, v_xs_640_, v_val_659_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
lean_inc(v___x_666_);
v___x_667_ = lean_infer_type(v___x_666_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v___x_669_ = l_Lean_Expr_getAppFn(v_a_668_);
lean_dec(v_a_668_);
v___x_670_ = l_Lean_Expr_constName_x3f(v___x_669_);
lean_dec_ref(v___x_669_);
if (lean_obj_tag(v___x_670_) == 1)
{
lean_object* v_val_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_739_; 
v_val_671_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_739_ == 0)
{
v___x_673_ = v___x_670_;
v_isShared_674_ = v_isSharedCheck_739_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_val_671_);
lean_dec(v___x_670_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_739_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; size_t v_sz_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_8144__overap_683_; lean_object* v___x_684_; 
v___x_675_ = lean_unsigned_to_nat(1u);
v___x_676_ = lean_nat_add(v_val_659_, v___x_675_);
v___x_677_ = l_Array_extract___redArg(v_xs_640_, v___x_676_, v___x_665_);
v_sz_678_ = lean_array_size(v___x_677_);
v___x_679_ = l_unsafeCast___redArg(v___x_677_);
lean_dec_ref(v___x_677_);
v___x_680_ = lean_box_usize(v_sz_678_);
v___x_681_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___boxed__const__1));
v___x_682_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__4___boxed), 8, 3);
lean_closure_set(v___x_682_, 0, v___x_680_);
lean_closure_set(v___x_682_, 1, v___x_681_);
lean_closure_set(v___x_682_, 2, v___x_679_);
v___x_8144__overap_683_ = l_unsafeCast___redArg(v___x_682_);
lean_dec_ref(v___x_682_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
v___x_684_ = lean_apply_5(v___x_8144__overap_683_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, lean_box(0));
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___y_687_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
v___x_723_ = lean_array_get_size(v_a_685_);
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = lean_nat_dec_eq(v___x_723_, v___x_724_);
if (v___x_725_ == 0)
{
if (v___x_655_ == 0)
{
lean_dec_ref(v___x_654_);
v___y_687_ = v___x_675_;
goto v___jp_686_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_726_ = lean_array_get_borrowed(v___x_638_, v_a_685_, v___x_724_);
v___x_727_ = l_Lean_Expr_getForallBody(v___x_726_);
v___x_728_ = l_Lean_Expr_getAppFn(v___x_727_);
lean_dec_ref(v___x_727_);
v___x_729_ = lean_expr_eqv(v___x_728_, v___x_654_);
lean_dec_ref(v___x_654_);
lean_dec_ref(v___x_728_);
if (v___x_729_ == 0)
{
if (v___x_655_ == 0)
{
v___y_687_ = v___x_675_;
goto v___jp_686_;
}
else
{
lean_object* v___x_730_; 
v___x_730_ = lean_unsigned_to_nat(2u);
v___y_687_ = v___x_730_;
goto v___jp_686_;
}
}
else
{
v___y_687_ = v___x_675_;
goto v___jp_686_;
}
}
}
else
{
lean_dec_ref(v___x_654_);
v___y_687_ = v___x_675_;
goto v___jp_686_;
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = lean_nat_add(v_val_659_, v___y_687_);
lean_inc(v___x_688_);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___x_665_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_688_);
v___x_691_ = v___x_673_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_688_);
v___x_691_ = v_reuseFailAlloc_722_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; size_t v_sz_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_8158__overap_700_; lean_object* v___x_701_; 
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___x_665_);
v___x_693_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___closed__6));
v___x_694_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6___redArg(v___x_692_, v___x_693_);
v_sz_695_ = lean_array_size(v___x_694_);
v___x_696_ = l_unsafeCast___redArg(v___x_694_);
lean_dec_ref(v___x_694_);
v___x_697_ = lean_box_usize(v_sz_695_);
v___x_698_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___lam__0___boxed__const__1));
lean_inc(v___x_666_);
lean_inc(v_val_659_);
v___x_699_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_getCasesInfo_x3f_spec__7___boxed), 11, 6);
lean_closure_set(v___x_699_, 0, v_val_659_);
lean_closure_set(v___x_699_, 1, v_a_685_);
lean_closure_set(v___x_699_, 2, v___x_666_);
lean_closure_set(v___x_699_, 3, v___x_697_);
lean_closure_set(v___x_699_, 4, v___x_698_);
lean_closure_set(v___x_699_, 5, v___x_696_);
v___x_8158__overap_700_ = l_unsafeCast___redArg(v___x_699_);
lean_dec_ref(v___x_699_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
v___x_701_ = lean_apply_5(v___x_8158__overap_700_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, lean_box(0));
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_713_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_713_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_713_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_713_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_706_, 0, v_declName_639_);
lean_ctor_set(v___x_706_, 1, v_val_671_);
lean_ctor_set(v___x_706_, 2, v___x_665_);
lean_ctor_set(v___x_706_, 3, v_val_659_);
lean_ctor_set(v___x_706_, 4, v_val_661_);
lean_ctor_set(v___x_706_, 5, v___x_689_);
lean_ctor_set(v___x_706_, 6, v_a_702_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_706_);
v___x_708_ = v___x_663_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_706_);
v___x_708_ = v_reuseFailAlloc_712_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_708_);
v___x_710_ = v___x_704_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
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
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec_ref_known(v___x_689_, 2);
lean_dec(v_val_671_);
lean_del_object(v___x_663_);
lean_dec(v_val_661_);
lean_dec(v_val_659_);
lean_dec(v_declName_639_);
v_a_714_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_701_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_701_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
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
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_del_object(v___x_673_);
lean_dec(v_val_671_);
lean_del_object(v___x_663_);
lean_dec(v_val_661_);
lean_dec(v_val_659_);
lean_dec_ref(v___x_654_);
lean_dec(v_declName_639_);
v_a_731_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_684_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_684_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v___x_670_);
lean_del_object(v___x_663_);
lean_dec(v_val_661_);
lean_dec(v_val_659_);
lean_dec_ref(v___x_654_);
lean_dec(v_declName_639_);
v___x_740_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__7, &l_Lean_getCasesInfo_x3f___lam__0___closed__7_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__7);
v___x_741_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_740_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_741_;
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_del_object(v___x_663_);
lean_dec(v_val_661_);
lean_dec(v_val_659_);
lean_dec_ref(v___x_654_);
lean_dec(v_declName_639_);
v_a_742_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_667_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_667_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec(v___x_660_);
lean_dec(v_val_659_);
lean_dec_ref(v___x_654_);
lean_dec(v_declName_639_);
v___x_751_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__8, &l_Lean_getCasesInfo_x3f___lam__0___closed__8_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__8);
v___x_752_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_751_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_752_;
}
}
else
{
lean_object* v___x_753_; lean_object* v___x_754_; 
lean_dec(v___x_658_);
lean_dec_ref(v___x_654_);
lean_dec(v_declName_639_);
v___x_753_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___lam__0___closed__9, &l_Lean_getCasesInfo_x3f___lam__0___closed__9_once, _init_l_Lean_getCasesInfo_x3f___lam__0___closed__9);
v___x_754_ = l_panic___at___00Lean_getCasesInfo_x3f_spec__0(v___x_753_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_754_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___lam__0___boxed(lean_object* v___x_755_, lean_object* v_declName_756_, lean_object* v_xs_757_, lean_object* v_r_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_getCasesInfo_x3f___lam__0(v___x_755_, v_declName_756_, v_xs_757_, v_r_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec_ref(v_r_758_);
lean_dec_ref(v_xs_757_);
lean_dec_ref(v___x_755_);
return v_res_764_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0(void){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_765_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0);
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
lean_ctor_set(v___x_770_, 2, v___x_769_);
lean_ctor_set(v___x_770_, 3, v___x_769_);
lean_ctor_set(v___x_770_, 4, v___x_768_);
lean_ctor_set(v___x_770_, 5, v___x_768_);
lean_ctor_set(v___x_770_, 6, v___x_768_);
lean_ctor_set(v___x_770_, 7, v___x_768_);
lean_ctor_set(v___x_770_, 8, v___x_768_);
lean_ctor_set(v___x_770_, 9, v___x_768_);
lean_ctor_set(v___x_770_, 10, v___x_768_);
return v___x_770_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_unsigned_to_nat(32u);
v___x_772_ = lean_mk_empty_array_with_capacity(v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4(void){
_start:
{
size_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_774_ = ((size_t)5ULL);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_unsigned_to_nat(32u);
v___x_777_ = lean_mk_empty_array_with_capacity(v___x_776_);
v___x_778_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__3);
v___x_779_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___x_777_);
lean_ctor_set(v___x_779_, 2, v___x_775_);
lean_ctor_set(v___x_779_, 3, v___x_775_);
lean_ctor_set_usize(v___x_779_, 4, v___x_774_);
return v___x_779_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_780_ = lean_box(1);
v___x_781_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4);
v___x_782_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__1);
v___x_783_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___x_781_);
lean_ctor_set(v___x_783_, 2, v___x_780_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20(lean_object* v_msgData_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___x_788_; lean_object* v_toCold_789_; lean_object* v_env_790_; lean_object* v_options_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_788_ = lean_st_ref_get(v___y_786_);
v_toCold_789_ = lean_ctor_get(v___y_785_, 0);
v_env_790_ = lean_ctor_get(v___x_788_, 0);
lean_inc_ref(v_env_790_);
lean_dec(v___x_788_);
v_options_791_ = lean_ctor_get(v_toCold_789_, 2);
v___x_792_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2);
v___x_793_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5);
lean_inc_ref(v_options_791_);
v___x_794_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_794_, 0, v_env_790_);
lean_ctor_set(v___x_794_, 1, v___x_792_);
lean_ctor_set(v___x_794_, 2, v___x_793_);
lean_ctor_set(v___x_794_, 3, v_options_791_);
v___x_795_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v_msgData_784_);
v___x_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___boxed(lean_object* v_msgData_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20(v_msgData_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg(lean_object* v_msg_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_ref_806_; lean_object* v___x_807_; lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_816_; 
v_ref_806_ = lean_ctor_get(v___y_803_, 2);
v___x_807_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20(v_msg_802_, v___y_803_, v___y_804_);
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_816_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_816_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_816_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_814_; 
lean_inc(v_ref_806_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_ref_806_);
lean_ctor_set(v___x_812_, 1, v_a_808_);
if (v_isShared_811_ == 0)
{
lean_ctor_set_tag(v___x_810_, 1);
lean_ctor_set(v___x_810_, 0, v___x_812_);
v___x_814_ = v___x_810_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg___boxed(lean_object* v_msg_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg(v_msg_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg(lean_object* v_ref_822_, lean_object* v_msg_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_toCold_827_; lean_object* v_currRecDepth_828_; lean_object* v_ref_829_; uint8_t v_diag_830_; uint8_t v_suppressElabErrors_831_; lean_object* v_ref_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_toCold_827_ = lean_ctor_get(v___y_824_, 0);
v_currRecDepth_828_ = lean_ctor_get(v___y_824_, 1);
v_ref_829_ = lean_ctor_get(v___y_824_, 2);
v_diag_830_ = lean_ctor_get_uint8(v___y_824_, sizeof(void*)*3);
v_suppressElabErrors_831_ = lean_ctor_get_uint8(v___y_824_, sizeof(void*)*3 + 1);
v_ref_832_ = l_Lean_replaceRef(v_ref_822_, v_ref_829_);
lean_inc(v_currRecDepth_828_);
lean_inc_ref(v_toCold_827_);
v___x_833_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_833_, 0, v_toCold_827_);
lean_ctor_set(v___x_833_, 1, v_currRecDepth_828_);
lean_ctor_set(v___x_833_, 2, v_ref_832_);
lean_ctor_set_uint8(v___x_833_, sizeof(void*)*3, v_diag_830_);
lean_ctor_set_uint8(v___x_833_, sizeof(void*)*3 + 1, v_suppressElabErrors_831_);
v___x_834_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg(v_msg_823_, v___x_833_, v___y_825_);
lean_dec_ref_known(v___x_833_, 3);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg___boxed(lean_object* v_ref_835_, lean_object* v_msg_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg(v_ref_835_, v_msg_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v_ref_835_);
return v_res_840_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__0));
v___x_843_ = l_Lean_stringToMessageData(v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__2));
v___x_846_ = l_Lean_stringToMessageData(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__4));
v___x_849_ = l_Lean_stringToMessageData(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__6));
v___x_852_ = l_Lean_stringToMessageData(v___x_851_);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__8));
v___x_855_ = l_Lean_stringToMessageData(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__10));
v___x_858_ = l_Lean_stringToMessageData(v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__12));
v___x_861_ = l_Lean_stringToMessageData(v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg(lean_object* v_msg_862_, lean_object* v_declHint_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v_env_868_; uint8_t v___x_869_; 
v___x_866_ = l_Lean_instInhabitedName;
v___x_867_ = lean_st_ref_get(v___y_864_);
v_env_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc_ref(v_env_868_);
lean_dec(v___x_867_);
v___x_869_ = l_Lean_Name_isAnonymous(v_declHint_863_);
if (v___x_869_ == 0)
{
uint8_t v_isExporting_870_; 
v_isExporting_870_ = lean_ctor_get_uint8(v_env_868_, sizeof(void*)*8);
if (v_isExporting_870_ == 0)
{
lean_object* v___x_871_; 
lean_dec_ref(v_env_868_);
lean_dec(v_declHint_863_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v_msg_862_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; uint8_t v___x_873_; 
lean_inc_ref(v_env_868_);
v___x_872_ = l_Lean_Environment_setExporting(v_env_868_, v___x_869_);
lean_inc(v_declHint_863_);
lean_inc_ref(v___x_872_);
v___x_873_ = l_Lean_Environment_contains(v___x_872_, v_declHint_863_, v_isExporting_870_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec_ref(v___x_872_);
lean_dec_ref(v_env_868_);
lean_dec(v_declHint_863_);
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v_msg_862_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_c_880_; lean_object* v___x_881_; 
v___x_875_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__2);
v___x_876_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__5);
v___x_877_ = l_Lean_Options_empty;
v___x_878_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_878_, 0, v___x_872_);
lean_ctor_set(v___x_878_, 1, v___x_875_);
lean_ctor_set(v___x_878_, 2, v___x_876_);
lean_ctor_set(v___x_878_, 3, v___x_877_);
lean_inc(v_declHint_863_);
v___x_879_ = l_Lean_MessageData_ofConstName(v_declHint_863_, v___x_869_);
v_c_880_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_880_, 0, v___x_878_);
lean_ctor_set(v_c_880_, 1, v___x_879_);
v___x_881_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_868_, v_declHint_863_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec_ref(v_env_868_);
lean_dec(v_declHint_863_);
v___x_882_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
lean_ctor_set(v___x_883_, 1, v_c_880_);
v___x_884_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__3);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Lean_MessageData_note(v___x_885_);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v_msg_862_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
else
{
lean_object* v_val_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_923_; 
v_val_889_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_923_ == 0)
{
v___x_891_ = v___x_881_;
v_isShared_892_ = v_isSharedCheck_923_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_val_889_);
lean_dec(v___x_881_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_923_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v_mod_895_; uint8_t v___x_896_; 
v___x_893_ = l_Lean_Environment_header(v_env_868_);
lean_dec_ref(v_env_868_);
v___x_894_ = l_Lean_EnvironmentHeader_moduleNames(v___x_893_);
lean_dec_ref(v___x_893_);
v_mod_895_ = lean_array_get(v___x_866_, v___x_894_, v_val_889_);
lean_dec(v_val_889_);
lean_dec_ref(v___x_894_);
v___x_896_ = l_Lean_isPrivateName(v_declHint_863_);
lean_dec(v_declHint_863_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_897_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__5);
v___x_898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v_c_880_);
v___x_899_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__7);
v___x_900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_898_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
v___x_901_ = l_Lean_MessageData_ofName(v_mod_895_);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__9);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = l_Lean_MessageData_note(v___x_904_);
v___x_906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_906_, 0, v_msg_862_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
if (v_isShared_892_ == 0)
{
lean_ctor_set_tag(v___x_891_, 0);
lean_ctor_set(v___x_891_, 0, v___x_906_);
v___x_908_ = v___x_891_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_910_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__1);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v_c_880_);
v___x_912_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__11);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Lean_MessageData_ofName(v_mod_895_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___closed__13);
v___x_917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = l_Lean_MessageData_note(v___x_917_);
v___x_919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_919_, 0, v_msg_862_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
if (v_isShared_892_ == 0)
{
lean_ctor_set_tag(v___x_891_, 0);
lean_ctor_set(v___x_891_, 0, v___x_919_);
v___x_921_ = v___x_891_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_924_; 
lean_dec_ref(v_env_868_);
lean_dec(v_declHint_863_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v_msg_862_);
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg___boxed(lean_object* v_msg_925_, lean_object* v_declHint_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg(v_msg_925_, v_declHint_926_, v___y_927_);
lean_dec(v___y_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16(lean_object* v_msg_930_, lean_object* v_declHint_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___x_935_; lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_945_; 
v___x_935_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg(v_msg_930_, v_declHint_931_, v___y_933_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_945_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_945_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_945_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_943_; 
v___x_940_ = l_Lean_unknownIdentifierMessageTag;
v___x_941_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v_a_936_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v___x_941_);
v___x_943_ = v___x_938_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16___boxed(lean_object* v_msg_946_, lean_object* v_declHint_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16(v_msg_946_, v_declHint_947_, v___y_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg(lean_object* v_ref_952_, lean_object* v_msg_953_, lean_object* v_declHint_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; lean_object* v_a_959_; lean_object* v___x_960_; 
v___x_958_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16(v_msg_953_, v_declHint_954_, v___y_955_, v___y_956_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref(v___x_958_);
v___x_960_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg(v_ref_952_, v_a_959_, v___y_955_, v___y_956_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg___boxed(lean_object* v_ref_961_, lean_object* v_msg_962_, lean_object* v_declHint_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg(v_ref_961_, v_msg_962_, v_declHint_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v_ref_961_);
return v_res_967_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__0));
v___x_970_ = l_Lean_stringToMessageData(v___x_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg(lean_object* v_ref_971_, lean_object* v_constName_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_976_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___closed__1);
v___x_977_ = 0;
lean_inc(v_constName_972_);
v___x_978_ = l_Lean_MessageData_ofConstName(v_constName_972_, v___x_977_);
v___x_979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_976_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3___closed__1);
v___x_981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg(v_ref_971_, v___x_981_, v_constName_972_, v___y_973_, v___y_974_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg___boxed(lean_object* v_ref_983_, lean_object* v_constName_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg(v_ref_983_, v_constName_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v_ref_983_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg(lean_object* v_constName_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_ref_993_; lean_object* v___x_994_; 
v_ref_993_ = lean_ctor_get(v___y_990_, 2);
v___x_994_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg(v_ref_993_, v_constName_989_, v___y_990_, v___y_991_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg___boxed(lean_object* v_constName_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg(v_constName_995_, v___y_996_, v___y_997_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8(lean_object* v_constName_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; lean_object* v_env_1005_; uint8_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1004_ = lean_st_ref_get(v___y_1002_);
v_env_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc_ref(v_env_1005_);
lean_dec(v___x_1004_);
v___x_1006_ = 0;
lean_inc(v_constName_1000_);
v___x_1007_ = l_Lean_Environment_findConstVal_x3f(v_env_1005_, v_constName_1000_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg(v_constName_1000_, v___y_1001_, v___y_1002_);
return v___x_1008_;
}
else
{
lean_object* v_val_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_constName_1000_);
v_val_1009_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1007_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_val_1009_);
lean_dec(v___x_1007_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 0);
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_val_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8___boxed(lean_object* v_constName_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8(v_constName_1017_, v___y_1018_, v___y_1019_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1021_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__0(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__0);
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__1(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1024_ = lean_box(1);
v___x_1025_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4);
v___x_1026_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__0, &l_Lean_getCasesInfo_x3f___closed__0_once, _init_l_Lean_getCasesInfo_x3f___closed__0);
v___x_1027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v___x_1025_);
lean_ctor_set(v___x_1027_, 2, v___x_1024_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__3(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__0, &l_Lean_getCasesInfo_x3f___closed__0_once, _init_l_Lean_getCasesInfo_x3f___closed__0);
v___x_1031_ = lean_unsigned_to_nat(0u);
v___x_1032_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
lean_ctor_set(v___x_1032_, 2, v___x_1031_);
lean_ctor_set(v___x_1032_, 3, v___x_1031_);
lean_ctor_set(v___x_1032_, 4, v___x_1030_);
lean_ctor_set(v___x_1032_, 5, v___x_1030_);
lean_ctor_set(v___x_1032_, 6, v___x_1030_);
lean_ctor_set(v___x_1032_, 7, v___x_1030_);
lean_ctor_set(v___x_1032_, 8, v___x_1030_);
lean_ctor_set(v___x_1032_, 9, v___x_1030_);
lean_ctor_set(v___x_1032_, 10, v___x_1030_);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__4(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__0, &l_Lean_getCasesInfo_x3f___closed__0_once, _init_l_Lean_getCasesInfo_x3f___closed__0);
v___x_1034_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
lean_ctor_set(v___x_1034_, 2, v___x_1033_);
lean_ctor_set(v___x_1034_, 3, v___x_1033_);
lean_ctor_set(v___x_1034_, 4, v___x_1033_);
lean_ctor_set(v___x_1034_, 5, v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__5(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__0, &l_Lean_getCasesInfo_x3f___closed__0_once, _init_l_Lean_getCasesInfo_x3f___closed__0);
v___x_1036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
lean_ctor_set(v___x_1036_, 2, v___x_1035_);
lean_ctor_set(v___x_1036_, 3, v___x_1035_);
lean_ctor_set(v___x_1036_, 4, v___x_1035_);
return v___x_1036_;
}
}
static lean_object* _init_l_Lean_getCasesInfo_x3f___closed__6(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1037_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__5, &l_Lean_getCasesInfo_x3f___closed__5_once, _init_l_Lean_getCasesInfo_x3f___closed__5);
v___x_1038_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19_spec__20___closed__4);
v___x_1039_ = lean_box(1);
v___x_1040_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__4, &l_Lean_getCasesInfo_x3f___closed__4_once, _init_l_Lean_getCasesInfo_x3f___closed__4);
v___x_1041_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__3, &l_Lean_getCasesInfo_x3f___closed__3_once, _init_l_Lean_getCasesInfo_x3f___closed__3);
v___x_1042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
lean_ctor_set(v___x_1042_, 2, v___x_1039_);
lean_ctor_set(v___x_1042_, 3, v___x_1038_);
lean_ctor_set(v___x_1042_, 4, v___x_1037_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f(lean_object* v_declName_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v_env_1051_; uint8_t v___x_1052_; 
v___x_1047_ = l_Lean_instInhabitedExpr;
lean_inc_n(v_declName_1043_, 2);
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_getCasesInfo_x3f___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1048_, 0, v___x_1047_);
lean_closure_set(v___f_1048_, 1, v_declName_1043_);
v___x_1049_ = lean_box(1);
v___x_1050_ = lean_st_ref_get(v_a_1045_);
v_env_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc_ref(v_env_1051_);
lean_dec(v___x_1050_);
v___x_1052_ = l_Lean_isCasesOnLike(v_env_1051_, v_declName_1043_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec_ref(v___f_1048_);
lean_dec(v_declName_1043_);
v___x_1053_ = lean_box(0);
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
else
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8(v_declName_1043_, v_a_1044_, v_a_1045_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v_type_1057_; uint8_t v___x_1058_; uint8_t v___x_1059_; uint8_t v___x_1060_; uint8_t v___x_1061_; lean_object* v___x_1062_; uint64_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v_type_1057_ = lean_ctor_get(v_a_1056_, 2);
lean_inc_ref(v_type_1057_);
lean_dec(v_a_1056_);
v___x_1058_ = 0;
v___x_1059_ = 1;
v___x_1060_ = 0;
v___x_1061_ = 2;
v___x_1062_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1062_, 0, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 1, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 2, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 3, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 4, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 5, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 6, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 7, v___x_1058_);
lean_ctor_set_uint8(v___x_1062_, 8, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 9, v___x_1059_);
lean_ctor_set_uint8(v___x_1062_, 10, v___x_1060_);
lean_ctor_set_uint8(v___x_1062_, 11, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 12, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 13, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 14, v___x_1061_);
lean_ctor_set_uint8(v___x_1062_, 15, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 16, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 17, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 18, v___x_1052_);
lean_ctor_set_uint8(v___x_1062_, 19, v___x_1058_);
v___x_1063_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1062_);
v___x_1064_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set_uint64(v___x_1064_, sizeof(void*)*1, v___x_1063_);
v___x_1065_ = lean_unsigned_to_nat(0u);
v___x_1066_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__1, &l_Lean_getCasesInfo_x3f___closed__1_once, _init_l_Lean_getCasesInfo_x3f___closed__1);
v___x_1067_ = ((lean_object*)(l_Lean_getCasesInfo_x3f___closed__2));
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1069_, 0, v___x_1064_);
lean_ctor_set(v___x_1069_, 1, v___x_1049_);
lean_ctor_set(v___x_1069_, 2, v___x_1066_);
lean_ctor_set(v___x_1069_, 3, v___x_1067_);
lean_ctor_set(v___x_1069_, 4, v___x_1068_);
lean_ctor_set(v___x_1069_, 5, v___x_1065_);
lean_ctor_set(v___x_1069_, 6, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*7, v___x_1058_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*7 + 1, v___x_1058_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*7 + 2, v___x_1058_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*7 + 3, v___x_1052_);
v___x_1070_ = lean_obj_once(&l_Lean_getCasesInfo_x3f___closed__6, &l_Lean_getCasesInfo_x3f___closed__6_once, _init_l_Lean_getCasesInfo_x3f___closed__6);
v___x_1071_ = lean_st_mk_ref(v___x_1070_);
v___x_1072_ = l_Lean_Meta_forallTelescope___at___00Lean_getCasesInfo_x3f_spec__5___redArg(v_type_1057_, v___f_1048_, v___x_1058_, v___x_1069_, v___x_1071_, v_a_1044_, v_a_1045_);
lean_dec_ref_known(v___x_1069_, 7);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1081_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1077_ = lean_st_ref_get(v___x_1071_);
lean_dec(v___x_1071_);
lean_dec(v___x_1077_);
if (v_isShared_1076_ == 0)
{
v___x_1079_ = v___x_1075_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1073_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
else
{
lean_dec(v___x_1071_);
return v___x_1072_;
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v___f_1048_);
v_a_1082_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1055_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1055_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getCasesInfo_x3f___boxed(lean_object* v_declName_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_getCasesInfo_x3f(v_declName_1090_, v_a_1091_, v_a_1092_);
lean_dec(v_a_1092_);
lean_dec_ref(v_a_1091_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6(lean_object* v_inst_1095_, lean_object* v_R_1096_, lean_object* v_a_1097_, lean_object* v_b_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_getCasesInfo_x3f_spec__6___redArg(v_a_1097_, v_b_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4(lean_object* v_00_u03b1_1100_, lean_object* v_msg_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___redArg(v_msg_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1108_, lean_object* v_msg_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00Lean_getCasesInfo_x3f_spec__3_spec__4(v_00_u03b1_1108_, v_msg_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11(lean_object* v_00_u03b1_1116_, lean_object* v_constName_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___redArg(v_constName_1117_, v___y_1118_, v___y_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11___boxed(lean_object* v_00_u03b1_1122_, lean_object* v_constName_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11(v_00_u03b1_1122_, v_constName_1123_, v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14(lean_object* v_00_u03b1_1128_, lean_object* v_ref_1129_, lean_object* v_constName_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___redArg(v_ref_1129_, v_constName_1130_, v___y_1131_, v___y_1132_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14___boxed(lean_object* v_00_u03b1_1135_, lean_object* v_ref_1136_, lean_object* v_constName_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14(v_00_u03b1_1135_, v_ref_1136_, v_constName_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v_ref_1136_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15(lean_object* v_00_u03b1_1142_, lean_object* v_ref_1143_, lean_object* v_msg_1144_, lean_object* v_declHint_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___redArg(v_ref_1143_, v_msg_1144_, v_declHint_1145_, v___y_1146_, v___y_1147_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15___boxed(lean_object* v_00_u03b1_1150_, lean_object* v_ref_1151_, lean_object* v_msg_1152_, lean_object* v_declHint_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15(v_00_u03b1_1150_, v_ref_1151_, v_msg_1152_, v_declHint_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v_ref_1151_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17(lean_object* v_msg_1158_, lean_object* v_declHint_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___redArg(v_msg_1158_, v_declHint_1159_, v___y_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17___boxed(lean_object* v_msg_1164_, lean_object* v_declHint_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__16_spec__17(v_msg_1164_, v_declHint_1165_, v___y_1166_, v___y_1167_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17(lean_object* v_00_u03b1_1170_, lean_object* v_ref_1171_, lean_object* v_msg_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___redArg(v_ref_1171_, v_msg_1172_, v___y_1173_, v___y_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17___boxed(lean_object* v_00_u03b1_1177_, lean_object* v_ref_1178_, lean_object* v_msg_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17(v_00_u03b1_1177_, v_ref_1178_, v_msg_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v_ref_1178_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19(lean_object* v_00_u03b1_1184_, lean_object* v_msg_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___redArg(v_msg_1185_, v___y_1186_, v___y_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19___boxed(lean_object* v_00_u03b1_1190_, lean_object* v_msg_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_getCasesInfo_x3f_spec__8_spec__11_spec__14_spec__15_spec__17_spec__19(v_00_u03b1_1190_, v_msg_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
return v_res_1195_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_CasesInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedCasesAltInfo_default = _init_l_Lean_instInhabitedCasesAltInfo_default();
lean_mark_persistent(l_Lean_instInhabitedCasesAltInfo_default);
l_Lean_instInhabitedCasesAltInfo = _init_l_Lean_instInhabitedCasesAltInfo();
lean_mark_persistent(l_Lean_instInhabitedCasesAltInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_CasesInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_CasesInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CasesInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_CasesInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_CasesInfo(builtin);
}
#ifdef __cplusplus
}
#endif

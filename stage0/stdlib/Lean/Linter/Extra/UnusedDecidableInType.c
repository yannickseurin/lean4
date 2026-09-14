// Lean compiler output
// Module: Lean.Linter.Extra.UnusedDecidableInType
// Imports: public import Lean.Linter.Basic public import Lean.Meta.ForEachExpr public import Lean.Meta.Sorry public import Lean.PrivateName public import Lean.Server.InfoUtils public import Lean.Linter.Util
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
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
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getDeclsByBody(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_isSorry(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_binderInfo(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_Lean_withSetOptionIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unusedDecidableInType"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 183, 205, 183, 92, 15, 88, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(126, 106, 196, 225, 81, 30, 137, 135)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 221, .m_capacity = 221, .m_length = 220, .m_data = "enable the unused `Decidable*` instance linter, which lints against `Decidable*` instances in the hypotheses of theorems which are not used in the type, and can therefore be replaced by a use of `classical` in the proof."};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__4_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Extra"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__0_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 33, 172, 180, 73, 123, 191, 116)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__1_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 61, 181, 137, 182, 231, 65, 137)}};
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__2_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(102, 30, 130, 216, 127, 103, 0, 158)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_linter_extra_unusedDecidableInType;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = " (used in type, but only in a proof)"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "] (#"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parameter #"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0(lean_object*);
static const lean_closure_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "\n  • "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " in its type"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__2 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__4 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__4_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " outside of proofs"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__5 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__5_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__6 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__6_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` does not use the following "};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__8 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__8_value;
static lean_once_cell_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hypotheses"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__10 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__10_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hypothesis"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__11 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed__const__1 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "DecidableRel"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 165, 128, 103, 195, 117, 187, 51)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "DecidableEq"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 163, 7, 138, 119, 67, 2, 253)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "DecidableLE"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(33, 198, 120, 234, 95, 60, 229, 135)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "DecidableLT"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(113, 2, 59, 91, 108, 226, 67, 238)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__8_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "DecidablePred"};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__10_value;
static const lean_ctor_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(16, 236, 239, 206, 255, 167, 201, 157)}};
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__11_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___closed__0 = (const lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___closed__0 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "\n\nConsider removing "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 141, .m_capacity = 141, .m_length = 140, .m_data = " and using `classical` in the proof instead. For terms, consider using `open scoped Classical in` at the term level (not the command level)."};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "these hypotheses"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "this hypothesis"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__0 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__0_value;
static const lean_closure_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withSetOptionIn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__0_value)} };
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__1 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__1_value;
static const lean_string_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "UnusedDecidableInType"};
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__2 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__2_value;
static const lean_string_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unusedDecidableInTypeLinter"};
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__3 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__3_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__6_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__7_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__8_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(179, 148, 165, 15, 81, 68, 12, 199)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_2),((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(221, 46, 57, 107, 248, 119, 253, 192)}};
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value_aux_3),((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 159, 172, 174, 52, 152, 126, 114)}};
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value;
static const lean_ctor_object l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__1_value),((lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__4_value)}};
static const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__5 = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter = (const lean_object*)&l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP(lean_object* v_p_1_, lean_object* v_type_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = l_Lean_Expr_cleanupAnnotations(v_type_2_);
v___x_4_ = l_Lean_Expr_getAppFn_x27(v___x_3_);
lean_dec_ref(v___x_3_);
switch(lean_obj_tag(v___x_4_))
{
case 4:
{
lean_object* v_declName_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
v_declName_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc(v_declName_5_);
lean_dec_ref_known(v___x_4_, 2);
v___x_6_ = lean_apply_1(v_p_1_, v_declName_5_);
v___x_7_ = lean_unbox(v___x_6_);
return v___x_7_;
}
case 7:
{
lean_object* v_body_8_; 
v_body_8_ = lean_ctor_get(v___x_4_, 2);
lean_inc_ref(v_body_8_);
lean_dec_ref_known(v___x_4_, 3);
v_type_2_ = v_body_8_;
goto _start;
}
default: 
{
uint8_t v___x_10_; 
lean_dec_ref(v___x_4_);
lean_dec_ref(v_p_1_);
v___x_10_ = 0;
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP___boxed(lean_object* v_p_11_, lean_object* v_type_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP(v_p_11_, v_type_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf(lean_object* v_p_15_, lean_object* v_e_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Expr_cleanupAnnotations(v_e_16_);
switch(lean_obj_tag(v___x_17_))
{
case 7:
{
lean_object* v_binderType_18_; lean_object* v_body_19_; uint8_t v_binderInfo_20_; uint8_t v___y_22_; uint8_t v___x_24_; 
v_binderType_18_ = lean_ctor_get(v___x_17_, 1);
lean_inc_ref(v_binderType_18_);
v_body_19_ = lean_ctor_get(v___x_17_, 2);
lean_inc_ref(v_body_19_);
v_binderInfo_20_ = lean_ctor_get_uint8(v___x_17_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_17_, 3);
v___x_24_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_20_);
if (v___x_24_ == 0)
{
lean_dec_ref(v_binderType_18_);
v___y_22_ = v___x_24_;
goto v___jp_21_;
}
else
{
lean_object* v___x_25_; uint8_t v___x_26_; 
lean_inc_ref(v_p_15_);
v___x_25_ = lean_apply_1(v_p_15_, v_binderType_18_);
v___x_26_ = lean_unbox(v___x_25_);
v___y_22_ = v___x_26_;
goto v___jp_21_;
}
v___jp_21_:
{
if (v___y_22_ == 0)
{
v_e_16_ = v_body_19_;
goto _start;
}
else
{
lean_dec_ref(v_body_19_);
lean_dec_ref(v_p_15_);
return v___y_22_;
}
}
}
case 8:
{
lean_object* v_body_27_; 
v_body_27_ = lean_ctor_get(v___x_17_, 3);
lean_inc_ref(v_body_27_);
lean_dec_ref_known(v___x_17_, 4);
v_e_16_ = v_body_27_;
goto _start;
}
default: 
{
uint8_t v___x_29_; 
lean_dec_ref(v___x_17_);
lean_dec_ref(v_p_15_);
v___x_29_ = 0;
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf___boxed(lean_object* v_p_30_, lean_object* v_e_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf(v_p_30_, v_e_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere_go(lean_object* v_p_34_, lean_object* v_body_35_, lean_object* v_current_36_, lean_object* v_acc_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Expr_cleanupAnnotations(v_body_35_);
switch(lean_obj_tag(v___x_38_))
{
case 7:
{
lean_object* v_binderType_39_; lean_object* v_body_40_; uint8_t v_binderInfo_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___y_45_; uint8_t v___x_52_; 
v_binderType_39_ = lean_ctor_get(v___x_38_, 1);
lean_inc_ref(v_binderType_39_);
v_body_40_ = lean_ctor_get(v___x_38_, 2);
lean_inc_ref(v_body_40_);
v_binderInfo_41_ = lean_ctor_get_uint8(v___x_38_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_38_, 3);
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_current_36_, v___x_42_);
v___x_52_ = l_Lean_BinderInfo_isInstImplicit(v_binderInfo_41_);
if (v___x_52_ == 0)
{
lean_dec_ref(v_binderType_39_);
v___y_45_ = v___x_52_;
goto v___jp_44_;
}
else
{
lean_object* v___x_53_; uint8_t v___x_54_; 
lean_inc_ref(v_p_34_);
v___x_53_ = lean_apply_1(v_p_34_, v_binderType_39_);
v___x_54_ = lean_unbox(v___x_53_);
v___y_45_ = v___x_54_;
goto v___jp_44_;
}
v___jp_44_:
{
if (v___y_45_ == 0)
{
lean_dec(v_current_36_);
v_body_35_ = v_body_40_;
v_current_36_ = v___x_43_;
goto _start;
}
else
{
lean_object* v___x_47_; uint8_t v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = lean_expr_has_loose_bvar(v_body_40_, v___x_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
v___x_49_ = lean_array_push(v_acc_37_, v_current_36_);
v_body_35_ = v_body_40_;
v_current_36_ = v___x_43_;
v_acc_37_ = v___x_49_;
goto _start;
}
else
{
lean_dec(v_current_36_);
v_body_35_ = v_body_40_;
v_current_36_ = v___x_43_;
goto _start;
}
}
}
}
case 8:
{
lean_object* v_body_55_; 
v_body_55_ = lean_ctor_get(v___x_38_, 3);
lean_inc_ref(v_body_55_);
lean_dec_ref_known(v___x_38_, 4);
v_body_35_ = v_body_55_;
goto _start;
}
default: 
{
lean_dec_ref(v___x_38_);
lean_dec(v_current_36_);
lean_dec_ref(v_p_34_);
return v_acc_37_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere(lean_object* v_p_59_, lean_object* v_e_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere___closed__0));
v___x_63_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere_go(v_p_59_, v_e_60_, v___x_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f(lean_object* v_env_64_, lean_object* v_p_65_, lean_object* v_decl_66_, uint8_t v_skipRealize_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Environment_findAsync_x3f(v_env_64_, v_decl_66_, v_skipRealize_67_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v___x_69_; 
lean_dec_ref(v_p_65_);
v___x_69_ = lean_box(0);
return v___x_69_;
}
else
{
lean_object* v_val_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_83_; 
v_val_70_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_83_ == 0)
{
v___x_72_ = v___x_68_;
v_isShared_73_ = v_isSharedCheck_83_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_val_70_);
lean_dec(v___x_68_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_83_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
uint8_t v_kind_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v_kind_74_ = lean_ctor_get_uint8(v_val_70_, sizeof(void*)*3);
v___x_75_ = lean_box(v_kind_74_);
v___x_76_ = lean_apply_1(v_p_65_, v___x_75_);
v___x_77_ = lean_unbox(v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; 
lean_del_object(v___x_72_);
lean_dec(v_val_70_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
else
{
lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_79_ = l_Lean_AsyncConstantInfo_toConstantVal(v_val_70_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 0, v___x_79_);
v___x_81_ = v___x_72_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_79_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f___boxed(lean_object* v_env_84_, lean_object* v_p_85_, lean_object* v_decl_86_, lean_object* v_skipRealize_87_){
_start:
{
uint8_t v_skipRealize_boxed_88_; lean_object* v_res_89_; 
v_skipRealize_boxed_88_ = lean_unbox(v_skipRealize_87_);
v_res_89_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f(v_env_84_, v_p_85_, v_decl_86_, v_skipRealize_boxed_88_);
return v_res_89_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0(uint8_t v_x_90_){
_start:
{
if (v_x_90_ == 1)
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
else
{
uint8_t v___x_92_; 
v___x_92_ = 0;
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0___boxed(lean_object* v_x_93_){
_start:
{
uint8_t v_x_22__boxed_94_; uint8_t v_res_95_; lean_object* v_r_96_; 
v_x_22__boxed_94_ = lean_unbox(v_x_93_);
v_res_95_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___lam__0(v_x_22__boxed_94_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f(lean_object* v_env_98_, lean_object* v_decl_99_, uint8_t v_skipRealize_100_){
_start:
{
lean_object* v___f_101_; lean_object* v___x_102_; 
v___f_101_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___closed__0));
v___x_102_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findConstValOfKind_x3f(v_env_98_, v___f_101_, v_decl_99_, v_skipRealize_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f___boxed(lean_object* v_env_103_, lean_object* v_decl_104_, lean_object* v_skipRealize_105_){
_start:
{
uint8_t v_skipRealize_boxed_106_; lean_object* v_res_107_; 
v_skipRealize_boxed_106_ = lean_unbox(v_skipRealize_105_);
v_res_107_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f(v_env_103_, v_decl_104_, v_skipRealize_boxed_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0(lean_object* v_name_108_, lean_object* v_decl_109_, lean_object* v_ref_110_){
_start:
{
lean_object* v_defValue_112_; lean_object* v_descr_113_; lean_object* v_deprecation_x3f_114_; lean_object* v___x_115_; uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_defValue_112_ = lean_ctor_get(v_decl_109_, 0);
v_descr_113_ = lean_ctor_get(v_decl_109_, 1);
v_deprecation_x3f_114_ = lean_ctor_get(v_decl_109_, 2);
v___x_115_ = lean_alloc_ctor(1, 0, 1);
v___x_116_ = lean_unbox(v_defValue_112_);
lean_ctor_set_uint8(v___x_115_, 0, v___x_116_);
lean_inc(v_deprecation_x3f_114_);
lean_inc_ref(v_descr_113_);
lean_inc_n(v_name_108_, 2);
v___x_117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_117_, 0, v_name_108_);
lean_ctor_set(v___x_117_, 1, v_ref_110_);
lean_ctor_set(v___x_117_, 2, v___x_115_);
lean_ctor_set(v___x_117_, 3, v_descr_113_);
lean_ctor_set(v___x_117_, 4, v_deprecation_x3f_114_);
v___x_118_ = lean_register_option(v_name_108_, v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_126_; 
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v___x_118_, 0);
lean_dec(v_unused_127_);
v___x_120_ = v___x_118_;
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
else
{
lean_dec(v___x_118_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_122_; lean_object* v___x_124_; 
lean_inc(v_defValue_112_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v_name_108_);
lean_ctor_set(v___x_122_, 1, v_defValue_112_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_122_);
v___x_124_ = v___x_120_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec(v_name_108_);
v_a_128_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_118_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_118_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_136_, lean_object* v_decl_137_, lean_object* v_ref_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0(v_name_136_, v_decl_137_, v_ref_138_);
lean_dec_ref(v_decl_137_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_165_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__3_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_));
v___x_166_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__5_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_));
v___x_167_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn___closed__9_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_));
v___x_168_ = l_Lean_Option_register___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4__spec__0(v___x_165_, v___x_166_, v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4____boxed(lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_();
return v_res_170_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__0));
v___x_173_ = l_Lean_stringToMessageData(v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__2));
v___x_176_ = l_Lean_stringToMessageData(v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__4));
v___x_179_ = l_Lean_stringToMessageData(v___x_178_);
return v___x_179_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__6));
v___x_182_ = l_Lean_stringToMessageData(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__8));
v___x_185_ = l_Lean_stringToMessageData(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0(lean_object* v_param_186_){
_start:
{
lean_object* v_type_x3f_187_; lean_object* v_idx_188_; uint8_t v_appearsInTypeProof_189_; lean_object* v___y_191_; 
v_type_x3f_187_ = lean_ctor_get(v_param_186_, 1);
lean_inc(v_type_x3f_187_);
v_idx_188_ = lean_ctor_get(v_param_186_, 2);
lean_inc(v_idx_188_);
v_appearsInTypeProof_189_ = lean_ctor_get_uint8(v_param_186_, sizeof(void*)*3);
lean_dec_ref(v_param_186_);
if (lean_obj_tag(v_type_x3f_187_) == 1)
{
lean_object* v_val_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_213_; 
v_val_194_ = lean_ctor_get(v_type_x3f_187_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v_type_x3f_187_);
if (v_isSharedCheck_213_ == 0)
{
v___x_196_ = v_type_x3f_187_;
v_isShared_197_ = v_isSharedCheck_213_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_val_194_);
lean_dec(v_type_x3f_187_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_213_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3);
v___x_199_ = l_Lean_MessageData_ofExpr(v_val_194_);
v___x_200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5);
v___x_202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = lean_unsigned_to_nat(1u);
v___x_204_ = lean_nat_add(v_idx_188_, v___x_203_);
lean_dec(v_idx_188_);
v___x_205_ = l_Nat_reprFast(v___x_204_);
if (v_isShared_197_ == 0)
{
lean_ctor_set_tag(v___x_196_, 3);
lean_ctor_set(v___x_196_, 0, v___x_205_);
v___x_207_ = v___x_196_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_212_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_208_ = l_Lean_MessageData_ofFormat(v___x_207_);
v___x_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_202_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7);
v___x_211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___y_191_ = v___x_211_;
goto v___jp_190_;
}
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
lean_dec(v_type_x3f_187_);
v___x_214_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_idx_188_, v___x_215_);
lean_dec(v_idx_188_);
v___x_217_ = l_Nat_reprFast(v___x_216_);
v___x_218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
v___x_219_ = l_Lean_MessageData_ofFormat(v___x_218_);
v___x_220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_214_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___y_191_ = v___x_220_;
goto v___jp_190_;
}
v___jp_190_:
{
if (v_appearsInTypeProof_189_ == 0)
{
return v___y_191_;
}
else
{
lean_object* v___x_192_; lean_object* v_msg_193_; 
v___x_192_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1);
v_msg_193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_193_, 0, v___y_191_);
lean_ctor_set(v_msg_193_, 1, v___x_192_);
return v_msg_193_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2(lean_object* v_as_223_, size_t v_i_224_, size_t v_stop_225_, lean_object* v_b_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_usize_dec_eq(v_i_224_, v_stop_225_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; size_t v___x_230_; size_t v___x_231_; 
v___x_228_ = lean_array_uget_borrowed(v_as_223_, v_i_224_);
lean_inc(v___x_228_);
v___x_229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_229_, 0, v_b_226_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_224_, v___x_230_);
v_i_224_ = v___x_231_;
v_b_226_ = v___x_229_;
goto _start;
}
else
{
return v_b_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2___boxed(lean_object* v_as_233_, lean_object* v_i_234_, lean_object* v_stop_235_, lean_object* v_b_236_){
_start:
{
size_t v_i_boxed_237_; size_t v_stop_boxed_238_; lean_object* v_res_239_; 
v_i_boxed_237_ = lean_unbox_usize(v_i_234_);
lean_dec(v_i_234_);
v_stop_boxed_238_ = lean_unbox_usize(v_stop_235_);
lean_dec(v_stop_235_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2(v_as_233_, v_i_boxed_237_, v_stop_boxed_238_, v_b_236_);
lean_dec_ref(v_as_233_);
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3(lean_object* v_as_240_, size_t v_i_241_, size_t v_stop_242_){
_start:
{
uint8_t v___x_243_; 
v___x_243_ = lean_usize_dec_eq(v_i_241_, v_stop_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; uint8_t v_appearsInTypeProof_245_; 
v___x_244_ = lean_array_uget_borrowed(v_as_240_, v_i_241_);
v_appearsInTypeProof_245_ = lean_ctor_get_uint8(v___x_244_, sizeof(void*)*3);
if (v_appearsInTypeProof_245_ == 0)
{
size_t v___x_246_; size_t v___x_247_; 
v___x_246_ = ((size_t)1ULL);
v___x_247_ = lean_usize_add(v_i_241_, v___x_246_);
v_i_241_ = v___x_247_;
goto _start;
}
else
{
return v_appearsInTypeProof_245_;
}
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3___boxed(lean_object* v_as_250_, lean_object* v_i_251_, lean_object* v_stop_252_){
_start:
{
size_t v_i_boxed_253_; size_t v_stop_boxed_254_; uint8_t v_res_255_; lean_object* v_r_256_; 
v_i_boxed_253_ = lean_unbox_usize(v_i_251_);
lean_dec(v_i_251_);
v_stop_boxed_254_ = lean_unbox_usize(v_stop_252_);
lean_dec(v_stop_252_);
v_res_255_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3(v_as_250_, v_i_boxed_253_, v_stop_boxed_254_);
lean_dec_ref(v_as_250_);
v_r_256_ = lean_box(v_res_255_);
return v_r_256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0(size_t v_sz_257_, size_t v_i_258_, lean_object* v_bs_259_){
_start:
{
uint8_t v___x_260_; 
v___x_260_ = lean_usize_dec_lt(v_i_258_, v_sz_257_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = l_unsafeCast___redArg(v_bs_259_);
lean_dec_ref(v_bs_259_);
return v___x_261_;
}
else
{
lean_object* v_v_262_; lean_object* v___x_263_; lean_object* v_type_x3f_264_; lean_object* v_idx_265_; lean_object* v___x_266_; lean_object* v_bs_x27_267_; lean_object* v___y_269_; lean_object* v___y_276_; 
v_v_262_ = lean_array_uget_borrowed(v_bs_259_, v_i_258_);
v___x_263_ = l_unsafeCast___redArg(v_v_262_);
v_type_x3f_264_ = lean_ctor_get(v___x_263_, 1);
lean_inc(v_type_x3f_264_);
v_idx_265_ = lean_ctor_get(v___x_263_, 2);
lean_inc(v_idx_265_);
v___x_266_ = lean_unsigned_to_nat(0u);
v_bs_x27_267_ = lean_array_uset(v_bs_259_, v_i_258_, v___x_266_);
if (lean_obj_tag(v_type_x3f_264_) == 1)
{
lean_object* v_val_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_299_; 
v_val_280_ = lean_ctor_get(v_type_x3f_264_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v_type_x3f_264_);
if (v_isSharedCheck_299_ == 0)
{
v___x_282_ = v_type_x3f_264_;
v_isShared_283_ = v_isSharedCheck_299_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_val_280_);
lean_dec(v_type_x3f_264_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_299_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_284_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__3);
v___x_285_ = l_Lean_MessageData_ofExpr(v_val_280_);
v___x_286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__5);
v___x_288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = lean_nat_add(v_idx_265_, v___x_289_);
lean_dec(v_idx_265_);
v___x_291_ = l_Nat_reprFast(v___x_290_);
if (v_isShared_283_ == 0)
{
lean_ctor_set_tag(v___x_282_, 3);
lean_ctor_set(v___x_282_, 0, v___x_291_);
v___x_293_ = v___x_282_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_298_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = l_Lean_MessageData_ofFormat(v___x_293_);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_288_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__7);
v___x_297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___y_276_ = v___x_297_;
goto v___jp_275_;
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec(v_type_x3f_264_);
v___x_300_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__9);
v___x_301_ = lean_unsigned_to_nat(1u);
v___x_302_ = lean_nat_add(v_idx_265_, v___x_301_);
lean_dec(v_idx_265_);
v___x_303_ = l_Nat_reprFast(v___x_302_);
v___x_304_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
v___x_305_ = l_Lean_MessageData_ofFormat(v___x_304_);
v___x_306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_300_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___y_276_ = v___x_306_;
goto v___jp_275_;
}
v___jp_268_:
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = ((size_t)1ULL);
v___x_271_ = lean_usize_add(v_i_258_, v___x_270_);
v___x_272_ = l_unsafeCast___redArg(v___y_269_);
lean_dec_ref(v___y_269_);
v___x_273_ = lean_array_uset(v_bs_x27_267_, v_i_258_, v___x_272_);
v_i_258_ = v___x_271_;
v_bs_259_ = v___x_273_;
goto _start;
}
v___jp_275_:
{
uint8_t v_appearsInTypeProof_277_; 
v_appearsInTypeProof_277_ = lean_ctor_get_uint8(v___x_263_, sizeof(void*)*3);
lean_dec(v___x_263_);
if (v_appearsInTypeProof_277_ == 0)
{
v___y_269_ = v___y_276_;
goto v___jp_268_;
}
else
{
lean_object* v___x_278_; lean_object* v_msg_279_; 
v___x_278_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_instToMessageDataParameter___lam__0___closed__1);
v_msg_279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_279_, 0, v___y_276_);
lean_ctor_set(v_msg_279_, 1, v___x_278_);
v___y_269_ = v_msg_279_;
goto v___jp_268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0___boxed(lean_object* v_sz_307_, lean_object* v_i_308_, lean_object* v_bs_309_){
_start:
{
size_t v_sz_boxed_310_; size_t v_i_boxed_311_; lean_object* v_res_312_; 
v_sz_boxed_310_ = lean_unbox_usize(v_sz_307_);
lean_dec(v_sz_307_);
v_i_boxed_311_ = lean_unbox_usize(v_i_308_);
lean_dec(v_i_308_);
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0(v_sz_boxed_310_, v_i_boxed_311_, v_bs_309_);
return v_res_312_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__0));
v___x_315_ = l_Lean_stringToMessageData(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1(size_t v_sz_316_, size_t v_i_317_, lean_object* v_bs_318_){
_start:
{
uint8_t v___x_319_; 
v___x_319_ = lean_usize_dec_lt(v_i_317_, v_sz_316_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
v___x_320_ = l_unsafeCast___redArg(v_bs_318_);
lean_dec_ref(v_bs_318_);
return v___x_320_;
}
else
{
lean_object* v_v_321_; lean_object* v___x_322_; lean_object* v_bs_x27_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; size_t v___x_327_; size_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_v_321_ = lean_array_uget(v_bs_318_, v_i_317_);
v___x_322_ = lean_unsigned_to_nat(0u);
v_bs_x27_323_ = lean_array_uset(v_bs_318_, v_i_317_, v___x_322_);
v___x_324_ = l_unsafeCast___redArg(v_v_321_);
lean_dec(v_v_321_);
v___x_325_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___closed__1);
v___x_326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v___x_324_);
v___x_327_ = ((size_t)1ULL);
v___x_328_ = lean_usize_add(v_i_317_, v___x_327_);
v___x_329_ = l_unsafeCast___redArg(v___x_326_);
lean_dec_ref_known(v___x_326_, 2);
v___x_330_ = lean_array_uset(v_bs_x27_323_, v_i_317_, v___x_329_);
v_i_317_ = v___x_328_;
v_bs_318_ = v___x_330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1___boxed(lean_object* v_sz_332_, lean_object* v_i_333_, lean_object* v_bs_334_){
_start:
{
size_t v_sz_boxed_335_; size_t v_i_boxed_336_; lean_object* v_res_337_; 
v_sz_boxed_335_ = lean_unbox_usize(v_sz_332_);
lean_dec(v_sz_332_);
v_i_boxed_336_ = lean_unbox_usize(v_i_333_);
lean_dec(v_i_333_);
v_res_337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1(v_sz_boxed_335_, v_i_boxed_336_, v_bs_334_);
return v_res_337_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__0));
v___x_340_ = l_Lean_stringToMessageData(v___x_339_);
return v___x_340_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__2));
v___x_343_ = l_Lean_stringToMessageData(v___x_342_);
return v___x_343_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__6));
v___x_348_ = l_Lean_stringToMessageData(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__8));
v___x_351_ = l_Lean_stringToMessageData(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg(lean_object* v_declName_354_, lean_object* v_unusedInstanceBinders_355_){
_start:
{
lean_object* v___x_356_; size_t v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; size_t v___y_383_; lean_object* v___y_384_; uint8_t v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; uint8_t v___y_395_; lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_array_get_size(v_unusedInstanceBinders_355_);
v___x_413_ = lean_nat_dec_lt(v___x_356_, v___x_412_);
if (v___x_413_ == 0)
{
v___y_395_ = v___x_413_;
goto v___jp_394_;
}
else
{
if (v___x_413_ == 0)
{
v___y_395_ = v___x_413_;
goto v___jp_394_;
}
else
{
size_t v___x_414_; size_t v___x_415_; uint8_t v___x_416_; 
v___x_414_ = ((size_t)0ULL);
v___x_415_ = lean_usize_of_nat(v___x_412_);
v___x_416_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__3(v_unusedInstanceBinders_355_, v___x_414_, v___x_415_);
v___y_395_ = v___x_416_;
goto v___jp_394_;
}
}
v___jp_357_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; size_t v_sz_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
lean_inc_ref(v___y_361_);
v___x_362_ = l_Lean_stringToMessageData(v___y_361_);
v___x_363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_363_, 0, v___y_360_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__1);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = l_Lean_MessageData_nil;
v_sz_367_ = lean_array_size(v___y_359_);
v___x_368_ = l_unsafeCast___redArg(v___y_359_);
lean_dec(v___y_359_);
v___x_369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__1(v_sz_367_, v___y_358_, v___x_368_);
v___x_370_ = l_unsafeCast___redArg(v___x_369_);
lean_dec_ref(v___x_369_);
v___x_371_ = lean_array_get_size(v___x_370_);
v___x_372_ = lean_nat_dec_lt(v___x_356_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
lean_dec(v___x_370_);
v___x_373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_365_);
lean_ctor_set(v___x_373_, 1, v___x_366_);
return v___x_373_;
}
else
{
uint8_t v___x_374_; 
v___x_374_ = lean_nat_dec_le(v___x_371_, v___x_371_);
if (v___x_374_ == 0)
{
if (v___x_372_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v___x_370_);
v___x_375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_365_);
lean_ctor_set(v___x_375_, 1, v___x_366_);
return v___x_375_;
}
else
{
size_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_usize_of_nat(v___x_371_);
v___x_377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2(v___x_370_, v___y_358_, v___x_376_, v___x_366_);
lean_dec(v___x_370_);
v___x_378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_365_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
return v___x_378_;
}
}
else
{
size_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = lean_usize_of_nat(v___x_371_);
v___x_380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__2(v___x_370_, v___y_358_, v___x_379_, v___x_366_);
lean_dec(v___x_370_);
v___x_381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_365_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
return v___x_381_;
}
}
}
v___jp_382_:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
lean_inc_ref(v___y_387_);
v___x_388_ = l_Lean_stringToMessageData(v___y_387_);
v___x_389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_389_, 0, v___y_386_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__3);
v___x_391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
if (v___y_385_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__4));
v___y_358_ = v___y_383_;
v___y_359_ = v___y_384_;
v___y_360_ = v___x_391_;
v___y_361_ = v___x_392_;
goto v___jp_357_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__5));
v___y_358_ = v___y_383_;
v___y_359_ = v___y_384_;
v___y_360_ = v___x_391_;
v___y_361_ = v___x_393_;
goto v___jp_357_;
}
}
v___jp_394_:
{
size_t v_sz_396_; size_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v_unusedInstanceBinders_400_; lean_object* v___x_401_; uint8_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v_sz_396_ = lean_array_size(v_unusedInstanceBinders_355_);
v___x_397_ = ((size_t)0ULL);
v___x_398_ = l_unsafeCast___redArg(v_unusedInstanceBinders_355_);
v___x_399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg_spec__0(v_sz_396_, v___x_397_, v___x_398_);
v_unusedInstanceBinders_400_ = l_unsafeCast___redArg(v___x_399_);
lean_dec_ref(v___x_399_);
v___x_401_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__7);
v___x_402_ = 0;
v___x_403_ = l_Lean_MessageData_ofConstName(v_declName_354_, v___x_402_);
v___x_404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_401_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_obj_once(&l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9, &l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9_once, _init_l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__9);
v___x_406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_array_get_size(v_unusedInstanceBinders_400_);
v___x_408_ = lean_unsigned_to_nat(1u);
v___x_409_ = lean_nat_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; 
v___x_410_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__10));
v___y_383_ = v___x_397_;
v___y_384_ = v_unusedInstanceBinders_400_;
v___y_385_ = v___y_395_;
v___y_386_ = v___x_406_;
v___y_387_ = v___x_410_;
goto v___jp_382_;
}
else
{
lean_object* v___x_411_; 
v___x_411_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__11));
v___y_383_ = v___x_397_;
v___y_384_ = v_unusedInstanceBinders_400_;
v___y_385_ = v___y_395_;
v___y_386_ = v___x_406_;
v___y_387_ = v___x_411_;
goto v___jp_382_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___boxed(lean_object* v_declName_417_, lean_object* v_unusedInstanceBinders_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg(v_declName_417_, v_unusedInstanceBinders_418_);
lean_dec_ref(v_unusedInstanceBinders_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0(lean_object* v_subExpr_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___y_428_; uint8_t v___y_437_; uint8_t v___x_458_; 
v___x_458_ = l_Lean_Expr_hasFVar(v_subExpr_420_);
if (v___x_458_ == 0)
{
v___y_437_ = v___x_458_;
goto v___jp_436_;
}
else
{
uint8_t v___x_459_; 
v___x_459_ = l_Lean_Expr_isSorry(v_subExpr_420_);
if (v___x_459_ == 0)
{
v___y_437_ = v___x_458_;
goto v___jp_436_;
}
else
{
uint8_t v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec_ref(v_subExpr_420_);
v___x_460_ = 0;
v___x_461_ = lean_box(v___x_460_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
v___jp_427_:
{
if (lean_obj_tag(v_subExpr_420_) == 1)
{
lean_object* v_fvarId_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec_ref(v___y_428_);
v_fvarId_429_ = lean_ctor_get(v_subExpr_420_, 0);
lean_inc(v_fvarId_429_);
lean_dec_ref_known(v_subExpr_420_, 1);
v___x_430_ = lean_st_ref_take(v___y_421_);
v___x_431_ = l_Lean_FVarIdSet_insert(v___x_430_, v_fvarId_429_);
v___x_432_ = lean_st_ref_put(v___y_421_, v___x_431_);
v___x_433_ = 0;
v___x_434_ = lean_box(v___x_433_);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
else
{
lean_dec_ref(v_subExpr_420_);
return v___y_428_;
}
}
v___jp_436_:
{
if (v___y_437_ == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec_ref(v_subExpr_420_);
v___x_438_ = lean_box(v___y_437_);
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
return v___x_439_;
}
else
{
lean_object* v___x_440_; 
lean_inc_ref(v_subExpr_420_);
v___x_440_ = l_Lean_Meta_isProof(v_subExpr_420_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_455_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_455_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_455_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_455_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
uint8_t v___x_445_; 
v___x_445_ = lean_unbox(v_a_441_);
lean_dec(v_a_441_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_box(v___y_437_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_446_);
v___x_448_ = v___x_443_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
v___y_428_ = v___x_448_;
goto v___jp_427_;
}
}
else
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
lean_dec_ref(v_subExpr_420_);
v___x_450_ = 0;
v___x_451_ = lean_box(v___x_450_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_451_);
v___x_453_ = v___x_443_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_456_; uint8_t v___x_457_; 
v_a_456_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_456_);
v___x_457_ = lean_unbox(v_a_456_);
lean_dec(v_a_456_);
if (v___x_457_ == 0)
{
lean_dec_ref(v_subExpr_420_);
return v___x_440_;
}
else
{
v___y_428_ = v___x_440_;
goto v___jp_427_;
}
}
else
{
lean_dec_ref(v_subExpr_420_);
return v___x_440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0___boxed(lean_object* v_subExpr_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___lam__0(v_subExpr_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0(lean_object* v_00_u03b1_471_, lean_object* v_x_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_apply_1(v_x_472_, lean_box(0));
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0___boxed(lean_object* v_00_u03b1_481_, lean_object* v_x_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0(v_00_u03b1_481_, v_x_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0(lean_object* v_k_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v_b_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; 
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
lean_inc_ref(v___y_494_);
lean_inc(v___y_492_);
lean_inc(v___y_491_);
v___x_499_ = lean_apply_8(v_k_490_, v_b_493_, v___y_491_, v___y_492_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, lean_box(0));
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v_k_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v_b_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0(v_k_500_, v___y_501_, v___y_502_, v_b_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_502_);
lean_dec(v___y_501_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(lean_object* v_name_510_, uint8_t v_bi_511_, lean_object* v_type_512_, lean_object* v_k_513_, uint8_t v_kind_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v___f_522_; lean_object* v___x_523_; 
lean_inc(v___y_516_);
lean_inc(v___y_515_);
v___f_522_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_522_, 0, v_k_513_);
lean_closure_set(v___f_522_, 1, v___y_515_);
lean_closure_set(v___f_522_, 2, v___y_516_);
v___x_523_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_510_, v_bi_511_, v_type_512_, v___f_522_, v_kind_514_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
if (lean_obj_tag(v___x_523_) == 0)
{
return v___x_523_;
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_523_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___boxed(lean_object* v_name_532_, lean_object* v_bi_533_, lean_object* v_type_534_, lean_object* v_k_535_, lean_object* v_kind_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
uint8_t v_bi_boxed_544_; uint8_t v_kind_boxed_545_; lean_object* v_res_546_; 
v_bi_boxed_544_ = lean_unbox(v_bi_533_);
v_kind_boxed_545_ = lean_unbox(v_kind_536_);
v_res_546_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_name_532_, v_bi_boxed_544_, v_type_534_, v_k_535_, v_kind_boxed_545_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec(v___y_537_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0___boxed(lean_object* v_fvars_547_, lean_object* v_f_548_, lean_object* v_body_549_, lean_object* v_x_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0(v_fvars_547_, v_f_548_, v_body_549_, v_x_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec(v___y_551_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8(lean_object* v_f_559_, lean_object* v_fvars_560_, lean_object* v_a_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
if (lean_obj_tag(v_a_561_) == 7)
{
lean_object* v_binderName_569_; lean_object* v_binderType_570_; lean_object* v_body_571_; uint8_t v_binderInfo_572_; lean_object* v___f_573_; lean_object* v_d_574_; lean_object* v___x_575_; 
v_binderName_569_ = lean_ctor_get(v_a_561_, 0);
lean_inc(v_binderName_569_);
v_binderType_570_ = lean_ctor_get(v_a_561_, 1);
lean_inc_ref(v_binderType_570_);
v_body_571_ = lean_ctor_get(v_a_561_, 2);
lean_inc_ref(v_body_571_);
v_binderInfo_572_ = lean_ctor_get_uint8(v_a_561_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_561_, 3);
lean_inc_ref(v_f_559_);
lean_inc_ref(v_fvars_560_);
v___f_573_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0___boxed), 11, 3);
lean_closure_set(v___f_573_, 0, v_fvars_560_);
lean_closure_set(v___f_573_, 1, v_f_559_);
lean_closure_set(v___f_573_, 2, v_body_571_);
v_d_574_ = lean_expr_instantiate_rev(v_binderType_570_, v_fvars_560_);
lean_dec_ref(v_fvars_560_);
lean_dec_ref(v_binderType_570_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
lean_inc(v___y_565_);
lean_inc_ref(v___y_564_);
lean_inc(v___y_563_);
lean_inc(v___y_562_);
lean_inc_ref(v_d_574_);
v___x_575_ = lean_apply_8(v_f_559_, v_d_574_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, lean_box(0));
if (lean_obj_tag(v___x_575_) == 0)
{
uint8_t v___x_576_; lean_object* v___x_577_; 
lean_dec_ref_known(v___x_575_, 1);
v___x_576_ = 0;
v___x_577_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_binderName_569_, v_binderInfo_572_, v_d_574_, v___f_573_, v___x_576_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
return v___x_577_;
}
else
{
lean_dec_ref(v_d_574_);
lean_dec_ref(v___f_573_);
lean_dec(v_binderName_569_);
return v___x_575_;
}
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_expr_instantiate_rev(v_a_561_, v_fvars_560_);
lean_dec_ref(v_fvars_560_);
lean_dec_ref(v_a_561_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
lean_inc(v___y_565_);
lean_inc_ref(v___y_564_);
lean_inc(v___y_563_);
lean_inc(v___y_562_);
v___x_579_ = lean_apply_8(v_f_559_, v___x_578_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, lean_box(0));
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___lam__0(lean_object* v_fvars_580_, lean_object* v_f_581_, lean_object* v_body_582_, lean_object* v_x_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_array_push(v_fvars_580_, v_x_583_);
v___x_592_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8(v_f_581_, v___x_591_, v_body_582_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8___boxed(lean_object* v_f_593_, lean_object* v_fvars_594_, lean_object* v_a_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8(v_f_593_, v_fvars_594_, v_a_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec(v___y_596_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3(lean_object* v_f_606_, lean_object* v_e_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0));
v___x_616_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8(v_f_606_, v___x_615_, v_e_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___boxed(lean_object* v_f_617_, lean_object* v_e_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3(v_f_617_, v_e_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec(v___y_619_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10___redArg(lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
return v_x_627_;
}
else
{
lean_object* v_key_629_; lean_object* v_value_630_; lean_object* v_tail_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_654_; 
v_key_629_ = lean_ctor_get(v_x_628_, 0);
v_value_630_ = lean_ctor_get(v_x_628_, 1);
v_tail_631_ = lean_ctor_get(v_x_628_, 2);
v_isSharedCheck_654_ = !lean_is_exclusive(v_x_628_);
if (v_isSharedCheck_654_ == 0)
{
v___x_633_ = v_x_628_;
v_isShared_634_ = v_isSharedCheck_654_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_tail_631_);
lean_inc(v_value_630_);
lean_inc(v_key_629_);
lean_dec(v_x_628_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_654_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; uint64_t v___x_636_; uint64_t v___x_637_; uint64_t v___x_638_; uint64_t v_fold_639_; uint64_t v___x_640_; uint64_t v___x_641_; uint64_t v___x_642_; size_t v___x_643_; size_t v___x_644_; size_t v___x_645_; size_t v___x_646_; size_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_635_ = lean_array_get_size(v_x_627_);
v___x_636_ = l_Lean_Expr_hash(v_key_629_);
v___x_637_ = 32ULL;
v___x_638_ = lean_uint64_shift_right(v___x_636_, v___x_637_);
v_fold_639_ = lean_uint64_xor(v___x_636_, v___x_638_);
v___x_640_ = 16ULL;
v___x_641_ = lean_uint64_shift_right(v_fold_639_, v___x_640_);
v___x_642_ = lean_uint64_xor(v_fold_639_, v___x_641_);
v___x_643_ = lean_uint64_to_usize(v___x_642_);
v___x_644_ = lean_usize_of_nat(v___x_635_);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_sub(v___x_644_, v___x_645_);
v___x_647_ = lean_usize_land(v___x_643_, v___x_646_);
v___x_648_ = lean_array_uget_borrowed(v_x_627_, v___x_647_);
lean_inc(v___x_648_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 2, v___x_648_);
v___x_650_ = v___x_633_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_key_629_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_value_630_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v___x_648_);
v___x_650_ = v_reuseFailAlloc_653_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; 
v___x_651_ = lean_array_uset(v_x_627_, v___x_647_, v___x_650_);
v_x_627_ = v___x_651_;
v_x_628_ = v_tail_631_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object* v_i_655_, lean_object* v_source_656_, lean_object* v_target_657_){
_start:
{
lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_658_ = lean_array_get_size(v_source_656_);
v___x_659_ = lean_nat_dec_lt(v_i_655_, v___x_658_);
if (v___x_659_ == 0)
{
lean_dec_ref(v_source_656_);
lean_dec(v_i_655_);
return v_target_657_;
}
else
{
lean_object* v_es_660_; lean_object* v___x_661_; lean_object* v_source_662_; lean_object* v_target_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_es_660_ = lean_array_fget(v_source_656_, v_i_655_);
v___x_661_ = lean_box(0);
v_source_662_ = lean_array_fset(v_source_656_, v_i_655_, v___x_661_);
v_target_663_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10___redArg(v_target_657_, v_es_660_);
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_nat_add(v_i_655_, v___x_664_);
lean_dec(v_i_655_);
v_i_655_ = v___x_665_;
v_source_656_ = v_source_662_;
v_target_657_ = v_target_663_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_data_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_nbuckets_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_668_ = lean_array_get_size(v_data_667_);
v___x_669_ = lean_unsigned_to_nat(2u);
v_nbuckets_670_ = lean_nat_mul(v___x_668_, v___x_669_);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_box(0);
v___x_673_ = lean_mk_array(v_nbuckets_670_, v___x_672_);
v___x_674_ = lean_array_propagate_mark(v_data_667_, v___x_673_);
v___x_675_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v___x_671_, v_data_667_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_a_676_, lean_object* v_b_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_dec(v_b_677_);
lean_dec_ref(v_a_676_);
return v_x_678_;
}
else
{
lean_object* v_key_679_; lean_object* v_value_680_; lean_object* v_tail_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_693_; 
v_key_679_ = lean_ctor_get(v_x_678_, 0);
v_value_680_ = lean_ctor_get(v_x_678_, 1);
v_tail_681_ = lean_ctor_get(v_x_678_, 2);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_678_);
if (v_isSharedCheck_693_ == 0)
{
v___x_683_ = v_x_678_;
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_tail_681_);
lean_inc(v_value_680_);
lean_inc(v_key_679_);
lean_dec(v_x_678_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
uint8_t v___x_685_; 
v___x_685_ = lean_expr_eqv(v_key_679_, v_a_676_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_686_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6___redArg(v_a_676_, v_b_677_, v_tail_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 2, v___x_686_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_key_679_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_value_680_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
else
{
lean_object* v___x_691_; 
lean_dec(v_value_680_);
lean_dec(v_key_679_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v_b_677_);
lean_ctor_set(v___x_683_, 0, v_a_676_);
v___x_691_ = v___x_683_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_676_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_b_677_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_tail_681_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_a_694_, lean_object* v_x_695_){
_start:
{
if (lean_obj_tag(v_x_695_) == 0)
{
uint8_t v___x_696_; 
v___x_696_ = 0;
return v___x_696_;
}
else
{
lean_object* v_key_697_; lean_object* v_tail_698_; uint8_t v___x_699_; 
v_key_697_ = lean_ctor_get(v_x_695_, 0);
v_tail_698_ = lean_ctor_get(v_x_695_, 2);
v___x_699_ = lean_expr_eqv(v_key_697_, v_a_694_);
if (v___x_699_ == 0)
{
v_x_695_ = v_tail_698_;
goto _start;
}
else
{
return v___x_699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_a_701_, lean_object* v_x_702_){
_start:
{
uint8_t v_res_703_; lean_object* v_r_704_; 
v_res_703_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg(v_a_701_, v_x_702_);
lean_dec(v_x_702_);
lean_dec_ref(v_a_701_);
v_r_704_ = lean_box(v_res_703_);
return v_r_704_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(lean_object* v_m_705_, lean_object* v_a_706_, lean_object* v_b_707_){
_start:
{
lean_object* v_size_708_; lean_object* v_buckets_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_752_; 
v_size_708_ = lean_ctor_get(v_m_705_, 0);
v_buckets_709_ = lean_ctor_get(v_m_705_, 1);
v_isSharedCheck_752_ = !lean_is_exclusive(v_m_705_);
if (v_isSharedCheck_752_ == 0)
{
v___x_711_ = v_m_705_;
v_isShared_712_ = v_isSharedCheck_752_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_buckets_709_);
lean_inc(v_size_708_);
lean_dec(v_m_705_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_752_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; uint64_t v___x_714_; uint64_t v___x_715_; uint64_t v___x_716_; uint64_t v_fold_717_; uint64_t v___x_718_; uint64_t v___x_719_; uint64_t v___x_720_; size_t v___x_721_; size_t v___x_722_; size_t v___x_723_; size_t v___x_724_; size_t v___x_725_; lean_object* v_bkt_726_; uint8_t v___x_727_; 
v___x_713_ = lean_array_get_size(v_buckets_709_);
v___x_714_ = l_Lean_Expr_hash(v_a_706_);
v___x_715_ = 32ULL;
v___x_716_ = lean_uint64_shift_right(v___x_714_, v___x_715_);
v_fold_717_ = lean_uint64_xor(v___x_714_, v___x_716_);
v___x_718_ = 16ULL;
v___x_719_ = lean_uint64_shift_right(v_fold_717_, v___x_718_);
v___x_720_ = lean_uint64_xor(v_fold_717_, v___x_719_);
v___x_721_ = lean_uint64_to_usize(v___x_720_);
v___x_722_ = lean_usize_of_nat(v___x_713_);
v___x_723_ = ((size_t)1ULL);
v___x_724_ = lean_usize_sub(v___x_722_, v___x_723_);
v___x_725_ = lean_usize_land(v___x_721_, v___x_724_);
v_bkt_726_ = lean_array_uget_borrowed(v_buckets_709_, v___x_725_);
v___x_727_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg(v_a_706_, v_bkt_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v_size_x27_729_; lean_object* v___x_730_; lean_object* v_buckets_x27_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_728_ = lean_unsigned_to_nat(1u);
v_size_x27_729_ = lean_nat_add(v_size_708_, v___x_728_);
lean_dec(v_size_708_);
lean_inc(v_bkt_726_);
v___x_730_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_730_, 0, v_a_706_);
lean_ctor_set(v___x_730_, 1, v_b_707_);
lean_ctor_set(v___x_730_, 2, v_bkt_726_);
v_buckets_x27_731_ = lean_array_uset(v_buckets_709_, v___x_725_, v___x_730_);
v___x_732_ = lean_unsigned_to_nat(4u);
v___x_733_ = lean_nat_mul(v_size_x27_729_, v___x_732_);
v___x_734_ = lean_unsigned_to_nat(3u);
v___x_735_ = lean_nat_div(v___x_733_, v___x_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_array_get_size(v_buckets_x27_731_);
v___x_737_ = lean_nat_dec_le(v___x_735_, v___x_736_);
lean_dec(v___x_735_);
if (v___x_737_ == 0)
{
lean_object* v_val_738_; lean_object* v___x_740_; 
v_val_738_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5___redArg(v_buckets_x27_731_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v_val_738_);
lean_ctor_set(v___x_711_, 0, v_size_x27_729_);
v___x_740_ = v___x_711_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_size_x27_729_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_val_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
else
{
lean_object* v___x_743_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v_buckets_x27_731_);
lean_ctor_set(v___x_711_, 0, v_size_x27_729_);
v___x_743_ = v___x_711_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_size_x27_729_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_buckets_x27_731_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
else
{
lean_object* v___x_745_; lean_object* v_buckets_x27_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; 
lean_inc(v_bkt_726_);
v___x_745_ = lean_box(0);
v_buckets_x27_746_ = lean_array_uset(v_buckets_709_, v___x_725_, v___x_745_);
v___x_747_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6___redArg(v_a_706_, v_b_707_, v_bkt_726_);
v___x_748_ = lean_array_uset(v_buckets_x27_746_, v___x_725_, v___x_747_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_748_);
v___x_750_ = v___x_711_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_size_708_);
lean_ctor_set(v_reuseFailAlloc_751_, 1, v___x_748_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1(lean_object* v_a_753_, lean_object* v_e_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_757_ = lean_st_ref_take(v_a_753_);
v___x_758_ = lean_box(0);
v___x_759_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v___x_757_, v_e_754_, v_a_755_);
v___x_760_ = lean_st_ref_put(v_a_753_, v___x_759_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1___boxed(lean_object* v_a_761_, lean_object* v_e_762_, lean_object* v_a_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1(v_a_761_, v_e_762_, v_a_763_);
lean_dec(v_a_761_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg(lean_object* v_name_766_, lean_object* v_type_767_, lean_object* v_val_768_, lean_object* v_k_769_, uint8_t v_nondep_770_, uint8_t v_kind_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___f_779_; lean_object* v___x_780_; 
lean_inc(v___y_773_);
lean_inc(v___y_772_);
v___f_779_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_779_, 0, v_k_769_);
lean_closure_set(v___f_779_, 1, v___y_772_);
lean_closure_set(v___f_779_, 2, v___y_773_);
v___x_780_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_766_, v_type_767_, v_val_768_, v___f_779_, v_nondep_770_, v_kind_771_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
if (lean_obj_tag(v___x_780_) == 0)
{
return v___x_780_;
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg___boxed(lean_object* v_name_789_, lean_object* v_type_790_, lean_object* v_val_791_, lean_object* v_k_792_, lean_object* v_nondep_793_, lean_object* v_kind_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
uint8_t v_nondep_boxed_802_; uint8_t v_kind_boxed_803_; lean_object* v_res_804_; 
v_nondep_boxed_802_ = lean_unbox(v_nondep_793_);
v_kind_boxed_803_ = lean_unbox(v_kind_794_);
v_res_804_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg(v_name_789_, v_type_790_, v_val_791_, v_k_792_, v_nondep_boxed_802_, v_kind_boxed_803_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec(v___y_795_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0___boxed(lean_object* v_fvars_805_, lean_object* v_f_806_, lean_object* v_body_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0(v_fvars_805_, v_f_806_, v_body_807_, v_x_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec(v___y_809_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12(lean_object* v_f_817_, lean_object* v_fvars_818_, lean_object* v_a_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
if (lean_obj_tag(v_a_819_) == 8)
{
lean_object* v_declName_827_; lean_object* v_type_828_; lean_object* v_value_829_; lean_object* v_body_830_; lean_object* v___f_831_; lean_object* v_d_832_; lean_object* v_v_833_; lean_object* v___x_834_; 
v_declName_827_ = lean_ctor_get(v_a_819_, 0);
lean_inc(v_declName_827_);
v_type_828_ = lean_ctor_get(v_a_819_, 1);
lean_inc_ref(v_type_828_);
v_value_829_ = lean_ctor_get(v_a_819_, 2);
lean_inc_ref(v_value_829_);
v_body_830_ = lean_ctor_get(v_a_819_, 3);
lean_inc_ref(v_body_830_);
lean_dec_ref_known(v_a_819_, 4);
lean_inc_ref_n(v_f_817_, 2);
lean_inc_ref(v_fvars_818_);
v___f_831_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0___boxed), 11, 3);
lean_closure_set(v___f_831_, 0, v_fvars_818_);
lean_closure_set(v___f_831_, 1, v_f_817_);
lean_closure_set(v___f_831_, 2, v_body_830_);
v_d_832_ = lean_expr_instantiate_rev(v_type_828_, v_fvars_818_);
lean_dec_ref(v_type_828_);
v_v_833_ = lean_expr_instantiate_rev(v_value_829_, v_fvars_818_);
lean_dec_ref(v_fvars_818_);
lean_dec_ref(v_value_829_);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v_d_832_);
v___x_834_ = lean_apply_8(v_f_817_, v_d_832_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, lean_box(0));
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v___x_835_; 
lean_dec_ref_known(v___x_834_, 1);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v_v_833_);
v___x_835_ = lean_apply_8(v_f_817_, v_v_833_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, lean_box(0));
if (lean_obj_tag(v___x_835_) == 0)
{
uint8_t v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; 
lean_dec_ref_known(v___x_835_, 1);
v___x_836_ = 0;
v___x_837_ = 0;
v___x_838_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg(v_declName_827_, v_d_832_, v_v_833_, v___f_831_, v___x_836_, v___x_837_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
return v___x_838_;
}
else
{
lean_dec_ref(v_v_833_);
lean_dec_ref(v_d_832_);
lean_dec_ref(v___f_831_);
lean_dec(v_declName_827_);
return v___x_835_;
}
}
else
{
lean_dec_ref(v_v_833_);
lean_dec_ref(v_d_832_);
lean_dec_ref(v___f_831_);
lean_dec(v_declName_827_);
lean_dec_ref(v_f_817_);
return v___x_834_;
}
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_expr_instantiate_rev(v_a_819_, v_fvars_818_);
lean_dec_ref(v_fvars_818_);
lean_dec_ref(v_a_819_);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc(v___y_820_);
v___x_840_ = lean_apply_8(v_f_817_, v___x_839_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, lean_box(0));
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___lam__0(lean_object* v_fvars_841_, lean_object* v_f_842_, lean_object* v_body_843_, lean_object* v_x_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_array_push(v_fvars_841_, v_x_844_);
v___x_853_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12(v_f_842_, v___x_852_, v_body_843_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12___boxed(lean_object* v_f_854_, lean_object* v_fvars_855_, lean_object* v_a_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12(v_f_854_, v_fvars_855_, v_a_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec(v___y_857_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5(lean_object* v_f_865_, lean_object* v_e_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = ((lean_object*)(l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0));
v___x_875_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12(v_f_865_, v___x_874_, v_e_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5___boxed(lean_object* v_f_876_, lean_object* v_e_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5(v_f_876_, v_e_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec(v___y_878_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0___boxed(lean_object* v_fvars_886_, lean_object* v_f_887_, lean_object* v_body_888_, lean_object* v_x_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0(v_fvars_886_, v_f_887_, v_body_888_, v_x_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec(v___y_890_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10(lean_object* v_f_898_, lean_object* v_fvars_899_, lean_object* v_a_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
if (lean_obj_tag(v_a_900_) == 6)
{
lean_object* v_binderName_908_; lean_object* v_binderType_909_; lean_object* v_body_910_; uint8_t v_binderInfo_911_; lean_object* v___f_912_; lean_object* v_d_913_; lean_object* v___x_914_; 
v_binderName_908_ = lean_ctor_get(v_a_900_, 0);
lean_inc(v_binderName_908_);
v_binderType_909_ = lean_ctor_get(v_a_900_, 1);
lean_inc_ref(v_binderType_909_);
v_body_910_ = lean_ctor_get(v_a_900_, 2);
lean_inc_ref(v_body_910_);
v_binderInfo_911_ = lean_ctor_get_uint8(v_a_900_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_900_, 3);
lean_inc_ref(v_f_898_);
lean_inc_ref(v_fvars_899_);
v___f_912_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0___boxed), 11, 3);
lean_closure_set(v___f_912_, 0, v_fvars_899_);
lean_closure_set(v___f_912_, 1, v_f_898_);
lean_closure_set(v___f_912_, 2, v_body_910_);
v_d_913_ = lean_expr_instantiate_rev(v_binderType_909_, v_fvars_899_);
lean_dec_ref(v_fvars_899_);
lean_dec_ref(v_binderType_909_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
lean_inc(v___y_902_);
lean_inc(v___y_901_);
lean_inc_ref(v_d_913_);
v___x_914_ = lean_apply_8(v_f_898_, v_d_913_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, lean_box(0));
if (lean_obj_tag(v___x_914_) == 0)
{
uint8_t v___x_915_; lean_object* v___x_916_; 
lean_dec_ref_known(v___x_914_, 1);
v___x_915_ = 0;
v___x_916_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_binderName_908_, v_binderInfo_911_, v_d_913_, v___f_912_, v___x_915_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
return v___x_916_;
}
else
{
lean_dec_ref(v_d_913_);
lean_dec_ref(v___f_912_);
lean_dec(v_binderName_908_);
return v___x_914_;
}
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_expr_instantiate_rev(v_a_900_, v_fvars_899_);
lean_dec_ref(v_fvars_899_);
lean_dec_ref(v_a_900_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
lean_inc(v___y_902_);
lean_inc(v___y_901_);
v___x_918_ = lean_apply_8(v_f_898_, v___x_917_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, lean_box(0));
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___lam__0(lean_object* v_fvars_919_, lean_object* v_f_920_, lean_object* v_body_921_, lean_object* v_x_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_array_push(v_fvars_919_, v_x_922_);
v___x_931_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10(v_f_920_, v___x_930_, v_body_921_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10___boxed(lean_object* v_f_932_, lean_object* v_fvars_933_, lean_object* v_a_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10(v_f_932_, v_fvars_933_, v_a_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec(v___y_935_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4(lean_object* v_f_943_, lean_object* v_e_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3___closed__0));
v___x_953_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4_spec__10(v_f_943_, v___x_952_, v_e_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4___boxed(lean_object* v_f_954_, lean_object* v_e_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4(v_f_954_, v_e_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec(v___y_956_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_a_964_, lean_object* v_x_965_){
_start:
{
if (lean_obj_tag(v_x_965_) == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_box(0);
return v___x_966_;
}
else
{
lean_object* v_key_967_; lean_object* v_value_968_; lean_object* v_tail_969_; uint8_t v___x_970_; 
v_key_967_ = lean_ctor_get(v_x_965_, 0);
v_value_968_ = lean_ctor_get(v_x_965_, 1);
v_tail_969_ = lean_ctor_get(v_x_965_, 2);
v___x_970_ = lean_expr_eqv(v_key_967_, v_a_964_);
if (v___x_970_ == 0)
{
v_x_965_ = v_tail_969_;
goto _start;
}
else
{
lean_object* v___x_972_; 
lean_inc(v_value_968_);
v___x_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_972_, 0, v_value_968_);
return v___x_972_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_a_973_, lean_object* v_x_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg(v_a_973_, v_x_974_);
lean_dec(v_x_974_);
lean_dec_ref(v_a_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(lean_object* v_m_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_buckets_978_; lean_object* v___x_979_; uint64_t v___x_980_; uint64_t v___x_981_; uint64_t v___x_982_; uint64_t v_fold_983_; uint64_t v___x_984_; uint64_t v___x_985_; uint64_t v___x_986_; size_t v___x_987_; size_t v___x_988_; size_t v___x_989_; size_t v___x_990_; size_t v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v_buckets_978_ = lean_ctor_get(v_m_976_, 1);
v___x_979_ = lean_array_get_size(v_buckets_978_);
v___x_980_ = l_Lean_Expr_hash(v_a_977_);
v___x_981_ = 32ULL;
v___x_982_ = lean_uint64_shift_right(v___x_980_, v___x_981_);
v_fold_983_ = lean_uint64_xor(v___x_980_, v___x_982_);
v___x_984_ = 16ULL;
v___x_985_ = lean_uint64_shift_right(v_fold_983_, v___x_984_);
v___x_986_ = lean_uint64_xor(v_fold_983_, v___x_985_);
v___x_987_ = lean_uint64_to_usize(v___x_986_);
v___x_988_ = lean_usize_of_nat(v___x_979_);
v___x_989_ = ((size_t)1ULL);
v___x_990_ = lean_usize_sub(v___x_988_, v___x_989_);
v___x_991_ = lean_usize_land(v___x_987_, v___x_990_);
v___x_992_ = lean_array_uget_borrowed(v_buckets_978_, v___x_991_);
v___x_993_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg(v_a_977_, v___x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_m_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_m_994_, v_a_995_);
lean_dec_ref(v_a_995_);
lean_dec_ref(v_m_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_apply_1(v_x_998_, lean_box(0));
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1007_, lean_object* v_x_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0(v_00_u03b1_1007_, v_x_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___boxed(lean_object* v_fn_1016_, lean_object* v_e_1017_, lean_object* v_a_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1016_, v_e_1017_, v_a_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec(v_a_1018_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(lean_object* v_fn_1026_, lean_object* v_e_1027_, lean_object* v_a_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_a_1036_; lean_object* v___y_1048_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_inc(v_a_1028_);
v___x_1050_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1050_, 0, lean_box(0));
lean_closure_set(v___x_1050_, 1, lean_box(0));
lean_closure_set(v___x_1050_, 2, v_a_1028_);
v___x_1051_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0(lean_box(0), v___x_1050_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1088_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1088_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1088_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_a_1052_, v_e_1027_);
lean_dec(v_a_1052_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v___x_1057_; 
lean_del_object(v___x_1054_);
lean_inc_ref(v_fn_1026_);
lean_inc(v___y_1033_);
lean_inc_ref(v___y_1032_);
lean_inc(v___y_1031_);
lean_inc_ref(v___y_1030_);
lean_inc(v___y_1029_);
lean_inc_ref(v_e_1027_);
v___x_1057_ = lean_apply_7(v_fn_1026_, v_e_1027_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, lean_box(0));
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; uint8_t v___x_1059_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = lean_unbox(v_a_1058_);
lean_dec(v_a_1058_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
lean_dec_ref(v_fn_1026_);
v___x_1060_ = lean_box(0);
v_a_1036_ = v___x_1060_;
goto v___jp_1035_;
}
else
{
switch(lean_obj_tag(v_e_1027_))
{
case 7:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___boxed), 9, 1);
lean_closure_set(v___x_1061_, 0, v_fn_1026_);
lean_inc_ref(v_e_1027_);
v___x_1062_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3(v___x_1061_, v_e_1027_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1062_;
goto v___jp_1047_;
}
case 6:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___boxed), 9, 1);
lean_closure_set(v___x_1063_, 0, v_fn_1026_);
lean_inc_ref(v_e_1027_);
v___x_1064_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__4(v___x_1063_, v_e_1027_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1064_;
goto v___jp_1047_;
}
case 8:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___boxed), 9, 1);
lean_closure_set(v___x_1065_, 0, v_fn_1026_);
lean_inc_ref(v_e_1027_);
v___x_1066_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5(v___x_1065_, v_e_1027_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1066_;
goto v___jp_1047_;
}
case 5:
{
lean_object* v_fn_1067_; lean_object* v_arg_1068_; lean_object* v___x_1069_; 
v_fn_1067_ = lean_ctor_get(v_e_1027_, 0);
v_arg_1068_ = lean_ctor_get(v_e_1027_, 1);
lean_inc_ref(v_fn_1067_);
lean_inc_ref(v_fn_1026_);
v___x_1069_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1026_, v_fn_1067_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v___x_1070_; 
lean_dec_ref_known(v___x_1069_, 1);
lean_inc_ref(v_arg_1068_);
v___x_1070_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1026_, v_arg_1068_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1070_;
goto v___jp_1047_;
}
else
{
lean_dec_ref(v_fn_1026_);
v___y_1048_ = v___x_1069_;
goto v___jp_1047_;
}
}
case 10:
{
lean_object* v_expr_1071_; lean_object* v___x_1072_; 
v_expr_1071_ = lean_ctor_get(v_e_1027_, 1);
lean_inc_ref(v_expr_1071_);
v___x_1072_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1026_, v_expr_1071_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1072_;
goto v___jp_1047_;
}
case 11:
{
lean_object* v_struct_1073_; lean_object* v___x_1074_; 
v_struct_1073_ = lean_ctor_get(v_e_1027_, 2);
lean_inc_ref(v_struct_1073_);
v___x_1074_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1026_, v_struct_1073_, v_a_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
v___y_1048_ = v___x_1074_;
goto v___jp_1047_;
}
default: 
{
lean_object* v___x_1075_; 
lean_dec_ref(v_fn_1026_);
v___x_1075_ = lean_box(0);
v_a_1036_ = v___x_1075_;
goto v___jp_1035_;
}
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec_ref(v_e_1027_);
lean_dec_ref(v_fn_1026_);
v_a_1076_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1057_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1057_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
else
{
lean_object* v_val_1084_; lean_object* v___x_1086_; 
lean_dec_ref(v_e_1027_);
lean_dec_ref(v_fn_1026_);
v_val_1084_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_val_1084_);
lean_dec_ref_known(v___x_1056_, 1);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v_val_1084_);
v___x_1086_ = v___x_1054_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_val_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec_ref(v_e_1027_);
lean_dec_ref(v_fn_1026_);
v_a_1089_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1051_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1051_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
v___jp_1035_:
{
lean_object* v___f_1037_; lean_object* v___x_1038_; 
lean_inc(v_a_1028_);
v___f_1037_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1037_, 0, v_a_1028_);
lean_closure_set(v___f_1037_, 1, v_e_1027_);
lean_closure_set(v___f_1037_, 2, v_a_1036_);
v___x_1038_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0___lam__0(lean_box(0), v___f_1037_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v___x_1038_, 0);
lean_dec(v_unused_1046_);
v___x_1040_ = v___x_1038_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_dec(v___x_1038_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v_a_1036_);
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1036_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
else
{
return v___x_1038_;
}
}
v___jp_1047_:
{
if (lean_obj_tag(v___y_1048_) == 0)
{
lean_object* v_a_1049_; 
v_a_1049_ = lean_ctor_get(v___y_1048_, 0);
lean_inc(v_a_1049_);
lean_dec_ref_known(v___y_1048_, 1);
v_a_1036_ = v_a_1049_;
goto v___jp_1035_;
}
else
{
lean_dec_ref(v_e_1027_);
return v___y_1048_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_unsigned_to_nat(16u);
v___x_1099_ = lean_mk_array(v___x_1098_, v___x_1097_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0, &l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__0);
v___x_1101_ = lean_unsigned_to_nat(0u);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v___x_1100_);
return v___x_1102_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1, &l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__1);
v___x_1104_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1104_, 0, lean_box(0));
lean_closure_set(v___x_1104_, 1, lean_box(0));
lean_closure_set(v___x_1104_, 2, v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0(lean_object* v_input_1105_, lean_object* v_fn_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v_a_1115_; lean_object* v___x_1116_; 
v___x_1113_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2, &l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___closed__2);
v___x_1114_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0(lean_box(0), v___x_1113_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0(v_fn_1106_, v_input_1105_, v_a_1115_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1118_, 0, lean_box(0));
lean_closure_set(v___x_1118_, 1, lean_box(0));
lean_closure_set(v___x_1118_, 2, v_a_1115_);
v___x_1119_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___lam__0(lean_box(0), v___x_1118_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1126_ == 0)
{
lean_object* v_unused_1127_; 
v_unused_1127_ = lean_ctor_get(v___x_1119_, 0);
lean_dec(v_unused_1127_);
v___x_1121_ = v___x_1119_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_dec(v___x_1119_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 0, v_a_1117_);
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1117_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
else
{
lean_dec(v_a_1115_);
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0___boxed(lean_object* v_input_1128_, lean_object* v_fn_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0(v_input_1128_, v_fn_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(lean_object* v_e_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v___f_1145_; lean_object* v___x_1146_; 
v___f_1145_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___closed__0));
v___x_1146_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0(v_e_1138_, v___f_1145_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs___boxed(lean_object* v_e_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(v_e_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
lean_dec(v_a_1148_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1155_, lean_object* v_m_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_m_1156_, v_a_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1159_, lean_object* v_m_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1(v_00_u03b2_1159_, v_m_1160_, v_a_1161_);
lean_dec_ref(v_a_1161_);
lean_dec_ref(v_m_1160_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1163_, lean_object* v_m_1164_, lean_object* v_a_1165_, lean_object* v_b_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_m_1164_, v_a_1165_, v_b_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1168_, lean_object* v_a_1169_, lean_object* v_x_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___redArg(v_a_1169_, v_x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1172_, lean_object* v_a_1173_, lean_object* v_x_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_1172_, v_a_1173_, v_x_1174_);
lean_dec(v_x_1174_);
lean_dec_ref(v_a_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1176_, lean_object* v_a_1177_, lean_object* v_x_1178_){
_start:
{
uint8_t v___x_1179_; 
v___x_1179_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___redArg(v_a_1177_, v_x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1180_, lean_object* v_a_1181_, lean_object* v_x_1182_){
_start:
{
uint8_t v_res_1183_; lean_object* v_r_1184_; 
v_res_1183_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_1180_, v_a_1181_, v_x_1182_);
lean_dec(v_x_1182_);
lean_dec_ref(v_a_1181_);
v_r_1184_ = lean_box(v_res_1183_);
return v_r_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1185_, lean_object* v_data_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5___redArg(v_data_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1188_, lean_object* v_a_1189_, lean_object* v_b_1190_, lean_object* v_x_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__6___redArg(v_a_1189_, v_b_1190_, v_x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10(lean_object* v_00_u03b1_1193_, lean_object* v_name_1194_, uint8_t v_bi_1195_, lean_object* v_type_1196_, lean_object* v_k_1197_, uint8_t v_kind_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___redArg(v_name_1194_, v_bi_1195_, v_type_1196_, v_k_1197_, v_kind_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1207_, lean_object* v_name_1208_, lean_object* v_bi_1209_, lean_object* v_type_1210_, lean_object* v_k_1211_, lean_object* v_kind_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
uint8_t v_bi_boxed_1220_; uint8_t v_kind_boxed_1221_; lean_object* v_res_1222_; 
v_bi_boxed_1220_ = lean_unbox(v_bi_1209_);
v_kind_boxed_1221_ = lean_unbox(v_kind_1212_);
v_res_1222_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__3_spec__8_spec__10(v_00_u03b1_1207_, v_name_1208_, v_bi_boxed_1220_, v_type_1210_, v_k_1211_, v_kind_boxed_1221_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec(v___y_1213_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15(lean_object* v_00_u03b1_1223_, lean_object* v_name_1224_, lean_object* v_type_1225_, lean_object* v_val_1226_, lean_object* v_k_1227_, uint8_t v_nondep_1228_, uint8_t v_kind_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v___x_1237_; 
v___x_1237_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___redArg(v_name_1224_, v_type_1225_, v_val_1226_, v_k_1227_, v_nondep_1228_, v_kind_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15___boxed(lean_object* v_00_u03b1_1238_, lean_object* v_name_1239_, lean_object* v_type_1240_, lean_object* v_val_1241_, lean_object* v_k_1242_, lean_object* v_nondep_1243_, lean_object* v_kind_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v_nondep_boxed_1252_; uint8_t v_kind_boxed_1253_; lean_object* v_res_1254_; 
v_nondep_boxed_1252_ = lean_unbox(v_nondep_1243_);
v_kind_boxed_1253_ = lean_unbox(v_kind_1244_);
v_res_1254_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__5_spec__12_spec__15(v_00_u03b1_1238_, v_name_1239_, v_type_1240_, v_val_1241_, v_k_1242_, v_nondep_boxed_1252_, v_kind_boxed_1253_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
lean_dec(v___y_1245_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_1255_, lean_object* v_i_1256_, lean_object* v_source_1257_, lean_object* v_target_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_i_1256_, v_source_1257_, v_target_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10(lean_object* v_00_u03b2_1260_, lean_object* v_x_1261_, lean_object* v_x_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2_spec__5_spec__6_spec__10___redArg(v_x_1261_, v_x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0(lean_object* v_k_1264_, lean_object* v___y_1265_, lean_object* v_b_1266_, lean_object* v_c_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v___x_1273_; 
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1265_);
v___x_1273_ = lean_apply_8(v_k_1264_, v_b_1266_, v_c_1267_, v___y_1265_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, lean_box(0));
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0___boxed(lean_object* v_k_1274_, lean_object* v___y_1275_, lean_object* v_b_1276_, lean_object* v_c_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0(v_k_1274_, v___y_1275_, v_b_1276_, v_c_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1275_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg(lean_object* v_type_1284_, lean_object* v_maxFVars_x3f_1285_, lean_object* v_k_1286_, uint8_t v_cleanupAnnotations_1287_, uint8_t v_whnfType_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___f_1295_; lean_object* v___x_1296_; 
lean_inc(v___y_1289_);
v___f_1295_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1295_, 0, v_k_1286_);
lean_closure_set(v___f_1295_, 1, v___y_1289_);
v___x_1296_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1284_, v_maxFVars_x3f_1285_, v___f_1295_, v_cleanupAnnotations_1287_, v_whnfType_1288_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
if (lean_obj_tag(v___x_1296_) == 0)
{
return v___x_1296_;
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg___boxed(lean_object* v_type_1305_, lean_object* v_maxFVars_x3f_1306_, lean_object* v_k_1307_, lean_object* v_cleanupAnnotations_1308_, lean_object* v_whnfType_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1316_; uint8_t v_whnfType_boxed_1317_; lean_object* v_res_1318_; 
v_cleanupAnnotations_boxed_1316_ = lean_unbox(v_cleanupAnnotations_1308_);
v_whnfType_boxed_1317_ = lean_unbox(v_whnfType_1309_);
v_res_1318_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg(v_type_1305_, v_maxFVars_x3f_1306_, v_k_1307_, v_cleanupAnnotations_boxed_1316_, v_whnfType_boxed_1317_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0(lean_object* v_00_u03b1_1319_, lean_object* v_type_1320_, lean_object* v_maxFVars_x3f_1321_, lean_object* v_k_1322_, uint8_t v_cleanupAnnotations_1323_, uint8_t v_whnfType_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg(v_type_1320_, v_maxFVars_x3f_1321_, v_k_1322_, v_cleanupAnnotations_1323_, v_whnfType_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___boxed(lean_object* v_00_u03b1_1332_, lean_object* v_type_1333_, lean_object* v_maxFVars_x3f_1334_, lean_object* v_k_1335_, lean_object* v_cleanupAnnotations_1336_, lean_object* v_whnfType_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1344_; uint8_t v_whnfType_boxed_1345_; lean_object* v_res_1346_; 
v_cleanupAnnotations_boxed_1344_ = lean_unbox(v_cleanupAnnotations_1336_);
v_whnfType_boxed_1345_ = lean_unbox(v_whnfType_1337_);
v_res_1346_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0(v_00_u03b1_1332_, v_type_1333_, v_maxFVars_x3f_1334_, v_k_1335_, v_cleanupAnnotations_boxed_1344_, v_whnfType_boxed_1345_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0___boxed(lean_object* v___x_1347_, lean_object* v_currentBinderIdx_1348_, lean_object* v___x_1349_, lean_object* v_currentFVars_1350_, lean_object* v_p_1351_, lean_object* v_fvar_1352_, lean_object* v_e_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0(v___x_1347_, v_currentBinderIdx_1348_, v___x_1349_, v_currentFVars_1350_, v_p_1351_, v_fvar_1352_, v_e_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v_fvar_1352_);
lean_dec(v___x_1349_);
lean_dec_ref(v___x_1347_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go(lean_object* v_p_1363_, lean_object* v_e_1364_, lean_object* v_currentBinderIdx_1365_, lean_object* v_currentFVars_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_e_1373_; uint8_t v___x_1374_; 
v_e_1373_ = l_Lean_Expr_cleanupAnnotations(v_e_1364_);
v___x_1374_ = l_Lean_Expr_isForall(v_e_1373_);
if (v___x_1374_ == 0)
{
if (lean_obj_tag(v_e_1373_) == 8)
{
lean_object* v_type_1375_; lean_object* v_body_1376_; lean_object* v___x_1377_; 
v_type_1375_ = lean_ctor_get(v_e_1373_, 1);
lean_inc_ref_n(v_type_1375_, 2);
v_body_1376_ = lean_ctor_get(v_e_1373_, 3);
lean_inc_ref(v_body_1376_);
lean_dec_ref_known(v_e_1373_, 4);
v___x_1377_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(v_type_1375_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v___x_1378_; 
lean_dec_ref_known(v___x_1377_, 1);
v___x_1378_ = l_Lean_Meta_mkSorry(v_type_1375_, v___x_1374_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = lean_expr_instantiate1(v_body_1376_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_body_1376_);
v_e_1364_ = v___x_1380_;
goto _start;
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_dec_ref(v_body_1376_);
lean_dec_ref(v_currentFVars_1366_);
lean_dec(v_currentBinderIdx_1365_);
lean_dec_ref(v_p_1363_);
v_a_1382_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1378_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1378_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
lean_dec_ref(v_body_1376_);
lean_dec_ref(v_type_1375_);
lean_dec_ref(v_currentFVars_1366_);
lean_dec(v_currentBinderIdx_1365_);
lean_dec_ref(v_p_1363_);
v_a_1390_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1377_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1377_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
else
{
lean_object* v___x_1398_; 
lean_dec(v_currentBinderIdx_1365_);
lean_dec_ref(v_p_1363_);
v___x_1398_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(v_e_1373_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1405_ == 0)
{
lean_object* v_unused_1406_; 
v_unused_1406_ = lean_ctor_get(v___x_1398_, 0);
lean_dec(v_unused_1406_);
v___x_1400_ = v___x_1398_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_dec(v___x_1398_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_currentFVars_1366_);
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_currentFVars_1366_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v_currentFVars_1366_);
v_a_1407_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1398_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1398_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
else
{
lean_object* v_binderType_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_binderType_1415_ = lean_ctor_get(v_e_1373_, 1);
lean_inc_ref_n(v_binderType_1415_, 2);
v___x_1416_ = l_Lean_instInhabitedExpr;
v___x_1417_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs(v_binderType_1415_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1417_) == 0)
{
uint8_t v___y_1419_; uint8_t v___x_1440_; uint8_t v___x_1441_; 
lean_dec_ref_known(v___x_1417_, 1);
v___x_1440_ = l_Lean_Expr_binderInfo(v_e_1373_);
v___x_1441_ = l_Lean_BinderInfo_isInstImplicit(v___x_1440_);
if (v___x_1441_ == 0)
{
v___y_1419_ = v___x_1441_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
lean_inc_ref(v_p_1363_);
lean_inc_ref(v_binderType_1415_);
v___x_1442_ = lean_apply_1(v_p_1363_, v_binderType_1415_);
v___x_1443_ = lean_unbox(v___x_1442_);
v___y_1419_ = v___x_1443_;
goto v___jp_1418_;
}
v___jp_1418_:
{
if (v___y_1419_ == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = l_Lean_Meta_mkSorry(v_binderType_1415_, v___y_1419_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v_body_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v_body_1422_ = lean_ctor_get(v_e_1373_, 2);
lean_inc_ref(v_body_1422_);
lean_dec_ref(v_e_1373_);
v___x_1423_ = lean_expr_instantiate1(v_body_1422_, v_a_1421_);
lean_dec(v_a_1421_);
lean_dec_ref(v_body_1422_);
v___x_1424_ = lean_unsigned_to_nat(1u);
v___x_1425_ = lean_nat_add(v_currentBinderIdx_1365_, v___x_1424_);
lean_dec(v_currentBinderIdx_1365_);
v_e_1364_ = v___x_1423_;
v_currentBinderIdx_1365_ = v___x_1425_;
goto _start;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec_ref(v_e_1373_);
lean_dec_ref(v_currentFVars_1366_);
lean_dec(v_currentBinderIdx_1365_);
lean_dec_ref(v_p_1363_);
v_a_1427_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1420_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1420_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
else
{
lean_object* v___x_1435_; lean_object* v___f_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; 
lean_dec_ref(v_binderType_1415_);
v___x_1435_ = lean_unsigned_to_nat(1u);
v___f_1436_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1436_, 0, v___x_1416_);
lean_closure_set(v___f_1436_, 1, v_currentBinderIdx_1365_);
lean_closure_set(v___f_1436_, 2, v___x_1435_);
lean_closure_set(v___f_1436_, 3, v_currentFVars_1366_);
lean_closure_set(v___f_1436_, 4, v_p_1363_);
v___x_1437_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___closed__0));
v___x_1438_ = 0;
v___x_1439_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go_spec__0___redArg(v_e_1373_, v___x_1437_, v___f_1436_, v___x_1438_, v___x_1438_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
return v___x_1439_;
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec_ref(v_binderType_1415_);
lean_dec_ref(v_e_1373_);
lean_dec_ref(v_currentFVars_1366_);
lean_dec(v_currentBinderIdx_1365_);
lean_dec_ref(v_p_1363_);
v_a_1444_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1417_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1417_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___lam__0(lean_object* v___x_1452_, lean_object* v_currentBinderIdx_1453_, lean_object* v___x_1454_, lean_object* v_currentFVars_1455_, lean_object* v_p_1456_, lean_object* v_fvar_1457_, lean_object* v_e_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = lean_array_get_borrowed(v___x_1452_, v_fvar_1457_, v___x_1465_);
v___x_1467_ = l_Lean_Expr_fvarId_x21(v___x_1466_);
v___x_1468_ = lean_nat_add(v_currentBinderIdx_1453_, v___x_1454_);
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1467_);
lean_ctor_set(v___x_1469_, 1, v_currentBinderIdx_1453_);
v___x_1470_ = lean_array_push(v_currentFVars_1455_, v___x_1469_);
v___x_1471_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go(v_p_1456_, v_e_1458_, v___x_1468_, v___x_1470_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go___boxed(lean_object* v_p_1472_, lean_object* v_e_1473_, lean_object* v_currentBinderIdx_1474_, lean_object* v_currentFVars_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go(v_p_1472_, v_e_1473_, v_currentBinderIdx_1474_, v_currentFVars_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec(v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec_ref(v_a_1477_);
lean_dec(v_a_1476_);
return v_res_1482_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg(lean_object* v_k_1483_, lean_object* v_t_1484_){
_start:
{
if (lean_obj_tag(v_t_1484_) == 0)
{
lean_object* v_k_1485_; lean_object* v_l_1486_; lean_object* v_r_1487_; uint8_t v___x_1488_; 
v_k_1485_ = lean_ctor_get(v_t_1484_, 1);
v_l_1486_ = lean_ctor_get(v_t_1484_, 3);
v_r_1487_ = lean_ctor_get(v_t_1484_, 4);
v___x_1488_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1483_, v_k_1485_);
switch(v___x_1488_)
{
case 0:
{
v_t_1484_ = v_l_1486_;
goto _start;
}
case 1:
{
uint8_t v___x_1490_; 
v___x_1490_ = 1;
return v___x_1490_;
}
default: 
{
v_t_1484_ = v_r_1487_;
goto _start;
}
}
}
else
{
uint8_t v___x_1492_; 
v___x_1492_ = 0;
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg___boxed(lean_object* v_k_1493_, lean_object* v_t_1494_){
_start:
{
uint8_t v_res_1495_; lean_object* v_r_1496_; 
v_res_1495_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg(v_k_1493_, v_t_1494_);
lean_dec(v_t_1494_);
lean_dec(v_k_1493_);
v_r_1496_ = lean_box(v_res_1495_);
return v_r_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1(lean_object* v_val_1497_, lean_object* v_as_1498_, size_t v_i_1499_, size_t v_stop_1500_, lean_object* v_b_1501_){
_start:
{
lean_object* v___y_1503_; uint8_t v___x_1507_; 
v___x_1507_ = lean_usize_dec_eq(v_i_1499_, v_stop_1500_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; lean_object* v_fvarId_1509_; lean_object* v_idx_1510_; uint8_t v___x_1511_; 
v___x_1508_ = lean_array_uget_borrowed(v_as_1498_, v_i_1499_);
v_fvarId_1509_ = lean_ctor_get(v___x_1508_, 0);
v_idx_1510_ = lean_ctor_get(v___x_1508_, 1);
v___x_1511_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg(v_fvarId_1509_, v_val_1497_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; 
lean_inc(v_idx_1510_);
v___x_1512_ = lean_array_push(v_b_1501_, v_idx_1510_);
v___y_1503_ = v___x_1512_;
goto v___jp_1502_;
}
else
{
v___y_1503_ = v_b_1501_;
goto v___jp_1502_;
}
}
else
{
return v_b_1501_;
}
v___jp_1502_:
{
size_t v___x_1504_; size_t v___x_1505_; 
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = lean_usize_add(v_i_1499_, v___x_1504_);
v_i_1499_ = v___x_1505_;
v_b_1501_ = v___y_1503_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1___boxed(lean_object* v_val_1513_, lean_object* v_as_1514_, lean_object* v_i_1515_, lean_object* v_stop_1516_, lean_object* v_b_1517_){
_start:
{
size_t v_i_boxed_1518_; size_t v_stop_boxed_1519_; lean_object* v_res_1520_; 
v_i_boxed_1518_ = lean_unbox_usize(v_i_1515_);
lean_dec(v_i_1515_);
v_stop_boxed_1519_ = lean_unbox_usize(v_stop_1516_);
lean_dec(v_stop_1516_);
v_res_1520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1(v_val_1513_, v_as_1514_, v_i_boxed_1518_, v_stop_boxed_1519_, v_b_1517_);
lean_dec_ref(v_as_1514_);
lean_dec(v_val_1513_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1(lean_object* v_val_1521_, lean_object* v_as_1522_, lean_object* v_start_1523_, lean_object* v_stop_1524_){
_start:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere___closed__0));
v___x_1526_ = lean_nat_dec_lt(v_start_1523_, v_stop_1524_);
if (v___x_1526_ == 0)
{
return v___x_1525_;
}
else
{
lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1527_ = lean_array_get_size(v_as_1522_);
v___x_1528_ = lean_nat_dec_le(v_stop_1524_, v___x_1527_);
if (v___x_1528_ == 0)
{
uint8_t v___x_1529_; 
v___x_1529_ = lean_nat_dec_lt(v_start_1523_, v___x_1527_);
if (v___x_1529_ == 0)
{
return v___x_1525_;
}
else
{
size_t v___x_1530_; size_t v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_usize_of_nat(v_start_1523_);
v___x_1531_ = lean_usize_of_nat(v___x_1527_);
v___x_1532_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1(v_val_1521_, v_as_1522_, v___x_1530_, v___x_1531_, v___x_1525_);
return v___x_1532_;
}
}
else
{
size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; 
v___x_1533_ = lean_usize_of_nat(v_start_1523_);
v___x_1534_ = lean_usize_of_nat(v_stop_1524_);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1_spec__1(v_val_1521_, v_as_1522_, v___x_1533_, v___x_1534_, v___x_1525_);
return v___x_1535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1___boxed(lean_object* v_val_1536_, lean_object* v_as_1537_, lean_object* v_start_1538_, lean_object* v_stop_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1(v_val_1536_, v_as_1537_, v_start_1538_, v_stop_1539_);
lean_dec(v_stop_1539_);
lean_dec(v_start_1538_);
lean_dec_ref(v_as_1537_);
lean_dec(v_val_1536_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere(lean_object* v_p_1543_, lean_object* v_e_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1550_ = lean_box(1);
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___closed__0));
v___x_1553_ = lean_st_mk_ref(v___x_1550_);
v___x_1554_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_go(v_p_1543_, v_e_1544_, v___x_1551_, v___x_1552_, v___x_1553_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1565_; 
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1557_ = v___x_1554_;
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1554_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1559_ = lean_st_ref_get(v___x_1553_);
lean_dec(v___x_1553_);
v___x_1560_ = lean_array_get_size(v_a_1555_);
v___x_1561_ = l_Array_filterMapM___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__1(v___x_1559_, v_a_1555_, v___x_1551_, v___x_1560_);
lean_dec(v_a_1555_);
lean_dec(v___x_1559_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 0, v___x_1561_);
v___x_1563_ = v___x_1557_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec(v___x_1553_);
v_a_1566_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1554_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1554_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere___boxed(lean_object* v_p_1574_, lean_object* v_e_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere(v_p_1574_, v_e_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec(v_a_1577_);
lean_dec_ref(v_a_1576_);
return v_res_1581_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0(lean_object* v_00_u03b2_1582_, lean_object* v_k_1583_, lean_object* v_t_1584_){
_start:
{
uint8_t v___x_1585_; 
v___x_1585_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___redArg(v_k_1583_, v_t_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0___boxed(lean_object* v_00_u03b2_1586_, lean_object* v_k_1587_, lean_object* v_t_1588_){
_start:
{
uint8_t v_res_1589_; lean_object* v_r_1590_; 
v_res_1589_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere_spec__0(v_00_u03b2_1586_, v_k_1587_, v_t_1588_);
lean_dec(v_t_1588_);
lean_dec(v_k_1587_);
v_r_1590_ = lean_box(v_res_1589_);
return v_r_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0(lean_object* v_k_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v_b_1594_, lean_object* v_c_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
lean_inc(v___y_1599_);
lean_inc_ref(v___y_1598_);
lean_inc(v___y_1597_);
lean_inc_ref(v___y_1596_);
lean_inc(v___y_1593_);
lean_inc_ref(v___y_1592_);
v___x_1601_ = lean_apply_9(v_k_1591_, v_b_1594_, v_c_1595_, v___y_1592_, v___y_1593_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, lean_box(0));
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0___boxed(lean_object* v_k_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v_b_1605_, lean_object* v_c_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0(v_k_1602_, v___y_1603_, v___y_1604_, v_b_1605_, v_c_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg(lean_object* v_type_1613_, lean_object* v_maxFVars_x3f_1614_, lean_object* v_k_1615_, uint8_t v_cleanupAnnotations_1616_, uint8_t v_whnfType_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___f_1625_; lean_object* v___x_1626_; 
lean_inc(v___y_1619_);
lean_inc_ref(v___y_1618_);
v___f_1625_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1625_, 0, v_k_1615_);
lean_closure_set(v___f_1625_, 1, v___y_1618_);
lean_closure_set(v___f_1625_, 2, v___y_1619_);
v___x_1626_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1613_, v_maxFVars_x3f_1614_, v___f_1625_, v_cleanupAnnotations_1616_, v_whnfType_1617_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
if (lean_obj_tag(v___x_1626_) == 0)
{
return v___x_1626_;
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1626_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1626_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg___boxed(lean_object* v_type_1635_, lean_object* v_maxFVars_x3f_1636_, lean_object* v_k_1637_, lean_object* v_cleanupAnnotations_1638_, lean_object* v_whnfType_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1647_; uint8_t v_whnfType_boxed_1648_; lean_object* v_res_1649_; 
v_cleanupAnnotations_boxed_1647_ = lean_unbox(v_cleanupAnnotations_1638_);
v_whnfType_boxed_1648_ = lean_unbox(v_whnfType_1639_);
v_res_1649_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg(v_type_1635_, v_maxFVars_x3f_1636_, v_k_1637_, v_cleanupAnnotations_boxed_1647_, v_whnfType_boxed_1648_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2(lean_object* v_00_u03b1_1650_, lean_object* v_type_1651_, lean_object* v_maxFVars_x3f_1652_, lean_object* v_k_1653_, uint8_t v_cleanupAnnotations_1654_, uint8_t v_whnfType_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg(v_type_1651_, v_maxFVars_x3f_1652_, v_k_1653_, v_cleanupAnnotations_1654_, v_whnfType_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___boxed(lean_object* v_00_u03b1_1664_, lean_object* v_type_1665_, lean_object* v_maxFVars_x3f_1666_, lean_object* v_k_1667_, lean_object* v_cleanupAnnotations_1668_, lean_object* v_whnfType_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1677_; uint8_t v_whnfType_boxed_1678_; lean_object* v_res_1679_; 
v_cleanupAnnotations_boxed_1677_ = lean_unbox(v_cleanupAnnotations_1668_);
v_whnfType_boxed_1678_ = lean_unbox(v_whnfType_1669_);
v_res_1679_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2(v_00_u03b1_1664_, v_type_1665_, v_maxFVars_x3f_1666_, v_k_1667_, v_cleanupAnnotations_boxed_1677_, v_whnfType_boxed_1678_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
return v_res_1679_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0(lean_object* v_a_1680_, lean_object* v_as_1681_, size_t v_i_1682_, size_t v_stop_1683_){
_start:
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_usize_dec_eq(v_i_1682_, v_stop_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; uint8_t v___x_1686_; 
v___x_1685_ = lean_array_uget_borrowed(v_as_1681_, v_i_1682_);
v___x_1686_ = lean_nat_dec_eq(v_a_1680_, v___x_1685_);
if (v___x_1686_ == 0)
{
size_t v___x_1687_; size_t v___x_1688_; 
v___x_1687_ = ((size_t)1ULL);
v___x_1688_ = lean_usize_add(v_i_1682_, v___x_1687_);
v_i_1682_ = v___x_1688_;
goto _start;
}
else
{
return v___x_1686_;
}
}
else
{
uint8_t v___x_1690_; 
v___x_1690_ = 0;
return v___x_1690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0___boxed(lean_object* v_a_1691_, lean_object* v_as_1692_, lean_object* v_i_1693_, lean_object* v_stop_1694_){
_start:
{
size_t v_i_boxed_1695_; size_t v_stop_boxed_1696_; uint8_t v_res_1697_; lean_object* v_r_1698_; 
v_i_boxed_1695_ = lean_unbox_usize(v_i_1693_);
lean_dec(v_i_1693_);
v_stop_boxed_1696_ = lean_unbox_usize(v_stop_1694_);
lean_dec(v_stop_1694_);
v_res_1697_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0(v_a_1691_, v_as_1692_, v_i_boxed_1695_, v_stop_boxed_1696_);
lean_dec_ref(v_as_1692_);
lean_dec(v_a_1691_);
v_r_1698_ = lean_box(v_res_1697_);
return v_r_1698_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0(lean_object* v_as_1699_, lean_object* v_a_1700_){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = lean_unsigned_to_nat(0u);
v___x_1702_ = lean_array_get_size(v_as_1699_);
v___x_1703_ = lean_nat_dec_lt(v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
return v___x_1703_;
}
else
{
if (v___x_1703_ == 0)
{
return v___x_1703_;
}
else
{
size_t v___x_1704_; size_t v___x_1705_; uint8_t v___x_1706_; 
v___x_1704_ = ((size_t)0ULL);
v___x_1705_ = lean_usize_of_nat(v___x_1702_);
v___x_1706_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0_spec__0(v_a_1700_, v_as_1699_, v___x_1704_, v___x_1705_);
return v___x_1706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0___boxed(lean_object* v_as_1707_, lean_object* v_a_1708_){
_start:
{
uint8_t v_res_1709_; lean_object* v_r_1710_; 
v_res_1709_ = l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0(v_as_1707_, v_a_1708_);
lean_dec(v_a_1708_);
lean_dec_ref(v_as_1707_);
v_r_1710_ = lean_box(v_res_1709_);
return v_r_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg(lean_object* v___x_1711_, lean_object* v___x_1712_, lean_object* v___x_1713_, uint8_t v___x_1714_, lean_object* v_fvars_1715_, size_t v_sz_1716_, size_t v_i_1717_, lean_object* v_bs_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
uint8_t v___x_1724_; 
v___x_1724_ = lean_usize_dec_lt(v_i_1717_, v_sz_1716_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = l_unsafeCast___redArg(v_bs_1718_);
lean_dec_ref(v_bs_1718_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
else
{
uint8_t v___x_1727_; lean_object* v_v_1728_; lean_object* v___x_1729_; lean_object* v_bs_x27_1730_; lean_object* v___x_1731_; lean_object* v___y_1733_; lean_object* v___y_1734_; uint8_t v___y_1735_; lean_object* v___y_1743_; lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1727_ = lean_nat_dec_lt(v___x_1712_, v___x_1713_);
v_v_1728_ = lean_array_uget(v_bs_1718_, v_i_1717_);
v___x_1729_ = lean_unsigned_to_nat(0u);
v_bs_x27_1730_ = lean_array_uset(v_bs_1718_, v_i_1717_, v___x_1729_);
v___x_1731_ = l_unsafeCast___redArg(v_v_1728_);
lean_dec(v_v_1728_);
v___x_1746_ = lean_array_get_size(v_fvars_1715_);
v___x_1747_ = lean_nat_dec_lt(v___x_1731_, v___x_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_box(0);
v___y_1743_ = v___x_1748_;
v_a_1744_ = v___x_1748_;
goto v___jp_1742_;
}
else
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = lean_array_fget_borrowed(v_fvars_1715_, v___x_1731_);
lean_inc_n(v___x_1749_, 2);
v___x_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1749_);
lean_inc(v___y_1722_);
lean_inc_ref(v___y_1721_);
lean_inc(v___y_1720_);
lean_inc_ref(v___y_1719_);
v___x_1751_ = lean_infer_type(v___x_1749_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_a_1752_);
v___y_1743_ = v___x_1750_;
v_a_1744_ = v___x_1753_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec_ref_known(v___x_1750_, 1);
lean_dec(v___x_1731_);
lean_dec_ref(v_bs_x27_1730_);
v_a_1754_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1751_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1751_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
v___jp_1732_:
{
lean_object* v___x_1736_; size_t v___x_1737_; size_t v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1736_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1736_, 0, v___y_1733_);
lean_ctor_set(v___x_1736_, 1, v___y_1734_);
lean_ctor_set(v___x_1736_, 2, v___x_1731_);
lean_ctor_set_uint8(v___x_1736_, sizeof(void*)*3, v___y_1735_);
v___x_1737_ = ((size_t)1ULL);
v___x_1738_ = lean_usize_add(v_i_1717_, v___x_1737_);
v___x_1739_ = l_unsafeCast___redArg(v___x_1736_);
lean_dec_ref_known(v___x_1736_, 3);
v___x_1740_ = lean_array_uset(v_bs_x27_1730_, v_i_1717_, v___x_1739_);
v_i_1717_ = v___x_1738_;
v_bs_1718_ = v___x_1740_;
goto _start;
}
v___jp_1742_:
{
uint8_t v___x_1745_; 
v___x_1745_ = l_Array_contains___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__0(v___x_1711_, v___x_1731_);
if (v___x_1745_ == 0)
{
v___y_1733_ = v___y_1743_;
v___y_1734_ = v_a_1744_;
v___y_1735_ = v___x_1727_;
goto v___jp_1732_;
}
else
{
v___y_1733_ = v___y_1743_;
v___y_1734_ = v_a_1744_;
v___y_1735_ = v___x_1714_;
goto v___jp_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg___boxed(lean_object* v___x_1762_, lean_object* v___x_1763_, lean_object* v___x_1764_, lean_object* v___x_1765_, lean_object* v_fvars_1766_, lean_object* v_sz_1767_, lean_object* v_i_1768_, lean_object* v_bs_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
uint8_t v___x_3301__boxed_1775_; size_t v_sz_boxed_1776_; size_t v_i_boxed_1777_; lean_object* v_res_1778_; 
v___x_3301__boxed_1775_ = lean_unbox(v___x_1765_);
v_sz_boxed_1776_ = lean_unbox_usize(v_sz_1767_);
lean_dec(v_sz_1767_);
v_i_boxed_1777_ = lean_unbox_usize(v_i_1768_);
lean_dec(v_i_1768_);
v_res_1778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg(v___x_1762_, v___x_1763_, v___x_1764_, v___x_3301__boxed_1775_, v_fvars_1766_, v_sz_boxed_1776_, v_i_boxed_1777_, v_bs_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec_ref(v_fvars_1766_);
lean_dec(v___x_1764_);
lean_dec(v___x_1763_);
lean_dec_ref(v___x_1762_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1(lean_object* v___x_1779_, lean_object* v___x_1780_, lean_object* v___x_1781_, uint8_t v___x_1782_, lean_object* v_fvars_1783_, size_t v_sz_1784_, size_t v_i_1785_, lean_object* v_bs_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___redArg(v___x_1779_, v___x_1780_, v___x_1781_, v___x_1782_, v_fvars_1783_, v_sz_1784_, v_i_1785_, v_bs_1786_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___boxed(lean_object* v___x_1795_, lean_object* v___x_1796_, lean_object* v___x_1797_, lean_object* v___x_1798_, lean_object* v_fvars_1799_, lean_object* v_sz_1800_, lean_object* v_i_1801_, lean_object* v_bs_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
uint8_t v___x_3400__boxed_1810_; size_t v_sz_boxed_1811_; size_t v_i_boxed_1812_; lean_object* v_res_1813_; 
v___x_3400__boxed_1810_ = lean_unbox(v___x_1798_);
v_sz_boxed_1811_ = lean_unbox_usize(v_sz_1800_);
lean_dec(v_sz_1800_);
v_i_boxed_1812_ = lean_unbox_usize(v_i_1801_);
lean_dec(v_i_1801_);
v_res_1813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1(v___x_1795_, v___x_1796_, v___x_1797_, v___x_3400__boxed_1810_, v_fvars_1799_, v_sz_boxed_1811_, v_i_boxed_1812_, v_bs_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec_ref(v_fvars_1799_);
lean_dec(v___x_1797_);
lean_dec(v___x_1796_);
lean_dec_ref(v___x_1795_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0(lean_object* v_p_1816_, lean_object* v_type_1817_, lean_object* v_a_1818_, lean_object* v___x_1819_, lean_object* v___x_1820_, uint8_t v___x_1821_, lean_object* v_logOnUnused_1822_, lean_object* v_fvars_1823_, lean_object* v_x_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v___x_1832_; size_t v_sz_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_3177__overap_1839_; lean_object* v___x_1840_; 
v___x_1832_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_getUnusedForallInstanceBinderIdxsWhere(v_p_1816_, v_type_1817_);
v_sz_1833_ = lean_array_size(v_a_1818_);
v___x_1834_ = l_unsafeCast___redArg(v_a_1818_);
v___x_1835_ = lean_box(v___x_1821_);
v___x_1836_ = lean_box_usize(v_sz_1833_);
v___x_1837_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed__const__1));
v___x_1838_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__1___boxed), 15, 8);
lean_closure_set(v___x_1838_, 0, v___x_1832_);
lean_closure_set(v___x_1838_, 1, v___x_1819_);
lean_closure_set(v___x_1838_, 2, v___x_1820_);
lean_closure_set(v___x_1838_, 3, v___x_1835_);
lean_closure_set(v___x_1838_, 4, v_fvars_1823_);
lean_closure_set(v___x_1838_, 5, v___x_1836_);
lean_closure_set(v___x_1838_, 6, v___x_1837_);
lean_closure_set(v___x_1838_, 7, v___x_1834_);
v___x_3177__overap_1839_ = l_unsafeCast___redArg(v___x_1838_);
lean_dec_ref(v___x_1838_);
lean_inc(v___y_1830_);
lean_inc_ref(v___y_1829_);
lean_inc(v___y_1828_);
lean_inc_ref(v___y_1827_);
lean_inc(v___y_1826_);
lean_inc_ref(v___y_1825_);
v___x_1840_ = lean_apply_7(v___x_3177__overap_1839_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, lean_box(0));
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
lean_inc(v___y_1830_);
lean_inc_ref(v___y_1829_);
lean_inc(v___y_1828_);
lean_inc_ref(v___y_1827_);
lean_inc(v___y_1826_);
lean_inc_ref(v___y_1825_);
v___x_1842_ = lean_apply_8(v_logOnUnused_1822_, v_a_1841_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, lean_box(0));
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec_ref(v_logOnUnused_1822_);
v_a_1843_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1840_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed(lean_object* v_p_1851_, lean_object* v_type_1852_, lean_object* v_a_1853_, lean_object* v___x_1854_, lean_object* v___x_1855_, lean_object* v___x_1856_, lean_object* v_logOnUnused_1857_, lean_object* v_fvars_1858_, lean_object* v_x_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
uint8_t v___x_3435__boxed_1867_; lean_object* v_res_1868_; 
v___x_3435__boxed_1867_ = lean_unbox(v___x_1856_);
v_res_1868_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0(v_p_1851_, v_type_1852_, v_a_1853_, v___x_1854_, v___x_1855_, v___x_3435__boxed_1867_, v_logOnUnused_1857_, v_fvars_1858_, v_x_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec_ref(v_x_1859_);
lean_dec_ref(v_a_1853_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere(lean_object* v_decl_1869_, lean_object* v_p_1870_, lean_object* v_logOnUnused_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_){
_start:
{
lean_object* v_type_1879_; lean_object* v___x_1880_; 
v_type_1879_ = lean_ctor_get(v_decl_1869_, 2);
lean_inc_ref_n(v_type_1879_, 2);
lean_dec_ref(v_decl_1869_);
lean_inc_ref(v_p_1870_);
v___x_1880_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectUnnecessaryInstanceBinderIdxsWhere(v_p_1870_, v_type_1879_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1904_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1883_ = v___x_1880_;
v_isShared_1884_ = v_isSharedCheck_1904_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1880_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1904_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; 
v___x_1885_ = lean_array_get_size(v_a_1881_);
v___x_1886_ = lean_unsigned_to_nat(1u);
v___x_1887_ = lean_nat_sub(v___x_1885_, v___x_1886_);
v___x_1888_ = lean_nat_dec_lt(v___x_1887_, v___x_1885_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1891_; 
lean_dec(v___x_1887_);
lean_dec(v_a_1881_);
lean_dec_ref(v_type_1879_);
lean_dec_ref(v_logOnUnused_1871_);
lean_dec_ref(v_p_1870_);
v___x_1889_ = lean_box(0);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 0, v___x_1889_);
v___x_1891_ = v___x_1883_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v___x_1889_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
else
{
uint8_t v___x_1893_; 
v___x_1893_ = l_Lean_Expr_hasSorry(v_type_1879_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___f_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
lean_del_object(v___x_1883_);
v___x_1894_ = lean_box(v___x_1893_);
lean_inc(v___x_1887_);
lean_inc(v_a_1881_);
lean_inc_ref(v_type_1879_);
v___f_1895_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___lam__0___boxed), 16, 7);
lean_closure_set(v___f_1895_, 0, v_p_1870_);
lean_closure_set(v___f_1895_, 1, v_type_1879_);
lean_closure_set(v___f_1895_, 2, v_a_1881_);
lean_closure_set(v___f_1895_, 3, v___x_1887_);
lean_closure_set(v___f_1895_, 4, v___x_1885_);
lean_closure_set(v___f_1895_, 5, v___x_1894_);
lean_closure_set(v___f_1895_, 6, v_logOnUnused_1871_);
v___x_1896_ = lean_array_fget(v_a_1881_, v___x_1887_);
lean_dec(v___x_1887_);
lean_dec(v_a_1881_);
v___x_1897_ = lean_nat_add(v___x_1896_, v___x_1886_);
lean_dec(v___x_1896_);
v___x_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
v___x_1899_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere_spec__2___redArg(v_type_1879_, v___x_1898_, v___f_1895_, v___x_1888_, v___x_1893_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
return v___x_1899_;
}
else
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
lean_dec(v___x_1887_);
lean_dec(v_a_1881_);
lean_dec_ref(v_type_1879_);
lean_dec_ref(v_logOnUnused_1871_);
lean_dec_ref(v_p_1870_);
v___x_1900_ = lean_box(0);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 0, v___x_1900_);
v___x_1902_ = v___x_1883_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_dec_ref(v_type_1879_);
lean_dec_ref(v_logOnUnused_1871_);
lean_dec_ref(v_p_1870_);
v_a_1905_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1880_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1880_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere___boxed(lean_object* v_decl_1913_, lean_object* v_p_1914_, lean_object* v_logOnUnused_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere(v_decl_1913_, v_p_1914_, v_logOnUnused_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
lean_dec(v_a_1921_);
lean_dec_ref(v_a_1920_);
lean_dec(v_a_1919_);
lean_dec_ref(v_a_1918_);
lean_dec(v_a_1917_);
lean_dec_ref(v_a_1916_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems_spec__0(lean_object* v_env_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_){
_start:
{
if (lean_obj_tag(v_a_1925_) == 0)
{
lean_object* v___x_1927_; 
lean_dec_ref(v_env_1924_);
v___x_1927_ = lean_array_to_list(v_a_1926_);
return v___x_1927_;
}
else
{
lean_object* v_head_1928_; lean_object* v_tail_1929_; uint8_t v___x_1930_; lean_object* v___x_1931_; 
v_head_1928_ = lean_ctor_get(v_a_1925_, 0);
lean_inc(v_head_1928_);
v_tail_1929_ = lean_ctor_get(v_a_1925_, 1);
lean_inc(v_tail_1929_);
lean_dec_ref_known(v_a_1925_, 2);
v___x_1930_ = 0;
lean_inc_ref(v_env_1924_);
v___x_1931_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Environment_findTheoremConstVal_x3f(v_env_1924_, v_head_1928_, v___x_1930_);
if (lean_obj_tag(v___x_1931_) == 0)
{
v_a_1925_ = v_tail_1929_;
goto _start;
}
else
{
lean_object* v_val_1933_; lean_object* v___x_1934_; 
v_val_1933_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_val_1933_);
lean_dec_ref_known(v___x_1931_, 1);
v___x_1934_ = lean_array_push(v_a_1926_, v_val_1933_);
v_a_1925_ = v_tail_1929_;
v_a_1926_ = v___x_1934_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(lean_object* v_t_1938_, lean_object* v_env_1939_){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = l_Lean_Linter_getDeclsByBody(v_t_1938_);
v___x_1941_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems___closed__0));
v___x_1942_ = l_List_filterMapTR_go___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems_spec__0(v_env_1939_, v___x_1940_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0(lean_object* v_n_1961_){
_start:
{
uint8_t v___y_1963_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__9));
v___x_1973_ = lean_name_eq(v_n_1961_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; uint8_t v___x_1975_; 
v___x_1974_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__11));
v___x_1975_ = lean_name_eq(v_n_1961_, v___x_1974_);
v___y_1963_ = v___x_1975_;
goto v___jp_1962_;
}
else
{
v___y_1963_ = v___x_1973_;
goto v___jp_1962_;
}
v___jp_1962_:
{
if (v___y_1963_ == 0)
{
lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1964_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__1));
v___x_1965_ = lean_name_eq(v_n_1961_, v___x_1964_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; uint8_t v___x_1967_; 
v___x_1966_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__3));
v___x_1967_ = lean_name_eq(v_n_1961_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1968_; uint8_t v___x_1969_; 
v___x_1968_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__5));
v___x_1969_ = lean_name_eq(v_n_1961_, v___x_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1970_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__7));
v___x_1971_ = lean_name_eq(v_n_1961_, v___x_1970_);
return v___x_1971_;
}
else
{
return v___x_1969_;
}
}
else
{
return v___x_1967_;
}
}
else
{
return v___x_1965_;
}
}
else
{
return v___y_1963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___boxed(lean_object* v_n_1976_){
_start:
{
uint8_t v_res_1977_; lean_object* v_r_1978_; 
v_res_1977_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0(v_n_1976_);
lean_dec(v_n_1976_);
v_r_1978_ = lean_box(v_res_1977_);
return v_r_1978_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant(lean_object* v_type_1980_){
_start:
{
lean_object* v___f_1981_; uint8_t v___x_1982_; 
v___f_1981_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___closed__0));
v___x_1982_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_isAppOrForallOfConstP(v___f_1981_, v_type_1980_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___boxed(lean_object* v_type_1983_){
_start:
{
uint8_t v_res_1984_; lean_object* v_r_1985_; 
v_res_1984_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant(v_type_1983_);
v_r_1985_ = lean_box(v_res_1984_);
return v_r_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg(lean_object* v___y_1986_){
_start:
{
lean_object* v___x_1988_; lean_object* v_infoState_1989_; lean_object* v_trees_1990_; lean_object* v___x_1991_; 
v___x_1988_ = lean_st_ref_get(v___y_1986_);
v_infoState_1989_ = lean_ctor_get(v___x_1988_, 8);
lean_inc_ref(v_infoState_1989_);
lean_dec(v___x_1988_);
v_trees_1990_ = lean_ctor_get(v_infoState_1989_, 2);
lean_inc_ref(v_trees_1990_);
lean_dec_ref(v_infoState_1989_);
v___x_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1991_, 0, v_trees_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg___boxed(lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg(v___y_1992_);
lean_dec(v___y_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1(lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg(v___y_1996_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___boxed(lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1(v___y_1999_, v___y_2000_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(uint8_t v___x_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
if (lean_obj_tag(v_a_2005_) == 0)
{
lean_object* v___x_2007_; 
v___x_2007_ = l_List_reverse___redArg(v_a_2006_);
return v___x_2007_;
}
else
{
lean_object* v_head_2008_; lean_object* v_tail_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2027_; 
v_head_2008_ = lean_ctor_get(v_a_2005_, 0);
v_tail_2009_ = lean_ctor_get(v_a_2005_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_a_2005_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2011_ = v_a_2005_;
v_isShared_2012_ = v_isSharedCheck_2027_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_tail_2009_);
lean_inc(v_head_2008_);
lean_dec(v_a_2005_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2027_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v_name_2013_; lean_object* v_type_2014_; lean_object* v___x_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_name_2013_ = lean_ctor_get(v_head_2008_, 0);
v_type_2014_ = lean_ctor_get(v_head_2008_, 2);
v___x_2023_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_isDecidableVariant___lam__0___closed__9));
lean_inc(v_name_2013_);
v___x_2024_ = l_Lean_privateToUserName(v_name_2013_);
v___x_2025_ = l_Lean_Name_isPrefixOf(v___x_2023_, v___x_2024_);
lean_dec(v___x_2024_);
if (v___x_2025_ == 0)
{
goto v___jp_2015_;
}
else
{
if (v___x_2004_ == 0)
{
lean_del_object(v___x_2011_);
lean_dec(v_head_2008_);
v_a_2005_ = v_tail_2009_;
goto _start;
}
else
{
goto v___jp_2015_;
}
}
v___jp_2015_:
{
lean_object* v___x_2016_; uint8_t v___x_2017_; 
v___x_2016_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___closed__0));
lean_inc_ref(v_type_2014_);
v___x_2017_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Expr_hasInstanceBinderOf(v___x_2016_, v_type_2014_);
if (v___x_2017_ == 0)
{
lean_del_object(v___x_2011_);
lean_dec(v_head_2008_);
v_a_2005_ = v_tail_2009_;
goto _start;
}
else
{
lean_object* v___x_2020_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 1, v_a_2006_);
v___x_2020_ = v___x_2011_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_head_2008_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_a_2006_);
v___x_2020_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
v_a_2005_ = v_tail_2009_;
v_a_2006_ = v___x_2020_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___boxed(lean_object* v___x_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
uint8_t v___x_11503__boxed_2031_; lean_object* v_res_2032_; 
v___x_11503__boxed_2031_ = lean_unbox(v___x_2028_);
v_res_2032_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(v___x_11503__boxed_2031_, v_a_2029_, v_a_2030_);
return v_res_2032_;
}
}
static lean_object* _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = lean_box(0);
v___x_2034_ = l_unsafeCast___redArg(v___x_2033_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg(lean_object* v_o_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v_env_2040_; lean_object* v___x_2041_; lean_object* v_toEnvExtension_2042_; lean_object* v_asyncMode_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v_merged_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2054_; 
v___x_2038_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2039_ = lean_st_ref_get(v___y_2036_);
v_env_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc_ref(v_env_2040_);
lean_dec(v___x_2039_);
v___x_2041_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2042_ = lean_ctor_get(v___x_2041_, 0);
v_asyncMode_2043_ = lean_ctor_get(v_toEnvExtension_2042_, 2);
v___x_2044_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_2045_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2038_, v___x_2041_, v_env_2040_, v_asyncMode_2043_, v___x_2044_);
v_merged_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2054_ == 0)
{
lean_object* v_unused_2055_; 
v_unused_2055_ = lean_ctor_get(v___x_2045_, 1);
lean_dec(v_unused_2055_);
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_merged_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2051_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v_merged_2046_);
lean_ctor_set(v___x_2048_, 0, v_o_2035_);
v___x_2051_ = v___x_2048_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_o_2035_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_merged_2046_);
v___x_2051_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v___x_2052_; 
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
return v___x_2052_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_o_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg(v_o_2056_, v___y_2057_);
lean_dec(v___y_2057_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3(lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_toCold_2067_; lean_object* v_options_2068_; lean_object* v___x_2069_; 
v_toCold_2067_ = lean_ctor_get(v___y_2064_, 0);
v_options_2068_ = lean_ctor_get(v_toCold_2067_, 2);
lean_inc_ref(v_options_2068_);
v___x_2069_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg(v_options_2068_, v___y_2065_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3___boxed(lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3(v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v___y_2071_);
lean_dec_ref(v___y_2070_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13(lean_object* v_msgData_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v___x_2084_; lean_object* v_env_2085_; lean_object* v___x_2086_; lean_object* v_toCold_2087_; lean_object* v_mctx_2088_; lean_object* v_lctx_2089_; lean_object* v_options_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2084_ = lean_st_ref_get(v___y_2082_);
v_env_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc_ref(v_env_2085_);
lean_dec(v___x_2084_);
v___x_2086_ = lean_st_ref_get(v___y_2080_);
v_toCold_2087_ = lean_ctor_get(v___y_2081_, 0);
v_mctx_2088_ = lean_ctor_get(v___x_2086_, 0);
lean_inc_ref(v_mctx_2088_);
lean_dec(v___x_2086_);
v_lctx_2089_ = lean_ctor_get(v___y_2079_, 2);
v_options_2090_ = lean_ctor_get(v_toCold_2087_, 2);
lean_inc_ref(v_options_2090_);
lean_inc_ref(v_lctx_2089_);
v___x_2091_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2091_, 0, v_env_2085_);
lean_ctor_set(v___x_2091_, 1, v_mctx_2088_);
lean_ctor_set(v___x_2091_, 2, v_lctx_2089_);
lean_ctor_set(v___x_2091_, 3, v_options_2090_);
v___x_2092_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v_msgData_2078_);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13___boxed(lean_object* v_msgData_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13(v_msgData_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
return v_res_2100_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14(lean_object* v_opts_2101_, lean_object* v_opt_2102_){
_start:
{
lean_object* v_name_2103_; lean_object* v_defValue_2104_; lean_object* v_map_2105_; lean_object* v___x_2106_; 
v_name_2103_ = lean_ctor_get(v_opt_2102_, 0);
v_defValue_2104_ = lean_ctor_get(v_opt_2102_, 1);
v_map_2105_ = lean_ctor_get(v_opts_2101_, 0);
v___x_2106_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2105_, v_name_2103_);
if (lean_obj_tag(v___x_2106_) == 0)
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_unbox(v_defValue_2104_);
return v___x_2107_;
}
else
{
lean_object* v_val_2108_; 
v_val_2108_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_val_2108_);
lean_dec_ref_known(v___x_2106_, 1);
if (lean_obj_tag(v_val_2108_) == 1)
{
uint8_t v_v_2109_; 
v_v_2109_ = lean_ctor_get_uint8(v_val_2108_, 0);
lean_dec_ref_known(v_val_2108_, 0);
return v_v_2109_;
}
else
{
uint8_t v___x_2110_; 
lean_dec(v_val_2108_);
v___x_2110_ = lean_unbox(v_defValue_2104_);
return v___x_2110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14___boxed(lean_object* v_opts_2111_, lean_object* v_opt_2112_){
_start:
{
uint8_t v_res_2113_; lean_object* v_r_2114_; 
v_res_2113_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14(v_opts_2111_, v_opt_2112_);
lean_dec_ref(v_opt_2112_);
lean_dec_ref(v_opts_2111_);
v_r_2114_ = lean_box(v_res_2113_);
return v_r_2114_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0(uint8_t v_suppressElabErrors_2123_, uint8_t v___y_2124_, lean_object* v_x_2125_){
_start:
{
if (lean_obj_tag(v_x_2125_) == 1)
{
lean_object* v_pre_2126_; 
v_pre_2126_ = lean_ctor_get(v_x_2125_, 0);
switch(lean_obj_tag(v_pre_2126_))
{
case 1:
{
lean_object* v_pre_2127_; 
v_pre_2127_ = lean_ctor_get(v_pre_2126_, 0);
switch(lean_obj_tag(v_pre_2127_))
{
case 0:
{
lean_object* v_str_2128_; lean_object* v_str_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; 
v_str_2128_ = lean_ctor_get(v_x_2125_, 1);
v_str_2129_ = lean_ctor_get(v_pre_2126_, 1);
v___x_2130_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__0));
v___x_2131_ = lean_string_dec_eq(v_str_2129_, v___x_2130_);
if (v___x_2131_ == 0)
{
lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2132_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__1));
v___x_2133_ = lean_string_dec_eq(v_str_2129_, v___x_2132_);
if (v___x_2133_ == 0)
{
return v___x_2133_;
}
else
{
lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2134_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__2));
v___x_2135_ = lean_string_dec_eq(v_str_2128_, v___x_2134_);
if (v___x_2135_ == 0)
{
return v___x_2135_;
}
else
{
return v_suppressElabErrors_2123_;
}
}
}
else
{
lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2136_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__3));
v___x_2137_ = lean_string_dec_eq(v_str_2128_, v___x_2136_);
if (v___x_2137_ == 0)
{
return v___x_2137_;
}
else
{
return v_suppressElabErrors_2123_;
}
}
}
case 1:
{
lean_object* v_pre_2138_; 
v_pre_2138_ = lean_ctor_get(v_pre_2127_, 0);
if (lean_obj_tag(v_pre_2138_) == 0)
{
lean_object* v_str_2139_; lean_object* v_str_2140_; lean_object* v_str_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; 
v_str_2139_ = lean_ctor_get(v_x_2125_, 1);
v_str_2140_ = lean_ctor_get(v_pre_2126_, 1);
v_str_2141_ = lean_ctor_get(v_pre_2127_, 1);
v___x_2142_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__4));
v___x_2143_ = lean_string_dec_eq(v_str_2141_, v___x_2142_);
if (v___x_2143_ == 0)
{
return v___x_2143_;
}
else
{
lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2144_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__5));
v___x_2145_ = lean_string_dec_eq(v_str_2140_, v___x_2144_);
if (v___x_2145_ == 0)
{
return v___x_2145_;
}
else
{
lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2146_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__6));
v___x_2147_ = lean_string_dec_eq(v_str_2139_, v___x_2146_);
if (v___x_2147_ == 0)
{
return v___x_2147_;
}
else
{
return v_suppressElabErrors_2123_;
}
}
}
}
else
{
return v___y_2124_;
}
}
default: 
{
return v___y_2124_;
}
}
}
case 0:
{
lean_object* v_str_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v_str_2148_ = lean_ctor_get(v_x_2125_, 1);
v___x_2149_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___closed__7));
v___x_2150_ = lean_string_dec_eq(v_str_2148_, v___x_2149_);
if (v___x_2150_ == 0)
{
return v___x_2150_;
}
else
{
return v_suppressElabErrors_2123_;
}
}
default: 
{
return v___y_2124_;
}
}
}
else
{
return v___y_2124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_2151_, lean_object* v___y_2152_, lean_object* v_x_2153_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2154_; uint8_t v___y_11665__boxed_2155_; uint8_t v_res_2156_; lean_object* v_r_2157_; 
v_suppressElabErrors_boxed_2154_ = lean_unbox(v_suppressElabErrors_2151_);
v___y_11665__boxed_2155_ = lean_unbox(v___y_2152_);
v_res_2156_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0(v_suppressElabErrors_boxed_2154_, v___y_11665__boxed_2155_, v_x_2153_);
lean_dec(v_x_2153_);
v_r_2157_ = lean_box(v_res_2156_);
return v_r_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg(lean_object* v_ref_2158_, lean_object* v_msgData_2159_, uint8_t v_severity_2160_, uint8_t v_isSilent_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; uint8_t v___y_2172_; lean_object* v___y_2173_; uint8_t v___y_2174_; lean_object* v_currNamespace_2175_; lean_object* v_openDecls_2176_; lean_object* v___y_2177_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___y_2208_; uint8_t v___y_2209_; uint8_t v___y_2210_; uint8_t v___y_2211_; lean_object* v___y_2212_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; uint8_t v___y_2236_; uint8_t v___y_2237_; uint8_t v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2243_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2248_; uint8_t v___y_2249_; uint8_t v___y_2250_; uint8_t v___y_2251_; uint8_t v___x_2256_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2261_; lean_object* v___y_2262_; lean_object* v___y_2263_; uint8_t v___y_2264_; uint8_t v___y_2265_; uint8_t v___y_2266_; uint8_t v___y_2268_; uint8_t v___x_2286_; 
v___x_2256_ = 2;
v___x_2286_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2160_, v___x_2256_);
if (v___x_2286_ == 0)
{
v___y_2268_ = v___x_2286_;
goto v___jp_2267_;
}
else
{
uint8_t v___x_2287_; 
lean_inc_ref(v_msgData_2159_);
v___x_2287_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2159_);
v___y_2268_ = v___x_2287_;
goto v___jp_2267_;
}
v___jp_2167_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v_env_2182_; lean_object* v_nextMacroScope_2183_; lean_object* v_ngen_2184_; lean_object* v_auxDeclNGen_2185_; lean_object* v_traceState_2186_; lean_object* v_cache_2187_; lean_object* v_messages_2188_; lean_object* v_infoState_2189_; lean_object* v_snapshotTasks_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2201_; 
lean_inc(v_openDecls_2176_);
lean_inc(v_currNamespace_2175_);
v___x_2178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_currNamespace_2175_);
lean_ctor_set(v___x_2178_, 1, v_openDecls_2176_);
v___x_2179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
lean_ctor_set(v___x_2179_, 1, v___y_2170_);
lean_inc_ref(v___y_2171_);
lean_inc_ref(v___y_2168_);
v___x_2180_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2180_, 0, v___y_2168_);
lean_ctor_set(v___x_2180_, 1, v___y_2173_);
lean_ctor_set(v___x_2180_, 2, v___y_2169_);
lean_ctor_set(v___x_2180_, 3, v___y_2171_);
lean_ctor_set(v___x_2180_, 4, v___x_2179_);
lean_ctor_set_uint8(v___x_2180_, sizeof(void*)*5, v___y_2174_);
lean_ctor_set_uint8(v___x_2180_, sizeof(void*)*5 + 1, v___y_2172_);
lean_ctor_set_uint8(v___x_2180_, sizeof(void*)*5 + 2, v_isSilent_2161_);
v___x_2181_ = lean_st_ref_take(v___y_2177_);
v_env_2182_ = lean_ctor_get(v___x_2181_, 0);
v_nextMacroScope_2183_ = lean_ctor_get(v___x_2181_, 1);
v_ngen_2184_ = lean_ctor_get(v___x_2181_, 2);
v_auxDeclNGen_2185_ = lean_ctor_get(v___x_2181_, 3);
v_traceState_2186_ = lean_ctor_get(v___x_2181_, 4);
v_cache_2187_ = lean_ctor_get(v___x_2181_, 5);
v_messages_2188_ = lean_ctor_get(v___x_2181_, 6);
v_infoState_2189_ = lean_ctor_get(v___x_2181_, 7);
v_snapshotTasks_2190_ = lean_ctor_get(v___x_2181_, 8);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2192_ = v___x_2181_;
v_isShared_2193_ = v_isSharedCheck_2201_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_snapshotTasks_2190_);
lean_inc(v_infoState_2189_);
lean_inc(v_messages_2188_);
lean_inc(v_cache_2187_);
lean_inc(v_traceState_2186_);
lean_inc(v_auxDeclNGen_2185_);
lean_inc(v_ngen_2184_);
lean_inc(v_nextMacroScope_2183_);
lean_inc(v_env_2182_);
lean_dec(v___x_2181_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2201_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2197_; 
v___x_2194_ = lean_box(0);
v___x_2195_ = l_Lean_MessageLog_add(v___x_2180_, v_messages_2188_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 6, v___x_2195_);
v___x_2197_ = v___x_2192_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_env_2182_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v_nextMacroScope_2183_);
lean_ctor_set(v_reuseFailAlloc_2200_, 2, v_ngen_2184_);
lean_ctor_set(v_reuseFailAlloc_2200_, 3, v_auxDeclNGen_2185_);
lean_ctor_set(v_reuseFailAlloc_2200_, 4, v_traceState_2186_);
lean_ctor_set(v_reuseFailAlloc_2200_, 5, v_cache_2187_);
lean_ctor_set(v_reuseFailAlloc_2200_, 6, v___x_2195_);
lean_ctor_set(v_reuseFailAlloc_2200_, 7, v_infoState_2189_);
lean_ctor_set(v_reuseFailAlloc_2200_, 8, v_snapshotTasks_2190_);
v___x_2197_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = lean_st_ref_put(v___y_2177_, v___x_2197_);
v___x_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2194_);
return v___x_2199_;
}
}
}
v___jp_2202_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2228_; 
v___x_2213_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2159_);
v___x_2214_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__13(v___x_2213_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2228_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2228_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_inc_ref_n(v___y_2208_, 2);
v___x_2219_ = l_Lean_FileMap_toPosition(v___y_2208_, v___y_2207_);
lean_dec(v___y_2207_);
v___x_2220_ = l_Lean_FileMap_toPosition(v___y_2208_, v___y_2212_);
lean_dec(v___y_2212_);
v___x_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
v___x_2222_ = ((lean_object*)(l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg___closed__4));
if (v___y_2210_ == 0)
{
lean_del_object(v___x_2217_);
lean_dec_ref(v___y_2205_);
v___y_2168_ = v___y_2206_;
v___y_2169_ = v___x_2221_;
v___y_2170_ = v_a_2215_;
v___y_2171_ = v___x_2222_;
v___y_2172_ = v___y_2209_;
v___y_2173_ = v___x_2219_;
v___y_2174_ = v___y_2211_;
v_currNamespace_2175_ = v___y_2203_;
v_openDecls_2176_ = v___y_2204_;
v___y_2177_ = v___y_2165_;
goto v___jp_2167_;
}
else
{
uint8_t v___x_2223_; 
lean_inc(v_a_2215_);
v___x_2223_ = l_Lean_MessageData_hasTag(v___y_2205_, v_a_2215_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
lean_dec_ref_known(v___x_2221_, 1);
lean_dec_ref(v___x_2219_);
lean_dec(v_a_2215_);
v___x_2224_ = lean_box(0);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2224_);
v___x_2226_ = v___x_2217_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
else
{
lean_del_object(v___x_2217_);
v___y_2168_ = v___y_2206_;
v___y_2169_ = v___x_2221_;
v___y_2170_ = v_a_2215_;
v___y_2171_ = v___x_2222_;
v___y_2172_ = v___y_2209_;
v___y_2173_ = v___x_2219_;
v___y_2174_ = v___y_2211_;
v_currNamespace_2175_ = v___y_2203_;
v_openDecls_2176_ = v___y_2204_;
v___y_2177_ = v___y_2165_;
goto v___jp_2167_;
}
}
}
}
v___jp_2229_:
{
lean_object* v___x_2240_; 
v___x_2240_ = l_Lean_Syntax_getTailPos_x3f(v___y_2234_, v___y_2238_);
lean_dec(v___y_2234_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_inc(v___y_2239_);
v___y_2203_ = v___y_2230_;
v___y_2204_ = v___y_2231_;
v___y_2205_ = v___y_2232_;
v___y_2206_ = v___y_2233_;
v___y_2207_ = v___y_2239_;
v___y_2208_ = v___y_2235_;
v___y_2209_ = v___y_2236_;
v___y_2210_ = v___y_2237_;
v___y_2211_ = v___y_2238_;
v___y_2212_ = v___y_2239_;
goto v___jp_2202_;
}
else
{
lean_object* v_val_2241_; 
v_val_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_val_2241_);
lean_dec_ref_known(v___x_2240_, 1);
v___y_2203_ = v___y_2230_;
v___y_2204_ = v___y_2231_;
v___y_2205_ = v___y_2232_;
v___y_2206_ = v___y_2233_;
v___y_2207_ = v___y_2239_;
v___y_2208_ = v___y_2235_;
v___y_2209_ = v___y_2236_;
v___y_2210_ = v___y_2237_;
v___y_2211_ = v___y_2238_;
v___y_2212_ = v_val_2241_;
goto v___jp_2202_;
}
}
v___jp_2242_:
{
lean_object* v_ref_2252_; lean_object* v___x_2253_; 
v_ref_2252_ = l_Lean_replaceRef(v_ref_2158_, v___y_2248_);
v___x_2253_ = l_Lean_Syntax_getPos_x3f(v_ref_2252_, v___y_2250_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v___x_2254_; 
v___x_2254_ = lean_unsigned_to_nat(0u);
v___y_2230_ = v___y_2243_;
v___y_2231_ = v___y_2244_;
v___y_2232_ = v___y_2245_;
v___y_2233_ = v___y_2246_;
v___y_2234_ = v_ref_2252_;
v___y_2235_ = v___y_2247_;
v___y_2236_ = v___y_2251_;
v___y_2237_ = v___y_2249_;
v___y_2238_ = v___y_2250_;
v___y_2239_ = v___x_2254_;
goto v___jp_2229_;
}
else
{
lean_object* v_val_2255_; 
v_val_2255_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_val_2255_);
lean_dec_ref_known(v___x_2253_, 1);
v___y_2230_ = v___y_2243_;
v___y_2231_ = v___y_2244_;
v___y_2232_ = v___y_2245_;
v___y_2233_ = v___y_2246_;
v___y_2234_ = v_ref_2252_;
v___y_2235_ = v___y_2247_;
v___y_2236_ = v___y_2251_;
v___y_2237_ = v___y_2249_;
v___y_2238_ = v___y_2250_;
v___y_2239_ = v_val_2255_;
goto v___jp_2229_;
}
}
v___jp_2257_:
{
if (v___y_2266_ == 0)
{
v___y_2243_ = v___y_2259_;
v___y_2244_ = v___y_2260_;
v___y_2245_ = v___y_2262_;
v___y_2246_ = v___y_2258_;
v___y_2247_ = v___y_2261_;
v___y_2248_ = v___y_2263_;
v___y_2249_ = v___y_2264_;
v___y_2250_ = v___y_2265_;
v___y_2251_ = v_severity_2160_;
goto v___jp_2242_;
}
else
{
v___y_2243_ = v___y_2259_;
v___y_2244_ = v___y_2260_;
v___y_2245_ = v___y_2262_;
v___y_2246_ = v___y_2258_;
v___y_2247_ = v___y_2261_;
v___y_2248_ = v___y_2263_;
v___y_2249_ = v___y_2264_;
v___y_2250_ = v___y_2265_;
v___y_2251_ = v___x_2256_;
goto v___jp_2242_;
}
}
v___jp_2267_:
{
if (v___y_2268_ == 0)
{
lean_object* v_toCold_2269_; lean_object* v_ref_2270_; uint8_t v_suppressElabErrors_2271_; lean_object* v_fileName_2272_; lean_object* v_fileMap_2273_; lean_object* v_options_2274_; lean_object* v_currNamespace_2275_; lean_object* v_openDecls_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___f_2279_; uint8_t v___x_2280_; uint8_t v___x_2281_; 
v_toCold_2269_ = lean_ctor_get(v___y_2164_, 0);
v_ref_2270_ = lean_ctor_get(v___y_2164_, 2);
v_suppressElabErrors_2271_ = lean_ctor_get_uint8(v___y_2164_, sizeof(void*)*3 + 1);
v_fileName_2272_ = lean_ctor_get(v_toCold_2269_, 0);
v_fileMap_2273_ = lean_ctor_get(v_toCold_2269_, 1);
v_options_2274_ = lean_ctor_get(v_toCold_2269_, 2);
v_currNamespace_2275_ = lean_ctor_get(v_toCold_2269_, 4);
v_openDecls_2276_ = lean_ctor_get(v_toCold_2269_, 5);
v___x_2277_ = lean_box(v_suppressElabErrors_2271_);
v___x_2278_ = lean_box(v___y_2268_);
v___f_2279_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2279_, 0, v___x_2277_);
lean_closure_set(v___f_2279_, 1, v___x_2278_);
v___x_2280_ = 1;
v___x_2281_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2160_, v___x_2280_);
if (v___x_2281_ == 0)
{
v___y_2258_ = v_fileName_2272_;
v___y_2259_ = v_currNamespace_2275_;
v___y_2260_ = v_openDecls_2276_;
v___y_2261_ = v_fileMap_2273_;
v___y_2262_ = v___f_2279_;
v___y_2263_ = v_ref_2270_;
v___y_2264_ = v_suppressElabErrors_2271_;
v___y_2265_ = v___y_2268_;
v___y_2266_ = v___x_2281_;
goto v___jp_2257_;
}
else
{
lean_object* v___x_2282_; uint8_t v___x_2283_; 
v___x_2282_ = l_Lean_warningAsError;
v___x_2283_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10_spec__14(v_options_2274_, v___x_2282_);
v___y_2258_ = v_fileName_2272_;
v___y_2259_ = v_currNamespace_2275_;
v___y_2260_ = v_openDecls_2276_;
v___y_2261_ = v_fileMap_2273_;
v___y_2262_ = v___f_2279_;
v___y_2263_ = v_ref_2270_;
v___y_2264_ = v_suppressElabErrors_2271_;
v___y_2265_ = v___y_2268_;
v___y_2266_ = v___x_2283_;
goto v___jp_2257_;
}
}
else
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
lean_dec_ref(v_msgData_2159_);
v___x_2284_ = lean_box(0);
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg___boxed(lean_object* v_ref_2288_, lean_object* v_msgData_2289_, lean_object* v_severity_2290_, lean_object* v_isSilent_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_){
_start:
{
uint8_t v_severity_boxed_2297_; uint8_t v_isSilent_boxed_2298_; lean_object* v_res_2299_; 
v_severity_boxed_2297_ = lean_unbox(v_severity_2290_);
v_isSilent_boxed_2298_ = lean_unbox(v_isSilent_2291_);
v_res_2299_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg(v_ref_2288_, v_msgData_2289_, v_severity_boxed_2297_, v_isSilent_boxed_2298_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v_ref_2288_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6(lean_object* v_ref_2300_, lean_object* v_msgData_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
uint8_t v___x_2309_; uint8_t v___x_2310_; lean_object* v___x_2311_; 
v___x_2309_ = 1;
v___x_2310_ = 0;
v___x_2311_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg(v_ref_2300_, v_msgData_2301_, v___x_2309_, v___x_2310_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6___boxed(lean_object* v_ref_2312_, lean_object* v_msgData_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6(v_ref_2312_, v_msgData_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v_ref_2312_);
return v_res_2321_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__0));
v___x_2324_ = l_Lean_stringToMessageData(v___x_2323_);
return v___x_2324_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__2));
v___x_2327_ = l_Lean_stringToMessageData(v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4(lean_object* v_linterOption_2328_, lean_object* v_stx_2329_, lean_object* v_msg_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_name_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2356_; 
v_name_2338_ = lean_ctor_get(v_linterOption_2328_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v_linterOption_2328_);
if (v_isSharedCheck_2356_ == 0)
{
lean_object* v_unused_2357_; 
v_unused_2357_ = lean_ctor_get(v_linterOption_2328_, 1);
lean_dec(v_unused_2357_);
v___x_2340_ = v_linterOption_2328_;
v_isShared_2341_ = v_isSharedCheck_2356_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_name_2338_);
lean_dec(v_linterOption_2328_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2356_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2345_; 
v___x_2342_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__1);
lean_inc(v_name_2338_);
v___x_2343_ = l_Lean_MessageData_ofName(v_name_2338_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set_tag(v___x_2340_, 7);
lean_ctor_set(v___x_2340_, 1, v___x_2343_);
lean_ctor_set(v___x_2340_, 0, v___x_2342_);
v___x_2345_ = v___x_2340_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2343_);
v___x_2345_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v_disable_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2346_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___closed__3);
v___x_2347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v_disable_2348_ = l_Lean_MessageData_note(v___x_2347_);
v___x_2349_ = l_Lean_Linter_linterMessageTag;
v___x_2350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2350_, 0, v_msg_2330_);
lean_ctor_set(v___x_2350_, 1, v_disable_2348_);
v___x_2351_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2349_);
lean_ctor_set(v___x_2351_, 1, v___x_2350_);
v___x_2352_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2352_, 0, v_name_2338_);
lean_ctor_set(v___x_2352_, 1, v___x_2351_);
lean_inc(v_stx_2329_);
v___x_2353_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2353_, 0, v_stx_2329_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6(v_stx_2329_, v___x_2353_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v_stx_2329_);
return v___x_2354_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4___boxed(lean_object* v_linterOption_2358_, lean_object* v_stx_2359_, lean_object* v_msg_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4(v_linterOption_2358_, v_stx_2359_, v_msg_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2(lean_object* v_linterOption_2369_, lean_object* v_stx_2370_, lean_object* v_msg_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v___x_2379_; lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2390_; 
v___x_2379_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3(v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2382_ = v___x_2379_;
v_isShared_2383_ = v_isSharedCheck_2390_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2379_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2390_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
uint8_t v___x_2384_; 
v___x_2384_ = l_Lean_Linter_getLinterValue(v_linterOption_2369_, v_a_2380_);
lean_dec(v_a_2380_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; lean_object* v___x_2387_; 
lean_dec_ref(v_msg_2371_);
lean_dec(v_stx_2370_);
lean_dec_ref(v_linterOption_2369_);
v___x_2385_ = lean_box(0);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v___x_2385_);
v___x_2387_ = v___x_2382_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
else
{
lean_object* v___x_2389_; 
lean_del_object(v___x_2382_);
v___x_2389_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4(v_linterOption_2369_, v_stx_2370_, v_msg_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
return v___x_2389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2___boxed(lean_object* v_linterOption_2391_, lean_object* v_stx_2392_, lean_object* v_msg_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2(v_linterOption_2391_, v_stx_2392_, v_msg_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2401_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__0));
v___x_2404_ = l_Lean_stringToMessageData(v___x_2403_);
return v___x_2404_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__2));
v___x_2407_ = l_Lean_stringToMessageData(v___x_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0(lean_object* v_head_2410_, lean_object* v___x_2411_, lean_object* v_unusedParams_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_ref_2420_; lean_object* v_name_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___y_2426_; lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v_ref_2420_ = lean_ctor_get(v___y_2417_, 2);
v_name_2421_ = lean_ctor_get(v_head_2410_, 0);
lean_inc(v_name_2421_);
lean_dec_ref(v_head_2410_);
v___x_2422_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_unusedInstancesMsg(v_name_2421_, v_unusedParams_2412_);
v___x_2423_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1, &l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__1);
v___x_2424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2422_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2432_ = lean_array_get_size(v_unusedParams_2412_);
v___x_2433_ = lean_unsigned_to_nat(1u);
v___x_2434_ = lean_nat_dec_eq(v___x_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; 
v___x_2435_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__4));
v___y_2426_ = v___x_2435_;
goto v___jp_2425_;
}
else
{
lean_object* v___x_2436_; 
v___x_2436_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__5));
v___y_2426_ = v___x_2436_;
goto v___jp_2425_;
}
v___jp_2425_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
lean_inc_ref(v___y_2426_);
v___x_2427_ = l_Lean_stringToMessageData(v___y_2426_);
v___x_2428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2424_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3, &l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___closed__3);
v___x_2430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
lean_inc(v_ref_2420_);
v___x_2431_ = l_Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2(v___x_2411_, v_ref_2420_, v___x_2430_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___boxed(lean_object* v_head_2437_, lean_object* v___x_2438_, lean_object* v_unusedParams_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0(v_head_2437_, v___x_2438_, v_unusedParams_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec_ref(v_unusedParams_2439_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg(lean_object* v_as_x27_2448_, lean_object* v_b_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
if (lean_obj_tag(v_as_x27_2448_) == 0)
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v_b_2449_);
return v___x_2457_;
}
else
{
lean_object* v_head_2458_; lean_object* v_tail_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___f_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_head_2458_ = lean_ctor_get(v_as_x27_2448_, 0);
v_tail_2459_ = lean_ctor_get(v_as_x27_2448_, 1);
v___x_2460_ = l_Lean_Linter_Extra_linter_extra_unusedDecidableInType;
v___x_2461_ = lean_box(0);
lean_inc_n(v_head_2458_, 2);
v___f_2462_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2462_, 0, v_head_2458_);
lean_closure_set(v___f_2462_, 1, v___x_2460_);
v___x_2463_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3___closed__0));
v___x_2464_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_onUnusedInstancesWhere(v_head_2458_, v___x_2463_, v___f_2462_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_dec_ref_known(v___x_2464_, 1);
v_as_x27_2448_ = v_tail_2459_;
v_b_2449_ = v___x_2461_;
goto _start;
}
else
{
return v___x_2464_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg___boxed(lean_object* v_as_x27_2466_, lean_object* v_b_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg(v_as_x27_2466_, v_b_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v_as_x27_2466_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0(lean_object* v___x_2476_, lean_object* v___x_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg(v___x_2476_, v___x_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2485_, 0);
lean_dec(v_unused_2493_);
v___x_2487_ = v___x_2485_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_dec(v___x_2485_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2477_);
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2477_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
else
{
return v___x_2485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed(lean_object* v___x_2494_, lean_object* v___x_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0(v___x_2494_, v___x_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___x_2494_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14(lean_object* v___x_2504_, uint8_t v___x_2505_, lean_object* v_as_2506_, size_t v_sz_2507_, size_t v_i_2508_, lean_object* v_b_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_){
_start:
{
uint8_t v___x_2513_; 
v___x_2513_ = lean_usize_dec_lt(v_i_2508_, v_sz_2507_);
if (v___x_2513_ == 0)
{
lean_object* v___x_2514_; 
lean_dec_ref(v___x_2504_);
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_b_2509_);
return v___x_2514_;
}
else
{
lean_object* v___x_2515_; lean_object* v_a_2517_; lean_object* v___x_2522_; lean_object* v_a_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; uint8_t v___x_2527_; 
lean_dec_ref(v_b_2509_);
v___x_2515_ = lean_box(0);
v___x_2522_ = lean_box(0);
v_a_2523_ = lean_array_uget_borrowed(v_as_2506_, v_i_2508_);
lean_inc_ref(v___x_2504_);
lean_inc(v_a_2523_);
v___x_2524_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(v_a_2523_, v___x_2504_);
v___x_2525_ = lean_box(0);
v___x_2526_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(v___x_2505_, v___x_2524_, v___x_2525_);
v___x_2527_ = l_List_isEmpty___redArg(v___x_2526_);
if (v___x_2527_ == 0)
{
lean_object* v___f_2528_; lean_object* v___x_2529_; 
v___f_2528_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2528_, 0, v___x_2526_);
lean_closure_set(v___f_2528_, 1, v___x_2522_);
v___x_2529_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_2528_, v___y_2510_, v___y_2511_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_dec_ref_known(v___x_2529_, 1);
v_a_2517_ = v___x_2522_;
goto v___jp_2516_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec_ref(v___x_2504_);
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2529_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2529_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
else
{
lean_dec(v___x_2526_);
v_a_2517_ = v___x_2522_;
goto v___jp_2516_;
}
v___jp_2516_:
{
lean_object* v___x_2518_; size_t v___x_2519_; size_t v___x_2520_; 
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2515_);
lean_ctor_set(v___x_2518_, 1, v_a_2517_);
v___x_2519_ = ((size_t)1ULL);
v___x_2520_ = lean_usize_add(v_i_2508_, v___x_2519_);
v_i_2508_ = v___x_2520_;
v_b_2509_ = v___x_2518_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14___boxed(lean_object* v___x_2538_, lean_object* v___x_2539_, lean_object* v_as_2540_, lean_object* v_sz_2541_, lean_object* v_i_2542_, lean_object* v_b_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
uint8_t v___x_12281__boxed_2547_; size_t v_sz_boxed_2548_; size_t v_i_boxed_2549_; lean_object* v_res_2550_; 
v___x_12281__boxed_2547_ = lean_unbox(v___x_2539_);
v_sz_boxed_2548_ = lean_unbox_usize(v_sz_2541_);
lean_dec(v_sz_2541_);
v_i_boxed_2549_ = lean_unbox_usize(v_i_2542_);
lean_dec(v_i_2542_);
v_res_2550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14(v___x_2538_, v___x_12281__boxed_2547_, v_as_2540_, v_sz_boxed_2548_, v_i_boxed_2549_, v_b_2543_, v___y_2544_, v___y_2545_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec_ref(v_as_2540_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12(lean_object* v___x_2554_, uint8_t v___x_2555_, lean_object* v_as_2556_, size_t v_sz_2557_, size_t v_i_2558_, lean_object* v_b_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
uint8_t v___x_2563_; 
v___x_2563_ = lean_usize_dec_lt(v_i_2558_, v_sz_2557_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; 
lean_dec_ref(v___x_2554_);
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_b_2559_);
return v___x_2564_;
}
else
{
lean_object* v___x_2565_; lean_object* v_a_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; 
lean_dec_ref(v_b_2559_);
v___x_2565_ = lean_box(0);
v_a_2571_ = lean_array_uget_borrowed(v_as_2556_, v_i_2558_);
lean_inc_ref(v___x_2554_);
lean_inc(v_a_2571_);
v___x_2572_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(v_a_2571_, v___x_2554_);
v___x_2573_ = lean_box(0);
v___x_2574_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(v___x_2555_, v___x_2572_, v___x_2573_);
v___x_2575_ = l_List_isEmpty___redArg(v___x_2574_);
if (v___x_2575_ == 0)
{
lean_object* v___f_2576_; lean_object* v___x_2577_; 
v___f_2576_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2576_, 0, v___x_2574_);
lean_closure_set(v___f_2576_, 1, v___x_2565_);
v___x_2577_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_2576_, v___y_2560_, v___y_2561_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_dec_ref_known(v___x_2577_, 1);
goto v___jp_2566_;
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_dec_ref(v___x_2554_);
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2577_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2577_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
else
{
lean_dec(v___x_2574_);
goto v___jp_2566_;
}
v___jp_2566_:
{
lean_object* v___x_2567_; size_t v___x_2568_; size_t v___x_2569_; lean_object* v___x_2570_; 
v___x_2567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___closed__0));
v___x_2568_ = ((size_t)1ULL);
v___x_2569_ = lean_usize_add(v_i_2558_, v___x_2568_);
v___x_2570_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12_spec__14(v___x_2554_, v___x_2555_, v_as_2556_, v_sz_2557_, v___x_2569_, v___x_2567_, v___y_2560_, v___y_2561_);
return v___x_2570_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12___boxed(lean_object* v___x_2586_, lean_object* v___x_2587_, lean_object* v_as_2588_, lean_object* v_sz_2589_, lean_object* v_i_2590_, lean_object* v_b_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
uint8_t v___x_12351__boxed_2595_; size_t v_sz_boxed_2596_; size_t v_i_boxed_2597_; lean_object* v_res_2598_; 
v___x_12351__boxed_2595_ = lean_unbox(v___x_2587_);
v_sz_boxed_2596_ = lean_unbox_usize(v_sz_2589_);
lean_dec(v_sz_2589_);
v_i_boxed_2597_ = lean_unbox_usize(v_i_2590_);
lean_dec(v_i_2590_);
v_res_2598_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12(v___x_2586_, v___x_12351__boxed_2595_, v_as_2588_, v_sz_boxed_2596_, v_i_boxed_2597_, v_b_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v_as_2588_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8(lean_object* v_init_2599_, lean_object* v___x_2600_, uint8_t v___x_2601_, lean_object* v_n_2602_, lean_object* v_b_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
if (lean_obj_tag(v_n_2602_) == 0)
{
lean_object* v_cs_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; size_t v_sz_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v_cs_2607_ = lean_ctor_get(v_n_2602_, 0);
v___x_2608_ = lean_box(0);
v___x_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2608_);
lean_ctor_set(v___x_2609_, 1, v_b_2603_);
v_sz_2610_ = lean_array_size(v_cs_2607_);
v___x_2611_ = ((size_t)0ULL);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11(v_init_2599_, v___x_2600_, v___x_2601_, v_cs_2607_, v_sz_2610_, v___x_2611_, v___x_2609_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2627_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2627_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2627_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v_fst_2617_; 
v_fst_2617_ = lean_ctor_get(v_a_2613_, 0);
if (lean_obj_tag(v_fst_2617_) == 0)
{
lean_object* v_snd_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v_snd_2618_ = lean_ctor_get(v_a_2613_, 1);
lean_inc(v_snd_2618_);
lean_dec(v_a_2613_);
v___x_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2619_, 0, v_snd_2618_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v___x_2619_);
v___x_2621_ = v___x_2615_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
else
{
lean_object* v_val_2623_; lean_object* v___x_2625_; 
lean_inc_ref(v_fst_2617_);
lean_dec(v_a_2613_);
v_val_2623_ = lean_ctor_get(v_fst_2617_, 0);
lean_inc(v_val_2623_);
lean_dec_ref_known(v_fst_2617_, 1);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v_val_2623_);
v___x_2625_ = v___x_2615_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_val_2623_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
v_a_2628_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2612_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2612_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
else
{
lean_object* v_vs_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; size_t v_sz_2639_; size_t v___x_2640_; lean_object* v___x_2641_; 
v_vs_2636_ = lean_ctor_get(v_n_2602_, 0);
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
lean_ctor_set(v___x_2638_, 1, v_b_2603_);
v_sz_2639_ = lean_array_size(v_vs_2636_);
v___x_2640_ = ((size_t)0ULL);
v___x_2641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__12(v___x_2600_, v___x_2601_, v_vs_2636_, v_sz_2639_, v___x_2640_, v___x_2638_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2656_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2644_ = v___x_2641_;
v_isShared_2645_ = v_isSharedCheck_2656_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2641_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2656_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v_fst_2646_; 
v_fst_2646_ = lean_ctor_get(v_a_2642_, 0);
if (lean_obj_tag(v_fst_2646_) == 0)
{
lean_object* v_snd_2647_; lean_object* v___x_2648_; lean_object* v___x_2650_; 
v_snd_2647_ = lean_ctor_get(v_a_2642_, 1);
lean_inc(v_snd_2647_);
lean_dec(v_a_2642_);
v___x_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2648_, 0, v_snd_2647_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v___x_2648_);
v___x_2650_ = v___x_2644_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
else
{
lean_object* v_val_2652_; lean_object* v___x_2654_; 
lean_inc_ref(v_fst_2646_);
lean_dec(v_a_2642_);
v_val_2652_ = lean_ctor_get(v_fst_2646_, 0);
lean_inc(v_val_2652_);
lean_dec_ref_known(v_fst_2646_, 1);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v_val_2652_);
v___x_2654_ = v___x_2644_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_val_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
v_a_2657_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v___x_2641_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2641_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11(lean_object* v_init_2665_, lean_object* v___x_2666_, uint8_t v___x_2667_, lean_object* v_as_2668_, size_t v_sz_2669_, size_t v_i_2670_, lean_object* v_b_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
uint8_t v___x_2675_; 
v___x_2675_ = lean_usize_dec_lt(v_i_2670_, v_sz_2669_);
if (v___x_2675_ == 0)
{
lean_object* v___x_2676_; 
lean_dec_ref(v___x_2666_);
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v_b_2671_);
return v___x_2676_;
}
else
{
lean_object* v_snd_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2711_; 
v_snd_2677_ = lean_ctor_get(v_b_2671_, 1);
v_isSharedCheck_2711_ = !lean_is_exclusive(v_b_2671_);
if (v_isSharedCheck_2711_ == 0)
{
lean_object* v_unused_2712_; 
v_unused_2712_ = lean_ctor_get(v_b_2671_, 0);
lean_dec(v_unused_2712_);
v___x_2679_ = v_b_2671_;
v_isShared_2680_ = v_isSharedCheck_2711_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_snd_2677_);
lean_dec(v_b_2671_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2711_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; lean_object* v_a_2682_; lean_object* v___x_2683_; 
v___x_2681_ = lean_box(0);
v_a_2682_ = lean_array_uget_borrowed(v_as_2668_, v_i_2670_);
lean_inc(v_snd_2677_);
lean_inc_ref(v___x_2666_);
v___x_2683_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8(v_init_2665_, v___x_2666_, v___x_2667_, v_a_2682_, v_snd_2677_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2702_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2686_ = v___x_2683_;
v_isShared_2687_ = v_isSharedCheck_2702_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2683_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2702_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
if (lean_obj_tag(v_a_2684_) == 0)
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec_ref(v___x_2666_);
v___x_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2688_, 0, v_a_2684_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 0, v___x_2688_);
v___x_2690_ = v___x_2679_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2688_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v_snd_2677_);
v___x_2690_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2692_; 
if (v_isShared_2687_ == 0)
{
lean_ctor_set(v___x_2686_, 0, v___x_2690_);
v___x_2692_ = v___x_2686_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; 
lean_del_object(v___x_2686_);
lean_dec(v_snd_2677_);
v_a_2695_ = lean_ctor_get(v_a_2684_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v_a_2684_, 1);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v_a_2695_);
lean_ctor_set(v___x_2679_, 0, v___x_2681_);
v___x_2697_ = v___x_2679_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v_a_2695_);
v___x_2697_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
size_t v___x_2698_; size_t v___x_2699_; 
v___x_2698_ = ((size_t)1ULL);
v___x_2699_ = lean_usize_add(v_i_2670_, v___x_2698_);
v_i_2670_ = v___x_2699_;
v_b_2671_ = v___x_2697_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_del_object(v___x_2679_);
lean_dec(v_snd_2677_);
lean_dec_ref(v___x_2666_);
v_a_2703_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2683_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2683_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11___boxed(lean_object* v_init_2713_, lean_object* v___x_2714_, lean_object* v___x_2715_, lean_object* v_as_2716_, lean_object* v_sz_2717_, lean_object* v_i_2718_, lean_object* v_b_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
uint8_t v___x_12414__boxed_2723_; size_t v_sz_boxed_2724_; size_t v_i_boxed_2725_; lean_object* v_res_2726_; 
v___x_12414__boxed_2723_ = lean_unbox(v___x_2715_);
v_sz_boxed_2724_ = lean_unbox_usize(v_sz_2717_);
lean_dec(v_sz_2717_);
v_i_boxed_2725_ = lean_unbox_usize(v_i_2718_);
lean_dec(v_i_2718_);
v_res_2726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8_spec__11(v_init_2713_, v___x_2714_, v___x_12414__boxed_2723_, v_as_2716_, v_sz_boxed_2724_, v_i_boxed_2725_, v_b_2719_, v___y_2720_, v___y_2721_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec_ref(v_as_2716_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8___boxed(lean_object* v_init_2727_, lean_object* v___x_2728_, lean_object* v___x_2729_, lean_object* v_n_2730_, lean_object* v_b_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
uint8_t v___x_12435__boxed_2735_; lean_object* v_res_2736_; 
v___x_12435__boxed_2735_ = lean_unbox(v___x_2729_);
v_res_2736_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8(v_init_2727_, v___x_2728_, v___x_12435__boxed_2735_, v_n_2730_, v_b_2731_, v___y_2732_, v___y_2733_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec_ref(v_n_2730_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14(lean_object* v___x_2737_, uint8_t v___x_2738_, lean_object* v_as_2739_, size_t v_sz_2740_, size_t v_i_2741_, lean_object* v_b_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
uint8_t v___x_2746_; 
v___x_2746_ = lean_usize_dec_lt(v_i_2741_, v_sz_2740_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; 
lean_dec_ref(v___x_2737_);
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_b_2742_);
return v___x_2747_;
}
else
{
lean_object* v___x_2748_; lean_object* v_a_2750_; lean_object* v___x_2755_; lean_object* v_a_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
lean_dec_ref(v_b_2742_);
v___x_2748_ = lean_box(0);
v___x_2755_ = lean_box(0);
v_a_2756_ = lean_array_uget_borrowed(v_as_2739_, v_i_2741_);
lean_inc_ref(v___x_2737_);
lean_inc(v_a_2756_);
v___x_2757_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(v_a_2756_, v___x_2737_);
v___x_2758_ = lean_box(0);
v___x_2759_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(v___x_2738_, v___x_2757_, v___x_2758_);
v___x_2760_ = l_List_isEmpty___redArg(v___x_2759_);
if (v___x_2760_ == 0)
{
lean_object* v___f_2761_; lean_object* v___x_2762_; 
v___f_2761_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2761_, 0, v___x_2759_);
lean_closure_set(v___f_2761_, 1, v___x_2755_);
v___x_2762_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_2761_, v___y_2743_, v___y_2744_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_dec_ref_known(v___x_2762_, 1);
v_a_2750_ = v___x_2755_;
goto v___jp_2749_;
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec_ref(v___x_2737_);
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2762_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2762_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
else
{
lean_dec(v___x_2759_);
v_a_2750_ = v___x_2755_;
goto v___jp_2749_;
}
v___jp_2749_:
{
lean_object* v___x_2751_; size_t v___x_2752_; size_t v___x_2753_; 
v___x_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2748_);
lean_ctor_set(v___x_2751_, 1, v_a_2750_);
v___x_2752_ = ((size_t)1ULL);
v___x_2753_ = lean_usize_add(v_i_2741_, v___x_2752_);
v_i_2741_ = v___x_2753_;
v_b_2742_ = v___x_2751_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14___boxed(lean_object* v___x_2771_, lean_object* v___x_2772_, lean_object* v_as_2773_, lean_object* v_sz_2774_, lean_object* v_i_2775_, lean_object* v_b_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
uint8_t v___x_12621__boxed_2780_; size_t v_sz_boxed_2781_; size_t v_i_boxed_2782_; lean_object* v_res_2783_; 
v___x_12621__boxed_2780_ = lean_unbox(v___x_2772_);
v_sz_boxed_2781_ = lean_unbox_usize(v_sz_2774_);
lean_dec(v_sz_2774_);
v_i_boxed_2782_ = lean_unbox_usize(v_i_2775_);
lean_dec(v_i_2775_);
v_res_2783_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14(v___x_2771_, v___x_12621__boxed_2780_, v_as_2773_, v_sz_boxed_2781_, v_i_boxed_2782_, v_b_2776_, v___y_2777_, v___y_2778_);
lean_dec(v___y_2778_);
lean_dec_ref(v___y_2777_);
lean_dec_ref(v_as_2773_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9(lean_object* v___x_2787_, uint8_t v___x_2788_, lean_object* v_as_2789_, size_t v_sz_2790_, size_t v_i_2791_, lean_object* v_b_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
uint8_t v___x_2796_; 
v___x_2796_ = lean_usize_dec_lt(v_i_2791_, v_sz_2790_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; 
lean_dec_ref(v___x_2787_);
v___x_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2797_, 0, v_b_2792_);
return v___x_2797_;
}
else
{
lean_object* v___x_2798_; lean_object* v_a_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
lean_dec_ref(v_b_2792_);
v___x_2798_ = lean_box(0);
v_a_2804_ = lean_array_uget_borrowed(v_as_2789_, v_i_2791_);
lean_inc_ref(v___x_2787_);
lean_inc(v_a_2804_);
v___x_2805_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_getTheorems(v_a_2804_, v___x_2787_);
v___x_2806_ = lean_box(0);
v___x_2807_ = l_List_filterTR_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__3(v___x_2788_, v___x_2805_, v___x_2806_);
v___x_2808_ = l_List_isEmpty___redArg(v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___f_2809_; lean_object* v___x_2810_; 
v___f_2809_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2809_, 0, v___x_2807_);
lean_closure_set(v___f_2809_, 1, v___x_2798_);
v___x_2810_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_2809_, v___y_2793_, v___y_2794_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_dec_ref_known(v___x_2810_, 1);
goto v___jp_2799_;
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec_ref(v___x_2787_);
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2810_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2810_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
else
{
lean_dec(v___x_2807_);
goto v___jp_2799_;
}
v___jp_2799_:
{
lean_object* v___x_2800_; size_t v___x_2801_; size_t v___x_2802_; lean_object* v___x_2803_; 
v___x_2800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___closed__0));
v___x_2801_ = ((size_t)1ULL);
v___x_2802_ = lean_usize_add(v_i_2791_, v___x_2801_);
v___x_2803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9_spec__14(v___x_2787_, v___x_2788_, v_as_2789_, v_sz_2790_, v___x_2802_, v___x_2800_, v___y_2793_, v___y_2794_);
return v___x_2803_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9___boxed(lean_object* v___x_2819_, lean_object* v___x_2820_, lean_object* v_as_2821_, lean_object* v_sz_2822_, lean_object* v_i_2823_, lean_object* v_b_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_){
_start:
{
uint8_t v___x_12691__boxed_2828_; size_t v_sz_boxed_2829_; size_t v_i_boxed_2830_; lean_object* v_res_2831_; 
v___x_12691__boxed_2828_ = lean_unbox(v___x_2820_);
v_sz_boxed_2829_ = lean_unbox_usize(v_sz_2822_);
lean_dec(v_sz_2822_);
v_i_boxed_2830_ = lean_unbox_usize(v_i_2823_);
lean_dec(v_i_2823_);
v_res_2831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9(v___x_2819_, v___x_12691__boxed_2828_, v_as_2821_, v_sz_boxed_2829_, v_i_boxed_2830_, v_b_2824_, v___y_2825_, v___y_2826_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec_ref(v_as_2821_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5(lean_object* v___x_2832_, uint8_t v___x_2833_, lean_object* v_t_2834_, lean_object* v_init_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v_root_2839_; lean_object* v_tail_2840_; lean_object* v___x_2841_; 
v_root_2839_ = lean_ctor_get(v_t_2834_, 0);
v_tail_2840_ = lean_ctor_get(v_t_2834_, 1);
lean_inc_ref(v___x_2832_);
v___x_2841_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__8(v_init_2835_, v___x_2832_, v___x_2833_, v_root_2839_, v_init_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2878_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2844_ = v___x_2841_;
v_isShared_2845_ = v_isSharedCheck_2878_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2878_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
if (lean_obj_tag(v_a_2842_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; 
lean_dec_ref(v___x_2832_);
v_a_2846_ = lean_ctor_get(v_a_2842_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v_a_2842_, 1);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v_a_2846_);
v___x_2848_ = v___x_2844_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2846_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; size_t v_sz_2853_; size_t v___x_2854_; lean_object* v___x_2855_; 
lean_del_object(v___x_2844_);
v_a_2850_ = lean_ctor_get(v_a_2842_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v_a_2842_, 1);
v___x_2851_ = lean_box(0);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
lean_ctor_set(v___x_2852_, 1, v_a_2850_);
v_sz_2853_ = lean_array_size(v_tail_2840_);
v___x_2854_ = ((size_t)0ULL);
v___x_2855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5_spec__9(v___x_2832_, v___x_2833_, v_tail_2840_, v_sz_2853_, v___x_2854_, v___x_2852_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2869_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2858_ = v___x_2855_;
v_isShared_2859_ = v_isSharedCheck_2869_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2855_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2869_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v_fst_2860_; 
v_fst_2860_ = lean_ctor_get(v_a_2856_, 0);
if (lean_obj_tag(v_fst_2860_) == 0)
{
lean_object* v_snd_2861_; lean_object* v___x_2863_; 
v_snd_2861_ = lean_ctor_get(v_a_2856_, 1);
lean_inc(v_snd_2861_);
lean_dec(v_a_2856_);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v_snd_2861_);
v___x_2863_ = v___x_2858_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_snd_2861_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
else
{
lean_object* v_val_2865_; lean_object* v___x_2867_; 
lean_inc_ref(v_fst_2860_);
lean_dec(v_a_2856_);
v_val_2865_ = lean_ctor_get(v_fst_2860_, 0);
lean_inc(v_val_2865_);
lean_dec_ref_known(v_fst_2860_, 1);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v_val_2865_);
v___x_2867_ = v___x_2858_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_val_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
v_a_2870_ = lean_ctor_get(v___x_2855_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2855_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2855_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec_ref(v___x_2832_);
v_a_2879_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2841_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2841_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5___boxed(lean_object* v___x_2887_, lean_object* v___x_2888_, lean_object* v_t_2889_, lean_object* v_init_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
uint8_t v___x_12754__boxed_2894_; lean_object* v_res_2895_; 
v___x_12754__boxed_2894_ = lean_unbox(v___x_2888_);
v_res_2895_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5(v___x_2887_, v___x_12754__boxed_2894_, v_t_2889_, v_init_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec_ref(v_t_2889_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg(lean_object* v_o_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v_env_2901_; lean_object* v___x_2902_; lean_object* v_toEnvExtension_2903_; lean_object* v_asyncMode_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v_merged_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2915_; 
v___x_2899_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2900_ = lean_st_ref_get(v___y_2897_);
v_env_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc_ref(v_env_2901_);
lean_dec(v___x_2900_);
v___x_2902_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2903_ = lean_ctor_get(v___x_2902_, 0);
v_asyncMode_2904_ = lean_ctor_get(v_toEnvExtension_2903_, 2);
v___x_2905_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_2906_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2899_, v___x_2902_, v_env_2901_, v_asyncMode_2904_, v___x_2905_);
v_merged_2907_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2915_ == 0)
{
lean_object* v_unused_2916_; 
v_unused_2916_ = lean_ctor_get(v___x_2906_, 1);
lean_dec(v_unused_2916_);
v___x_2909_ = v___x_2906_;
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_merged_2907_);
lean_dec(v___x_2906_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 1, v_merged_2907_);
lean_ctor_set(v___x_2909_, 0, v_o_2896_);
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_o_2896_);
lean_ctor_set(v_reuseFailAlloc_2914_, 1, v_merged_2907_);
v___x_2912_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
return v___x_2913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg___boxed(lean_object* v_o_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg(v_o_2917_, v___y_2918_);
lean_dec(v___y_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0(lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v_scopes_2926_; lean_object* v___x_2927_; lean_object* v_opts_2928_; lean_object* v___x_2929_; 
v___x_2924_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2925_ = lean_st_ref_get(v___y_2922_);
v_scopes_2926_ = lean_ctor_get(v___x_2925_, 2);
lean_inc(v_scopes_2926_);
lean_dec(v___x_2925_);
v___x_2927_ = l_List_head_x21___redArg(v___x_2924_, v_scopes_2926_);
lean_dec(v_scopes_2926_);
v_opts_2928_ = lean_ctor_get(v___x_2927_, 1);
lean_inc_ref(v_opts_2928_);
lean_dec(v___x_2927_);
v___x_2929_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg(v_opts_2928_, v___y_2922_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0___boxed(lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0(v___y_2930_, v___y_2931_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0(lean_object* v_x_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v___x_2938_; lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2975_; 
v___x_2938_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0(v___y_2935_, v___y_2936_);
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2941_ = v___x_2938_;
v_isShared_2942_ = v_isSharedCheck_2975_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2938_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2975_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; uint8_t v___y_2945_; lean_object* v___x_2971_; uint8_t v___x_2972_; 
v___x_2943_ = lean_st_ref_get(v___y_2936_);
v___x_2971_ = l_Lean_Linter_Extra_linter_extra_unusedDecidableInType;
v___x_2972_ = l_Lean_Linter_getLinterValue(v___x_2971_, v_a_2939_);
lean_dec(v_a_2939_);
if (v___x_2972_ == 0)
{
lean_dec(v___x_2943_);
v___y_2945_ = v___x_2972_;
goto v___jp_2944_;
}
else
{
lean_object* v_infoState_2973_; uint8_t v_enabled_2974_; 
v_infoState_2973_ = lean_ctor_get(v___x_2943_, 8);
lean_inc_ref(v_infoState_2973_);
lean_dec(v___x_2943_);
v_enabled_2974_ = lean_ctor_get_uint8(v_infoState_2973_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2973_);
v___y_2945_ = v_enabled_2974_;
goto v___jp_2944_;
}
v___jp_2944_:
{
if (v___y_2945_ == 0)
{
lean_object* v___x_2946_; lean_object* v___x_2948_; 
v___x_2946_ = lean_box(0);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v___x_2946_);
v___x_2948_ = v___x_2941_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2946_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
else
{
lean_object* v___x_2950_; lean_object* v_messages_2951_; uint8_t v___x_2952_; 
v___x_2950_ = lean_st_ref_get(v___y_2936_);
v_messages_2951_ = lean_ctor_get(v___x_2950_, 1);
lean_inc_ref(v_messages_2951_);
lean_dec(v___x_2950_);
v___x_2952_ = l_Lean_MessageLog_hasErrors(v_messages_2951_);
lean_dec_ref(v_messages_2951_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2953_; lean_object* v_env_2954_; lean_object* v___x_2955_; lean_object* v_a_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
lean_del_object(v___x_2941_);
v___x_2953_ = lean_st_ref_get(v___y_2936_);
v_env_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc_ref(v_env_2954_);
lean_dec(v___x_2953_);
v___x_2955_ = l_Lean_Elab_getInfoTrees___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__1___redArg(v___y_2936_);
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref(v___x_2955_);
v___x_2957_ = lean_box(0);
v___x_2958_ = l_Lean_PersistentArray_forIn___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__5(v_env_2954_, v___x_2952_, v_a_2956_, v___x_2957_, v___y_2935_, v___y_2936_);
lean_dec(v_a_2956_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; 
v_unused_2966_ = lean_ctor_get(v___x_2958_, 0);
lean_dec(v_unused_2966_);
v___x_2960_ = v___x_2958_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_dec(v___x_2958_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 0, v___x_2957_);
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v___x_2957_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
else
{
return v___x_2958_;
}
}
else
{
lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2967_ = lean_box(0);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v___x_2967_);
v___x_2969_ = v___x_2941_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0___boxed(lean_object* v_x_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter___lam__0(v_x_2976_, v___y_2977_, v___y_2978_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec(v_x_2976_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0(lean_object* v_o_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v___x_3000_; 
v___x_3000_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___redArg(v_o_2996_, v___y_2998_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0___boxed(lean_object* v_o_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__0_spec__0(v_o_3001_, v___y_3002_, v___y_3003_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4(lean_object* v_as_3006_, lean_object* v_as_x27_3007_, lean_object* v_b_3008_, lean_object* v_a_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___redArg(v_as_x27_3007_, v_b_3008_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4___boxed(lean_object* v_as_3018_, lean_object* v_as_x27_3019_, lean_object* v_b_3020_, lean_object* v_a_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_List_forIn_x27_loop___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__4(v_as_3018_, v_as_x27_3019_, v_b_3020_, v_a_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_);
lean_dec(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec(v_as_x27_3019_);
lean_dec(v_as_3018_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4(lean_object* v_o_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v___x_3038_; 
v___x_3038_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___redArg(v_o_3030_, v___y_3036_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4___boxed(lean_object* v_o_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__3_spec__4(v_o_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10(lean_object* v_ref_3048_, lean_object* v_msgData_3049_, uint8_t v_severity_3050_, uint8_t v_isSilent_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___redArg(v_ref_3048_, v_msgData_3049_, v_severity_3050_, v_isSilent_3051_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10___boxed(lean_object* v_ref_3060_, lean_object* v_msgData_3061_, lean_object* v_severity_3062_, lean_object* v_isSilent_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_){
_start:
{
uint8_t v_severity_boxed_3071_; uint8_t v_isSilent_boxed_3072_; lean_object* v_res_3073_; 
v_severity_boxed_3071_ = lean_unbox(v_severity_3062_);
v_isSilent_boxed_3072_ = lean_unbox(v_isSilent_3063_);
v_res_3073_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter_spec__2_spec__4_spec__6_spec__10(v_ref_3060_, v_msgData_3061_, v_severity_boxed_3071_, v_isSilent_boxed_3072_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v_ref_3060_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = ((lean_object*)(l_Lean_Linter_Extra_UnusedDecidableInType_unusedDecidableInTypeLinter));
v___x_3076_ = l_Lean_Elab_Command_addLinter(v___x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2____boxed(lean_object* v_a_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2_();
return v_res_3078_;
}
}
lean_object* runtime_initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrivateName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Extra_UnusedDecidableInType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrivateName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_3995904732____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_Extra_linter_extra_unusedDecidableInType = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_Extra_linter_extra_unusedDecidableInType);
lean_dec_ref(res);
res = l___private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_initFn_00___x40_Lean_Linter_Extra_UnusedDecidableInType_1360886744____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Extra_UnusedDecidableInType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* initialize_Lean_PrivateName(uint8_t builtin);
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin);
lean_object* initialize_Lean_Linter_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Extra_UnusedDecidableInType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrivateName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_InfoUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Extra_UnusedDecidableInType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Extra_UnusedDecidableInType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Extra_UnusedDecidableInType(builtin);
}
#ifdef __cplusplus
}
#endif

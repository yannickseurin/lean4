// Lean compiler output
// Module: Lean.Meta.Tactic.AC.Main
// Imports: public import Lean.Meta.Tactic.Refl public import Lean.Meta.Tactic.Simp.Main public import Lean.Elab.Tactic.Rewrite import Init.Omega
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_AC_mergeIdem(lean_object*);
lean_object* l_Lean_Data_AC_Expr_toList(lean_object*);
lean_object* l_Lean_Data_AC_sort(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandLocation(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2;
static lean_once_cell_t l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instInhabitedPreContext;
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value),((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value),((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value)}};
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value;
static const lean_ctor_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value),((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value),((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value)}};
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_getInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_getInstance___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_getInstance___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_getInstance___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_AC_getInstance___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_AC_getInstance___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "got instance"};
static const lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_AC_getInstance___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_AC_getInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__0 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "AC"};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__1 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_getInstance___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_AC_getInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_getInstance___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 102, 180, 37, 89, 238, 212, 46)}};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__2 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_AC_getInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_getInstance___closed__3;
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "trying: "};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__4 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_AC_getInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_getInstance___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_preContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__0 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Associative"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__1 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 251, 219, 24, 41, 141, 182, 243)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__2 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__2_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Commutative"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__3 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__3_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(106, 96, 18, 51, 62, 235, 64, 3)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__4 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__4_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "IdempotentOp"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__5 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__5_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(245, 219, 239, 145, 216, 232, 46, 228)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__6 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_bin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_AC_toACExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_toACExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_AC_toACExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_toACExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LawfulIdentity"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 22, 200, 99, 71, 159, 239, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_AC_abstractAtoms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_abstractAtoms___closed__0 = (const lean_object*)&l_Lean_Meta_AC_abstractAtoms___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PLift"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(199, 82, 227, 164, 10, 97, 128, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Data"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Variable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(146, 85, 23, 54, 227, 224, 149, 53)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value_aux_3),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 172, 4, 99, 128, 254, 208, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "up"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(199, 82, 227, 164, 10, 97, 128, 84)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(211, 38, 67, 163, 37, 91, 68, 134)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(146, 85, 23, 54, 227, 224, 149, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Context"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 35, 224, 244, 170, 201, 45, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_3),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(188, 94, 192, 225, 248, 86, 206, 61)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Expr"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "var"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 183, 150, 226, 41, 85, 126, 57)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 113, 133, 93, 37, 32, 75, 36)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "op"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 183, 150, 226, 41, 85, 126, 57)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(65, 217, 52, 98, 170, 249, 224, 141)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_AC_buildNormProof___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eq_of_norm"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 35, 224, 244, 170, 201, 45, 1)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(150, 46, 99, 133, 28, 84, 99, 127)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__0 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__1 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__1_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.Tactic.AC.Main"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__2 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__2_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.AC.buildNormProof"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__3 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__3_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected proof type"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__4 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__4_value;
static lean_once_cell_t l_Lean_Meta_AC_buildNormProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_buildNormProof___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__1 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__2 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__3 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value;
static const lean_array_object l_Lean_Meta_AC_rewriteUnnormalized___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__4 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__4_value;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__5;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__6;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__7;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__8;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__9;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__10;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__11;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_post___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__12 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value;
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__0_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__13 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "acRfl"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 10, 210, 32, 196, 152, 20, 107)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "acRflTactic"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 50, 124, 4, 240, 103, 254, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 10, 211, 220, 137, 99, 157, 23)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(176) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_acNfTargetTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_acNfTargetTactic___closed__0 = (const lean_object*)&l_Lean_Meta_AC_acNfTargetTactic___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_evalNf0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "acNf0"};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 212, 39, 12, 162, 76, 172, 19)}};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__1 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value;
static const lean_array_object l_Lean_Meta_AC_evalNf0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__2 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalNf0"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 50, 124, 4, 240, 103, 254, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 59, 59, 44, 240, 219, 207, 54)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_obj_once(&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2, &l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2_once, _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2);
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v___x_7_);
lean_ctor_set(v___x_10_, 4, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3, &l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3_once, _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_AC_instInhabitedPreContext_default;
return v___x_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(lean_object* v_ctx_13_){
_start:
{
lean_object* v_fst_14_; lean_object* v_comm_15_; 
v_fst_14_ = lean_ctor_get(v_ctx_13_, 0);
v_comm_15_ = lean_ctor_get(v_fst_14_, 3);
if (lean_obj_tag(v_comm_15_) == 0)
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
else
{
uint8_t v___x_17_; 
v___x_17_ = 1;
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed(lean_object* v_ctx_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(v_ctx_18_);
lean_dec_ref(v_ctx_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(lean_object* v_ctx_21_){
_start:
{
lean_object* v_fst_22_; lean_object* v_idem_23_; 
v_fst_22_ = lean_ctor_get(v_ctx_21_, 0);
v_idem_23_ = lean_ctor_get(v_fst_22_, 4);
if (lean_obj_tag(v_idem_23_) == 0)
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 1;
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed(lean_object* v_ctx_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(v_ctx_26_);
lean_dec_ref(v_ctx_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(uint8_t v___x_29_, lean_object* v_ctx_30_, lean_object* v_x_31_){
_start:
{
lean_object* v_snd_32_; lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v_snd_32_ = lean_ctor_get(v_ctx_30_, 1);
v___x_33_ = lean_box(v___x_29_);
v___x_34_ = lean_array_get(v___x_33_, v_snd_32_, v_x_31_);
lean_dec(v___x_33_);
v___x_35_ = lean_unbox(v___x_34_);
lean_dec(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed(lean_object* v___x_36_, lean_object* v_ctx_37_, lean_object* v_x_38_){
_start:
{
uint8_t v___x_54__boxed_39_; uint8_t v_res_40_; lean_object* v_r_41_; 
v___x_54__boxed_39_ = lean_unbox(v___x_36_);
v_res_40_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(v___x_54__boxed_39_, v_ctx_37_, v_x_38_);
lean_dec(v_x_38_);
lean_dec_ref(v_ctx_37_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(lean_object* v_x_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0));
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed(lean_object* v_x_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(v_x_56_);
lean_dec_ref(v_x_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v___y_59_);
lean_ctor_set(v___x_61_, 1, v___y_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed(lean_object* v_x_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(v_x_62_, v___y_63_, v___y_64_);
lean_dec_ref(v_x_62_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v_x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed(lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(v_x_69_, v_x_70_);
lean_dec_ref(v_x_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0(lean_object* v_msgData_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v___x_86_; lean_object* v_env_87_; lean_object* v___x_88_; lean_object* v_toCold_89_; lean_object* v_mctx_90_; lean_object* v_lctx_91_; lean_object* v_options_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_86_ = lean_st_ref_get(v___y_84_);
v_env_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc_ref(v_env_87_);
lean_dec(v___x_86_);
v___x_88_ = lean_st_ref_get(v___y_82_);
v_toCold_89_ = lean_ctor_get(v___y_83_, 0);
v_mctx_90_ = lean_ctor_get(v___x_88_, 0);
lean_inc_ref(v_mctx_90_);
lean_dec(v___x_88_);
v_lctx_91_ = lean_ctor_get(v___y_81_, 2);
v_options_92_ = lean_ctor_get(v_toCold_89_, 2);
lean_inc_ref(v_options_92_);
lean_inc_ref(v_lctx_91_);
v___x_93_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_93_, 0, v_env_87_);
lean_ctor_set(v___x_93_, 1, v_mctx_90_);
lean_ctor_set(v___x_93_, 2, v_lctx_91_);
lean_ctor_set(v___x_93_, 3, v_options_92_);
v___x_94_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_msgData_80_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0___boxed(lean_object* v_msgData_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0(v_msgData_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
return v_res_102_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0(void){
_start:
{
lean_object* v___x_103_; double v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_float_of_nat(v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0(lean_object* v_cls_108_, lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_ref_115_; lean_object* v___x_116_; lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_161_; 
v_ref_115_ = lean_ctor_get(v___y_112_, 2);
v___x_116_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0_spec__0(v_msg_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_161_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_161_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_161_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v_traceState_122_; lean_object* v_env_123_; lean_object* v_nextMacroScope_124_; lean_object* v_ngen_125_; lean_object* v_auxDeclNGen_126_; lean_object* v_cache_127_; lean_object* v_messages_128_; lean_object* v_infoState_129_; lean_object* v_snapshotTasks_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_160_; 
v___x_121_ = lean_st_ref_take(v___y_113_);
v_traceState_122_ = lean_ctor_get(v___x_121_, 4);
v_env_123_ = lean_ctor_get(v___x_121_, 0);
v_nextMacroScope_124_ = lean_ctor_get(v___x_121_, 1);
v_ngen_125_ = lean_ctor_get(v___x_121_, 2);
v_auxDeclNGen_126_ = lean_ctor_get(v___x_121_, 3);
v_cache_127_ = lean_ctor_get(v___x_121_, 5);
v_messages_128_ = lean_ctor_get(v___x_121_, 6);
v_infoState_129_ = lean_ctor_get(v___x_121_, 7);
v_snapshotTasks_130_ = lean_ctor_get(v___x_121_, 8);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_160_ == 0)
{
v___x_132_ = v___x_121_;
v_isShared_133_ = v_isSharedCheck_160_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_snapshotTasks_130_);
lean_inc(v_infoState_129_);
lean_inc(v_messages_128_);
lean_inc(v_cache_127_);
lean_inc(v_traceState_122_);
lean_inc(v_auxDeclNGen_126_);
lean_inc(v_ngen_125_);
lean_inc(v_nextMacroScope_124_);
lean_inc(v_env_123_);
lean_dec(v___x_121_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_160_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint64_t v_tid_134_; lean_object* v_traces_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_159_; 
v_tid_134_ = lean_ctor_get_uint64(v_traceState_122_, sizeof(void*)*1);
v_traces_135_ = lean_ctor_get(v_traceState_122_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_traceState_122_);
if (v_isSharedCheck_159_ == 0)
{
v___x_137_ = v_traceState_122_;
v_isShared_138_ = v_isSharedCheck_159_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_traces_135_);
lean_dec(v_traceState_122_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_159_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_140_; double v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_139_ = lean_box(0);
v___x_140_ = lean_box(0);
v___x_141_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__0);
v___x_142_ = 0;
v___x_143_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__1));
v___x_144_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_144_, 0, v_cls_108_);
lean_ctor_set(v___x_144_, 1, v___x_140_);
lean_ctor_set(v___x_144_, 2, v___x_143_);
lean_ctor_set_float(v___x_144_, sizeof(void*)*3, v___x_141_);
lean_ctor_set_float(v___x_144_, sizeof(void*)*3 + 8, v___x_141_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*3 + 16, v___x_142_);
v___x_145_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___closed__2));
v___x_146_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v_a_117_);
lean_ctor_set(v___x_146_, 2, v___x_145_);
lean_inc(v_ref_115_);
v___x_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_147_, 0, v_ref_115_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
v___x_148_ = l_Lean_PersistentArray_push___redArg(v_traces_135_, v___x_147_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v___x_148_);
v___x_150_ = v___x_137_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_148_);
lean_ctor_set_uint64(v_reuseFailAlloc_158_, sizeof(void*)*1, v_tid_134_);
v___x_150_ = v_reuseFailAlloc_158_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_152_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 4, v___x_150_);
v___x_152_ = v___x_132_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_env_123_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_nextMacroScope_124_);
lean_ctor_set(v_reuseFailAlloc_157_, 2, v_ngen_125_);
lean_ctor_set(v_reuseFailAlloc_157_, 3, v_auxDeclNGen_126_);
lean_ctor_set(v_reuseFailAlloc_157_, 4, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_157_, 5, v_cache_127_);
lean_ctor_set(v_reuseFailAlloc_157_, 6, v_messages_128_);
lean_ctor_set(v_reuseFailAlloc_157_, 7, v_infoState_129_);
lean_ctor_set(v_reuseFailAlloc_157_, 8, v_snapshotTasks_130_);
v___x_152_ = v_reuseFailAlloc_157_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_153_ = lean_st_ref_put(v___y_113_, v___x_152_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_139_);
v___x_155_ = v___x_119_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_139_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0___boxed(lean_object* v_cls_162_, lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0(v_cls_162_, v_msg_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_Meta_AC_getInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___lam__0___closed__2));
v___x_175_ = l_Lean_stringToMessageData(v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0(lean_object* v_a_176_, lean_object* v___x_177_, lean_object* v_____r_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_box(0);
v___x_185_ = l_Lean_Meta_synthInstance(v_a_176_, v___x_184_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_213_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_213_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_213_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_213_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v_toCold_196_; lean_object* v_options_197_; uint8_t v_hasTrace_198_; 
v_toCold_196_ = lean_ctor_get(v___y_181_, 0);
v_options_197_ = lean_ctor_get(v_toCold_196_, 2);
v_hasTrace_198_ = lean_ctor_get_uint8(v_options_197_, sizeof(void*)*1);
if (v_hasTrace_198_ == 0)
{
lean_dec(v___x_177_);
goto v___jp_190_;
}
else
{
lean_object* v_inheritedTraceOptions_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_inheritedTraceOptions_199_ = lean_ctor_get(v_toCold_196_, 11);
v___x_200_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___lam__0___closed__1));
lean_inc(v___x_177_);
v___x_201_ = l_Lean_Name_append(v___x_200_, v___x_177_);
v___x_202_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_199_, v_options_197_, v___x_201_);
lean_dec(v___x_201_);
if (v___x_202_ == 0)
{
lean_dec(v___x_177_);
goto v___jp_190_;
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_obj_once(&l_Lean_Meta_AC_getInstance___lam__0___closed__3, &l_Lean_Meta_AC_getInstance___lam__0___closed__3_once, _init_l_Lean_Meta_AC_getInstance___lam__0___closed__3);
v___x_204_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0(v___x_177_, v___x_203_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_dec_ref_known(v___x_204_, 1);
goto v___jp_190_;
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_del_object(v___x_188_);
lean_dec(v_a_186_);
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
v___jp_190_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v_a_186_);
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_192_);
v___x_194_ = v___x_188_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec(v___x_177_);
v_a_214_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_185_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_185_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0___boxed(lean_object* v_a_222_, lean_object* v___x_223_, lean_object* v_____r_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_222_, v___x_223_, v_____r_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
return v_res_230_;
}
}
static lean_object* _init_l_Lean_Meta_AC_getInstance___closed__3(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_236_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__2));
v___x_237_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___lam__0___closed__1));
v___x_238_ = l_Lean_Name_append(v___x_237_, v___x_236_);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Meta_AC_getInstance___closed__5(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__4));
v___x_241_ = l_Lean_stringToMessageData(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance(lean_object* v_cls_242_, lean_object* v_exprs_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___y_250_; uint8_t v___y_251_; lean_object* v_a_256_; lean_object* v___y_260_; lean_object* v___x_271_; 
v___x_271_ = l_Lean_Meta_mkAppM(v_cls_242_, v_exprs_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_toCold_272_; lean_object* v_options_273_; lean_object* v_a_274_; lean_object* v_inheritedTraceOptions_275_; uint8_t v_hasTrace_276_; lean_object* v___x_277_; 
v_toCold_272_ = lean_ctor_get(v_a_246_, 0);
v_options_273_ = lean_ctor_get(v_toCold_272_, 2);
v_a_274_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v___x_271_, 1);
v_inheritedTraceOptions_275_ = lean_ctor_get(v_toCold_272_, 11);
v_hasTrace_276_ = lean_ctor_get_uint8(v_options_273_, sizeof(void*)*1);
v___x_277_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__2));
if (v_hasTrace_276_ == 0)
{
goto v___jp_278_;
}
else
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_obj_once(&l_Lean_Meta_AC_getInstance___closed__3, &l_Lean_Meta_AC_getInstance___closed__3_once, _init_l_Lean_Meta_AC_getInstance___closed__3);
v___x_282_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_275_, v_options_273_, v___x_281_);
if (v___x_282_ == 0)
{
goto v___jp_278_;
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_283_ = lean_obj_once(&l_Lean_Meta_AC_getInstance___closed__5, &l_Lean_Meta_AC_getInstance___closed__5_once, _init_l_Lean_Meta_AC_getInstance___closed__5);
lean_inc(v_a_274_);
v___x_284_ = l_Lean_indentExpr(v_a_274_);
v___x_285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__0(v___x_277_, v___x_285_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_274_, v___x_277_, v_a_287_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
v___y_260_ = v___x_288_;
goto v___jp_259_;
}
else
{
lean_object* v_a_289_; 
lean_dec(v_a_274_);
v_a_289_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_289_);
lean_dec_ref_known(v___x_286_, 1);
v_a_256_ = v_a_289_;
goto v___jp_255_;
}
}
}
v___jp_278_:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_box(0);
v___x_280_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_274_, v___x_277_, v___x_279_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
v___y_260_ = v___x_280_;
goto v___jp_259_;
}
}
else
{
lean_object* v_a_290_; 
v_a_290_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_271_, 1);
v_a_256_ = v_a_290_;
goto v___jp_255_;
}
v___jp_249_:
{
if (v___y_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v___y_250_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_254_, 0, v___y_250_);
return v___x_254_;
}
}
v___jp_255_:
{
uint8_t v___x_257_; 
v___x_257_ = l_Lean_Exception_isInterrupt(v_a_256_);
if (v___x_257_ == 0)
{
uint8_t v___x_258_; 
lean_inc_ref(v_a_256_);
v___x_258_ = l_Lean_Exception_isRuntime(v_a_256_);
v___y_250_ = v_a_256_;
v___y_251_ = v___x_258_;
goto v___jp_249_;
}
else
{
v___y_250_ = v_a_256_;
v___y_251_ = v___x_257_;
goto v___jp_249_;
}
}
v___jp_259_:
{
if (lean_obj_tag(v___y_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_a_261_ = lean_ctor_get(v___y_260_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___y_260_);
if (v_isSharedCheck_269_ == 0)
{
v___x_263_ = v___y_260_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___y_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_a_265_; lean_object* v___x_267_; 
v_a_265_ = lean_ctor_get(v_a_261_, 0);
lean_inc(v_a_265_);
lean_dec(v_a_261_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v_a_265_);
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
else
{
lean_object* v_a_270_; 
v_a_270_ = lean_ctor_get(v___y_260_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___y_260_, 1);
v_a_256_ = v_a_270_;
goto v___jp_255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___boxed(lean_object* v_cls_291_, lean_object* v_exprs_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Meta_AC_getInstance(v_cls_291_, v_exprs_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext(lean_object* v_expr_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_318_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__2));
v___x_319_ = lean_unsigned_to_nat(1u);
v___x_320_ = lean_mk_empty_array_with_capacity(v___x_319_);
lean_inc_ref(v_expr_312_);
v___x_321_ = lean_array_push(v___x_320_, v_expr_312_);
lean_inc_ref(v___x_321_);
v___x_322_ = l_Lean_Meta_AC_getInstance(v___x_318_, v___x_321_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_370_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_370_ == 0)
{
v___x_325_ = v___x_322_;
v_isShared_326_ = v_isSharedCheck_370_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_322_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_370_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
if (lean_obj_tag(v_a_323_) == 1)
{
lean_object* v_val_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_365_; 
lean_del_object(v___x_325_);
v_val_327_ = lean_ctor_get(v_a_323_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v_a_323_);
if (v_isSharedCheck_365_ == 0)
{
v___x_329_ = v_a_323_;
v_isShared_330_ = v_isSharedCheck_365_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_val_327_);
lean_dec(v_a_323_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_365_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__4));
lean_inc_ref(v___x_321_);
v___x_332_ = l_Lean_Meta_AC_getInstance(v___x_331_, v___x_321_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__6));
v___x_335_ = l_Lean_Meta_AC_getInstance(v___x_334_, v___x_321_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_348_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_348_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_348_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_348_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_343_; 
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_expr_312_);
lean_ctor_set(v___x_341_, 2, v_val_327_);
lean_ctor_set(v___x_341_, 3, v_a_333_);
lean_ctor_set(v___x_341_, 4, v_a_336_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_341_);
v___x_343_ = v___x_329_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_347_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_345_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v___x_343_);
v___x_345_ = v___x_338_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
lean_dec(v_a_333_);
lean_del_object(v___x_329_);
lean_dec(v_val_327_);
lean_dec_ref(v_expr_312_);
v_a_349_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_335_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_335_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_349_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_del_object(v___x_329_);
lean_dec(v_val_327_);
lean_dec_ref(v___x_321_);
lean_dec_ref(v_expr_312_);
v_a_357_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_332_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_332_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
else
{
lean_object* v___x_366_; lean_object* v___x_368_; 
lean_dec(v_a_323_);
lean_dec_ref(v___x_321_);
lean_dec_ref(v_expr_312_);
v___x_366_ = lean_box(0);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_366_);
v___x_368_ = v___x_325_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_dec_ref(v___x_321_);
lean_dec_ref(v_expr_312_);
v_a_371_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_322_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_322_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext___boxed(lean_object* v_expr_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Meta_AC_preContext(v_expr_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx(lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(0u);
return v___x_387_;
}
else
{
lean_object* v___x_388_; 
v___x_388_ = lean_unsigned_to_nat(1u);
return v___x_388_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx___boxed(lean_object* v_x_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Meta_AC_PreExpr_ctorIdx(v_x_389_);
lean_dec_ref(v_x_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___redArg(lean_object* v_t_391_, lean_object* v_k_392_){
_start:
{
if (lean_obj_tag(v_t_391_) == 0)
{
lean_object* v_lhs_393_; lean_object* v_rhs_394_; lean_object* v___x_395_; 
v_lhs_393_ = lean_ctor_get(v_t_391_, 0);
lean_inc_ref(v_lhs_393_);
v_rhs_394_ = lean_ctor_get(v_t_391_, 1);
lean_inc_ref(v_rhs_394_);
lean_dec_ref_known(v_t_391_, 2);
v___x_395_ = lean_apply_2(v_k_392_, v_lhs_393_, v_rhs_394_);
return v___x_395_;
}
else
{
lean_object* v_e_396_; lean_object* v___x_397_; 
v_e_396_ = lean_ctor_get(v_t_391_, 0);
lean_inc_ref(v_e_396_);
lean_dec_ref_known(v_t_391_, 1);
v___x_397_ = lean_apply_1(v_k_392_, v_e_396_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim(lean_object* v_motive_398_, lean_object* v_ctorIdx_399_, lean_object* v_t_400_, lean_object* v_h_401_, lean_object* v_k_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_400_, v_k_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___boxed(lean_object* v_motive_404_, lean_object* v_ctorIdx_405_, lean_object* v_t_406_, lean_object* v_h_407_, lean_object* v_k_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Meta_AC_PreExpr_ctorElim(v_motive_404_, v_ctorIdx_405_, v_t_406_, v_h_407_, v_k_408_);
lean_dec(v_ctorIdx_405_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim___redArg(lean_object* v_t_410_, lean_object* v_op_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_410_, v_op_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim(lean_object* v_motive_413_, lean_object* v_t_414_, lean_object* v_h_415_, lean_object* v_op_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_414_, v_op_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim___redArg(lean_object* v_t_418_, lean_object* v_var_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_418_, v_var_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim(lean_object* v_motive_421_, lean_object* v_t_422_, lean_object* v_h_423_, lean_object* v_var_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_422_, v_var_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_bin(lean_object* v_op_426_, lean_object* v_l_427_, lean_object* v_r_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = l_Lean_Expr_app___override(v_op_426_, v_l_427_);
v___x_430_ = l_Lean_Expr_app___override(v___x_429_, v_r_428_);
return v___x_430_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(lean_object* v_a_431_, lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 0;
return v___x_433_;
}
else
{
lean_object* v_key_434_; lean_object* v_tail_435_; uint8_t v___x_436_; 
v_key_434_ = lean_ctor_get(v_x_432_, 0);
v_tail_435_ = lean_ctor_get(v_x_432_, 2);
v___x_436_ = lean_expr_eqv(v_key_434_, v_a_431_);
if (v___x_436_ == 0)
{
v_x_432_ = v_tail_435_;
goto _start;
}
else
{
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg___boxed(lean_object* v_a_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_438_, v_x_439_);
lean_dec(v_x_439_);
lean_dec_ref(v_a_438_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_442_, lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
return v_x_442_;
}
else
{
lean_object* v_key_444_; lean_object* v_value_445_; lean_object* v_tail_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_469_; 
v_key_444_ = lean_ctor_get(v_x_443_, 0);
v_value_445_ = lean_ctor_get(v_x_443_, 1);
v_tail_446_ = lean_ctor_get(v_x_443_, 2);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_443_);
if (v_isSharedCheck_469_ == 0)
{
v___x_448_ = v_x_443_;
v_isShared_449_ = v_isSharedCheck_469_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_tail_446_);
lean_inc(v_value_445_);
lean_inc(v_key_444_);
lean_dec(v_x_443_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_469_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; uint64_t v___x_451_; uint64_t v___x_452_; uint64_t v___x_453_; uint64_t v_fold_454_; uint64_t v___x_455_; uint64_t v___x_456_; uint64_t v___x_457_; size_t v___x_458_; size_t v___x_459_; size_t v___x_460_; size_t v___x_461_; size_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_450_ = lean_array_get_size(v_x_442_);
v___x_451_ = l_Lean_Expr_hash(v_key_444_);
v___x_452_ = 32ULL;
v___x_453_ = lean_uint64_shift_right(v___x_451_, v___x_452_);
v_fold_454_ = lean_uint64_xor(v___x_451_, v___x_453_);
v___x_455_ = 16ULL;
v___x_456_ = lean_uint64_shift_right(v_fold_454_, v___x_455_);
v___x_457_ = lean_uint64_xor(v_fold_454_, v___x_456_);
v___x_458_ = lean_uint64_to_usize(v___x_457_);
v___x_459_ = lean_usize_of_nat(v___x_450_);
v___x_460_ = ((size_t)1ULL);
v___x_461_ = lean_usize_sub(v___x_459_, v___x_460_);
v___x_462_ = lean_usize_land(v___x_458_, v___x_461_);
v___x_463_ = lean_array_uget_borrowed(v_x_442_, v___x_462_);
lean_inc(v___x_463_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 2, v___x_463_);
v___x_465_ = v___x_448_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_key_444_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_value_445_);
lean_ctor_set(v_reuseFailAlloc_468_, 2, v___x_463_);
v___x_465_ = v_reuseFailAlloc_468_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_array_uset(v_x_442_, v___x_462_, v___x_465_);
v_x_442_ = v___x_466_;
v_x_443_ = v_tail_446_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_470_, lean_object* v_source_471_, lean_object* v_target_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = lean_array_get_size(v_source_471_);
v___x_474_ = lean_nat_dec_lt(v_i_470_, v___x_473_);
if (v___x_474_ == 0)
{
lean_dec_ref(v_source_471_);
lean_dec(v_i_470_);
return v_target_472_;
}
else
{
lean_object* v_es_475_; lean_object* v___x_476_; lean_object* v_source_477_; lean_object* v_target_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_es_475_ = lean_array_fget(v_source_471_, v_i_470_);
v___x_476_ = lean_box(0);
v_source_477_ = lean_array_fset(v_source_471_, v_i_470_, v___x_476_);
v_target_478_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_472_, v_es_475_);
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_nat_add(v_i_470_, v___x_479_);
lean_dec(v_i_470_);
v_i_470_ = v___x_480_;
v_source_471_ = v_source_477_;
v_target_472_ = v_target_478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(lean_object* v_data_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_nbuckets_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_483_ = lean_array_get_size(v_data_482_);
v___x_484_ = lean_unsigned_to_nat(2u);
v_nbuckets_485_ = lean_nat_mul(v___x_483_, v___x_484_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_box(0);
v___x_488_ = lean_mk_array(v_nbuckets_485_, v___x_487_);
v___x_489_ = lean_array_propagate_mark(v_data_482_, v___x_488_);
v___x_490_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(v___x_486_, v_data_482_, v___x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(lean_object* v_m_491_, lean_object* v_a_492_, lean_object* v_b_493_){
_start:
{
lean_object* v_size_494_; lean_object* v_buckets_495_; lean_object* v___x_496_; uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; uint64_t v_fold_500_; uint64_t v___x_501_; uint64_t v___x_502_; uint64_t v___x_503_; size_t v___x_504_; size_t v___x_505_; size_t v___x_506_; size_t v___x_507_; size_t v___x_508_; lean_object* v_bkt_509_; uint8_t v___x_510_; 
v_size_494_ = lean_ctor_get(v_m_491_, 0);
v_buckets_495_ = lean_ctor_get(v_m_491_, 1);
v___x_496_ = lean_array_get_size(v_buckets_495_);
v___x_497_ = l_Lean_Expr_hash(v_a_492_);
v___x_498_ = 32ULL;
v___x_499_ = lean_uint64_shift_right(v___x_497_, v___x_498_);
v_fold_500_ = lean_uint64_xor(v___x_497_, v___x_499_);
v___x_501_ = 16ULL;
v___x_502_ = lean_uint64_shift_right(v_fold_500_, v___x_501_);
v___x_503_ = lean_uint64_xor(v_fold_500_, v___x_502_);
v___x_504_ = lean_uint64_to_usize(v___x_503_);
v___x_505_ = lean_usize_of_nat(v___x_496_);
v___x_506_ = ((size_t)1ULL);
v___x_507_ = lean_usize_sub(v___x_505_, v___x_506_);
v___x_508_ = lean_usize_land(v___x_504_, v___x_507_);
v_bkt_509_ = lean_array_uget_borrowed(v_buckets_495_, v___x_508_);
v___x_510_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_492_, v_bkt_509_);
if (v___x_510_ == 0)
{
lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_531_; 
lean_inc_ref(v_buckets_495_);
lean_inc(v_size_494_);
v_isSharedCheck_531_ = !lean_is_exclusive(v_m_491_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; lean_object* v_unused_533_; 
v_unused_532_ = lean_ctor_get(v_m_491_, 1);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_m_491_, 0);
lean_dec(v_unused_533_);
v___x_512_ = v_m_491_;
v_isShared_513_ = v_isSharedCheck_531_;
goto v_resetjp_511_;
}
else
{
lean_dec(v_m_491_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_531_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v_size_x27_515_; lean_object* v___x_516_; lean_object* v_buckets_x27_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_514_ = lean_unsigned_to_nat(1u);
v_size_x27_515_ = lean_nat_add(v_size_494_, v___x_514_);
lean_dec(v_size_494_);
lean_inc(v_bkt_509_);
v___x_516_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_516_, 0, v_a_492_);
lean_ctor_set(v___x_516_, 1, v_b_493_);
lean_ctor_set(v___x_516_, 2, v_bkt_509_);
v_buckets_x27_517_ = lean_array_uset(v_buckets_495_, v___x_508_, v___x_516_);
v___x_518_ = lean_unsigned_to_nat(4u);
v___x_519_ = lean_nat_mul(v_size_x27_515_, v___x_518_);
v___x_520_ = lean_unsigned_to_nat(3u);
v___x_521_ = lean_nat_div(v___x_519_, v___x_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_array_get_size(v_buckets_x27_517_);
v___x_523_ = lean_nat_dec_le(v___x_521_, v___x_522_);
lean_dec(v___x_521_);
if (v___x_523_ == 0)
{
lean_object* v_val_524_; lean_object* v___x_526_; 
v_val_524_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_buckets_x27_517_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v_val_524_);
lean_ctor_set(v___x_512_, 0, v_size_x27_515_);
v___x_526_ = v___x_512_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_size_x27_515_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_val_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
else
{
lean_object* v___x_529_; 
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v_buckets_x27_517_);
lean_ctor_set(v___x_512_, 0, v_size_x27_515_);
v___x_529_ = v___x_512_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_size_x27_515_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_buckets_x27_517_);
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
else
{
lean_dec(v_b_493_);
lean_dec_ref(v_a_492_);
return v_m_491_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(lean_object* v_op_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_e_543_; lean_object* v___y_544_; 
if (lean_obj_tag(v_a_535_) == 5)
{
lean_object* v_fn_550_; 
v_fn_550_ = lean_ctor_get(v_a_535_, 0);
if (lean_obj_tag(v_fn_550_) == 5)
{
lean_object* v_arg_551_; lean_object* v_fn_552_; lean_object* v_arg_553_; lean_object* v___x_554_; 
v_arg_551_ = lean_ctor_get(v_a_535_, 1);
v_fn_552_ = lean_ctor_get(v_fn_550_, 0);
v_arg_553_ = lean_ctor_get(v_fn_550_, 1);
lean_inc_ref(v_fn_552_);
lean_inc_ref(v_op_534_);
v___x_554_ = l_Lean_Meta_isExprDefEq(v_op_534_, v_fn_552_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_596_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_596_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_596_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_596_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
uint8_t v___x_559_; 
v___x_559_ = lean_unbox(v_a_555_);
lean_dec(v_a_555_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
lean_dec_ref(v_op_534_);
v___x_560_ = lean_box(0);
lean_inc_ref(v_a_535_);
v___x_561_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v_a_536_, v_a_535_, v___x_560_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_a_535_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v___x_561_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_563_);
v___x_565_ = v___x_557_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
else
{
lean_object* v___x_567_; 
lean_inc_ref(v_arg_553_);
lean_inc_ref(v_arg_551_);
lean_del_object(v___x_557_);
lean_dec_ref_known(v_a_535_, 2);
lean_inc_ref(v_op_534_);
v___x_567_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_534_, v_arg_553_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_595_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v_fst_569_ = lean_ctor_get(v_a_568_, 0);
v_snd_570_ = lean_ctor_get(v_a_568_, 1);
v_isSharedCheck_595_ = !lean_is_exclusive(v_a_568_);
if (v_isSharedCheck_595_ == 0)
{
v___x_572_ = v_a_568_;
v_isShared_573_ = v_isSharedCheck_595_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_snd_570_);
lean_inc(v_fst_569_);
lean_dec(v_a_568_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_595_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; 
v___x_574_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_534_, v_arg_551_, v_snd_570_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_594_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_594_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_594_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_594_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v_fst_579_; lean_object* v_snd_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_593_; 
v_fst_579_ = lean_ctor_get(v_a_575_, 0);
v_snd_580_ = lean_ctor_get(v_a_575_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_a_575_);
if (v_isSharedCheck_593_ == 0)
{
v___x_582_ = v_a_575_;
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snd_580_);
lean_inc(v_fst_579_);
lean_dec(v_a_575_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 1, v_fst_579_);
v___x_585_ = v___x_572_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_fst_569_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_fst_579_);
v___x_585_ = v_reuseFailAlloc_592_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_585_);
v___x_587_ = v___x_582_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_snd_580_);
v___x_587_ = v_reuseFailAlloc_591_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_589_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_587_);
v___x_589_ = v___x_577_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_572_);
lean_dec(v_fst_569_);
return v___x_574_;
}
}
}
else
{
lean_dec_ref(v_arg_551_);
lean_dec_ref(v_op_534_);
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref_known(v_a_535_, 2);
lean_dec_ref(v_a_536_);
lean_dec_ref(v_op_534_);
v_a_597_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_554_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_554_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_dec_ref(v_op_534_);
v_e_543_ = v_a_535_;
v___y_544_ = v_a_536_;
goto v___jp_542_;
}
}
else
{
lean_dec_ref(v_op_534_);
v_e_543_ = v_a_535_;
v___y_544_ = v_a_536_;
goto v___jp_542_;
}
v___jp_542_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_545_ = lean_box(0);
lean_inc_ref(v_e_543_);
v___x_546_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v___y_544_, v_e_543_, v___x_545_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_e_543_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v___x_546_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr___boxed(lean_object* v_op_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0(lean_object* v_00_u03b2_614_, lean_object* v_m_615_, lean_object* v_a_616_, lean_object* v_b_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v_m_615_, v_a_616_, v_b_617_);
return v___x_618_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(lean_object* v_00_u03b2_619_, lean_object* v_a_620_, lean_object* v_x_621_){
_start:
{
uint8_t v___x_622_; 
v___x_622_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_620_, v_x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_623_, lean_object* v_a_624_, lean_object* v_x_625_){
_start:
{
uint8_t v_res_626_; lean_object* v_r_627_; 
v_res_626_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(v_00_u03b2_623_, v_a_624_, v_x_625_);
lean_dec(v_x_625_);
lean_dec_ref(v_a_624_);
v_r_627_ = lean_box(v_res_626_);
return v_r_627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1(lean_object* v_00_u03b2_628_, lean_object* v_data_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_data_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_631_, lean_object* v_i_632_, lean_object* v_source_633_, lean_object* v_target_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(v_i_632_, v_source_633_, v_target_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_636_, lean_object* v_x_637_, lean_object* v_x_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_637_, v_x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(lean_object* v_varMap_640_, lean_object* v_a_641_){
_start:
{
if (lean_obj_tag(v_a_641_) == 0)
{
lean_object* v_lhs_642_; lean_object* v_rhs_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_652_; 
v_lhs_642_ = lean_ctor_get(v_a_641_, 0);
v_rhs_643_ = lean_ctor_get(v_a_641_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v_a_641_);
if (v_isSharedCheck_652_ == 0)
{
v___x_645_ = v_a_641_;
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_rhs_643_);
lean_inc(v_lhs_642_);
lean_dec(v_a_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
lean_inc_ref(v_varMap_640_);
v___x_647_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v_varMap_640_, v_lhs_642_);
v___x_648_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v_varMap_640_, v_rhs_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set_tag(v___x_645_, 1);
lean_ctor_set(v___x_645_, 1, v___x_648_);
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_650_ = v___x_645_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_647_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v_e_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_661_; 
v_e_653_ = lean_ctor_get(v_a_641_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v_a_641_);
if (v_isSharedCheck_661_ == 0)
{
v___x_655_ = v_a_641_;
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_e_653_);
lean_dec(v_a_641_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_657_ = lean_apply_1(v_varMap_640_, v_e_653_);
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 0);
lean_ctor_set(v___x_655_, 0, v___x_657_);
v___x_659_ = v___x_655_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
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
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(lean_object* v_msg_662_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = lean_panic_fn_borrowed(v___x_663_, v_msg_662_);
return v___x_664_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_668_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2));
v___x_669_ = lean_unsigned_to_nat(11u);
v___x_670_ = lean_unsigned_to_nat(163u);
v___x_671_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1));
v___x_672_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0));
v___x_673_ = l_mkPanicMessageWithDecl(v___x_672_, v___x_671_, v___x_670_, v___x_669_, v___x_668_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(lean_object* v_a_674_, lean_object* v_x_675_){
_start:
{
if (lean_obj_tag(v_x_675_) == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3);
v___x_677_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(v___x_676_);
return v___x_677_;
}
else
{
lean_object* v_key_678_; lean_object* v_value_679_; lean_object* v_tail_680_; uint8_t v___x_681_; 
v_key_678_ = lean_ctor_get(v_x_675_, 0);
v_value_679_ = lean_ctor_get(v_x_675_, 1);
v_tail_680_ = lean_ctor_get(v_x_675_, 2);
v___x_681_ = lean_expr_eqv(v_key_678_, v_a_674_);
if (v___x_681_ == 0)
{
v_x_675_ = v_tail_680_;
goto _start;
}
else
{
lean_inc(v_value_679_);
return v_value_679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___boxed(lean_object* v_a_683_, lean_object* v_x_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(v_a_683_, v_x_684_);
lean_dec(v_x_684_);
lean_dec_ref(v_a_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(lean_object* v_m_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_buckets_688_; lean_object* v___x_689_; uint64_t v___x_690_; uint64_t v___x_691_; uint64_t v___x_692_; uint64_t v_fold_693_; uint64_t v___x_694_; uint64_t v___x_695_; uint64_t v___x_696_; size_t v___x_697_; size_t v___x_698_; size_t v___x_699_; size_t v___x_700_; size_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_buckets_688_ = lean_ctor_get(v_m_686_, 1);
v___x_689_ = lean_array_get_size(v_buckets_688_);
v___x_690_ = l_Lean_Expr_hash(v_a_687_);
v___x_691_ = 32ULL;
v___x_692_ = lean_uint64_shift_right(v___x_690_, v___x_691_);
v_fold_693_ = lean_uint64_xor(v___x_690_, v___x_692_);
v___x_694_ = 16ULL;
v___x_695_ = lean_uint64_shift_right(v_fold_693_, v___x_694_);
v___x_696_ = lean_uint64_xor(v_fold_693_, v___x_695_);
v___x_697_ = lean_uint64_to_usize(v___x_696_);
v___x_698_ = lean_usize_of_nat(v___x_689_);
v___x_699_ = ((size_t)1ULL);
v___x_700_ = lean_usize_sub(v___x_698_, v___x_699_);
v___x_701_ = lean_usize_land(v___x_697_, v___x_700_);
v___x_702_ = lean_array_uget_borrowed(v_buckets_688_, v___x_701_);
v___x_703_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(v_a_687_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2___boxed(lean_object* v_m_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(v_m_704_, v_a_705_);
lean_dec_ref(v_a_705_);
lean_dec_ref(v_m_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0(lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(v___y_707_, v___y_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0___boxed(lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Meta_AC_toACExpr___lam__0(v___y_710_, v___y_711_);
lean_dec_ref(v___y_711_);
lean_dec_ref(v___y_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(lean_object* v_x_713_, lean_object* v_x_714_){
_start:
{
if (lean_obj_tag(v_x_714_) == 0)
{
return v_x_713_;
}
else
{
lean_object* v_key_715_; lean_object* v_tail_716_; lean_object* v___x_717_; 
v_key_715_ = lean_ctor_get(v_x_714_, 0);
lean_inc(v_key_715_);
v_tail_716_ = lean_ctor_get(v_x_714_, 2);
lean_inc(v_tail_716_);
lean_dec_ref_known(v_x_714_, 3);
v___x_717_ = lean_array_push(v_x_713_, v_key_715_);
v_x_713_ = v___x_717_;
v_x_714_ = v_tail_716_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(lean_object* v_as_719_, size_t v_i_720_, size_t v_stop_721_, lean_object* v_b_722_){
_start:
{
uint8_t v___x_723_; 
v___x_723_ = lean_usize_dec_eq(v_i_720_, v_stop_721_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; lean_object* v___x_725_; size_t v___x_726_; size_t v___x_727_; 
v___x_724_ = lean_array_uget_borrowed(v_as_719_, v_i_720_);
lean_inc(v___x_724_);
v___x_725_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(v_b_722_, v___x_724_);
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_add(v_i_720_, v___x_726_);
v_i_720_ = v___x_727_;
v_b_722_ = v___x_725_;
goto _start;
}
else
{
return v_b_722_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5___boxed(lean_object* v_as_729_, lean_object* v_i_730_, lean_object* v_stop_731_, lean_object* v_b_732_){
_start:
{
size_t v_i_boxed_733_; size_t v_stop_boxed_734_; lean_object* v_res_735_; 
v_i_boxed_733_ = lean_unbox_usize(v_i_730_);
lean_dec(v_i_730_);
v_stop_boxed_734_ = lean_unbox_usize(v_stop_731_);
lean_dec(v_stop_731_);
v_res_735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(v_as_729_, v_i_boxed_733_, v_stop_boxed_734_, v_b_732_);
lean_dec_ref(v_as_729_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(lean_object* v_xs_736_, lean_object* v_j_737_){
_start:
{
lean_object* v_zero_738_; uint8_t v_isZero_739_; 
v_zero_738_ = lean_unsigned_to_nat(0u);
v_isZero_739_ = lean_nat_dec_eq(v_j_737_, v_zero_738_);
if (v_isZero_739_ == 1)
{
lean_dec(v_j_737_);
return v_xs_736_;
}
else
{
lean_object* v_one_740_; lean_object* v_n_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
v_one_740_ = lean_unsigned_to_nat(1u);
v_n_741_ = lean_nat_sub(v_j_737_, v_one_740_);
v___x_742_ = lean_array_fget_borrowed(v_xs_736_, v_j_737_);
v___x_743_ = lean_array_fget_borrowed(v_xs_736_, v_n_741_);
v___x_744_ = lean_expr_lt(v___x_742_, v___x_743_);
if (v___x_744_ == 0)
{
lean_dec(v_n_741_);
lean_dec(v_j_737_);
return v_xs_736_;
}
else
{
lean_object* v___x_745_; 
v___x_745_ = lean_array_fswap(v_xs_736_, v_j_737_, v_n_741_);
lean_dec(v_j_737_);
v_xs_736_ = v___x_745_;
v_j_737_ = v_n_741_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(lean_object* v_xs_747_, lean_object* v_i_748_, lean_object* v_fuel_749_){
_start:
{
lean_object* v_zero_750_; uint8_t v_isZero_751_; 
v_zero_750_ = lean_unsigned_to_nat(0u);
v_isZero_751_ = lean_nat_dec_eq(v_fuel_749_, v_zero_750_);
if (v_isZero_751_ == 1)
{
lean_dec(v_fuel_749_);
lean_dec(v_i_748_);
return v_xs_747_;
}
else
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = lean_array_get_size(v_xs_747_);
v___x_753_ = lean_nat_dec_lt(v_i_748_, v___x_752_);
if (v___x_753_ == 0)
{
lean_dec(v_fuel_749_);
lean_dec(v_i_748_);
return v_xs_747_;
}
else
{
lean_object* v_one_754_; lean_object* v_n_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_one_754_ = lean_unsigned_to_nat(1u);
v_n_755_ = lean_nat_sub(v_fuel_749_, v_one_754_);
lean_dec(v_fuel_749_);
lean_inc(v_i_748_);
v___x_756_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(v_xs_747_, v_i_748_);
v___x_757_ = lean_nat_add(v_i_748_, v_one_754_);
lean_dec(v_i_748_);
v_xs_747_ = v___x_756_;
v_i_748_ = v___x_757_;
v_fuel_749_ = v_n_755_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(lean_object* v_a_759_, lean_object* v_b_760_, lean_object* v_x_761_){
_start:
{
if (lean_obj_tag(v_x_761_) == 0)
{
lean_dec(v_b_760_);
lean_dec_ref(v_a_759_);
return v_x_761_;
}
else
{
lean_object* v_key_762_; lean_object* v_value_763_; lean_object* v_tail_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_776_; 
v_key_762_ = lean_ctor_get(v_x_761_, 0);
v_value_763_ = lean_ctor_get(v_x_761_, 1);
v_tail_764_ = lean_ctor_get(v_x_761_, 2);
v_isSharedCheck_776_ = !lean_is_exclusive(v_x_761_);
if (v_isSharedCheck_776_ == 0)
{
v___x_766_ = v_x_761_;
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_tail_764_);
lean_inc(v_value_763_);
lean_inc(v_key_762_);
lean_dec(v_x_761_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
uint8_t v___x_768_; 
v___x_768_ = lean_expr_eqv(v_key_762_, v_a_759_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_769_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_759_, v_b_760_, v_tail_764_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 2, v___x_769_);
v___x_771_ = v___x_766_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_key_762_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_value_763_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
else
{
lean_object* v___x_774_; 
lean_dec(v_value_763_);
lean_dec(v_key_762_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 1, v_b_760_);
lean_ctor_set(v___x_766_, 0, v_a_759_);
v___x_774_ = v___x_766_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_759_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_b_760_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v_tail_764_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(lean_object* v_m_777_, lean_object* v_a_778_, lean_object* v_b_779_){
_start:
{
lean_object* v_size_780_; lean_object* v_buckets_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_824_; 
v_size_780_ = lean_ctor_get(v_m_777_, 0);
v_buckets_781_ = lean_ctor_get(v_m_777_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_m_777_);
if (v_isSharedCheck_824_ == 0)
{
v___x_783_ = v_m_777_;
v_isShared_784_ = v_isSharedCheck_824_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_buckets_781_);
lean_inc(v_size_780_);
lean_dec(v_m_777_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_824_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; uint64_t v___x_786_; uint64_t v___x_787_; uint64_t v___x_788_; uint64_t v_fold_789_; uint64_t v___x_790_; uint64_t v___x_791_; uint64_t v___x_792_; size_t v___x_793_; size_t v___x_794_; size_t v___x_795_; size_t v___x_796_; size_t v___x_797_; lean_object* v_bkt_798_; uint8_t v___x_799_; 
v___x_785_ = lean_array_get_size(v_buckets_781_);
v___x_786_ = l_Lean_Expr_hash(v_a_778_);
v___x_787_ = 32ULL;
v___x_788_ = lean_uint64_shift_right(v___x_786_, v___x_787_);
v_fold_789_ = lean_uint64_xor(v___x_786_, v___x_788_);
v___x_790_ = 16ULL;
v___x_791_ = lean_uint64_shift_right(v_fold_789_, v___x_790_);
v___x_792_ = lean_uint64_xor(v_fold_789_, v___x_791_);
v___x_793_ = lean_uint64_to_usize(v___x_792_);
v___x_794_ = lean_usize_of_nat(v___x_785_);
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_sub(v___x_794_, v___x_795_);
v___x_797_ = lean_usize_land(v___x_793_, v___x_796_);
v_bkt_798_ = lean_array_uget_borrowed(v_buckets_781_, v___x_797_);
v___x_799_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_778_, v_bkt_798_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; lean_object* v_size_x27_801_; lean_object* v___x_802_; lean_object* v_buckets_x27_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_800_ = lean_unsigned_to_nat(1u);
v_size_x27_801_ = lean_nat_add(v_size_780_, v___x_800_);
lean_dec(v_size_780_);
lean_inc(v_bkt_798_);
v___x_802_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_802_, 0, v_a_778_);
lean_ctor_set(v___x_802_, 1, v_b_779_);
lean_ctor_set(v___x_802_, 2, v_bkt_798_);
v_buckets_x27_803_ = lean_array_uset(v_buckets_781_, v___x_797_, v___x_802_);
v___x_804_ = lean_unsigned_to_nat(4u);
v___x_805_ = lean_nat_mul(v_size_x27_801_, v___x_804_);
v___x_806_ = lean_unsigned_to_nat(3u);
v___x_807_ = lean_nat_div(v___x_805_, v___x_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_array_get_size(v_buckets_x27_803_);
v___x_809_ = lean_nat_dec_le(v___x_807_, v___x_808_);
lean_dec(v___x_807_);
if (v___x_809_ == 0)
{
lean_object* v_val_810_; lean_object* v___x_812_; 
v_val_810_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_buckets_x27_803_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v_val_810_);
lean_ctor_set(v___x_783_, 0, v_size_x27_801_);
v___x_812_ = v___x_783_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_size_x27_801_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_val_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
else
{
lean_object* v___x_815_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v_buckets_x27_803_);
lean_ctor_set(v___x_783_, 0, v_size_x27_801_);
v___x_815_ = v___x_783_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_size_x27_801_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_buckets_x27_803_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
else
{
lean_object* v___x_817_; lean_object* v_buckets_x27_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
lean_inc(v_bkt_798_);
v___x_817_ = lean_box(0);
v_buckets_x27_818_ = lean_array_uset(v_buckets_781_, v___x_797_, v___x_817_);
v___x_819_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_778_, v_b_779_, v_bkt_798_);
v___x_820_ = lean_array_uset(v_buckets_x27_818_, v___x_797_, v___x_819_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v___x_820_);
v___x_822_ = v___x_783_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_size_780_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(lean_object* v_as_825_, size_t v_i_826_, size_t v_stop_827_, lean_object* v_b_828_){
_start:
{
uint8_t v___x_829_; 
v___x_829_ = lean_usize_dec_eq(v_i_826_, v_stop_827_);
if (v___x_829_ == 0)
{
lean_object* v_size_830_; lean_object* v___x_831_; lean_object* v___x_832_; size_t v___x_833_; size_t v___x_834_; 
v_size_830_ = lean_ctor_get(v_b_828_, 0);
lean_inc(v_size_830_);
v___x_831_ = lean_array_uget_borrowed(v_as_825_, v_i_826_);
lean_inc(v___x_831_);
v___x_832_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(v_b_828_, v___x_831_, v_size_830_);
v___x_833_ = ((size_t)1ULL);
v___x_834_ = lean_usize_add(v_i_826_, v___x_833_);
v_i_826_ = v___x_834_;
v_b_828_ = v___x_832_;
goto _start;
}
else
{
return v_b_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3___boxed(lean_object* v_as_836_, lean_object* v_i_837_, lean_object* v_stop_838_, lean_object* v_b_839_){
_start:
{
size_t v_i_boxed_840_; size_t v_stop_boxed_841_; lean_object* v_res_842_; 
v_i_boxed_840_ = lean_unbox_usize(v_i_837_);
lean_dec(v_i_837_);
v_stop_boxed_841_ = lean_unbox_usize(v_stop_838_);
lean_dec(v_stop_838_);
v_res_842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v_as_836_, v_i_boxed_840_, v_stop_boxed_841_, v_b_839_);
lean_dec_ref(v_as_836_);
return v_res_842_;
}
}
static lean_object* _init_l_Lean_Meta_AC_toACExpr___closed__0(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_box(0);
v___x_844_ = lean_unsigned_to_nat(16u);
v___x_845_ = lean_mk_array(v___x_844_, v___x_843_);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_Meta_AC_toACExpr___closed__1(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_obj_once(&l_Lean_Meta_AC_toACExpr___closed__0, &l_Lean_Meta_AC_toACExpr___closed__0_once, _init_l_Lean_Meta_AC_toACExpr___closed__0);
v___x_847_ = lean_unsigned_to_nat(0u);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr(lean_object* v_op_849_, lean_object* v_l_850_, lean_object* v_r_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
lean_inc_ref(v_op_849_);
v___x_857_ = l_Lean_mkAppB(v_op_849_, v_l_850_, v_r_851_);
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = lean_obj_once(&l_Lean_Meta_AC_toACExpr___closed__1, &l_Lean_Meta_AC_toACExpr___closed__1_once, _init_l_Lean_Meta_AC_toACExpr___closed__1);
v___x_860_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_849_, v___x_857_, v___x_859_, v_a_852_, v_a_853_, v_a_854_, v_a_855_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_903_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_903_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_903_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_903_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v_fst_865_; lean_object* v_snd_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_902_; 
v_fst_865_ = lean_ctor_get(v_a_861_, 0);
v_snd_866_ = lean_ctor_get(v_a_861_, 1);
v_isSharedCheck_902_ = !lean_is_exclusive(v_a_861_);
if (v_isSharedCheck_902_ == 0)
{
v___x_868_ = v_a_861_;
v_isShared_869_ = v_isSharedCheck_902_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_snd_866_);
lean_inc(v_fst_865_);
lean_dec(v_a_861_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_902_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_882_; lean_object* v_size_894_; lean_object* v_buckets_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v_size_894_ = lean_ctor_get(v_snd_866_, 0);
lean_inc(v_size_894_);
v_buckets_895_ = lean_ctor_get(v_snd_866_, 1);
lean_inc_ref(v_buckets_895_);
lean_dec(v_snd_866_);
v___x_896_ = lean_mk_empty_array_with_capacity(v_size_894_);
lean_dec(v_size_894_);
v___x_897_ = lean_array_get_size(v_buckets_895_);
v___x_898_ = lean_nat_dec_lt(v___x_858_, v___x_897_);
if (v___x_898_ == 0)
{
lean_dec_ref(v_buckets_895_);
v___y_882_ = v___x_896_;
goto v___jp_881_;
}
else
{
size_t v___x_899_; size_t v___x_900_; lean_object* v___x_901_; 
v___x_899_ = ((size_t)0ULL);
v___x_900_ = lean_usize_of_nat(v___x_897_);
v___x_901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(v_buckets_895_, v___x_899_, v___x_900_, v___x_896_);
lean_dec_ref(v_buckets_895_);
v___y_882_ = v___x_901_;
goto v___jp_881_;
}
v___jp_870_:
{
lean_object* v___f_873_; lean_object* v___x_874_; lean_object* v___x_876_; 
v___f_873_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_toACExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_873_, 0, v___y_872_);
v___x_874_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v___f_873_, v_fst_865_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 1, v___x_874_);
lean_ctor_set(v___x_868_, 0, v___y_871_);
v___x_876_ = v___x_868_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___y_871_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_874_);
v___x_876_ = v_reuseFailAlloc_880_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
lean_object* v___x_878_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_876_);
v___x_878_ = v___x_863_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
v___jp_881_:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_883_ = lean_array_get_size(v___y_882_);
v___x_884_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(v___y_882_, v___x_858_, v___x_883_);
v___x_885_ = lean_array_get_size(v___x_884_);
v___x_886_ = lean_nat_dec_lt(v___x_858_, v___x_885_);
if (v___x_886_ == 0)
{
v___y_871_ = v___x_884_;
v___y_872_ = v___x_859_;
goto v___jp_870_;
}
else
{
uint8_t v___x_887_; 
v___x_887_ = lean_nat_dec_le(v___x_885_, v___x_885_);
if (v___x_887_ == 0)
{
if (v___x_886_ == 0)
{
v___y_871_ = v___x_884_;
v___y_872_ = v___x_859_;
goto v___jp_870_;
}
else
{
size_t v___x_888_; size_t v___x_889_; lean_object* v___x_890_; 
v___x_888_ = ((size_t)0ULL);
v___x_889_ = lean_usize_of_nat(v___x_885_);
v___x_890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v___x_884_, v___x_888_, v___x_889_, v___x_859_);
v___y_871_ = v___x_884_;
v___y_872_ = v___x_890_;
goto v___jp_870_;
}
}
else
{
size_t v___x_891_; size_t v___x_892_; lean_object* v___x_893_; 
v___x_891_ = ((size_t)0ULL);
v___x_892_ = lean_usize_of_nat(v___x_885_);
v___x_893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v___x_884_, v___x_891_, v___x_892_, v___x_859_);
v___y_871_ = v___x_884_;
v___y_872_ = v___x_893_;
goto v___jp_870_;
}
}
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_a_904_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_860_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_860_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___boxed(lean_object* v_op_912_, lean_object* v_l_913_, lean_object* v_r_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_Meta_AC_toACExpr(v_op_912_, v_l_913_, v_r_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0(lean_object* v_00_u03b2_921_, lean_object* v_m_922_, lean_object* v_a_923_, lean_object* v_b_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(v_m_922_, v_a_923_, v_b_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0(lean_object* v_00_u03b2_926_, lean_object* v_a_927_, lean_object* v_b_928_, lean_object* v_x_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_927_, v_b_928_, v_x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2(lean_object* v_xs_931_, lean_object* v_j_932_, lean_object* v_h_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(v_xs_931_, v_j_932_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(lean_object* v_k_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
lean_inc(v___y_940_);
lean_inc_ref(v___y_939_);
lean_inc(v___y_938_);
lean_inc_ref(v___y_937_);
v___x_942_ = lean_apply_6(v_k_935_, v_b_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, lean_box(0));
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_943_, lean_object* v_b_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(v_k_943_, v_b_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(lean_object* v_name_951_, uint8_t v_bi_952_, lean_object* v_type_953_, lean_object* v_k_954_, uint8_t v_kind_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v___f_961_; lean_object* v___x_962_; 
v___f_961_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_961_, 0, v_k_954_);
v___x_962_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_951_, v_bi_952_, v_type_953_, v___f_961_, v_kind_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_962_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___boxed(lean_object* v_name_979_, lean_object* v_bi_980_, lean_object* v_type_981_, lean_object* v_k_982_, lean_object* v_kind_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
uint8_t v_bi_boxed_989_; uint8_t v_kind_boxed_990_; lean_object* v_res_991_; 
v_bi_boxed_989_ = lean_unbox(v_bi_980_);
v_kind_boxed_990_ = lean_unbox(v_kind_983_);
v_res_991_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_979_, v_bi_boxed_989_, v_type_981_, v_k_982_, v_kind_boxed_990_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(lean_object* v_name_992_, lean_object* v_type_993_, lean_object* v_k_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
uint8_t v___x_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = 0;
v___x_1001_ = 0;
v___x_1002_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_992_, v___x_1000_, v_type_993_, v_k_994_, v___x_1001_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg___boxed(lean_object* v_name_1003_, lean_object* v_type_1004_, lean_object* v_k_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v_name_1003_, v_type_1004_, v_k_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed(lean_object** _args){
lean_object* v_i_1016_ = _args[0];
lean_object* v_v_1017_ = _args[1];
lean_object* v_acc_1018_ = _args[2];
lean_object* v___x_1019_ = _args[3];
lean_object* v_vars_1020_ = _args[4];
lean_object* v___x_1021_ = _args[5];
lean_object* v_val_1022_ = _args[6];
lean_object* v_args_1023_ = _args[7];
lean_object* v_preContext_1024_ = _args[8];
lean_object* v_atoms_1025_ = _args[9];
lean_object* v_k_1026_ = _args[10];
lean_object* v_00_u03b1_1027_ = _args[11];
lean_object* v_u_1028_ = _args[12];
lean_object* v_iv_1029_ = _args[13];
lean_object* v___y_1030_ = _args[14];
lean_object* v___y_1031_ = _args[15];
lean_object* v___y_1032_ = _args[16];
lean_object* v___y_1033_ = _args[17];
lean_object* v___y_1034_ = _args[18];
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(v_i_1016_, v_v_1017_, v_acc_1018_, v___x_1019_, v_vars_1020_, v___x_1021_, v_val_1022_, v_args_1023_, v_preContext_1024_, v_atoms_1025_, v_k_1026_, v_00_u03b1_1027_, v_u_1028_, v_iv_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v_i_1016_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(lean_object* v_preContext_1039_, lean_object* v_atoms_1040_, lean_object* v_i_1041_, lean_object* v_acc_1042_, lean_object* v_vars_1043_, lean_object* v_args_1044_, lean_object* v_k_1045_, lean_object* v_00_u03b1_1046_, lean_object* v_u_1047_, lean_object* v_v_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_op_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v_op_1054_ = lean_ctor_get(v_preContext_1039_, 1);
v___x_1055_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
v___x_1056_ = lean_array_fget_borrowed(v_atoms_1040_, v_i_1041_);
v___x_1057_ = lean_unsigned_to_nat(2u);
v___x_1058_ = lean_mk_empty_array_with_capacity(v___x_1057_);
lean_inc_ref(v_op_1054_);
lean_inc_ref(v___x_1058_);
v___x_1059_ = lean_array_push(v___x_1058_, v_op_1054_);
lean_inc(v___x_1056_);
v___x_1060_ = lean_array_push(v___x_1059_, v___x_1056_);
v___x_1061_ = l_Lean_Meta_AC_getInstance(v___x_1055_, v___x_1060_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
if (lean_obj_tag(v_a_1062_) == 0)
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
lean_dec_ref(v___x_1058_);
v___x_1063_ = lean_unsigned_to_nat(1u);
v___x_1064_ = lean_nat_add(v_i_1041_, v___x_1063_);
lean_dec(v_i_1041_);
lean_inc_ref(v_v_1048_);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v_v_1048_);
lean_ctor_set(v___x_1065_, 1, v_a_1062_);
v___x_1066_ = lean_array_push(v_acc_1042_, v___x_1065_);
v___x_1067_ = lean_array_push(v_vars_1043_, v_v_1048_);
lean_inc(v___x_1056_);
v___x_1068_ = lean_array_push(v_args_1044_, v___x_1056_);
v___x_1069_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1039_, v_atoms_1040_, v_k_1045_, v_00_u03b1_1046_, v_u_1047_, v___x_1064_, v___x_1066_, v___x_1067_, v___x_1068_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
return v___x_1069_;
}
else
{
lean_object* v_val_1070_; lean_object* v___f_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
lean_inc(v___x_1056_);
lean_inc_ref(v_op_1054_);
v_val_1070_ = lean_ctor_get(v_a_1062_, 0);
lean_inc(v_val_1070_);
lean_dec_ref_known(v_a_1062_, 1);
lean_inc(v_u_1047_);
lean_inc_ref(v_00_u03b1_1046_);
lean_inc_ref(v_v_1048_);
v___f_1071_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed), 19, 13);
lean_closure_set(v___f_1071_, 0, v_i_1041_);
lean_closure_set(v___f_1071_, 1, v_v_1048_);
lean_closure_set(v___f_1071_, 2, v_acc_1042_);
lean_closure_set(v___f_1071_, 3, v___x_1058_);
lean_closure_set(v___f_1071_, 4, v_vars_1043_);
lean_closure_set(v___f_1071_, 5, v___x_1056_);
lean_closure_set(v___f_1071_, 6, v_val_1070_);
lean_closure_set(v___f_1071_, 7, v_args_1044_);
lean_closure_set(v___f_1071_, 8, v_preContext_1039_);
lean_closure_set(v___f_1071_, 9, v_atoms_1040_);
lean_closure_set(v___f_1071_, 10, v_k_1045_);
lean_closure_set(v___f_1071_, 11, v_00_u03b1_1046_);
lean_closure_set(v___f_1071_, 12, v_u_1047_);
v___x_1072_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3));
v___x_1073_ = lean_box(0);
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_u_1047_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = l_Lean_mkConst(v___x_1055_, v___x_1074_);
v___x_1076_ = l_Lean_mkApp3(v___x_1075_, v_00_u03b1_1046_, v_op_1054_, v_v_1048_);
v___x_1077_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v___x_1072_, v___x_1076_, v___f_1071_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
return v___x_1077_;
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref(v___x_1058_);
lean_dec_ref(v_v_1048_);
lean_dec(v_u_1047_);
lean_dec_ref(v_00_u03b1_1046_);
lean_dec_ref(v_k_1045_);
lean_dec_ref(v_args_1044_);
lean_dec_ref(v_vars_1043_);
lean_dec_ref(v_acc_1042_);
lean_dec(v_i_1041_);
lean_dec_ref(v_atoms_1040_);
lean_dec_ref(v_preContext_1039_);
v_a_1078_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1061_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1061_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed(lean_object* v_preContext_1086_, lean_object* v_atoms_1087_, lean_object* v_i_1088_, lean_object* v_acc_1089_, lean_object* v_vars_1090_, lean_object* v_args_1091_, lean_object* v_k_1092_, lean_object* v_00_u03b1_1093_, lean_object* v_u_1094_, lean_object* v_v_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(v_preContext_1086_, v_atoms_1087_, v_i_1088_, v_acc_1089_, v_vars_1090_, v_args_1091_, v_k_1092_, v_00_u03b1_1093_, v_u_1094_, v_v_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(lean_object* v_preContext_1105_, lean_object* v_atoms_1106_, lean_object* v_k_1107_, lean_object* v_00_u03b1_1108_, lean_object* v_u_1109_, lean_object* v_i_1110_, lean_object* v_acc_1111_, lean_object* v_vars_1112_, lean_object* v_args_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v___x_1119_; uint8_t v___x_1120_; 
v___x_1119_ = lean_array_get_size(v_atoms_1106_);
v___x_1120_ = lean_nat_dec_lt(v_i_1110_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; 
lean_dec(v_i_1110_);
lean_dec(v_u_1109_);
lean_dec_ref(v_00_u03b1_1108_);
lean_dec_ref(v_atoms_1106_);
lean_dec_ref(v_preContext_1105_);
lean_inc(v_a_1117_);
lean_inc_ref(v_a_1116_);
lean_inc(v_a_1115_);
lean_inc_ref(v_a_1114_);
v___x_1121_ = lean_apply_6(v_k_1107_, v_acc_1111_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, lean_box(0));
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; uint8_t v___x_1123_; uint8_t v___x_1124_; lean_object* v___x_1125_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1123_ = 1;
v___x_1124_ = 1;
v___x_1125_ = l_Lean_Meta_mkLambdaFVars(v_vars_1112_, v_a_1122_, v___x_1120_, v___x_1123_, v___x_1120_, v___x_1123_, v___x_1124_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1134_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1128_ = v___x_1125_;
v_isShared_1129_ = v_isSharedCheck_1134_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1125_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1134_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1130_ = l_Lean_mkAppN(v_a_1126_, v_args_1113_);
lean_dec_ref(v_args_1113_);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 0, v___x_1130_);
v___x_1132_ = v___x_1128_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
else
{
lean_dec_ref(v_args_1113_);
return v___x_1125_;
}
}
else
{
lean_dec_ref(v_args_1113_);
lean_dec_ref(v_vars_1112_);
return v___x_1121_;
}
}
else
{
lean_object* v___f_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_inc_ref(v_00_u03b1_1108_);
v___f_1135_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed), 15, 9);
lean_closure_set(v___f_1135_, 0, v_preContext_1105_);
lean_closure_set(v___f_1135_, 1, v_atoms_1106_);
lean_closure_set(v___f_1135_, 2, v_i_1110_);
lean_closure_set(v___f_1135_, 3, v_acc_1111_);
lean_closure_set(v___f_1135_, 4, v_vars_1112_);
lean_closure_set(v___f_1135_, 5, v_args_1113_);
lean_closure_set(v___f_1135_, 6, v_k_1107_);
lean_closure_set(v___f_1135_, 7, v_00_u03b1_1108_);
lean_closure_set(v___f_1135_, 8, v_u_1109_);
v___x_1136_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1));
v___x_1137_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v___x_1136_, v_00_u03b1_1108_, v___f_1135_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(lean_object* v_i_1138_, lean_object* v_v_1139_, lean_object* v_acc_1140_, lean_object* v___x_1141_, lean_object* v_vars_1142_, lean_object* v___x_1143_, lean_object* v_val_1144_, lean_object* v_args_1145_, lean_object* v_preContext_1146_, lean_object* v_atoms_1147_, lean_object* v_k_1148_, lean_object* v_00_u03b1_1149_, lean_object* v_u_1150_, lean_object* v_iv_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1157_ = lean_unsigned_to_nat(1u);
v___x_1158_ = lean_nat_add(v_i_1138_, v___x_1157_);
lean_inc_ref(v_iv_1151_);
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v_iv_1151_);
lean_inc_ref(v_v_1139_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v_v_1139_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_array_push(v_acc_1140_, v___x_1160_);
lean_inc_ref(v___x_1141_);
v___x_1162_ = lean_array_push(v___x_1141_, v_v_1139_);
v___x_1163_ = lean_array_push(v___x_1162_, v_iv_1151_);
v___x_1164_ = l_Array_append___redArg(v_vars_1142_, v___x_1163_);
lean_dec_ref(v___x_1163_);
v___x_1165_ = lean_array_push(v___x_1141_, v___x_1143_);
v___x_1166_ = lean_array_push(v___x_1165_, v_val_1144_);
v___x_1167_ = l_Array_append___redArg(v_args_1145_, v___x_1166_);
lean_dec_ref(v___x_1166_);
v___x_1168_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1146_, v_atoms_1147_, v_k_1148_, v_00_u03b1_1149_, v_u_1150_, v___x_1158_, v___x_1161_, v___x_1164_, v___x_1167_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___boxed(lean_object* v_preContext_1169_, lean_object* v_atoms_1170_, lean_object* v_k_1171_, lean_object* v_00_u03b1_1172_, lean_object* v_u_1173_, lean_object* v_i_1174_, lean_object* v_acc_1175_, lean_object* v_vars_1176_, lean_object* v_args_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1169_, v_atoms_1170_, v_k_1171_, v_00_u03b1_1172_, v_u_1173_, v_i_1174_, v_acc_1175_, v_vars_1176_, v_args_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(lean_object* v_00_u03b1_1184_, lean_object* v_name_1185_, uint8_t v_bi_1186_, lean_object* v_type_1187_, lean_object* v_k_1188_, uint8_t v_kind_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_1185_, v_bi_1186_, v_type_1187_, v_k_1188_, v_kind_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1196_, lean_object* v_name_1197_, lean_object* v_bi_1198_, lean_object* v_type_1199_, lean_object* v_k_1200_, lean_object* v_kind_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
uint8_t v_bi_boxed_1207_; uint8_t v_kind_boxed_1208_; lean_object* v_res_1209_; 
v_bi_boxed_1207_ = lean_unbox(v_bi_1198_);
v_kind_boxed_1208_ = lean_unbox(v_kind_1201_);
v_res_1209_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(v_00_u03b1_1196_, v_name_1197_, v_bi_boxed_1207_, v_type_1199_, v_k_1200_, v_kind_boxed_1208_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(lean_object* v_00_u03b1_1210_, lean_object* v_name_1211_, lean_object* v_type_1212_, lean_object* v_k_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v_name_1211_, v_type_1212_, v_k_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___boxed(lean_object* v_00_u03b1_1220_, lean_object* v_name_1221_, lean_object* v_type_1222_, lean_object* v_k_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(v_00_u03b1_1220_, v_name_1221_, v_type_1222_, v_k_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter___redArg(lean_object* v_____do__lift_1230_, lean_object* v_h__1_1231_, lean_object* v_h__2_1232_){
_start:
{
if (lean_obj_tag(v_____do__lift_1230_) == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_dec(v_h__2_1232_);
v___x_1233_ = lean_box(0);
v___x_1234_ = lean_apply_1(v_h__1_1231_, v___x_1233_);
return v___x_1234_;
}
else
{
lean_object* v_val_1235_; lean_object* v___x_1236_; 
lean_dec(v_h__1_1231_);
v_val_1235_ = lean_ctor_get(v_____do__lift_1230_, 0);
lean_inc(v_val_1235_);
lean_dec_ref_known(v_____do__lift_1230_, 1);
v___x_1236_ = lean_apply_1(v_h__2_1232_, v_val_1235_);
return v___x_1236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter(lean_object* v_motive_1237_, lean_object* v_____do__lift_1238_, lean_object* v_h__1_1239_, lean_object* v_h__2_1240_){
_start:
{
if (lean_obj_tag(v_____do__lift_1238_) == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_dec(v_h__2_1240_);
v___x_1241_ = lean_box(0);
v___x_1242_ = lean_apply_1(v_h__1_1239_, v___x_1241_);
return v___x_1242_;
}
else
{
lean_object* v_val_1243_; lean_object* v___x_1244_; 
lean_dec(v_h__1_1239_);
v_val_1243_ = lean_ctor_get(v_____do__lift_1238_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v_____do__lift_1238_, 1);
v___x_1244_ = lean_apply_1(v_h__2_1240_, v_val_1243_);
return v___x_1244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms(lean_object* v_preContext_1247_, lean_object* v_atoms_1248_, lean_object* v_k_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1255_ = l_Lean_instInhabitedExpr;
v___x_1256_ = lean_unsigned_to_nat(0u);
v___x_1257_ = lean_array_get_borrowed(v___x_1255_, v_atoms_1248_, v___x_1256_);
lean_inc(v_a_1253_);
lean_inc_ref(v_a_1252_);
lean_inc(v_a_1251_);
lean_inc_ref(v_a_1250_);
lean_inc(v___x_1257_);
v___x_1258_ = lean_infer_type(v___x_1257_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1260_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc_n(v_a_1259_, 2);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = l_Lean_Meta_getLevel(v_a_1259_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v___x_1262_ = ((lean_object*)(l_Lean_Meta_AC_abstractAtoms___closed__0));
v___x_1263_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1247_, v_atoms_1248_, v_k_1249_, v_a_1259_, v_a_1261_, v___x_1256_, v___x_1262_, v___x_1262_, v___x_1262_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
return v___x_1263_;
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec(v_a_1259_);
lean_dec_ref(v_k_1249_);
lean_dec_ref(v_atoms_1248_);
lean_dec_ref(v_preContext_1247_);
v_a_1264_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1260_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1260_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
else
{
lean_dec_ref(v_k_1249_);
lean_dec_ref(v_atoms_1248_);
lean_dec_ref(v_preContext_1247_);
return v___x_1258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms___boxed(lean_object* v_preContext_1272_, lean_object* v_atoms_1273_, lean_object* v_k_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Meta_AC_abstractAtoms(v_preContext_1272_, v_atoms_1273_, v_k_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(lean_object* v___x_1286_, lean_object* v___x_1287_, lean_object* v_tp_1288_){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1289_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2));
v___x_1290_ = l_Lean_mkConst(v___x_1289_, v___x_1286_);
v___x_1291_ = l_Lean_Expr_app___override(v___x_1287_, v_tp_1288_);
v___x_1292_ = l_Lean_Expr_app___override(v___x_1290_, v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(lean_object* v___x_1297_, lean_object* v___x_1298_, lean_object* v___x_1299_, lean_object* v_tp_1300_, lean_object* v_v_1301_){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1302_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1));
v___x_1303_ = l_Lean_mkConst(v___x_1302_, v___x_1297_);
lean_inc_ref(v_tp_1300_);
v___x_1304_ = l_Lean_Expr_app___override(v___x_1298_, v_tp_1300_);
v___x_1305_ = l_Lean_mkAppB(v___x_1299_, v_tp_1300_, v_v_1301_);
v___x_1306_ = l_Lean_mkAppB(v___x_1303_, v___x_1304_, v___x_1305_);
return v___x_1306_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = lean_box(0);
v___x_1308_ = l_unsafeCast___redArg(v___x_1307_);
return v___x_1308_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0);
v___x_1311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
return v___x_1311_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1);
v___x_1316_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3));
v___x_1317_ = l_Lean_mkConst(v___x_1316_, v___x_1315_);
return v___x_1317_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1328_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1);
v___x_1329_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2));
v___x_1330_ = l_Lean_mkConst(v___x_1329_, v___x_1328_);
return v___x_1330_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1);
v___x_1336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12));
v___x_1337_ = l_Lean_mkConst(v___x_1336_, v___x_1335_);
return v___x_1337_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1);
v___x_1339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1));
v___x_1340_ = l_Lean_mkConst(v___x_1339_, v___x_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(lean_object* v_u_1341_, lean_object* v_preContext_1342_, lean_object* v_00_u03b1_1343_, size_t v_sz_1344_, size_t v_i_1345_, lean_object* v_bs_1346_){
_start:
{
uint8_t v___x_1348_; 
v___x_1348_ = lean_usize_dec_lt(v_i_1345_, v_sz_1344_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec_ref(v_00_u03b1_1343_);
lean_dec_ref(v_preContext_1342_);
lean_dec(v_u_1341_);
v___x_1349_ = l_unsafeCast___redArg(v_bs_1346_);
lean_dec_ref(v_bs_1346_);
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
else
{
lean_object* v_v_1351_; lean_object* v___x_1352_; lean_object* v_fst_1353_; lean_object* v_snd_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1388_; 
v_v_1351_ = lean_array_uget_borrowed(v_bs_1346_, v_i_1345_);
v___x_1352_ = l_unsafeCast___redArg(v_v_1351_);
v_fst_1353_ = lean_ctor_get(v___x_1352_, 0);
v_snd_1354_ = lean_ctor_get(v___x_1352_, 1);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1356_ = v___x_1352_;
v_isShared_1357_ = v_isSharedCheck_1388_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_snd_1354_);
lean_inc(v_fst_1353_);
lean_dec(v___x_1352_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1388_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v_op_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v_bs_x27_1362_; lean_object* v___x_1363_; lean_object* v___x_1365_; 
v_op_1358_ = lean_ctor_get(v_preContext_1342_, 1);
v___x_1359_ = lean_box(0);
v___x_1360_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4);
v___x_1361_ = lean_unsigned_to_nat(0u);
v_bs_x27_1362_ = lean_array_uset(v_bs_1346_, v_i_1345_, v___x_1361_);
v___x_1363_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
lean_inc(v_u_1341_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set_tag(v___x_1356_, 1);
lean_ctor_set(v___x_1356_, 1, v___x_1359_);
lean_ctor_set(v___x_1356_, 0, v_u_1341_);
v___x_1365_ = v___x_1356_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_u_1341_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v___x_1359_);
v___x_1365_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___y_1367_; lean_object* v___x_1376_; lean_object* v_isNeutralClass_1377_; 
lean_inc_ref(v___x_1365_);
v___x_1376_ = l_Lean_mkConst(v___x_1363_, v___x_1365_);
lean_inc(v_fst_1353_);
lean_inc_ref(v_op_1358_);
lean_inc_ref(v_00_u03b1_1343_);
v_isNeutralClass_1377_ = l_Lean_mkApp3(v___x_1376_, v_00_u03b1_1343_, v_op_1358_, v_fst_1353_);
if (lean_obj_tag(v_snd_1354_) == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10);
v___x_1379_ = l_Lean_Expr_app___override(v___x_1360_, v_isNeutralClass_1377_);
v___x_1380_ = l_Lean_Expr_app___override(v___x_1378_, v___x_1379_);
v___y_1367_ = v___x_1380_;
goto v___jp_1366_;
}
else
{
lean_object* v_val_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_val_1381_ = lean_ctor_get(v_snd_1354_, 0);
lean_inc(v_val_1381_);
lean_dec_ref_known(v_snd_1354_, 1);
v___x_1382_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13);
v___x_1383_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14);
lean_inc_ref(v_isNeutralClass_1377_);
v___x_1384_ = l_Lean_Expr_app___override(v___x_1360_, v_isNeutralClass_1377_);
v___x_1385_ = l_Lean_mkAppB(v___x_1382_, v_isNeutralClass_1377_, v_val_1381_);
v___x_1386_ = l_Lean_mkAppB(v___x_1383_, v___x_1384_, v___x_1385_);
v___y_1367_ = v___x_1386_;
goto v___jp_1366_;
}
v___jp_1366_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; size_t v___x_1371_; size_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1368_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9));
v___x_1369_ = l_Lean_mkConst(v___x_1368_, v___x_1365_);
lean_inc_ref(v_op_1358_);
lean_inc_ref(v_00_u03b1_1343_);
v___x_1370_ = l_Lean_mkApp4(v___x_1369_, v_00_u03b1_1343_, v_op_1358_, v_fst_1353_, v___y_1367_);
v___x_1371_ = ((size_t)1ULL);
v___x_1372_ = lean_usize_add(v_i_1345_, v___x_1371_);
v___x_1373_ = l_unsafeCast___redArg(v___x_1370_);
lean_dec_ref(v___x_1370_);
v___x_1374_ = lean_array_uset(v_bs_x27_1362_, v_i_1345_, v___x_1373_);
v_i_1345_ = v___x_1372_;
v_bs_1346_ = v___x_1374_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___boxed(lean_object* v_u_1389_, lean_object* v_preContext_1390_, lean_object* v_00_u03b1_1391_, lean_object* v_sz_1392_, lean_object* v_i_1393_, lean_object* v_bs_1394_, lean_object* v___y_1395_){
_start:
{
size_t v_sz_boxed_1396_; size_t v_i_boxed_1397_; lean_object* v_res_1398_; 
v_sz_boxed_1396_ = lean_unbox_usize(v_sz_1392_);
lean_dec(v_sz_1392_);
v_i_boxed_1397_ = lean_unbox_usize(v_i_1393_);
lean_dec(v_i_1393_);
v_res_1398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1389_, v_preContext_1390_, v_00_u03b1_1391_, v_sz_boxed_1396_, v_i_boxed_1397_, v_bs_1394_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(lean_object* v_u_1399_, lean_object* v_preContext_1400_, lean_object* v_00_u03b1_1401_, size_t v_sz_1402_, size_t v_i_1403_, lean_object* v_bs_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
uint8_t v___x_1410_; 
v___x_1410_ = lean_usize_dec_lt(v_i_1403_, v_sz_1402_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_dec_ref(v_00_u03b1_1401_);
lean_dec_ref(v_preContext_1400_);
lean_dec(v_u_1399_);
v___x_1411_ = l_unsafeCast___redArg(v_bs_1404_);
lean_dec_ref(v_bs_1404_);
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
else
{
lean_object* v_v_1413_; lean_object* v___x_1414_; lean_object* v_fst_1415_; lean_object* v_snd_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1450_; 
v_v_1413_ = lean_array_uget_borrowed(v_bs_1404_, v_i_1403_);
v___x_1414_ = l_unsafeCast___redArg(v_v_1413_);
v_fst_1415_ = lean_ctor_get(v___x_1414_, 0);
v_snd_1416_ = lean_ctor_get(v___x_1414_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1418_ = v___x_1414_;
v_isShared_1419_ = v_isSharedCheck_1450_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_snd_1416_);
lean_inc(v_fst_1415_);
lean_dec(v___x_1414_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1450_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v_op_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v_bs_x27_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v_op_1420_ = lean_ctor_get(v_preContext_1400_, 1);
v___x_1421_ = lean_box(0);
v___x_1422_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4);
v___x_1423_ = lean_unsigned_to_nat(0u);
v_bs_x27_1424_ = lean_array_uset(v_bs_1404_, v_i_1403_, v___x_1423_);
v___x_1425_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
lean_inc(v_u_1399_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set_tag(v___x_1418_, 1);
lean_ctor_set(v___x_1418_, 1, v___x_1421_);
lean_ctor_set(v___x_1418_, 0, v_u_1399_);
v___x_1427_ = v___x_1418_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_u_1399_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___x_1421_);
v___x_1427_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___y_1429_; lean_object* v___x_1438_; lean_object* v_isNeutralClass_1439_; 
lean_inc_ref(v___x_1427_);
v___x_1438_ = l_Lean_mkConst(v___x_1425_, v___x_1427_);
lean_inc(v_fst_1415_);
lean_inc_ref(v_op_1420_);
lean_inc_ref(v_00_u03b1_1401_);
v_isNeutralClass_1439_ = l_Lean_mkApp3(v___x_1438_, v_00_u03b1_1401_, v_op_1420_, v_fst_1415_);
if (lean_obj_tag(v_snd_1416_) == 0)
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1440_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10);
v___x_1441_ = l_Lean_Expr_app___override(v___x_1422_, v_isNeutralClass_1439_);
v___x_1442_ = l_Lean_Expr_app___override(v___x_1440_, v___x_1441_);
v___y_1429_ = v___x_1442_;
goto v___jp_1428_;
}
else
{
lean_object* v_val_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_val_1443_ = lean_ctor_get(v_snd_1416_, 0);
lean_inc(v_val_1443_);
lean_dec_ref_known(v_snd_1416_, 1);
v___x_1444_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13);
v___x_1445_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__14);
lean_inc_ref(v_isNeutralClass_1439_);
v___x_1446_ = l_Lean_Expr_app___override(v___x_1422_, v_isNeutralClass_1439_);
v___x_1447_ = l_Lean_mkAppB(v___x_1444_, v_isNeutralClass_1439_, v_val_1443_);
v___x_1448_ = l_Lean_mkAppB(v___x_1445_, v___x_1446_, v___x_1447_);
v___y_1429_ = v___x_1448_;
goto v___jp_1428_;
}
v___jp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; size_t v___x_1433_; size_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1430_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9));
v___x_1431_ = l_Lean_mkConst(v___x_1430_, v___x_1427_);
lean_inc_ref(v_op_1420_);
lean_inc_ref(v_00_u03b1_1401_);
v___x_1432_ = l_Lean_mkApp4(v___x_1431_, v_00_u03b1_1401_, v_op_1420_, v_fst_1415_, v___y_1429_);
v___x_1433_ = ((size_t)1ULL);
v___x_1434_ = lean_usize_add(v_i_1403_, v___x_1433_);
v___x_1435_ = l_unsafeCast___redArg(v___x_1432_);
lean_dec_ref(v___x_1432_);
v___x_1436_ = lean_array_uset(v_bs_x27_1424_, v_i_1403_, v___x_1435_);
v___x_1437_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1399_, v_preContext_1400_, v_00_u03b1_1401_, v_sz_1402_, v___x_1434_, v___x_1436_);
return v___x_1437_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0___boxed(lean_object* v_u_1451_, lean_object* v_preContext_1452_, lean_object* v_00_u03b1_1453_, lean_object* v_sz_1454_, lean_object* v_i_1455_, lean_object* v_bs_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
size_t v_sz_boxed_1462_; size_t v_i_boxed_1463_; lean_object* v_res_1464_; 
v_sz_boxed_1462_ = lean_unbox_usize(v_sz_1454_);
lean_dec(v_sz_1454_);
v_i_boxed_1463_ = lean_unbox_usize(v_i_1455_);
lean_dec(v_i_1455_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(v_u_1451_, v_preContext_1452_, v_00_u03b1_1453_, v_sz_boxed_1462_, v_i_boxed_1463_, v_bs_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
return v_res_1464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_box(0);
v___x_1466_ = l_Lean_instInhabitedExpr;
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v___x_1465_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(lean_object* v_preContext_1482_, lean_object* v_00_u03b1_1483_, lean_object* v_u_1484_, lean_object* v_vars_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v_fst_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1558_; 
v___x_1491_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0);
v___x_1492_ = lean_unsigned_to_nat(0u);
v___x_1493_ = lean_array_get(v___x_1491_, v_vars_1485_, v___x_1492_);
v_fst_1494_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; 
v_unused_1559_ = lean_ctor_get(v___x_1493_, 1);
lean_dec(v_unused_1559_);
v___x_1496_ = v___x_1493_;
v_isShared_1497_ = v_isSharedCheck_1558_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_fst_1494_);
lean_dec(v___x_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1558_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; size_t v_sz_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1242__overap_1507_; lean_object* v___x_1508_; 
v___x_1498_ = lean_box(0);
v___x_1499_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1);
v___x_1500_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4);
v___x_1501_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13);
v_sz_1502_ = lean_array_size(v_vars_1485_);
v___x_1503_ = l_unsafeCast___redArg(v_vars_1485_);
v___x_1504_ = lean_box_usize(v_sz_1502_);
v___x_1505_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed__const__1));
lean_inc_ref(v_00_u03b1_1483_);
lean_inc_ref(v_preContext_1482_);
lean_inc(v_u_1484_);
v___x_1506_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0___boxed), 11, 6);
lean_closure_set(v___x_1506_, 0, v_u_1484_);
lean_closure_set(v___x_1506_, 1, v_preContext_1482_);
lean_closure_set(v___x_1506_, 2, v_00_u03b1_1483_);
lean_closure_set(v___x_1506_, 3, v___x_1504_);
lean_closure_set(v___x_1506_, 4, v___x_1505_);
lean_closure_set(v___x_1506_, 5, v___x_1503_);
v___x_1242__overap_1507_ = l_unsafeCast___redArg(v___x_1506_);
lean_dec_ref(v___x_1506_);
lean_inc(v_a_1489_);
lean_inc_ref(v_a_1488_);
lean_inc(v_a_1487_);
lean_inc_ref(v_a_1486_);
v___x_1508_ = lean_apply_5(v___x_1242__overap_1507_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, lean_box(0));
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v_op_1510_; lean_object* v_assoc_1511_; lean_object* v_comm_1512_; lean_object* v_idem_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v_op_1510_ = lean_ctor_get(v_preContext_1482_, 1);
lean_inc_ref(v_op_1510_);
v_assoc_1511_ = lean_ctor_get(v_preContext_1482_, 2);
lean_inc_ref(v_assoc_1511_);
v_comm_1512_ = lean_ctor_get(v_preContext_1482_, 3);
lean_inc(v_comm_1512_);
v_idem_1513_ = lean_ctor_get(v_preContext_1482_, 4);
lean_inc(v_idem_1513_);
lean_dec_ref(v_preContext_1482_);
v___x_1514_ = lean_array_to_list(v_a_1509_);
v___x_1515_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1));
if (v_isShared_1497_ == 0)
{
lean_ctor_set_tag(v___x_1496_, 1);
lean_ctor_set(v___x_1496_, 1, v___x_1498_);
lean_ctor_set(v___x_1496_, 0, v_u_1484_);
v___x_1517_ = v___x_1496_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_u_1484_);
lean_ctor_set(v_reuseFailAlloc_1549_, 1, v___x_1498_);
v___x_1517_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_inc_ref(v___x_1517_);
v___x_1518_ = l_Lean_mkConst(v___x_1515_, v___x_1517_);
lean_inc_ref(v_op_1510_);
lean_inc_ref(v_00_u03b1_1483_);
v___x_1519_ = l_Lean_mkAppB(v___x_1518_, v_00_u03b1_1483_, v_op_1510_);
v___x_1520_ = l_Lean_Meta_mkListLit(v___x_1519_, v___x_1514_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1548_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1548_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1548_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1535_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1542_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__4));
lean_inc_ref(v___x_1517_);
v___x_1543_ = l_Lean_mkConst(v___x_1542_, v___x_1517_);
lean_inc_ref(v_op_1510_);
lean_inc_ref(v_00_u03b1_1483_);
v___x_1544_ = l_Lean_mkAppB(v___x_1543_, v_00_u03b1_1483_, v_op_1510_);
if (lean_obj_tag(v_comm_1512_) == 0)
{
lean_object* v___x_1545_; 
v___x_1545_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(v___x_1499_, v___x_1500_, v___x_1544_);
v___y_1535_ = v___x_1545_;
goto v___jp_1534_;
}
else
{
lean_object* v_val_1546_; lean_object* v___x_1547_; 
v_val_1546_ = lean_ctor_get(v_comm_1512_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v_comm_1512_, 1);
v___x_1547_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(v___x_1499_, v___x_1500_, v___x_1501_, v___x_1544_, v_val_1546_);
v___y_1535_ = v___x_1547_;
goto v___jp_1534_;
}
v___jp_1525_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1528_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3));
v___x_1529_ = l_Lean_mkConst(v___x_1528_, v___x_1517_);
v___x_1530_ = l_Lean_mkApp7(v___x_1529_, v_00_u03b1_1483_, v_op_1510_, v_assoc_1511_, v___y_1526_, v___y_1527_, v_a_1521_, v_fst_1494_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1530_);
v___x_1532_ = v___x_1523_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1536_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__6));
lean_inc_ref(v___x_1517_);
v___x_1537_ = l_Lean_mkConst(v___x_1536_, v___x_1517_);
lean_inc_ref(v_op_1510_);
lean_inc_ref(v_00_u03b1_1483_);
v___x_1538_ = l_Lean_mkAppB(v___x_1537_, v_00_u03b1_1483_, v_op_1510_);
if (lean_obj_tag(v_idem_1513_) == 0)
{
lean_object* v___x_1539_; 
v___x_1539_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(v___x_1499_, v___x_1500_, v___x_1538_);
v___y_1526_ = v___y_1535_;
v___y_1527_ = v___x_1539_;
goto v___jp_1525_;
}
else
{
lean_object* v_val_1540_; lean_object* v___x_1541_; 
v_val_1540_ = lean_ctor_get(v_idem_1513_, 0);
lean_inc(v_val_1540_);
lean_dec_ref_known(v_idem_1513_, 1);
v___x_1541_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(v___x_1499_, v___x_1500_, v___x_1501_, v___x_1538_, v_val_1540_);
v___y_1526_ = v___y_1535_;
v___y_1527_ = v___x_1541_;
goto v___jp_1525_;
}
}
}
}
else
{
lean_dec_ref(v___x_1517_);
lean_dec(v_idem_1513_);
lean_dec(v_comm_1512_);
lean_dec_ref(v_assoc_1511_);
lean_dec_ref(v_op_1510_);
lean_dec(v_fst_1494_);
lean_dec_ref(v_00_u03b1_1483_);
return v___x_1520_;
}
}
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
lean_del_object(v___x_1496_);
lean_dec(v_fst_1494_);
lean_dec(v_u_1484_);
lean_dec_ref(v_00_u03b1_1483_);
lean_dec_ref(v_preContext_1482_);
v_a_1550_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1508_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1508_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed(lean_object* v_preContext_1560_, lean_object* v_00_u03b1_1561_, lean_object* v_u_1562_, lean_object* v_vars_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(v_preContext_1560_, v_00_u03b1_1561_, v_u_1562_, v_vars_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
lean_dec(v_a_1567_);
lean_dec_ref(v_a_1566_);
lean_dec(v_a_1565_);
lean_dec_ref(v_a_1564_);
lean_dec_ref(v_vars_1563_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(lean_object* v_u_1570_, lean_object* v_preContext_1571_, lean_object* v_00_u03b1_1572_, size_t v_sz_1573_, size_t v_i_1574_, lean_object* v_bs_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1570_, v_preContext_1571_, v_00_u03b1_1572_, v_sz_1573_, v_i_1574_, v_bs_1575_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___boxed(lean_object* v_u_1582_, lean_object* v_preContext_1583_, lean_object* v_00_u03b1_1584_, lean_object* v_sz_1585_, lean_object* v_i_1586_, lean_object* v_bs_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
size_t v_sz_boxed_1593_; size_t v_i_boxed_1594_; lean_object* v_res_1595_; 
v_sz_boxed_1593_ = lean_unbox_usize(v_sz_1585_);
lean_dec(v_sz_1585_);
v_i_boxed_1594_ = lean_unbox_usize(v_i_1586_);
lean_dec(v_i_1586_);
v_res_1595_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(v_u_1582_, v_preContext_1583_, v_00_u03b1_1584_, v_sz_boxed_1593_, v_i_boxed_1594_, v_bs_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
return v_res_1595_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1604_ = lean_box(0);
v___x_1605_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2));
v___x_1606_ = l_Lean_mkConst(v___x_1605_, v___x_1604_);
return v___x_1606_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6(void){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = lean_box(0);
v___x_1615_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5));
v___x_1616_ = l_Lean_mkConst(v___x_1615_, v___x_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(lean_object* v_a_1617_){
_start:
{
if (lean_obj_tag(v_a_1617_) == 0)
{
lean_object* v_x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_x_1618_ = lean_ctor_get(v_a_1617_, 0);
lean_inc(v_x_1618_);
lean_dec_ref_known(v_a_1617_, 1);
v___x_1619_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3);
v___x_1620_ = l_Lean_mkNatLit(v_x_1618_);
v___x_1621_ = l_Lean_Expr_app___override(v___x_1619_, v___x_1620_);
return v___x_1621_;
}
else
{
lean_object* v_lhs_1622_; lean_object* v_rhs_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_lhs_1622_ = lean_ctor_get(v_a_1617_, 0);
lean_inc_ref(v_lhs_1622_);
v_rhs_1623_ = lean_ctor_get(v_a_1617_, 1);
lean_inc_ref(v_rhs_1623_);
lean_dec_ref_known(v_a_1617_, 2);
v___x_1624_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6);
v___x_1625_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_lhs_1622_);
v___x_1626_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_rhs_1623_);
v___x_1627_ = l_Lean_mkAppB(v___x_1624_, v___x_1625_, v___x_1626_);
return v___x_1627_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(lean_object* v_preContext_1628_, lean_object* v_vars_1629_, lean_object* v_a_1630_){
_start:
{
if (lean_obj_tag(v_a_1630_) == 0)
{
lean_object* v_x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
lean_dec_ref(v_preContext_1628_);
v_x_1631_ = lean_ctor_get(v_a_1630_, 0);
v___x_1632_ = l_Lean_instInhabitedExpr;
v___x_1633_ = lean_array_get_borrowed(v___x_1632_, v_vars_1629_, v_x_1631_);
lean_inc(v___x_1633_);
return v___x_1633_;
}
else
{
lean_object* v_lhs_1634_; lean_object* v_rhs_1635_; lean_object* v_op_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v_lhs_1634_ = lean_ctor_get(v_a_1630_, 0);
v_rhs_1635_ = lean_ctor_get(v_a_1630_, 1);
v_op_1636_ = lean_ctor_get(v_preContext_1628_, 1);
lean_inc_ref(v_op_1636_);
lean_inc_ref(v_preContext_1628_);
v___x_1637_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1628_, v_vars_1629_, v_lhs_1634_);
v___x_1638_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1628_, v_vars_1629_, v_rhs_1635_);
v___x_1639_ = l_Lean_mkAppB(v_op_1636_, v___x_1637_, v___x_1638_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget___boxed(lean_object* v_preContext_1640_, lean_object* v_vars_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1640_, v_vars_1641_, v_a_1642_);
lean_dec_ref(v_a_1642_);
lean_dec_ref(v_vars_1641_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(lean_object* v_msg_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v___f_1651_; lean_object* v___x_2041__overap_1652_; lean_object* v___x_1653_; 
v___f_1651_ = ((lean_object*)(l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0));
v___x_2041__overap_1652_ = lean_panic_fn_borrowed(v___f_1651_, v_msg_1645_);
lean_inc(v___y_1649_);
lean_inc_ref(v___y_1648_);
lean_inc(v___y_1647_);
lean_inc_ref(v___y_1646_);
v___x_1653_ = lean_apply_5(v___x_2041__overap_1652_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, lean_box(0));
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___boxed(lean_object* v_msg_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(v_msg_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1(size_t v_sz_1661_, size_t v_i_1662_, lean_object* v_bs_1663_){
_start:
{
uint8_t v___x_1664_; 
v___x_1664_ = lean_usize_dec_lt(v_i_1662_, v_sz_1661_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; 
v___x_1665_ = l_unsafeCast___redArg(v_bs_1663_);
lean_dec_ref(v_bs_1663_);
return v___x_1665_;
}
else
{
lean_object* v_v_1666_; lean_object* v___x_1667_; lean_object* v_fst_1668_; lean_object* v___x_1669_; lean_object* v_bs_x27_1670_; size_t v___x_1671_; size_t v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_v_1666_ = lean_array_uget_borrowed(v_bs_1663_, v_i_1662_);
v___x_1667_ = l_unsafeCast___redArg(v_v_1666_);
v_fst_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_fst_1668_);
lean_dec(v___x_1667_);
v___x_1669_ = lean_unsigned_to_nat(0u);
v_bs_x27_1670_ = lean_array_uset(v_bs_1663_, v_i_1662_, v___x_1669_);
v___x_1671_ = ((size_t)1ULL);
v___x_1672_ = lean_usize_add(v_i_1662_, v___x_1671_);
v___x_1673_ = l_unsafeCast___redArg(v_fst_1668_);
lean_dec(v_fst_1668_);
v___x_1674_ = lean_array_uset(v_bs_x27_1670_, v_i_1662_, v___x_1673_);
v_i_1662_ = v___x_1672_;
v_bs_1663_ = v___x_1674_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1___boxed(lean_object* v_sz_1676_, lean_object* v_i_1677_, lean_object* v_bs_1678_){
_start:
{
size_t v_sz_boxed_1679_; size_t v_i_boxed_1680_; lean_object* v_res_1681_; 
v_sz_boxed_1679_ = lean_unbox_usize(v_sz_1676_);
lean_dec(v_sz_1676_);
v_i_boxed_1680_ = lean_unbox_usize(v_i_1677_);
lean_dec(v_i_1677_);
v_res_1681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1(v_sz_boxed_1679_, v_i_boxed_1680_, v_bs_1678_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(lean_object* v_x_1682_){
_start:
{
if (lean_obj_tag(v_x_1682_) == 0)
{
lean_object* v___x_1683_; 
v___x_1683_ = ((lean_object*)(l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0));
return v___x_1683_;
}
else
{
lean_object* v_tail_1684_; 
v_tail_1684_ = lean_ctor_get(v_x_1682_, 1);
if (lean_obj_tag(v_tail_1684_) == 0)
{
lean_object* v_head_1685_; lean_object* v___x_1686_; 
v_head_1685_ = lean_ctor_get(v_x_1682_, 0);
lean_inc(v_head_1685_);
lean_dec_ref_known(v_x_1682_, 2);
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_head_1685_);
return v___x_1686_;
}
else
{
lean_object* v_head_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1696_; 
lean_inc(v_tail_1684_);
v_head_1687_ = lean_ctor_get(v_x_1682_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_x_1682_);
if (v_isSharedCheck_1696_ == 0)
{
lean_object* v_unused_1697_; 
v_unused_1697_ = lean_ctor_get(v_x_1682_, 1);
lean_dec(v_unused_1697_);
v___x_1689_ = v_x_1682_;
v_isShared_1690_ = v_isSharedCheck_1696_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_head_1687_);
lean_dec(v_x_1682_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1696_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_head_1687_);
v___x_1692_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v_tail_1684_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v___x_1692_);
lean_ctor_set(v___x_1689_, 0, v___x_1691_);
v___x_1694_ = v___x_1689_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4(lean_object* v_ctx_1698_, lean_object* v_a_1699_){
_start:
{
if (lean_obj_tag(v_a_1699_) == 0)
{
return v_a_1699_;
}
else
{
lean_object* v_head_1700_; lean_object* v_tail_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1715_; 
v_head_1700_ = lean_ctor_get(v_a_1699_, 0);
v_tail_1701_ = lean_ctor_get(v_a_1699_, 1);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_a_1699_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1703_ = v_a_1699_;
v_isShared_1704_ = v_isSharedCheck_1715_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_tail_1701_);
lean_inc(v_head_1700_);
lean_dec(v_a_1699_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1715_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_snd_1705_; uint8_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v_snd_1705_ = lean_ctor_get(v_ctx_1698_, 1);
v___x_1706_ = 0;
v___x_1707_ = lean_box(v___x_1706_);
v___x_1708_ = lean_array_get(v___x_1707_, v_snd_1705_, v_head_1700_);
lean_dec(v___x_1707_);
v___x_1709_ = lean_unbox(v___x_1708_);
lean_dec(v___x_1708_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v___x_1712_; 
v___x_1710_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4(v_ctx_1698_, v_tail_1701_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 1, v___x_1710_);
v___x_1712_ = v___x_1703_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_head_1700_);
lean_ctor_set(v_reuseFailAlloc_1713_, 1, v___x_1710_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
else
{
lean_del_object(v___x_1703_);
lean_dec(v_head_1700_);
v_a_1699_ = v_tail_1701_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4___boxed(lean_object* v_ctx_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4(v_ctx_1716_, v_a_1717_);
lean_dec_ref(v_ctx_1716_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2(lean_object* v_ctx_1719_, lean_object* v_x_1720_){
_start:
{
if (lean_obj_tag(v_x_1720_) == 0)
{
return v_x_1720_;
}
else
{
lean_object* v_head_1721_; lean_object* v___x_1722_; 
v_head_1721_ = lean_ctor_get(v_x_1720_, 0);
lean_inc(v_head_1721_);
v___x_1722_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2_spec__4(v_ctx_1719_, v_x_1720_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1723_, 0, v_head_1721_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
return v___x_1723_;
}
else
{
lean_dec(v_head_1721_);
return v___x_1722_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2___boxed(lean_object* v_ctx_1724_, lean_object* v_x_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2(v_ctx_1724_, v_x_1725_);
lean_dec_ref(v_ctx_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2(lean_object* v_ctx_1727_, lean_object* v_e_1728_){
_start:
{
lean_object* v_fst_1729_; lean_object* v_comm_1730_; lean_object* v_idem_1731_; lean_object* v___y_1733_; lean_object* v_xs_1735_; lean_object* v_xs_1736_; 
v_fst_1729_ = lean_ctor_get(v_ctx_1727_, 0);
v_comm_1730_ = lean_ctor_get(v_fst_1729_, 3);
v_idem_1731_ = lean_ctor_get(v_fst_1729_, 4);
v_xs_1735_ = l_Lean_Data_AC_Expr_toList(v_e_1728_);
v_xs_1736_ = l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2_spec__2(v_ctx_1727_, v_xs_1735_);
if (lean_obj_tag(v_comm_1730_) == 0)
{
v___y_1733_ = v_xs_1736_;
goto v___jp_1732_;
}
else
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lean_Data_AC_sort(v_xs_1736_);
v___y_1733_ = v___x_1737_;
goto v___jp_1732_;
}
v___jp_1732_:
{
if (lean_obj_tag(v_idem_1731_) == 0)
{
return v___y_1733_;
}
else
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_Data_AC_mergeIdem(v___y_1733_);
return v___x_1734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2___boxed(lean_object* v_ctx_1738_, lean_object* v_e_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2(v_ctx_1738_, v_e_1739_);
lean_dec_ref(v_e_1739_);
lean_dec_ref(v_ctx_1738_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(size_t v_sz_1741_, size_t v_i_1742_, lean_object* v_bs_1743_){
_start:
{
uint8_t v___x_1744_; 
v___x_1744_ = lean_usize_dec_lt(v_i_1742_, v_sz_1741_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; 
v___x_1745_ = l_unsafeCast___redArg(v_bs_1743_);
lean_dec_ref(v_bs_1743_);
return v___x_1745_;
}
else
{
lean_object* v_v_1746_; lean_object* v___x_1747_; lean_object* v_snd_1748_; lean_object* v___x_1749_; lean_object* v_bs_x27_1750_; uint8_t v___y_1752_; 
v_v_1746_ = lean_array_uget_borrowed(v_bs_1743_, v_i_1742_);
v___x_1747_ = l_unsafeCast___redArg(v_v_1746_);
v_snd_1748_ = lean_ctor_get(v___x_1747_, 1);
lean_inc(v_snd_1748_);
lean_dec(v___x_1747_);
v___x_1749_ = lean_unsigned_to_nat(0u);
v_bs_x27_1750_ = lean_array_uset(v_bs_1743_, v_i_1742_, v___x_1749_);
if (lean_obj_tag(v_snd_1748_) == 0)
{
uint8_t v___x_1759_; 
v___x_1759_ = 0;
v___y_1752_ = v___x_1759_;
goto v___jp_1751_;
}
else
{
lean_dec_ref_known(v_snd_1748_, 1);
v___y_1752_ = v___x_1744_;
goto v___jp_1751_;
}
v___jp_1751_:
{
size_t v___x_1753_; size_t v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1753_ = ((size_t)1ULL);
v___x_1754_ = lean_usize_add(v_i_1742_, v___x_1753_);
v___x_1755_ = lean_box(v___y_1752_);
v___x_1756_ = l_unsafeCast___redArg(v___x_1755_);
lean_dec(v___x_1755_);
v___x_1757_ = lean_array_uset(v_bs_x27_1750_, v_i_1742_, v___x_1756_);
v_i_1742_ = v___x_1754_;
v_bs_1743_ = v___x_1757_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0___boxed(lean_object* v_sz_1760_, lean_object* v_i_1761_, lean_object* v_bs_1762_){
_start:
{
size_t v_sz_boxed_1763_; size_t v_i_boxed_1764_; lean_object* v_res_1765_; 
v_sz_boxed_1763_ = lean_unbox_usize(v_sz_1760_);
lean_dec(v_sz_1760_);
v_i_boxed_1764_ = lean_unbox_usize(v_i_1761_);
lean_dec(v_i_1761_);
v_res_1765_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(v_sz_boxed_1763_, v_i_boxed_1764_, v_bs_1762_);
return v_res_1765_;
}
}
static lean_object* _init_l_Lean_Meta_AC_buildNormProof___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_box(0);
v___x_1772_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___lam__0___closed__2));
v___x_1773_ = l_Lean_mkConst(v___x_1772_, v___x_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0(lean_object* v___x_1781_, lean_object* v_fst_1782_, lean_object* v_preContext_1783_, lean_object* v_snd_1784_, lean_object* v_varsData_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = lean_array_get_borrowed(v___x_1781_, v_fst_1782_, v___x_1791_);
lean_inc(v___y_1789_);
lean_inc_ref(v___y_1788_);
lean_inc(v___y_1787_);
lean_inc_ref(v___y_1786_);
lean_inc(v___x_1792_);
v___x_1793_ = lean_infer_type(v___x_1792_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc_n(v_a_1794_, 2);
lean_dec_ref_known(v___x_1793_, 1);
v___x_1795_ = l_Lean_Meta_getLevel(v_a_1794_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1797_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc_n(v_a_1796_, 2);
lean_dec_ref_known(v___x_1795_, 1);
lean_inc(v_a_1794_);
lean_inc_ref(v_preContext_1783_);
v___x_1797_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(v_preContext_1783_, v_a_1794_, v_a_1796_, v_varsData_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v_a_1798_; size_t v_sz_1799_; size_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v_a_1798_ = lean_ctor_get(v___x_1797_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v___x_1797_, 1);
v_sz_1799_ = lean_array_size(v_varsData_1785_);
v___x_1800_ = ((size_t)0ULL);
v___x_1801_ = l_unsafeCast___redArg(v_varsData_1785_);
lean_inc(v___x_1801_);
v___x_1802_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(v_sz_1799_, v___x_1800_, v___x_1801_);
v___x_1803_ = l_unsafeCast___redArg(v___x_1802_);
lean_dec_ref(v___x_1802_);
v___x_1804_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__1(v_sz_1799_, v___x_1800_, v___x_1801_);
v___x_1805_ = l_unsafeCast___redArg(v___x_1804_);
lean_dec_ref(v___x_1804_);
lean_inc_ref(v_preContext_1783_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v_preContext_1783_);
lean_ctor_set(v___x_1806_, 1, v___x_1803_);
v___x_1807_ = l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__2(v___x_1806_, v_snd_1784_);
lean_dec_ref_known(v___x_1806_, 2);
v___x_1808_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v___x_1807_);
lean_inc_ref(v_snd_1784_);
v___x_1809_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_snd_1784_);
lean_inc_ref(v___x_1808_);
v___x_1810_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v___x_1808_);
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_obj_once(&l_Lean_Meta_AC_buildNormProof___lam__0___closed__3, &l_Lean_Meta_AC_buildNormProof___lam__0___closed__3_once, _init_l_Lean_Meta_AC_buildNormProof___lam__0___closed__3);
v___x_1813_ = l_Lean_Meta_mkEqRefl(v___x_1812_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1813_, 1);
v___x_1815_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___lam__0___closed__5));
v___x_1816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_a_1796_);
lean_ctor_set(v___x_1816_, 1, v___x_1811_);
v___x_1817_ = l_Lean_mkConst(v___x_1815_, v___x_1816_);
v___x_1818_ = lean_unsigned_to_nat(5u);
v___x_1819_ = lean_mk_empty_array_with_capacity(v___x_1818_);
v___x_1820_ = lean_array_push(v___x_1819_, v_a_1794_);
v___x_1821_ = lean_array_push(v___x_1820_, v_a_1798_);
v___x_1822_ = lean_array_push(v___x_1821_, v___x_1809_);
v___x_1823_ = lean_array_push(v___x_1822_, v___x_1810_);
v___x_1824_ = lean_array_push(v___x_1823_, v_a_1814_);
v___x_1825_ = l_Lean_mkAppN(v___x_1817_, v___x_1824_);
lean_dec_ref(v___x_1824_);
lean_inc_ref(v_preContext_1783_);
v___x_1826_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1783_, v___x_1805_, v_snd_1784_);
lean_dec_ref(v_snd_1784_);
v___x_1827_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1783_, v___x_1805_, v___x_1808_);
lean_dec_ref(v___x_1808_);
lean_dec(v___x_1805_);
v___x_1828_ = l_Lean_Meta_mkEq(v___x_1826_, v___x_1827_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1837_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1833_ = l_Lean_Meta_mkExpectedPropHint(v___x_1825_, v_a_1829_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1833_);
v___x_1835_ = v___x_1831_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
else
{
lean_dec_ref(v___x_1825_);
return v___x_1828_;
}
}
else
{
lean_dec_ref(v___x_1810_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v___x_1808_);
lean_dec(v___x_1805_);
lean_dec(v_a_1798_);
lean_dec(v_a_1796_);
lean_dec(v_a_1794_);
lean_dec_ref(v_snd_1784_);
lean_dec_ref(v_preContext_1783_);
return v___x_1813_;
}
}
else
{
lean_dec(v_a_1796_);
lean_dec(v_a_1794_);
lean_dec_ref(v_snd_1784_);
lean_dec_ref(v_preContext_1783_);
return v___x_1797_;
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec(v_a_1794_);
lean_dec_ref(v_snd_1784_);
lean_dec_ref(v_preContext_1783_);
v_a_1838_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1795_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1795_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_dec_ref(v_snd_1784_);
lean_dec_ref(v_preContext_1783_);
return v___x_1793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___boxed(lean_object* v___x_1846_, lean_object* v_fst_1847_, lean_object* v_preContext_1848_, lean_object* v_snd_1849_, lean_object* v_varsData_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_Meta_AC_buildNormProof___lam__0(v___x_1846_, v_fst_1847_, v_preContext_1848_, v_snd_1849_, v_varsData_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec_ref(v_varsData_1850_);
lean_dec_ref(v_fst_1847_);
lean_dec_ref(v___x_1846_);
return v_res_1856_;
}
}
static lean_object* _init_l_Lean_Meta_AC_buildNormProof___closed__5(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1863_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__4));
v___x_1864_ = lean_unsigned_to_nat(52u);
v___x_1865_ = lean_unsigned_to_nat(132u);
v___x_1866_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__3));
v___x_1867_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__2));
v___x_1868_ = l_mkPanicMessageWithDecl(v___x_1867_, v___x_1866_, v___x_1865_, v___x_1864_, v___x_1863_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof(lean_object* v_preContext_1869_, lean_object* v_l_1870_, lean_object* v_r_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_op_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v_op_1877_ = lean_ctor_get(v_preContext_1869_, 1);
v___x_1878_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_op_1877_);
v___x_1879_ = l_Lean_Meta_AC_toACExpr(v_op_1877_, v_l_1870_, v_r_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v_fst_1881_; lean_object* v_snd_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1923_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v_fst_1881_ = lean_ctor_get(v_a_1880_, 0);
v_snd_1882_ = lean_ctor_get(v_a_1880_, 1);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_a_1880_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1884_ = v_a_1880_;
v_isShared_1885_ = v_isSharedCheck_1923_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_snd_1882_);
lean_inc(v_fst_1881_);
lean_dec(v_a_1880_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1923_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___f_1886_; lean_object* v___x_1887_; 
lean_inc_ref(v_preContext_1869_);
lean_inc(v_fst_1881_);
v___f_1886_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_buildNormProof___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1886_, 0, v___x_1878_);
lean_closure_set(v___f_1886_, 1, v_fst_1881_);
lean_closure_set(v___f_1886_, 2, v_preContext_1869_);
lean_closure_set(v___f_1886_, 3, v_snd_1882_);
v___x_1887_ = l_Lean_Meta_AC_abstractAtoms(v_preContext_1869_, v_fst_1881_, v___f_1886_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1889_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc_n(v_a_1888_, 2);
lean_dec_ref_known(v___x_1887_, 1);
lean_inc(v_a_1875_);
lean_inc_ref(v_a_1874_);
lean_inc(v_a_1873_);
lean_inc_ref(v_a_1872_);
v___x_1889_ = lean_infer_type(v_a_1888_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1906_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1906_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1906_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v___x_1894_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__1));
v___x_1895_ = lean_unsigned_to_nat(3u);
v___x_1896_ = l_Lean_Expr_isAppOfArity(v_a_1890_, v___x_1894_, v___x_1895_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
lean_del_object(v___x_1892_);
lean_dec(v_a_1890_);
lean_dec(v_a_1888_);
lean_del_object(v___x_1884_);
v___x_1897_ = lean_obj_once(&l_Lean_Meta_AC_buildNormProof___closed__5, &l_Lean_Meta_AC_buildNormProof___closed__5_once, _init_l_Lean_Meta_AC_buildNormProof___closed__5);
v___x_1898_ = l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(v___x_1897_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
return v___x_1898_;
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1899_ = l_Lean_Expr_appArg_x21(v_a_1890_);
lean_dec(v_a_1890_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 1, v___x_1899_);
lean_ctor_set(v___x_1884_, 0, v_a_1888_);
v___x_1901_ = v___x_1884_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1888_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1903_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v___x_1901_);
v___x_1903_ = v___x_1892_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec(v_a_1888_);
lean_del_object(v___x_1884_);
v_a_1907_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1889_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1889_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_del_object(v___x_1884_);
v_a_1915_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1887_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1887_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec_ref(v_preContext_1869_);
v_a_1924_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1879_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1879_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___boxed(lean_object* v_preContext_1932_, lean_object* v_l_1933_, lean_object* v_r_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Lean_Meta_AC_buildNormProof(v_preContext_1932_, v_l_1933_, v_r_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
lean_dec(v_a_1938_);
lean_dec_ref(v_a_1937_);
lean_dec(v_a_1936_);
lean_dec_ref(v_a_1935_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(lean_object* v_ctx_1941_, lean_object* v_x_1942_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v_x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___boxed(lean_object* v_ctx_1944_, lean_object* v_x_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(v_ctx_1944_, v_x_1945_);
lean_dec_ref(v_ctx_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg(lean_object* v_e_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v_e_1955_; lean_object* v_op_1962_; lean_object* v_l_1963_; lean_object* v_r_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; 
if (lean_obj_tag(v_e_1947_) == 5)
{
lean_object* v_fn_2020_; 
v_fn_2020_ = lean_ctor_get(v_e_1947_, 0);
if (lean_obj_tag(v_fn_2020_) == 5)
{
lean_object* v_parent_x3f_2021_; 
v_parent_x3f_2021_ = lean_ctor_get(v_a_1948_, 8);
if (lean_obj_tag(v_parent_x3f_2021_) == 1)
{
lean_object* v_val_2022_; 
v_val_2022_ = lean_ctor_get(v_parent_x3f_2021_, 0);
if (lean_obj_tag(v_val_2022_) == 5)
{
lean_object* v_fn_2023_; 
v_fn_2023_ = lean_ctor_get(v_val_2022_, 0);
if (lean_obj_tag(v_fn_2023_) == 5)
{
lean_object* v_arg_2024_; lean_object* v_fn_2025_; lean_object* v_arg_2026_; lean_object* v_fn_2027_; lean_object* v___x_2028_; 
v_arg_2024_ = lean_ctor_get(v_e_1947_, 1);
v_fn_2025_ = lean_ctor_get(v_fn_2020_, 0);
v_arg_2026_ = lean_ctor_get(v_fn_2020_, 1);
v_fn_2027_ = lean_ctor_get(v_fn_2023_, 0);
lean_inc_ref(v_fn_2027_);
lean_inc_ref(v_fn_2025_);
v___x_2028_ = l_Lean_Meta_isExprDefEq(v_fn_2025_, v_fn_2027_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2090_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2090_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2090_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
uint8_t v___x_2033_; uint8_t v___x_2034_; 
v___x_2033_ = 1;
v___x_2034_ = lean_unbox(v_a_2029_);
lean_dec(v_a_2029_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; 
lean_del_object(v___x_2031_);
lean_inc_ref(v_fn_2025_);
v___x_2035_ = l_Lean_Meta_AC_preContext(v_fn_2025_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2075_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2038_ = v___x_2035_;
v_isShared_2039_ = v_isSharedCheck_2075_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2075_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
if (lean_obj_tag(v_a_2036_) == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2040_ = lean_box(0);
v___x_2041_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2041_, 0, v_e_1947_);
lean_ctor_set(v___x_2041_, 1, v___x_2040_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*2, v___x_2033_);
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v___x_2042_);
v___x_2044_ = v___x_2038_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
else
{
lean_object* v_val_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2074_; 
lean_inc_ref(v_arg_2026_);
lean_inc_ref(v_arg_2024_);
lean_del_object(v___x_2038_);
lean_dec_ref_known(v_e_1947_, 2);
v_val_2046_ = lean_ctor_get(v_a_2036_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_a_2036_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2048_ = v_a_2036_;
v_isShared_2049_ = v_isSharedCheck_2074_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_val_2046_);
lean_dec(v_a_2036_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2074_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_Lean_Meta_AC_buildNormProof(v_val_2046_, v_arg_2026_, v_arg_2024_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2065_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2065_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2065_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v_fst_2055_; lean_object* v_snd_2056_; lean_object* v___x_2058_; 
v_fst_2055_ = lean_ctor_get(v_a_2051_, 0);
lean_inc(v_fst_2055_);
v_snd_2056_ = lean_ctor_get(v_a_2051_, 1);
lean_inc(v_snd_2056_);
lean_dec(v_a_2051_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_fst_2055_);
v___x_2058_ = v___x_2048_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_fst_2055_);
v___x_2058_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2062_; 
v___x_2059_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2059_, 0, v_snd_2056_);
lean_ctor_set(v___x_2059_, 1, v___x_2058_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*2, v___x_2033_);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2060_);
v___x_2062_ = v___x_2053_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_del_object(v___x_2048_);
v_a_2066_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2050_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2050_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
lean_dec_ref_known(v_e_1947_, 2);
v_a_2076_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2035_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2035_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
else
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2084_ = lean_box(0);
v___x_2085_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2085_, 0, v_e_1947_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
lean_ctor_set_uint8(v___x_2085_, sizeof(void*)*2, v___x_2033_);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2086_);
v___x_2088_ = v___x_2031_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec_ref_known(v_e_1947_, 2);
v_a_2091_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2028_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2028_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
else
{
lean_object* v_arg_2099_; lean_object* v_fn_2100_; lean_object* v_arg_2101_; 
v_arg_2099_ = lean_ctor_get(v_e_1947_, 1);
v_fn_2100_ = lean_ctor_get(v_fn_2020_, 0);
v_arg_2101_ = lean_ctor_get(v_fn_2020_, 1);
lean_inc_ref(v_arg_2099_);
lean_inc_ref(v_arg_2101_);
lean_inc_ref(v_fn_2100_);
v_op_1962_ = v_fn_2100_;
v_l_1963_ = v_arg_2101_;
v_r_1964_ = v_arg_2099_;
v___y_1965_ = v_a_1949_;
v___y_1966_ = v_a_1950_;
v___y_1967_ = v_a_1951_;
v___y_1968_ = v_a_1952_;
goto v___jp_1961_;
}
}
else
{
lean_object* v_arg_2102_; lean_object* v_fn_2103_; lean_object* v_arg_2104_; 
v_arg_2102_ = lean_ctor_get(v_e_1947_, 1);
v_fn_2103_ = lean_ctor_get(v_fn_2020_, 0);
v_arg_2104_ = lean_ctor_get(v_fn_2020_, 1);
lean_inc_ref(v_arg_2102_);
lean_inc_ref(v_arg_2104_);
lean_inc_ref(v_fn_2103_);
v_op_1962_ = v_fn_2103_;
v_l_1963_ = v_arg_2104_;
v_r_1964_ = v_arg_2102_;
v___y_1965_ = v_a_1949_;
v___y_1966_ = v_a_1950_;
v___y_1967_ = v_a_1951_;
v___y_1968_ = v_a_1952_;
goto v___jp_1961_;
}
}
else
{
lean_object* v_arg_2105_; lean_object* v_fn_2106_; lean_object* v_arg_2107_; 
v_arg_2105_ = lean_ctor_get(v_e_1947_, 1);
v_fn_2106_ = lean_ctor_get(v_fn_2020_, 0);
v_arg_2107_ = lean_ctor_get(v_fn_2020_, 1);
lean_inc_ref(v_arg_2105_);
lean_inc_ref(v_arg_2107_);
lean_inc_ref(v_fn_2106_);
v_op_1962_ = v_fn_2106_;
v_l_1963_ = v_arg_2107_;
v_r_1964_ = v_arg_2105_;
v___y_1965_ = v_a_1949_;
v___y_1966_ = v_a_1950_;
v___y_1967_ = v_a_1951_;
v___y_1968_ = v_a_1952_;
goto v___jp_1961_;
}
}
else
{
v_e_1955_ = v_e_1947_;
goto v___jp_1954_;
}
}
else
{
v_e_1955_ = v_e_1947_;
goto v___jp_1954_;
}
v___jp_1954_:
{
lean_object* v___x_1956_; uint8_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1956_ = lean_box(0);
v___x_1957_ = 1;
v___x_1958_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1958_, 0, v_e_1955_);
lean_ctor_set(v___x_1958_, 1, v___x_1956_);
lean_ctor_set_uint8(v___x_1958_, sizeof(void*)*2, v___x_1957_);
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
v___x_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
return v___x_1960_;
}
v___jp_1961_:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lean_Meta_AC_preContext(v_op_1962_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_2011_; 
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1972_ = v___x_1969_;
v_isShared_1973_ = v_isSharedCheck_2011_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_2011_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
if (lean_obj_tag(v_a_1970_) == 0)
{
lean_object* v___x_1974_; uint8_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1979_; 
lean_dec_ref(v_r_1964_);
lean_dec_ref(v_l_1963_);
v___x_1974_ = lean_box(0);
v___x_1975_ = 1;
v___x_1976_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1976_, 0, v_e_1947_);
lean_ctor_set(v___x_1976_, 1, v___x_1974_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*2, v___x_1975_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 0, v___x_1977_);
v___x_1979_ = v___x_1972_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
else
{
lean_object* v_val_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2010_; 
lean_del_object(v___x_1972_);
lean_dec_ref(v_e_1947_);
v_val_1981_ = lean_ctor_get(v_a_1970_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_a_1970_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_1983_ = v_a_1970_;
v_isShared_1984_ = v_isSharedCheck_2010_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_val_1981_);
lean_dec(v_a_1970_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2010_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_Meta_AC_buildNormProof(v_val_1981_, v_l_1963_, v_r_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2001_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1988_ = v___x_1985_;
v_isShared_1989_ = v_isSharedCheck_2001_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1985_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2001_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v_fst_1990_; lean_object* v_snd_1991_; lean_object* v___x_1993_; 
v_fst_1990_ = lean_ctor_get(v_a_1986_, 0);
lean_inc(v_fst_1990_);
v_snd_1991_ = lean_ctor_get(v_a_1986_, 1);
lean_inc(v_snd_1991_);
lean_dec(v_a_1986_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v_fst_1990_);
v___x_1993_ = v___x_1983_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_fst_1990_);
v___x_1993_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
uint8_t v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1994_ = 1;
v___x_1995_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1995_, 0, v_snd_1991_);
lean_ctor_set(v___x_1995_, 1, v___x_1993_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*2, v___x_1994_);
v___x_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1995_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1996_);
v___x_1998_ = v___x_1988_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_del_object(v___x_1983_);
v_a_2002_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1985_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1985_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec_ref(v_r_1964_);
lean_dec_ref(v_l_1963_);
lean_dec_ref(v_e_1947_);
v_a_2012_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1969_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1969_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg___boxed(lean_object* v_e_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_Meta_AC_post___redArg(v_e_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
lean_dec(v_a_2113_);
lean_dec_ref(v_a_2112_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
lean_dec_ref(v_a_2109_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post(lean_object* v_e_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = l_Lean_Meta_AC_post___redArg(v_e_2116_, v_a_2118_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___boxed(lean_object* v_e_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Meta_AC_post(v_e_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(lean_object* v_e_2136_, lean_object* v___y_2137_){
_start:
{
uint8_t v___x_2139_; 
v___x_2139_ = l_Lean_Expr_hasMVar(v_e_2136_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v_e_2136_);
return v___x_2140_;
}
else
{
lean_object* v___x_2141_; lean_object* v_mctx_2142_; lean_object* v___x_2143_; lean_object* v_fst_2144_; lean_object* v_snd_2145_; lean_object* v___x_2146_; lean_object* v_cache_2147_; lean_object* v_zetaDeltaFVarIds_2148_; lean_object* v_postponed_2149_; lean_object* v_diag_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2159_; 
v___x_2141_ = lean_st_ref_get(v___y_2137_);
v_mctx_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc_ref(v_mctx_2142_);
lean_dec(v___x_2141_);
v___x_2143_ = l_Lean_instantiateMVarsCore(v_mctx_2142_, v_e_2136_);
v_fst_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_fst_2144_);
v_snd_2145_ = lean_ctor_get(v___x_2143_, 1);
lean_inc(v_snd_2145_);
lean_dec_ref(v___x_2143_);
v___x_2146_ = lean_st_ref_take(v___y_2137_);
v_cache_2147_ = lean_ctor_get(v___x_2146_, 1);
v_zetaDeltaFVarIds_2148_ = lean_ctor_get(v___x_2146_, 2);
v_postponed_2149_ = lean_ctor_get(v___x_2146_, 3);
v_diag_2150_ = lean_ctor_get(v___x_2146_, 4);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; 
v_unused_2160_ = lean_ctor_get(v___x_2146_, 0);
lean_dec(v_unused_2160_);
v___x_2152_ = v___x_2146_;
v_isShared_2153_ = v_isSharedCheck_2159_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_diag_2150_);
lean_inc(v_postponed_2149_);
lean_inc(v_zetaDeltaFVarIds_2148_);
lean_inc(v_cache_2147_);
lean_dec(v___x_2146_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2159_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v_snd_2145_);
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_snd_2145_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_cache_2147_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_zetaDeltaFVarIds_2148_);
lean_ctor_set(v_reuseFailAlloc_2158_, 3, v_postponed_2149_);
lean_ctor_set(v_reuseFailAlloc_2158_, 4, v_diag_2150_);
v___x_2155_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = lean_st_ref_put(v___y_2137_, v___x_2155_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_fst_2144_);
return v___x_2157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg___boxed(lean_object* v_e_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_e_2161_, v___y_2162_);
lean_dec(v___y_2162_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(lean_object* v_e_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_e_2165_, v___y_2167_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___boxed(lean_object* v_e_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(v_e_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0(lean_object* v_x_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0));
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed(lean_object* v_x_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__0(v_x_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v_x_2192_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1(lean_object* v_x_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0));
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed(lean_object* v_x_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__1(v_x_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v_x_2215_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2(lean_object* v_e_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_e_2225_);
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed(lean_object* v_e_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__2(v_e_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3(lean_object* v_x_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_box(0);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed(lean_object* v_x_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__3(v_x_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v_x_2257_);
return v_res_2266_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__5(void){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2273_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6(void){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2274_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__5, &l_Lean_Meta_AC_rewriteUnnormalized___closed__5_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__5);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__7(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__6, &l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6);
v___x_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
lean_ctor_set(v___x_2278_, 1, v___x_2276_);
return v___x_2278_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__8(void){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2279_ = lean_unsigned_to_nat(32u);
v___x_2280_ = lean_mk_empty_array_with_capacity(v___x_2279_);
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
return v___x_2281_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__9(void){
_start:
{
size_t v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2282_ = ((size_t)5ULL);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = lean_unsigned_to_nat(32u);
v___x_2285_ = lean_mk_empty_array_with_capacity(v___x_2284_);
v___x_2286_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__8, &l_Lean_Meta_AC_rewriteUnnormalized___closed__8_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__8);
v___x_2287_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2287_, 0, v___x_2286_);
lean_ctor_set(v___x_2287_, 1, v___x_2285_);
lean_ctor_set(v___x_2287_, 2, v___x_2283_);
lean_ctor_set(v___x_2287_, 3, v___x_2283_);
lean_ctor_set_usize(v___x_2287_, 4, v___x_2282_);
return v___x_2287_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__10(void){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2288_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__9, &l_Lean_Meta_AC_rewriteUnnormalized___closed__9_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__9);
v___x_2289_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__6, &l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6);
v___x_2290_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2289_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
lean_ctor_set(v___x_2290_, 2, v___x_2289_);
lean_ctor_set(v___x_2290_, 3, v___x_2288_);
return v___x_2290_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11(void){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__10, &l_Lean_Meta_AC_rewriteUnnormalized___closed__10_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__10);
v___x_2292_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__7, &l_Lean_Meta_AC_rewriteUnnormalized___closed__7_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__7);
v___x_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2292_);
lean_ctor_set(v___x_2293_, 1, v___x_2291_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized(lean_object* v_mvarId_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_2306_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2310_ = l_Lean_Meta_Simp_neutralConfig;
v___x_2311_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__4));
v___x_2312_ = l_Lean_Options_empty;
v___x_2313_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2310_, v___x_2311_, v_a_2309_, v___x_2312_, v_a_2303_, v_a_2305_, v_a_2306_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2315_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2313_, 1);
lean_inc(v_mvarId_2302_);
v___x_2315_ = l_Lean_MVarId_getType(v_mvarId_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2317_; lean_object* v_a_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2317_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_a_2316_, v_a_2304_);
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
lean_inc_n(v_a_2318_, 2);
lean_dec_ref(v___x_2317_);
v___x_2319_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__11, &l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11);
v___x_2320_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__13));
v___x_2321_ = l_Lean_Meta_Simp_main(v_a_2318_, v_a_2314_, v___x_2319_, v___x_2320_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; lean_object* v_fst_2323_; lean_object* v___x_2324_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2321_, 1);
v_fst_2323_ = lean_ctor_get(v_a_2322_, 0);
lean_inc(v_fst_2323_);
lean_dec(v_a_2322_);
v___x_2324_ = l_Lean_Meta_applySimpResultToTarget(v_mvarId_2302_, v_a_2318_, v_fst_2323_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
lean_dec(v_a_2318_);
return v___x_2324_;
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec(v_a_2318_);
lean_dec(v_mvarId_2302_);
v_a_2325_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2321_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2321_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_a_2314_);
lean_dec(v_mvarId_2302_);
v_a_2333_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2315_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2315_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2336_ == 0)
{
v___x_2338_ = v___x_2335_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2333_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_mvarId_2302_);
v_a_2341_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2313_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2313_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec(v_mvarId_2302_);
v_a_2349_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2308_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2308_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___boxed(lean_object* v_mvarId_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Meta_AC_rewriteUnnormalized(v_mvarId_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec_ref(v_a_2358_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl(lean_object* v_goal_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Lean_Meta_AC_rewriteUnnormalized(v_goal_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; uint8_t v___x_2372_; lean_object* v___x_2373_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v___x_2370_, 1);
v___x_2372_ = 1;
v___x_2373_ = l_Lean_MVarId_refl(v_a_2371_, v___x_2372_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_);
return v___x_2373_;
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
v_a_2374_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2370_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2370_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl___boxed(lean_object* v_goal_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Lean_Meta_AC_rewriteUnnormalizedRefl(v_goal_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
lean_dec(v_a_2384_);
lean_dec_ref(v_a_2383_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(lean_object* v_x_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; 
lean_inc(v___y_2393_);
lean_inc_ref(v___y_2392_);
lean_inc(v___y_2391_);
lean_inc_ref(v___y_2390_);
v___x_2399_ = lean_apply_9(v_x_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, lean_box(0));
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed(lean_object* v_x_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(v_x_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(lean_object* v_mvarId_2411_, lean_object* v_x_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v___f_2422_; lean_object* v___x_2423_; 
lean_inc(v___y_2416_);
lean_inc_ref(v___y_2415_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
v___f_2422_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2422_, 0, v_x_2412_);
lean_closure_set(v___f_2422_, 1, v___y_2413_);
lean_closure_set(v___f_2422_, 2, v___y_2414_);
lean_closure_set(v___f_2422_, 3, v___y_2415_);
lean_closure_set(v___f_2422_, 4, v___y_2416_);
v___x_2423_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2411_, v___f_2422_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
if (lean_obj_tag(v___x_2423_) == 0)
{
return v___x_2423_;
}
else
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2431_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
if (v_isShared_2427_ == 0)
{
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2424_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___boxed(lean_object* v_mvarId_2432_, lean_object* v_x_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_mvarId_2432_, v_x_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(lean_object* v_00_u03b1_2444_, lean_object* v_mvarId_2445_, lean_object* v_x_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_mvarId_2445_, v_x_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___boxed(lean_object* v_00_u03b1_2457_, lean_object* v_mvarId_2458_, lean_object* v_x_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(v_00_u03b1_2457_, v_mvarId_2458_, v_x_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0(lean_object* v_a_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v___x_2480_; 
v___x_2480_ = l_Lean_Meta_AC_rewriteUnnormalizedRefl(v_a_2470_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed(lean_object* v_a_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lean_Meta_AC_acRflTactic___redArg___lam__0(v_a_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg(lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2493_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___f_2503_; lean_object* v___x_2504_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc_n(v_a_2502_, 2);
lean_dec_ref_known(v___x_2501_, 1);
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2503_, 0, v_a_2502_);
v___x_2504_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_a_2502_, v___f_2503_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
return v___x_2504_;
}
else
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2512_; 
v_a_2505_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2507_ = v___x_2501_;
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2501_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_a_2505_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___boxed(lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lean_Meta_AC_acRflTactic___redArg(v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_);
lean_dec(v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec(v_a_2518_);
lean_dec_ref(v_a_2517_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic(lean_object* v_x_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lean_Meta_AC_acRflTactic___redArg(v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___boxed(lean_object* v_x_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l_Lean_Meta_AC_acRflTactic(v_x_2534_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_);
lean_dec(v_a_2542_);
lean_dec_ref(v_a_2541_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
lean_dec(v_a_2538_);
lean_dec_ref(v_a_2537_);
lean_dec(v_a_2536_);
lean_dec_ref(v_a_2535_);
lean_dec(v_x_2534_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1(){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2560_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2561_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3));
v___x_2562_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5));
v___x_2563_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acRflTactic___boxed), 10, 0);
v___x_2564_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2560_, v___x_2561_, v___x_2562_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___boxed(lean_object* v_a_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3(){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5));
v___x_2594_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6));
v___x_2595_ = l_Lean_addBuiltinDeclarationRanges(v___x_2593_, v___x_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___boxed(lean_object* v_a_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(lean_object* v_mvarId_2598_, lean_object* v_x_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2598_, v_x_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
v_a_2614_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2605_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2605_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg___boxed(lean_object* v_mvarId_2622_, lean_object* v_x_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_mvarId_2622_, v_x_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(lean_object* v_00_u03b1_2630_, lean_object* v_mvarId_2631_, lean_object* v_x_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_mvarId_2631_, v_x_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___boxed(lean_object* v_00_u03b1_2639_, lean_object* v_mvarId_2640_, lean_object* v_x_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(v_00_u03b1_2639_, v_mvarId_2640_, v_x_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4(lean_object* v_fvarId_2648_, lean_object* v___f_2649_, lean_object* v___f_2650_, lean_object* v___f_2651_, lean_object* v___f_2652_, lean_object* v_goal_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_){
_start:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_2657_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2661_ = l_Lean_Meta_Simp_neutralConfig;
v___x_2662_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__4));
v___x_2663_ = l_Lean_Options_empty;
v___x_2664_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2661_, v___x_2662_, v_a_2660_, v___x_2663_, v___y_2654_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2666_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2664_, 1);
lean_inc(v_fvarId_2648_);
v___x_2666_ = l_Lean_FVarId_getType___redArg(v_fvarId_2648_, v___y_2654_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; lean_object* v___x_2668_; lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; uint8_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref_known(v___x_2666_, 1);
v___x_2668_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_a_2667_, v___y_2655_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref(v___x_2668_);
v___x_2670_ = lean_unsigned_to_nat(32u);
v___x_2671_ = lean_mk_empty_array_with_capacity(v___x_2670_);
lean_dec_ref(v___x_2671_);
v___x_2672_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__11, &l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11);
v___x_2673_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__12));
v___x_2674_ = 1;
v___x_2675_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2675_, 0, v___f_2649_);
lean_ctor_set(v___x_2675_, 1, v___x_2673_);
lean_ctor_set(v___x_2675_, 2, v___f_2650_);
lean_ctor_set(v___x_2675_, 3, v___f_2651_);
lean_ctor_set(v___x_2675_, 4, v___f_2652_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*5, v___x_2674_);
v___x_2676_ = l_Lean_Meta_Simp_main(v_a_2669_, v_a_2665_, v___x_2672_, v___x_2675_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec_ref_known(v___x_2675_, 5);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; lean_object* v_fst_2678_; uint8_t v___x_2679_; lean_object* v___x_2680_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v_fst_2678_ = lean_ctor_get(v_a_2677_, 0);
lean_inc(v_fst_2678_);
lean_dec(v_a_2677_);
v___x_2679_ = 0;
v___x_2680_ = l_Lean_Meta_applySimpResultToLocalDecl(v_goal_2653_, v_fvarId_2648_, v_fst_2678_, v___x_2679_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2701_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2683_ = v___x_2680_;
v_isShared_2684_ = v_isSharedCheck_2701_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2680_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2701_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
if (lean_obj_tag(v_a_2681_) == 0)
{
lean_object* v___x_2685_; lean_object* v___x_2687_; 
v___x_2685_ = lean_box(0);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2685_);
v___x_2687_ = v___x_2683_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
else
{
lean_object* v_val_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2700_; 
v_val_2689_ = lean_ctor_get(v_a_2681_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v_a_2681_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2691_ = v_a_2681_;
v_isShared_2692_ = v_isSharedCheck_2700_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_val_2689_);
lean_dec(v_a_2681_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2700_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v_snd_2693_; lean_object* v___x_2695_; 
v_snd_2693_ = lean_ctor_get(v_val_2689_, 1);
lean_inc(v_snd_2693_);
lean_dec(v_val_2689_);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 0, v_snd_2693_);
v___x_2695_ = v___x_2691_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_snd_2693_);
v___x_2695_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2697_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2695_);
v___x_2697_ = v___x_2683_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2695_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
v_a_2702_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2680_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2680_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_goal_2653_);
lean_dec(v_fvarId_2648_);
v_a_2710_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2676_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2676_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec(v_a_2665_);
lean_dec(v_goal_2653_);
lean_dec_ref(v___f_2652_);
lean_dec_ref(v___f_2651_);
lean_dec_ref(v___f_2650_);
lean_dec_ref(v___f_2649_);
lean_dec(v_fvarId_2648_);
v_a_2718_ = lean_ctor_get(v___x_2666_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2666_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2666_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_goal_2653_);
lean_dec_ref(v___f_2652_);
lean_dec_ref(v___f_2651_);
lean_dec_ref(v___f_2650_);
lean_dec_ref(v___f_2649_);
lean_dec(v_fvarId_2648_);
v_a_2726_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2664_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2664_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_goal_2653_);
lean_dec_ref(v___f_2652_);
lean_dec_ref(v___f_2651_);
lean_dec_ref(v___f_2650_);
lean_dec_ref(v___f_2649_);
lean_dec(v_fvarId_2648_);
v_a_2734_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2659_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2659_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed(lean_object* v_fvarId_2742_, lean_object* v___f_2743_, lean_object* v___f_2744_, lean_object* v___f_2745_, lean_object* v___f_2746_, lean_object* v_goal_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lean_Meta_AC_acNfHypMeta___lam__4(v_fvarId_2742_, v___f_2743_, v___f_2744_, v___f_2745_, v___f_2746_, v_goal_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta(lean_object* v_goal_2754_, lean_object* v_fvarId_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_){
_start:
{
lean_object* v___f_2761_; lean_object* v___f_2762_; lean_object* v___f_2763_; lean_object* v___f_2764_; lean_object* v___f_2765_; lean_object* v___x_2766_; 
v___f_2761_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__3));
v___f_2762_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__2));
v___f_2763_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__1));
v___f_2764_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__0));
lean_inc(v_goal_2754_);
v___f_2765_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed), 11, 6);
lean_closure_set(v___f_2765_, 0, v_fvarId_2755_);
lean_closure_set(v___f_2765_, 1, v___f_2764_);
lean_closure_set(v___f_2765_, 2, v___f_2763_);
lean_closure_set(v___f_2765_, 3, v___f_2762_);
lean_closure_set(v___f_2765_, 4, v___f_2761_);
lean_closure_set(v___f_2765_, 5, v_goal_2754_);
v___x_2766_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_goal_2754_, v___f_2765_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___boxed(lean_object* v_goal_2767_, lean_object* v_fvarId_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_Meta_AC_acNfHypMeta(v_goal_2767_, v_fvarId_2768_, v_a_2769_, v_a_2770_, v_a_2771_, v_a_2772_);
lean_dec(v_a_2772_);
lean_dec_ref(v_a_2771_);
lean_dec(v_a_2770_);
lean_dec_ref(v_a_2769_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0(lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v___x_2784_; 
v___x_2784_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2776_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
if (lean_obj_tag(v___x_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2786_; 
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2784_, 1);
v___x_2786_ = l_Lean_Meta_AC_rewriteUnnormalized(v_a_2785_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v___x_2786_, 1);
v___x_2788_ = lean_box(0);
v___x_2789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2789_, 0, v_a_2787_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
v___x_2790_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2789_, v___y_2776_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
return v___x_2790_;
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
v_a_2791_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2786_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2786_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
v_a_2799_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2784_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2784_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed(lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_Meta_AC_acNfTargetTactic___lam__0(v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic(lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v___f_2827_; lean_object* v___x_2828_; 
v___f_2827_ = ((lean_object*)(l_Lean_Meta_AC_acNfTargetTactic___closed__0));
v___x_2828_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2827_, v_a_2818_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___boxed(lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = l_Lean_Meta_AC_acNfTargetTactic(v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec(v_a_2834_);
lean_dec_ref(v_a_2833_);
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2831_);
lean_dec(v_a_2830_);
lean_dec_ref(v_a_2829_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0(lean_object* v_fvarId_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2841_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2849_, 1);
v___x_2851_ = l_Lean_Meta_AC_acNfHypMeta(v_a_2850_, v_fvarId_2839_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2851_, 1);
if (lean_obj_tag(v_a_2852_) == 1)
{
lean_object* v_val_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v_val_2853_ = lean_ctor_get(v_a_2852_, 0);
lean_inc(v_val_2853_);
lean_dec_ref_known(v_a_2852_, 1);
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2855_, 0, v_val_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2855_, v___y_2841_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
return v___x_2856_;
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec(v_a_2852_);
v___x_2857_ = lean_box(0);
v___x_2858_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2857_, v___y_2841_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
return v___x_2858_;
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
v_a_2859_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2851_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2851_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec(v_fvarId_2839_);
v_a_2867_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2849_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2849_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed(lean_object* v_fvarId_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_Meta_AC_acNfHypTactic___lam__0(v_fvarId_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_);
lean_dec(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic(lean_object* v_fvarId_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_){
_start:
{
lean_object* v___f_2896_; lean_object* v___x_2897_; 
v___f_2896_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2896_, 0, v_fvarId_2886_);
v___x_2897_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2896_, v_a_2887_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___boxed(lean_object* v_fvarId_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lean_Meta_AC_acNfHypTactic(v_fvarId_2898_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_);
lean_dec(v_a_2906_);
lean_dec_ref(v_a_2905_);
lean_dec(v_a_2904_);
lean_dec_ref(v_a_2903_);
lean_dec(v_a_2902_);
lean_dec_ref(v_a_2901_);
lean_dec(v_a_2900_);
lean_dec_ref(v_a_2899_);
return v_res_2908_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2909_ = lean_box(0);
v___x_2910_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_2911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
lean_ctor_set(v___x_2911_, 1, v___x_2909_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg(){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0);
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___boxed(lean_object* v___y_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(lean_object* v_00_u03b1_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___boxed(lean_object* v_00_u03b1_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(v_00_u03b1_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(lean_object* v_as_2939_, size_t v_i_2940_, size_t v_stop_2941_, lean_object* v_b_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
uint8_t v___x_2952_; 
v___x_2952_ = lean_usize_dec_eq(v_i_2940_, v_stop_2941_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = lean_array_uget_borrowed(v_as_2939_, v_i_2940_);
lean_inc(v___x_2953_);
v___x_2954_ = l_Lean_Meta_AC_acNfHypTactic(v___x_2953_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; size_t v___x_2956_; size_t v___x_2957_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v___x_2956_ = ((size_t)1ULL);
v___x_2957_ = lean_usize_add(v_i_2940_, v___x_2956_);
v_i_2940_ = v___x_2957_;
v_b_2942_ = v_a_2955_;
goto _start;
}
else
{
return v___x_2954_;
}
}
else
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v_b_2942_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1___boxed(lean_object* v_as_2960_, lean_object* v_i_2961_, lean_object* v_stop_2962_, lean_object* v_b_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
size_t v_i_boxed_2973_; size_t v_stop_boxed_2974_; lean_object* v_res_2975_; 
v_i_boxed_2973_ = lean_unbox_usize(v_i_2961_);
lean_dec(v_i_2961_);
v_stop_boxed_2974_ = lean_unbox_usize(v_stop_2962_);
lean_dec(v_stop_2962_);
v_res_2975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_as_2960_, v_i_boxed_2973_, v_stop_boxed_2974_, v_b_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
lean_dec(v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
lean_dec_ref(v_as_2960_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0(lean_object* v___y_2976_, lean_object* v___x_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
if (lean_obj_tag(v___y_2976_) == 0)
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Lean_Meta_AC_acNfTargetTactic(v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; 
lean_dec_ref_known(v___x_2987_, 1);
v___x_2988_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2979_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = l_Lean_MVarId_getNondepPropHyps(v_a_2989_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3011_; 
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_2993_ = v___x_2990_;
v_isShared_2994_ = v_isSharedCheck_3011_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___x_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3011_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; uint8_t v___x_2997_; 
v___x_2995_ = lean_array_get_size(v_a_2991_);
v___x_2996_ = lean_box(0);
v___x_2997_ = lean_nat_dec_lt(v___x_2977_, v___x_2995_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2999_; 
lean_dec(v_a_2991_);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_2996_);
v___x_2999_ = v___x_2993_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v___x_2996_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
else
{
uint8_t v___x_3001_; 
v___x_3001_ = lean_nat_dec_le(v___x_2995_, v___x_2995_);
if (v___x_3001_ == 0)
{
if (v___x_2997_ == 0)
{
lean_object* v___x_3003_; 
lean_dec(v_a_2991_);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 0, v___x_2996_);
v___x_3003_ = v___x_2993_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_2996_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
else
{
size_t v___x_3005_; size_t v___x_3006_; lean_object* v___x_3007_; 
lean_del_object(v___x_2993_);
v___x_3005_ = ((size_t)0ULL);
v___x_3006_ = lean_usize_of_nat(v___x_2995_);
v___x_3007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_2991_, v___x_3005_, v___x_3006_, v___x_2996_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec(v_a_2991_);
return v___x_3007_;
}
}
else
{
size_t v___x_3008_; size_t v___x_3009_; lean_object* v___x_3010_; 
lean_del_object(v___x_2993_);
v___x_3008_ = ((size_t)0ULL);
v___x_3009_ = lean_usize_of_nat(v___x_2995_);
v___x_3010_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_2991_, v___x_3008_, v___x_3009_, v___x_2996_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec(v_a_2991_);
return v___x_3010_;
}
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
v_a_3012_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_2990_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_2990_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
v_a_3020_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_2988_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_2988_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
else
{
return v___x_2987_;
}
}
else
{
lean_object* v_hypotheses_3028_; uint8_t v_type_3029_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; 
v_hypotheses_3028_ = lean_ctor_get(v___y_2976_, 0);
v_type_3029_ = lean_ctor_get_uint8(v___y_2976_, sizeof(void*)*1);
if (v_type_3029_ == 0)
{
v___y_3031_ = v___y_2978_;
v___y_3032_ = v___y_2979_;
v___y_3033_ = v___y_2980_;
v___y_3034_ = v___y_2981_;
v___y_3035_ = v___y_2982_;
v___y_3036_ = v___y_2983_;
v___y_3037_ = v___y_2984_;
v___y_3038_ = v___y_2985_;
goto v___jp_3030_;
}
else
{
lean_object* v___x_3069_; 
v___x_3069_ = l_Lean_Meta_AC_acNfTargetTactic(v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_dec_ref_known(v___x_3069_, 1);
v___y_3031_ = v___y_2978_;
v___y_3032_ = v___y_2979_;
v___y_3033_ = v___y_2980_;
v___y_3034_ = v___y_2981_;
v___y_3035_ = v___y_2982_;
v___y_3036_ = v___y_2983_;
v___y_3037_ = v___y_2984_;
v___y_3038_ = v___y_2985_;
goto v___jp_3030_;
}
else
{
return v___x_3069_;
}
}
v___jp_3030_:
{
lean_object* v___x_3039_; 
v___x_3039_ = l_Lean_Elab_Tactic_getFVarIds(v_hypotheses_3028_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3060_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3042_ = v___x_3039_;
v_isShared_3043_ = v_isSharedCheck_3060_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3060_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
v___x_3044_ = lean_array_get_size(v_a_3040_);
v___x_3045_ = lean_box(0);
v___x_3046_ = lean_nat_dec_lt(v___x_2977_, v___x_3044_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3048_; 
lean_dec(v_a_3040_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 0, v___x_3045_);
v___x_3048_ = v___x_3042_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3045_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
else
{
uint8_t v___x_3050_; 
v___x_3050_ = lean_nat_dec_le(v___x_3044_, v___x_3044_);
if (v___x_3050_ == 0)
{
if (v___x_3046_ == 0)
{
lean_object* v___x_3052_; 
lean_dec(v_a_3040_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 0, v___x_3045_);
v___x_3052_ = v___x_3042_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3045_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
return v___x_3052_;
}
}
else
{
size_t v___x_3054_; size_t v___x_3055_; lean_object* v___x_3056_; 
lean_del_object(v___x_3042_);
v___x_3054_ = ((size_t)0ULL);
v___x_3055_ = lean_usize_of_nat(v___x_3044_);
v___x_3056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_3040_, v___x_3054_, v___x_3055_, v___x_3045_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v_a_3040_);
return v___x_3056_;
}
}
else
{
size_t v___x_3057_; size_t v___x_3058_; lean_object* v___x_3059_; 
lean_del_object(v___x_3042_);
v___x_3057_ = ((size_t)0ULL);
v___x_3058_ = lean_usize_of_nat(v___x_3044_);
v___x_3059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_3040_, v___x_3057_, v___x_3058_, v___x_3045_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v_a_3040_);
return v___x_3059_;
}
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
v_a_3061_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3039_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3039_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0___boxed(lean_object* v___y_3070_, lean_object* v___x_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Lean_Meta_AC_evalNf0___lam__0(v___y_3070_, v___x_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
lean_dec(v___y_3079_);
lean_dec_ref(v___y_3078_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
lean_dec(v___x_3071_);
lean_dec(v___y_3070_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0(lean_object* v_stx_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v___x_3100_; uint8_t v___x_3101_; 
v___x_3100_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__1));
lean_inc(v_stx_3090_);
v___x_3101_ = l_Lean_Syntax_isOfKind(v_stx_3090_, v___x_3100_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; 
lean_dec(v_stx_3090_);
v___x_3102_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_3102_;
}
else
{
lean_object* v___x_3103_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___x_3116_; lean_object* v___x_3117_; uint8_t v___x_3118_; 
v___x_3103_ = lean_unsigned_to_nat(0u);
v___x_3116_ = lean_unsigned_to_nat(1u);
v___x_3117_ = l_Lean_Syntax_getArg(v_stx_3090_, v___x_3116_);
lean_dec(v_stx_3090_);
v___x_3118_ = l_Lean_Syntax_isNone(v___x_3117_);
if (v___x_3118_ == 0)
{
uint8_t v___x_3119_; 
lean_inc(v___x_3117_);
v___x_3119_ = l_Lean_Syntax_matchesNull(v___x_3117_, v___x_3116_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_dec(v___x_3117_);
v___x_3120_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_3120_;
}
else
{
lean_object* v_loc_x3f_3121_; lean_object* v___x_3122_; 
v_loc_x3f_3121_ = l_Lean_Syntax_getArg(v___x_3117_, v___x_3103_);
lean_dec(v___x_3117_);
v___x_3122_ = l_Lean_Elab_Tactic_expandLocation(v_loc_x3f_3121_);
lean_dec(v_loc_x3f_3121_);
v___y_3105_ = v_a_3096_;
v___y_3106_ = v_a_3092_;
v___y_3107_ = v_a_3091_;
v___y_3108_ = v_a_3098_;
v___y_3109_ = v_a_3093_;
v___y_3110_ = v_a_3094_;
v___y_3111_ = v_a_3095_;
v___y_3112_ = v_a_3097_;
v___y_3113_ = v___x_3122_;
goto v___jp_3104_;
}
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
lean_dec(v___x_3117_);
v___x_3123_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__2));
v___x_3124_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
lean_ctor_set_uint8(v___x_3124_, sizeof(void*)*1, v___x_3101_);
v___y_3105_ = v_a_3096_;
v___y_3106_ = v_a_3092_;
v___y_3107_ = v_a_3091_;
v___y_3108_ = v_a_3098_;
v___y_3109_ = v_a_3093_;
v___y_3110_ = v_a_3094_;
v___y_3111_ = v_a_3095_;
v___y_3112_ = v_a_3097_;
v___y_3113_ = v___x_3124_;
goto v___jp_3104_;
}
v___jp_3104_:
{
lean_object* v___y_3114_; lean_object* v___x_3115_; 
v___y_3114_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_evalNf0___lam__0___boxed), 11, 2);
lean_closure_set(v___y_3114_, 0, v___y_3113_);
lean_closure_set(v___y_3114_, 1, v___x_3103_);
v___x_3115_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_3114_, v___y_3107_, v___y_3106_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3105_, v___y_3112_, v___y_3108_);
return v___x_3115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___boxed(lean_object* v_stx_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Lean_Meta_AC_evalNf0(v_stx_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_, v_a_3133_);
lean_dec(v_a_3133_);
lean_dec_ref(v_a_3132_);
lean_dec(v_a_3131_);
lean_dec_ref(v_a_3130_);
lean_dec(v_a_3129_);
lean_dec_ref(v_a_3128_);
lean_dec(v_a_3127_);
lean_dec_ref(v_a_3126_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1(){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3143_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3144_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__1));
v___x_3145_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1));
v___x_3146_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_evalNf0___boxed), 10, 0);
v___x_3147_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3143_, v___x_3144_, v___x_3145_, v___x_3146_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___boxed(lean_object* v_a_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
return v_res_3149_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = lean_box(0);
v___x_3151_ = l_unsafeCast___redArg(v___x_3150_);
return v___x_3151_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3153_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3154_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3155_ = l_Lean_Name_str___override(v___x_3154_, v___x_3153_);
return v___x_3155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5));
v___x_3157_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3158_ = l_Lean_Name_str___override(v___x_3157_, v___x_3156_);
return v___x_3158_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3159_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__0));
v___x_3160_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3161_ = l_Lean_Name_str___override(v___x_3160_, v___x_3159_);
return v___x_3161_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3162_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1));
v___x_3163_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3164_ = l_Lean_Name_str___override(v___x_3163_, v___x_3162_);
return v___x_3164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3165_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__1));
v___x_3166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3167_ = l_Lean_Name_str___override(v___x_3166_, v___x_3165_);
return v___x_3167_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3170_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3171_ = l_Lean_Name_str___override(v___x_3170_, v___x_3169_);
return v___x_3171_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = lean_unsigned_to_nat(0u);
v___x_3173_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3174_ = l_Lean_Name_num___override(v___x_3173_, v___x_3172_);
return v___x_3174_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3175_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5));
v___x_3176_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3177_ = l_Lean_Name_str___override(v___x_3176_, v___x_3175_);
return v___x_3177_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3178_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__0));
v___x_3179_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3180_ = l_Lean_Name_str___override(v___x_3179_, v___x_3178_);
return v___x_3180_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3181_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__1));
v___x_3182_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3183_ = l_Lean_Name_str___override(v___x_3182_, v___x_3181_);
return v___x_3183_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3187_ = l_Lean_Name_str___override(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3189_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3190_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3191_ = l_Lean_Name_str___override(v___x_3190_, v___x_3189_);
return v___x_3191_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5));
v___x_3193_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3194_ = l_Lean_Name_str___override(v___x_3193_, v___x_3192_);
return v___x_3194_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3195_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__0));
v___x_3196_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3197_ = l_Lean_Name_str___override(v___x_3196_, v___x_3195_);
return v___x_3197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1));
v___x_3199_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3200_ = l_Lean_Name_str___override(v___x_3199_, v___x_3198_);
return v___x_3200_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__1));
v___x_3202_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3203_ = l_Lean_Name_str___override(v___x_3202_, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3206_ = l_Lean_Name_str___override(v___x_3205_, v___x_3204_);
return v___x_3206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = lean_unsigned_to_nat(4236260923u);
v___x_3208_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3209_ = l_Lean_Name_num___override(v___x_3208_, v___x_3207_);
return v___x_3209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3213_ = l_Lean_Name_str___override(v___x_3212_, v___x_3211_);
return v___x_3213_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3216_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3217_ = l_Lean_Name_str___override(v___x_3216_, v___x_3215_);
return v___x_3217_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3218_ = lean_unsigned_to_nat(2u);
v___x_3219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3220_ = l_Lean_Name_num___override(v___x_3219_, v___x_3218_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3222_; uint8_t v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3222_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__2));
v___x_3223_ = 0;
v___x_3224_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__27_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3225_ = l_Lean_registerTraceClass(v___x_3222_, v___x_3223_, v___x_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2____boxed(lean_object* v_a_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
return v_res_3227_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_AC_instInhabitedPreContext_default = _init_l_Lean_Meta_AC_instInhabitedPreContext_default();
lean_mark_persistent(l_Lean_Meta_AC_instInhabitedPreContext_default);
l_Lean_Meta_AC_instInhabitedPreContext = _init_l_Lean_Meta_AC_instInhabitedPreContext();
lean_mark_persistent(l_Lean_Meta_AC_instInhabitedPreContext);
res = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_AC_Main(builtin);
}
#ifdef __cplusplus
}
#endif

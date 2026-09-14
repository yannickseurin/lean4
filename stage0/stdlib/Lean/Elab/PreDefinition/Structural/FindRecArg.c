// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.FindRecArg
// Imports: public import Lean.Elab.PreDefinition.TerminationMeasure public import Lean.Elab.PreDefinition.Structural.Basic public import Lean.Elab.PreDefinition.Structural.RecArgInfo import Init.Omega
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
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Elab_TerminationMeasure_structuralArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_prettyParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Elab_Structural_prettyParam___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_prettyParam___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParam___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_prettyParameterSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_prettyParameterSet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parameters "};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParameterSet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__2;
static const lean_string_object l_Lean_Elab_Structural_prettyParameterSet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "parameter "};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParameterSet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Elab.PreDefinition.Structural.FindRecArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.Structural.getRecArgInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "its type is not an inductive"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__1;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "its type "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__3;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = " is an inductive family and indices are not pairwise distinct"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__5;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "{indInfo.name} not in {indInfo.all}"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__7;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "its type is an inductive datatype"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__9;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "\nand the datatype parameter"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__10 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__11;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\ndepends on the function parameter"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__12 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__13;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "\nwhich is not fixed."};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__14 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__15;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " is an inductive family"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__16 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__17;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nand index"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__18 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__19;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "\ndepends on the non index"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__20 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__20_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__21;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = " is an inductive family and indices are not variables"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__22 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__23;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__24;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__25;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "it is a let-binding"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__26 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__27;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamPerm.size = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__28 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__28_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__29;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "the index #"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__30 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__30_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__31;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " exceeds "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__32 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__32_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__33;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = ", the number of parameters"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__34 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__34_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__35;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "it is unchanged in the recursive calls"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__36 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__36_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__37;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Not considering parameter "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot use specified measure for structural recursion:"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3;
static const lean_array_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "getRecArgInfos report: "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_nonIndicesFirst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_nonIndicesFirst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__1;
static const lean_ctor_object l_Lean_Elab_Structural_nonIndicesFirst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value)}};
static const lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_nonIndicesFirst___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_inductiveGroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_inductiveGroups___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_inductiveGroups___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Elab.Structural.argsInGroup"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(uint8_t, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_maxCombinationSize;
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Skipping arguments of type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", as "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " has no compatible argument.\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Too many possible combinations of parameters of type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " (or "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "please indicate the recursive argument explicitly using `termination_by structural`).\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_findRecArgCandidates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "no parameters suitable for structural recursion"};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_findRecArgCandidates___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__3;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "inductive groups: "};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__5;
static const lean_array_object l_Lean_Elab_Structural_findRecArgCandidates___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__6_value;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "recArgInfos:"};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__8;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "the type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = " does not have a `.brecOn` recursor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Cannot use "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_tryCandidates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "failed to infer structural recursion:\n"};
static const lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_tryCandidates___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_tryCandidates___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Structural_tryCandidates___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tryCandidates:\n"};
static const lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_tryCandidates___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_tryCandidates___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParam___closed__1(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParam___closed__0));
v___x_26_ = l_Lean_stringToMessageData(v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam(lean_object* v_xs_27_, lean_object* v_i_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v___x_34_; lean_object* v_x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = l_Lean_instInhabitedExpr;
v_x_35_ = lean_array_get_borrowed(v___x_34_, v_xs_27_, v_i_28_);
v___x_36_ = l_Lean_Expr_fvarId_x21(v_x_35_);
v___x_37_ = l_Lean_FVarId_getUserName___redArg(v___x_36_, v_a_29_, v_a_31_, v_a_32_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v_a_38_; uint8_t v___x_39_; 
v_a_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc(v_a_38_);
lean_dec_ref_known(v___x_37_, 1);
v___x_39_ = l_Lean_Name_hasMacroScopes(v_a_38_);
lean_dec(v_a_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_inc(v_x_35_);
v___x_40_ = l_Lean_MessageData_ofExpr(v_x_35_);
v___x_41_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v___x_40_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParam___closed__1, &l_Lean_Elab_Structural_prettyParam___closed__1_once, _init_l_Lean_Elab_Structural_prettyParam___closed__1);
v___x_43_ = lean_unsigned_to_nat(1u);
v___x_44_ = lean_nat_add(v_i_28_, v___x_43_);
v___x_45_ = l_Nat_reprFast(v___x_44_);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = l_Lean_MessageData_ofFormat(v___x_46_);
v___x_48_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_42_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
v___x_49_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v___x_48_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
return v___x_49_;
}
}
else
{
lean_object* v_a_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_a_50_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v___x_37_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_a_50_);
lean_dec(v___x_37_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_a_50_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam___boxed(lean_object* v_xs_58_, lean_object* v_i_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Elab_Structural_prettyParam(v_xs_58_, v_i_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_i_59_);
lean_dec_ref(v_xs_58_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(lean_object* v_k_66_, lean_object* v_b_67_, lean_object* v_c_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
lean_inc(v___y_72_);
lean_inc_ref(v___y_71_);
lean_inc(v___y_70_);
lean_inc_ref(v___y_69_);
v___x_74_ = lean_apply_7(v_k_66_, v_b_67_, v_c_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, lean_box(0));
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed(lean_object* v_k_75_, lean_object* v_b_76_, lean_object* v_c_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(v_k_75_, v_b_76_, v_c_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(lean_object* v_e_84_, lean_object* v_k_85_, uint8_t v_cleanupAnnotations_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___f_92_; uint8_t v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___f_92_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_92_, 0, v_k_85_);
v___x_93_ = 1;
v___x_94_ = 0;
v___x_95_ = lean_box(0);
v___x_96_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_84_, v___x_93_, v___x_94_, v___x_93_, v___x_94_, v___x_95_, v___f_92_, v_cleanupAnnotations_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_112_; 
v_a_105_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_112_ == 0)
{
v___x_107_ = v___x_96_;
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_96_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_110_; 
if (v_isShared_108_ == 0)
{
v___x_110_ = v___x_107_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_a_105_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___boxed(lean_object* v_e_113_, lean_object* v_k_114_, lean_object* v_cleanupAnnotations_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_121_; lean_object* v_res_122_; 
v_cleanupAnnotations_boxed_121_ = lean_unbox(v_cleanupAnnotations_115_);
v_res_122_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_e_113_, v_k_114_, v_cleanupAnnotations_boxed_121_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(lean_object* v_00_u03b1_123_, lean_object* v_e_124_, lean_object* v_k_125_, uint8_t v_cleanupAnnotations_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_e_124_, v_k_125_, v_cleanupAnnotations_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___boxed(lean_object* v_00_u03b1_133_, lean_object* v_e_134_, lean_object* v_k_135_, lean_object* v_cleanupAnnotations_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_142_; lean_object* v_res_143_; 
v_cleanupAnnotations_boxed_142_ = lean_unbox(v_cleanupAnnotations_136_);
v_res_143_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(v_00_u03b1_133_, v_e_134_, v_k_135_, v_cleanupAnnotations_boxed_142_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0(lean_object* v_recArgInfo_144_, lean_object* v_xs_145_, lean_object* v_ys_146_, lean_object* v_x_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_fixedParamPerm_153_; lean_object* v_recArgPos_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_fixedParamPerm_153_ = lean_ctor_get(v_recArgInfo_144_, 1);
lean_inc_ref(v_fixedParamPerm_153_);
v_recArgPos_154_ = lean_ctor_get(v_recArgInfo_144_, 2);
lean_inc(v_recArgPos_154_);
lean_dec_ref(v_recArgInfo_144_);
v___x_155_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_153_, v_xs_145_, v_ys_146_);
v___x_156_ = l_Lean_Elab_Structural_prettyParam(v___x_155_, v_recArgPos_154_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v_recArgPos_154_);
lean_dec_ref(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed(lean_object* v_recArgInfo_157_, lean_object* v_xs_158_, lean_object* v_ys_159_, lean_object* v_x_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Elab_Structural_prettyRecArg___lam__0(v_recArgInfo_157_, v_xs_158_, v_ys_159_, v_x_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec_ref(v_x_160_);
lean_dec_ref(v_xs_158_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg(lean_object* v_xs_167_, lean_object* v_value_168_, lean_object* v_recArgInfo_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___f_175_; uint8_t v___x_176_; lean_object* v___x_177_; 
v___f_175_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_175_, 0, v_recArgInfo_169_);
lean_closure_set(v___f_175_, 1, v_xs_167_);
v___x_176_ = 0;
v___x_177_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_168_, v___f_175_, v___x_176_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___boxed(lean_object* v_xs_178_, lean_object* v_value_179_, lean_object* v_recArgInfo_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_178_, v_value_179_, v_recArgInfo_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
return v_res_186_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0));
v___x_189_ = l_Lean_stringToMessageData(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(lean_object* v_xs_190_, lean_object* v_as_191_, size_t v_sz_192_, size_t v_i_193_, lean_object* v_b_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = lean_usize_dec_lt(v_i_193_, v_sz_192_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
lean_dec_ref(v_xs_190_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v_b_194_);
return v___x_201_;
}
else
{
lean_object* v_snd_202_; lean_object* v_snd_203_; lean_object* v_fst_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_286_; 
v_snd_202_ = lean_ctor_get(v_b_194_, 1);
lean_inc(v_snd_202_);
v_snd_203_ = lean_ctor_get(v_snd_202_, 1);
lean_inc(v_snd_203_);
v_fst_204_ = lean_ctor_get(v_b_194_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v_b_194_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v_b_194_, 1);
lean_dec(v_unused_287_);
v___x_206_ = v_b_194_;
v_isShared_207_ = v_isSharedCheck_286_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_fst_204_);
lean_dec(v_b_194_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_286_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v_fst_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_284_; 
v_fst_208_ = lean_ctor_get(v_snd_202_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v_snd_202_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; 
v_unused_285_ = lean_ctor_get(v_snd_202_, 1);
lean_dec(v_unused_285_);
v___x_210_ = v_snd_202_;
v_isShared_211_ = v_isSharedCheck_284_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_fst_208_);
lean_dec(v_snd_202_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_284_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v_array_212_; lean_object* v_start_213_; lean_object* v_stop_214_; uint8_t v___x_215_; 
v_array_212_ = lean_ctor_get(v_snd_203_, 0);
v_start_213_ = lean_ctor_get(v_snd_203_, 1);
v_stop_214_ = lean_ctor_get(v_snd_203_, 2);
v___x_215_ = lean_nat_dec_lt(v_start_213_, v_stop_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_217_; 
lean_dec_ref(v_xs_190_);
if (v_isShared_211_ == 0)
{
v___x_217_ = v___x_210_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_fst_208_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_snd_203_);
v___x_217_ = v_reuseFailAlloc_222_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_219_; 
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v___x_217_);
v___x_219_ = v___x_206_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_fst_204_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___x_217_);
v___x_219_ = v_reuseFailAlloc_221_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
}
}
else
{
lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_280_; 
lean_inc(v_stop_214_);
lean_inc(v_start_213_);
lean_inc_ref(v_array_212_);
v_isSharedCheck_280_ = !lean_is_exclusive(v_snd_203_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; lean_object* v_unused_282_; lean_object* v_unused_283_; 
v_unused_281_ = lean_ctor_get(v_snd_203_, 2);
lean_dec(v_unused_281_);
v_unused_282_ = lean_ctor_get(v_snd_203_, 1);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v_snd_203_, 0);
lean_dec(v_unused_283_);
v___x_224_ = v_snd_203_;
v_isShared_225_ = v_isSharedCheck_280_;
goto v_resetjp_223_;
}
else
{
lean_dec(v_snd_203_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_280_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_array_226_; lean_object* v_start_227_; lean_object* v_stop_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v_array_226_ = lean_ctor_get(v_fst_208_, 0);
v_start_227_ = lean_ctor_get(v_fst_208_, 1);
v_stop_228_ = lean_ctor_get(v_fst_208_, 2);
v___x_229_ = lean_array_fget(v_array_212_, v_start_213_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_nat_add(v_start_213_, v___x_230_);
lean_dec(v_start_213_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_231_);
v___x_233_ = v___x_224_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_array_212_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_stop_214_);
v___x_233_ = v_reuseFailAlloc_279_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
uint8_t v___x_234_; 
v___x_234_ = lean_nat_dec_lt(v_start_227_, v_stop_228_);
if (v___x_234_ == 0)
{
lean_object* v___x_236_; 
lean_dec(v___x_229_);
lean_dec_ref(v_xs_190_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v___x_233_);
v___x_236_ = v___x_210_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_fst_208_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v___x_233_);
v___x_236_ = v_reuseFailAlloc_241_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v___x_236_);
v___x_238_ = v___x_206_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_fst_204_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_240_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_239_; 
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
return v___x_239_;
}
}
}
else
{
lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_275_; 
lean_inc(v_stop_228_);
lean_inc(v_start_227_);
lean_inc_ref(v_array_226_);
v_isSharedCheck_275_ = !lean_is_exclusive(v_fst_208_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; lean_object* v_unused_277_; lean_object* v_unused_278_; 
v_unused_276_ = lean_ctor_get(v_fst_208_, 2);
lean_dec(v_unused_276_);
v_unused_277_ = lean_ctor_get(v_fst_208_, 1);
lean_dec(v_unused_277_);
v_unused_278_ = lean_ctor_get(v_fst_208_, 0);
lean_dec(v_unused_278_);
v___x_243_ = v_fst_208_;
v_isShared_244_ = v_isSharedCheck_275_;
goto v_resetjp_242_;
}
else
{
lean_dec(v_fst_208_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_275_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v_a_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v_a_245_ = lean_array_uget_borrowed(v_as_191_, v_i_193_);
v___x_246_ = lean_array_fget(v_array_226_, v_start_227_);
v___x_247_ = lean_nat_add(v_start_227_, v___x_230_);
lean_dec(v_start_227_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v___x_247_);
v___x_249_ = v___x_243_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_array_226_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v_stop_228_);
v___x_249_ = v_reuseFailAlloc_274_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; 
lean_inc_ref(v_xs_190_);
v___x_250_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_190_, v___x_246_, v___x_229_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_258_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v___x_250_, 1);
v___x_252_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1);
v___x_253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_253_, 0, v_a_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_inc(v_a_245_);
v___x_254_ = l_Lean_MessageData_ofName(v_a_245_);
v___x_255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_array_push(v_fst_204_, v___x_255_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v___x_233_);
lean_ctor_set(v___x_210_, 0, v___x_249_);
v___x_258_ = v___x_210_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v___x_233_);
v___x_258_ = v_reuseFailAlloc_265_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_260_; 
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v___x_258_);
lean_ctor_set(v___x_206_, 0, v___x_256_);
v___x_260_ = v___x_206_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___x_258_);
v___x_260_ = v_reuseFailAlloc_264_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
size_t v___x_261_; size_t v___x_262_; 
v___x_261_ = ((size_t)1ULL);
v___x_262_ = lean_usize_add(v_i_193_, v___x_261_);
v_i_193_ = v___x_262_;
v_b_194_ = v___x_260_;
goto _start;
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec_ref(v___x_249_);
lean_dec_ref(v___x_233_);
lean_del_object(v___x_210_);
lean_del_object(v___x_206_);
lean_dec(v_fst_204_);
lean_dec_ref(v_xs_190_);
v_a_266_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_250_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_250_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___boxed(lean_object* v_xs_288_, lean_object* v_as_289_, lean_object* v_sz_290_, lean_object* v_i_291_, lean_object* v_b_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
size_t v_sz_boxed_298_; size_t v_i_boxed_299_; lean_object* v_res_300_; 
v_sz_boxed_298_ = lean_unbox_usize(v_sz_290_);
lean_dec(v_sz_290_);
v_i_boxed_299_ = lean_unbox_usize(v_i_291_);
lean_dec(v_i_291_);
v_res_300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(v_xs_288_, v_as_289_, v_sz_boxed_298_, v_i_boxed_299_, v_b_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec_ref(v_as_289_);
return v_res_300_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParameterSet___closed__2(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__1));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParameterSet___closed__4(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__3));
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet(lean_object* v_fnNames_309_, lean_object* v_xs_310_, lean_object* v_values_311_, lean_object* v_recArgInfos_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = lean_array_get_size(v_fnNames_309_);
v___x_319_ = lean_unsigned_to_nat(1u);
v___x_320_ = lean_nat_dec_eq(v___x_318_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v_l_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; size_t v_sz_329_; size_t v___x_330_; lean_object* v___x_331_; 
v___x_321_ = lean_unsigned_to_nat(0u);
v_l_322_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__0));
v___x_323_ = lean_array_get_size(v_values_311_);
v___x_324_ = l_Array_toSubarray___redArg(v_values_311_, v___x_321_, v___x_323_);
v___x_325_ = lean_array_get_size(v_recArgInfos_312_);
v___x_326_ = l_Array_toSubarray___redArg(v_recArgInfos_312_, v___x_321_, v___x_325_);
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_324_);
lean_ctor_set(v___x_327_, 1, v___x_326_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v_l_322_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v_sz_329_ = lean_array_size(v_fnNames_309_);
v___x_330_ = ((size_t)0ULL);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(v_xs_310_, v_fnNames_309_, v_sz_329_, v___x_330_, v___x_328_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_351_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_351_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_351_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_351_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v_fst_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_349_; 
v_fst_336_ = lean_ctor_get(v_a_332_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v_a_332_);
if (v_isSharedCheck_349_ == 0)
{
lean_object* v_unused_350_; 
v_unused_350_ = lean_ctor_get(v_a_332_, 1);
lean_dec(v_unused_350_);
v___x_338_ = v_a_332_;
v_isShared_339_ = v_isSharedCheck_349_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_fst_336_);
lean_dec(v_a_332_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_349_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_340_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParameterSet___closed__2, &l_Lean_Elab_Structural_prettyParameterSet___closed__2_once, _init_l_Lean_Elab_Structural_prettyParameterSet___closed__2);
v___x_341_ = lean_array_to_list(v_fst_336_);
v___x_342_ = l_Lean_MessageData_andList(v___x_341_);
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 7);
lean_ctor_set(v___x_338_, 1, v___x_342_);
lean_ctor_set(v___x_338_, 0, v___x_340_);
v___x_344_ = v___x_338_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_348_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_346_; 
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_344_);
v___x_346_ = v___x_334_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
v_a_352_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_331_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_331_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_360_ = l_Lean_instInhabitedExpr;
v___x_361_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_array_get(v___x_360_, v_values_311_, v___x_362_);
lean_dec_ref(v_values_311_);
v___x_364_ = lean_array_get(v___x_361_, v_recArgInfos_312_, v___x_362_);
lean_dec_ref(v_recArgInfos_312_);
v___x_365_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_310_, v___x_363_, v___x_364_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_375_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_375_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_375_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_375_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_370_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParameterSet___closed__4, &l_Lean_Elab_Structural_prettyParameterSet___closed__4_once, _init_l_Lean_Elab_Structural_prettyParameterSet___closed__4);
v___x_371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v_a_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_371_);
v___x_373_ = v___x_368_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
return v___x_365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet___boxed(lean_object* v_fnNames_376_, lean_object* v_xs_377_, lean_object* v_values_378_, lean_object* v_recArgInfos_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Elab_Structural_prettyParameterSet(v_fnNames_376_, v_xs_377_, v_values_378_, v_recArgInfos_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
lean_dec_ref(v_fnNames_376_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(lean_object* v_xs_386_, lean_object* v_v_387_, lean_object* v_i_388_){
_start:
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_array_get_size(v_xs_386_);
v___x_390_ = lean_nat_dec_lt(v_i_388_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
lean_dec(v_i_388_);
v___x_391_ = lean_box(0);
return v___x_391_;
}
else
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_array_fget_borrowed(v_xs_386_, v_i_388_);
v___x_393_ = lean_expr_eqv(v___x_392_, v_v_387_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_i_388_, v___x_394_);
lean_dec(v_i_388_);
v_i_388_ = v___x_395_;
goto _start;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v_i_388_);
return v___x_397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_398_, lean_object* v_v_399_, lean_object* v_i_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(v_xs_398_, v_v_399_, v_i_400_);
lean_dec_ref(v_v_399_);
lean_dec_ref(v_xs_398_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(lean_object* v_xs_402_, lean_object* v_v_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(v_xs_402_, v_v_403_, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0___boxed(lean_object* v_xs_406_, lean_object* v_v_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(v_xs_406_, v_v_407_);
lean_dec_ref(v_v_407_);
lean_dec_ref(v_xs_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(lean_object* v_xs_409_, lean_object* v_v_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(v_xs_409_, v_v_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; 
v___x_412_ = lean_box(0);
return v___x_412_;
}
else
{
lean_object* v_val_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_val_413_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_411_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_val_413_);
lean_dec(v___x_411_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_val_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0___boxed(lean_object* v_xs_421_, lean_object* v_v_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_421_, v_v_422_);
lean_dec_ref(v_v_422_);
lean_dec_ref(v_xs_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(lean_object* v_xs_424_, lean_object* v_as_425_, size_t v_sz_426_, size_t v_i_427_, lean_object* v_b_428_){
_start:
{
lean_object* v_a_430_; uint8_t v___x_434_; 
v___x_434_ = lean_usize_dec_lt(v_i_427_, v_sz_426_);
if (v___x_434_ == 0)
{
return v_b_428_;
}
else
{
lean_object* v_a_435_; lean_object* v___x_436_; 
v_a_435_ = lean_array_uget_borrowed(v_as_425_, v_i_427_);
v___x_436_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_424_, v_a_435_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; uint8_t v___x_438_; 
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_436_, 1);
v___x_438_ = lean_nat_dec_lt(v_val_437_, v_b_428_);
if (v___x_438_ == 0)
{
lean_dec(v_val_437_);
v_a_430_ = v_b_428_;
goto v___jp_429_;
}
else
{
lean_dec(v_b_428_);
v_a_430_ = v_val_437_;
goto v___jp_429_;
}
}
else
{
lean_dec(v___x_436_);
v_a_430_ = v_b_428_;
goto v___jp_429_;
}
}
v___jp_429_:
{
size_t v___x_431_; size_t v___x_432_; 
v___x_431_ = ((size_t)1ULL);
v___x_432_ = lean_usize_add(v_i_427_, v___x_431_);
v_i_427_ = v___x_432_;
v_b_428_ = v_a_430_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1___boxed(lean_object* v_xs_439_, lean_object* v_as_440_, lean_object* v_sz_441_, lean_object* v_i_442_, lean_object* v_b_443_){
_start:
{
size_t v_sz_boxed_444_; size_t v_i_boxed_445_; lean_object* v_res_446_; 
v_sz_boxed_444_ = lean_unbox_usize(v_sz_441_);
lean_dec(v_sz_441_);
v_i_boxed_445_ = lean_unbox_usize(v_i_442_);
lean_dec(v_i_442_);
v_res_446_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(v_xs_439_, v_as_440_, v_sz_boxed_444_, v_i_boxed_445_, v_b_443_);
lean_dec_ref(v_as_440_);
lean_dec_ref(v_xs_439_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(lean_object* v_xs_447_, lean_object* v_indices_448_){
_start:
{
lean_object* v_minPos_449_; size_t v_sz_450_; size_t v___x_451_; lean_object* v___x_452_; 
v_minPos_449_ = lean_array_get_size(v_xs_447_);
v_sz_450_ = lean_array_size(v_indices_448_);
v___x_451_ = ((size_t)0ULL);
v___x_452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(v_xs_447_, v_indices_448_, v_sz_450_, v___x_451_, v_minPos_449_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object* v_xs_453_, lean_object* v_indices_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(v_xs_453_, v_indices_454_);
lean_dec_ref(v_indices_454_);
lean_dec_ref(v_xs_453_);
return v_res_455_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(lean_object* v_x_456_){
_start:
{
uint8_t v___x_457_; 
v___x_457_ = 0;
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_x_458_){
_start:
{
uint8_t v_res_459_; lean_object* v_r_460_; 
v_res_459_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(v_x_458_);
lean_dec(v_x_458_);
v_r_460_ = lean_box(v_res_459_);
return v_r_460_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(lean_object* v_fvarId_461_, lean_object* v_x_462_){
_start:
{
uint8_t v___x_463_; 
v___x_463_ = l_Lean_instBEqFVarId_beq(v_fvarId_461_, v_x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_464_, lean_object* v_x_465_){
_start:
{
uint8_t v_res_466_; lean_object* v_r_467_; 
v_res_466_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(v_fvarId_464_, v_x_465_);
lean_dec(v_x_465_);
lean_dec(v_fvarId_464_);
v_r_467_ = lean_box(v_res_466_);
return v_r_467_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_box(0);
v___x_470_ = lean_unsigned_to_nat(16u);
v___x_471_ = lean_mk_array(v___x_470_, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
lean_ctor_set(v___x_474_, 1, v___x_472_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(lean_object* v_e_475_, lean_object* v_fvarId_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___f_479_; lean_object* v___f_480_; lean_object* v___x_481_; uint8_t v_fst_483_; lean_object* v_mctx_484_; lean_object* v___y_502_; lean_object* v_mctx_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v___f_479_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0));
v___f_480_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_480_, 0, v_fvarId_476_);
v___x_481_ = lean_st_ref_get(v___y_477_);
v_mctx_507_ = lean_ctor_get(v___x_481_, 0);
lean_inc_ref_n(v_mctx_507_, 2);
lean_dec(v___x_481_);
v___x_508_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v_mctx_507_);
v___x_510_ = l_Lean_Expr_hasFVar(v_e_475_);
if (v___x_510_ == 0)
{
uint8_t v___x_511_; 
v___x_511_ = l_Lean_Expr_hasMVar(v_e_475_);
if (v___x_511_ == 0)
{
lean_dec_ref_known(v___x_509_, 2);
lean_dec_ref(v___f_480_);
lean_dec_ref(v_e_475_);
v_fst_483_ = v___x_511_;
v_mctx_484_ = v_mctx_507_;
goto v___jp_482_;
}
else
{
lean_object* v___x_512_; 
lean_dec_ref(v_mctx_507_);
v___x_512_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_480_, v___f_479_, v_e_475_, v___x_509_);
v___y_502_ = v___x_512_;
goto v___jp_501_;
}
}
else
{
lean_object* v___x_513_; 
lean_dec_ref(v_mctx_507_);
v___x_513_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_480_, v___f_479_, v_e_475_, v___x_509_);
v___y_502_ = v___x_513_;
goto v___jp_501_;
}
v___jp_482_:
{
lean_object* v___x_485_; lean_object* v_cache_486_; lean_object* v_zetaDeltaFVarIds_487_; lean_object* v_postponed_488_; lean_object* v_diag_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_499_; 
v___x_485_ = lean_st_ref_take(v___y_477_);
v_cache_486_ = lean_ctor_get(v___x_485_, 1);
v_zetaDeltaFVarIds_487_ = lean_ctor_get(v___x_485_, 2);
v_postponed_488_ = lean_ctor_get(v___x_485_, 3);
v_diag_489_ = lean_ctor_get(v___x_485_, 4);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_499_ == 0)
{
lean_object* v_unused_500_; 
v_unused_500_ = lean_ctor_get(v___x_485_, 0);
lean_dec(v_unused_500_);
v___x_491_ = v___x_485_;
v_isShared_492_ = v_isSharedCheck_499_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_diag_489_);
lean_inc(v_postponed_488_);
lean_inc(v_zetaDeltaFVarIds_487_);
lean_inc(v_cache_486_);
lean_dec(v___x_485_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_499_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v_mctx_484_);
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_mctx_484_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_cache_486_);
lean_ctor_set(v_reuseFailAlloc_498_, 2, v_zetaDeltaFVarIds_487_);
lean_ctor_set(v_reuseFailAlloc_498_, 3, v_postponed_488_);
lean_ctor_set(v_reuseFailAlloc_498_, 4, v_diag_489_);
v___x_494_ = v_reuseFailAlloc_498_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_st_ref_put(v___y_477_, v___x_494_);
v___x_496_ = lean_box(v_fst_483_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
}
v___jp_501_:
{
lean_object* v_snd_503_; lean_object* v_fst_504_; lean_object* v_mctx_505_; uint8_t v___x_506_; 
v_snd_503_ = lean_ctor_get(v___y_502_, 1);
lean_inc(v_snd_503_);
v_fst_504_ = lean_ctor_get(v___y_502_, 0);
lean_inc(v_fst_504_);
lean_dec_ref(v___y_502_);
v_mctx_505_ = lean_ctor_get(v_snd_503_, 1);
lean_inc_ref(v_mctx_505_);
lean_dec(v_snd_503_);
v___x_506_ = lean_unbox(v_fst_504_);
lean_dec(v_fst_504_);
v_fst_483_ = v___x_506_;
v_mctx_484_ = v_mctx_505_;
goto v___jp_482_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___boxed(lean_object* v_e_514_, lean_object* v_fvarId_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_e_514_, v_fvarId_515_, v___y_516_);
lean_dec(v___y_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(lean_object* v_e_519_, lean_object* v_fvarId_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_e_519_, v_fvarId_520_, v___y_522_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___boxed(lean_object* v_e_527_, lean_object* v_fvarId_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(v_e_527_, v_fvarId_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v_res_534_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(lean_object* v_a_535_, lean_object* v_as_536_, size_t v_i_537_, size_t v_stop_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_eq(v_i_537_, v_stop_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_array_uget_borrowed(v_as_536_, v_i_537_);
v___x_541_ = lean_expr_eqv(v_a_535_, v___x_540_);
if (v___x_541_ == 0)
{
size_t v___x_542_; size_t v___x_543_; 
v___x_542_ = ((size_t)1ULL);
v___x_543_ = lean_usize_add(v_i_537_, v___x_542_);
v_i_537_ = v___x_543_;
goto _start;
}
else
{
return v___x_541_;
}
}
else
{
uint8_t v___x_545_; 
v___x_545_ = 0;
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1___boxed(lean_object* v_a_546_, lean_object* v_as_547_, lean_object* v_i_548_, lean_object* v_stop_549_){
_start:
{
size_t v_i_boxed_550_; size_t v_stop_boxed_551_; uint8_t v_res_552_; lean_object* v_r_553_; 
v_i_boxed_550_ = lean_unbox_usize(v_i_548_);
lean_dec(v_i_548_);
v_stop_boxed_551_ = lean_unbox_usize(v_stop_549_);
lean_dec(v_stop_549_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(v_a_546_, v_as_547_, v_i_boxed_550_, v_stop_boxed_551_);
lean_dec_ref(v_as_547_);
lean_dec_ref(v_a_546_);
v_r_553_ = lean_box(v_res_552_);
return v_r_553_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(lean_object* v_as_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = lean_array_get_size(v_as_554_);
v___x_558_ = lean_nat_dec_lt(v___x_556_, v___x_557_);
if (v___x_558_ == 0)
{
return v___x_558_;
}
else
{
if (v___x_558_ == 0)
{
return v___x_558_;
}
else
{
size_t v___x_559_; size_t v___x_560_; uint8_t v___x_561_; 
v___x_559_ = ((size_t)0ULL);
v___x_560_ = lean_usize_of_nat(v___x_557_);
v___x_561_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(v_a_555_, v_as_554_, v___x_559_, v___x_560_);
return v___x_561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1___boxed(lean_object* v_as_562_, lean_object* v_a_563_){
_start:
{
uint8_t v_res_564_; lean_object* v_r_565_; 
v_res_564_ = l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(v_as_562_, v_a_563_);
lean_dec_ref(v_a_563_);
lean_dec_ref(v_as_562_);
v_r_565_ = lean_box(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(lean_object* v_a_569_, lean_object* v_indices_570_, lean_object* v_a_571_, lean_object* v_as_572_, size_t v_sz_573_, size_t v_i_574_, lean_object* v_b_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_a_582_; uint8_t v___x_586_; 
v___x_586_ = lean_usize_dec_lt(v_i_574_, v_sz_573_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; 
lean_dec_ref(v_a_571_);
lean_dec_ref(v_a_569_);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v_b_575_);
return v___x_587_;
}
else
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec_ref(v_b_575_);
v___x_588_ = lean_box(0);
v___x_589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_590_ = lean_array_uget_borrowed(v_as_572_, v_i_574_);
v___x_591_ = l_Lean_Expr_fvarId_x21(v_a_590_);
lean_inc_ref(v_a_569_);
v___x_592_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_a_569_, v___x_591_, v___y_577_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_606_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_606_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_606_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_606_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
uint8_t v___x_597_; 
v___x_597_ = l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(v_indices_570_, v_a_590_);
if (v___x_597_ == 0)
{
uint8_t v___x_598_; 
v___x_598_ = lean_unbox(v_a_593_);
lean_dec(v_a_593_);
if (v___x_598_ == 0)
{
lean_del_object(v___x_595_);
v_a_582_ = v___x_589_;
goto v___jp_581_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
lean_dec_ref(v_a_569_);
lean_inc(v_a_590_);
v___x_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_599_, 0, v_a_571_);
lean_ctor_set(v___x_599_, 1, v_a_590_);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v___x_588_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_602_);
v___x_604_ = v___x_595_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
else
{
lean_del_object(v___x_595_);
lean_dec(v_a_593_);
v_a_582_ = v___x_589_;
goto v___jp_581_;
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_a_571_);
lean_dec_ref(v_a_569_);
v_a_607_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_592_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_592_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
v___jp_581_:
{
size_t v___x_583_; size_t v___x_584_; 
v___x_583_ = ((size_t)1ULL);
v___x_584_ = lean_usize_add(v_i_574_, v___x_583_);
lean_inc_ref(v_a_582_);
v_i_574_ = v___x_584_;
v_b_575_ = v_a_582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___boxed(lean_object* v_a_615_, lean_object* v_indices_616_, lean_object* v_a_617_, lean_object* v_as_618_, lean_object* v_sz_619_, lean_object* v_i_620_, lean_object* v_b_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
size_t v_sz_boxed_627_; size_t v_i_boxed_628_; lean_object* v_res_629_; 
v_sz_boxed_627_ = lean_unbox_usize(v_sz_619_);
lean_dec(v_sz_619_);
v_i_boxed_628_ = lean_unbox_usize(v_i_620_);
lean_dec(v_i_620_);
v_res_629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_615_, v_indices_616_, v_a_617_, v_as_618_, v_sz_boxed_627_, v_i_boxed_628_, v_b_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec_ref(v_as_618_);
lean_dec_ref(v_indices_616_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(lean_object* v_ys_630_, lean_object* v_indices_631_, lean_object* v_as_632_, size_t v_sz_633_, size_t v_i_634_, lean_object* v_b_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
uint8_t v___x_641_; 
v___x_641_ = lean_usize_dec_lt(v_i_634_, v_sz_633_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; 
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v_b_635_);
return v___x_642_;
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_a_645_; lean_object* v___x_646_; 
lean_dec_ref(v_b_635_);
v___x_643_ = lean_box(0);
v___x_644_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_645_ = lean_array_uget_borrowed(v_as_632_, v_i_634_);
lean_inc(v___y_639_);
lean_inc_ref(v___y_638_);
lean_inc(v___y_637_);
lean_inc_ref(v___y_636_);
lean_inc(v_a_645_);
v___x_646_ = lean_infer_type(v_a_645_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; size_t v_sz_648_; size_t v___x_649_; lean_object* v___x_650_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_a_647_);
lean_dec_ref_known(v___x_646_, 1);
v_sz_648_ = lean_array_size(v_ys_630_);
v___x_649_ = ((size_t)0ULL);
lean_inc(v_a_645_);
v___x_650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_647_, v_indices_631_, v_a_645_, v_ys_630_, v_sz_648_, v___x_649_, v___x_644_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_670_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_670_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_670_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_670_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v_fst_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_668_; 
v_fst_655_ = lean_ctor_get(v_a_651_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_a_651_);
if (v_isSharedCheck_668_ == 0)
{
lean_object* v_unused_669_; 
v_unused_669_ = lean_ctor_get(v_a_651_, 1);
lean_dec(v_unused_669_);
v___x_657_ = v_a_651_;
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_fst_655_);
lean_dec(v_a_651_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
if (lean_obj_tag(v_fst_655_) == 0)
{
size_t v___x_659_; size_t v___x_660_; 
lean_del_object(v___x_657_);
lean_del_object(v___x_653_);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_i_634_, v___x_659_);
v_i_634_ = v___x_660_;
v_b_635_ = v___x_644_;
goto _start;
}
else
{
lean_object* v___x_663_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_643_);
v___x_663_ = v___x_657_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_fst_655_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v___x_643_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_663_);
v___x_665_ = v___x_653_;
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
}
}
else
{
return v___x_650_;
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_646_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_646_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4___boxed(lean_object* v_ys_679_, lean_object* v_indices_680_, lean_object* v_as_681_, lean_object* v_sz_682_, lean_object* v_i_683_, lean_object* v_b_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
size_t v_sz_boxed_690_; size_t v_i_boxed_691_; lean_object* v_res_692_; 
v_sz_boxed_690_ = lean_unbox_usize(v_sz_682_);
lean_dec(v_sz_682_);
v_i_boxed_691_ = lean_unbox_usize(v_i_683_);
lean_dec(v_i_683_);
v_res_692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(v_ys_679_, v_indices_680_, v_as_681_, v_sz_boxed_690_, v_i_boxed_691_, v_b_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec_ref(v_as_681_);
lean_dec_ref(v_indices_680_);
lean_dec_ref(v_ys_679_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(lean_object* v_indices_693_, lean_object* v_ys_694_, lean_object* v_as_695_, size_t v_sz_696_, size_t v_i_697_, lean_object* v_b_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
uint8_t v___x_704_; 
v___x_704_ = lean_usize_dec_lt(v_i_697_, v_sz_696_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v_b_698_);
return v___x_705_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_a_708_; lean_object* v___x_709_; 
lean_dec_ref(v_b_698_);
v___x_706_ = lean_box(0);
v___x_707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_708_ = lean_array_uget_borrowed(v_as_695_, v_i_697_);
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc(v_a_708_);
v___x_709_ = lean_infer_type(v_a_708_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; size_t v_sz_711_; size_t v___x_712_; lean_object* v___x_713_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v_sz_711_ = lean_array_size(v_ys_694_);
v___x_712_ = ((size_t)0ULL);
lean_inc(v_a_708_);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_710_, v_indices_693_, v_a_708_, v_ys_694_, v_sz_711_, v___x_712_, v___x_707_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_733_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_733_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_733_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_733_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v_fst_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_731_; 
v_fst_718_ = lean_ctor_get(v_a_714_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_a_714_);
if (v_isSharedCheck_731_ == 0)
{
lean_object* v_unused_732_; 
v_unused_732_ = lean_ctor_get(v_a_714_, 1);
lean_dec(v_unused_732_);
v___x_720_ = v_a_714_;
v_isShared_721_ = v_isSharedCheck_731_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_fst_718_);
lean_dec(v_a_714_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_731_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
if (lean_obj_tag(v_fst_718_) == 0)
{
size_t v___x_722_; size_t v___x_723_; lean_object* v___x_724_; 
lean_del_object(v___x_720_);
lean_del_object(v___x_716_);
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_697_, v___x_722_);
v___x_724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(v_ys_694_, v_indices_693_, v_as_695_, v_sz_696_, v___x_723_, v___x_707_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
return v___x_724_;
}
else
{
lean_object* v___x_726_; 
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_706_);
v___x_726_ = v___x_720_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_fst_718_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_706_);
v___x_726_ = v_reuseFailAlloc_730_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_726_);
v___x_728_ = v___x_716_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
}
else
{
return v___x_713_;
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
v_a_734_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_709_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_709_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3___boxed(lean_object* v_indices_742_, lean_object* v_ys_743_, lean_object* v_as_744_, lean_object* v_sz_745_, lean_object* v_i_746_, lean_object* v_b_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
size_t v_sz_boxed_753_; size_t v_i_boxed_754_; lean_object* v_res_755_; 
v_sz_boxed_753_ = lean_unbox_usize(v_sz_745_);
lean_dec(v_sz_745_);
v_i_boxed_754_ = lean_unbox_usize(v_i_746_);
lean_dec(v_i_746_);
v_res_755_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(v_indices_742_, v_ys_743_, v_as_744_, v_sz_boxed_753_, v_i_boxed_754_, v_b_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec_ref(v_as_744_);
lean_dec_ref(v_ys_743_);
lean_dec_ref(v_indices_742_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object* v_ys_756_, lean_object* v_indices_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; size_t v_sz_765_; size_t v___x_766_; lean_object* v___x_767_; 
v___x_763_ = lean_box(0);
v___x_764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_sz_765_ = lean_array_size(v_indices_757_);
v___x_766_ = ((size_t)0ULL);
v___x_767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(v_indices_757_, v_ys_756_, v_indices_757_, v_sz_765_, v___x_766_, v___x_764_, v_a_758_, v_a_759_, v_a_760_, v_a_761_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_780_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_780_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_780_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_780_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v_fst_772_; 
v_fst_772_ = lean_ctor_get(v_a_768_, 0);
lean_inc(v_fst_772_);
lean_dec(v_a_768_);
if (lean_obj_tag(v_fst_772_) == 0)
{
lean_object* v___x_774_; 
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_763_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_763_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
else
{
lean_object* v_val_776_; lean_object* v___x_778_; 
v_val_776_ = lean_ctor_get(v_fst_772_, 0);
lean_inc(v_val_776_);
lean_dec_ref_known(v_fst_772_, 1);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v_val_776_);
v___x_778_ = v___x_770_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_val_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_a_781_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_767_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_767_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object* v_ys_789_, lean_object* v_indices_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_789_, v_indices_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec_ref(v_indices_790_);
lean_dec_ref(v_ys_789_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(lean_object* v_a_797_, lean_object* v_as_798_, size_t v_sz_799_, size_t v_i_800_, lean_object* v_b_801_, lean_object* v___y_802_){
_start:
{
uint8_t v___x_804_; 
v___x_804_ = lean_usize_dec_lt(v_i_800_, v_sz_799_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; 
lean_dec_ref(v_a_797_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_b_801_);
return v___x_805_;
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec_ref(v_b_801_);
v___x_806_ = lean_box(0);
v___x_807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_808_ = lean_array_uget_borrowed(v_as_798_, v_i_800_);
v___x_809_ = l_Lean_Expr_fvarId_x21(v_a_808_);
lean_inc_ref(v_a_797_);
v___x_810_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_a_797_, v___x_809_, v___y_802_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_826_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_826_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_826_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_826_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
uint8_t v___x_815_; 
v___x_815_ = lean_unbox(v_a_811_);
lean_dec(v_a_811_);
if (v___x_815_ == 0)
{
size_t v___x_816_; size_t v___x_817_; 
lean_del_object(v___x_813_);
v___x_816_ = ((size_t)1ULL);
v___x_817_ = lean_usize_add(v_i_800_, v___x_816_);
v_i_800_ = v___x_817_;
v_b_801_ = v___x_807_;
goto _start;
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_824_; 
lean_inc(v_a_808_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v_a_797_);
lean_ctor_set(v___x_819_, 1, v_a_808_);
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
v___x_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v___x_806_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_822_);
v___x_824_ = v___x_813_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec_ref(v_a_797_);
v_a_827_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_810_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_810_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg___boxed(lean_object* v_a_835_, lean_object* v_as_836_, lean_object* v_sz_837_, lean_object* v_i_838_, lean_object* v_b_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
size_t v_sz_boxed_842_; size_t v_i_boxed_843_; lean_object* v_res_844_; 
v_sz_boxed_842_ = lean_unbox_usize(v_sz_837_);
lean_dec(v_sz_837_);
v_i_boxed_843_ = lean_unbox_usize(v_i_838_);
lean_dec(v_i_838_);
v_res_844_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_835_, v_as_836_, v_sz_boxed_842_, v_i_boxed_843_, v_b_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v_as_836_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(lean_object* v_ys_845_, lean_object* v_as_846_, size_t v_sz_847_, size_t v_i_848_, lean_object* v_b_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
uint8_t v___x_855_; 
v___x_855_ = lean_usize_dec_lt(v_i_848_, v_sz_847_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; 
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v_b_849_);
return v___x_856_;
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v_a_859_; size_t v_sz_860_; size_t v___x_861_; lean_object* v___x_862_; 
lean_dec_ref(v_b_849_);
v___x_857_ = lean_box(0);
v___x_858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_859_ = lean_array_uget_borrowed(v_as_846_, v_i_848_);
v_sz_860_ = lean_array_size(v_ys_845_);
v___x_861_ = ((size_t)0ULL);
lean_inc(v_a_859_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_859_, v_ys_845_, v_sz_860_, v___x_861_, v___x_858_, v___y_851_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_882_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_882_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v_fst_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_880_; 
v_fst_867_ = lean_ctor_get(v_a_863_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_a_863_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; 
v_unused_881_ = lean_ctor_get(v_a_863_, 1);
lean_dec(v_unused_881_);
v___x_869_ = v_a_863_;
v_isShared_870_ = v_isSharedCheck_880_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_fst_867_);
lean_dec(v_a_863_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_880_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
if (lean_obj_tag(v_fst_867_) == 0)
{
size_t v___x_871_; size_t v___x_872_; 
lean_del_object(v___x_869_);
lean_del_object(v___x_865_);
v___x_871_ = ((size_t)1ULL);
v___x_872_ = lean_usize_add(v_i_848_, v___x_871_);
v_i_848_ = v___x_872_;
v_b_849_ = v___x_858_;
goto _start;
}
else
{
lean_object* v___x_875_; 
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_857_);
v___x_875_ = v___x_869_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_fst_867_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_857_);
v___x_875_ = v_reuseFailAlloc_879_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_877_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_875_);
v___x_877_ = v___x_865_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
}
}
else
{
return v___x_862_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1___boxed(lean_object* v_ys_883_, lean_object* v_as_884_, lean_object* v_sz_885_, lean_object* v_i_886_, lean_object* v_b_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
size_t v_sz_boxed_893_; size_t v_i_boxed_894_; lean_object* v_res_895_; 
v_sz_boxed_893_ = lean_unbox_usize(v_sz_885_);
lean_dec(v_sz_885_);
v_i_boxed_894_ = lean_unbox_usize(v_i_886_);
lean_dec(v_i_886_);
v_res_895_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(v_ys_883_, v_as_884_, v_sz_boxed_893_, v_i_boxed_894_, v_b_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec_ref(v_as_884_);
lean_dec_ref(v_ys_883_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object* v_ys_896_, lean_object* v_indParams_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; size_t v_sz_905_; size_t v___x_906_; lean_object* v___x_907_; 
v___x_903_ = lean_box(0);
v___x_904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_sz_905_ = lean_array_size(v_indParams_897_);
v___x_906_ = ((size_t)0ULL);
v___x_907_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(v_ys_896_, v_indParams_897_, v_sz_905_, v___x_906_, v___x_904_, v_a_898_, v_a_899_, v_a_900_, v_a_901_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_920_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_920_ == 0)
{
v___x_910_ = v___x_907_;
v_isShared_911_ = v_isSharedCheck_920_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_907_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_920_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v_fst_912_; 
v_fst_912_ = lean_ctor_get(v_a_908_, 0);
lean_inc(v_fst_912_);
lean_dec(v_a_908_);
if (lean_obj_tag(v_fst_912_) == 0)
{
lean_object* v___x_914_; 
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_903_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_903_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
else
{
lean_object* v_val_916_; lean_object* v___x_918_; 
v_val_916_ = lean_ctor_get(v_fst_912_, 0);
lean_inc(v_val_916_);
lean_dec_ref_known(v_fst_912_, 1);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v_val_916_);
v___x_918_ = v___x_910_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_val_916_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_a_921_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_907_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_907_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object* v_ys_929_, lean_object* v_indParams_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(v_ys_929_, v_indParams_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
lean_dec_ref(v_indParams_930_);
lean_dec_ref(v_ys_929_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(lean_object* v_a_937_, lean_object* v_as_938_, size_t v_sz_939_, size_t v_i_940_, lean_object* v_b_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_937_, v_as_938_, v_sz_939_, v_i_940_, v_b_941_, v___y_943_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___boxed(lean_object* v_a_948_, lean_object* v_as_949_, lean_object* v_sz_950_, lean_object* v_i_951_, lean_object* v_b_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
size_t v_sz_boxed_958_; size_t v_i_boxed_959_; lean_object* v_res_960_; 
v_sz_boxed_958_ = lean_unbox_usize(v_sz_950_);
lean_dec(v_sz_950_);
v_i_boxed_959_ = lean_unbox_usize(v_i_951_);
lean_dec(v_i_951_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(v_a_948_, v_as_949_, v_sz_boxed_958_, v_i_boxed_959_, v_b_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec_ref(v_as_949_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(lean_object* v_msg_961_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_unsigned_to_nat(0u);
v___x_963_ = lean_panic_fn_borrowed(v___x_962_, v_msg_961_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(lean_object* v_msg_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v___f_971_; lean_object* v___x_4754__overap_972_; lean_object* v___x_973_; 
v___f_971_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0));
v___x_4754__overap_972_ = lean_panic_fn_borrowed(v___f_971_, v_msg_965_);
lean_inc(v___y_969_);
lean_inc_ref(v___y_968_);
lean_inc(v___y_967_);
lean_inc_ref(v___y_966_);
v___x_973_ = lean_apply_5(v___x_4754__overap_972_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, lean_box(0));
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___boxed(lean_object* v_msg_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v_msg_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
return v_res_980_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_984_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2));
v___x_985_ = lean_unsigned_to_nat(107u);
v___x_986_ = lean_unsigned_to_nat(97u);
v___x_987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_989_ = l_mkPanicMessageWithDecl(v___x_988_, v___x_987_, v___x_986_, v___x_985_, v___x_984_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(lean_object* v_xs_990_, size_t v_sz_991_, size_t v_i_992_, lean_object* v_bs_993_){
_start:
{
uint8_t v___x_994_; 
v___x_994_ = lean_usize_dec_lt(v_i_992_, v_sz_991_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; 
v___x_995_ = l_unsafeCast___redArg(v_bs_993_);
lean_dec_ref(v_bs_993_);
return v___x_995_;
}
else
{
lean_object* v_v_996_; lean_object* v___x_997_; lean_object* v_bs_x27_998_; lean_object* v___y_1000_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_v_996_ = lean_array_uget(v_bs_993_, v_i_992_);
v___x_997_ = lean_unsigned_to_nat(0u);
v_bs_x27_998_ = lean_array_uset(v_bs_993_, v_i_992_, v___x_997_);
v___x_1006_ = l_unsafeCast___redArg(v_v_996_);
lean_dec(v_v_996_);
v___x_1007_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_990_, v___x_1006_);
lean_dec(v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3);
v___x_1009_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(v___x_1008_);
v___y_1000_ = v___x_1009_;
goto v___jp_999_;
}
else
{
lean_object* v_val_1010_; 
v_val_1010_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v___x_1007_, 1);
v___y_1000_ = v_val_1010_;
goto v___jp_999_;
}
v___jp_999_:
{
size_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1001_ = ((size_t)1ULL);
v___x_1002_ = lean_usize_add(v_i_992_, v___x_1001_);
v___x_1003_ = l_unsafeCast___redArg(v___y_1000_);
lean_dec(v___y_1000_);
v___x_1004_ = lean_array_uset(v_bs_x27_998_, v_i_992_, v___x_1003_);
v_i_992_ = v___x_1002_;
v_bs_993_ = v___x_1004_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___boxed(lean_object* v_xs_1011_, lean_object* v_sz_1012_, lean_object* v_i_1013_, lean_object* v_bs_1014_){
_start:
{
size_t v_sz_boxed_1015_; size_t v_i_boxed_1016_; lean_object* v_res_1017_; 
v_sz_boxed_1015_ = lean_unbox_usize(v_sz_1012_);
lean_dec(v_sz_1012_);
v_i_boxed_1016_ = lean_unbox_usize(v_i_1013_);
lean_dec(v_i_1013_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(v_xs_1011_, v_sz_boxed_1015_, v_i_boxed_1016_, v_bs_1014_);
lean_dec_ref(v_xs_1011_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(lean_object* v_msg_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_ref_1024_; lean_object* v___x_1025_; lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1034_; 
v_ref_1024_ = lean_ctor_get(v___y_1021_, 2);
v___x_1025_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msg_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1034_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1034_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
lean_inc(v_ref_1024_);
v___x_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_ref_1024_);
lean_ctor_set(v___x_1030_, 1, v_a_1026_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 1);
lean_ctor_set(v___x_1028_, 0, v___x_1030_);
v___x_1032_ = v___x_1028_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg___boxed(lean_object* v_msg_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v_msg_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(lean_object* v_xs_1042_, lean_object* v_v_1043_, lean_object* v_i_1044_){
_start:
{
lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1045_ = lean_array_get_size(v_xs_1042_);
v___x_1046_ = lean_nat_dec_lt(v_i_1044_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; 
lean_dec(v_i_1044_);
v___x_1047_ = lean_box(0);
return v___x_1047_;
}
else
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = lean_array_fget_borrowed(v_xs_1042_, v_i_1044_);
v___x_1049_ = lean_name_eq(v___x_1048_, v_v_1043_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_unsigned_to_nat(1u);
v___x_1051_ = lean_nat_add(v_i_1044_, v___x_1050_);
lean_dec(v_i_1044_);
v_i_1044_ = v___x_1051_;
goto _start;
}
else
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v_i_1044_);
return v___x_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7___boxed(lean_object* v_xs_1054_, lean_object* v_v_1055_, lean_object* v_i_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(v_xs_1054_, v_v_1055_, v_i_1056_);
lean_dec(v_v_1055_);
lean_dec_ref(v_xs_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(lean_object* v_xs_1058_, lean_object* v_v_1059_){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(v_xs_1058_, v_v_1059_, v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5___boxed(lean_object* v_xs_1062_, lean_object* v_v_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(v_xs_1062_, v_v_1063_);
lean_dec(v_v_1063_);
lean_dec_ref(v_xs_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(lean_object* v_xs_1065_, lean_object* v_v_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(v_xs_1065_, v_v_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_box(0);
return v___x_1068_;
}
else
{
lean_object* v_val_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_val_1069_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1067_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_val_1069_);
lean_dec(v___x_1067_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_val_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4___boxed(lean_object* v_xs_1077_, lean_object* v_v_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(v_xs_1077_, v_v_1078_);
lean_dec(v_v_1078_);
lean_dec_ref(v_xs_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(lean_object* v_i_1080_, lean_object* v___x_1081_, lean_object* v_as_1082_, size_t v_i_1083_, size_t v_stop_1084_){
_start:
{
uint8_t v___x_1089_; 
v___x_1089_ = lean_usize_dec_eq(v_i_1083_, v_stop_1084_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; uint8_t v___x_1091_; 
v___x_1090_ = lean_array_uget_borrowed(v_as_1082_, v_i_1083_);
v___x_1091_ = l_Lean_Expr_isFVar(v___x_1090_);
if (v___x_1091_ == 0)
{
uint8_t v___x_1092_; 
v___x_1092_ = lean_nat_dec_lt(v_i_1080_, v___x_1081_);
if (v___x_1092_ == 0)
{
goto v___jp_1085_;
}
else
{
return v___x_1092_;
}
}
else
{
goto v___jp_1085_;
}
}
else
{
uint8_t v___x_1093_; 
v___x_1093_ = 0;
return v___x_1093_;
}
v___jp_1085_:
{
size_t v___x_1086_; size_t v___x_1087_; 
v___x_1086_ = ((size_t)1ULL);
v___x_1087_ = lean_usize_add(v_i_1083_, v___x_1086_);
v_i_1083_ = v___x_1087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6___boxed(lean_object* v_i_1094_, lean_object* v___x_1095_, lean_object* v_as_1096_, lean_object* v_i_1097_, lean_object* v_stop_1098_){
_start:
{
size_t v_i_boxed_1099_; size_t v_stop_boxed_1100_; uint8_t v_res_1101_; lean_object* v_r_1102_; 
v_i_boxed_1099_ = lean_unbox_usize(v_i_1097_);
lean_dec(v_i_1097_);
v_stop_boxed_1100_ = lean_unbox_usize(v_stop_1098_);
lean_dec(v_stop_1098_);
v_res_1101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(v_i_1094_, v___x_1095_, v_as_1096_, v_i_boxed_1099_, v_stop_boxed_1100_);
lean_dec_ref(v_as_1096_);
lean_dec(v___x_1095_);
lean_dec(v_i_1094_);
v_r_1102_ = lean_box(v_res_1101_);
return v_r_1102_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(lean_object* v_as_1103_, lean_object* v_a_1104_, lean_object* v_x_1105_){
_start:
{
lean_object* v_zero_1106_; uint8_t v_isZero_1107_; 
v_zero_1106_ = lean_unsigned_to_nat(0u);
v_isZero_1107_ = lean_nat_dec_eq(v_x_1105_, v_zero_1106_);
if (v_isZero_1107_ == 1)
{
lean_dec(v_x_1105_);
return v_isZero_1107_;
}
else
{
lean_object* v_one_1108_; lean_object* v_n_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_one_1108_ = lean_unsigned_to_nat(1u);
v_n_1109_ = lean_nat_sub(v_x_1105_, v_one_1108_);
lean_dec(v_x_1105_);
v___x_1110_ = lean_array_fget_borrowed(v_as_1103_, v_n_1109_);
v___x_1111_ = lean_expr_eqv(v_a_1104_, v___x_1110_);
if (v___x_1111_ == 0)
{
v_x_1105_ = v_n_1109_;
goto _start;
}
else
{
lean_dec(v_n_1109_);
return v_isZero_1107_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_as_1113_, lean_object* v_a_1114_, lean_object* v_x_1115_){
_start:
{
uint8_t v_res_1116_; lean_object* v_r_1117_; 
v_res_1116_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1113_, v_a_1114_, v_x_1115_);
lean_dec_ref(v_a_1114_);
lean_dec_ref(v_as_1113_);
v_r_1117_ = lean_box(v_res_1116_);
return v_r_1117_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(lean_object* v_as_1118_, lean_object* v_i_1119_){
_start:
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = lean_array_get_size(v_as_1118_);
v___x_1121_ = lean_nat_dec_lt(v_i_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
uint8_t v___x_1122_; 
lean_dec(v_i_1119_);
v___x_1122_ = 1;
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = lean_array_fget_borrowed(v_as_1118_, v_i_1119_);
lean_inc(v_i_1119_);
v___x_1124_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1118_, v___x_1123_, v_i_1119_);
if (v___x_1124_ == 0)
{
lean_dec(v_i_1119_);
return v___x_1124_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_unsigned_to_nat(1u);
v___x_1126_ = lean_nat_add(v_i_1119_, v___x_1125_);
lean_dec(v_i_1119_);
v_i_1119_ = v___x_1126_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3___boxed(lean_object* v_as_1128_, lean_object* v_i_1129_){
_start:
{
uint8_t v_res_1130_; lean_object* v_r_1131_; 
v_res_1130_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(v_as_1128_, v_i_1129_);
lean_dec_ref(v_as_1128_);
v_r_1131_ = lean_box(v_res_1130_);
return v_r_1131_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(lean_object* v_as_1132_){
_start:
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(v_as_1132_, v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3___boxed(lean_object* v_as_1135_){
_start:
{
uint8_t v_res_1136_; lean_object* v_r_1137_; 
v_res_1136_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_as_1135_);
lean_dec_ref(v_as_1135_);
v_r_1137_ = lean_box(v_res_1136_);
return v_r_1137_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__1(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__0));
v___x_1140_ = l_Lean_stringToMessageData(v___x_1139_);
return v___x_1140_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__2));
v___x_1143_ = l_Lean_stringToMessageData(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__5(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__4));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__7(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1148_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__6));
v___x_1149_ = lean_unsigned_to_nat(59u);
v___x_1150_ = lean_unsigned_to_nat(96u);
v___x_1151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_1152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_1153_ = l_mkPanicMessageWithDecl(v___x_1152_, v___x_1151_, v___x_1150_, v___x_1149_, v___x_1148_);
return v___x_1153_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__9(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__8));
v___x_1156_ = l_Lean_stringToMessageData(v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__11(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__10));
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__13(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__12));
v___x_1162_ = l_Lean_stringToMessageData(v___x_1161_);
return v___x_1162_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__15(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__14));
v___x_1165_ = l_Lean_stringToMessageData(v___x_1164_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__17(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__16));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__19(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__18));
v___x_1171_ = l_Lean_stringToMessageData(v___x_1170_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__21(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__20));
v___x_1174_ = l_Lean_stringToMessageData(v___x_1173_);
return v___x_1174_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__23(void){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__22));
v___x_1177_ = l_Lean_stringToMessageData(v___x_1176_);
return v___x_1177_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__24(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_box(0);
v___x_1179_ = l_unsafeCast___redArg(v___x_1178_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__25(void){
_start:
{
lean_object* v___x_1180_; lean_object* v_dummy_1181_; 
v___x_1180_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__24, &l_Lean_Elab_Structural_getRecArgInfo___closed__24_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__24);
v_dummy_1181_ = l_Lean_Expr_sort___override(v___x_1180_);
return v_dummy_1181_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__27(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__26));
v___x_1184_ = l_Lean_stringToMessageData(v___x_1183_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__29(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1186_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__28));
v___x_1187_ = lean_unsigned_to_nat(2u);
v___x_1188_ = lean_unsigned_to_nat(68u);
v___x_1189_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_1190_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_1191_ = l_mkPanicMessageWithDecl(v___x_1190_, v___x_1189_, v___x_1188_, v___x_1187_, v___x_1186_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__31(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__30));
v___x_1194_ = l_Lean_stringToMessageData(v___x_1193_);
return v___x_1194_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__33(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__32));
v___x_1197_ = l_Lean_stringToMessageData(v___x_1196_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__35(void){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__34));
v___x_1200_ = l_Lean_stringToMessageData(v___x_1199_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__37(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__36));
v___x_1203_ = l_Lean_stringToMessageData(v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo(lean_object* v_fnName_1204_, lean_object* v_fixedParamPerm_1205_, lean_object* v_xs_1206_, lean_object* v_i_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v_lower_1356_; lean_object* v_upper_1357_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; uint8_t v___x_1442_; 
v___x_1341_ = lean_array_get_size(v_fixedParamPerm_1205_);
v___x_1342_ = lean_array_get_size(v_xs_1206_);
v___x_1442_ = lean_nat_dec_eq(v___x_1341_, v___x_1342_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___x_1443_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__29, &l_Lean_Elab_Structural_getRecArgInfo___closed__29_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__29);
v___x_1444_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v___x_1443_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_);
return v___x_1444_;
}
else
{
uint8_t v___x_1445_; 
v___x_1445_ = lean_nat_dec_lt(v_i_1207_, v___x_1342_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___x_1446_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__31, &l_Lean_Elab_Structural_getRecArgInfo___closed__31_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__31);
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = lean_nat_add(v_i_1207_, v___x_1447_);
lean_dec(v_i_1207_);
v___x_1449_ = l_Nat_reprFast(v___x_1448_);
v___x_1450_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
v___x_1451_ = l_Lean_MessageData_ofFormat(v___x_1450_);
v___x_1452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1446_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__33, &l_Lean_Elab_Structural_getRecArgInfo___closed__33_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__33);
v___x_1454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = l_Nat_reprFast(v___x_1342_);
v___x_1456_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
v___x_1457_ = l_Lean_MessageData_ofFormat(v___x_1456_);
v___x_1458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1454_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__35, &l_Lean_Elab_Structural_getRecArgInfo___closed__35_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__35);
v___x_1460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1458_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1460_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_);
return v___x_1461_;
}
else
{
uint8_t v___x_1462_; 
v___x_1462_ = l_Lean_Elab_FixedParamPerm_isFixed(v_fixedParamPerm_1205_, v_i_1207_);
if (v___x_1462_ == 0)
{
v___y_1415_ = v_a_1208_;
v___y_1416_ = v_a_1209_;
v___y_1417_ = v_a_1210_;
v___y_1418_ = v_a_1211_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___x_1463_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__37, &l_Lean_Elab_Structural_getRecArgInfo___closed__37_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__37);
v___x_1464_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1463_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_);
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
v___jp_1213_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__1, &l_Lean_Elab_Structural_getRecArgInfo___closed__1_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__1);
v___x_1219_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1218_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
return v___x_1219_;
}
v___jp_1220_:
{
uint8_t v___x_1232_; 
v___x_1232_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v___y_1231_);
if (v___x_1232_ == 0)
{
lean_object* v_name_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1223_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_name_1233_ = lean_ctor_get(v___y_1225_, 0);
lean_inc(v_name_1233_);
lean_dec_ref(v___y_1225_);
v___x_1234_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1235_ = l_Lean_MessageData_ofName(v_name_1233_);
v___x_1236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__5, &l_Lean_Elab_Structural_getRecArgInfo___closed__5_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__5);
v___x_1238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = l_Lean_indentExpr(v___y_1222_);
v___x_1240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1240_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
return v___x_1241_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_1205_, v_xs_1206_);
v___x_1243_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v___x_1242_, v___y_1231_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
if (lean_obj_tag(v_a_1244_) == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(v___x_1242_, v___y_1226_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
lean_dec_ref(v___x_1242_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1298_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1248_ = v___x_1245_;
v_isShared_1249_ = v_isSharedCheck_1298_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1245_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1298_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
if (lean_obj_tag(v_a_1246_) == 0)
{
lean_object* v_name_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1272_; 
lean_dec_ref(v___y_1222_);
v_name_1250_ = lean_ctor_get(v___y_1225_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___y_1225_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; lean_object* v_unused_1274_; 
v_unused_1273_ = lean_ctor_get(v___y_1225_, 2);
lean_dec(v_unused_1273_);
v_unused_1274_ = lean_ctor_get(v___y_1225_, 1);
lean_dec(v_unused_1274_);
v___x_1252_ = v___y_1225_;
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_name_1250_);
lean_dec(v___y_1225_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1272_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lean_array_mk(v___y_1228_);
v___x_1255_ = l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(v___x_1254_, v_name_1250_);
lean_dec(v_name_1250_);
lean_dec_ref(v___x_1254_);
if (lean_obj_tag(v___x_1255_) == 1)
{
lean_object* v_val_1256_; size_t v_sz_1257_; size_t v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v_val_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_val_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v_sz_1257_ = lean_array_size(v___y_1231_);
v___x_1258_ = ((size_t)0ULL);
v___x_1259_ = l_unsafeCast___redArg(v___y_1231_);
lean_dec_ref(v___y_1231_);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(v_xs_1206_, v_sz_1257_, v___x_1258_, v___x_1259_);
v___x_1261_ = l_unsafeCast___redArg(v___x_1260_);
lean_dec_ref(v___x_1260_);
v___x_1262_ = l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(v___y_1223_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 2, v___y_1226_);
lean_ctor_set(v___x_1252_, 1, v___y_1227_);
lean_ctor_set(v___x_1252_, 0, v___x_1262_);
v___x_1264_ = v___x_1252_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___y_1227_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v___y_1226_);
v___x_1264_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1265_, 0, v_fnName_1204_);
lean_ctor_set(v___x_1265_, 1, v_fixedParamPerm_1205_);
lean_ctor_set(v___x_1265_, 2, v_i_1207_);
lean_ctor_set(v___x_1265_, 3, v___x_1261_);
lean_ctor_set(v___x_1265_, 4, v___x_1264_);
lean_ctor_set(v___x_1265_, 5, v_val_1256_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1265_);
v___x_1267_ = v___x_1248_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v___x_1255_);
lean_del_object(v___x_1252_);
lean_del_object(v___x_1248_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1223_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___x_1270_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__7, &l_Lean_Elab_Structural_getRecArgInfo___closed__7_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__7);
v___x_1271_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v___x_1270_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
return v___x_1271_;
}
}
}
else
{
lean_object* v_val_1275_; lean_object* v_fst_1276_; lean_object* v_snd_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1297_; 
lean_del_object(v___x_1248_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1223_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_val_1275_ = lean_ctor_get(v_a_1246_, 0);
lean_inc(v_val_1275_);
lean_dec_ref_known(v_a_1246_, 1);
v_fst_1276_ = lean_ctor_get(v_val_1275_, 0);
v_snd_1277_ = lean_ctor_get(v_val_1275_, 1);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_val_1275_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1279_ = v_val_1275_;
v_isShared_1280_ = v_isSharedCheck_1297_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_snd_1277_);
lean_inc(v_fst_1276_);
lean_dec(v_val_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1297_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__9, &l_Lean_Elab_Structural_getRecArgInfo___closed__9_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__9);
v___x_1282_ = l_Lean_indentExpr(v___y_1222_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set_tag(v___x_1279_, 7);
lean_ctor_set(v___x_1279_, 1, v___x_1282_);
lean_ctor_set(v___x_1279_, 0, v___x_1281_);
v___x_1284_ = v___x_1279_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1285_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__11, &l_Lean_Elab_Structural_getRecArgInfo___closed__11_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__11);
v___x_1286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = l_Lean_indentExpr(v_fst_1276_);
v___x_1288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__13, &l_Lean_Elab_Structural_getRecArgInfo___closed__13_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__13);
v___x_1290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = l_Lean_indentExpr(v_snd_1277_);
v___x_1292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1290_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__15, &l_Lean_Elab_Structural_getRecArgInfo___closed__15_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__15);
v___x_1294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1292_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1294_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
return v___x_1295_;
}
}
}
}
}
else
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_a_1299_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v___x_1245_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1245_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_a_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
else
{
lean_object* v_val_1307_; lean_object* v_fst_1308_; lean_object* v_snd_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1223_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_val_1307_ = lean_ctor_get(v_a_1244_, 0);
lean_inc(v_val_1307_);
lean_dec_ref_known(v_a_1244_, 1);
v_fst_1308_ = lean_ctor_get(v_val_1307_, 0);
v_snd_1309_ = lean_ctor_get(v_val_1307_, 1);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_val_1307_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1311_ = v_val_1307_;
v_isShared_1312_ = v_isSharedCheck_1332_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_snd_1309_);
lean_inc(v_fst_1308_);
lean_dec(v_val_1307_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1332_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v_name_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1317_; 
v_name_1313_ = lean_ctor_get(v___y_1225_, 0);
lean_inc(v_name_1313_);
lean_dec_ref(v___y_1225_);
v___x_1314_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1315_ = l_Lean_MessageData_ofName(v_name_1313_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set_tag(v___x_1311_, 7);
lean_ctor_set(v___x_1311_, 1, v___x_1315_);
lean_ctor_set(v___x_1311_, 0, v___x_1314_);
v___x_1317_ = v___x_1311_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v___x_1315_);
v___x_1317_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1318_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__17, &l_Lean_Elab_Structural_getRecArgInfo___closed__17_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__17);
v___x_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = l_Lean_indentExpr(v___y_1222_);
v___x_1321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__19, &l_Lean_Elab_Structural_getRecArgInfo___closed__19_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__19);
v___x_1323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = l_Lean_indentExpr(v_fst_1308_);
v___x_1325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__21, &l_Lean_Elab_Structural_getRecArgInfo___closed__21_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__21);
v___x_1327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1325_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = l_Lean_indentExpr(v_snd_1309_);
v___x_1329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1329_, v___y_1224_, v___y_1221_, v___y_1229_, v___y_1230_);
return v___x_1330_;
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_a_1333_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1243_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1243_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
v___jp_1343_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1358_ = l_Array_toSubarray___redArg(v___y_1347_, v_lower_1356_, v_upper_1357_);
v___x_1359_ = l_Subarray_copy___redArg(v___x_1358_);
v___x_1360_ = lean_array_get_size(v___x_1359_);
v___x_1361_ = lean_nat_dec_lt(v___y_1352_, v___x_1360_);
lean_dec(v___y_1352_);
if (v___x_1361_ == 0)
{
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1348_;
v___y_1225_ = v___y_1349_;
v___y_1226_ = v___y_1350_;
v___y_1227_ = v___y_1353_;
v___y_1228_ = v___y_1354_;
v___y_1229_ = v___y_1351_;
v___y_1230_ = v___y_1355_;
v___y_1231_ = v___x_1359_;
goto v___jp_1220_;
}
else
{
if (v___x_1361_ == 0)
{
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1348_;
v___y_1225_ = v___y_1349_;
v___y_1226_ = v___y_1350_;
v___y_1227_ = v___y_1353_;
v___y_1228_ = v___y_1354_;
v___y_1229_ = v___y_1351_;
v___y_1230_ = v___y_1355_;
v___y_1231_ = v___x_1359_;
goto v___jp_1220_;
}
else
{
size_t v___x_1362_; size_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1362_ = ((size_t)0ULL);
v___x_1363_ = lean_usize_of_nat(v___x_1360_);
v___x_1364_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(v_i_1207_, v___x_1342_, v___x_1359_, v___x_1362_, v___x_1363_);
if (v___x_1364_ == 0)
{
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1348_;
v___y_1225_ = v___y_1349_;
v___y_1226_ = v___y_1350_;
v___y_1227_ = v___y_1353_;
v___y_1228_ = v___y_1354_;
v___y_1229_ = v___y_1351_;
v___y_1230_ = v___y_1355_;
v___y_1231_ = v___x_1359_;
goto v___jp_1220_;
}
else
{
lean_object* v_name_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
lean_dec_ref(v___x_1359_);
lean_dec(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1350_);
lean_dec_ref(v___y_1346_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_name_1365_ = lean_ctor_get(v___y_1349_, 0);
lean_inc(v_name_1365_);
lean_dec_ref(v___y_1349_);
v___x_1366_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1367_ = l_Lean_MessageData_ofName(v_name_1365_);
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__23, &l_Lean_Elab_Structural_getRecArgInfo___closed__23_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__23);
v___x_1370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = l_Lean_indentExpr(v___y_1345_);
v___x_1372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1372_, v___y_1348_, v___y_1344_, v___y_1351_, v___y_1355_);
return v___x_1373_;
}
}
}
}
v___jp_1374_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = l_Lean_LocalDecl_type(v___y_1375_);
lean_dec_ref(v___y_1375_);
v___x_1381_ = l_Lean_Meta_whnfD(v___x_1380_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1383_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v___x_1383_ = l_Lean_Expr_getAppFn(v_a_1382_);
if (lean_obj_tag(v___x_1383_) == 4)
{
lean_object* v_declName_1384_; lean_object* v_us_1385_; lean_object* v___x_1386_; lean_object* v_env_1387_; uint8_t v___x_1388_; lean_object* v___x_1389_; 
v_declName_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_declName_1384_);
v_us_1385_ = lean_ctor_get(v___x_1383_, 1);
lean_inc(v_us_1385_);
lean_dec_ref_known(v___x_1383_, 2);
v___x_1386_ = lean_st_ref_get(v___y_1379_);
v_env_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc_ref(v_env_1387_);
lean_dec(v___x_1386_);
v___x_1388_ = 0;
v___x_1389_ = l_Lean_Environment_find_x3f(v_env_1387_, v_declName_1384_, v___x_1388_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_dec(v_us_1385_);
lean_dec(v_a_1382_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___y_1214_ = v___y_1376_;
v___y_1215_ = v___y_1377_;
v___y_1216_ = v___y_1378_;
v___y_1217_ = v___y_1379_;
goto v___jp_1213_;
}
else
{
lean_object* v_val_1390_; 
v_val_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_val_1390_);
lean_dec_ref_known(v___x_1389_, 1);
if (lean_obj_tag(v_val_1390_) == 5)
{
lean_object* v_val_1391_; lean_object* v_toConstantVal_1392_; lean_object* v_numParams_1393_; lean_object* v_all_1394_; lean_object* v_nargs_1395_; lean_object* v_dummy_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
v_val_1391_ = lean_ctor_get(v_val_1390_, 0);
lean_inc_ref(v_val_1391_);
lean_dec_ref_known(v_val_1390_, 1);
v_toConstantVal_1392_ = lean_ctor_get(v_val_1391_, 0);
lean_inc_ref(v_toConstantVal_1392_);
v_numParams_1393_ = lean_ctor_get(v_val_1391_, 1);
v_all_1394_ = lean_ctor_get(v_val_1391_, 3);
lean_inc(v_all_1394_);
v_nargs_1395_ = l_Lean_Expr_getAppNumArgs(v_a_1382_);
v_dummy_1396_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__25, &l_Lean_Elab_Structural_getRecArgInfo___closed__25_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__25);
lean_inc(v_nargs_1395_);
v___x_1397_ = lean_mk_array(v_nargs_1395_, v_dummy_1396_);
v___x_1398_ = lean_unsigned_to_nat(1u);
v___x_1399_ = lean_nat_sub(v_nargs_1395_, v___x_1398_);
lean_dec(v_nargs_1395_);
lean_inc(v_a_1382_);
v___x_1400_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1382_, v___x_1397_, v___x_1399_);
v___x_1401_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1393_);
lean_inc_ref(v___x_1400_);
v___x_1402_ = l_Array_toSubarray___redArg(v___x_1400_, v___x_1401_, v_numParams_1393_);
v___x_1403_ = l_Subarray_copy___redArg(v___x_1402_);
v___x_1404_ = lean_array_get_size(v___x_1400_);
v___x_1405_ = lean_nat_dec_le(v_numParams_1393_, v___x_1401_);
if (v___x_1405_ == 0)
{
lean_inc(v_numParams_1393_);
v___y_1344_ = v___y_1377_;
v___y_1345_ = v_a_1382_;
v___y_1346_ = v_val_1391_;
v___y_1347_ = v___x_1400_;
v___y_1348_ = v___y_1376_;
v___y_1349_ = v_toConstantVal_1392_;
v___y_1350_ = v___x_1403_;
v___y_1351_ = v___y_1378_;
v___y_1352_ = v___x_1401_;
v___y_1353_ = v_us_1385_;
v___y_1354_ = v_all_1394_;
v___y_1355_ = v___y_1379_;
v_lower_1356_ = v_numParams_1393_;
v_upper_1357_ = v___x_1404_;
goto v___jp_1343_;
}
else
{
v___y_1344_ = v___y_1377_;
v___y_1345_ = v_a_1382_;
v___y_1346_ = v_val_1391_;
v___y_1347_ = v___x_1400_;
v___y_1348_ = v___y_1376_;
v___y_1349_ = v_toConstantVal_1392_;
v___y_1350_ = v___x_1403_;
v___y_1351_ = v___y_1378_;
v___y_1352_ = v___x_1401_;
v___y_1353_ = v_us_1385_;
v___y_1354_ = v_all_1394_;
v___y_1355_ = v___y_1379_;
v_lower_1356_ = v___x_1401_;
v_upper_1357_ = v___x_1404_;
goto v___jp_1343_;
}
}
else
{
lean_dec(v_val_1390_);
lean_dec(v_us_1385_);
lean_dec(v_a_1382_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___y_1214_ = v___y_1376_;
v___y_1215_ = v___y_1377_;
v___y_1216_ = v___y_1378_;
v___y_1217_ = v___y_1379_;
goto v___jp_1213_;
}
}
}
else
{
lean_dec_ref(v___x_1383_);
lean_dec(v_a_1382_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___y_1214_ = v___y_1376_;
v___y_1215_ = v___y_1377_;
v___y_1216_ = v___y_1378_;
v___y_1217_ = v___y_1379_;
goto v___jp_1213_;
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_a_1406_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1381_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1381_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
v___jp_1414_:
{
lean_object* v_x_1419_; lean_object* v___x_1420_; 
v_x_1419_ = lean_array_fget_borrowed(v_xs_1206_, v_i_1207_);
v___x_1420_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_x_1419_, v___y_1415_, v___y_1417_, v___y_1418_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; uint8_t v___x_1422_; uint8_t v___x_1423_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v___x_1422_ = 0;
v___x_1423_ = l_Lean_LocalDecl_isLet(v_a_1421_, v___x_1422_);
if (v___x_1423_ == 0)
{
v___y_1375_ = v_a_1421_;
v___y_1376_ = v___y_1415_;
v___y_1377_ = v___y_1416_;
v___y_1378_ = v___y_1417_;
v___y_1379_ = v___y_1418_;
goto v___jp_1374_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec(v_a_1421_);
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v___x_1424_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__27, &l_Lean_Elab_Structural_getRecArgInfo___closed__27_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__27);
v___x_1425_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1424_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v_i_1207_);
lean_dec_ref(v_fixedParamPerm_1205_);
lean_dec(v_fnName_1204_);
v_a_1434_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1420_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1420_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo___boxed(lean_object* v_fnName_1473_, lean_object* v_fixedParamPerm_1474_, lean_object* v_xs_1475_, lean_object* v_i_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1473_, v_fixedParamPerm_1474_, v_xs_1475_, v_i_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec(v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec_ref(v_a_1477_);
lean_dec_ref(v_xs_1475_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(lean_object* v_00_u03b1_1483_, lean_object* v_msg_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v_msg_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___boxed(lean_object* v_00_u03b1_1491_, lean_object* v_msg_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(v_00_u03b1_1491_, v_msg_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1498_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(lean_object* v_as_1499_, lean_object* v_a_1500_, lean_object* v_x_1501_, lean_object* v_x_1502_){
_start:
{
uint8_t v___x_1503_; 
v___x_1503_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1499_, v_a_1500_, v_x_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___boxed(lean_object* v_as_1504_, lean_object* v_a_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_){
_start:
{
uint8_t v_res_1508_; lean_object* v_r_1509_; 
v_res_1508_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(v_as_1504_, v_a_1505_, v_x_1506_, v_x_1507_);
lean_dec_ref(v_a_1505_);
lean_dec_ref(v_as_1504_);
v_r_1509_ = lean_box(v_res_1508_);
return v_r_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__0(lean_object* v___x_1510_, lean_object* v_e_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = l_Lean_indentD(v_e_1511_);
v___x_1513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1510_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1(lean_object* v_val_1514_, lean_object* v_fnName_1515_, lean_object* v_fixedParamPerm_1516_, lean_object* v_args_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_Elab_TerminationMeasure_structuralArg(v_val_1514_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1515_, v_fixedParamPerm_1516_, v_args_1517_, v_a_1524_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
return v___x_1525_;
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
lean_dec_ref(v_fixedParamPerm_1516_);
lean_dec(v_fnName_1515_);
v_a_1526_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1523_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1523_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed(lean_object* v_val_1534_, lean_object* v_fnName_1535_, lean_object* v_fixedParamPerm_1536_, lean_object* v_args_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lean_Elab_Structural_getRecArgInfos___lam__1(v_val_1534_, v_fnName_1535_, v_fixedParamPerm_1536_, v_args_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec_ref(v_args_1537_);
return v_res_1543_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1545_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0));
v___x_1546_ = l_Lean_stringToMessageData(v___x_1545_);
return v___x_1546_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2));
v___x_1549_ = l_Lean_stringToMessageData(v___x_1548_);
return v___x_1549_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5));
v___x_1554_ = l_Lean_MessageData_ofFormat(v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(lean_object* v_upperBound_1555_, lean_object* v_fnName_1556_, lean_object* v_fixedParamPerm_1557_, lean_object* v_args_1558_, lean_object* v_a_1559_, lean_object* v_b_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_fst_1567_; lean_object* v_snd_1568_; uint8_t v___x_1573_; 
v___x_1573_ = lean_nat_dec_lt(v_a_1559_, v_upperBound_1555_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; 
lean_dec(v_a_1559_);
lean_dec_ref(v_fixedParamPerm_1557_);
lean_dec(v_fnName_1556_);
v___x_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1574_, 0, v_b_1560_);
return v___x_1574_;
}
else
{
lean_object* v_fst_1575_; lean_object* v_snd_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1621_; 
v_fst_1575_ = lean_ctor_get(v_b_1560_, 0);
v_snd_1576_ = lean_ctor_get(v_b_1560_, 1);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_b_1560_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1578_ = v_b_1560_;
v_isShared_1579_ = v_isSharedCheck_1621_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_snd_1576_);
lean_inc(v_fst_1575_);
lean_dec(v_b_1560_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1621_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; 
lean_inc(v_a_1559_);
lean_inc_ref(v_fixedParamPerm_1557_);
lean_inc(v_fnName_1556_);
v___x_1580_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1556_, v_fixedParamPerm_1557_, v_args_1558_, v_a_1559_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1582_; 
lean_del_object(v___x_1578_);
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
v___x_1582_ = lean_array_push(v_fst_1575_, v_a_1581_);
v_fst_1567_ = v___x_1582_;
v_snd_1568_ = v_snd_1576_;
goto v___jp_1566_;
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1620_; 
v_a_1583_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1585_ = v___x_1580_;
v_isShared_1586_ = v_isSharedCheck_1620_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1580_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1620_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
uint8_t v___y_1588_; uint8_t v___x_1618_; 
v___x_1618_ = l_Lean_Exception_isInterrupt(v_a_1583_);
if (v___x_1618_ == 0)
{
uint8_t v___x_1619_; 
lean_inc(v_a_1583_);
v___x_1619_ = l_Lean_Exception_isRuntime(v_a_1583_);
v___y_1588_ = v___x_1619_;
goto v___jp_1587_;
}
else
{
v___y_1588_ = v___x_1618_;
goto v___jp_1587_;
}
v___jp_1587_:
{
if (v___y_1588_ == 0)
{
lean_object* v___x_1589_; 
lean_del_object(v___x_1585_);
v___x_1589_ = l_Lean_Elab_Structural_prettyParam(v_args_1558_, v_a_1559_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
v___x_1591_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1);
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 7);
lean_ctor_set(v___x_1578_, 1, v_a_1590_);
lean_ctor_set(v___x_1578_, 0, v___x_1591_);
v___x_1593_ = v___x_1578_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_a_1590_);
v___x_1593_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1594_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1);
v___x_1595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1593_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
lean_inc(v_fnName_1556_);
v___x_1596_ = l_Lean_MessageData_ofName(v_fnName_1556_);
v___x_1597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3);
v___x_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1597_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_Exception_toMessageData(v_a_1583_);
v___x_1601_ = l_Lean_indentD(v___x_1600_);
v___x_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1599_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_snd_1576_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6);
v___x_1605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v_fst_1567_ = v_fst_1575_;
v_snd_1568_ = v___x_1605_;
goto v___jp_1566_;
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_a_1583_);
lean_del_object(v___x_1578_);
lean_dec(v_snd_1576_);
lean_dec(v_fst_1575_);
lean_dec(v_a_1559_);
lean_dec_ref(v_fixedParamPerm_1557_);
lean_dec(v_fnName_1556_);
v_a_1607_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1589_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1589_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
else
{
lean_object* v___x_1616_; 
lean_del_object(v___x_1578_);
lean_dec(v_snd_1576_);
lean_dec(v_fst_1575_);
lean_dec(v_a_1559_);
lean_dec_ref(v_fixedParamPerm_1557_);
lean_dec(v_fnName_1556_);
if (v_isShared_1586_ == 0)
{
v___x_1616_ = v___x_1585_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1583_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
}
}
v___jp_1566_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_fst_1567_);
lean_ctor_set(v___x_1569_, 1, v_snd_1568_);
v___x_1570_ = lean_unsigned_to_nat(1u);
v___x_1571_ = lean_nat_add(v_a_1559_, v___x_1570_);
lean_dec(v_a_1559_);
v_a_1559_ = v___x_1571_;
v_b_1560_ = v___x_1569_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___boxed(lean_object* v_upperBound_1622_, lean_object* v_fnName_1623_, lean_object* v_fixedParamPerm_1624_, lean_object* v_args_1625_, lean_object* v_a_1626_, lean_object* v_b_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v_upperBound_1622_, v_fnName_1623_, v_fixedParamPerm_1624_, v_args_1625_, v_a_1626_, v_b_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec_ref(v_args_1625_);
lean_dec(v_upperBound_1622_);
return v_res_1633_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1634_; double v___x_1635_; 
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = lean_float_of_nat(v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(lean_object* v_cls_1637_, lean_object* v_msg_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v_ref_1644_; lean_object* v___x_1645_; lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1690_; 
v_ref_1644_ = lean_ctor_get(v___y_1641_, 2);
v___x_1645_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msg_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1648_ = v___x_1645_;
v_isShared_1649_ = v_isSharedCheck_1690_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1645_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1690_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1650_; lean_object* v_traceState_1651_; lean_object* v_env_1652_; lean_object* v_nextMacroScope_1653_; lean_object* v_ngen_1654_; lean_object* v_auxDeclNGen_1655_; lean_object* v_cache_1656_; lean_object* v_messages_1657_; lean_object* v_infoState_1658_; lean_object* v_snapshotTasks_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1689_; 
v___x_1650_ = lean_st_ref_take(v___y_1642_);
v_traceState_1651_ = lean_ctor_get(v___x_1650_, 4);
v_env_1652_ = lean_ctor_get(v___x_1650_, 0);
v_nextMacroScope_1653_ = lean_ctor_get(v___x_1650_, 1);
v_ngen_1654_ = lean_ctor_get(v___x_1650_, 2);
v_auxDeclNGen_1655_ = lean_ctor_get(v___x_1650_, 3);
v_cache_1656_ = lean_ctor_get(v___x_1650_, 5);
v_messages_1657_ = lean_ctor_get(v___x_1650_, 6);
v_infoState_1658_ = lean_ctor_get(v___x_1650_, 7);
v_snapshotTasks_1659_ = lean_ctor_get(v___x_1650_, 8);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1661_ = v___x_1650_;
v_isShared_1662_ = v_isSharedCheck_1689_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_snapshotTasks_1659_);
lean_inc(v_infoState_1658_);
lean_inc(v_messages_1657_);
lean_inc(v_cache_1656_);
lean_inc(v_traceState_1651_);
lean_inc(v_auxDeclNGen_1655_);
lean_inc(v_ngen_1654_);
lean_inc(v_nextMacroScope_1653_);
lean_inc(v_env_1652_);
lean_dec(v___x_1650_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1689_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
uint64_t v_tid_1663_; lean_object* v_traces_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1688_; 
v_tid_1663_ = lean_ctor_get_uint64(v_traceState_1651_, sizeof(void*)*1);
v_traces_1664_ = lean_ctor_get(v_traceState_1651_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_traceState_1651_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1666_ = v_traceState_1651_;
v_isShared_1667_ = v_isSharedCheck_1688_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_traces_1664_);
lean_dec(v_traceState_1651_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1688_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; double v___x_1670_; uint8_t v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1668_ = lean_box(0);
v___x_1669_ = lean_box(0);
v___x_1670_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0);
v___x_1671_ = 0;
v___x_1672_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1));
v___x_1673_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1673_, 0, v_cls_1637_);
lean_ctor_set(v___x_1673_, 1, v___x_1669_);
lean_ctor_set(v___x_1673_, 2, v___x_1672_);
lean_ctor_set_float(v___x_1673_, sizeof(void*)*3, v___x_1670_);
lean_ctor_set_float(v___x_1673_, sizeof(void*)*3 + 8, v___x_1670_);
lean_ctor_set_uint8(v___x_1673_, sizeof(void*)*3 + 16, v___x_1671_);
v___x_1674_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__0));
v___x_1675_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1673_);
lean_ctor_set(v___x_1675_, 1, v_a_1646_);
lean_ctor_set(v___x_1675_, 2, v___x_1674_);
lean_inc(v_ref_1644_);
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v_ref_1644_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = l_Lean_PersistentArray_push___redArg(v_traces_1664_, v___x_1676_);
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v___x_1677_);
v___x_1679_ = v___x_1666_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1677_);
lean_ctor_set_uint64(v_reuseFailAlloc_1687_, sizeof(void*)*1, v_tid_1663_);
v___x_1679_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
lean_object* v___x_1681_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 4, v___x_1679_);
v___x_1681_ = v___x_1661_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_env_1652_);
lean_ctor_set(v_reuseFailAlloc_1686_, 1, v_nextMacroScope_1653_);
lean_ctor_set(v_reuseFailAlloc_1686_, 2, v_ngen_1654_);
lean_ctor_set(v_reuseFailAlloc_1686_, 3, v_auxDeclNGen_1655_);
lean_ctor_set(v_reuseFailAlloc_1686_, 4, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1686_, 5, v_cache_1656_);
lean_ctor_set(v_reuseFailAlloc_1686_, 6, v_messages_1657_);
lean_ctor_set(v_reuseFailAlloc_1686_, 7, v_infoState_1658_);
lean_ctor_set(v_reuseFailAlloc_1686_, 8, v_snapshotTasks_1659_);
v___x_1681_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = lean_st_ref_put(v___y_1642_, v___x_1681_);
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 0, v___x_1668_);
v___x_1684_ = v___x_1648_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1668_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___boxed(lean_object* v_cls_1691_, lean_object* v_msg_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v_cls_1691_, v_msg_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1698_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0));
v___x_1701_ = l_Lean_stringToMessageData(v___x_1700_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1702_; lean_object* v___f_1703_; 
v___x_1702_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1);
v___f_1703_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__0), 2, 1);
lean_closure_set(v___f_1703_, 0, v___x_1702_);
return v___f_1703_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1704_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1));
v___x_1705_ = l_Lean_stringToMessageData(v___x_1704_);
return v___x_1705_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5(void){
_start:
{
lean_object* v_report_1708_; lean_object* v_recArgInfos_1709_; lean_object* v___x_1710_; 
v_report_1708_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v_recArgInfos_1709_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4));
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v_recArgInfos_1709_);
lean_ctor_set(v___x_1710_, 1, v_report_1708_);
return v___x_1710_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_1722_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11));
v___x_1723_ = l_Lean_Name_append(v___x_1722_, v___x_1721_);
return v___x_1723_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13));
v___x_1726_ = l_Lean_stringToMessageData(v___x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2(lean_object* v_termMeasure_x3f_1727_, lean_object* v_fixedParamPerm_1728_, lean_object* v_xs_1729_, lean_object* v_fnName_1730_, lean_object* v_ys_1731_, lean_object* v_x_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
if (lean_obj_tag(v_termMeasure_x3f_1727_) == 1)
{
lean_object* v_val_1738_; lean_object* v_ref_1739_; lean_object* v_toCold_1740_; lean_object* v_currRecDepth_1741_; lean_object* v_ref_1742_; uint8_t v_diag_1743_; uint8_t v_suppressElabErrors_1744_; lean_object* v___f_1745_; lean_object* v_args_1746_; lean_object* v___f_1747_; lean_object* v_ref_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_val_1738_ = lean_ctor_get(v_termMeasure_x3f_1727_, 0);
lean_inc(v_val_1738_);
lean_dec_ref_known(v_termMeasure_x3f_1727_, 1);
v_ref_1739_ = lean_ctor_get(v_val_1738_, 0);
lean_inc(v_ref_1739_);
v_toCold_1740_ = lean_ctor_get(v___y_1735_, 0);
v_currRecDepth_1741_ = lean_ctor_get(v___y_1735_, 1);
v_ref_1742_ = lean_ctor_get(v___y_1735_, 2);
v_diag_1743_ = lean_ctor_get_uint8(v___y_1735_, sizeof(void*)*3);
v_suppressElabErrors_1744_ = lean_ctor_get_uint8(v___y_1735_, sizeof(void*)*3 + 1);
v___f_1745_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2);
lean_inc_ref(v_fixedParamPerm_1728_);
v_args_1746_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_1728_, v_xs_1729_, v_ys_1731_);
v___f_1747_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1747_, 0, v_val_1738_);
lean_closure_set(v___f_1747_, 1, v_fnName_1730_);
lean_closure_set(v___f_1747_, 2, v_fixedParamPerm_1728_);
lean_closure_set(v___f_1747_, 3, v_args_1746_);
v_ref_1748_ = l_Lean_replaceRef(v_ref_1739_, v_ref_1742_);
lean_dec(v_ref_1739_);
lean_inc(v_currRecDepth_1741_);
lean_inc_ref(v_toCold_1740_);
v___x_1749_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1749_, 0, v_toCold_1740_);
lean_ctor_set(v___x_1749_, 1, v_currRecDepth_1741_);
lean_ctor_set(v___x_1749_, 2, v_ref_1748_);
lean_ctor_set_uint8(v___x_1749_, sizeof(void*)*3, v_diag_1743_);
lean_ctor_set_uint8(v___x_1749_, sizeof(void*)*3 + 1, v_suppressElabErrors_1744_);
v___x_1750_ = l_Lean_Meta_mapErrorImp___redArg(v___f_1747_, v___f_1745_, v___y_1733_, v___y_1734_, v___x_1749_, v___y_1736_);
lean_dec_ref_known(v___x_1749_, 3);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1763_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1763_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1763_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1761_; 
v___x_1755_ = lean_unsigned_to_nat(1u);
v___x_1756_ = lean_mk_empty_array_with_capacity(v___x_1755_);
v___x_1757_ = lean_array_push(v___x_1756_, v_a_1751_);
v___x_1758_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v___x_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1757_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1759_);
v___x_1761_ = v___x_1753_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1759_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1750_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1750_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
else
{
lean_object* v_args_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
lean_dec(v_termMeasure_x3f_1727_);
lean_inc_ref(v_fixedParamPerm_1728_);
v_args_1772_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_1728_, v_xs_1729_, v_ys_1731_);
v___x_1773_ = lean_array_get_size(v_args_1772_);
v___x_1774_ = lean_unsigned_to_nat(0u);
v___x_1775_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5);
v___x_1776_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v___x_1773_, v_fnName_1730_, v_fixedParamPerm_1728_, v_args_1772_, v___x_1774_, v___x_1775_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec_ref(v_args_1772_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1812_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1812_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1812_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v_fst_1781_; lean_object* v_snd_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1811_; 
v_fst_1781_ = lean_ctor_get(v_a_1777_, 0);
v_snd_1782_ = lean_ctor_get(v_a_1777_, 1);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_a_1777_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1784_ = v_a_1777_;
v_isShared_1785_ = v_isSharedCheck_1811_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_snd_1782_);
lean_inc(v_fst_1781_);
lean_dec(v_a_1777_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1811_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_toCold_1793_; lean_object* v_options_1794_; uint8_t v_hasTrace_1795_; 
v_toCold_1793_ = lean_ctor_get(v___y_1735_, 0);
v_options_1794_ = lean_ctor_get(v_toCold_1793_, 2);
v_hasTrace_1795_ = lean_ctor_get_uint8(v_options_1794_, sizeof(void*)*1);
if (v_hasTrace_1795_ == 0)
{
goto v___jp_1786_;
}
else
{
lean_object* v_inheritedTraceOptions_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v_inheritedTraceOptions_1796_ = lean_ctor_get(v_toCold_1793_, 11);
v___x_1797_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_1798_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_1799_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1796_, v_options_1794_, v___x_1798_);
if (v___x_1799_ == 0)
{
goto v___jp_1786_;
}
else
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1800_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14);
lean_inc(v_snd_1782_);
v___x_1801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
lean_ctor_set(v___x_1801_, 1, v_snd_1782_);
v___x_1802_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_1797_, v___x_1801_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_dec_ref_known(v___x_1802_, 1);
goto v___jp_1786_;
}
else
{
lean_object* v_a_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
lean_del_object(v___x_1784_);
lean_dec(v_snd_1782_);
lean_dec(v_fst_1781_);
lean_del_object(v___x_1779_);
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v___x_1802_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_a_1803_);
lean_dec(v___x_1802_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
v___jp_1786_:
{
lean_object* v___x_1788_; 
if (v_isShared_1785_ == 0)
{
v___x_1788_ = v___x_1784_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_fst_1781_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v_snd_1782_);
v___x_1788_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1790_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1788_);
v___x_1790_ = v___x_1779_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
}
else
{
return v___x_1776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed(lean_object* v_termMeasure_x3f_1813_, lean_object* v_fixedParamPerm_1814_, lean_object* v_xs_1815_, lean_object* v_fnName_1816_, lean_object* v_ys_1817_, lean_object* v_x_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Lean_Elab_Structural_getRecArgInfos___lam__2(v_termMeasure_x3f_1813_, v_fixedParamPerm_1814_, v_xs_1815_, v_fnName_1816_, v_ys_1817_, v_x_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec_ref(v_x_1818_);
lean_dec_ref(v_xs_1815_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos(lean_object* v_fnName_1825_, lean_object* v_fixedParamPerm_1826_, lean_object* v_xs_1827_, lean_object* v_value_1828_, lean_object* v_termMeasure_x3f_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v___f_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; 
v___f_1835_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1835_, 0, v_termMeasure_x3f_1829_);
lean_closure_set(v___f_1835_, 1, v_fixedParamPerm_1826_);
lean_closure_set(v___f_1835_, 2, v_xs_1827_);
lean_closure_set(v___f_1835_, 3, v_fnName_1825_);
v___x_1836_ = 0;
v___x_1837_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_1828_, v___f_1835_, v___x_1836_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___boxed(lean_object* v_fnName_1838_, lean_object* v_fixedParamPerm_1839_, lean_object* v_xs_1840_, lean_object* v_value_1841_, lean_object* v_termMeasure_x3f_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_Elab_Structural_getRecArgInfos(v_fnName_1838_, v_fixedParamPerm_1839_, v_xs_1840_, v_value_1841_, v_termMeasure_x3f_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
lean_dec(v_a_1846_);
lean_dec_ref(v_a_1845_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(lean_object* v_upperBound_1849_, lean_object* v_fnName_1850_, lean_object* v_fixedParamPerm_1851_, lean_object* v_args_1852_, lean_object* v_inst_1853_, lean_object* v_R_1854_, lean_object* v_a_1855_, lean_object* v_b_1856_, lean_object* v_c_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v___x_1863_; 
v___x_1863_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v_upperBound_1849_, v_fnName_1850_, v_fixedParamPerm_1851_, v_args_1852_, v_a_1855_, v_b_1856_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___boxed(lean_object* v_upperBound_1864_, lean_object* v_fnName_1865_, lean_object* v_fixedParamPerm_1866_, lean_object* v_args_1867_, lean_object* v_inst_1868_, lean_object* v_R_1869_, lean_object* v_a_1870_, lean_object* v_b_1871_, lean_object* v_c_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(v_upperBound_1864_, v_fnName_1865_, v_fixedParamPerm_1866_, v_args_1867_, v_inst_1868_, v_R_1869_, v_a_1870_, v_b_1871_, v_c_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec_ref(v_args_1867_);
lean_dec(v_upperBound_1864_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(lean_object* v_x_1879_, lean_object* v_x_1880_){
_start:
{
if (lean_obj_tag(v_x_1880_) == 0)
{
return v_x_1879_;
}
else
{
lean_object* v_key_1881_; lean_object* v_value_1882_; lean_object* v_tail_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1906_; 
v_key_1881_ = lean_ctor_get(v_x_1880_, 0);
v_value_1882_ = lean_ctor_get(v_x_1880_, 1);
v_tail_1883_ = lean_ctor_get(v_x_1880_, 2);
v_isSharedCheck_1906_ = !lean_is_exclusive(v_x_1880_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1885_ = v_x_1880_;
v_isShared_1886_ = v_isSharedCheck_1906_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_tail_1883_);
lean_inc(v_value_1882_);
lean_inc(v_key_1881_);
lean_dec(v_x_1880_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1906_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; uint64_t v___x_1888_; uint64_t v___x_1889_; uint64_t v___x_1890_; uint64_t v_fold_1891_; uint64_t v___x_1892_; uint64_t v___x_1893_; uint64_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; size_t v___x_1898_; size_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1887_ = lean_array_get_size(v_x_1879_);
v___x_1888_ = lean_uint64_of_nat(v_key_1881_);
v___x_1889_ = 32ULL;
v___x_1890_ = lean_uint64_shift_right(v___x_1888_, v___x_1889_);
v_fold_1891_ = lean_uint64_xor(v___x_1888_, v___x_1890_);
v___x_1892_ = 16ULL;
v___x_1893_ = lean_uint64_shift_right(v_fold_1891_, v___x_1892_);
v___x_1894_ = lean_uint64_xor(v_fold_1891_, v___x_1893_);
v___x_1895_ = lean_uint64_to_usize(v___x_1894_);
v___x_1896_ = lean_usize_of_nat(v___x_1887_);
v___x_1897_ = ((size_t)1ULL);
v___x_1898_ = lean_usize_sub(v___x_1896_, v___x_1897_);
v___x_1899_ = lean_usize_land(v___x_1895_, v___x_1898_);
v___x_1900_ = lean_array_uget_borrowed(v_x_1879_, v___x_1899_);
lean_inc(v___x_1900_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 2, v___x_1900_);
v___x_1902_ = v___x_1885_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_key_1881_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_value_1882_);
lean_ctor_set(v_reuseFailAlloc_1905_, 2, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_array_uset(v_x_1879_, v___x_1899_, v___x_1902_);
v_x_1879_ = v___x_1903_;
v_x_1880_ = v_tail_1883_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1907_, lean_object* v_source_1908_, lean_object* v_target_1909_){
_start:
{
lean_object* v___x_1910_; uint8_t v___x_1911_; 
v___x_1910_ = lean_array_get_size(v_source_1908_);
v___x_1911_ = lean_nat_dec_lt(v_i_1907_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_dec_ref(v_source_1908_);
lean_dec(v_i_1907_);
return v_target_1909_;
}
else
{
lean_object* v_es_1912_; lean_object* v___x_1913_; lean_object* v_source_1914_; lean_object* v_target_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_es_1912_ = lean_array_fget(v_source_1908_, v_i_1907_);
v___x_1913_ = lean_box(0);
v_source_1914_ = lean_array_fset(v_source_1908_, v_i_1907_, v___x_1913_);
v_target_1915_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(v_target_1909_, v_es_1912_);
v___x_1916_ = lean_unsigned_to_nat(1u);
v___x_1917_ = lean_nat_add(v_i_1907_, v___x_1916_);
lean_dec(v_i_1907_);
v_i_1907_ = v___x_1917_;
v_source_1908_ = v_source_1914_;
v_target_1909_ = v_target_1915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(lean_object* v_data_1919_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_nbuckets_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1920_ = lean_array_get_size(v_data_1919_);
v___x_1921_ = lean_unsigned_to_nat(2u);
v_nbuckets_1922_ = lean_nat_mul(v___x_1920_, v___x_1921_);
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = lean_box(0);
v___x_1925_ = lean_mk_array(v_nbuckets_1922_, v___x_1924_);
v___x_1926_ = lean_array_propagate_mark(v_data_1919_, v___x_1925_);
v___x_1927_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(v___x_1923_, v_data_1919_, v___x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(lean_object* v_a_1928_, lean_object* v_x_1929_){
_start:
{
if (lean_obj_tag(v_x_1929_) == 0)
{
uint8_t v___x_1930_; 
v___x_1930_ = 0;
return v___x_1930_;
}
else
{
lean_object* v_key_1931_; lean_object* v_tail_1932_; uint8_t v___x_1933_; 
v_key_1931_ = lean_ctor_get(v_x_1929_, 0);
v_tail_1932_ = lean_ctor_get(v_x_1929_, 2);
v___x_1933_ = lean_nat_dec_eq(v_key_1931_, v_a_1928_);
if (v___x_1933_ == 0)
{
v_x_1929_ = v_tail_1932_;
goto _start;
}
else
{
return v___x_1933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg___boxed(lean_object* v_a_1935_, lean_object* v_x_1936_){
_start:
{
uint8_t v_res_1937_; lean_object* v_r_1938_; 
v_res_1937_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_1935_, v_x_1936_);
lean_dec(v_x_1936_);
lean_dec(v_a_1935_);
v_r_1938_ = lean_box(v_res_1937_);
return v_r_1938_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object* v_m_1939_, lean_object* v_a_1940_, lean_object* v_b_1941_){
_start:
{
lean_object* v_size_1942_; lean_object* v_buckets_1943_; lean_object* v___x_1944_; uint64_t v___x_1945_; uint64_t v___x_1946_; uint64_t v___x_1947_; uint64_t v_fold_1948_; uint64_t v___x_1949_; uint64_t v___x_1950_; uint64_t v___x_1951_; size_t v___x_1952_; size_t v___x_1953_; size_t v___x_1954_; size_t v___x_1955_; size_t v___x_1956_; lean_object* v_bkt_1957_; uint8_t v___x_1958_; 
v_size_1942_ = lean_ctor_get(v_m_1939_, 0);
v_buckets_1943_ = lean_ctor_get(v_m_1939_, 1);
v___x_1944_ = lean_array_get_size(v_buckets_1943_);
v___x_1945_ = lean_uint64_of_nat(v_a_1940_);
v___x_1946_ = 32ULL;
v___x_1947_ = lean_uint64_shift_right(v___x_1945_, v___x_1946_);
v_fold_1948_ = lean_uint64_xor(v___x_1945_, v___x_1947_);
v___x_1949_ = 16ULL;
v___x_1950_ = lean_uint64_shift_right(v_fold_1948_, v___x_1949_);
v___x_1951_ = lean_uint64_xor(v_fold_1948_, v___x_1950_);
v___x_1952_ = lean_uint64_to_usize(v___x_1951_);
v___x_1953_ = lean_usize_of_nat(v___x_1944_);
v___x_1954_ = ((size_t)1ULL);
v___x_1955_ = lean_usize_sub(v___x_1953_, v___x_1954_);
v___x_1956_ = lean_usize_land(v___x_1952_, v___x_1955_);
v_bkt_1957_ = lean_array_uget_borrowed(v_buckets_1943_, v___x_1956_);
v___x_1958_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_1940_, v_bkt_1957_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1979_; 
lean_inc_ref(v_buckets_1943_);
lean_inc(v_size_1942_);
v_isSharedCheck_1979_ = !lean_is_exclusive(v_m_1939_);
if (v_isSharedCheck_1979_ == 0)
{
lean_object* v_unused_1980_; lean_object* v_unused_1981_; 
v_unused_1980_ = lean_ctor_get(v_m_1939_, 1);
lean_dec(v_unused_1980_);
v_unused_1981_ = lean_ctor_get(v_m_1939_, 0);
lean_dec(v_unused_1981_);
v___x_1960_ = v_m_1939_;
v_isShared_1961_ = v_isSharedCheck_1979_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v_m_1939_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1979_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v_size_x27_1963_; lean_object* v___x_1964_; lean_object* v_buckets_x27_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1962_ = lean_unsigned_to_nat(1u);
v_size_x27_1963_ = lean_nat_add(v_size_1942_, v___x_1962_);
lean_dec(v_size_1942_);
lean_inc(v_bkt_1957_);
v___x_1964_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1964_, 0, v_a_1940_);
lean_ctor_set(v___x_1964_, 1, v_b_1941_);
lean_ctor_set(v___x_1964_, 2, v_bkt_1957_);
v_buckets_x27_1965_ = lean_array_uset(v_buckets_1943_, v___x_1956_, v___x_1964_);
v___x_1966_ = lean_unsigned_to_nat(4u);
v___x_1967_ = lean_nat_mul(v_size_x27_1963_, v___x_1966_);
v___x_1968_ = lean_unsigned_to_nat(3u);
v___x_1969_ = lean_nat_div(v___x_1967_, v___x_1968_);
lean_dec(v___x_1967_);
v___x_1970_ = lean_array_get_size(v_buckets_x27_1965_);
v___x_1971_ = lean_nat_dec_le(v___x_1969_, v___x_1970_);
lean_dec(v___x_1969_);
if (v___x_1971_ == 0)
{
lean_object* v_val_1972_; lean_object* v___x_1974_; 
v_val_1972_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(v_buckets_x27_1965_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 1, v_val_1972_);
lean_ctor_set(v___x_1960_, 0, v_size_x27_1963_);
v___x_1974_ = v___x_1960_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_size_x27_1963_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_val_1972_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
else
{
lean_object* v___x_1977_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 1, v_buckets_x27_1965_);
lean_ctor_set(v___x_1960_, 0, v_size_x27_1963_);
v___x_1977_ = v___x_1960_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_size_x27_1963_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_buckets_x27_1965_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
else
{
lean_dec(v_b_1941_);
lean_dec(v_a_1940_);
return v_m_1939_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(lean_object* v_as_1982_, size_t v_sz_1983_, size_t v_i_1984_, lean_object* v_b_1985_){
_start:
{
uint8_t v___x_1986_; 
v___x_1986_ = lean_usize_dec_lt(v_i_1984_, v_sz_1983_);
if (v___x_1986_ == 0)
{
return v_b_1985_;
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; size_t v___x_1990_; size_t v___x_1991_; 
v_a_1987_ = lean_array_uget_borrowed(v_as_1982_, v_i_1984_);
v___x_1988_ = lean_box(0);
lean_inc(v_a_1987_);
v___x_1989_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_b_1985_, v_a_1987_, v___x_1988_);
v___x_1990_ = ((size_t)1ULL);
v___x_1991_ = lean_usize_add(v_i_1984_, v___x_1990_);
v_i_1984_ = v___x_1991_;
v_b_1985_ = v___x_1989_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1___boxed(lean_object* v_as_1993_, lean_object* v_sz_1994_, lean_object* v_i_1995_, lean_object* v_b_1996_){
_start:
{
size_t v_sz_boxed_1997_; size_t v_i_boxed_1998_; lean_object* v_res_1999_; 
v_sz_boxed_1997_ = lean_unbox_usize(v_sz_1994_);
lean_dec(v_sz_1994_);
v_i_boxed_1998_ = lean_unbox_usize(v_i_1995_);
lean_dec(v_i_1995_);
v_res_1999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(v_as_1993_, v_sz_boxed_1997_, v_i_boxed_1998_, v_b_1996_);
lean_dec_ref(v_as_1993_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(lean_object* v_as_2000_, size_t v_sz_2001_, size_t v_i_2002_, lean_object* v_b_2003_){
_start:
{
uint8_t v___x_2004_; 
v___x_2004_ = lean_usize_dec_lt(v_i_2002_, v_sz_2001_);
if (v___x_2004_ == 0)
{
return v_b_2003_;
}
else
{
lean_object* v_a_2005_; lean_object* v_indicesPos_2006_; size_t v_sz_2007_; size_t v___x_2008_; lean_object* v___x_2009_; size_t v___x_2010_; size_t v___x_2011_; 
v_a_2005_ = lean_array_uget_borrowed(v_as_2000_, v_i_2002_);
v_indicesPos_2006_ = lean_ctor_get(v_a_2005_, 3);
v_sz_2007_ = lean_array_size(v_indicesPos_2006_);
v___x_2008_ = ((size_t)0ULL);
v___x_2009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(v_indicesPos_2006_, v_sz_2007_, v___x_2008_, v_b_2003_);
v___x_2010_ = ((size_t)1ULL);
v___x_2011_ = lean_usize_add(v_i_2002_, v___x_2010_);
v_i_2002_ = v___x_2011_;
v_b_2003_ = v___x_2009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2___boxed(lean_object* v_as_2013_, lean_object* v_sz_2014_, lean_object* v_i_2015_, lean_object* v_b_2016_){
_start:
{
size_t v_sz_boxed_2017_; size_t v_i_boxed_2018_; lean_object* v_res_2019_; 
v_sz_boxed_2017_ = lean_unbox_usize(v_sz_2014_);
lean_dec(v_sz_2014_);
v_i_boxed_2018_ = lean_unbox_usize(v_i_2015_);
lean_dec(v_i_2015_);
v_res_2019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(v_as_2013_, v_sz_boxed_2017_, v_i_boxed_2018_, v_b_2016_);
lean_dec_ref(v_as_2013_);
return v_res_2019_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object* v_m_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_buckets_2022_; lean_object* v___x_2023_; uint64_t v___x_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; uint64_t v_fold_2027_; uint64_t v___x_2028_; uint64_t v___x_2029_; uint64_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; 
v_buckets_2022_ = lean_ctor_get(v_m_2020_, 1);
v___x_2023_ = lean_array_get_size(v_buckets_2022_);
v___x_2024_ = lean_uint64_of_nat(v_a_2021_);
v___x_2025_ = 32ULL;
v___x_2026_ = lean_uint64_shift_right(v___x_2024_, v___x_2025_);
v_fold_2027_ = lean_uint64_xor(v___x_2024_, v___x_2026_);
v___x_2028_ = 16ULL;
v___x_2029_ = lean_uint64_shift_right(v_fold_2027_, v___x_2028_);
v___x_2030_ = lean_uint64_xor(v_fold_2027_, v___x_2029_);
v___x_2031_ = lean_uint64_to_usize(v___x_2030_);
v___x_2032_ = lean_usize_of_nat(v___x_2023_);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_sub(v___x_2032_, v___x_2033_);
v___x_2035_ = lean_usize_land(v___x_2031_, v___x_2034_);
v___x_2036_ = lean_array_uget_borrowed(v_buckets_2022_, v___x_2035_);
v___x_2037_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_2021_, v___x_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg___boxed(lean_object* v_m_2038_, lean_object* v_a_2039_){
_start:
{
uint8_t v_res_2040_; lean_object* v_r_2041_; 
v_res_2040_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_m_2038_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v_m_2038_);
v_r_2041_ = lean_box(v_res_2040_);
return v_r_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(lean_object* v___x_2042_, lean_object* v_as_2043_, size_t v_sz_2044_, size_t v_i_2045_, lean_object* v_b_2046_){
_start:
{
lean_object* v_a_2048_; uint8_t v___x_2052_; 
v___x_2052_ = lean_usize_dec_lt(v_i_2045_, v_sz_2044_);
if (v___x_2052_ == 0)
{
return v_b_2046_;
}
else
{
lean_object* v_fst_2053_; lean_object* v_snd_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2069_; 
v_fst_2053_ = lean_ctor_get(v_b_2046_, 0);
v_snd_2054_ = lean_ctor_get(v_b_2046_, 1);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_b_2046_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2056_ = v_b_2046_;
v_isShared_2057_ = v_isSharedCheck_2069_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_snd_2054_);
lean_inc(v_fst_2053_);
lean_dec(v_b_2046_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2069_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v_a_2058_; lean_object* v_recArgPos_2059_; uint8_t v___x_2060_; 
v_a_2058_ = lean_array_uget_borrowed(v_as_2043_, v_i_2045_);
v_recArgPos_2059_ = lean_ctor_get(v_a_2058_, 2);
v___x_2060_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v___x_2042_, v_recArgPos_2059_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2063_; 
lean_inc(v_a_2058_);
v___x_2061_ = lean_array_push(v_snd_2054_, v_a_2058_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 1, v___x_2061_);
v___x_2063_ = v___x_2056_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_fst_2053_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v___x_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
v_a_2048_ = v___x_2063_;
goto v___jp_2047_;
}
}
else
{
lean_object* v___x_2065_; lean_object* v___x_2067_; 
lean_inc(v_a_2058_);
v___x_2065_ = lean_array_push(v_fst_2053_, v_a_2058_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v___x_2065_);
v___x_2067_ = v___x_2056_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_snd_2054_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_a_2048_ = v___x_2067_;
goto v___jp_2047_;
}
}
}
}
v___jp_2047_:
{
size_t v___x_2049_; size_t v___x_2050_; 
v___x_2049_ = ((size_t)1ULL);
v___x_2050_ = lean_usize_add(v_i_2045_, v___x_2049_);
v_i_2045_ = v___x_2050_;
v_b_2046_ = v_a_2048_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4___boxed(lean_object* v___x_2070_, lean_object* v_as_2071_, lean_object* v_sz_2072_, lean_object* v_i_2073_, lean_object* v_b_2074_){
_start:
{
size_t v_sz_boxed_2075_; size_t v_i_boxed_2076_; lean_object* v_res_2077_; 
v_sz_boxed_2075_ = lean_unbox_usize(v_sz_2072_);
lean_dec(v_sz_2072_);
v_i_boxed_2076_ = lean_unbox_usize(v_i_2073_);
lean_dec(v_i_2073_);
v_res_2077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(v___x_2070_, v_as_2071_, v_sz_boxed_2075_, v_i_boxed_2076_, v_b_2074_);
lean_dec_ref(v_as_2071_);
lean_dec_ref(v___x_2070_);
return v_res_2077_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__0(void){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_box(0);
v___x_2079_ = lean_unsigned_to_nat(16u);
v___x_2080_ = lean_mk_array(v___x_2079_, v___x_2078_);
return v___x_2080_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__1(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v_indicesPos_2083_; 
v___x_2081_ = lean_obj_once(&l_Lean_Elab_Structural_nonIndicesFirst___closed__0, &l_Lean_Elab_Structural_nonIndicesFirst___closed__0_once, _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__0);
v___x_2082_ = lean_unsigned_to_nat(0u);
v_indicesPos_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_indicesPos_2083_, 0, v___x_2082_);
lean_ctor_set(v_indicesPos_2083_, 1, v___x_2081_);
return v_indicesPos_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst(lean_object* v_recArgInfos_2086_){
_start:
{
lean_object* v_indicesPos_2087_; size_t v_sz_2088_; size_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v_fst_2093_; lean_object* v_snd_2094_; lean_object* v___x_2095_; 
v_indicesPos_2087_ = lean_obj_once(&l_Lean_Elab_Structural_nonIndicesFirst___closed__1, &l_Lean_Elab_Structural_nonIndicesFirst___closed__1_once, _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__1);
v_sz_2088_ = lean_array_size(v_recArgInfos_2086_);
v___x_2089_ = ((size_t)0ULL);
v___x_2090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(v_recArgInfos_2086_, v_sz_2088_, v___x_2089_, v_indicesPos_2087_);
v___x_2091_ = ((lean_object*)(l_Lean_Elab_Structural_nonIndicesFirst___closed__2));
v___x_2092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(v___x_2090_, v_recArgInfos_2086_, v_sz_2088_, v___x_2089_, v___x_2091_);
lean_dec_ref(v___x_2090_);
v_fst_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_fst_2093_);
v_snd_2094_ = lean_ctor_get(v___x_2092_, 1);
lean_inc(v_snd_2094_);
lean_dec_ref(v___x_2092_);
v___x_2095_ = l_Array_append___redArg(v_snd_2094_, v_fst_2093_);
lean_dec(v_fst_2093_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst___boxed(lean_object* v_recArgInfos_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lean_Elab_Structural_nonIndicesFirst(v_recArgInfos_2096_);
lean_dec_ref(v_recArgInfos_2096_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0(lean_object* v_00_u03b2_2098_, lean_object* v_m_2099_, lean_object* v_a_2100_, lean_object* v_b_2101_){
_start:
{
lean_object* v___x_2102_; 
v___x_2102_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_m_2099_, v_a_2100_, v_b_2101_);
return v___x_2102_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(lean_object* v_00_u03b2_2103_, lean_object* v_m_2104_, lean_object* v_a_2105_){
_start:
{
uint8_t v___x_2106_; 
v___x_2106_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_m_2104_, v_a_2105_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___boxed(lean_object* v_00_u03b2_2107_, lean_object* v_m_2108_, lean_object* v_a_2109_){
_start:
{
uint8_t v_res_2110_; lean_object* v_r_2111_; 
v_res_2110_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(v_00_u03b2_2107_, v_m_2108_, v_a_2109_);
lean_dec(v_a_2109_);
lean_dec_ref(v_m_2108_);
v_r_2111_ = lean_box(v_res_2110_);
return v_r_2111_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(lean_object* v_00_u03b2_2112_, lean_object* v_a_2113_, lean_object* v_x_2114_){
_start:
{
uint8_t v___x_2115_; 
v___x_2115_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_2113_, v_x_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2116_, lean_object* v_a_2117_, lean_object* v_x_2118_){
_start:
{
uint8_t v_res_2119_; lean_object* v_r_2120_; 
v_res_2119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(v_00_u03b2_2116_, v_a_2117_, v_x_2118_);
lean_dec(v_x_2118_);
lean_dec(v_a_2117_);
v_r_2120_ = lean_box(v_res_2119_);
return v_r_2120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1(lean_object* v_00_u03b2_2121_, lean_object* v_data_2122_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(v_data_2122_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2124_, lean_object* v_i_2125_, lean_object* v_source_2126_, lean_object* v_target_2127_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(v_i_2125_, v_source_2126_, v_target_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_2129_, lean_object* v_x_2130_, lean_object* v_x_2131_){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(v_x_2130_, v_x_2131_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(lean_object* v___y_2133_, lean_object* v_a_2134_, lean_object* v_toPure_2135_, uint8_t v_____do__lift_2136_){
_start:
{
if (v_____do__lift_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2137_ = lean_array_push(v___y_2133_, v_a_2134_);
v___x_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
v___x_2139_ = lean_apply_2(v_toPure_2135_, lean_box(0), v___x_2138_);
return v___x_2139_;
}
else
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
lean_dec(v_a_2134_);
v___x_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___y_2133_);
v___x_2141_ = lean_apply_2(v_toPure_2135_, lean_box(0), v___x_2140_);
return v___x_2141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed(lean_object* v___y_2142_, lean_object* v_a_2143_, lean_object* v_toPure_2144_, lean_object* v_____do__lift_2145_){
_start:
{
uint8_t v_____do__lift_159__boxed_2146_; lean_object* v_res_2147_; 
v_____do__lift_159__boxed_2146_ = lean_unbox(v_____do__lift_2145_);
v_res_2147_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(v___y_2142_, v_a_2143_, v_toPure_2144_, v_____do__lift_159__boxed_2146_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1(lean_object* v_eq_2148_, lean_object* v_a_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_apply_2(v_eq_2148_, v_x_2150_, v_a_2149_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(lean_object* v_toPure_2152_, lean_object* v___x_2153_, lean_object* v_toBind_2154_, lean_object* v_eq_2155_, lean_object* v_inst_2156_, lean_object* v_a_2157_, lean_object* v_x_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v___f_2160_; lean_object* v___x_2161_; uint8_t v___x_2162_; 
lean_inc(v_toPure_2152_);
lean_inc(v_a_2157_);
lean_inc_ref(v___y_2159_);
v___f_2160_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2160_, 0, v___y_2159_);
lean_closure_set(v___f_2160_, 1, v_a_2157_);
lean_closure_set(v___f_2160_, 2, v_toPure_2152_);
v___x_2161_ = lean_array_get_size(v___y_2159_);
v___x_2162_ = lean_nat_dec_lt(v___x_2153_, v___x_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
lean_dec_ref(v___y_2159_);
lean_dec(v_a_2157_);
lean_dec_ref(v_inst_2156_);
lean_dec(v_eq_2155_);
v___x_2163_ = lean_box(v___x_2162_);
v___x_2164_ = lean_apply_2(v_toPure_2152_, lean_box(0), v___x_2163_);
v___x_2165_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2164_, v___f_2160_);
return v___x_2165_;
}
else
{
if (v___x_2162_ == 0)
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
lean_dec_ref(v___y_2159_);
lean_dec(v_a_2157_);
lean_dec_ref(v_inst_2156_);
lean_dec(v_eq_2155_);
v___x_2166_ = lean_box(v___x_2162_);
v___x_2167_ = lean_apply_2(v_toPure_2152_, lean_box(0), v___x_2166_);
v___x_2168_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2167_, v___f_2160_);
return v___x_2168_;
}
else
{
lean_object* v___f_2169_; size_t v___x_2170_; size_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
lean_dec(v_toPure_2152_);
v___f_2169_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2169_, 0, v_eq_2155_);
lean_closure_set(v___f_2169_, 1, v_a_2157_);
v___x_2170_ = ((size_t)0ULL);
v___x_2171_ = lean_usize_of_nat(v___x_2161_);
v___x_2172_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2156_, v___f_2169_, v___y_2159_, v___x_2170_, v___x_2171_);
v___x_2173_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2172_, v___f_2160_);
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed(lean_object* v_toPure_2174_, lean_object* v___x_2175_, lean_object* v_toBind_2176_, lean_object* v_eq_2177_, lean_object* v_inst_2178_, lean_object* v_a_2179_, lean_object* v_x_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(v_toPure_2174_, v___x_2175_, v_toBind_2176_, v_eq_2177_, v_inst_2178_, v_a_2179_, v_x_2180_, v___y_2181_);
lean_dec(v___x_2175_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3(lean_object* v_toPure_2183_, lean_object* v_____s_2184_){
_start:
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_apply_2(v_toPure_2183_, lean_box(0), v_____s_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(lean_object* v_inst_2188_, lean_object* v_eq_2189_, lean_object* v_xs_2190_){
_start:
{
lean_object* v_toApplicative_2191_; lean_object* v_toBind_2192_; lean_object* v_toPure_2193_; lean_object* v___x_2194_; lean_object* v_ret_2195_; lean_object* v___f_2196_; lean_object* v___f_2197_; size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v_toApplicative_2191_ = lean_ctor_get(v_inst_2188_, 0);
v_toBind_2192_ = lean_ctor_get(v_inst_2188_, 1);
lean_inc_n(v_toBind_2192_, 2);
v_toPure_2193_ = lean_ctor_get(v_toApplicative_2191_, 1);
v___x_2194_ = lean_unsigned_to_nat(0u);
v_ret_2195_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
lean_inc_ref(v_inst_2188_);
lean_inc_n(v_toPure_2193_, 2);
v___f_2196_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_2196_, 0, v_toPure_2193_);
lean_closure_set(v___f_2196_, 1, v___x_2194_);
lean_closure_set(v___f_2196_, 2, v_toBind_2192_);
lean_closure_set(v___f_2196_, 3, v_eq_2189_);
lean_closure_set(v___f_2196_, 4, v_inst_2188_);
v___f_2197_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2197_, 0, v_toPure_2193_);
v_sz_2198_ = lean_array_size(v_xs_2190_);
v___x_2199_ = ((size_t)0ULL);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2188_, v_xs_2190_, v___f_2196_, v_sz_2198_, v___x_2199_, v_ret_2195_);
v___x_2201_ = lean_apply_4(v_toBind_2192_, lean_box(0), lean_box(0), v___x_2200_, v___f_2197_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup(lean_object* v_m_2202_, lean_object* v_00_u03b1_2203_, lean_object* v_inst_2204_, lean_object* v_eq_2205_, lean_object* v_xs_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(v_inst_2204_, v_eq_2205_, v_xs_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(size_t v_sz_2208_, size_t v_i_2209_, lean_object* v_bs_2210_){
_start:
{
uint8_t v___x_2211_; 
v___x_2211_ = lean_usize_dec_lt(v_i_2209_, v_sz_2208_);
if (v___x_2211_ == 0)
{
lean_object* v___x_2212_; 
v___x_2212_ = l_unsafeCast___redArg(v_bs_2210_);
lean_dec_ref(v_bs_2210_);
return v___x_2212_;
}
else
{
lean_object* v_v_2213_; lean_object* v___x_2214_; lean_object* v_indGroupInst_2215_; lean_object* v___x_2216_; lean_object* v_bs_x27_2217_; size_t v___x_2218_; size_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v_v_2213_ = lean_array_uget_borrowed(v_bs_2210_, v_i_2209_);
v___x_2214_ = l_unsafeCast___redArg(v_v_2213_);
v_indGroupInst_2215_ = lean_ctor_get(v___x_2214_, 4);
lean_inc_ref(v_indGroupInst_2215_);
lean_dec(v___x_2214_);
v___x_2216_ = lean_unsigned_to_nat(0u);
v_bs_x27_2217_ = lean_array_uset(v_bs_2210_, v_i_2209_, v___x_2216_);
v___x_2218_ = ((size_t)1ULL);
v___x_2219_ = lean_usize_add(v_i_2209_, v___x_2218_);
v___x_2220_ = l_unsafeCast___redArg(v_indGroupInst_2215_);
lean_dec_ref(v_indGroupInst_2215_);
v___x_2221_ = lean_array_uset(v_bs_x27_2217_, v_i_2209_, v___x_2220_);
v_i_2209_ = v___x_2219_;
v_bs_2210_ = v___x_2221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0___boxed(lean_object* v_sz_2223_, lean_object* v_i_2224_, lean_object* v_bs_2225_){
_start:
{
size_t v_sz_boxed_2226_; size_t v_i_boxed_2227_; lean_object* v_res_2228_; 
v_sz_boxed_2226_ = lean_unbox_usize(v_sz_2223_);
lean_dec(v_sz_2223_);
v_i_boxed_2227_ = lean_unbox_usize(v_i_2224_);
lean_dec(v_i_2224_);
v_res_2228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(v_sz_boxed_2226_, v_i_boxed_2227_, v_bs_2225_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(lean_object* v_eq_2229_, lean_object* v_a_2230_, lean_object* v_as_2231_, size_t v_i_2232_, size_t v_stop_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
uint8_t v___x_2239_; 
v___x_2239_ = lean_usize_dec_eq(v_i_2232_, v_stop_2233_);
if (v___x_2239_ == 0)
{
uint8_t v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2240_ = 1;
v___x_2241_ = lean_array_uget_borrowed(v_as_2231_, v_i_2232_);
lean_inc_ref(v_eq_2229_);
lean_inc(v___y_2237_);
lean_inc_ref(v___y_2236_);
lean_inc(v___y_2235_);
lean_inc_ref(v___y_2234_);
lean_inc(v_a_2230_);
lean_inc(v___x_2241_);
v___x_2242_ = lean_apply_7(v_eq_2229_, v___x_2241_, v_a_2230_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, lean_box(0));
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2255_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2255_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2255_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
uint8_t v___x_2247_; 
v___x_2247_ = lean_unbox(v_a_2243_);
lean_dec(v_a_2243_);
if (v___x_2247_ == 0)
{
size_t v___x_2248_; size_t v___x_2249_; 
lean_del_object(v___x_2245_);
v___x_2248_ = ((size_t)1ULL);
v___x_2249_ = lean_usize_add(v_i_2232_, v___x_2248_);
v_i_2232_ = v___x_2249_;
goto _start;
}
else
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
lean_dec(v_a_2230_);
lean_dec_ref(v_eq_2229_);
v___x_2251_ = lean_box(v___x_2240_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2251_);
v___x_2253_ = v___x_2245_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2251_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
else
{
lean_dec(v_a_2230_);
lean_dec_ref(v_eq_2229_);
return v___x_2242_;
}
}
else
{
uint8_t v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
lean_dec(v_a_2230_);
lean_dec_ref(v_eq_2229_);
v___x_2256_ = 0;
v___x_2257_ = lean_box(v___x_2256_);
v___x_2258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
return v___x_2258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg___boxed(lean_object* v_eq_2259_, lean_object* v_a_2260_, lean_object* v_as_2261_, lean_object* v_i_2262_, lean_object* v_stop_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
size_t v_i_boxed_2269_; size_t v_stop_boxed_2270_; lean_object* v_res_2271_; 
v_i_boxed_2269_ = lean_unbox_usize(v_i_2262_);
lean_dec(v_i_2262_);
v_stop_boxed_2270_ = lean_unbox_usize(v_stop_2263_);
lean_dec(v_stop_2263_);
v_res_2271_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2259_, v_a_2260_, v_as_2261_, v_i_boxed_2269_, v_stop_boxed_2270_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v_as_2261_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(lean_object* v_b_2272_, lean_object* v_a_2273_, uint8_t v_____do__lift_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
if (v_____do__lift_2274_ == 0)
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = lean_array_push(v_b_2272_, v_a_2273_);
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
return v___x_2282_;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
lean_dec(v_a_2273_);
v___x_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_b_2272_);
v___x_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
return v___x_2284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_b_2285_, lean_object* v_a_2286_, lean_object* v_____do__lift_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
uint8_t v_____do__lift_1293__boxed_2293_; lean_object* v_res_2294_; 
v_____do__lift_1293__boxed_2293_ = lean_unbox(v_____do__lift_2287_);
v_res_2294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2285_, v_a_2286_, v_____do__lift_1293__boxed_2293_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(lean_object* v_eq_2295_, lean_object* v_as_2296_, size_t v_sz_2297_, size_t v_i_2298_, lean_object* v_b_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_a_2306_; lean_object* v___y_2311_; uint8_t v___x_2330_; 
v___x_2330_ = lean_usize_dec_lt(v_i_2298_, v_sz_2297_);
if (v___x_2330_ == 0)
{
lean_object* v___x_2331_; 
lean_dec_ref(v_eq_2295_);
v___x_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2331_, 0, v_b_2299_);
return v___x_2331_;
}
else
{
lean_object* v___x_2332_; lean_object* v_a_2333_; lean_object* v___x_2334_; uint8_t v___x_2335_; 
v___x_2332_ = lean_unsigned_to_nat(0u);
v_a_2333_ = lean_array_uget_borrowed(v_as_2296_, v_i_2298_);
v___x_2334_ = lean_array_get_size(v_b_2299_);
v___x_2335_ = lean_nat_dec_lt(v___x_2332_, v___x_2334_);
if (v___x_2335_ == 0)
{
lean_object* v___x_2336_; 
lean_inc(v_a_2333_);
v___x_2336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2299_, v_a_2333_, v___x_2335_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
v___y_2311_ = v___x_2336_;
goto v___jp_2310_;
}
else
{
if (v___x_2335_ == 0)
{
lean_object* v___x_2337_; 
lean_inc(v_a_2333_);
v___x_2337_ = lean_array_push(v_b_2299_, v_a_2333_);
v_a_2306_ = v___x_2337_;
goto v___jp_2305_;
}
else
{
size_t v___x_2338_; size_t v___x_2339_; lean_object* v___x_2340_; 
v___x_2338_ = ((size_t)0ULL);
v___x_2339_ = lean_usize_of_nat(v___x_2334_);
lean_inc(v_a_2333_);
lean_inc_ref(v_eq_2295_);
v___x_2340_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2295_, v_a_2333_, v_b_2299_, v___x_2338_, v___x_2339_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; uint8_t v___x_2342_; lean_object* v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = lean_unbox(v_a_2341_);
lean_dec(v_a_2341_);
lean_inc(v_a_2333_);
v___x_2343_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2299_, v_a_2333_, v___x_2342_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
v___y_2311_ = v___x_2343_;
goto v___jp_2310_;
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref(v_b_2299_);
lean_dec_ref(v_eq_2295_);
v_a_2344_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2340_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2340_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
}
}
v___jp_2305_:
{
size_t v___x_2307_; size_t v___x_2308_; 
v___x_2307_ = ((size_t)1ULL);
v___x_2308_ = lean_usize_add(v_i_2298_, v___x_2307_);
v_i_2298_ = v___x_2308_;
v_b_2299_ = v_a_2306_;
goto _start;
}
v___jp_2310_:
{
if (lean_obj_tag(v___y_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2321_; 
v_a_2312_ = lean_ctor_get(v___y_2311_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___y_2311_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2314_ = v___y_2311_;
v_isShared_2315_ = v_isSharedCheck_2321_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___y_2311_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2321_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
if (lean_obj_tag(v_a_2312_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2318_; 
lean_dec_ref(v_eq_2295_);
v_a_2316_ = lean_ctor_get(v_a_2312_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v_a_2312_, 1);
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v_a_2316_);
v___x_2318_ = v___x_2314_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
else
{
lean_object* v_a_2320_; 
lean_del_object(v___x_2314_);
v_a_2320_ = lean_ctor_get(v_a_2312_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v_a_2312_, 1);
v_a_2306_ = v_a_2320_;
goto v___jp_2305_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v_eq_2295_);
v_a_2322_ = lean_ctor_get(v___y_2311_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___y_2311_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___y_2311_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___y_2311_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___boxed(lean_object* v_eq_2352_, lean_object* v_as_2353_, lean_object* v_sz_2354_, lean_object* v_i_2355_, lean_object* v_b_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
size_t v_sz_boxed_2362_; size_t v_i_boxed_2363_; lean_object* v_res_2364_; 
v_sz_boxed_2362_ = lean_unbox_usize(v_sz_2354_);
lean_dec(v_sz_2354_);
v_i_boxed_2363_ = lean_unbox_usize(v_i_2355_);
lean_dec(v_i_2355_);
v_res_2364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2352_, v_as_2353_, v_sz_boxed_2362_, v_i_boxed_2363_, v_b_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
lean_dec_ref(v_as_2353_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(lean_object* v_eq_2365_, lean_object* v_xs_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_ret_2372_; size_t v_sz_2373_; size_t v___x_2374_; lean_object* v___x_2375_; 
v_ret_2372_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
v_sz_2373_ = lean_array_size(v_xs_2366_);
v___x_2374_ = ((size_t)0ULL);
v___x_2375_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2365_, v_xs_2366_, v_sz_2373_, v___x_2374_, v_ret_2372_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg___boxed(lean_object* v_eq_2376_, lean_object* v_xs_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v_eq_2376_, v_xs_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
lean_dec_ref(v_xs_2377_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups(lean_object* v_recArgInfos_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_){
_start:
{
lean_object* v___x_2391_; size_t v_sz_2392_; size_t v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2391_ = ((lean_object*)(l_Lean_Elab_Structural_inductiveGroups___closed__0));
v_sz_2392_ = lean_array_size(v_recArgInfos_2385_);
v___x_2393_ = ((size_t)0ULL);
v___x_2394_ = l_unsafeCast___redArg(v_recArgInfos_2385_);
v___x_2395_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(v_sz_2392_, v___x_2393_, v___x_2394_);
v___x_2396_ = l_unsafeCast___redArg(v___x_2395_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v___x_2391_, v___x_2396_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_);
lean_dec(v___x_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups___boxed(lean_object* v_recArgInfos_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_Elab_Structural_inductiveGroups(v_recArgInfos_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
lean_dec(v_a_2402_);
lean_dec_ref(v_a_2401_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec_ref(v_recArgInfos_2398_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(lean_object* v_00_u03b1_2405_, lean_object* v_eq_2406_, lean_object* v_xs_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v_eq_2406_, v_xs_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___boxed(lean_object* v_00_u03b1_2414_, lean_object* v_eq_2415_, lean_object* v_xs_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(v_00_u03b1_2414_, v_eq_2415_, v_xs_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec_ref(v_xs_2416_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(lean_object* v_00_u03b1_2423_, lean_object* v_eq_2424_, lean_object* v_a_2425_, lean_object* v_as_2426_, size_t v_i_2427_, size_t v_stop_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2424_, v_a_2425_, v_as_2426_, v_i_2427_, v_stop_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2435_, lean_object* v_eq_2436_, lean_object* v_a_2437_, lean_object* v_as_2438_, lean_object* v_i_2439_, lean_object* v_stop_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
size_t v_i_boxed_2446_; size_t v_stop_boxed_2447_; lean_object* v_res_2448_; 
v_i_boxed_2446_ = lean_unbox_usize(v_i_2439_);
lean_dec(v_i_2439_);
v_stop_boxed_2447_ = lean_unbox_usize(v_stop_2440_);
lean_dec(v_stop_2440_);
v_res_2448_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(v_00_u03b1_2435_, v_eq_2436_, v_a_2437_, v_as_2438_, v_i_boxed_2446_, v_stop_boxed_2447_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec_ref(v_as_2438_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(lean_object* v_00_u03b1_2449_, lean_object* v_eq_2450_, lean_object* v_as_2451_, size_t v_sz_2452_, size_t v_i_2453_, lean_object* v_b_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2450_, v_as_2451_, v_sz_2452_, v_i_2453_, v_b_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2461_, lean_object* v_eq_2462_, lean_object* v_as_2463_, lean_object* v_sz_2464_, lean_object* v_i_2465_, lean_object* v_b_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
size_t v_sz_boxed_2472_; size_t v_i_boxed_2473_; lean_object* v_res_2474_; 
v_sz_boxed_2472_ = lean_unbox_usize(v_sz_2464_);
lean_dec(v_sz_2464_);
v_i_boxed_2473_ = lean_unbox_usize(v_i_2465_);
lean_dec(v_i_2465_);
v_res_2474_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(v_00_u03b1_2461_, v_eq_2462_, v_as_2463_, v_sz_boxed_2472_, v_i_boxed_2473_, v_b_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec_ref(v_as_2463_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(lean_object* v_e_2475_, lean_object* v___y_2476_){
_start:
{
uint8_t v___x_2478_; 
v___x_2478_ = l_Lean_Expr_hasMVar(v_e_2475_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_e_2475_);
return v___x_2479_;
}
else
{
lean_object* v___x_2480_; lean_object* v_mctx_2481_; lean_object* v___x_2482_; lean_object* v_fst_2483_; lean_object* v_snd_2484_; lean_object* v___x_2485_; lean_object* v_cache_2486_; lean_object* v_zetaDeltaFVarIds_2487_; lean_object* v_postponed_2488_; lean_object* v_diag_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2498_; 
v___x_2480_ = lean_st_ref_get(v___y_2476_);
v_mctx_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc_ref(v_mctx_2481_);
lean_dec(v___x_2480_);
v___x_2482_ = l_Lean_instantiateMVarsCore(v_mctx_2481_, v_e_2475_);
v_fst_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_fst_2483_);
v_snd_2484_ = lean_ctor_get(v___x_2482_, 1);
lean_inc(v_snd_2484_);
lean_dec_ref(v___x_2482_);
v___x_2485_ = lean_st_ref_take(v___y_2476_);
v_cache_2486_ = lean_ctor_get(v___x_2485_, 1);
v_zetaDeltaFVarIds_2487_ = lean_ctor_get(v___x_2485_, 2);
v_postponed_2488_ = lean_ctor_get(v___x_2485_, 3);
v_diag_2489_ = lean_ctor_get(v___x_2485_, 4);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2498_ == 0)
{
lean_object* v_unused_2499_; 
v_unused_2499_ = lean_ctor_get(v___x_2485_, 0);
lean_dec(v_unused_2499_);
v___x_2491_ = v___x_2485_;
v_isShared_2492_ = v_isSharedCheck_2498_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_diag_2489_);
lean_inc(v_postponed_2488_);
lean_inc(v_zetaDeltaFVarIds_2487_);
lean_inc(v_cache_2486_);
lean_dec(v___x_2485_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2498_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 0, v_snd_2484_);
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_snd_2484_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v_cache_2486_);
lean_ctor_set(v_reuseFailAlloc_2497_, 2, v_zetaDeltaFVarIds_2487_);
lean_ctor_set(v_reuseFailAlloc_2497_, 3, v_postponed_2488_);
lean_ctor_set(v_reuseFailAlloc_2497_, 4, v_diag_2489_);
v___x_2494_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = lean_st_ref_put(v___y_2476_, v___x_2494_);
v___x_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2496_, 0, v_fst_2483_);
return v___x_2496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg___boxed(lean_object* v_e_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v_e_2500_, v___y_2501_);
lean_dec(v___y_2501_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(lean_object* v_e_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v_e_2504_, v___y_2506_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___boxed(lean_object* v_e_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(v_e_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
return v_res_2517_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2));
v___x_2520_ = lean_unsigned_to_nat(109u);
v___x_2521_ = lean_unsigned_to_nat(216u);
v___x_2522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0));
v___x_2523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_2524_ = l_mkPanicMessageWithDecl(v___x_2523_, v___x_2522_, v___x_2521_, v___x_2520_, v___x_2519_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(lean_object* v___x_2525_, size_t v_sz_2526_, size_t v_i_2527_, lean_object* v_bs_2528_){
_start:
{
uint8_t v___x_2529_; 
v___x_2529_ = lean_usize_dec_lt(v_i_2527_, v_sz_2526_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; 
v___x_2530_ = l_unsafeCast___redArg(v_bs_2528_);
lean_dec_ref(v_bs_2528_);
return v___x_2530_;
}
else
{
lean_object* v_v_2531_; lean_object* v___x_2532_; lean_object* v_bs_x27_2533_; lean_object* v___y_2535_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v_v_2531_ = lean_array_uget(v_bs_2528_, v_i_2527_);
v___x_2532_ = lean_unsigned_to_nat(0u);
v_bs_x27_2533_ = lean_array_uset(v_bs_2528_, v_i_2527_, v___x_2532_);
v___x_2541_ = l_unsafeCast___redArg(v_v_2531_);
lean_dec(v_v_2531_);
v___x_2542_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v___x_2525_, v___x_2541_);
lean_dec(v___x_2541_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1);
v___x_2544_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(v___x_2543_);
v___y_2535_ = v___x_2544_;
goto v___jp_2534_;
}
else
{
lean_object* v_val_2545_; 
v_val_2545_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_val_2545_);
lean_dec_ref_known(v___x_2542_, 1);
v___y_2535_ = v_val_2545_;
goto v___jp_2534_;
}
v___jp_2534_:
{
size_t v___x_2536_; size_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2536_ = ((size_t)1ULL);
v___x_2537_ = lean_usize_add(v_i_2527_, v___x_2536_);
v___x_2538_ = l_unsafeCast___redArg(v___y_2535_);
lean_dec(v___y_2535_);
v___x_2539_ = lean_array_uset(v_bs_x27_2533_, v_i_2527_, v___x_2538_);
v_i_2527_ = v___x_2537_;
v_bs_2528_ = v___x_2539_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___boxed(lean_object* v___x_2546_, lean_object* v_sz_2547_, lean_object* v_i_2548_, lean_object* v_bs_2549_){
_start:
{
size_t v_sz_boxed_2550_; size_t v_i_boxed_2551_; lean_object* v_res_2552_; 
v_sz_boxed_2550_ = lean_unbox_usize(v_sz_2547_);
lean_dec(v_sz_2547_);
v_i_boxed_2551_ = lean_unbox_usize(v_i_2548_);
lean_dec(v_i_2548_);
v_res_2552_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2546_, v_sz_boxed_2550_, v_i_boxed_2551_, v_bs_2549_);
lean_dec_ref(v___x_2546_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(size_t v_sz_2553_, size_t v_i_2554_, lean_object* v_bs_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
uint8_t v___x_2561_; 
v___x_2561_ = lean_usize_dec_lt(v_i_2554_, v_sz_2553_);
if (v___x_2561_ == 0)
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = l_unsafeCast___redArg(v_bs_2555_);
lean_dec_ref(v_bs_2555_);
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
return v___x_2563_;
}
else
{
lean_object* v_v_2564_; lean_object* v___x_2565_; lean_object* v_bs_x27_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_v_2564_ = lean_array_uget(v_bs_2555_, v_i_2554_);
v___x_2565_ = lean_unsigned_to_nat(0u);
v_bs_x27_2566_ = lean_array_uset(v_bs_2555_, v_i_2554_, v___x_2565_);
v___x_2567_ = l_unsafeCast___redArg(v_v_2564_);
lean_dec(v_v_2564_);
v___x_2568_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v___x_2567_, v___y_2557_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; size_t v___x_2570_; size_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___x_2570_ = ((size_t)1ULL);
v___x_2571_ = lean_usize_add(v_i_2554_, v___x_2570_);
v___x_2572_ = l_unsafeCast___redArg(v_a_2569_);
lean_dec(v_a_2569_);
v___x_2573_ = lean_array_uset(v_bs_x27_2566_, v_i_2554_, v___x_2572_);
v_i_2554_ = v___x_2571_;
v_bs_2555_ = v___x_2573_;
goto _start;
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec_ref(v_bs_x27_2566_);
v_a_2575_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2568_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2568_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed(lean_object* v_sz_2583_, lean_object* v_i_2584_, lean_object* v_bs_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
size_t v_sz_boxed_2591_; size_t v_i_boxed_2592_; lean_object* v_res_2593_; 
v_sz_boxed_2591_ = lean_unbox_usize(v_sz_2583_);
lean_dec(v_sz_2583_);
v_i_boxed_2592_ = lean_unbox_usize(v_i_2584_);
lean_dec(v_i_2584_);
v_res_2593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(v_sz_boxed_2591_, v_i_boxed_2592_, v_bs_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
return v_res_2593_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(uint8_t v_a_2594_, lean_object* v___x_2595_, lean_object* v_as_2596_, size_t v_i_2597_, size_t v_stop_2598_){
_start:
{
uint8_t v___x_2599_; 
v___x_2599_ = lean_usize_dec_eq(v_i_2597_, v_stop_2598_);
if (v___x_2599_ == 0)
{
uint8_t v___x_2600_; uint8_t v___y_2602_; lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2600_ = 1;
v___x_2606_ = lean_array_uget_borrowed(v_as_2596_, v_i_2597_);
v___x_2607_ = l_Lean_Expr_isFVar(v___x_2606_);
if (v___x_2607_ == 0)
{
v___y_2602_ = v_a_2594_;
goto v___jp_2601_;
}
else
{
lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2608_ = lean_unsigned_to_nat(0u);
v___x_2609_ = lean_nat_dec_eq(v___x_2595_, v___x_2608_);
v___y_2602_ = v___x_2609_;
goto v___jp_2601_;
}
v___jp_2601_:
{
if (v___y_2602_ == 0)
{
size_t v___x_2603_; size_t v___x_2604_; 
v___x_2603_ = ((size_t)1ULL);
v___x_2604_ = lean_usize_add(v_i_2597_, v___x_2603_);
v_i_2597_ = v___x_2604_;
goto _start;
}
else
{
return v___x_2600_;
}
}
}
else
{
uint8_t v___x_2610_; 
v___x_2610_ = 0;
return v___x_2610_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3___boxed(lean_object* v_a_2611_, lean_object* v___x_2612_, lean_object* v_as_2613_, lean_object* v_i_2614_, lean_object* v_stop_2615_){
_start:
{
uint8_t v_a_7911__boxed_2616_; size_t v_i_boxed_2617_; size_t v_stop_boxed_2618_; uint8_t v_res_2619_; lean_object* v_r_2620_; 
v_a_7911__boxed_2616_ = lean_unbox(v_a_2611_);
v_i_boxed_2617_ = lean_unbox_usize(v_i_2614_);
lean_dec(v_i_2614_);
v_stop_boxed_2618_ = lean_unbox_usize(v_stop_2615_);
lean_dec(v_stop_2615_);
v_res_2619_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v_a_7911__boxed_2616_, v___x_2612_, v_as_2613_, v_i_boxed_2617_, v_stop_boxed_2618_);
lean_dec_ref(v_as_2613_);
lean_dec(v___x_2612_);
v_r_2620_ = lean_box(v_res_2619_);
return v_r_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(lean_object* v___x_2623_, lean_object* v_ys_2624_, lean_object* v___x_2625_, lean_object* v_recArgInfo_2626_, lean_object* v___x_2627_, lean_object* v___x_2628_, lean_object* v_group_2629_, lean_object* v___x_2630_, lean_object* v_as_2631_, size_t v_sz_2632_, size_t v_i_2633_, lean_object* v_b_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_a_2641_; uint8_t v___x_2645_; 
v___x_2645_ = lean_usize_dec_lt(v_i_2633_, v_sz_2632_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; 
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v___x_2646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2646_, 0, v_b_2634_);
return v___x_2646_;
}
else
{
lean_object* v_snd_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2810_; 
v_snd_2647_ = lean_ctor_get(v_b_2634_, 1);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_b_2634_);
if (v_isSharedCheck_2810_ == 0)
{
lean_object* v_unused_2811_; 
v_unused_2811_ = lean_ctor_get(v_b_2634_, 0);
lean_dec(v_unused_2811_);
v___x_2649_ = v_b_2634_;
v_isShared_2650_ = v_isSharedCheck_2810_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_snd_2647_);
lean_dec(v_b_2634_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2810_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v_next_2651_; lean_object* v_upperBound_2652_; lean_object* v___x_2653_; 
v_next_2651_ = lean_ctor_get(v_snd_2647_, 0);
lean_inc(v_next_2651_);
v_upperBound_2652_ = lean_ctor_get(v_snd_2647_, 1);
v___x_2653_ = lean_box(0);
if (lean_obj_tag(v_next_2651_) == 0)
{
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
goto v___jp_2654_;
}
else
{
lean_object* v_val_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2809_; 
v_val_2659_ = lean_ctor_get(v_next_2651_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v_next_2651_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2661_ = v_next_2651_;
v_isShared_2662_ = v_isSharedCheck_2809_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_val_2659_);
lean_dec(v_next_2651_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2809_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
uint8_t v___x_2663_; 
v___x_2663_ = lean_nat_dec_lt(v_val_2659_, v_upperBound_2652_);
if (v___x_2663_ == 0)
{
lean_del_object(v___x_2661_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
goto v___jp_2654_;
}
else
{
lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2806_; 
lean_inc(v_upperBound_2652_);
lean_del_object(v___x_2649_);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_snd_2647_);
if (v_isSharedCheck_2806_ == 0)
{
lean_object* v_unused_2807_; lean_object* v_unused_2808_; 
v_unused_2807_ = lean_ctor_get(v_snd_2647_, 1);
lean_dec(v_unused_2807_);
v_unused_2808_ = lean_ctor_get(v_snd_2647_, 0);
lean_dec(v_unused_2808_);
v___x_2665_ = v_snd_2647_;
v_isShared_2666_ = v_isSharedCheck_2806_;
goto v_resetjp_2664_;
}
else
{
lean_dec(v_snd_2647_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2806_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v_a_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v_a_2667_ = lean_array_uget_borrowed(v_as_2631_, v_i_2633_);
v___x_2668_ = lean_unsigned_to_nat(1u);
v___x_2669_ = lean_nat_add(v_val_2659_, v___x_2668_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 0, v___x_2669_);
v___x_2671_ = v___x_2661_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2673_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 0, v___x_2671_);
v___x_2673_ = v___x_2665_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2671_);
lean_ctor_set(v_reuseFailAlloc_2804_, 1, v_upperBound_2652_);
v___x_2673_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; 
lean_inc(v___y_2638_);
lean_inc_ref(v___y_2637_);
lean_inc(v___y_2636_);
lean_inc_ref(v___y_2635_);
lean_inc_ref(v___x_2623_);
v___x_2674_ = lean_infer_type(v___x_2623_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2676_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2676_ = l_Lean_Meta_whnfD(v_a_2675_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; uint8_t v___x_2678_; lean_object* v___x_2679_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v___x_2678_ = 0;
lean_inc(v_a_2667_);
v___x_2679_ = l_Lean_Meta_forallMetaTelescope(v_a_2667_, v___x_2678_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v_snd_2681_; lean_object* v_fst_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2779_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v_snd_2681_ = lean_ctor_get(v_a_2680_, 1);
v_fst_2682_ = lean_ctor_get(v_a_2680_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v_a_2680_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2684_ = v_a_2680_;
v_isShared_2685_ = v_isSharedCheck_2779_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_snd_2681_);
lean_inc(v_fst_2682_);
lean_dec(v_a_2680_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2779_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v_snd_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2777_; 
v_snd_2686_ = lean_ctor_get(v_snd_2681_, 1);
v_isSharedCheck_2777_ = !lean_is_exclusive(v_snd_2681_);
if (v_isSharedCheck_2777_ == 0)
{
lean_object* v_unused_2778_; 
v_unused_2778_ = lean_ctor_get(v_snd_2681_, 0);
lean_dec(v_unused_2778_);
v___x_2688_ = v_snd_2681_;
v_isShared_2689_ = v_isSharedCheck_2777_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_snd_2686_);
lean_dec(v_snd_2681_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2777_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Lean_Meta_isExprDefEqGuarded(v_snd_2686_, v_a_2677_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; uint8_t v___x_2692_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2692_ = lean_unbox(v_a_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2694_; 
lean_dec(v_a_2691_);
lean_del_object(v___x_2684_);
lean_dec(v_fst_2682_);
lean_dec(v_val_2659_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 1, v___x_2673_);
lean_ctor_set(v___x_2688_, 0, v___x_2653_);
v___x_2694_ = v___x_2688_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v___x_2673_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
v_a_2641_ = v___x_2694_;
goto v___jp_2640_;
}
}
else
{
size_t v_sz_2696_; size_t v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_7696__overap_2702_; lean_object* v___x_2703_; 
v_sz_2696_ = lean_array_size(v_fst_2682_);
v___x_2697_ = ((size_t)0ULL);
v___x_2698_ = l_unsafeCast___redArg(v_fst_2682_);
lean_dec(v_fst_2682_);
v___x_2699_ = lean_box_usize(v_sz_2696_);
v___x_2700_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed__const__1));
v___x_2701_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed), 8, 3);
lean_closure_set(v___x_2701_, 0, v___x_2699_);
lean_closure_set(v___x_2701_, 1, v___x_2700_);
lean_closure_set(v___x_2701_, 2, v___x_2698_);
v___x_7696__overap_2702_ = l_unsafeCast___redArg(v___x_2701_);
lean_dec_ref(v___x_2701_);
lean_inc(v___y_2638_);
lean_inc_ref(v___y_2637_);
lean_inc(v___y_2636_);
lean_inc_ref(v___y_2635_);
v___x_2703_ = lean_apply_5(v___x_7696__overap_2702_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, lean_box(0));
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2752_; lean_object* v___x_2753_; uint8_t v___x_2754_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
v___x_2752_ = lean_unsigned_to_nat(0u);
v___x_2753_ = lean_array_get_size(v_a_2704_);
v___x_2754_ = lean_nat_dec_lt(v___x_2752_, v___x_2753_);
if (v___x_2754_ == 0)
{
lean_dec(v_a_2691_);
lean_del_object(v___x_2684_);
goto v___jp_2705_;
}
else
{
if (v___x_2754_ == 0)
{
lean_dec(v_a_2691_);
lean_del_object(v___x_2684_);
goto v___jp_2705_;
}
else
{
size_t v___x_2755_; uint8_t v___x_2756_; uint8_t v___x_2757_; 
v___x_2755_ = lean_usize_of_nat(v___x_2753_);
v___x_2756_ = lean_unbox(v_a_2691_);
lean_dec(v_a_2691_);
v___x_2757_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v___x_2756_, v___x_2630_, v_a_2704_, v___x_2697_, v___x_2755_);
if (v___x_2757_ == 0)
{
lean_del_object(v___x_2684_);
goto v___jp_2705_;
}
else
{
lean_object* v___x_2759_; 
lean_dec(v_a_2704_);
lean_del_object(v___x_2688_);
lean_dec(v_val_2659_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 1, v___x_2673_);
lean_ctor_set(v___x_2684_, 0, v___x_2653_);
v___x_2759_ = v___x_2684_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v___x_2673_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
v_a_2641_ = v___x_2759_;
goto v___jp_2640_;
}
}
}
}
v___jp_2705_:
{
uint8_t v___x_2706_; 
v___x_2706_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_a_2704_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2708_; 
lean_dec(v_a_2704_);
lean_dec(v_val_2659_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 1, v___x_2673_);
lean_ctor_set(v___x_2688_, 0, v___x_2653_);
v___x_2708_ = v___x_2688_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v___x_2673_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
v_a_2641_ = v___x_2708_;
goto v___jp_2640_;
}
}
else
{
lean_object* v___x_2710_; 
v___x_2710_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_2624_, v_a_2704_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2743_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2713_ = v___x_2710_;
v_isShared_2714_ = v_isSharedCheck_2743_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2743_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
if (lean_obj_tag(v_a_2711_) == 1)
{
lean_object* v___x_2716_; 
lean_dec_ref_known(v_a_2711_, 1);
lean_del_object(v___x_2713_);
lean_dec(v_a_2704_);
lean_dec(v_val_2659_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 1, v___x_2673_);
lean_ctor_set(v___x_2688_, 0, v___x_2653_);
v___x_2716_ = v___x_2688_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v___x_2673_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
v_a_2641_ = v___x_2716_;
goto v___jp_2640_;
}
}
else
{
lean_object* v_fnName_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2737_; 
lean_dec(v_a_2711_);
lean_dec_ref(v___x_2623_);
v_fnName_2718_ = lean_ctor_get(v_recArgInfo_2626_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v_recArgInfo_2626_);
if (v_isSharedCheck_2737_ == 0)
{
lean_object* v_unused_2738_; lean_object* v_unused_2739_; lean_object* v_unused_2740_; lean_object* v_unused_2741_; lean_object* v_unused_2742_; 
v_unused_2738_ = lean_ctor_get(v_recArgInfo_2626_, 5);
lean_dec(v_unused_2738_);
v_unused_2739_ = lean_ctor_get(v_recArgInfo_2626_, 4);
lean_dec(v_unused_2739_);
v_unused_2740_ = lean_ctor_get(v_recArgInfo_2626_, 3);
lean_dec(v_unused_2740_);
v_unused_2741_ = lean_ctor_get(v_recArgInfo_2626_, 2);
lean_dec(v_unused_2741_);
v_unused_2742_ = lean_ctor_get(v_recArgInfo_2626_, 1);
lean_dec(v_unused_2742_);
v___x_2720_ = v_recArgInfo_2626_;
v_isShared_2721_ = v_isSharedCheck_2737_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_fnName_2718_);
lean_dec(v_recArgInfo_2626_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2737_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
size_t v_sz_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
v_sz_2722_ = lean_array_size(v_a_2704_);
v___x_2723_ = l_unsafeCast___redArg(v_a_2704_);
lean_dec(v_a_2704_);
v___x_2724_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2625_, v_sz_2722_, v___x_2697_, v___x_2723_);
v___x_2725_ = l_unsafeCast___redArg(v___x_2724_);
lean_dec_ref(v___x_2724_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 5, v_val_2659_);
lean_ctor_set(v___x_2720_, 4, v_group_2629_);
lean_ctor_set(v___x_2720_, 3, v___x_2725_);
lean_ctor_set(v___x_2720_, 2, v___x_2628_);
lean_ctor_set(v___x_2720_, 1, v___x_2627_);
v___x_2727_ = v___x_2720_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_fnName_2718_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v___x_2627_);
lean_ctor_set(v_reuseFailAlloc_2736_, 2, v___x_2628_);
lean_ctor_set(v_reuseFailAlloc_2736_, 3, v___x_2725_);
lean_ctor_set(v_reuseFailAlloc_2736_, 4, v_group_2629_);
lean_ctor_set(v_reuseFailAlloc_2736_, 5, v_val_2659_);
v___x_2727_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
v___x_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 1, v___x_2673_);
lean_ctor_set(v___x_2688_, 0, v___x_2729_);
v___x_2731_ = v___x_2688_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2729_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2673_);
v___x_2731_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
lean_object* v___x_2733_; 
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 0, v___x_2731_);
v___x_2733_ = v___x_2713_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec(v_a_2704_);
lean_del_object(v___x_2688_);
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2744_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2710_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2710_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_a_2691_);
lean_del_object(v___x_2688_);
lean_del_object(v___x_2684_);
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2761_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2703_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2703_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
}
else
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2776_; 
lean_del_object(v___x_2688_);
lean_del_object(v___x_2684_);
lean_dec(v_fst_2682_);
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2769_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2771_ = v___x_2690_;
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2690_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2774_; 
if (v_isShared_2772_ == 0)
{
v___x_2774_ = v___x_2771_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2769_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2677_);
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2780_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2679_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2679_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2788_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2676_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2676_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec_ref(v___x_2673_);
lean_dec(v_val_2659_);
lean_dec_ref(v_group_2629_);
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2627_);
lean_dec_ref(v_recArgInfo_2626_);
lean_dec_ref(v___x_2623_);
v_a_2796_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2674_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2674_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
}
}
}
}
v___jp_2654_:
{
lean_object* v___x_2656_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2653_);
v___x_2656_ = v___x_2649_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v_snd_2647_);
v___x_2656_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
}
}
}
v___jp_2640_:
{
size_t v___x_2642_; size_t v___x_2643_; 
v___x_2642_ = ((size_t)1ULL);
v___x_2643_ = lean_usize_add(v_i_2633_, v___x_2642_);
v_i_2633_ = v___x_2643_;
v_b_2634_ = v_a_2641_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed(lean_object** _args){
lean_object* v___x_2812_ = _args[0];
lean_object* v_ys_2813_ = _args[1];
lean_object* v___x_2814_ = _args[2];
lean_object* v_recArgInfo_2815_ = _args[3];
lean_object* v___x_2816_ = _args[4];
lean_object* v___x_2817_ = _args[5];
lean_object* v_group_2818_ = _args[6];
lean_object* v___x_2819_ = _args[7];
lean_object* v_as_2820_ = _args[8];
lean_object* v_sz_2821_ = _args[9];
lean_object* v_i_2822_ = _args[10];
lean_object* v_b_2823_ = _args[11];
lean_object* v___y_2824_ = _args[12];
lean_object* v___y_2825_ = _args[13];
lean_object* v___y_2826_ = _args[14];
lean_object* v___y_2827_ = _args[15];
lean_object* v___y_2828_ = _args[16];
_start:
{
size_t v_sz_boxed_2829_; size_t v_i_boxed_2830_; lean_object* v_res_2831_; 
v_sz_boxed_2829_ = lean_unbox_usize(v_sz_2821_);
lean_dec(v_sz_2821_);
v_i_boxed_2830_ = lean_unbox_usize(v_i_2822_);
lean_dec(v_i_2822_);
v_res_2831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(v___x_2812_, v_ys_2813_, v___x_2814_, v_recArgInfo_2815_, v___x_2816_, v___x_2817_, v_group_2818_, v___x_2819_, v_as_2820_, v_sz_boxed_2829_, v_i_boxed_2830_, v_b_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec_ref(v_as_2820_);
lean_dec(v___x_2819_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_ys_2813_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(lean_object* v___x_2832_, lean_object* v___x_2833_, lean_object* v_ys_2834_, lean_object* v___x_2835_, lean_object* v_recArgInfo_2836_, lean_object* v___x_2837_, lean_object* v___x_2838_, lean_object* v_group_2839_, lean_object* v_as_2840_, size_t v_sz_2841_, size_t v_i_2842_, lean_object* v_b_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v_a_2850_; uint8_t v___x_2854_; 
v___x_2854_ = lean_usize_dec_lt(v_i_2842_, v_sz_2841_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v_b_2843_);
return v___x_2855_;
}
else
{
lean_object* v_snd_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_3019_; 
v_snd_2856_ = lean_ctor_get(v_b_2843_, 1);
v_isSharedCheck_3019_ = !lean_is_exclusive(v_b_2843_);
if (v_isSharedCheck_3019_ == 0)
{
lean_object* v_unused_3020_; 
v_unused_3020_ = lean_ctor_get(v_b_2843_, 0);
lean_dec(v_unused_3020_);
v___x_2858_ = v_b_2843_;
v_isShared_2859_ = v_isSharedCheck_3019_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_snd_2856_);
lean_dec(v_b_2843_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_3019_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v_next_2860_; lean_object* v_upperBound_2861_; lean_object* v___x_2862_; 
v_next_2860_ = lean_ctor_get(v_snd_2856_, 0);
lean_inc(v_next_2860_);
v_upperBound_2861_ = lean_ctor_get(v_snd_2856_, 1);
v___x_2862_ = lean_box(0);
if (lean_obj_tag(v_next_2860_) == 0)
{
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
goto v___jp_2863_;
}
else
{
lean_object* v_val_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_3018_; 
v_val_2868_ = lean_ctor_get(v_next_2860_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v_next_2860_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_2870_ = v_next_2860_;
v_isShared_2871_ = v_isSharedCheck_3018_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_val_2868_);
lean_dec(v_next_2860_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_3018_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
uint8_t v___x_2872_; 
v___x_2872_ = lean_nat_dec_lt(v_val_2868_, v_upperBound_2861_);
if (v___x_2872_ == 0)
{
lean_del_object(v___x_2870_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
goto v___jp_2863_;
}
else
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_3015_; 
lean_inc(v_upperBound_2861_);
lean_del_object(v___x_2858_);
v_isSharedCheck_3015_ = !lean_is_exclusive(v_snd_2856_);
if (v_isSharedCheck_3015_ == 0)
{
lean_object* v_unused_3016_; lean_object* v_unused_3017_; 
v_unused_3016_ = lean_ctor_get(v_snd_2856_, 1);
lean_dec(v_unused_3016_);
v_unused_3017_ = lean_ctor_get(v_snd_2856_, 0);
lean_dec(v_unused_3017_);
v___x_2874_ = v_snd_2856_;
v_isShared_2875_ = v_isSharedCheck_3015_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v_snd_2856_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_3015_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v_a_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2880_; 
v_a_2876_ = lean_array_uget_borrowed(v_as_2840_, v_i_2842_);
v___x_2877_ = lean_unsigned_to_nat(1u);
v___x_2878_ = lean_nat_add(v_val_2868_, v___x_2877_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 0, v___x_2878_);
v___x_2880_ = v___x_2870_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_3014_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2882_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2880_);
v___x_2882_ = v___x_2874_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_upperBound_2861_);
v___x_2882_ = v_reuseFailAlloc_3013_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
lean_inc(v___y_2847_);
lean_inc_ref(v___y_2846_);
lean_inc(v___y_2845_);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v___x_2832_);
v___x_2883_ = lean_infer_type(v___x_2832_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2885_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v___x_2885_ = l_Lean_Meta_whnfD(v_a_2884_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; uint8_t v___x_2887_; lean_object* v___x_2888_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2885_, 1);
v___x_2887_ = 0;
lean_inc(v_a_2876_);
v___x_2888_ = l_Lean_Meta_forallMetaTelescope(v_a_2876_, v___x_2887_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v_snd_2890_; lean_object* v_fst_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2988_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v_snd_2890_ = lean_ctor_get(v_a_2889_, 1);
v_fst_2891_ = lean_ctor_get(v_a_2889_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_a_2889_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2893_ = v_a_2889_;
v_isShared_2894_ = v_isSharedCheck_2988_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_snd_2890_);
lean_inc(v_fst_2891_);
lean_dec(v_a_2889_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2988_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v_snd_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2986_; 
v_snd_2895_ = lean_ctor_get(v_snd_2890_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_snd_2890_);
if (v_isSharedCheck_2986_ == 0)
{
lean_object* v_unused_2987_; 
v_unused_2987_ = lean_ctor_get(v_snd_2890_, 0);
lean_dec(v_unused_2987_);
v___x_2897_ = v_snd_2890_;
v_isShared_2898_ = v_isSharedCheck_2986_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_snd_2895_);
lean_dec(v_snd_2890_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2986_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2899_; 
v___x_2899_ = l_Lean_Meta_isExprDefEqGuarded(v_snd_2895_, v_a_2886_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; uint8_t v___x_2901_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2899_, 1);
v___x_2901_ = lean_unbox(v_a_2900_);
if (v___x_2901_ == 0)
{
lean_object* v___x_2903_; 
lean_dec(v_a_2900_);
lean_del_object(v___x_2893_);
lean_dec(v_fst_2891_);
lean_dec(v_val_2868_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2882_);
lean_ctor_set(v___x_2897_, 0, v___x_2862_);
v___x_2903_ = v___x_2897_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2904_, 1, v___x_2882_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
v_a_2850_ = v___x_2903_;
goto v___jp_2849_;
}
}
else
{
size_t v_sz_2905_; size_t v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_7687__overap_2911_; lean_object* v___x_2912_; 
v_sz_2905_ = lean_array_size(v_fst_2891_);
v___x_2906_ = ((size_t)0ULL);
v___x_2907_ = l_unsafeCast___redArg(v_fst_2891_);
lean_dec(v_fst_2891_);
v___x_2908_ = lean_box_usize(v_sz_2905_);
v___x_2909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed__const__1));
v___x_2910_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed), 8, 3);
lean_closure_set(v___x_2910_, 0, v___x_2908_);
lean_closure_set(v___x_2910_, 1, v___x_2909_);
lean_closure_set(v___x_2910_, 2, v___x_2907_);
v___x_7687__overap_2911_ = l_unsafeCast___redArg(v___x_2910_);
lean_dec_ref(v___x_2910_);
lean_inc(v___y_2847_);
lean_inc_ref(v___y_2846_);
lean_inc(v___y_2845_);
lean_inc_ref(v___y_2844_);
v___x_2912_ = lean_apply_5(v___x_7687__overap_2911_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, lean_box(0));
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2961_; lean_object* v___x_2962_; uint8_t v___x_2963_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
v___x_2961_ = lean_unsigned_to_nat(0u);
v___x_2962_ = lean_array_get_size(v_a_2913_);
v___x_2963_ = lean_nat_dec_lt(v___x_2961_, v___x_2962_);
if (v___x_2963_ == 0)
{
lean_dec(v_a_2900_);
lean_del_object(v___x_2893_);
goto v___jp_2914_;
}
else
{
if (v___x_2963_ == 0)
{
lean_dec(v_a_2900_);
lean_del_object(v___x_2893_);
goto v___jp_2914_;
}
else
{
size_t v___x_2964_; uint8_t v___x_2965_; uint8_t v___x_2966_; 
v___x_2964_ = lean_usize_of_nat(v___x_2962_);
v___x_2965_ = lean_unbox(v_a_2900_);
lean_dec(v_a_2900_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v___x_2965_, v___x_2833_, v_a_2913_, v___x_2906_, v___x_2964_);
if (v___x_2966_ == 0)
{
lean_del_object(v___x_2893_);
goto v___jp_2914_;
}
else
{
lean_object* v___x_2968_; 
lean_dec(v_a_2913_);
lean_del_object(v___x_2897_);
lean_dec(v_val_2868_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 1, v___x_2882_);
lean_ctor_set(v___x_2893_, 0, v___x_2862_);
v___x_2968_ = v___x_2893_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v___x_2882_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
v_a_2850_ = v___x_2968_;
goto v___jp_2849_;
}
}
}
}
v___jp_2914_:
{
uint8_t v___x_2915_; 
v___x_2915_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_a_2913_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2917_; 
lean_dec(v_a_2913_);
lean_dec(v_val_2868_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2882_);
lean_ctor_set(v___x_2897_, 0, v___x_2862_);
v___x_2917_ = v___x_2897_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2918_, 1, v___x_2882_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
v_a_2850_ = v___x_2917_;
goto v___jp_2849_;
}
}
else
{
lean_object* v___x_2919_; 
v___x_2919_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_2834_, v_a_2913_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2952_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2922_ = v___x_2919_;
v_isShared_2923_ = v_isSharedCheck_2952_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2919_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2952_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
if (lean_obj_tag(v_a_2920_) == 1)
{
lean_object* v___x_2925_; 
lean_dec_ref_known(v_a_2920_, 1);
lean_del_object(v___x_2922_);
lean_dec(v_a_2913_);
lean_dec(v_val_2868_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2882_);
lean_ctor_set(v___x_2897_, 0, v___x_2862_);
v___x_2925_ = v___x_2897_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2926_, 1, v___x_2882_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
v_a_2850_ = v___x_2925_;
goto v___jp_2849_;
}
}
else
{
lean_object* v_fnName_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2946_; 
lean_dec(v_a_2920_);
lean_dec_ref(v___x_2832_);
v_fnName_2927_ = lean_ctor_get(v_recArgInfo_2836_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_recArgInfo_2836_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; lean_object* v_unused_2948_; lean_object* v_unused_2949_; lean_object* v_unused_2950_; lean_object* v_unused_2951_; 
v_unused_2947_ = lean_ctor_get(v_recArgInfo_2836_, 5);
lean_dec(v_unused_2947_);
v_unused_2948_ = lean_ctor_get(v_recArgInfo_2836_, 4);
lean_dec(v_unused_2948_);
v_unused_2949_ = lean_ctor_get(v_recArgInfo_2836_, 3);
lean_dec(v_unused_2949_);
v_unused_2950_ = lean_ctor_get(v_recArgInfo_2836_, 2);
lean_dec(v_unused_2950_);
v_unused_2951_ = lean_ctor_get(v_recArgInfo_2836_, 1);
lean_dec(v_unused_2951_);
v___x_2929_ = v_recArgInfo_2836_;
v_isShared_2930_ = v_isSharedCheck_2946_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_fnName_2927_);
lean_dec(v_recArgInfo_2836_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2946_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
size_t v_sz_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2936_; 
v_sz_2931_ = lean_array_size(v_a_2913_);
v___x_2932_ = l_unsafeCast___redArg(v_a_2913_);
lean_dec(v_a_2913_);
v___x_2933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2835_, v_sz_2931_, v___x_2906_, v___x_2932_);
v___x_2934_ = l_unsafeCast___redArg(v___x_2933_);
lean_dec_ref(v___x_2933_);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 5, v_val_2868_);
lean_ctor_set(v___x_2929_, 4, v_group_2839_);
lean_ctor_set(v___x_2929_, 3, v___x_2934_);
lean_ctor_set(v___x_2929_, 2, v___x_2838_);
lean_ctor_set(v___x_2929_, 1, v___x_2837_);
v___x_2936_ = v___x_2929_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_fnName_2927_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v___x_2837_);
lean_ctor_set(v_reuseFailAlloc_2945_, 2, v___x_2838_);
lean_ctor_set(v_reuseFailAlloc_2945_, 3, v___x_2934_);
lean_ctor_set(v_reuseFailAlloc_2945_, 4, v_group_2839_);
lean_ctor_set(v_reuseFailAlloc_2945_, 5, v_val_2868_);
v___x_2936_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2940_; 
v___x_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
v___x_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v___x_2882_);
lean_ctor_set(v___x_2897_, 0, v___x_2938_);
v___x_2940_ = v___x_2897_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2944_, 1, v___x_2882_);
v___x_2940_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
lean_object* v___x_2942_; 
if (v_isShared_2923_ == 0)
{
lean_ctor_set(v___x_2922_, 0, v___x_2940_);
v___x_2942_ = v___x_2922_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v___x_2940_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec(v_a_2913_);
lean_del_object(v___x_2897_);
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_2953_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2919_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2919_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2977_; 
lean_dec(v_a_2900_);
lean_del_object(v___x_2897_);
lean_del_object(v___x_2893_);
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_2970_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2972_ = v___x_2912_;
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2912_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
}
else
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
lean_del_object(v___x_2897_);
lean_del_object(v___x_2893_);
lean_dec(v_fst_2891_);
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_2978_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2899_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2899_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec(v_a_2886_);
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_2989_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2888_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2888_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
else
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_2997_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2885_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2885_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
lean_dec_ref(v___x_2882_);
lean_dec(v_val_2868_);
lean_dec_ref(v_group_2839_);
lean_dec(v___x_2838_);
lean_dec_ref(v___x_2837_);
lean_dec_ref(v_recArgInfo_2836_);
lean_dec_ref(v___x_2832_);
v_a_3005_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_2883_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_2883_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
}
}
}
}
}
v___jp_2863_:
{
lean_object* v___x_2865_; 
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v___x_2862_);
v___x_2865_ = v___x_2858_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_snd_2856_);
v___x_2865_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
lean_object* v___x_2866_; 
v___x_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
return v___x_2866_;
}
}
}
}
v___jp_2849_:
{
size_t v___x_2851_; size_t v___x_2852_; lean_object* v___x_2853_; 
v___x_2851_ = ((size_t)1ULL);
v___x_2852_ = lean_usize_add(v_i_2842_, v___x_2851_);
v___x_2853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(v___x_2832_, v_ys_2834_, v___x_2835_, v_recArgInfo_2836_, v___x_2837_, v___x_2838_, v_group_2839_, v___x_2833_, v_as_2840_, v_sz_2841_, v___x_2852_, v_a_2850_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
return v___x_2853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4___boxed(lean_object** _args){
lean_object* v___x_3021_ = _args[0];
lean_object* v___x_3022_ = _args[1];
lean_object* v_ys_3023_ = _args[2];
lean_object* v___x_3024_ = _args[3];
lean_object* v_recArgInfo_3025_ = _args[4];
lean_object* v___x_3026_ = _args[5];
lean_object* v___x_3027_ = _args[6];
lean_object* v_group_3028_ = _args[7];
lean_object* v_as_3029_ = _args[8];
lean_object* v_sz_3030_ = _args[9];
lean_object* v_i_3031_ = _args[10];
lean_object* v_b_3032_ = _args[11];
lean_object* v___y_3033_ = _args[12];
lean_object* v___y_3034_ = _args[13];
lean_object* v___y_3035_ = _args[14];
lean_object* v___y_3036_ = _args[15];
lean_object* v___y_3037_ = _args[16];
_start:
{
size_t v_sz_boxed_3038_; size_t v_i_boxed_3039_; lean_object* v_res_3040_; 
v_sz_boxed_3038_ = lean_unbox_usize(v_sz_3030_);
lean_dec(v_sz_3030_);
v_i_boxed_3039_ = lean_unbox_usize(v_i_3031_);
lean_dec(v_i_3031_);
v_res_3040_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(v___x_3021_, v___x_3022_, v_ys_3023_, v___x_3024_, v_recArgInfo_3025_, v___x_3026_, v___x_3027_, v_group_3028_, v_as_3029_, v_sz_boxed_3038_, v_i_boxed_3039_, v_b_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3033_);
lean_dec_ref(v_as_3029_);
lean_dec_ref(v___x_3024_);
lean_dec_ref(v_ys_3023_);
lean_dec(v___x_3022_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(lean_object* v_group_3041_, lean_object* v_fixedParamPerm_3042_, lean_object* v_xs_3043_, lean_object* v___x_3044_, lean_object* v_recArgPos_3045_, lean_object* v_a_3046_, lean_object* v___x_3047_, lean_object* v___x_3048_, lean_object* v_ys_3049_, lean_object* v_x_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_){
_start:
{
lean_object* v_toIndGroupInfo_3056_; lean_object* v_all_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3095_; 
v_toIndGroupInfo_3056_ = lean_ctor_get(v_group_3041_, 0);
lean_inc_ref(v_toIndGroupInfo_3056_);
v_all_3057_ = lean_ctor_get(v_toIndGroupInfo_3056_, 0);
lean_inc_ref(v_ys_3049_);
lean_inc_ref(v_fixedParamPerm_3042_);
v___x_3058_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_3042_, v_xs_3043_, v_ys_3049_);
v___x_3059_ = lean_array_get(v___x_3044_, v___x_3058_, v_recArgPos_3045_);
v___x_3060_ = lean_array_get_size(v_all_3057_);
v___x_3061_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_3056_);
v_isSharedCheck_3095_ = !lean_is_exclusive(v_toIndGroupInfo_3056_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; lean_object* v_unused_3097_; 
v_unused_3096_ = lean_ctor_get(v_toIndGroupInfo_3056_, 1);
lean_dec(v_unused_3096_);
v_unused_3097_ = lean_ctor_get(v_toIndGroupInfo_3056_, 0);
lean_dec(v_unused_3097_);
v___x_3063_ = v_toIndGroupInfo_3056_;
v_isShared_3064_ = v_isSharedCheck_3095_;
goto v_resetjp_3062_;
}
else
{
lean_dec(v_toIndGroupInfo_3056_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3095_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3067_; 
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3060_);
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 1, v___x_3061_);
lean_ctor_set(v___x_3063_, 0, v___x_3065_);
v___x_3067_ = v___x_3063_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3065_);
lean_ctor_set(v_reuseFailAlloc_3094_, 1, v___x_3061_);
v___x_3067_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; size_t v_sz_3070_; size_t v___x_3071_; lean_object* v___x_3072_; 
v___x_3068_ = lean_box(0);
v___x_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
lean_ctor_set(v___x_3069_, 1, v___x_3067_);
v_sz_3070_ = lean_array_size(v_a_3046_);
v___x_3071_ = ((size_t)0ULL);
v___x_3072_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(v___x_3059_, v___x_3047_, v_ys_3049_, v___x_3058_, v___x_3048_, v_fixedParamPerm_3042_, v_recArgPos_3045_, v_group_3041_, v_a_3046_, v_sz_3070_, v___x_3071_, v___x_3069_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
lean_dec_ref(v___x_3058_);
lean_dec_ref(v_ys_3049_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3085_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3075_ = v___x_3072_;
v_isShared_3076_ = v_isSharedCheck_3085_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3072_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3085_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v_fst_3077_; 
v_fst_3077_ = lean_ctor_get(v_a_3073_, 0);
lean_inc(v_fst_3077_);
lean_dec(v_a_3073_);
if (lean_obj_tag(v_fst_3077_) == 0)
{
lean_object* v___x_3079_; 
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v___x_3068_);
v___x_3079_ = v___x_3075_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___x_3068_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
else
{
lean_object* v_val_3081_; lean_object* v___x_3083_; 
v_val_3081_ = lean_ctor_get(v_fst_3077_, 0);
lean_inc(v_val_3081_);
lean_dec_ref_known(v_fst_3077_, 1);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v_val_3081_);
v___x_3083_ = v___x_3075_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_val_3081_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
v_a_3086_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3072_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3072_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed(lean_object* v_group_3098_, lean_object* v_fixedParamPerm_3099_, lean_object* v_xs_3100_, lean_object* v___x_3101_, lean_object* v_recArgPos_3102_, lean_object* v_a_3103_, lean_object* v___x_3104_, lean_object* v___x_3105_, lean_object* v_ys_3106_, lean_object* v_x_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(v_group_3098_, v_fixedParamPerm_3099_, v_xs_3100_, v___x_3101_, v_recArgPos_3102_, v_a_3103_, v___x_3104_, v___x_3105_, v_ys_3106_, v_x_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec_ref(v_x_3107_);
lean_dec(v___x_3104_);
lean_dec_ref(v_a_3103_);
lean_dec_ref(v___x_3101_);
lean_dec_ref(v_xs_3100_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(lean_object* v_group_3114_, lean_object* v_a_3115_, lean_object* v_xs_3116_, lean_object* v_value_3117_, lean_object* v_as_3118_, size_t v_i_3119_, size_t v_stop_3120_, lean_object* v_b_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v_a_3128_; lean_object* v_val_3133_; uint8_t v___x_3135_; 
v___x_3135_ = lean_usize_dec_eq(v_i_3119_, v_stop_3120_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; lean_object* v_fixedParamPerm_3137_; lean_object* v_recArgPos_3138_; lean_object* v_indGroupInst_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3136_ = lean_array_uget_borrowed(v_as_3118_, v_i_3119_);
v_fixedParamPerm_3137_ = lean_ctor_get(v___x_3136_, 1);
v_recArgPos_3138_ = lean_ctor_get(v___x_3136_, 2);
v_indGroupInst_3139_ = lean_ctor_get(v___x_3136_, 4);
v___x_3140_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_indGroupInst_3139_);
lean_inc_ref(v_group_3114_);
v___x_3141_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq(v_group_3114_, v_indGroupInst_3139_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; uint8_t v___x_3143_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v___x_3143_ = lean_unbox(v_a_3142_);
lean_dec(v_a_3142_);
if (v___x_3143_ == 0)
{
lean_object* v___x_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; 
v___x_3144_ = lean_array_get_size(v_a_3115_);
v___x_3145_ = lean_unsigned_to_nat(0u);
v___x_3146_ = lean_nat_dec_eq(v___x_3144_, v___x_3145_);
if (v___x_3146_ == 0)
{
lean_object* v___f_3147_; lean_object* v___x_3148_; 
lean_inc(v___x_3136_);
lean_inc_ref(v_a_3115_);
lean_inc(v_recArgPos_3138_);
lean_inc_ref(v_xs_3116_);
lean_inc_ref(v_fixedParamPerm_3137_);
lean_inc_ref(v_group_3114_);
v___f_3147_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3147_, 0, v_group_3114_);
lean_closure_set(v___f_3147_, 1, v_fixedParamPerm_3137_);
lean_closure_set(v___f_3147_, 2, v_xs_3116_);
lean_closure_set(v___f_3147_, 3, v___x_3140_);
lean_closure_set(v___f_3147_, 4, v_recArgPos_3138_);
lean_closure_set(v___f_3147_, 5, v_a_3115_);
lean_closure_set(v___f_3147_, 6, v___x_3144_);
lean_closure_set(v___f_3147_, 7, v___x_3136_);
lean_inc_ref(v_value_3117_);
v___x_3148_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_3117_, v___f_3147_, v___x_3146_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3148_, 1);
if (lean_obj_tag(v_a_3149_) == 0)
{
v_a_3128_ = v_b_3121_;
goto v___jp_3127_;
}
else
{
lean_object* v_val_3150_; 
v_val_3150_ = lean_ctor_get(v_a_3149_, 0);
lean_inc(v_val_3150_);
lean_dec_ref_known(v_a_3149_, 1);
v_val_3133_ = v_val_3150_;
goto v___jp_3132_;
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec_ref(v_b_3121_);
lean_dec_ref(v_value_3117_);
lean_dec_ref(v_xs_3116_);
lean_dec_ref(v_a_3115_);
lean_dec_ref(v_group_3114_);
v_a_3151_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3148_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3148_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
}
else
{
v_a_3128_ = v_b_3121_;
goto v___jp_3127_;
}
}
else
{
lean_inc(v___x_3136_);
v_val_3133_ = v___x_3136_;
goto v___jp_3132_;
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3166_; 
lean_dec_ref(v_b_3121_);
lean_dec_ref(v_value_3117_);
lean_dec_ref(v_xs_3116_);
lean_dec_ref(v_a_3115_);
lean_dec_ref(v_group_3114_);
v_a_3159_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3161_ = v___x_3141_;
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3141_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3164_; 
if (v_isShared_3162_ == 0)
{
v___x_3164_ = v___x_3161_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3159_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
}
else
{
lean_object* v___x_3167_; 
lean_dec_ref(v_value_3117_);
lean_dec_ref(v_xs_3116_);
lean_dec_ref(v_a_3115_);
lean_dec_ref(v_group_3114_);
v___x_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3167_, 0, v_b_3121_);
return v___x_3167_;
}
v___jp_3127_:
{
size_t v___x_3129_; size_t v___x_3130_; 
v___x_3129_ = ((size_t)1ULL);
v___x_3130_ = lean_usize_add(v_i_3119_, v___x_3129_);
v_i_3119_ = v___x_3130_;
v_b_3121_ = v_a_3128_;
goto _start;
}
v___jp_3132_:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_array_push(v_b_3121_, v_val_3133_);
v_a_3128_ = v___x_3134_;
goto v___jp_3127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___boxed(lean_object* v_group_3168_, lean_object* v_a_3169_, lean_object* v_xs_3170_, lean_object* v_value_3171_, lean_object* v_as_3172_, lean_object* v_i_3173_, lean_object* v_stop_3174_, lean_object* v_b_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
size_t v_i_boxed_3181_; size_t v_stop_boxed_3182_; lean_object* v_res_3183_; 
v_i_boxed_3181_ = lean_unbox_usize(v_i_3173_);
lean_dec(v_i_3173_);
v_stop_boxed_3182_ = lean_unbox_usize(v_stop_3174_);
lean_dec(v_stop_3174_);
v_res_3183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3168_, v_a_3169_, v_xs_3170_, v_value_3171_, v_as_3172_, v_i_boxed_3181_, v_stop_boxed_3182_, v_b_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
lean_dec_ref(v_as_3172_);
return v_res_3183_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(lean_object* v_group_3184_, lean_object* v_a_3185_, lean_object* v_xs_3186_, lean_object* v_value_3187_, lean_object* v_as_3188_, lean_object* v_start_3189_, lean_object* v_stop_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v___x_3196_; uint8_t v___x_3197_; 
v___x_3196_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4));
v___x_3197_ = lean_nat_dec_lt(v_start_3189_, v_stop_3190_);
if (v___x_3197_ == 0)
{
lean_object* v___x_3198_; 
lean_dec_ref(v_value_3187_);
lean_dec_ref(v_xs_3186_);
lean_dec_ref(v_a_3185_);
lean_dec_ref(v_group_3184_);
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3196_);
return v___x_3198_;
}
else
{
lean_object* v___x_3199_; uint8_t v___x_3200_; 
v___x_3199_ = lean_array_get_size(v_as_3188_);
v___x_3200_ = lean_nat_dec_le(v_stop_3190_, v___x_3199_);
if (v___x_3200_ == 0)
{
uint8_t v___x_3201_; 
v___x_3201_ = lean_nat_dec_lt(v_start_3189_, v___x_3199_);
if (v___x_3201_ == 0)
{
lean_object* v___x_3202_; 
lean_dec_ref(v_value_3187_);
lean_dec_ref(v_xs_3186_);
lean_dec_ref(v_a_3185_);
lean_dec_ref(v_group_3184_);
v___x_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3196_);
return v___x_3202_;
}
else
{
size_t v___x_3203_; size_t v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = lean_usize_of_nat(v_start_3189_);
v___x_3204_ = lean_usize_of_nat(v___x_3199_);
v___x_3205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3184_, v_a_3185_, v_xs_3186_, v_value_3187_, v_as_3188_, v___x_3203_, v___x_3204_, v___x_3196_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
return v___x_3205_;
}
}
else
{
size_t v___x_3206_; size_t v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_usize_of_nat(v_start_3189_);
v___x_3207_ = lean_usize_of_nat(v_stop_3190_);
v___x_3208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3184_, v_a_3185_, v_xs_3186_, v_value_3187_, v_as_3188_, v___x_3206_, v___x_3207_, v___x_3196_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
return v___x_3208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5___boxed(lean_object* v_group_3209_, lean_object* v_a_3210_, lean_object* v_xs_3211_, lean_object* v_value_3212_, lean_object* v_as_3213_, lean_object* v_start_3214_, lean_object* v_stop_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(v_group_3209_, v_a_3210_, v_xs_3211_, v_value_3212_, v_as_3213_, v_start_3214_, v_stop_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v_stop_3215_);
lean_dec(v_start_3214_);
lean_dec_ref(v_as_3213_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup(lean_object* v_group_3222_, lean_object* v_xs_3223_, lean_object* v_value_3224_, lean_object* v_recArgInfos_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_){
_start:
{
lean_object* v___x_3231_; 
lean_inc_ref(v_group_3222_);
v___x_3231_ = l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(v_group_3222_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v___x_3233_ = lean_unsigned_to_nat(0u);
v___x_3234_ = lean_array_get_size(v_recArgInfos_3225_);
v___x_3235_ = l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(v_group_3222_, v_a_3232_, v_xs_3223_, v_value_3224_, v_recArgInfos_3225_, v___x_3233_, v___x_3234_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_);
return v___x_3235_;
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v_value_3224_);
lean_dec_ref(v_xs_3223_);
lean_dec_ref(v_group_3222_);
v_a_3236_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3231_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3231_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup___boxed(lean_object* v_group_3244_, lean_object* v_xs_3245_, lean_object* v_value_3246_, lean_object* v_recArgInfos_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lean_Elab_Structural_argsInGroup(v_group_3244_, v_xs_3245_, v_value_3246_, v_recArgInfos_3247_, v_a_3248_, v_a_3249_, v_a_3250_, v_a_3251_);
lean_dec(v_a_3251_);
lean_dec_ref(v_a_3250_);
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3248_);
lean_dec_ref(v_recArgInfos_3247_);
return v_res_3253_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_maxCombinationSize(void){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = lean_unsigned_to_nat(10u);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(lean_object* v_xss_3257_, lean_object* v_i_3258_, lean_object* v_acc_3259_){
_start:
{
lean_object* v___x_3260_; uint8_t v___x_3261_; 
v___x_3260_ = lean_array_get_size(v_xss_3257_);
v___x_3261_ = lean_nat_dec_lt(v_i_3258_, v___x_3260_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3262_ = lean_unsigned_to_nat(1u);
v___x_3263_ = lean_mk_empty_array_with_capacity(v___x_3262_);
v___x_3264_ = lean_array_push(v___x_3263_, v_acc_3259_);
return v___x_3264_;
}
else
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v___x_3265_ = lean_array_fget_borrowed(v_xss_3257_, v_i_3258_);
v___x_3266_ = lean_unsigned_to_nat(0u);
v___x_3267_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0));
v___x_3268_ = lean_array_get_size(v___x_3265_);
v___x_3269_ = lean_nat_dec_lt(v___x_3266_, v___x_3268_);
if (v___x_3269_ == 0)
{
lean_dec_ref(v_acc_3259_);
return v___x_3267_;
}
else
{
size_t v___x_3270_; size_t v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = ((size_t)0ULL);
v___x_3271_ = lean_usize_of_nat(v___x_3268_);
v___x_3272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3258_, v_acc_3259_, v_xss_3257_, v___x_3265_, v___x_3270_, v___x_3271_, v___x_3267_);
return v___x_3272_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(lean_object* v_i_3273_, lean_object* v_acc_3274_, lean_object* v_xss_3275_, lean_object* v_as_3276_, size_t v_i_3277_, size_t v_stop_3278_, lean_object* v_b_3279_){
_start:
{
uint8_t v___x_3280_; 
v___x_3280_ = lean_usize_dec_eq(v_i_3277_, v_stop_3278_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; size_t v___x_3287_; size_t v___x_3288_; 
v___x_3281_ = lean_array_uget_borrowed(v_as_3276_, v_i_3277_);
v___x_3282_ = lean_unsigned_to_nat(1u);
v___x_3283_ = lean_nat_add(v_i_3273_, v___x_3282_);
lean_inc(v___x_3281_);
lean_inc_ref(v_acc_3274_);
v___x_3284_ = lean_array_push(v_acc_3274_, v___x_3281_);
v___x_3285_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3275_, v___x_3283_, v___x_3284_);
lean_dec(v___x_3283_);
v___x_3286_ = l_Array_append___redArg(v_b_3279_, v___x_3285_);
lean_dec_ref(v___x_3285_);
v___x_3287_ = ((size_t)1ULL);
v___x_3288_ = lean_usize_add(v_i_3277_, v___x_3287_);
v_i_3277_ = v___x_3288_;
v_b_3279_ = v___x_3286_;
goto _start;
}
else
{
lean_dec_ref(v_acc_3274_);
return v_b_3279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg___boxed(lean_object* v_i_3290_, lean_object* v_acc_3291_, lean_object* v_xss_3292_, lean_object* v_as_3293_, lean_object* v_i_3294_, lean_object* v_stop_3295_, lean_object* v_b_3296_){
_start:
{
size_t v_i_boxed_3297_; size_t v_stop_boxed_3298_; lean_object* v_res_3299_; 
v_i_boxed_3297_ = lean_unbox_usize(v_i_3294_);
lean_dec(v_i_3294_);
v_stop_boxed_3298_ = lean_unbox_usize(v_stop_3295_);
lean_dec(v_stop_3295_);
v_res_3299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3290_, v_acc_3291_, v_xss_3292_, v_as_3293_, v_i_boxed_3297_, v_stop_boxed_3298_, v_b_3296_);
lean_dec_ref(v_as_3293_);
lean_dec_ref(v_xss_3292_);
lean_dec(v_i_3290_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___boxed(lean_object* v_xss_3300_, lean_object* v_i_3301_, lean_object* v_acc_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3300_, v_i_3301_, v_acc_3302_);
lean_dec(v_i_3301_);
lean_dec_ref(v_xss_3300_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(lean_object* v_00_u03b1_3304_, lean_object* v_xss_3305_, lean_object* v_i_3306_, lean_object* v_acc_3307_){
_start:
{
lean_object* v___x_3308_; 
v___x_3308_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3305_, v_i_3306_, v_acc_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___boxed(lean_object* v_00_u03b1_3309_, lean_object* v_xss_3310_, lean_object* v_i_3311_, lean_object* v_acc_3312_){
_start:
{
lean_object* v_res_3313_; 
v_res_3313_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(v_00_u03b1_3309_, v_xss_3310_, v_i_3311_, v_acc_3312_);
lean_dec(v_i_3311_);
lean_dec_ref(v_xss_3310_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(lean_object* v_00_u03b1_3314_, lean_object* v_i_3315_, lean_object* v_acc_3316_, lean_object* v_xss_3317_, lean_object* v_as_3318_, size_t v_i_3319_, size_t v_stop_3320_, lean_object* v_b_3321_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3315_, v_acc_3316_, v_xss_3317_, v_as_3318_, v_i_3319_, v_stop_3320_, v_b_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___boxed(lean_object* v_00_u03b1_3323_, lean_object* v_i_3324_, lean_object* v_acc_3325_, lean_object* v_xss_3326_, lean_object* v_as_3327_, lean_object* v_i_3328_, lean_object* v_stop_3329_, lean_object* v_b_3330_){
_start:
{
size_t v_i_boxed_3331_; size_t v_stop_boxed_3332_; lean_object* v_res_3333_; 
v_i_boxed_3331_ = lean_unbox_usize(v_i_3328_);
lean_dec(v_i_3328_);
v_stop_boxed_3332_ = lean_unbox_usize(v_stop_3329_);
lean_dec(v_stop_3329_);
v_res_3333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(v_00_u03b1_3323_, v_i_3324_, v_acc_3325_, v_xss_3326_, v_as_3327_, v_i_boxed_3331_, v_stop_boxed_3332_, v_b_3330_);
lean_dec_ref(v_as_3327_);
lean_dec_ref(v_xss_3326_);
lean_dec(v_i_3324_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(lean_object* v_as_3334_, size_t v_i_3335_, size_t v_stop_3336_, lean_object* v_b_3337_){
_start:
{
uint8_t v___x_3338_; 
v___x_3338_ = lean_usize_dec_eq(v_i_3335_, v_stop_3336_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; size_t v___x_3342_; size_t v___x_3343_; 
v___x_3339_ = lean_array_uget_borrowed(v_as_3334_, v_i_3335_);
v___x_3340_ = lean_array_get_size(v___x_3339_);
v___x_3341_ = lean_nat_mul(v_b_3337_, v___x_3340_);
lean_dec(v_b_3337_);
v___x_3342_ = ((size_t)1ULL);
v___x_3343_ = lean_usize_add(v_i_3335_, v___x_3342_);
v_i_3335_ = v___x_3343_;
v_b_3337_ = v___x_3341_;
goto _start;
}
else
{
return v_b_3337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg___boxed(lean_object* v_as_3345_, lean_object* v_i_3346_, lean_object* v_stop_3347_, lean_object* v_b_3348_){
_start:
{
size_t v_i_boxed_3349_; size_t v_stop_boxed_3350_; lean_object* v_res_3351_; 
v_i_boxed_3349_ = lean_unbox_usize(v_i_3346_);
lean_dec(v_i_3346_);
v_stop_boxed_3350_ = lean_unbox_usize(v_stop_3347_);
lean_dec(v_stop_3347_);
v_res_3351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_as_3345_, v_i_boxed_3349_, v_stop_boxed_3350_, v_b_3348_);
lean_dec_ref(v_as_3345_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg(lean_object* v_xss_3352_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___y_3357_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
v___x_3353_ = lean_unsigned_to_nat(10u);
v___x_3354_ = lean_unsigned_to_nat(1u);
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3363_ = lean_array_get_size(v_xss_3352_);
v___x_3364_ = lean_nat_dec_lt(v___x_3355_, v___x_3363_);
if (v___x_3364_ == 0)
{
v___y_3357_ = v___x_3354_;
goto v___jp_3356_;
}
else
{
uint8_t v___x_3365_; 
v___x_3365_ = lean_nat_dec_le(v___x_3363_, v___x_3363_);
if (v___x_3365_ == 0)
{
if (v___x_3364_ == 0)
{
v___y_3357_ = v___x_3354_;
goto v___jp_3356_;
}
else
{
size_t v___x_3366_; size_t v___x_3367_; lean_object* v___x_3368_; 
v___x_3366_ = ((size_t)0ULL);
v___x_3367_ = lean_usize_of_nat(v___x_3363_);
v___x_3368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_xss_3352_, v___x_3366_, v___x_3367_, v___x_3354_);
v___y_3357_ = v___x_3368_;
goto v___jp_3356_;
}
}
else
{
size_t v___x_3369_; size_t v___x_3370_; lean_object* v___x_3371_; 
v___x_3369_ = ((size_t)0ULL);
v___x_3370_ = lean_usize_of_nat(v___x_3363_);
v___x_3371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_xss_3352_, v___x_3369_, v___x_3370_, v___x_3354_);
v___y_3357_ = v___x_3371_;
goto v___jp_3356_;
}
}
v___jp_3356_:
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_nat_dec_lt(v___x_3353_, v___y_3357_);
lean_dec(v___y_3357_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3359_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
v___x_3360_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3352_, v___x_3355_, v___x_3359_);
v___x_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
return v___x_3361_;
}
else
{
lean_object* v___x_3362_; 
v___x_3362_ = lean_box(0);
return v___x_3362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg___boxed(lean_object* v_xss_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l_Lean_Elab_Structural_allCombinations___redArg(v_xss_3372_);
lean_dec_ref(v_xss_3372_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations(lean_object* v_00_u03b1_3374_, lean_object* v_xss_3375_){
_start:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_Lean_Elab_Structural_allCombinations___redArg(v_xss_3375_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___boxed(lean_object* v_00_u03b1_3377_, lean_object* v_xss_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Lean_Elab_Structural_allCombinations(v_00_u03b1_3377_, v_xss_3378_);
lean_dec_ref(v_xss_3378_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(lean_object* v_00_u03b1_3380_, lean_object* v_as_3381_, size_t v_i_3382_, size_t v_stop_3383_, lean_object* v_b_3384_){
_start:
{
lean_object* v___x_3385_; 
v___x_3385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_as_3381_, v_i_3382_, v_stop_3383_, v_b_3384_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___boxed(lean_object* v_00_u03b1_3386_, lean_object* v_as_3387_, lean_object* v_i_3388_, lean_object* v_stop_3389_, lean_object* v_b_3390_){
_start:
{
size_t v_i_boxed_3391_; size_t v_stop_boxed_3392_; lean_object* v_res_3393_; 
v_i_boxed_3391_ = lean_unbox_usize(v_i_3388_);
lean_dec(v_i_3388_);
v_stop_boxed_3392_ = lean_unbox_usize(v_stop_3389_);
lean_dec(v_stop_3389_);
v_res_3393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(v_00_u03b1_3386_, v_as_3387_, v_i_boxed_3391_, v_stop_boxed_3392_, v_b_3390_);
lean_dec_ref(v_as_3387_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(lean_object* v_as_3394_, size_t v_i_3395_, size_t v_stop_3396_, lean_object* v_b_3397_){
_start:
{
uint8_t v___x_3398_; 
v___x_3398_ = lean_usize_dec_eq(v_i_3395_, v_stop_3396_);
if (v___x_3398_ == 0)
{
lean_object* v___x_3399_; lean_object* v___x_3400_; size_t v___x_3401_; size_t v___x_3402_; 
v___x_3399_ = lean_array_uget_borrowed(v_as_3394_, v_i_3395_);
v___x_3400_ = l_Array_append___redArg(v_b_3397_, v___x_3399_);
v___x_3401_ = ((size_t)1ULL);
v___x_3402_ = lean_usize_add(v_i_3395_, v___x_3401_);
v_i_3395_ = v___x_3402_;
v_b_3397_ = v___x_3400_;
goto _start;
}
else
{
return v_b_3397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7___boxed(lean_object* v_as_3404_, lean_object* v_i_3405_, lean_object* v_stop_3406_, lean_object* v_b_3407_){
_start:
{
size_t v_i_boxed_3408_; size_t v_stop_boxed_3409_; lean_object* v_res_3410_; 
v_i_boxed_3408_ = lean_unbox_usize(v_i_3405_);
lean_dec(v_i_3405_);
v_stop_boxed_3409_ = lean_unbox_usize(v_stop_3406_);
lean_dec(v_stop_3406_);
v_res_3410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v_as_3404_, v_i_boxed_3408_, v_stop_boxed_3409_, v_b_3407_);
lean_dec_ref(v_as_3404_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(lean_object* v_a_3411_, lean_object* v_a_3412_){
_start:
{
if (lean_obj_tag(v_a_3411_) == 0)
{
lean_object* v___x_3413_; 
v___x_3413_ = l_List_reverse___redArg(v_a_3412_);
return v___x_3413_;
}
else
{
lean_object* v_head_3414_; lean_object* v_tail_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3425_; 
v_head_3414_ = lean_ctor_get(v_a_3411_, 0);
v_tail_3415_ = lean_ctor_get(v_a_3411_, 1);
v_isSharedCheck_3425_ = !lean_is_exclusive(v_a_3411_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3417_ = v_a_3411_;
v_isShared_3418_ = v_isSharedCheck_3425_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_tail_3415_);
lean_inc(v_head_3414_);
lean_dec(v_a_3411_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3425_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3422_; 
v___x_3419_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3414_);
v___x_3420_ = l_Lean_MessageData_ofFormat(v___x_3419_);
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 1, v_a_3412_);
lean_ctor_set(v___x_3417_, 0, v___x_3420_);
v___x_3422_ = v___x_3417_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3420_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v_a_3412_);
v___x_3422_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
v_a_3411_ = v_tail_3415_;
v_a_3412_ = v___x_3422_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(size_t v_sz_3426_, size_t v_i_3427_, lean_object* v_bs_3428_){
_start:
{
uint8_t v___x_3429_; 
v___x_3429_ = lean_usize_dec_lt(v_i_3427_, v_sz_3426_);
if (v___x_3429_ == 0)
{
lean_object* v___x_3430_; 
v___x_3430_ = l_unsafeCast___redArg(v_bs_3428_);
lean_dec_ref(v_bs_3428_);
return v___x_3430_;
}
else
{
lean_object* v_v_3431_; lean_object* v___x_3432_; lean_object* v_bs_x27_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; size_t v___x_3436_; size_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v_v_3431_ = lean_array_uget(v_bs_3428_, v_i_3427_);
v___x_3432_ = lean_unsigned_to_nat(0u);
v_bs_x27_3433_ = lean_array_uset(v_bs_3428_, v_i_3427_, v___x_3432_);
v___x_3434_ = l_unsafeCast___redArg(v_v_3431_);
lean_dec(v_v_3431_);
v___x_3435_ = l_Lean_Elab_Structural_nonIndicesFirst(v___x_3434_);
lean_dec(v___x_3434_);
v___x_3436_ = ((size_t)1ULL);
v___x_3437_ = lean_usize_add(v_i_3427_, v___x_3436_);
v___x_3438_ = l_unsafeCast___redArg(v___x_3435_);
lean_dec_ref(v___x_3435_);
v___x_3439_ = lean_array_uset(v_bs_x27_3433_, v_i_3427_, v___x_3438_);
v_i_3427_ = v___x_3437_;
v_bs_3428_ = v___x_3439_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1___boxed(lean_object* v_sz_3441_, lean_object* v_i_3442_, lean_object* v_bs_3443_){
_start:
{
size_t v_sz_boxed_3444_; size_t v_i_boxed_3445_; lean_object* v_res_3446_; 
v_sz_boxed_3444_ = lean_unbox_usize(v_sz_3441_);
lean_dec(v_sz_3441_);
v_i_boxed_3445_ = lean_unbox_usize(v_i_3442_);
lean_dec(v_i_3442_);
v_res_3446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(v_sz_boxed_3444_, v_i_boxed_3445_, v_bs_3443_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(lean_object* v_xs_3447_, lean_object* v_as_3448_, size_t v_sz_3449_, size_t v_i_3450_, lean_object* v_b_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
uint8_t v___x_3457_; 
v___x_3457_ = lean_usize_dec_lt(v_i_3450_, v_sz_3449_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; 
lean_dec_ref(v_xs_3447_);
v___x_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3458_, 0, v_b_3451_);
return v___x_3458_;
}
else
{
lean_object* v_snd_3459_; lean_object* v_snd_3460_; lean_object* v_snd_3461_; lean_object* v_snd_3462_; lean_object* v_fst_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3607_; 
v_snd_3459_ = lean_ctor_get(v_b_3451_, 1);
lean_inc(v_snd_3459_);
v_snd_3460_ = lean_ctor_get(v_snd_3459_, 1);
lean_inc(v_snd_3460_);
v_snd_3461_ = lean_ctor_get(v_snd_3460_, 1);
lean_inc(v_snd_3461_);
v_snd_3462_ = lean_ctor_get(v_snd_3461_, 1);
lean_inc(v_snd_3462_);
v_fst_3463_ = lean_ctor_get(v_b_3451_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v_b_3451_);
if (v_isSharedCheck_3607_ == 0)
{
lean_object* v_unused_3608_; 
v_unused_3608_ = lean_ctor_get(v_b_3451_, 1);
lean_dec(v_unused_3608_);
v___x_3465_ = v_b_3451_;
v_isShared_3466_ = v_isSharedCheck_3607_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_fst_3463_);
lean_dec(v_b_3451_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3607_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v_fst_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3605_; 
v_fst_3467_ = lean_ctor_get(v_snd_3459_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_snd_3459_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; 
v_unused_3606_ = lean_ctor_get(v_snd_3459_, 1);
lean_dec(v_unused_3606_);
v___x_3469_ = v_snd_3459_;
v_isShared_3470_ = v_isSharedCheck_3605_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_fst_3467_);
lean_dec(v_snd_3459_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3605_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v_fst_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3603_; 
v_fst_3471_ = lean_ctor_get(v_snd_3460_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v_snd_3460_);
if (v_isSharedCheck_3603_ == 0)
{
lean_object* v_unused_3604_; 
v_unused_3604_ = lean_ctor_get(v_snd_3460_, 1);
lean_dec(v_unused_3604_);
v___x_3473_ = v_snd_3460_;
v_isShared_3474_ = v_isSharedCheck_3603_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_fst_3471_);
lean_dec(v_snd_3460_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3603_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v_fst_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3601_; 
v_fst_3475_ = lean_ctor_get(v_snd_3461_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v_snd_3461_);
if (v_isSharedCheck_3601_ == 0)
{
lean_object* v_unused_3602_; 
v_unused_3602_ = lean_ctor_get(v_snd_3461_, 1);
lean_dec(v_unused_3602_);
v___x_3477_ = v_snd_3461_;
v_isShared_3478_ = v_isSharedCheck_3601_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_fst_3475_);
lean_dec(v_snd_3461_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3601_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v_array_3479_; lean_object* v_start_3480_; lean_object* v_stop_3481_; uint8_t v___x_3482_; 
v_array_3479_ = lean_ctor_get(v_snd_3462_, 0);
v_start_3480_ = lean_ctor_get(v_snd_3462_, 1);
v_stop_3481_ = lean_ctor_get(v_snd_3462_, 2);
v___x_3482_ = lean_nat_dec_lt(v_start_3480_, v_stop_3481_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3484_; 
lean_dec_ref(v_xs_3447_);
if (v_isShared_3478_ == 0)
{
v___x_3484_ = v___x_3477_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_fst_3475_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_snd_3462_);
v___x_3484_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3486_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v___x_3484_);
v___x_3486_ = v___x_3473_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_fst_3471_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3486_);
v___x_3488_ = v___x_3469_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_fst_3467_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3490_; 
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 1, v___x_3488_);
v___x_3490_ = v___x_3465_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_fst_3463_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3490_);
return v___x_3491_;
}
}
}
}
}
else
{
lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3597_; 
lean_inc(v_stop_3481_);
lean_inc(v_start_3480_);
lean_inc_ref(v_array_3479_);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_snd_3462_);
if (v_isSharedCheck_3597_ == 0)
{
lean_object* v_unused_3598_; lean_object* v_unused_3599_; lean_object* v_unused_3600_; 
v_unused_3598_ = lean_ctor_get(v_snd_3462_, 2);
lean_dec(v_unused_3598_);
v_unused_3599_ = lean_ctor_get(v_snd_3462_, 1);
lean_dec(v_unused_3599_);
v_unused_3600_ = lean_ctor_get(v_snd_3462_, 0);
lean_dec(v_unused_3600_);
v___x_3497_ = v_snd_3462_;
v_isShared_3498_ = v_isSharedCheck_3597_;
goto v_resetjp_3496_;
}
else
{
lean_dec(v_snd_3462_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3597_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v_array_3499_; lean_object* v_start_3500_; lean_object* v_stop_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3506_; 
v_array_3499_ = lean_ctor_get(v_fst_3475_, 0);
v_start_3500_ = lean_ctor_get(v_fst_3475_, 1);
v_stop_3501_ = lean_ctor_get(v_fst_3475_, 2);
v___x_3502_ = lean_array_fget(v_array_3479_, v_start_3480_);
v___x_3503_ = lean_unsigned_to_nat(1u);
v___x_3504_ = lean_nat_add(v_start_3480_, v___x_3503_);
lean_dec(v_start_3480_);
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 1, v___x_3504_);
v___x_3506_ = v___x_3497_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_array_3479_);
lean_ctor_set(v_reuseFailAlloc_3596_, 1, v___x_3504_);
lean_ctor_set(v_reuseFailAlloc_3596_, 2, v_stop_3481_);
v___x_3506_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
uint8_t v___x_3507_; 
v___x_3507_ = lean_nat_dec_lt(v_start_3500_, v_stop_3501_);
if (v___x_3507_ == 0)
{
lean_object* v___x_3509_; 
lean_dec(v___x_3502_);
lean_dec_ref(v_xs_3447_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3506_);
v___x_3509_ = v___x_3477_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_fst_3475_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v___x_3506_);
v___x_3509_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
lean_object* v___x_3511_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v___x_3509_);
v___x_3511_ = v___x_3473_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_fst_3471_);
lean_ctor_set(v_reuseFailAlloc_3519_, 1, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
lean_object* v___x_3513_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3511_);
v___x_3513_ = v___x_3469_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_fst_3467_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v___x_3511_);
v___x_3513_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
lean_object* v___x_3515_; 
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 1, v___x_3513_);
v___x_3515_ = v___x_3465_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_fst_3463_);
lean_ctor_set(v_reuseFailAlloc_3517_, 1, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; 
v___x_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
return v___x_3516_;
}
}
}
}
}
else
{
lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3592_; 
lean_inc(v_stop_3501_);
lean_inc(v_start_3500_);
lean_inc_ref(v_array_3499_);
v_isSharedCheck_3592_ = !lean_is_exclusive(v_fst_3475_);
if (v_isSharedCheck_3592_ == 0)
{
lean_object* v_unused_3593_; lean_object* v_unused_3594_; lean_object* v_unused_3595_; 
v_unused_3593_ = lean_ctor_get(v_fst_3475_, 2);
lean_dec(v_unused_3593_);
v_unused_3594_ = lean_ctor_get(v_fst_3475_, 1);
lean_dec(v_unused_3594_);
v_unused_3595_ = lean_ctor_get(v_fst_3475_, 0);
lean_dec(v_unused_3595_);
v___x_3522_ = v_fst_3475_;
v_isShared_3523_ = v_isSharedCheck_3592_;
goto v_resetjp_3521_;
}
else
{
lean_dec(v_fst_3475_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3592_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v_array_3524_; lean_object* v_start_3525_; lean_object* v_stop_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; 
v_array_3524_ = lean_ctor_get(v_fst_3471_, 0);
v_start_3525_ = lean_ctor_get(v_fst_3471_, 1);
v_stop_3526_ = lean_ctor_get(v_fst_3471_, 2);
v___x_3527_ = lean_array_fget(v_array_3499_, v_start_3500_);
v___x_3528_ = lean_nat_add(v_start_3500_, v___x_3503_);
lean_dec(v_start_3500_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 1, v___x_3528_);
v___x_3530_ = v___x_3522_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_array_3499_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v___x_3528_);
lean_ctor_set(v_reuseFailAlloc_3591_, 2, v_stop_3501_);
v___x_3530_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
uint8_t v___x_3531_; 
v___x_3531_ = lean_nat_dec_lt(v_start_3525_, v_stop_3526_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3533_; 
lean_dec(v___x_3527_);
lean_dec(v___x_3502_);
lean_dec_ref(v_xs_3447_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3506_);
lean_ctor_set(v___x_3477_, 0, v___x_3530_);
v___x_3533_ = v___x_3477_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3530_);
lean_ctor_set(v_reuseFailAlloc_3544_, 1, v___x_3506_);
v___x_3533_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3535_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v___x_3533_);
v___x_3535_ = v___x_3473_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_fst_3471_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3535_);
v___x_3537_ = v___x_3469_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_fst_3467_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3539_; 
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 1, v___x_3537_);
v___x_3539_ = v___x_3465_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_fst_3463_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v___x_3537_);
v___x_3539_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
lean_object* v___x_3540_; 
v___x_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
return v___x_3540_;
}
}
}
}
}
else
{
lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3587_; 
lean_inc(v_stop_3526_);
lean_inc(v_start_3525_);
lean_inc_ref(v_array_3524_);
lean_del_object(v___x_3465_);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_fst_3471_);
if (v_isSharedCheck_3587_ == 0)
{
lean_object* v_unused_3588_; lean_object* v_unused_3589_; lean_object* v_unused_3590_; 
v_unused_3588_ = lean_ctor_get(v_fst_3471_, 2);
lean_dec(v_unused_3588_);
v_unused_3589_ = lean_ctor_get(v_fst_3471_, 1);
lean_dec(v_unused_3589_);
v_unused_3590_ = lean_ctor_get(v_fst_3471_, 0);
lean_dec(v_unused_3590_);
v___x_3546_ = v_fst_3471_;
v_isShared_3547_ = v_isSharedCheck_3587_;
goto v_resetjp_3545_;
}
else
{
lean_dec(v_fst_3471_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3587_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v_a_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3552_; 
v_a_3548_ = lean_array_uget_borrowed(v_as_3448_, v_i_3450_);
v___x_3549_ = lean_array_fget(v_array_3524_, v_start_3525_);
v___x_3550_ = lean_nat_add(v_start_3525_, v___x_3503_);
lean_dec(v_start_3525_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 1, v___x_3550_);
v___x_3552_ = v___x_3546_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_array_3524_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v___x_3550_);
lean_ctor_set(v_reuseFailAlloc_3586_, 2, v_stop_3526_);
v___x_3552_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
lean_object* v___x_3553_; 
lean_inc_ref(v_xs_3447_);
lean_inc(v_a_3548_);
v___x_3553_ = l_Lean_Elab_Structural_getRecArgInfos(v_a_3548_, v___x_3502_, v_xs_3447_, v___x_3549_, v___x_3527_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v_fst_3555_; lean_object* v_snd_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3577_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v___x_3553_, 1);
v_fst_3555_ = lean_ctor_get(v_a_3554_, 0);
v_snd_3556_ = lean_ctor_get(v_a_3554_, 1);
v_isSharedCheck_3577_ = !lean_is_exclusive(v_a_3554_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3558_ = v_a_3554_;
v_isShared_3559_ = v_isSharedCheck_3577_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_snd_3556_);
lean_inc(v_fst_3555_);
lean_dec(v_a_3554_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3577_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3560_, 0, v_fst_3463_);
lean_ctor_set(v___x_3560_, 1, v_snd_3556_);
v___x_3561_ = lean_array_push(v_fst_3467_, v_fst_3555_);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 1, v___x_3506_);
lean_ctor_set(v___x_3558_, 0, v___x_3530_);
v___x_3563_ = v___x_3558_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3530_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v___x_3506_);
v___x_3563_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3563_);
lean_ctor_set(v___x_3477_, 0, v___x_3552_);
v___x_3565_ = v___x_3477_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3552_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3567_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v___x_3565_);
lean_ctor_set(v___x_3473_, 0, v___x_3561_);
v___x_3567_ = v___x_3473_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3561_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v___x_3565_);
v___x_3567_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
lean_object* v___x_3569_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3567_);
lean_ctor_set(v___x_3469_, 0, v___x_3560_);
v___x_3569_ = v___x_3469_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3560_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v___x_3567_);
v___x_3569_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
size_t v___x_3570_; size_t v___x_3571_; 
v___x_3570_ = ((size_t)1ULL);
v___x_3571_ = lean_usize_add(v_i_3450_, v___x_3570_);
v_i_3450_ = v___x_3571_;
v_b_3451_ = v___x_3569_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v___x_3552_);
lean_dec_ref(v___x_3530_);
lean_dec_ref(v___x_3506_);
lean_del_object(v___x_3477_);
lean_del_object(v___x_3473_);
lean_del_object(v___x_3469_);
lean_dec(v_fst_3467_);
lean_dec(v_fst_3463_);
lean_dec_ref(v_xs_3447_);
v_a_3578_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3553_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3553_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
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
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0___boxed(lean_object* v_xs_3609_, lean_object* v_as_3610_, lean_object* v_sz_3611_, lean_object* v_i_3612_, lean_object* v_b_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
size_t v_sz_boxed_3619_; size_t v_i_boxed_3620_; lean_object* v_res_3621_; 
v_sz_boxed_3619_ = lean_unbox_usize(v_sz_3611_);
lean_dec(v_sz_3611_);
v_i_boxed_3620_ = lean_unbox_usize(v_i_3612_);
lean_dec(v_i_3612_);
v_res_3621_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(v_xs_3609_, v_as_3610_, v_sz_boxed_3619_, v_i_boxed_3620_, v_b_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
lean_dec(v___y_3615_);
lean_dec_ref(v___y_3614_);
lean_dec_ref(v_as_3610_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(lean_object* v_a_3622_, lean_object* v_a_3623_){
_start:
{
if (lean_obj_tag(v_a_3622_) == 0)
{
lean_object* v___x_3624_; 
v___x_3624_ = l_List_reverse___redArg(v_a_3623_);
return v___x_3624_;
}
else
{
lean_object* v_head_3625_; lean_object* v_tail_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3635_; 
v_head_3625_ = lean_ctor_get(v_a_3622_, 0);
v_tail_3626_ = lean_ctor_get(v_a_3622_, 1);
v_isSharedCheck_3635_ = !lean_is_exclusive(v_a_3622_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3628_ = v_a_3622_;
v_isShared_3629_ = v_isSharedCheck_3635_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_tail_3626_);
lean_inc(v_head_3625_);
lean_dec(v_a_3622_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3635_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3630_; lean_object* v___x_3632_; 
v___x_3630_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_head_3625_);
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 1, v_a_3623_);
lean_ctor_set(v___x_3628_, 0, v___x_3630_);
v___x_3632_ = v___x_3628_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3630_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v_a_3623_);
v___x_3632_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
v_a_3622_ = v_tail_3626_;
v_a_3623_ = v___x_3632_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(lean_object* v_as_3636_, lean_object* v_j_3637_){
_start:
{
lean_object* v___x_3638_; uint8_t v___x_3639_; 
v___x_3638_ = lean_array_get_size(v_as_3636_);
v___x_3639_ = lean_nat_dec_lt(v_j_3637_, v___x_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; 
lean_dec(v_j_3637_);
v___x_3640_ = lean_box(0);
return v___x_3640_;
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; uint8_t v___x_3644_; 
v___x_3641_ = lean_array_fget_borrowed(v_as_3636_, v_j_3637_);
v___x_3642_ = lean_array_get_size(v___x_3641_);
v___x_3643_ = lean_unsigned_to_nat(0u);
v___x_3644_ = lean_nat_dec_eq(v___x_3642_, v___x_3643_);
if (v___x_3644_ == 0)
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = lean_nat_add(v_j_3637_, v___x_3645_);
lean_dec(v_j_3637_);
v_j_3637_ = v___x_3646_;
goto _start;
}
else
{
lean_object* v___x_3648_; 
v___x_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3648_, 0, v_j_3637_);
return v___x_3648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3___boxed(lean_object* v_as_3649_, lean_object* v_j_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_as_3649_, v_j_3650_);
lean_dec_ref(v_as_3649_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(lean_object* v_a_3652_, lean_object* v_as_3653_, size_t v_sz_3654_, size_t v_i_3655_, lean_object* v_b_3656_){
_start:
{
uint8_t v___x_3658_; 
v___x_3658_ = lean_usize_dec_lt(v_i_3655_, v_sz_3654_);
if (v___x_3658_ == 0)
{
lean_object* v___x_3659_; 
lean_dec_ref(v_a_3652_);
v___x_3659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3659_, 0, v_b_3656_);
return v___x_3659_;
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; size_t v___x_3663_; size_t v___x_3664_; 
v_a_3660_ = lean_array_uget_borrowed(v_as_3653_, v_i_3655_);
lean_inc(v_a_3660_);
lean_inc_ref(v_a_3652_);
v___x_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3661_, 0, v_a_3652_);
lean_ctor_set(v___x_3661_, 1, v_a_3660_);
v___x_3662_ = lean_array_push(v_b_3656_, v___x_3661_);
v___x_3663_ = ((size_t)1ULL);
v___x_3664_ = lean_usize_add(v_i_3655_, v___x_3663_);
v_i_3655_ = v___x_3664_;
v_b_3656_ = v___x_3662_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg___boxed(lean_object* v_a_3666_, lean_object* v_as_3667_, lean_object* v_sz_3668_, lean_object* v_i_3669_, lean_object* v_b_3670_, lean_object* v___y_3671_){
_start:
{
size_t v_sz_boxed_3672_; size_t v_i_boxed_3673_; lean_object* v_res_3674_; 
v_sz_boxed_3672_ = lean_unbox_usize(v_sz_3668_);
lean_dec(v_sz_3668_);
v_i_boxed_3673_ = lean_unbox_usize(v_i_3669_);
lean_dec(v_i_3669_);
v_res_3674_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3666_, v_as_3667_, v_sz_boxed_3672_, v_i_boxed_3673_, v_b_3670_);
lean_dec_ref(v_as_3667_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(lean_object* v_a_3675_, lean_object* v_xs_3676_, lean_object* v_as_3677_, size_t v_sz_3678_, size_t v_i_3679_, lean_object* v_b_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v___x_3686_; 
v___x_3686_ = lean_usize_dec_lt(v_i_3679_, v_sz_3678_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; 
lean_dec_ref(v_xs_3676_);
lean_dec_ref(v_a_3675_);
v___x_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3687_, 0, v_b_3680_);
return v___x_3687_;
}
else
{
lean_object* v_snd_3688_; lean_object* v_fst_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3732_; 
v_snd_3688_ = lean_ctor_get(v_b_3680_, 1);
v_fst_3689_ = lean_ctor_get(v_b_3680_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_b_3680_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3691_ = v_b_3680_;
v_isShared_3692_ = v_isSharedCheck_3732_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_snd_3688_);
lean_inc(v_fst_3689_);
lean_dec(v_b_3680_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3732_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v_array_3693_; lean_object* v_start_3694_; lean_object* v_stop_3695_; uint8_t v___x_3696_; 
v_array_3693_ = lean_ctor_get(v_snd_3688_, 0);
v_start_3694_ = lean_ctor_get(v_snd_3688_, 1);
v_stop_3695_ = lean_ctor_get(v_snd_3688_, 2);
v___x_3696_ = lean_nat_dec_lt(v_start_3694_, v_stop_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3698_; 
lean_dec_ref(v_xs_3676_);
lean_dec_ref(v_a_3675_);
if (v_isShared_3692_ == 0)
{
v___x_3698_ = v___x_3691_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_fst_3689_);
lean_ctor_set(v_reuseFailAlloc_3700_, 1, v_snd_3688_);
v___x_3698_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
return v___x_3699_;
}
}
else
{
lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3728_; 
lean_inc(v_stop_3695_);
lean_inc(v_start_3694_);
lean_inc_ref(v_array_3693_);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_snd_3688_);
if (v_isSharedCheck_3728_ == 0)
{
lean_object* v_unused_3729_; lean_object* v_unused_3730_; lean_object* v_unused_3731_; 
v_unused_3729_ = lean_ctor_get(v_snd_3688_, 2);
lean_dec(v_unused_3729_);
v_unused_3730_ = lean_ctor_get(v_snd_3688_, 1);
lean_dec(v_unused_3730_);
v_unused_3731_ = lean_ctor_get(v_snd_3688_, 0);
lean_dec(v_unused_3731_);
v___x_3702_ = v_snd_3688_;
v_isShared_3703_ = v_isSharedCheck_3728_;
goto v_resetjp_3701_;
}
else
{
lean_dec(v_snd_3688_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3728_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v_a_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3709_; 
v_a_3704_ = lean_array_uget_borrowed(v_as_3677_, v_i_3679_);
v___x_3705_ = lean_array_fget(v_array_3693_, v_start_3694_);
v___x_3706_ = lean_unsigned_to_nat(1u);
v___x_3707_ = lean_nat_add(v_start_3694_, v___x_3706_);
lean_dec(v_start_3694_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 1, v___x_3707_);
v___x_3709_ = v___x_3702_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_array_3693_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v___x_3707_);
lean_ctor_set(v_reuseFailAlloc_3727_, 2, v_stop_3695_);
v___x_3709_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
lean_object* v___x_3710_; 
lean_inc(v_a_3704_);
lean_inc_ref(v_xs_3676_);
lean_inc_ref(v_a_3675_);
v___x_3710_ = l_Lean_Elab_Structural_argsInGroup(v_a_3675_, v_xs_3676_, v_a_3704_, v___x_3705_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_);
lean_dec(v___x_3705_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v___x_3712_; lean_object* v___x_3714_; 
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___x_3710_, 1);
v___x_3712_ = lean_array_push(v_fst_3689_, v_a_3711_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 1, v___x_3709_);
lean_ctor_set(v___x_3691_, 0, v___x_3712_);
v___x_3714_ = v___x_3691_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3712_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3709_);
v___x_3714_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
size_t v___x_3715_; size_t v___x_3716_; 
v___x_3715_ = ((size_t)1ULL);
v___x_3716_ = lean_usize_add(v_i_3679_, v___x_3715_);
v_i_3679_ = v___x_3716_;
v_b_3680_ = v___x_3714_;
goto _start;
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec_ref(v___x_3709_);
lean_del_object(v___x_3691_);
lean_dec(v_fst_3689_);
lean_dec_ref(v_xs_3676_);
lean_dec_ref(v_a_3675_);
v_a_3719_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3710_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3710_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2___boxed(lean_object* v_a_3733_, lean_object* v_xs_3734_, lean_object* v_as_3735_, lean_object* v_sz_3736_, lean_object* v_i_3737_, lean_object* v_b_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
size_t v_sz_boxed_3744_; size_t v_i_boxed_3745_; lean_object* v_res_3746_; 
v_sz_boxed_3744_ = lean_unbox_usize(v_sz_3736_);
lean_dec(v_sz_3736_);
v_i_boxed_3745_ = lean_unbox_usize(v_i_3737_);
lean_dec(v_i_3737_);
v_res_3746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3733_, v_xs_3734_, v_as_3735_, v_sz_boxed_3744_, v_i_boxed_3745_, v_b_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec_ref(v_as_3735_);
return v_res_3746_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2(void){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1));
v___x_3751_ = l_Lean_stringToMessageData(v___x_3750_);
return v___x_3751_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4(void){
_start:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3753_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3));
v___x_3754_ = l_Lean_stringToMessageData(v___x_3753_);
return v___x_3754_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6(void){
_start:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5));
v___x_3757_ = l_Lean_stringToMessageData(v___x_3756_);
return v___x_3757_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8(void){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7));
v___x_3760_ = l_Lean_stringToMessageData(v___x_3759_);
return v___x_3760_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10(void){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9));
v___x_3763_ = l_Lean_stringToMessageData(v___x_3762_);
return v___x_3763_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12(void){
_start:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11));
v___x_3766_ = l_Lean_stringToMessageData(v___x_3765_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(lean_object* v___x_3767_, lean_object* v_values_3768_, lean_object* v_xs_3769_, lean_object* v_fnNames_3770_, lean_object* v_as_3771_, size_t v_sz_3772_, size_t v_i_3773_, lean_object* v_b_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_){
_start:
{
lean_object* v_a_3781_; uint8_t v___x_3785_; 
v___x_3785_ = lean_usize_dec_lt(v_i_3773_, v_sz_3772_);
if (v___x_3785_ == 0)
{
lean_object* v___x_3786_; 
lean_dec_ref(v_xs_3769_);
lean_dec_ref(v___x_3767_);
v___x_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3786_, 0, v_b_3774_);
return v___x_3786_;
}
else
{
lean_object* v_fst_3787_; lean_object* v_snd_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3862_; 
v_fst_3787_ = lean_ctor_get(v_b_3774_, 0);
v_snd_3788_ = lean_ctor_get(v_b_3774_, 1);
v_isSharedCheck_3862_ = !lean_is_exclusive(v_b_3774_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3790_ = v_b_3774_;
v_isShared_3791_ = v_isSharedCheck_3862_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_snd_3788_);
lean_inc(v_fst_3787_);
lean_dec(v_b_3774_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3862_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v_recArgInfoss_3793_; lean_object* v___x_3794_; lean_object* v_a_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3799_; 
v___x_3792_ = lean_unsigned_to_nat(0u);
v_recArgInfoss_3793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0));
v___x_3794_ = l_Lean_instInhabitedName;
v_a_3795_ = lean_array_uget_borrowed(v_as_3771_, v_i_3773_);
v___x_3796_ = lean_array_get_size(v___x_3767_);
lean_inc_ref(v___x_3767_);
v___x_3797_ = l_Array_toSubarray___redArg(v___x_3767_, v___x_3792_, v___x_3796_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 1, v___x_3797_);
lean_ctor_set(v___x_3790_, 0, v_recArgInfoss_3793_);
v___x_3799_ = v___x_3790_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_recArgInfoss_3793_);
lean_ctor_set(v_reuseFailAlloc_3861_, 1, v___x_3797_);
v___x_3799_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
size_t v_sz_3800_; size_t v___x_3801_; lean_object* v___x_3802_; 
v_sz_3800_ = lean_array_size(v_values_3768_);
v___x_3801_ = ((size_t)0ULL);
lean_inc_ref(v_xs_3769_);
lean_inc(v_a_3795_);
v___x_3802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3795_, v_xs_3769_, v_values_3768_, v_sz_3800_, v___x_3801_, v___x_3799_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v_fst_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3851_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3802_, 1);
v_fst_3804_ = lean_ctor_get(v_a_3803_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_a_3803_);
if (v_isSharedCheck_3851_ == 0)
{
lean_object* v_unused_3852_; 
v_unused_3852_ = lean_ctor_get(v_a_3803_, 1);
lean_dec(v_unused_3852_);
v___x_3806_ = v_a_3803_;
v_isShared_3807_ = v_isSharedCheck_3851_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_fst_3804_);
lean_dec(v_a_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3851_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_fst_3804_, v___x_3792_);
if (lean_obj_tag(v___x_3808_) == 1)
{
lean_object* v_val_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3822_; 
lean_dec(v_fst_3804_);
v_val_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_val_3809_);
lean_dec_ref_known(v___x_3808_, 1);
v___x_3810_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2);
lean_inc(v_a_3795_);
v___x_3811_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3795_);
v___x_3812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3810_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
v___x_3813_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4);
v___x_3814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3812_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = lean_array_get_borrowed(v___x_3794_, v_fnNames_3770_, v_val_3809_);
lean_dec(v_val_3809_);
lean_inc(v___x_3815_);
v___x_3816_ = l_Lean_MessageData_ofName(v___x_3815_);
v___x_3817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3814_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
v___x_3818_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6);
v___x_3819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3817_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3820_, 0, v_fst_3787_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 1, v_snd_3788_);
lean_ctor_set(v___x_3806_, 0, v___x_3820_);
v___x_3822_ = v___x_3806_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v_snd_3788_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
v_a_3781_ = v___x_3822_;
goto v___jp_3780_;
}
}
else
{
lean_object* v___x_3824_; 
lean_dec(v___x_3808_);
v___x_3824_ = l_Lean_Elab_Structural_allCombinations___redArg(v_fst_3804_);
lean_dec(v_fst_3804_);
if (lean_obj_tag(v___x_3824_) == 1)
{
lean_object* v_val_3825_; size_t v_sz_3826_; lean_object* v___x_3827_; 
v_val_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_val_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v_sz_3826_ = lean_array_size(v_val_3825_);
lean_inc(v_a_3795_);
v___x_3827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3795_, v_val_3825_, v_sz_3826_, v___x_3801_, v_snd_3788_);
lean_dec(v_val_3825_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; lean_object* v___x_3830_; 
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_a_3828_);
lean_dec_ref_known(v___x_3827_, 1);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 1, v_a_3828_);
lean_ctor_set(v___x_3806_, 0, v_fst_3787_);
v___x_3830_ = v___x_3806_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_fst_3787_);
lean_ctor_set(v_reuseFailAlloc_3831_, 1, v_a_3828_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
v_a_3781_ = v___x_3830_;
goto v___jp_3780_;
}
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_del_object(v___x_3806_);
lean_dec(v_fst_3787_);
lean_dec_ref(v_xs_3769_);
lean_dec_ref(v___x_3767_);
v_a_3832_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3827_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3827_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
else
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
lean_dec(v___x_3824_);
v___x_3840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8);
lean_inc(v_a_3795_);
v___x_3841_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3795_);
v___x_3842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3840_);
lean_ctor_set(v___x_3842_, 1, v___x_3841_);
v___x_3843_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10);
v___x_3844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3842_);
lean_ctor_set(v___x_3844_, 1, v___x_3843_);
v___x_3845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3845_, 0, v_fst_3787_);
lean_ctor_set(v___x_3845_, 1, v___x_3844_);
v___x_3846_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12);
v___x_3847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3845_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 1, v_snd_3788_);
lean_ctor_set(v___x_3806_, 0, v___x_3847_);
v___x_3849_ = v___x_3806_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3847_);
lean_ctor_set(v_reuseFailAlloc_3850_, 1, v_snd_3788_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
v_a_3781_ = v___x_3849_;
goto v___jp_3780_;
}
}
}
}
}
else
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
lean_dec(v_snd_3788_);
lean_dec(v_fst_3787_);
lean_dec_ref(v_xs_3769_);
lean_dec_ref(v___x_3767_);
v_a_3853_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v___x_3802_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___x_3802_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
}
}
v___jp_3780_:
{
size_t v___x_3782_; size_t v___x_3783_; 
v___x_3782_ = ((size_t)1ULL);
v___x_3783_ = lean_usize_add(v_i_3773_, v___x_3782_);
v_i_3773_ = v___x_3783_;
v_b_3774_ = v_a_3781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___boxed(lean_object* v___x_3863_, lean_object* v_values_3864_, lean_object* v_xs_3865_, lean_object* v_fnNames_3866_, lean_object* v_as_3867_, lean_object* v_sz_3868_, lean_object* v_i_3869_, lean_object* v_b_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
size_t v_sz_boxed_3876_; size_t v_i_boxed_3877_; lean_object* v_res_3878_; 
v_sz_boxed_3876_ = lean_unbox_usize(v_sz_3868_);
lean_dec(v_sz_3868_);
v_i_boxed_3877_ = lean_unbox_usize(v_i_3869_);
lean_dec(v_i_3869_);
v_res_3878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(v___x_3863_, v_values_3864_, v_xs_3865_, v_fnNames_3866_, v_as_3867_, v_sz_boxed_3876_, v_i_boxed_3877_, v_b_3870_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec_ref(v_as_3867_);
lean_dec_ref(v_fnNames_3866_);
lean_dec_ref(v_values_3864_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(lean_object* v_xs_3879_, lean_object* v___x_3880_, lean_object* v_values_3881_, lean_object* v_fnNames_3882_, lean_object* v_as_3883_, size_t v_sz_3884_, size_t v_i_3885_, lean_object* v_b_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v_a_3893_; uint8_t v___x_3897_; 
v___x_3897_ = lean_usize_dec_lt(v_i_3885_, v_sz_3884_);
if (v___x_3897_ == 0)
{
lean_object* v___x_3898_; 
lean_dec_ref(v___x_3880_);
lean_dec_ref(v_xs_3879_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v_b_3886_);
return v___x_3898_;
}
else
{
lean_object* v_fst_3899_; lean_object* v_snd_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3974_; 
v_fst_3899_ = lean_ctor_get(v_b_3886_, 0);
v_snd_3900_ = lean_ctor_get(v_b_3886_, 1);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_b_3886_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3902_ = v_b_3886_;
v_isShared_3903_ = v_isSharedCheck_3974_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_snd_3900_);
lean_inc(v_fst_3899_);
lean_dec(v_b_3886_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3974_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3904_; lean_object* v_recArgInfoss_3905_; lean_object* v___x_3906_; lean_object* v_a_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3911_; 
v___x_3904_ = lean_unsigned_to_nat(0u);
v_recArgInfoss_3905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0));
v___x_3906_ = l_Lean_instInhabitedName;
v_a_3907_ = lean_array_uget_borrowed(v_as_3883_, v_i_3885_);
v___x_3908_ = lean_array_get_size(v___x_3880_);
lean_inc_ref(v___x_3880_);
v___x_3909_ = l_Array_toSubarray___redArg(v___x_3880_, v___x_3904_, v___x_3908_);
if (v_isShared_3903_ == 0)
{
lean_ctor_set(v___x_3902_, 1, v___x_3909_);
lean_ctor_set(v___x_3902_, 0, v_recArgInfoss_3905_);
v___x_3911_ = v___x_3902_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_recArgInfoss_3905_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___x_3909_);
v___x_3911_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
size_t v_sz_3912_; size_t v___x_3913_; lean_object* v___x_3914_; 
v_sz_3912_ = lean_array_size(v_values_3881_);
v___x_3913_ = ((size_t)0ULL);
lean_inc_ref(v_xs_3879_);
lean_inc(v_a_3907_);
v___x_3914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3907_, v_xs_3879_, v_values_3881_, v_sz_3912_, v___x_3913_, v___x_3911_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v_fst_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3963_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3914_, 1);
v_fst_3916_ = lean_ctor_get(v_a_3915_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v_a_3915_);
if (v_isSharedCheck_3963_ == 0)
{
lean_object* v_unused_3964_; 
v_unused_3964_ = lean_ctor_get(v_a_3915_, 1);
lean_dec(v_unused_3964_);
v___x_3918_ = v_a_3915_;
v_isShared_3919_ = v_isSharedCheck_3963_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_fst_3916_);
lean_dec(v_a_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3963_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3920_; 
v___x_3920_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_fst_3916_, v___x_3904_);
if (lean_obj_tag(v___x_3920_) == 1)
{
lean_object* v_val_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3934_; 
lean_dec(v_fst_3916_);
v_val_3921_ = lean_ctor_get(v___x_3920_, 0);
lean_inc(v_val_3921_);
lean_dec_ref_known(v___x_3920_, 1);
v___x_3922_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2);
lean_inc(v_a_3907_);
v___x_3923_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3907_);
v___x_3924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3922_);
lean_ctor_set(v___x_3924_, 1, v___x_3923_);
v___x_3925_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4);
v___x_3926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3924_);
lean_ctor_set(v___x_3926_, 1, v___x_3925_);
v___x_3927_ = lean_array_get_borrowed(v___x_3906_, v_fnNames_3882_, v_val_3921_);
lean_dec(v_val_3921_);
lean_inc(v___x_3927_);
v___x_3928_ = l_Lean_MessageData_ofName(v___x_3927_);
v___x_3929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3926_);
lean_ctor_set(v___x_3929_, 1, v___x_3928_);
v___x_3930_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6);
v___x_3931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3929_);
lean_ctor_set(v___x_3931_, 1, v___x_3930_);
v___x_3932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3932_, 0, v_fst_3899_);
lean_ctor_set(v___x_3932_, 1, v___x_3931_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 1, v_snd_3900_);
lean_ctor_set(v___x_3918_, 0, v___x_3932_);
v___x_3934_ = v___x_3918_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v___x_3932_);
lean_ctor_set(v_reuseFailAlloc_3935_, 1, v_snd_3900_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
v_a_3893_ = v___x_3934_;
goto v___jp_3892_;
}
}
else
{
lean_object* v___x_3936_; 
lean_dec(v___x_3920_);
v___x_3936_ = l_Lean_Elab_Structural_allCombinations___redArg(v_fst_3916_);
lean_dec(v_fst_3916_);
if (lean_obj_tag(v___x_3936_) == 1)
{
lean_object* v_val_3937_; size_t v_sz_3938_; lean_object* v___x_3939_; 
v_val_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_val_3937_);
lean_dec_ref_known(v___x_3936_, 1);
v_sz_3938_ = lean_array_size(v_val_3937_);
lean_inc(v_a_3907_);
v___x_3939_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3907_, v_val_3937_, v_sz_3938_, v___x_3913_, v_snd_3900_);
lean_dec(v_val_3937_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3942_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3939_, 1);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 1, v_a_3940_);
lean_ctor_set(v___x_3918_, 0, v_fst_3899_);
v___x_3942_ = v___x_3918_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_fst_3899_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v_a_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
v_a_3893_ = v___x_3942_;
goto v___jp_3892_;
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_del_object(v___x_3918_);
lean_dec(v_fst_3899_);
lean_dec_ref(v___x_3880_);
lean_dec_ref(v_xs_3879_);
v_a_3944_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3939_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3939_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
else
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3961_; 
lean_dec(v___x_3936_);
v___x_3952_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8);
lean_inc(v_a_3907_);
v___x_3953_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3907_);
v___x_3954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3952_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10);
v___x_3956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3954_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
v___x_3957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3957_, 0, v_fst_3899_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12);
v___x_3959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 1, v_snd_3900_);
lean_ctor_set(v___x_3918_, 0, v___x_3959_);
v___x_3961_ = v___x_3918_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v___x_3959_);
lean_ctor_set(v_reuseFailAlloc_3962_, 1, v_snd_3900_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
v_a_3893_ = v___x_3961_;
goto v___jp_3892_;
}
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_dec(v_snd_3900_);
lean_dec(v_fst_3899_);
lean_dec_ref(v___x_3880_);
lean_dec_ref(v_xs_3879_);
v_a_3965_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3914_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3914_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
v___jp_3892_:
{
size_t v___x_3894_; size_t v___x_3895_; lean_object* v___x_3896_; 
v___x_3894_ = ((size_t)1ULL);
v___x_3895_ = lean_usize_add(v_i_3885_, v___x_3894_);
v___x_3896_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(v___x_3880_, v_values_3881_, v_xs_3879_, v_fnNames_3882_, v_as_3883_, v_sz_3884_, v___x_3895_, v_a_3893_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
return v___x_3896_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5___boxed(lean_object* v_xs_3975_, lean_object* v___x_3976_, lean_object* v_values_3977_, lean_object* v_fnNames_3978_, lean_object* v_as_3979_, lean_object* v_sz_3980_, lean_object* v_i_3981_, lean_object* v_b_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
size_t v_sz_boxed_3988_; size_t v_i_boxed_3989_; lean_object* v_res_3990_; 
v_sz_boxed_3988_ = lean_unbox_usize(v_sz_3980_);
lean_dec(v_sz_3980_);
v_i_boxed_3989_ = lean_unbox_usize(v_i_3981_);
lean_dec(v_i_3981_);
v_res_3990_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(v_xs_3975_, v___x_3976_, v_values_3977_, v_fnNames_3978_, v_as_3979_, v_sz_boxed_3988_, v_i_boxed_3989_, v_b_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec_ref(v_as_3979_);
lean_dec_ref(v_fnNames_3978_);
lean_dec_ref(v_values_3977_);
return v_res_3990_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__3(void){
_start:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; 
v___x_3996_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__2));
v___x_3997_ = l_Lean_MessageData_ofFormat(v___x_3996_);
return v___x_3997_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__5(void){
_start:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3999_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__4));
v___x_4000_ = l_Lean_stringToMessageData(v___x_3999_);
return v___x_4000_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__8(void){
_start:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4004_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__7));
v___x_4005_ = l_Lean_stringToMessageData(v___x_4004_);
return v___x_4005_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__9(void){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_4006_ = lean_box(1);
v___x_4007_ = l_Lean_MessageData_ofFormat(v___x_4006_);
return v___x_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates(lean_object* v_fnNames_4008_, lean_object* v_fixedParamPerms_4009_, lean_object* v_xs_4010_, lean_object* v_values_4011_, lean_object* v_termMeasure_x3fs_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_){
_start:
{
lean_object* v___x_4018_; lean_object* v_candidates_4019_; lean_object* v___x_4020_; lean_object* v_perms_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v_report_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; size_t v_sz_4032_; size_t v___x_4033_; lean_object* v___x_4034_; 
v___x_4018_ = lean_unsigned_to_nat(0u);
v_candidates_4019_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__0));
v___x_4020_ = lean_array_get_size(v_values_4011_);
v_perms_4021_ = lean_ctor_get(v_fixedParamPerms_4009_, 1);
lean_inc_ref(v_perms_4021_);
lean_dec_ref(v_fixedParamPerms_4009_);
lean_inc_ref(v_values_4011_);
v___x_4022_ = l_Array_toSubarray___redArg(v_values_4011_, v___x_4018_, v___x_4020_);
v___x_4023_ = lean_array_get_size(v_termMeasure_x3fs_4012_);
v_report_4024_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v___x_4025_ = l_Array_toSubarray___redArg(v_termMeasure_x3fs_4012_, v___x_4018_, v___x_4023_);
v___x_4026_ = lean_array_get_size(v_perms_4021_);
v___x_4027_ = l_Array_toSubarray___redArg(v_perms_4021_, v___x_4018_, v___x_4026_);
v___x_4028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4025_);
lean_ctor_set(v___x_4028_, 1, v___x_4027_);
v___x_4029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4022_);
lean_ctor_set(v___x_4029_, 1, v___x_4028_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v_candidates_4019_);
lean_ctor_set(v___x_4030_, 1, v___x_4029_);
v___x_4031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4031_, 0, v_report_4024_);
lean_ctor_set(v___x_4031_, 1, v___x_4030_);
v_sz_4032_ = lean_array_size(v_fnNames_4008_);
v___x_4033_ = ((size_t)0ULL);
lean_inc_ref(v_xs_4010_);
v___x_4034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(v_xs_4010_, v_fnNames_4008_, v_sz_4032_, v___x_4033_, v___x_4031_, v_a_4013_, v_a_4014_, v_a_4015_, v_a_4016_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v_snd_4036_; lean_object* v_toCold_4037_; lean_object* v_options_4038_; lean_object* v_fst_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4179_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v___x_4034_, 1);
v_snd_4036_ = lean_ctor_get(v_a_4035_, 1);
lean_inc(v_snd_4036_);
v_toCold_4037_ = lean_ctor_get(v_a_4015_, 0);
v_options_4038_ = lean_ctor_get(v_toCold_4037_, 2);
v_fst_4039_ = lean_ctor_get(v_a_4035_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_a_4035_);
if (v_isSharedCheck_4179_ == 0)
{
lean_object* v_unused_4180_; 
v_unused_4180_ = lean_ctor_get(v_a_4035_, 1);
lean_dec(v_unused_4180_);
v___x_4041_ = v_a_4035_;
v_isShared_4042_ = v_isSharedCheck_4179_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_fst_4039_);
lean_dec(v_a_4035_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4179_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v_fst_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4177_; 
v_fst_4043_ = lean_ctor_get(v_snd_4036_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v_snd_4036_);
if (v_isSharedCheck_4177_ == 0)
{
lean_object* v_unused_4178_; 
v_unused_4178_ = lean_ctor_get(v_snd_4036_, 1);
lean_dec(v_unused_4178_);
v___x_4045_ = v_snd_4036_;
v_isShared_4046_ = v_isSharedCheck_4177_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_fst_4043_);
lean_dec(v_snd_4036_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4177_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v_inheritedTraceOptions_4047_; uint8_t v_hasTrace_4048_; size_t v_sz_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___y_4054_; lean_object* v_report_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___x_4102_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4142_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; 
v_inheritedTraceOptions_4047_ = lean_ctor_get(v_toCold_4037_, 11);
v_hasTrace_4048_ = lean_ctor_get_uint8(v_options_4038_, sizeof(void*)*1);
v_sz_4049_ = lean_array_size(v_fst_4043_);
v___x_4050_ = l_unsafeCast___redArg(v_fst_4043_);
lean_dec(v_fst_4043_);
v___x_4051_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(v_sz_4049_, v___x_4033_, v___x_4050_);
v___x_4052_ = l_unsafeCast___redArg(v___x_4051_);
lean_dec_ref(v___x_4051_);
v___x_4102_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
if (v_hasTrace_4048_ == 0)
{
v___y_4142_ = v_a_4013_;
v___y_4143_ = v_a_4014_;
v___y_4144_ = v_a_4015_;
v___y_4145_ = v_a_4016_;
goto v___jp_4141_;
}
else
{
lean_object* v___x_4151_; uint8_t v___x_4152_; 
v___x_4151_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4152_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4047_, v_options_4038_, v___x_4151_);
if (v___x_4152_ == 0)
{
v___y_4142_ = v_a_4013_;
v___y_4143_ = v_a_4014_;
v___y_4144_ = v_a_4015_;
v___y_4145_ = v_a_4016_;
goto v___jp_4141_;
}
else
{
lean_object* v___x_4153_; lean_object* v___y_4155_; lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; 
v___x_4153_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__8, &l_Lean_Elab_Structural_findRecArgCandidates___closed__8_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__8);
v___x_4172_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__6));
v___x_4173_ = lean_array_get_size(v___x_4052_);
v___x_4174_ = lean_nat_dec_lt(v___x_4018_, v___x_4173_);
if (v___x_4174_ == 0)
{
v___y_4155_ = v___x_4172_;
goto v___jp_4154_;
}
else
{
size_t v___x_4175_; lean_object* v___x_4176_; 
v___x_4175_ = lean_usize_of_nat(v___x_4173_);
v___x_4176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v___x_4052_, v___x_4033_, v___x_4175_, v___x_4172_);
v___y_4155_ = v___x_4176_;
goto v___jp_4154_;
}
v___jp_4154_:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4156_ = lean_array_to_list(v___y_4155_);
v___x_4157_ = lean_box(0);
v___x_4158_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(v___x_4156_, v___x_4157_);
v___x_4159_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__9, &l_Lean_Elab_Structural_findRecArgCandidates___closed__9_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__9);
v___x_4160_ = l_Lean_MessageData_joinSep(v___x_4158_, v___x_4159_);
v___x_4161_ = l_Lean_indentD(v___x_4160_);
v___x_4162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4153_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
v___x_4163_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4102_, v___x_4162_, v_a_4013_, v_a_4014_, v_a_4015_, v_a_4016_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_dec_ref_known(v___x_4163_, 1);
v___y_4142_ = v_a_4013_;
v___y_4143_ = v_a_4014_;
v___y_4144_ = v_a_4015_;
v___y_4145_ = v_a_4016_;
goto v___jp_4141_;
}
else
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
lean_dec(v___x_4052_);
lean_del_object(v___x_4045_);
lean_del_object(v___x_4041_);
lean_dec(v_fst_4039_);
lean_dec_ref(v_values_4011_);
lean_dec_ref(v_xs_4010_);
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4166_ = v___x_4163_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4163_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
}
}
}
v___jp_4053_:
{
lean_object* v___x_4061_; 
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 1, v_candidates_4019_);
lean_ctor_set(v___x_4045_, 0, v_report_4055_);
v___x_4061_ = v___x_4045_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_report_4055_);
lean_ctor_set(v_reuseFailAlloc_4089_, 1, v_candidates_4019_);
v___x_4061_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
size_t v_sz_4062_; lean_object* v___x_4063_; 
v_sz_4062_ = lean_array_size(v___y_4054_);
v___x_4063_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(v_xs_4010_, v___x_4052_, v_values_4011_, v_fnNames_4008_, v___y_4054_, v_sz_4062_, v___x_4033_, v___x_4061_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_);
lean_dec_ref(v___y_4054_);
lean_dec_ref(v_values_4011_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v_a_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4080_; 
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4063_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4066_ = v___x_4063_;
v_isShared_4067_ = v_isSharedCheck_4080_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_a_4064_);
lean_dec(v___x_4063_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4080_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v_fst_4068_; lean_object* v_snd_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4079_; 
v_fst_4068_ = lean_ctor_get(v_a_4064_, 0);
v_snd_4069_ = lean_ctor_get(v_a_4064_, 1);
v_isSharedCheck_4079_ = !lean_is_exclusive(v_a_4064_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4071_ = v_a_4064_;
v_isShared_4072_ = v_isSharedCheck_4079_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_snd_4069_);
lean_inc(v_fst_4068_);
lean_dec(v_a_4064_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4079_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
lean_ctor_set(v___x_4071_, 1, v_fst_4068_);
lean_ctor_set(v___x_4071_, 0, v_snd_4069_);
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_snd_4069_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v_fst_4068_);
v___x_4074_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
lean_object* v___x_4076_; 
if (v_isShared_4067_ == 0)
{
lean_ctor_set(v___x_4066_, 0, v___x_4074_);
v___x_4076_ = v___x_4066_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v___x_4074_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
v_a_4081_ = lean_ctor_get(v___x_4063_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4063_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4063_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4063_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
}
v___jp_4090_:
{
lean_object* v___x_4096_; uint8_t v___x_4097_; 
v___x_4096_ = lean_array_get_size(v___y_4091_);
v___x_4097_ = lean_nat_dec_eq(v___x_4096_, v___x_4018_);
if (v___x_4097_ == 0)
{
lean_del_object(v___x_4041_);
v___y_4054_ = v___y_4091_;
v_report_4055_ = v_fst_4039_;
v___y_4056_ = v___y_4092_;
v___y_4057_ = v___y_4093_;
v___y_4058_ = v___y_4094_;
v___y_4059_ = v___y_4095_;
goto v___jp_4053_;
}
else
{
lean_object* v___x_4098_; lean_object* v___x_4100_; 
v___x_4098_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__3, &l_Lean_Elab_Structural_findRecArgCandidates___closed__3_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__3);
if (v_isShared_4042_ == 0)
{
lean_ctor_set_tag(v___x_4041_, 7);
lean_ctor_set(v___x_4041_, 1, v___x_4098_);
v___x_4100_ = v___x_4041_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_fst_4039_);
lean_ctor_set(v_reuseFailAlloc_4101_, 1, v___x_4098_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
v___y_4054_ = v___y_4091_;
v_report_4055_ = v___x_4100_;
v___y_4056_ = v___y_4092_;
v___y_4057_ = v___y_4093_;
v___y_4058_ = v___y_4094_;
v___y_4059_ = v___y_4095_;
goto v___jp_4053_;
}
}
}
v___jp_4103_:
{
lean_object* v___x_4109_; 
v___x_4109_ = l_Lean_Elab_Structural_inductiveGroups(v___y_4108_, v___y_4106_, v___y_4105_, v___y_4104_, v___y_4107_);
lean_dec_ref(v___y_4108_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_toCold_4110_; lean_object* v_options_4111_; uint8_t v_hasTrace_4112_; 
v_toCold_4110_ = lean_ctor_get(v___y_4104_, 0);
v_options_4111_ = lean_ctor_get(v_toCold_4110_, 2);
v_hasTrace_4112_ = lean_ctor_get_uint8(v_options_4111_, sizeof(void*)*1);
if (v_hasTrace_4112_ == 0)
{
lean_object* v_a_4113_; 
v_a_4113_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4113_);
lean_dec_ref_known(v___x_4109_, 1);
v___y_4091_ = v_a_4113_;
v___y_4092_ = v___y_4106_;
v___y_4093_ = v___y_4105_;
v___y_4094_ = v___y_4104_;
v___y_4095_ = v___y_4107_;
goto v___jp_4090_;
}
else
{
lean_object* v_a_4114_; lean_object* v_inheritedTraceOptions_4115_; lean_object* v___x_4116_; uint8_t v___x_4117_; 
v_a_4114_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4114_);
lean_dec_ref_known(v___x_4109_, 1);
v_inheritedTraceOptions_4115_ = lean_ctor_get(v_toCold_4110_, 11);
v___x_4116_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4117_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4115_, v_options_4111_, v___x_4116_);
if (v___x_4117_ == 0)
{
v___y_4091_ = v_a_4114_;
v___y_4092_ = v___y_4106_;
v___y_4093_ = v___y_4105_;
v___y_4094_ = v___y_4104_;
v___y_4095_ = v___y_4107_;
goto v___jp_4090_;
}
else
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; 
v___x_4118_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__5, &l_Lean_Elab_Structural_findRecArgCandidates___closed__5_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__5);
lean_inc(v_a_4114_);
v___x_4119_ = lean_array_to_list(v_a_4114_);
v___x_4120_ = lean_box(0);
v___x_4121_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(v___x_4119_, v___x_4120_);
v___x_4122_ = l_Lean_MessageData_ofList(v___x_4121_);
v___x_4123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4118_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4102_, v___x_4123_, v___y_4106_, v___y_4105_, v___y_4104_, v___y_4107_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_dec_ref_known(v___x_4124_, 1);
v___y_4091_ = v_a_4114_;
v___y_4092_ = v___y_4106_;
v___y_4093_ = v___y_4105_;
v___y_4094_ = v___y_4104_;
v___y_4095_ = v___y_4107_;
goto v___jp_4090_;
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4132_; 
lean_dec(v_a_4114_);
lean_dec(v___x_4052_);
lean_del_object(v___x_4045_);
lean_del_object(v___x_4041_);
lean_dec(v_fst_4039_);
lean_dec_ref(v_values_4011_);
lean_dec_ref(v_xs_4010_);
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4127_ = v___x_4124_;
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4124_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4130_; 
if (v_isShared_4128_ == 0)
{
v___x_4130_ = v___x_4127_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4125_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
}
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4140_; 
lean_dec(v___x_4052_);
lean_del_object(v___x_4045_);
lean_del_object(v___x_4041_);
lean_dec(v_fst_4039_);
lean_dec_ref(v_values_4011_);
lean_dec_ref(v_xs_4010_);
v_a_4133_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4135_ = v___x_4109_;
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v___x_4109_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
v___jp_4141_:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; uint8_t v___x_4148_; 
v___x_4146_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__6));
v___x_4147_ = lean_array_get_size(v___x_4052_);
v___x_4148_ = lean_nat_dec_lt(v___x_4018_, v___x_4147_);
if (v___x_4148_ == 0)
{
v___y_4104_ = v___y_4144_;
v___y_4105_ = v___y_4143_;
v___y_4106_ = v___y_4142_;
v___y_4107_ = v___y_4145_;
v___y_4108_ = v___x_4146_;
goto v___jp_4103_;
}
else
{
size_t v___x_4149_; lean_object* v___x_4150_; 
v___x_4149_ = lean_usize_of_nat(v___x_4147_);
v___x_4150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v___x_4052_, v___x_4033_, v___x_4149_, v___x_4146_);
v___y_4104_ = v___y_4144_;
v___y_4105_ = v___y_4143_;
v___y_4106_ = v___y_4142_;
v___y_4107_ = v___y_4145_;
v___y_4108_ = v___x_4150_;
goto v___jp_4103_;
}
}
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4188_; 
lean_dec_ref(v_values_4011_);
lean_dec_ref(v_xs_4010_);
v_a_4181_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4183_ = v___x_4034_;
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4034_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___x_4186_; 
if (v_isShared_4184_ == 0)
{
v___x_4186_ = v___x_4183_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v_a_4181_);
v___x_4186_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
return v___x_4186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object* v_fnNames_4189_, lean_object* v_fixedParamPerms_4190_, lean_object* v_xs_4191_, lean_object* v_values_4192_, lean_object* v_termMeasure_x3fs_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_){
_start:
{
lean_object* v_res_4199_; 
v_res_4199_ = l_Lean_Elab_Structural_findRecArgCandidates(v_fnNames_4189_, v_fixedParamPerms_4190_, v_xs_4191_, v_values_4192_, v_termMeasure_x3fs_4193_, v_a_4194_, v_a_4195_, v_a_4196_, v_a_4197_);
lean_dec(v_a_4197_);
lean_dec_ref(v_a_4196_);
lean_dec(v_a_4195_);
lean_dec_ref(v_a_4194_);
lean_dec_ref(v_fnNames_4189_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(lean_object* v_a_4200_, lean_object* v_as_4201_, size_t v_sz_4202_, size_t v_i_4203_, lean_object* v_b_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_){
_start:
{
lean_object* v___x_4210_; 
v___x_4210_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_4200_, v_as_4201_, v_sz_4202_, v_i_4203_, v_b_4204_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___boxed(lean_object* v_a_4211_, lean_object* v_as_4212_, lean_object* v_sz_4213_, lean_object* v_i_4214_, lean_object* v_b_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_){
_start:
{
size_t v_sz_boxed_4221_; size_t v_i_boxed_4222_; lean_object* v_res_4223_; 
v_sz_boxed_4221_ = lean_unbox_usize(v_sz_4213_);
lean_dec(v_sz_4213_);
v_i_boxed_4222_ = lean_unbox_usize(v_i_4214_);
lean_dec(v_i_4214_);
v_res_4223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(v_a_4211_, v_as_4212_, v_sz_boxed_4221_, v_i_boxed_4222_, v_b_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec_ref(v___y_4216_);
lean_dec_ref(v_as_4212_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(lean_object* v_constName_4224_, uint8_t v_skipRealize_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v___x_4228_; lean_object* v_env_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4228_ = lean_st_ref_get(v___y_4226_);
v_env_4229_ = lean_ctor_get(v___x_4228_, 0);
lean_inc_ref(v_env_4229_);
lean_dec(v___x_4228_);
v___x_4230_ = l_Lean_Environment_contains(v_env_4229_, v_constName_4224_, v_skipRealize_4225_);
v___x_4231_ = lean_box(v___x_4230_);
v___x_4232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4231_);
return v___x_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg___boxed(lean_object* v_constName_4233_, lean_object* v_skipRealize_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_){
_start:
{
uint8_t v_skipRealize_boxed_4237_; lean_object* v_res_4238_; 
v_skipRealize_boxed_4237_ = lean_unbox(v_skipRealize_4234_);
v_res_4238_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v_constName_4233_, v_skipRealize_boxed_4237_, v___y_4235_);
lean_dec(v___y_4235_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(lean_object* v_constName_4239_, uint8_t v_skipRealize_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_){
_start:
{
lean_object* v___x_4246_; 
v___x_4246_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v_constName_4239_, v_skipRealize_4240_, v___y_4244_);
return v___x_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___boxed(lean_object* v_constName_4247_, lean_object* v_skipRealize_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
uint8_t v_skipRealize_boxed_4254_; lean_object* v_res_4255_; 
v_skipRealize_boxed_4254_ = lean_unbox(v_skipRealize_4248_);
v_res_4255_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(v_constName_4247_, v_skipRealize_boxed_4254_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec(v___y_4252_);
lean_dec_ref(v___y_4251_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(lean_object* v_x_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = l_Lean_Meta_saveState___redArg(v___y_4258_, v___y_4260_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4264_; 
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
lean_inc(v_a_4263_);
lean_dec_ref_known(v___x_4262_, 1);
lean_inc(v___y_4260_);
lean_inc_ref(v___y_4259_);
lean_inc(v___y_4258_);
lean_inc_ref(v___y_4257_);
v___x_4264_ = lean_apply_5(v_x_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, lean_box(0));
if (lean_obj_tag(v___x_4264_) == 0)
{
lean_dec(v_a_4263_);
return v___x_4264_;
}
else
{
lean_object* v_a_4265_; uint8_t v___y_4267_; uint8_t v___x_4285_; 
v_a_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc(v_a_4265_);
v___x_4285_ = l_Lean_Exception_isInterrupt(v_a_4265_);
if (v___x_4285_ == 0)
{
uint8_t v___x_4286_; 
lean_inc(v_a_4265_);
v___x_4286_ = l_Lean_Exception_isRuntime(v_a_4265_);
v___y_4267_ = v___x_4286_;
goto v___jp_4266_;
}
else
{
v___y_4267_ = v___x_4285_;
goto v___jp_4266_;
}
v___jp_4266_:
{
if (v___y_4267_ == 0)
{
lean_object* v___x_4268_; 
lean_dec_ref_known(v___x_4264_, 1);
v___x_4268_ = l_Lean_Meta_SavedState_restore___redArg(v_a_4263_, v___y_4258_, v___y_4260_);
lean_dec(v_a_4263_);
if (lean_obj_tag(v___x_4268_) == 0)
{
lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4268_);
if (v_isSharedCheck_4275_ == 0)
{
lean_object* v_unused_4276_; 
v_unused_4276_ = lean_ctor_get(v___x_4268_, 0);
lean_dec(v_unused_4276_);
v___x_4270_ = v___x_4268_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_dec(v___x_4268_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
lean_ctor_set_tag(v___x_4270_, 1);
lean_ctor_set(v___x_4270_, 0, v_a_4265_);
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4265_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
else
{
lean_object* v_a_4277_; lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4284_; 
lean_dec(v_a_4265_);
v_a_4277_ = lean_ctor_get(v___x_4268_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4268_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4279_ = v___x_4268_;
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
else
{
lean_inc(v_a_4277_);
lean_dec(v___x_4268_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4282_; 
if (v_isShared_4280_ == 0)
{
v___x_4282_ = v___x_4279_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4277_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
}
else
{
lean_dec(v_a_4265_);
lean_dec(v_a_4263_);
return v___x_4264_;
}
}
}
}
else
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
lean_dec_ref(v_x_4256_);
v_a_4287_ = lean_ctor_get(v___x_4262_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4262_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4262_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v___x_4262_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg___boxed(lean_object* v_x_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
lean_object* v_res_4301_; 
v_res_4301_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v_x_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_);
lean_dec(v___y_4299_);
lean_dec_ref(v___y_4298_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(lean_object* v_00_u03b1_4302_, lean_object* v_x_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v___x_4309_; 
v___x_4309_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v_x_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
return v___x_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___boxed(lean_object* v_00_u03b1_4310_, lean_object* v_x_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(v_00_u03b1_4310_, v_x_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
lean_dec(v___y_4315_);
lean_dec_ref(v___y_4314_);
lean_dec(v___y_4313_);
lean_dec_ref(v___y_4312_);
return v_res_4317_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0));
v___x_4320_ = l_Lean_stringToMessageData(v___x_4319_);
return v___x_4320_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2));
v___x_4323_ = l_Lean_stringToMessageData(v___x_4322_);
return v___x_4323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(lean_object* v___x_4324_, uint8_t v___x_4325_, lean_object* v_group_4326_, lean_object* v_k_4327_, lean_object* v_comb_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_){
_start:
{
lean_object* v___x_4334_; 
v___x_4334_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v___x_4324_, v___x_4325_, v___y_4332_);
if (lean_obj_tag(v___x_4334_) == 0)
{
lean_object* v_a_4335_; uint8_t v___x_4336_; 
v_a_4335_ = lean_ctor_get(v___x_4334_, 0);
lean_inc(v_a_4335_);
lean_dec_ref_known(v___x_4334_, 1);
v___x_4336_ = lean_unbox(v_a_4335_);
lean_dec(v_a_4335_);
if (v___x_4336_ == 0)
{
lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4337_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1);
v___x_4338_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_group_4326_);
v___x_4339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4337_);
lean_ctor_set(v___x_4339_, 1, v___x_4338_);
v___x_4340_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3);
v___x_4341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4339_);
lean_ctor_set(v___x_4341_, 1, v___x_4340_);
v___x_4342_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4341_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
if (lean_obj_tag(v___x_4342_) == 0)
{
lean_object* v___x_4343_; 
lean_dec_ref_known(v___x_4342_, 1);
v___x_4343_ = lean_apply_6(v_k_4327_, v_comb_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, lean_box(0));
return v___x_4343_;
}
else
{
lean_object* v_a_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4351_; 
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec_ref(v_comb_4328_);
lean_dec_ref(v_k_4327_);
v_a_4344_ = lean_ctor_get(v___x_4342_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4346_ = v___x_4342_;
v_isShared_4347_ = v_isSharedCheck_4351_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_a_4344_);
lean_dec(v___x_4342_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4351_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v___x_4349_; 
if (v_isShared_4347_ == 0)
{
v___x_4349_ = v___x_4346_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v_a_4344_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
}
else
{
lean_object* v___x_4352_; 
lean_dec_ref(v_group_4326_);
v___x_4352_ = lean_apply_6(v_k_4327_, v_comb_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, lean_box(0));
return v___x_4352_;
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec_ref(v_comb_4328_);
lean_dec_ref(v_k_4327_);
lean_dec_ref(v_group_4326_);
v_a_4353_ = lean_ctor_get(v___x_4334_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4334_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4334_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4334_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed(lean_object* v___x_4361_, lean_object* v___x_4362_, lean_object* v_group_4363_, lean_object* v_k_4364_, lean_object* v_comb_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
uint8_t v___x_4310__boxed_4371_; lean_object* v_res_4372_; 
v___x_4310__boxed_4371_ = lean_unbox(v___x_4362_);
v_res_4372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(v___x_4361_, v___x_4310__boxed_4371_, v_group_4363_, v_k_4364_, v_comb_4365_, v___y_4366_, v___y_4367_, v___y_4368_, v___y_4369_);
return v_res_4372_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4374_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0));
v___x_4375_ = l_Lean_stringToMessageData(v___x_4374_);
return v___x_4375_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4376_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4));
v___x_4377_ = l_Lean_stringToMessageData(v___x_4376_);
return v___x_4377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(lean_object* v_k_4378_, lean_object* v_fnNames_4379_, lean_object* v_xs_4380_, lean_object* v_values_4381_, lean_object* v_as_4382_, size_t v_sz_4383_, size_t v_i_4384_, lean_object* v_b_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_){
_start:
{
uint8_t v___x_4391_; 
v___x_4391_ = lean_usize_dec_lt(v_i_4384_, v_sz_4383_);
if (v___x_4391_ == 0)
{
lean_object* v___x_4392_; 
lean_dec_ref(v_values_4381_);
lean_dec_ref(v_xs_4380_);
lean_dec_ref(v_k_4378_);
v___x_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4392_, 0, v_b_4385_);
return v___x_4392_;
}
else
{
lean_object* v_snd_4393_; lean_object* v___x_4395_; uint8_t v_isShared_4396_; uint8_t v_isSharedCheck_4463_; 
v_snd_4393_ = lean_ctor_get(v_b_4385_, 1);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_b_4385_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; 
v_unused_4464_ = lean_ctor_get(v_b_4385_, 0);
lean_dec(v_unused_4464_);
v___x_4395_ = v_b_4385_;
v_isShared_4396_ = v_isSharedCheck_4463_;
goto v_resetjp_4394_;
}
else
{
lean_inc(v_snd_4393_);
lean_dec(v_b_4385_);
v___x_4395_ = lean_box(0);
v_isShared_4396_ = v_isSharedCheck_4463_;
goto v_resetjp_4394_;
}
v_resetjp_4394_:
{
lean_object* v_a_4397_; lean_object* v_group_4398_; lean_object* v_comb_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4462_; 
v_a_4397_ = lean_array_uget(v_as_4382_, v_i_4384_);
v_group_4398_ = lean_ctor_get(v_a_4397_, 0);
v_comb_4399_ = lean_ctor_get(v_a_4397_, 1);
v_isSharedCheck_4462_ = !lean_is_exclusive(v_a_4397_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4401_ = v_a_4397_;
v_isShared_4402_ = v_isSharedCheck_4462_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_comb_4399_);
lean_inc(v_group_4398_);
lean_dec(v_a_4397_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4462_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v_toIndGroupInfo_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___f_4408_; lean_object* v___x_4409_; 
v_toIndGroupInfo_4403_ = lean_ctor_get(v_group_4398_, 0);
v___x_4404_ = lean_box(0);
v___x_4405_ = lean_unsigned_to_nat(0u);
v___x_4406_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4403_, v___x_4405_);
v___x_4407_ = lean_box(v___x_4391_);
lean_inc_ref(v_comb_4399_);
lean_inc_ref(v_k_4378_);
v___f_4408_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_4408_, 0, v___x_4406_);
lean_closure_set(v___f_4408_, 1, v___x_4407_);
lean_closure_set(v___f_4408_, 2, v_group_4398_);
lean_closure_set(v___f_4408_, 3, v_k_4378_);
lean_closure_set(v___f_4408_, 4, v_comb_4399_);
v___x_4409_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v___f_4408_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4421_; 
lean_del_object(v___x_4401_);
lean_dec_ref(v_comb_4399_);
lean_dec_ref(v_values_4381_);
lean_dec_ref(v_xs_4380_);
lean_dec_ref(v_k_4378_);
v_a_4410_ = lean_ctor_get(v___x_4409_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4409_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4412_ = v___x_4409_;
v_isShared_4413_ = v_isSharedCheck_4421_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v___x_4409_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4421_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4414_, 0, v_a_4410_);
if (v_isShared_4396_ == 0)
{
lean_ctor_set(v___x_4395_, 0, v___x_4414_);
v___x_4416_ = v___x_4395_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v___x_4414_);
lean_ctor_set(v_reuseFailAlloc_4420_, 1, v_snd_4393_);
v___x_4416_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
lean_object* v___x_4418_; 
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 0, v___x_4416_);
v___x_4418_ = v___x_4412_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v___x_4416_);
v___x_4418_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
return v___x_4418_;
}
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4461_; 
v_a_4422_ = lean_ctor_get(v___x_4409_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4409_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4424_ = v___x_4409_;
v_isShared_4425_ = v_isSharedCheck_4461_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4409_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4461_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
uint8_t v___y_4427_; uint8_t v___x_4459_; 
v___x_4459_ = l_Lean_Exception_isInterrupt(v_a_4422_);
if (v___x_4459_ == 0)
{
uint8_t v___x_4460_; 
lean_inc(v_a_4422_);
v___x_4460_ = l_Lean_Exception_isRuntime(v_a_4422_);
v___y_4427_ = v___x_4460_;
goto v___jp_4426_;
}
else
{
v___y_4427_ = v___x_4459_;
goto v___jp_4426_;
}
v___jp_4426_:
{
if (v___y_4427_ == 0)
{
lean_object* v___x_4428_; 
lean_del_object(v___x_4424_);
lean_inc_ref(v_values_4381_);
lean_inc_ref(v_xs_4380_);
v___x_4428_ = l_Lean_Elab_Structural_prettyParameterSet(v_fnNames_4379_, v_xs_4380_, v_values_4381_, v_comb_4399_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_object* v_a_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
v_a_4429_ = lean_ctor_get(v___x_4428_, 0);
lean_inc(v_a_4429_);
lean_dec_ref_known(v___x_4428_, 1);
v___x_4430_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1);
if (v_isShared_4402_ == 0)
{
lean_ctor_set_tag(v___x_4401_, 7);
lean_ctor_set(v___x_4401_, 1, v_a_4429_);
lean_ctor_set(v___x_4401_, 0, v___x_4430_);
v___x_4432_ = v___x_4401_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4447_, 1, v_a_4429_);
v___x_4432_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4442_; 
v___x_4433_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3);
v___x_4434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4432_);
lean_ctor_set(v___x_4434_, 1, v___x_4433_);
v___x_4435_ = l_Lean_Exception_toMessageData(v_a_4422_);
v___x_4436_ = l_Lean_indentD(v___x_4435_);
v___x_4437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4434_);
lean_ctor_set(v___x_4437_, 1, v___x_4436_);
v___x_4438_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2);
v___x_4439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4437_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
v___x_4440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4440_, 0, v_snd_4393_);
lean_ctor_set(v___x_4440_, 1, v___x_4439_);
if (v_isShared_4396_ == 0)
{
lean_ctor_set(v___x_4395_, 1, v___x_4440_);
lean_ctor_set(v___x_4395_, 0, v___x_4404_);
v___x_4442_ = v___x_4395_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v___x_4404_);
lean_ctor_set(v_reuseFailAlloc_4446_, 1, v___x_4440_);
v___x_4442_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
size_t v___x_4443_; size_t v___x_4444_; 
v___x_4443_ = ((size_t)1ULL);
v___x_4444_ = lean_usize_add(v_i_4384_, v___x_4443_);
v_i_4384_ = v___x_4444_;
v_b_4385_ = v___x_4442_;
goto _start;
}
}
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_dec(v_a_4422_);
lean_del_object(v___x_4401_);
lean_del_object(v___x_4395_);
lean_dec(v_snd_4393_);
lean_dec_ref(v_values_4381_);
lean_dec_ref(v_xs_4380_);
lean_dec_ref(v_k_4378_);
v_a_4448_ = lean_ctor_get(v___x_4428_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4428_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4428_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
else
{
lean_object* v___x_4457_; 
lean_del_object(v___x_4401_);
lean_dec_ref(v_comb_4399_);
lean_del_object(v___x_4395_);
lean_dec(v_snd_4393_);
lean_dec_ref(v_values_4381_);
lean_dec_ref(v_xs_4380_);
lean_dec_ref(v_k_4378_);
if (v_isShared_4425_ == 0)
{
v___x_4457_ = v___x_4424_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4422_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___boxed(lean_object* v_k_4465_, lean_object* v_fnNames_4466_, lean_object* v_xs_4467_, lean_object* v_values_4468_, lean_object* v_as_4469_, lean_object* v_sz_4470_, lean_object* v_i_4471_, lean_object* v_b_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_){
_start:
{
size_t v_sz_boxed_4478_; size_t v_i_boxed_4479_; lean_object* v_res_4480_; 
v_sz_boxed_4478_ = lean_unbox_usize(v_sz_4470_);
lean_dec(v_sz_4470_);
v_i_boxed_4479_ = lean_unbox_usize(v_i_4471_);
lean_dec(v_i_4471_);
v_res_4480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4465_, v_fnNames_4466_, v_xs_4467_, v_values_4468_, v_as_4469_, v_sz_boxed_4478_, v_i_boxed_4479_, v_b_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec(v___y_4474_);
lean_dec_ref(v___y_4473_);
lean_dec_ref(v_as_4469_);
lean_dec_ref(v_fnNames_4466_);
return v_res_4480_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__1(void){
_start:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4482_ = ((lean_object*)(l_Lean_Elab_Structural_tryCandidates___redArg___closed__0));
v___x_4483_ = l_Lean_stringToMessageData(v___x_4482_);
return v___x_4483_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__3(void){
_start:
{
lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4485_ = ((lean_object*)(l_Lean_Elab_Structural_tryCandidates___redArg___closed__2));
v___x_4486_ = l_Lean_stringToMessageData(v___x_4485_);
return v___x_4486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object* v_fnNames_4487_, lean_object* v_xs_4488_, lean_object* v_values_4489_, lean_object* v_candidates_4490_, lean_object* v_k_4491_, lean_object* v_a_4492_, lean_object* v_a_4493_, lean_object* v_a_4494_, lean_object* v_a_4495_){
_start:
{
lean_object* v_candidates_4497_; lean_object* v_report_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4558_; 
v_candidates_4497_ = lean_ctor_get(v_candidates_4490_, 0);
v_report_4498_ = lean_ctor_get(v_candidates_4490_, 1);
v_isSharedCheck_4558_ = !lean_is_exclusive(v_candidates_4490_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4500_ = v_candidates_4490_;
v_isShared_4501_ = v_isSharedCheck_4558_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_report_4498_);
lean_inc(v_candidates_4497_);
lean_dec(v_candidates_4490_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4558_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4502_; lean_object* v___x_4504_; 
v___x_4502_ = lean_box(0);
if (v_isShared_4501_ == 0)
{
lean_ctor_set(v___x_4500_, 0, v___x_4502_);
v___x_4504_ = v___x_4500_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4557_, 1, v_report_4498_);
v___x_4504_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
size_t v_sz_4505_; size_t v___x_4506_; lean_object* v___x_4507_; 
v_sz_4505_ = lean_array_size(v_candidates_4497_);
v___x_4506_ = ((size_t)0ULL);
v___x_4507_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4491_, v_fnNames_4487_, v_xs_4488_, v_values_4489_, v_candidates_4497_, v_sz_4505_, v___x_4506_, v___x_4504_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
lean_dec_ref(v_candidates_4497_);
if (lean_obj_tag(v___x_4507_) == 0)
{
lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4548_; 
v_a_4508_ = lean_ctor_get(v___x_4507_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4510_ = v___x_4507_;
v_isShared_4511_ = v_isSharedCheck_4548_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_dec(v___x_4507_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4548_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v_fst_4512_; 
v_fst_4512_ = lean_ctor_get(v_a_4508_, 0);
if (lean_obj_tag(v_fst_4512_) == 0)
{
lean_object* v_toCold_4513_; lean_object* v_options_4514_; lean_object* v_snd_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4542_; 
lean_del_object(v___x_4510_);
v_toCold_4513_ = lean_ctor_get(v_a_4494_, 0);
v_options_4514_ = lean_ctor_get(v_toCold_4513_, 2);
v_snd_4515_ = lean_ctor_get(v_a_4508_, 1);
v_isSharedCheck_4542_ = !lean_is_exclusive(v_a_4508_);
if (v_isSharedCheck_4542_ == 0)
{
lean_object* v_unused_4543_; 
v_unused_4543_ = lean_ctor_get(v_a_4508_, 0);
lean_dec(v_unused_4543_);
v___x_4517_ = v_a_4508_;
v_isShared_4518_ = v_isSharedCheck_4542_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_snd_4515_);
lean_dec(v_a_4508_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4542_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
lean_object* v_inheritedTraceOptions_4519_; uint8_t v_hasTrace_4520_; lean_object* v___x_4521_; lean_object* v___x_4523_; 
v_inheritedTraceOptions_4519_ = lean_ctor_get(v_toCold_4513_, 11);
v_hasTrace_4520_ = lean_ctor_get_uint8(v_options_4514_, sizeof(void*)*1);
v___x_4521_ = lean_obj_once(&l_Lean_Elab_Structural_tryCandidates___redArg___closed__1, &l_Lean_Elab_Structural_tryCandidates___redArg___closed__1_once, _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__1);
if (v_isShared_4518_ == 0)
{
lean_ctor_set_tag(v___x_4517_, 7);
lean_ctor_set(v___x_4517_, 0, v___x_4521_);
v___x_4523_ = v___x_4517_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v___x_4521_);
lean_ctor_set(v_reuseFailAlloc_4541_, 1, v_snd_4515_);
v___x_4523_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
if (v_hasTrace_4520_ == 0)
{
lean_object* v___x_4524_; 
v___x_4524_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4523_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
return v___x_4524_;
}
else
{
lean_object* v___x_4525_; lean_object* v___x_4526_; uint8_t v___x_4527_; 
v___x_4525_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_4526_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4527_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4519_, v_options_4514_, v___x_4526_);
if (v___x_4527_ == 0)
{
lean_object* v___x_4528_; 
v___x_4528_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4523_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
return v___x_4528_;
}
else
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4529_ = lean_obj_once(&l_Lean_Elab_Structural_tryCandidates___redArg___closed__3, &l_Lean_Elab_Structural_tryCandidates___redArg___closed__3_once, _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__3);
lean_inc_ref(v___x_4523_);
v___x_4530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4530_, 0, v___x_4529_);
lean_ctor_set(v___x_4530_, 1, v___x_4523_);
v___x_4531_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4525_, v___x_4530_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v___x_4532_; 
lean_dec_ref_known(v___x_4531_, 1);
v___x_4532_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4523_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
return v___x_4532_;
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4540_; 
lean_dec_ref(v___x_4523_);
v_a_4533_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4535_ = v___x_4531_;
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4531_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4538_; 
if (v_isShared_4536_ == 0)
{
v___x_4538_ = v___x_4535_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v_a_4533_);
v___x_4538_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
return v___x_4538_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_val_4544_; lean_object* v___x_4546_; 
lean_inc_ref(v_fst_4512_);
lean_dec(v_a_4508_);
v_val_4544_ = lean_ctor_get(v_fst_4512_, 0);
lean_inc(v_val_4544_);
lean_dec_ref_known(v_fst_4512_, 1);
if (v_isShared_4511_ == 0)
{
lean_ctor_set(v___x_4510_, 0, v_val_4544_);
v___x_4546_ = v___x_4510_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_val_4544_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
else
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4556_; 
v_a_4549_ = lean_ctor_get(v___x_4507_, 0);
v_isSharedCheck_4556_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4551_ = v___x_4507_;
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4507_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4554_; 
if (v_isShared_4552_ == 0)
{
v___x_4554_ = v___x_4551_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_a_4549_);
v___x_4554_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
return v___x_4554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___boxed(lean_object* v_fnNames_4559_, lean_object* v_xs_4560_, lean_object* v_values_4561_, lean_object* v_candidates_4562_, lean_object* v_k_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_, lean_object* v_a_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_){
_start:
{
lean_object* v_res_4569_; 
v_res_4569_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_4559_, v_xs_4560_, v_values_4561_, v_candidates_4562_, v_k_4563_, v_a_4564_, v_a_4565_, v_a_4566_, v_a_4567_);
lean_dec(v_a_4567_);
lean_dec_ref(v_a_4566_);
lean_dec(v_a_4565_);
lean_dec_ref(v_a_4564_);
lean_dec_ref(v_fnNames_4559_);
return v_res_4569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates(lean_object* v_00_u03b1_4570_, lean_object* v_fnNames_4571_, lean_object* v_xs_4572_, lean_object* v_values_4573_, lean_object* v_candidates_4574_, lean_object* v_k_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_){
_start:
{
lean_object* v___x_4581_; 
v___x_4581_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_4571_, v_xs_4572_, v_values_4573_, v_candidates_4574_, v_k_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_);
return v___x_4581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___boxed(lean_object* v_00_u03b1_4582_, lean_object* v_fnNames_4583_, lean_object* v_xs_4584_, lean_object* v_values_4585_, lean_object* v_candidates_4586_, lean_object* v_k_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l_Lean_Elab_Structural_tryCandidates(v_00_u03b1_4582_, v_fnNames_4583_, v_xs_4584_, v_values_4585_, v_candidates_4586_, v_k_4587_, v_a_4588_, v_a_4589_, v_a_4590_, v_a_4591_);
lean_dec(v_a_4591_);
lean_dec_ref(v_a_4590_);
lean_dec(v_a_4589_);
lean_dec_ref(v_a_4588_);
lean_dec_ref(v_fnNames_4583_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(lean_object* v_00_u03b1_4594_, lean_object* v_k_4595_, lean_object* v_fnNames_4596_, lean_object* v_xs_4597_, lean_object* v_values_4598_, lean_object* v_as_4599_, size_t v_sz_4600_, size_t v_i_4601_, lean_object* v_b_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_){
_start:
{
lean_object* v___x_4608_; 
v___x_4608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4595_, v_fnNames_4596_, v_xs_4597_, v_values_4598_, v_as_4599_, v_sz_4600_, v_i_4601_, v_b_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_);
return v___x_4608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___boxed(lean_object* v_00_u03b1_4609_, lean_object* v_k_4610_, lean_object* v_fnNames_4611_, lean_object* v_xs_4612_, lean_object* v_values_4613_, lean_object* v_as_4614_, lean_object* v_sz_4615_, lean_object* v_i_4616_, lean_object* v_b_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_){
_start:
{
size_t v_sz_boxed_4623_; size_t v_i_boxed_4624_; lean_object* v_res_4625_; 
v_sz_boxed_4623_ = lean_unbox_usize(v_sz_4615_);
lean_dec(v_sz_4615_);
v_i_boxed_4624_ = lean_unbox_usize(v_i_4616_);
lean_dec(v_i_4616_);
v_res_4625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(v_00_u03b1_4609_, v_k_4610_, v_fnNames_4611_, v_xs_4612_, v_values_4613_, v_as_4614_, v_sz_boxed_4623_, v_i_boxed_4624_, v_b_4617_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
lean_dec_ref(v_as_4614_);
lean_dec_ref(v_fnNames_4611_);
return v_res_4625_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_TerminationMeasure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_TerminationMeasure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_maxCombinationSize = _init_l_Lean_Elab_Structural_maxCombinationSize();
lean_mark_persistent(l_Lean_Elab_Structural_maxCombinationSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_TerminationMeasure(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_TerminationMeasure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
}
#ifdef __cplusplus
}
#endif

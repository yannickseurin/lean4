// Lean compiler output
// Module: Lean.PrettyPrinter.Delaborator.Metavariable
// Imports: public import Lean.PrettyPrinter.Delaborator.Basic import all Lean.Elab.ErrorUtils
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
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_getPPMVars(lean_object*);
uint8_t l_Lean_getPPMVarsAnonymous(lean_object*);
lean_object* l_Lean_MVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MetavarContext_findUserName_x3f(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PPContext_runMetaM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lean_reservedMacroScope;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPMVars___boxed(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPMVarsAnonymous___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_mvar"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(160, 189, 119, 183, 234, 3, 131, 163)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_delabMVar"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 43, 235, 14, 84, 75, 70, 222)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0_value)} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPMVars___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPMVarsAnonymous___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " (unreachable)"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0_value;
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\?_"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value;
static const lean_closure_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__2_value)} };
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\n\nAdditional "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "variable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "variables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = " in this metavariable's local context: "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Variable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Variables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = " absent from this metavariable's local context: "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = " Substitution is awaiting assignment of the following "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "metavariable"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "metavariables"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3_value;
static const lean_array_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed__const__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 225, .m_capacity = 225, .m_length = 224, .m_data = "Substitution is delayed until the metavariable's value contains no metavariables, since all occurrences of the variables from its local context will need to be replaced with expressions that are valid in the current context."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "\n\nThis metavariable has been assigned."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "\n\nThis metavariable has been assigned, but it appears here via a *delayed assignment*. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "\n\nThis metavariable cannot be assigned due to the current metavariable context depth."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "\n\nThis metavariable appears here via a *delayed assignment*. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "\n\nThis metavariable has a name but it is unreachable."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "Part of the encoding of the *delayed assignment* mechanism. Represents the metavariable "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = ", which has additional local context variables. "};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "[Error: This delayed assignment refers to a metavariable not present in the metavariable context. Please report this issue.]"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 221, .m_capacity = 221, .m_length = 220, .m_data = "A metavariable representing an expression that should be solved for by unification during the elaboration process. They are created during elaboration as placeholders for implicit arguments and by `_` placeholder syntax."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 240, .m_capacity = 240, .m_length = 239, .m_data = "A metavariable representing a typeclass instance whose synthesis is still pending. They can be solved for by unification during the elaboration process, but the inferred expression and the synthesized instance must be definitionally equal."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 235, .m_capacity = 235, .m_length = 234, .m_data = "A metavariable representing a tactic goal or an expression whose elaboration is still pending. They usually act like constants until they are completely solved for. They can be created using `\?_` and `\?n` synthetic placeholder syntax."};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11_value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "[Error: This metavariable is not present in the metavariable context. Please report this issue.]"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = l_Lean_instBEqMVarId_beq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(lean_object* v_m_22_, lean_object* v_mkMVarPlaceholder_23_, lean_object* v_mkMVar_24_, lean_object* v_mkMVarDead_25_, uint8_t v_ppMVars_26_, uint8_t v_ppMVarsAnonymous_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
if (v_ppMVars_26_ == 0)
{
lean_object* v___x_33_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVar_24_);
lean_dec(v_m_22_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_33_ = lean_apply_5(v_mkMVarPlaceholder_23_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_33_;
}
else
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_MVarId_findDecl_x3f___redArg(v_m_22_, v_a_29_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v_a_35_; 
v_a_35_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_a_35_);
lean_dec_ref_known(v___x_34_, 1);
if (lean_obj_tag(v_a_35_) == 1)
{
lean_object* v_val_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_57_; 
v_val_36_ = lean_ctor_get(v_a_35_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_a_35_);
if (v_isSharedCheck_57_ == 0)
{
v___x_38_ = v_a_35_;
v_isShared_39_ = v_isSharedCheck_57_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_val_36_);
lean_dec(v_a_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_57_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v_userName_40_; 
v_userName_40_ = lean_ctor_get(v_val_36_, 0);
if (lean_obj_tag(v_userName_40_) == 0)
{
lean_del_object(v___x_38_);
lean_dec_ref(v_mkMVarDead_25_);
lean_dec(v_m_22_);
if (v_ppMVarsAnonymous_27_ == 0)
{
lean_object* v___x_41_; 
lean_dec(v_val_36_);
lean_dec_ref(v_mkMVar_24_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_41_ = lean_apply_5(v_mkMVarPlaceholder_23_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_41_;
}
else
{
lean_object* v_index_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec_ref(v_mkMVarPlaceholder_23_);
v_index_42_ = lean_ctor_get(v_val_36_, 6);
lean_inc(v_index_42_);
lean_dec(v_val_36_);
v___x_43_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__1));
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_add(v_index_42_, v___x_44_);
lean_dec(v_index_42_);
v___x_46_ = l_Lean_Name_num___override(v___x_43_, v___x_45_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_47_ = lean_apply_6(v_mkMVar_24_, v___x_46_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_47_;
}
}
else
{
lean_object* v___x_48_; lean_object* v_mctx_49_; lean_object* v___x_51_; 
lean_inc(v_userName_40_);
lean_dec(v_val_36_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
v___x_48_ = lean_st_ref_get(v_a_29_);
v_mctx_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc_ref(v_mctx_49_);
lean_dec(v___x_48_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 0, v_m_22_);
v___x_51_ = v___x_38_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_m_22_);
v___x_51_ = v_reuseFailAlloc_56_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = l_Lean_MetavarContext_findUserName_x3f(v_mctx_49_, v_userName_40_);
lean_dec_ref(v_mctx_49_);
v___x_53_ = l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v___x_51_, v___x_52_);
lean_dec(v___x_52_);
lean_dec_ref(v___x_51_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; 
lean_dec_ref(v_mkMVar_24_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_54_ = lean_apply_6(v_mkMVarDead_25_, v_userName_40_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_54_;
}
else
{
lean_object* v___x_55_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_55_ = lean_apply_6(v_mkMVar_24_, v_userName_40_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_55_;
}
}
}
}
}
else
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec(v_a_35_);
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
v___x_58_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__3));
v___x_59_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___closed__5));
v___x_60_ = l_Lean_Name_replacePrefix(v_m_22_, v___x_58_, v___x_59_);
lean_inc(v_a_31_);
lean_inc_ref(v_a_30_);
lean_inc(v_a_29_);
lean_inc_ref(v_a_28_);
v___x_61_ = lean_apply_6(v_mkMVar_24_, v___x_60_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, lean_box(0));
return v___x_61_;
}
}
else
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_69_; 
lean_dec_ref(v_mkMVarDead_25_);
lean_dec_ref(v_mkMVar_24_);
lean_dec_ref(v_mkMVarPlaceholder_23_);
lean_dec(v_m_22_);
v_a_62_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_69_ == 0)
{
v___x_64_ = v___x_34_;
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_34_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_69_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_a_62_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg___boxed(lean_object* v_m_70_, lean_object* v_mkMVarPlaceholder_71_, lean_object* v_mkMVar_72_, lean_object* v_mkMVarDead_73_, lean_object* v_ppMVars_74_, lean_object* v_ppMVarsAnonymous_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
uint8_t v_ppMVars_boxed_81_; uint8_t v_ppMVarsAnonymous_boxed_82_; lean_object* v_res_83_; 
v_ppMVars_boxed_81_ = lean_unbox(v_ppMVars_74_);
v_ppMVarsAnonymous_boxed_82_ = lean_unbox(v_ppMVarsAnonymous_75_);
v_res_83_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_70_, v_mkMVarPlaceholder_71_, v_mkMVar_72_, v_mkMVarDead_73_, v_ppMVars_boxed_81_, v_ppMVarsAnonymous_boxed_82_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(lean_object* v_00_u03b1_84_, lean_object* v_m_85_, lean_object* v_mkMVarPlaceholder_86_, lean_object* v_mkMVar_87_, lean_object* v_mkMVarDead_88_, uint8_t v_ppMVars_89_, uint8_t v_ppMVarsAnonymous_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_85_, v_mkMVarPlaceholder_86_, v_mkMVar_87_, v_mkMVarDead_88_, v_ppMVars_89_, v_ppMVarsAnonymous_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___boxed(lean_object* v_00_u03b1_97_, lean_object* v_m_98_, lean_object* v_mkMVarPlaceholder_99_, lean_object* v_mkMVar_100_, lean_object* v_mkMVarDead_101_, lean_object* v_ppMVars_102_, lean_object* v_ppMVarsAnonymous_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
uint8_t v_ppMVars_boxed_109_; uint8_t v_ppMVarsAnonymous_boxed_110_; lean_object* v_res_111_; 
v_ppMVars_boxed_109_ = lean_unbox(v_ppMVars_102_);
v_ppMVarsAnonymous_boxed_110_ = lean_unbox(v_ppMVarsAnonymous_103_);
v_res_111_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux(v_00_u03b1_97_, v_m_98_, v_mkMVarPlaceholder_99_, v_mkMVar_100_, v_mkMVarDead_101_, v_ppMVars_boxed_109_, v_ppMVarsAnonymous_boxed_110_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_ref_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_ref_117_ = lean_ctor_get(v___y_114_, 2);
v___x_118_ = 0;
v___x_119_ = l_Lean_SourceInfo_fromRef(v_ref_117_, v___x_118_);
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0___boxed(lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__0(v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_ref_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_ref_143_ = lean_ctor_get(v___y_140_, 2);
v___x_144_ = 0;
v___x_145_ = l_Lean_SourceInfo_fromRef(v_ref_143_, v___x_144_);
v___x_146_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_147_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc_n(v___x_145_, 2);
v___x_148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_145_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__6));
v___x_150_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_145_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = l_Lean_Syntax_node2(v___x_145_, v___x_146_, v___x_148_, v___x_150_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___boxed(lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1(v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(lean_object* v___f_159_, lean_object* v_n_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; 
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
lean_inc(v___y_162_);
lean_inc_ref(v___y_161_);
v___x_166_ = lean_apply_5(v___f_159_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_166_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_179_; 
v_a_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_179_ == 0)
{
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_171_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_172_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc(v_a_167_);
v___x_173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_173_, 0, v_a_167_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = l_Lean_mkIdent(v_n_160_);
v___x_175_ = l_Lean_Syntax_node2(v_a_167_, v___x_171_, v___x_173_, v___x_174_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_175_);
v___x_177_ = v___x_169_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
lean_dec(v_n_160_);
v_a_180_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_166_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_166_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2___boxed(lean_object* v___f_188_, lean_object* v_n_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__2(v___f_188_, v_n_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(lean_object* v_m_199_, lean_object* v___f_200_, lean_object* v_n_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___closed__1));
v___x_208_ = l_Lean_Name_append(v___x_207_, v_m_199_);
v___x_209_ = l_Lean_reservedMacroScope;
v___x_210_ = l_Lean_addMacroScope(v___x_208_, v_n_201_, v___x_209_);
lean_inc(v___y_205_);
lean_inc_ref(v___y_204_);
lean_inc(v___y_203_);
lean_inc_ref(v___y_202_);
v___x_211_ = lean_apply_5(v___f_200_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, lean_box(0));
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_224_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_224_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_216_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__4));
v___x_217_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
lean_inc(v_a_212_);
v___x_218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_218_, 0, v_a_212_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = l_Lean_mkIdent(v___x_210_);
v___x_220_ = l_Lean_Syntax_node2(v_a_212_, v___x_216_, v___x_218_, v___x_219_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_220_);
v___x_222_ = v___x_214_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec(v___x_210_);
v_a_225_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_211_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_211_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed(lean_object* v_m_233_, lean_object* v___f_234_, lean_object* v_n_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3(v_m_233_, v___f_234_, v_n_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux(lean_object* v_m_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___f_256_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__0));
v___f_257_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__1));
v___f_258_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__2));
lean_inc(v_m_248_);
v___f_259_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__3___boxed), 8, 2);
lean_closure_set(v___f_259_, 0, v_m_248_);
lean_closure_set(v___f_259_, 1, v___f_256_);
v___x_260_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__3));
v___x_261_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_260_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_a_262_);
lean_dec_ref_known(v___x_261_, 1);
v___x_263_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___closed__4));
v___x_264_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_263_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; uint8_t v___x_266_; uint8_t v___x_267_; lean_object* v___x_268_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_264_, 1);
v___x_266_ = lean_unbox(v_a_262_);
lean_dec(v_a_262_);
v___x_267_ = lean_unbox(v_a_265_);
lean_dec(v_a_265_);
v___x_268_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_248_, v___f_257_, v___f_258_, v___f_259_, v___x_266_, v___x_267_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
return v___x_268_;
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec(v_a_262_);
lean_dec_ref(v___f_259_);
lean_dec(v_m_248_);
v_a_269_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_264_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_264_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
lean_dec_ref(v___f_259_);
lean_dec(v_m_248_);
v_a_277_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_261_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_261_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabMVarAux___boxed(lean_object* v_m_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_PrettyPrinter_Delaborator_delabMVarAux(v_m_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(lean_object* v_n_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_301_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
v___x_302_ = 1;
v___x_303_ = l_Lean_Name_toString(v_n_295_, v___x_302_);
v___x_304_ = lean_string_append(v___x_301_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0));
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___boxed(lean_object* v_n_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0(v_n_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(lean_object* v_n_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_321_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabMVarAux___lam__1___closed__5));
v___x_322_ = 1;
v___x_323_ = l_Lean_Name_toString(v_n_315_, v___x_322_);
v___x_324_ = lean_string_append(v___x_321_, v___x_323_);
lean_dec_ref(v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1___boxed(lean_object* v_n_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__1(v_n_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(lean_object* v___x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_333_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2___boxed(lean_object* v___x_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__2(v___x_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(lean_object* v_m_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v_toCold_358_; lean_object* v_options_359_; lean_object* v___f_360_; lean_object* v___f_361_; lean_object* v___f_362_; uint8_t v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; 
v_toCold_358_ = lean_ctor_get(v_a_355_, 0);
v_options_359_ = lean_ctor_get(v_toCold_358_, 2);
v___f_360_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__0));
v___f_361_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__1));
v___f_362_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___closed__3));
v___x_363_ = l_Lean_getPPMVars(v_options_359_);
v___x_364_ = l_Lean_getPPMVarsAnonymous(v_options_359_);
v___x_365_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux___redArg(v_m_352_, v___f_362_, v___f_361_, v___f_360_, v___x_363_, v___x_364_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___boxed(lean_object* v_m_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v_m_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_372_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(lean_object* v_a_373_, lean_object* v_x_374_){
_start:
{
if (lean_obj_tag(v_x_374_) == 0)
{
uint8_t v___x_375_; 
v___x_375_ = 0;
return v___x_375_;
}
else
{
lean_object* v_key_376_; lean_object* v_tail_377_; uint8_t v___x_378_; 
v_key_376_ = lean_ctor_get(v_x_374_, 0);
v_tail_377_ = lean_ctor_get(v_x_374_, 2);
v___x_378_ = l_Lean_instBEqFVarId_beq(v_key_376_, v_a_373_);
if (v___x_378_ == 0)
{
v_x_374_ = v_tail_377_;
goto _start;
}
else
{
return v___x_378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg___boxed(lean_object* v_a_380_, lean_object* v_x_381_){
_start:
{
uint8_t v_res_382_; lean_object* v_r_383_; 
v_res_382_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_380_, v_x_381_);
lean_dec(v_x_381_);
lean_dec(v_a_380_);
v_r_383_ = lean_box(v_res_382_);
return v_r_383_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(lean_object* v_m_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_buckets_386_; lean_object* v___x_387_; uint64_t v___x_388_; uint64_t v___x_389_; uint64_t v___x_390_; uint64_t v_fold_391_; uint64_t v___x_392_; uint64_t v___x_393_; uint64_t v___x_394_; size_t v___x_395_; size_t v___x_396_; size_t v___x_397_; size_t v___x_398_; size_t v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_buckets_386_ = lean_ctor_get(v_m_384_, 1);
v___x_387_ = lean_array_get_size(v_buckets_386_);
v___x_388_ = l_Lean_instHashableFVarId_hash(v_a_385_);
v___x_389_ = 32ULL;
v___x_390_ = lean_uint64_shift_right(v___x_388_, v___x_389_);
v_fold_391_ = lean_uint64_xor(v___x_388_, v___x_390_);
v___x_392_ = 16ULL;
v___x_393_ = lean_uint64_shift_right(v_fold_391_, v___x_392_);
v___x_394_ = lean_uint64_xor(v_fold_391_, v___x_393_);
v___x_395_ = lean_uint64_to_usize(v___x_394_);
v___x_396_ = lean_usize_of_nat(v___x_387_);
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_sub(v___x_396_, v___x_397_);
v___x_399_ = lean_usize_land(v___x_395_, v___x_398_);
v___x_400_ = lean_array_uget_borrowed(v_buckets_386_, v___x_399_);
v___x_401_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_385_, v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg___boxed(lean_object* v_m_402_, lean_object* v_a_403_){
_start:
{
uint8_t v_res_404_; lean_object* v_r_405_; 
v_res_404_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_m_402_, v_a_403_);
lean_dec(v_a_403_);
lean_dec_ref(v_m_402_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_406_, lean_object* v_x_407_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
return v_x_406_;
}
else
{
lean_object* v_key_408_; lean_object* v_value_409_; lean_object* v_tail_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_433_; 
v_key_408_ = lean_ctor_get(v_x_407_, 0);
v_value_409_ = lean_ctor_get(v_x_407_, 1);
v_tail_410_ = lean_ctor_get(v_x_407_, 2);
v_isSharedCheck_433_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_433_ == 0)
{
v___x_412_ = v_x_407_;
v_isShared_413_ = v_isSharedCheck_433_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_tail_410_);
lean_inc(v_value_409_);
lean_inc(v_key_408_);
lean_dec(v_x_407_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_433_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; uint64_t v_fold_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v___x_421_; size_t v___x_422_; size_t v___x_423_; size_t v___x_424_; size_t v___x_425_; size_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_414_ = lean_array_get_size(v_x_406_);
v___x_415_ = l_Lean_instHashableFVarId_hash(v_key_408_);
v___x_416_ = 32ULL;
v___x_417_ = lean_uint64_shift_right(v___x_415_, v___x_416_);
v_fold_418_ = lean_uint64_xor(v___x_415_, v___x_417_);
v___x_419_ = 16ULL;
v___x_420_ = lean_uint64_shift_right(v_fold_418_, v___x_419_);
v___x_421_ = lean_uint64_xor(v_fold_418_, v___x_420_);
v___x_422_ = lean_uint64_to_usize(v___x_421_);
v___x_423_ = lean_usize_of_nat(v___x_414_);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_sub(v___x_423_, v___x_424_);
v___x_426_ = lean_usize_land(v___x_422_, v___x_425_);
v___x_427_ = lean_array_uget_borrowed(v_x_406_, v___x_426_);
lean_inc(v___x_427_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 2, v___x_427_);
v___x_429_ = v___x_412_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_key_408_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_value_409_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v___x_427_);
v___x_429_ = v_reuseFailAlloc_432_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; 
v___x_430_ = lean_array_uset(v_x_406_, v___x_426_, v___x_429_);
v_x_406_ = v___x_430_;
v_x_407_ = v_tail_410_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(lean_object* v_i_434_, lean_object* v_source_435_, lean_object* v_target_436_){
_start:
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_array_get_size(v_source_435_);
v___x_438_ = lean_nat_dec_lt(v_i_434_, v___x_437_);
if (v___x_438_ == 0)
{
lean_dec_ref(v_source_435_);
lean_dec(v_i_434_);
return v_target_436_;
}
else
{
lean_object* v_es_439_; lean_object* v___x_440_; lean_object* v_source_441_; lean_object* v_target_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_es_439_ = lean_array_fget(v_source_435_, v_i_434_);
v___x_440_ = lean_box(0);
v_source_441_ = lean_array_fset(v_source_435_, v_i_434_, v___x_440_);
v_target_442_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(v_target_436_, v_es_439_);
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = lean_nat_add(v_i_434_, v___x_443_);
lean_dec(v_i_434_);
v_i_434_ = v___x_444_;
v_source_435_ = v_source_441_;
v_target_436_ = v_target_442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(lean_object* v_data_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_nbuckets_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_447_ = lean_array_get_size(v_data_446_);
v___x_448_ = lean_unsigned_to_nat(2u);
v_nbuckets_449_ = lean_nat_mul(v___x_447_, v___x_448_);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_box(0);
v___x_452_ = lean_mk_array(v_nbuckets_449_, v___x_451_);
v___x_453_ = lean_array_propagate_mark(v_data_446_, v___x_452_);
v___x_454_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(v___x_450_, v_data_446_, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(lean_object* v_m_455_, lean_object* v_a_456_, lean_object* v_b_457_){
_start:
{
lean_object* v_size_458_; lean_object* v_buckets_459_; lean_object* v___x_460_; uint64_t v___x_461_; uint64_t v___x_462_; uint64_t v___x_463_; uint64_t v_fold_464_; uint64_t v___x_465_; uint64_t v___x_466_; uint64_t v___x_467_; size_t v___x_468_; size_t v___x_469_; size_t v___x_470_; size_t v___x_471_; size_t v___x_472_; lean_object* v_bkt_473_; uint8_t v___x_474_; 
v_size_458_ = lean_ctor_get(v_m_455_, 0);
v_buckets_459_ = lean_ctor_get(v_m_455_, 1);
v___x_460_ = lean_array_get_size(v_buckets_459_);
v___x_461_ = l_Lean_instHashableFVarId_hash(v_a_456_);
v___x_462_ = 32ULL;
v___x_463_ = lean_uint64_shift_right(v___x_461_, v___x_462_);
v_fold_464_ = lean_uint64_xor(v___x_461_, v___x_463_);
v___x_465_ = 16ULL;
v___x_466_ = lean_uint64_shift_right(v_fold_464_, v___x_465_);
v___x_467_ = lean_uint64_xor(v_fold_464_, v___x_466_);
v___x_468_ = lean_uint64_to_usize(v___x_467_);
v___x_469_ = lean_usize_of_nat(v___x_460_);
v___x_470_ = ((size_t)1ULL);
v___x_471_ = lean_usize_sub(v___x_469_, v___x_470_);
v___x_472_ = lean_usize_land(v___x_468_, v___x_471_);
v_bkt_473_ = lean_array_uget_borrowed(v_buckets_459_, v___x_472_);
v___x_474_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_456_, v_bkt_473_);
if (v___x_474_ == 0)
{
lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_495_; 
lean_inc_ref(v_buckets_459_);
lean_inc(v_size_458_);
v_isSharedCheck_495_ = !lean_is_exclusive(v_m_455_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; lean_object* v_unused_497_; 
v_unused_496_ = lean_ctor_get(v_m_455_, 1);
lean_dec(v_unused_496_);
v_unused_497_ = lean_ctor_get(v_m_455_, 0);
lean_dec(v_unused_497_);
v___x_476_ = v_m_455_;
v_isShared_477_ = v_isSharedCheck_495_;
goto v_resetjp_475_;
}
else
{
lean_dec(v_m_455_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_495_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v_size_x27_479_; lean_object* v___x_480_; lean_object* v_buckets_x27_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_478_ = lean_unsigned_to_nat(1u);
v_size_x27_479_ = lean_nat_add(v_size_458_, v___x_478_);
lean_dec(v_size_458_);
lean_inc(v_bkt_473_);
v___x_480_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_480_, 0, v_a_456_);
lean_ctor_set(v___x_480_, 1, v_b_457_);
lean_ctor_set(v___x_480_, 2, v_bkt_473_);
v_buckets_x27_481_ = lean_array_uset(v_buckets_459_, v___x_472_, v___x_480_);
v___x_482_ = lean_unsigned_to_nat(4u);
v___x_483_ = lean_nat_mul(v_size_x27_479_, v___x_482_);
v___x_484_ = lean_unsigned_to_nat(3u);
v___x_485_ = lean_nat_div(v___x_483_, v___x_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_array_get_size(v_buckets_x27_481_);
v___x_487_ = lean_nat_dec_le(v___x_485_, v___x_486_);
lean_dec(v___x_485_);
if (v___x_487_ == 0)
{
lean_object* v_val_488_; lean_object* v___x_490_; 
v_val_488_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(v_buckets_x27_481_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 1, v_val_488_);
lean_ctor_set(v___x_476_, 0, v_size_x27_479_);
v___x_490_ = v___x_476_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_size_x27_479_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_val_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
else
{
lean_object* v___x_493_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 1, v_buckets_x27_481_);
lean_ctor_set(v___x_476_, 0, v_size_x27_479_);
v___x_493_ = v___x_476_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_size_x27_479_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_buckets_x27_481_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
else
{
lean_dec(v_b_457_);
lean_dec(v_a_456_);
return v_m_455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(lean_object* v_val_501_, lean_object* v_as_502_, size_t v_sz_503_, size_t v_i_504_, lean_object* v_b_505_){
_start:
{
lean_object* v_a_508_; uint8_t v___x_512_; 
v___x_512_ = lean_usize_dec_lt(v_i_504_, v_sz_503_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; 
lean_dec_ref(v_val_501_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v_b_505_);
return v___x_513_;
}
else
{
lean_object* v_snd_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_604_; 
v_snd_514_ = lean_ctor_get(v_b_505_, 1);
v_isSharedCheck_604_ = !lean_is_exclusive(v_b_505_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v_b_505_, 0);
lean_dec(v_unused_605_);
v___x_516_ = v_b_505_;
v_isShared_517_ = v_isSharedCheck_604_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_snd_514_);
lean_dec(v_b_505_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_604_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v_snd_518_; lean_object* v_fst_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_603_; 
v_snd_518_ = lean_ctor_get(v_snd_514_, 1);
v_fst_519_ = lean_ctor_get(v_snd_514_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v_snd_514_);
if (v_isSharedCheck_603_ == 0)
{
v___x_521_ = v_snd_514_;
v_isShared_522_ = v_isSharedCheck_603_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_snd_518_);
lean_inc(v_fst_519_);
lean_dec(v_snd_514_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_603_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_array_523_; lean_object* v_start_524_; lean_object* v_stop_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v_array_523_ = lean_ctor_get(v_snd_518_, 0);
v_start_524_ = lean_ctor_get(v_snd_518_, 1);
v_stop_525_ = lean_ctor_get(v_snd_518_, 2);
v___x_526_ = lean_box(0);
v___x_527_ = lean_nat_dec_lt(v_start_524_, v_stop_525_);
if (v___x_527_ == 0)
{
lean_object* v___x_529_; 
lean_dec_ref(v_val_501_);
if (v_isShared_522_ == 0)
{
v___x_529_ = v___x_521_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_snd_518_);
v___x_529_ = v_reuseFailAlloc_534_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_531_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_529_);
lean_ctor_set(v___x_516_, 0, v___x_526_);
v___x_531_ = v___x_516_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_529_);
v___x_531_ = v_reuseFailAlloc_533_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_532_; 
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
}
else
{
lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_599_; 
lean_inc(v_stop_525_);
lean_inc(v_start_524_);
lean_inc_ref(v_array_523_);
v_isSharedCheck_599_ = !lean_is_exclusive(v_snd_518_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; lean_object* v_unused_601_; lean_object* v_unused_602_; 
v_unused_600_ = lean_ctor_get(v_snd_518_, 2);
lean_dec(v_unused_600_);
v_unused_601_ = lean_ctor_get(v_snd_518_, 1);
lean_dec(v_unused_601_);
v_unused_602_ = lean_ctor_get(v_snd_518_, 0);
lean_dec(v_unused_602_);
v___x_536_ = v_snd_518_;
v_isShared_537_ = v_isSharedCheck_599_;
goto v_resetjp_535_;
}
else
{
lean_dec(v_snd_518_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_599_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v_lctx_538_; lean_object* v___x_539_; lean_object* v_a_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v_lctx_538_ = lean_ctor_get(v_val_501_, 1);
v___x_539_ = lean_array_fget(v_array_523_, v_start_524_);
v_a_540_ = lean_array_uget_borrowed(v_as_502_, v_i_504_);
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = lean_nat_add(v_start_524_, v___x_541_);
lean_dec(v_start_524_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 1, v___x_542_);
v___x_544_ = v___x_536_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_array_523_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_542_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_stop_525_);
v___x_544_ = v_reuseFailAlloc_598_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = l_Lean_Expr_fvarId_x21(v_a_540_);
lean_inc_ref(v_lctx_538_);
v___x_546_ = lean_local_ctx_find(v_lctx_538_, v___x_545_);
if (lean_obj_tag(v___x_546_) == 1)
{
lean_object* v_val_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_589_; 
v_val_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_589_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_589_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_val_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_589_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_551_ = 0;
v___x_552_ = l_Lean_LocalDecl_hasValue(v_val_547_, v___x_551_);
lean_dec(v_val_547_);
if (v___x_552_ == 0)
{
if (lean_obj_tag(v___x_539_) == 1)
{
lean_object* v_fvarId_553_; uint8_t v___x_554_; 
v_fvarId_553_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_fvarId_553_);
lean_dec_ref_known(v___x_539_, 1);
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_fst_519_, v_fvarId_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_558_; 
lean_del_object(v___x_549_);
v___x_555_ = lean_box(0);
v___x_556_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(v_fst_519_, v_fvarId_553_, v___x_555_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_544_);
lean_ctor_set(v___x_521_, 0, v___x_556_);
v___x_558_ = v___x_521_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_556_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v___x_544_);
v___x_558_ = v_reuseFailAlloc_562_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
lean_object* v___x_560_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_558_);
lean_ctor_set(v___x_516_, 0, v___x_526_);
v___x_560_ = v___x_516_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
v_a_508_ = v___x_560_;
goto v___jp_507_;
}
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_565_; 
lean_dec(v_fvarId_553_);
lean_dec_ref(v_val_501_);
v___x_563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0));
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_544_);
v___x_565_ = v___x_521_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___x_544_);
v___x_565_ = v_reuseFailAlloc_572_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_567_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_565_);
lean_ctor_set(v___x_516_, 0, v___x_563_);
v___x_567_ = v___x_516_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v___x_565_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 0);
lean_ctor_set(v___x_549_, 0, v___x_567_);
v___x_569_ = v___x_549_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec(v___x_539_);
lean_dec_ref(v_val_501_);
v___x_573_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0));
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_544_);
v___x_575_ = v___x_521_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_544_);
v___x_575_ = v_reuseFailAlloc_582_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_577_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_575_);
lean_ctor_set(v___x_516_, 0, v___x_573_);
v___x_577_ = v___x_516_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_575_);
v___x_577_ = v_reuseFailAlloc_581_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 0);
lean_ctor_set(v___x_549_, 0, v___x_577_);
v___x_579_ = v___x_549_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
else
{
lean_object* v___x_584_; 
lean_del_object(v___x_549_);
lean_dec(v___x_539_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_544_);
v___x_584_ = v___x_521_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_544_);
v___x_584_ = v_reuseFailAlloc_588_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_586_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_584_);
lean_ctor_set(v___x_516_, 0, v___x_526_);
v___x_586_ = v___x_516_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
v_a_508_ = v___x_586_;
goto v___jp_507_;
}
}
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_592_; 
lean_dec(v___x_546_);
lean_dec(v___x_539_);
lean_dec_ref(v_val_501_);
v___x_590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___closed__0));
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 1, v___x_544_);
v___x_592_ = v___x_521_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_fst_519_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v___x_544_);
v___x_592_ = v_reuseFailAlloc_597_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_594_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_592_);
lean_ctor_set(v___x_516_, 0, v___x_590_);
v___x_594_ = v___x_516_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v___x_592_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
}
}
}
}
}
}
}
v___jp_507_:
{
size_t v___x_509_; size_t v___x_510_; 
v___x_509_ = ((size_t)1ULL);
v___x_510_ = lean_usize_add(v_i_504_, v___x_509_);
v_i_504_ = v___x_510_;
v_b_505_ = v_a_508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg___boxed(lean_object* v_val_606_, lean_object* v_as_607_, lean_object* v_sz_608_, lean_object* v_i_609_, lean_object* v_b_610_, lean_object* v___y_611_){
_start:
{
size_t v_sz_boxed_612_; size_t v_i_boxed_613_; lean_object* v_res_614_; 
v_sz_boxed_612_ = lean_unbox_usize(v_sz_608_);
lean_dec(v_sz_608_);
v_i_boxed_613_ = lean_unbox_usize(v_i_609_);
lean_dec(v_i_609_);
v_res_614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_606_, v_as_607_, v_sz_boxed_612_, v_i_boxed_613_, v_b_610_);
lean_dec_ref(v_as_607_);
return v_res_614_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_box(0);
v___x_616_ = l_unsafeCast___redArg(v___x_615_);
return v___x_616_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1(void){
_start:
{
lean_object* v___x_617_; lean_object* v_dummy_618_; 
v___x_617_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0, &l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0_once, _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__0);
v_dummy_618_ = l_Lean_Expr_sort___override(v___x_617_);
return v_dummy_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(lean_object* v_e_619_, lean_object* v_decl_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_fvars_626_; lean_object* v_mvarIdPending_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_695_; 
v_fvars_626_ = lean_ctor_get(v_decl_620_, 0);
v_mvarIdPending_627_ = lean_ctor_get(v_decl_620_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_decl_620_);
if (v_isSharedCheck_695_ == 0)
{
v___x_629_ = v_decl_620_;
v_isShared_630_ = v_isSharedCheck_695_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_mvarIdPending_627_);
lean_inc(v_fvars_626_);
lean_dec(v_decl_620_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_695_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_631_ = l_Lean_Expr_getAppNumArgs(v_e_619_);
v___x_632_ = lean_array_get_size(v_fvars_626_);
v___x_633_ = lean_nat_dec_eq(v___x_631_, v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec(v___x_631_);
lean_del_object(v___x_629_);
lean_dec(v_mvarIdPending_627_);
lean_dec_ref(v_fvars_626_);
lean_dec_ref(v_e_619_);
v___x_634_ = lean_box(v___x_633_);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_637_ = l_Lean_MVarId_findDecl_x3f___redArg(v_mvarIdPending_627_, v_a_622_);
lean_dec(v_mvarIdPending_627_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_686_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_686_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_686_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_686_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
if (lean_obj_tag(v_a_638_) == 1)
{
lean_object* v_val_642_; lean_object* v_dummy_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
lean_del_object(v___x_640_);
v_val_642_ = lean_ctor_get(v_a_638_, 0);
lean_inc(v_val_642_);
lean_dec_ref_known(v_a_638_, 1);
v_dummy_643_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1, &l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1_once, _init_l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___closed__1);
lean_inc(v___x_631_);
v___x_644_ = lean_mk_array(v___x_631_, v_dummy_643_);
v___x_645_ = lean_unsigned_to_nat(1u);
v___x_646_ = lean_nat_sub(v___x_631_, v___x_645_);
lean_dec(v___x_631_);
v___x_647_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_619_, v___x_644_, v___x_646_);
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_array_get_size(v___x_647_);
v___x_650_ = l_Array_toSubarray___redArg(v___x_647_, v___x_648_, v___x_649_);
v___x_651_ = lean_box(0);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v___x_650_);
lean_ctor_set(v___x_629_, 0, v___x_636_);
v___x_653_ = v___x_629_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v___x_650_);
v___x_653_ = v_reuseFailAlloc_680_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; size_t v_sz_655_; size_t v___x_656_; lean_object* v___x_657_; 
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_651_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v_sz_655_ = lean_array_size(v_fvars_626_);
v___x_656_ = ((size_t)0ULL);
v___x_657_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_642_, v_fvars_626_, v_sz_655_, v___x_656_, v___x_654_);
lean_dec_ref(v_fvars_626_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_671_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_671_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_fst_662_; 
v_fst_662_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_fst_662_);
lean_dec(v_a_658_);
if (lean_obj_tag(v_fst_662_) == 0)
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = lean_box(v___x_633_);
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
else
{
lean_object* v_val_667_; lean_object* v___x_669_; 
v_val_667_ = lean_ctor_get(v_fst_662_, 0);
lean_inc(v_val_667_);
lean_dec_ref_known(v_fst_662_, 1);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v_val_667_);
v___x_669_ = v___x_660_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_val_667_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
v_a_672_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_657_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_657_);
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
else
{
uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
lean_dec(v_a_638_);
lean_dec(v___x_631_);
lean_del_object(v___x_629_);
lean_dec_ref(v_fvars_626_);
lean_dec_ref(v_e_619_);
v___x_681_ = 0;
v___x_682_ = lean_box(v___x_681_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_682_);
v___x_684_ = v___x_640_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec(v___x_631_);
lean_del_object(v___x_629_);
lean_dec_ref(v_fvars_626_);
lean_dec_ref(v_e_619_);
v_a_687_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_637_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_637_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment___boxed(lean_object* v_e_696_, lean_object* v_decl_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(v_e_696_, v_decl_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
lean_dec(v_a_699_);
lean_dec_ref(v_a_698_);
return v_res_703_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(lean_object* v_00_u03b2_704_, lean_object* v_m_705_, lean_object* v_a_706_){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___redArg(v_m_705_, v_a_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0___boxed(lean_object* v_00_u03b2_708_, lean_object* v_m_709_, lean_object* v_a_710_){
_start:
{
uint8_t v_res_711_; lean_object* v_r_712_; 
v_res_711_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0(v_00_u03b2_708_, v_m_709_, v_a_710_);
lean_dec(v_a_710_);
lean_dec_ref(v_m_709_);
v_r_712_ = lean_box(v_res_711_);
return v_r_712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1(lean_object* v_00_u03b2_713_, lean_object* v_m_714_, lean_object* v_a_715_, lean_object* v_b_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1___redArg(v_m_714_, v_a_715_, v_b_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(lean_object* v_val_718_, lean_object* v_as_719_, size_t v_sz_720_, size_t v_i_721_, lean_object* v_b_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___redArg(v_val_718_, v_as_719_, v_sz_720_, v_i_721_, v_b_722_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2___boxed(lean_object* v_val_729_, lean_object* v_as_730_, lean_object* v_sz_731_, lean_object* v_i_732_, lean_object* v_b_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
size_t v_sz_boxed_739_; size_t v_i_boxed_740_; lean_object* v_res_741_; 
v_sz_boxed_739_ = lean_unbox_usize(v_sz_731_);
lean_dec(v_sz_731_);
v_i_boxed_740_ = lean_unbox_usize(v_i_732_);
lean_dec(v_i_732_);
v_res_741_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__2(v_val_729_, v_as_730_, v_sz_boxed_739_, v_i_boxed_740_, v_b_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec_ref(v_as_730_);
return v_res_741_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(lean_object* v_00_u03b2_742_, lean_object* v_a_743_, lean_object* v_x_744_){
_start:
{
uint8_t v___x_745_; 
v___x_745_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___redArg(v_a_743_, v_x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0___boxed(lean_object* v_00_u03b2_746_, lean_object* v_a_747_, lean_object* v_x_748_){
_start:
{
uint8_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__0_spec__0(v_00_u03b2_746_, v_a_747_, v_x_748_);
lean_dec(v_x_748_);
lean_dec(v_a_747_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2(lean_object* v_00_u03b2_751_, lean_object* v_data_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2___redArg(v_data_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_754_, lean_object* v_i_755_, lean_object* v_source_756_, lean_object* v_target_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3___redArg(v_i_755_, v_source_756_, v_target_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_759_, lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment_spec__1_spec__2_spec__3_spec__5___redArg(v_x_760_, v_x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(lean_object* v_mvarId_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; lean_object* v_mctx_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_766_ = lean_st_ref_get(v___y_764_);
v_mctx_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc_ref(v_mctx_767_);
lean_dec(v___x_766_);
v___x_768_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_767_, v_mvarId_763_);
lean_dec_ref(v_mctx_767_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg___boxed(lean_object* v_mvarId_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec(v_mvarId_770_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(lean_object* v_mvarId_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_774_, v___y_776_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___boxed(lean_object* v_mvarId_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0(v_mvarId_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_mvarId_781_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(lean_object* v_e_788_, lean_object* v___y_789_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = l_Lean_Expr_hasMVar(v_e_788_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
v___x_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_792_, 0, v_e_788_);
return v___x_792_;
}
else
{
lean_object* v___x_793_; lean_object* v_mctx_794_; lean_object* v___x_795_; lean_object* v_fst_796_; lean_object* v_snd_797_; lean_object* v___x_798_; lean_object* v_cache_799_; lean_object* v_zetaDeltaFVarIds_800_; lean_object* v_postponed_801_; lean_object* v_diag_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_811_; 
v___x_793_ = lean_st_ref_get(v___y_789_);
v_mctx_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc_ref(v_mctx_794_);
lean_dec(v___x_793_);
v___x_795_ = l_Lean_instantiateMVarsCore(v_mctx_794_, v_e_788_);
v_fst_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_fst_796_);
v_snd_797_ = lean_ctor_get(v___x_795_, 1);
lean_inc(v_snd_797_);
lean_dec_ref(v___x_795_);
v___x_798_ = lean_st_ref_take(v___y_789_);
v_cache_799_ = lean_ctor_get(v___x_798_, 1);
v_zetaDeltaFVarIds_800_ = lean_ctor_get(v___x_798_, 2);
v_postponed_801_ = lean_ctor_get(v___x_798_, 3);
v_diag_802_ = lean_ctor_get(v___x_798_, 4);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_811_ == 0)
{
lean_object* v_unused_812_; 
v_unused_812_ = lean_ctor_get(v___x_798_, 0);
lean_dec(v_unused_812_);
v___x_804_ = v___x_798_;
v_isShared_805_ = v_isSharedCheck_811_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_diag_802_);
lean_inc(v_postponed_801_);
lean_inc(v_zetaDeltaFVarIds_800_);
lean_inc(v_cache_799_);
lean_dec(v___x_798_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_811_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v_snd_797_);
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_snd_797_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_cache_799_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v_zetaDeltaFVarIds_800_);
lean_ctor_set(v_reuseFailAlloc_810_, 3, v_postponed_801_);
lean_ctor_set(v_reuseFailAlloc_810_, 4, v_diag_802_);
v___x_807_ = v_reuseFailAlloc_810_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_st_ref_put(v___y_789_, v___x_807_);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v_fst_796_);
return v___x_809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg___boxed(lean_object* v_e_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_e_813_, v___y_814_);
lean_dec(v___y_814_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(lean_object* v_e_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_e_817_, v___y_819_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___boxed(lean_object* v_e_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1(v_e_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(lean_object* v_mvarId_831_, lean_object* v___y_832_){
_start:
{
lean_object* v___x_834_; lean_object* v_mctx_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_834_ = lean_st_ref_get(v___y_832_);
v_mctx_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc_ref(v_mctx_835_);
lean_dec(v___x_834_);
v___x_836_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_835_, v_mvarId_831_);
lean_dec_ref(v_mctx_835_);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg___boxed(lean_object* v_mvarId_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec(v_mvarId_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(lean_object* v_mvarId_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_842_, v___y_844_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___boxed(lean_object* v_mvarId_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2(v_mvarId_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v_mvarId_849_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(lean_object* v_mvarIdPending_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarIdPending_856_, v_a_858_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_938_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_938_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_938_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_938_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
if (lean_obj_tag(v_a_863_) == 1)
{
lean_object* v_val_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_val_867_ = lean_ctor_get(v_a_863_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v_a_863_, 1);
v___x_868_ = l_Lean_Expr_getAppFn_x27(v_val_867_);
v___x_869_ = l_Lean_Expr_isMVar(v___x_868_);
lean_dec_ref(v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_871_; 
lean_dec(v_val_867_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v_mvarIdPending_856_);
v___x_871_ = v___x_865_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_mvarIdPending_856_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
lean_object* v___x_873_; 
lean_del_object(v___x_865_);
v___x_873_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__1___redArg(v_val_867_, v_a_858_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_926_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_926_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_926_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_926_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_Expr_consumeMData(v_a_874_);
lean_dec(v_a_874_);
if (lean_obj_tag(v___x_878_) == 2)
{
lean_object* v_mvarId_879_; lean_object* v___x_881_; 
lean_dec(v_mvarIdPending_856_);
v_mvarId_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_mvarId_879_);
lean_dec_ref_known(v___x_878_, 1);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v_mvarId_879_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_mvarId_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
else
{
lean_object* v___x_883_; 
v___x_883_ = l_Lean_Expr_getAppFn_x27(v___x_878_);
if (lean_obj_tag(v___x_883_) == 2)
{
lean_object* v_mvarId_884_; lean_object* v___x_885_; 
lean_del_object(v___x_876_);
v_mvarId_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_mvarId_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_884_, v_a_858_);
lean_dec(v_mvarId_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_914_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_914_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_914_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_914_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
if (lean_obj_tag(v_a_886_) == 1)
{
lean_object* v_val_890_; lean_object* v___x_891_; 
lean_del_object(v___x_888_);
v_val_890_ = lean_ctor_get(v_a_886_, 0);
lean_inc_n(v_val_890_, 2);
lean_dec_ref_known(v_a_886_, 1);
v___x_891_ = l_Lean_PrettyPrinter_Delaborator_checkDelayedMVarAssignment(v___x_878_, v_val_890_, v_a_857_, v_a_858_, v_a_859_, v_a_860_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_902_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_902_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_902_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_902_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___x_896_; 
v___x_896_ = lean_unbox(v_a_892_);
lean_dec(v_a_892_);
if (v___x_896_ == 0)
{
lean_object* v___x_898_; 
lean_dec(v_val_890_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v_mvarIdPending_856_);
v___x_898_ = v___x_894_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_mvarIdPending_856_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
else
{
lean_object* v_mvarIdPending_900_; 
lean_del_object(v___x_894_);
lean_dec(v_mvarIdPending_856_);
v_mvarIdPending_900_ = lean_ctor_get(v_val_890_, 1);
lean_inc(v_mvarIdPending_900_);
lean_dec(v_val_890_);
v_mvarIdPending_856_ = v_mvarIdPending_900_;
goto _start;
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_val_890_);
lean_dec(v_mvarIdPending_856_);
v_a_903_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_891_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_891_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v___x_912_; 
lean_dec(v_a_886_);
lean_dec_ref(v___x_878_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v_mvarIdPending_856_);
v___x_912_ = v___x_888_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_mvarIdPending_856_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v___x_878_);
lean_dec(v_mvarIdPending_856_);
v_a_915_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_885_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_885_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
else
{
lean_object* v___x_924_; 
lean_dec_ref(v___x_883_);
lean_dec_ref(v___x_878_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v_mvarIdPending_856_);
v___x_924_ = v___x_876_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_mvarIdPending_856_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec(v_mvarIdPending_856_);
v_a_927_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_873_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_873_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
else
{
lean_object* v___x_936_; 
lean_dec(v_a_863_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v_mvarIdPending_856_);
v___x_936_ = v___x_865_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_mvarIdPending_856_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec(v_mvarIdPending_856_);
v_a_939_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_862_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_862_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending___boxed(lean_object* v_mvarIdPending_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(v_mvarIdPending_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(lean_object* v_n_955_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_956_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___closed__0));
v___x_957_ = lean_string_append(v___x_956_, v_n_955_);
v___x_958_ = lean_string_append(v___x_957_, v___x_956_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap___boxed(lean_object* v_n_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_n_959_);
lean_dec_ref(v_n_959_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
if (lean_obj_tag(v_a_961_) == 0)
{
lean_object* v___x_963_; 
v___x_963_ = l_List_reverse___redArg(v_a_962_);
return v___x_963_;
}
else
{
lean_object* v_head_964_; lean_object* v_tail_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_984_; 
v_head_964_ = lean_ctor_get(v_a_961_, 0);
v_tail_965_ = lean_ctor_get(v_a_961_, 1);
v_isSharedCheck_984_ = !lean_is_exclusive(v_a_961_);
if (v_isSharedCheck_984_ == 0)
{
v___x_967_ = v_a_961_;
v_isShared_968_ = v_isSharedCheck_984_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_tail_965_);
lean_inc(v_head_964_);
lean_dec(v_a_961_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_984_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___y_970_; uint8_t v___x_975_; uint8_t v___x_976_; 
v___x_975_ = l_Lean_Name_hasMacroScopes(v_head_964_);
v___x_976_ = 1;
if (v___x_975_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = l_Lean_Name_toString(v_head_964_, v___x_976_);
v___x_978_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v___x_977_);
lean_dec_ref(v___x_977_);
v___y_970_ = v___x_978_;
goto v___jp_969_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_979_ = l_Lean_Name_eraseMacroScopes(v_head_964_);
lean_dec(v_head_964_);
v___x_980_ = l_Lean_Name_toString(v___x_979_, v___x_976_);
v___x_981_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr___lam__0___closed__0));
v___x_982_ = lean_string_append(v___x_980_, v___x_981_);
v___x_983_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v___x_982_);
lean_dec_ref(v___x_982_);
v___y_970_ = v___x_983_;
goto v___jp_969_;
}
v___jp_969_:
{
lean_object* v___x_972_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 1, v_a_962_);
lean_ctor_set(v___x_967_, 0, v___y_970_);
v___x_972_ = v___x_967_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___y_970_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_a_962_);
v___x_972_ = v_reuseFailAlloc_974_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v_a_961_ = v_tail_965_;
v_a_962_ = v___x_972_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(lean_object* v_ns_986_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_987_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0));
v___x_988_ = lean_box(0);
v___x_989_ = l_List_mapTR_loop___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString_spec__0(v_ns_986_, v___x_988_);
v___x_990_ = l_String_intercalate(v___x_987_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(lean_object* v_count_991_, lean_object* v_singular_992_, lean_object* v_plural_993_){
_start:
{
lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_994_ = lean_unsigned_to_nat(1u);
v___x_995_ = lean_nat_dec_eq(v_count_991_, v___x_994_);
if (v___x_995_ == 0)
{
lean_inc_ref(v_plural_993_);
return v_plural_993_;
}
else
{
lean_inc_ref(v_singular_992_);
return v_singular_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1___boxed(lean_object* v_count_996_, lean_object* v_singular_997_, lean_object* v_plural_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v_count_996_, v_singular_997_, v_plural_998_);
lean_dec_ref(v_plural_998_);
lean_dec_ref(v_singular_997_);
lean_dec(v_count_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(lean_object* v___x_1000_, lean_object* v_as_1001_, size_t v_i_1002_, size_t v_stop_1003_, lean_object* v_b_1004_){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_usize_dec_eq(v_i_1002_, v_stop_1003_);
if (v___x_1005_ == 0)
{
size_t v___x_1006_; size_t v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = ((size_t)1ULL);
v___x_1007_ = lean_usize_sub(v_i_1002_, v___x_1006_);
v___x_1008_ = lean_array_uget_borrowed(v_as_1001_, v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
v_i_1002_ = v___x_1007_;
goto _start;
}
else
{
lean_object* v_val_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_val_1010_ = lean_ctor_get(v___x_1008_, 0);
v___x_1011_ = l_Lean_LocalDecl_fvarId(v_val_1010_);
v___x_1012_ = l_Lean_LocalContext_contains(v___x_1000_, v___x_1011_);
lean_dec(v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = l_Lean_LocalDecl_userName(v_val_1010_);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v_b_1004_);
v_i_1002_ = v___x_1007_;
v_b_1004_ = v___x_1014_;
goto _start;
}
else
{
v_i_1002_ = v___x_1007_;
goto _start;
}
}
}
else
{
return v_b_1004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3___boxed(lean_object* v___x_1017_, lean_object* v_as_1018_, lean_object* v_i_1019_, lean_object* v_stop_1020_, lean_object* v_b_1021_){
_start:
{
size_t v_i_boxed_1022_; size_t v_stop_boxed_1023_; lean_object* v_res_1024_; 
v_i_boxed_1022_ = lean_unbox_usize(v_i_1019_);
lean_dec(v_i_1019_);
v_stop_boxed_1023_ = lean_unbox_usize(v_stop_1020_);
lean_dec(v_stop_1020_);
v_res_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1017_, v_as_1018_, v_i_boxed_1022_, v_stop_boxed_1023_, v_b_1021_);
lean_dec_ref(v_as_1018_);
lean_dec_ref(v___x_1017_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(lean_object* v___x_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_){
_start:
{
if (lean_obj_tag(v_x_1026_) == 0)
{
lean_object* v_cs_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v_cs_1028_ = lean_ctor_get(v_x_1026_, 0);
v___x_1029_ = lean_array_get_size(v_cs_1028_);
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = lean_nat_dec_lt(v___x_1030_, v___x_1029_);
if (v___x_1031_ == 0)
{
return v_x_1027_;
}
else
{
size_t v___x_1032_; size_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_usize_of_nat(v___x_1029_);
v___x_1033_ = ((size_t)0ULL);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(v___x_1025_, v_cs_1028_, v___x_1032_, v___x_1033_, v_x_1027_);
return v___x_1034_;
}
}
else
{
lean_object* v_vs_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v_vs_1035_ = lean_ctor_get(v_x_1026_, 0);
v___x_1036_ = lean_array_get_size(v_vs_1035_);
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = lean_nat_dec_lt(v___x_1037_, v___x_1036_);
if (v___x_1038_ == 0)
{
return v_x_1027_;
}
else
{
size_t v___x_1039_; size_t v___x_1040_; lean_object* v___x_1041_; 
v___x_1039_ = lean_usize_of_nat(v___x_1036_);
v___x_1040_ = ((size_t)0ULL);
v___x_1041_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1025_, v_vs_1035_, v___x_1039_, v___x_1040_, v_x_1027_);
return v___x_1041_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(lean_object* v___x_1042_, lean_object* v_as_1043_, size_t v_i_1044_, size_t v_stop_1045_, lean_object* v_b_1046_){
_start:
{
uint8_t v___x_1047_; 
v___x_1047_ = lean_usize_dec_eq(v_i_1044_, v_stop_1045_);
if (v___x_1047_ == 0)
{
size_t v___x_1048_; size_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1048_ = ((size_t)1ULL);
v___x_1049_ = lean_usize_sub(v_i_1044_, v___x_1048_);
v___x_1050_ = lean_array_uget_borrowed(v_as_1043_, v___x_1049_);
v___x_1051_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1042_, v___x_1050_, v_b_1046_);
v_i_1044_ = v___x_1049_;
v_b_1046_ = v___x_1051_;
goto _start;
}
else
{
return v_b_1046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v___x_1053_, lean_object* v_as_1054_, lean_object* v_i_1055_, lean_object* v_stop_1056_, lean_object* v_b_1057_){
_start:
{
size_t v_i_boxed_1058_; size_t v_stop_boxed_1059_; lean_object* v_res_1060_; 
v_i_boxed_1058_ = lean_unbox_usize(v_i_1055_);
lean_dec(v_i_1055_);
v_stop_boxed_1059_ = lean_unbox_usize(v_stop_1056_);
lean_dec(v_stop_1056_);
v_res_1060_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2_spec__3(v___x_1053_, v_as_1054_, v_i_boxed_1058_, v_stop_boxed_1059_, v_b_1057_);
lean_dec_ref(v_as_1054_);
lean_dec_ref(v___x_1053_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object* v___x_1061_, lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1061_, v_x_1062_, v_x_1063_);
lean_dec_ref(v_x_1062_);
lean_dec_ref(v___x_1061_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(lean_object* v___x_1065_, lean_object* v_t_1066_, lean_object* v_init_1067_){
_start:
{
lean_object* v_root_1068_; lean_object* v_tail_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v_root_1068_ = lean_ctor_get(v_t_1066_, 0);
v_tail_1069_ = lean_ctor_get(v_t_1066_, 1);
v___x_1070_ = lean_array_get_size(v_tail_1069_);
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = lean_nat_dec_lt(v___x_1071_, v___x_1070_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; 
v___x_1073_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1065_, v_root_1068_, v_init_1067_);
return v___x_1073_;
}
else
{
size_t v___x_1074_; size_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1074_ = lean_usize_of_nat(v___x_1070_);
v___x_1075_ = ((size_t)0ULL);
v___x_1076_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__3(v___x_1065_, v_tail_1069_, v___x_1074_, v___x_1075_, v_init_1067_);
v___x_1077_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0_spec__2(v___x_1065_, v_root_1068_, v___x_1076_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0___boxed(lean_object* v___x_1078_, lean_object* v_t_1079_, lean_object* v_init_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(v___x_1078_, v_t_1079_, v_init_1080_);
lean_dec_ref(v_t_1079_);
lean_dec_ref(v___x_1078_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(lean_object* v___x_1082_, lean_object* v_lctx_1083_, lean_object* v_init_1084_){
_start:
{
lean_object* v_decls_1085_; lean_object* v___x_1086_; 
v_decls_1085_ = lean_ctor_get(v_lctx_1083_, 1);
v___x_1086_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0_spec__0(v___x_1082_, v_decls_1085_, v_init_1084_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0___boxed(lean_object* v___x_1087_, lean_object* v_lctx_1088_, lean_object* v_init_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(v___x_1087_, v_lctx_1088_, v_init_1089_);
lean_dec_ref(v_lctx_1088_);
lean_dec_ref(v___x_1087_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(lean_object* v_mdecl_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_lctx_1099_; lean_object* v_lctx_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; 
v_lctx_1099_ = lean_ctor_get(v_a_1097_, 2);
v_lctx_1100_ = lean_ctor_get(v_mdecl_1096_, 1);
v___x_1101_ = lean_box(0);
v___x_1102_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__0(v_lctx_1099_, v_lctx_1100_, v___x_1101_);
v___x_1103_ = l_List_isEmpty___redArg(v___x_1102_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1104_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__0));
v___x_1105_ = l_List_lengthTR___redArg(v___x_1102_);
v___x_1106_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__1));
v___x_1107_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__2));
v___x_1108_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1105_, v___x_1106_, v___x_1107_);
lean_dec(v___x_1105_);
v___x_1109_ = lean_string_append(v___x_1104_, v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1110_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__3));
v___x_1111_ = lean_string_append(v___x_1109_, v___x_1110_);
v___x_1112_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(v___x_1102_);
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
lean_dec_ref(v___x_1112_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
return v___x_1114_;
}
else
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec(v___x_1102_);
v___x_1115_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___boxed(lean_object* v_mdecl_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_mdecl_1117_, v_a_1118_);
lean_dec_ref(v_a_1118_);
lean_dec_ref(v_mdecl_1117_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(lean_object* v_mdecl_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_mdecl_1121_, v_a_1122_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___boxed(lean_object* v_mdecl_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars(v_mdecl_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
lean_dec(v_a_1132_);
lean_dec_ref(v_a_1131_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
lean_dec_ref(v_mdecl_1128_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(lean_object* v_lctxInitIndices_1135_, lean_object* v_mdecl_1136_, lean_object* v_as_1137_, size_t v_i_1138_, size_t v_stop_1139_, lean_object* v_b_1140_){
_start:
{
uint8_t v___x_1141_; 
v___x_1141_ = lean_usize_dec_eq(v_i_1138_, v_stop_1139_);
if (v___x_1141_ == 0)
{
size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
v___x_1142_ = ((size_t)1ULL);
v___x_1143_ = lean_usize_sub(v_i_1138_, v___x_1142_);
v___x_1144_ = lean_array_uget_borrowed(v_as_1137_, v___x_1143_);
if (lean_obj_tag(v___x_1144_) == 0)
{
v_i_1138_ = v___x_1143_;
goto _start;
}
else
{
lean_object* v_val_1146_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v_val_1146_ = lean_ctor_get(v___x_1144_, 0);
v___x_1147_ = l_Lean_LocalDecl_index(v_val_1146_);
v___x_1148_ = lean_nat_dec_le(v_lctxInitIndices_1135_, v___x_1147_);
lean_dec(v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v_lctx_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v_lctx_1149_ = lean_ctor_get(v_mdecl_1136_, 1);
v___x_1150_ = l_Lean_LocalDecl_fvarId(v_val_1146_);
v___x_1151_ = l_Lean_LocalContext_contains(v_lctx_1149_, v___x_1150_);
lean_dec(v___x_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = l_Lean_LocalDecl_userName(v_val_1146_);
v___x_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v_b_1140_);
v_i_1138_ = v___x_1143_;
v_b_1140_ = v___x_1153_;
goto _start;
}
else
{
v_i_1138_ = v___x_1143_;
goto _start;
}
}
else
{
v_i_1138_ = v___x_1143_;
goto _start;
}
}
}
else
{
return v_b_1140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2___boxed(lean_object* v_lctxInitIndices_1157_, lean_object* v_mdecl_1158_, lean_object* v_as_1159_, lean_object* v_i_1160_, lean_object* v_stop_1161_, lean_object* v_b_1162_){
_start:
{
size_t v_i_boxed_1163_; size_t v_stop_boxed_1164_; lean_object* v_res_1165_; 
v_i_boxed_1163_ = lean_unbox_usize(v_i_1160_);
lean_dec(v_i_1160_);
v_stop_boxed_1164_ = lean_unbox_usize(v_stop_1161_);
lean_dec(v_stop_1161_);
v_res_1165_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1157_, v_mdecl_1158_, v_as_1159_, v_i_boxed_1163_, v_stop_boxed_1164_, v_b_1162_);
lean_dec_ref(v_as_1159_);
lean_dec_ref(v_mdecl_1158_);
lean_dec(v_lctxInitIndices_1157_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(lean_object* v_lctxInitIndices_1166_, lean_object* v_mdecl_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_object* v_cs_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v_cs_1170_ = lean_ctor_get(v_x_1168_, 0);
v___x_1171_ = lean_array_get_size(v_cs_1170_);
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1173_ = lean_nat_dec_lt(v___x_1172_, v___x_1171_);
if (v___x_1173_ == 0)
{
return v_x_1169_;
}
else
{
size_t v___x_1174_; size_t v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_usize_of_nat(v___x_1171_);
v___x_1175_ = ((size_t)0ULL);
v___x_1176_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(v_lctxInitIndices_1166_, v_mdecl_1167_, v_cs_1170_, v___x_1174_, v___x_1175_, v_x_1169_);
return v___x_1176_;
}
}
else
{
lean_object* v_vs_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; 
v_vs_1177_ = lean_ctor_get(v_x_1168_, 0);
v___x_1178_ = lean_array_get_size(v_vs_1177_);
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_nat_dec_lt(v___x_1179_, v___x_1178_);
if (v___x_1180_ == 0)
{
return v_x_1169_;
}
else
{
size_t v___x_1181_; size_t v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_usize_of_nat(v___x_1178_);
v___x_1182_ = ((size_t)0ULL);
v___x_1183_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1166_, v_mdecl_1167_, v_vs_1177_, v___x_1181_, v___x_1182_, v_x_1169_);
return v___x_1183_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(lean_object* v_lctxInitIndices_1184_, lean_object* v_mdecl_1185_, lean_object* v_as_1186_, size_t v_i_1187_, size_t v_stop_1188_, lean_object* v_b_1189_){
_start:
{
uint8_t v___x_1190_; 
v___x_1190_ = lean_usize_dec_eq(v_i_1187_, v_stop_1188_);
if (v___x_1190_ == 0)
{
size_t v___x_1191_; size_t v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1191_ = ((size_t)1ULL);
v___x_1192_ = lean_usize_sub(v_i_1187_, v___x_1191_);
v___x_1193_ = lean_array_uget_borrowed(v_as_1186_, v___x_1192_);
v___x_1194_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1184_, v_mdecl_1185_, v___x_1193_, v_b_1189_);
v_i_1187_ = v___x_1192_;
v_b_1189_ = v___x_1194_;
goto _start;
}
else
{
return v_b_1189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_lctxInitIndices_1196_, lean_object* v_mdecl_1197_, lean_object* v_as_1198_, lean_object* v_i_1199_, lean_object* v_stop_1200_, lean_object* v_b_1201_){
_start:
{
size_t v_i_boxed_1202_; size_t v_stop_boxed_1203_; lean_object* v_res_1204_; 
v_i_boxed_1202_ = lean_unbox_usize(v_i_1199_);
lean_dec(v_i_1199_);
v_stop_boxed_1203_ = lean_unbox_usize(v_stop_1200_);
lean_dec(v_stop_1200_);
v_res_1204_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1_spec__2(v_lctxInitIndices_1196_, v_mdecl_1197_, v_as_1198_, v_i_boxed_1202_, v_stop_boxed_1203_, v_b_1201_);
lean_dec_ref(v_as_1198_);
lean_dec_ref(v_mdecl_1197_);
lean_dec(v_lctxInitIndices_1196_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1___boxed(lean_object* v_lctxInitIndices_1205_, lean_object* v_mdecl_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1205_, v_mdecl_1206_, v_x_1207_, v_x_1208_);
lean_dec_ref(v_x_1207_);
lean_dec_ref(v_mdecl_1206_);
lean_dec(v_lctxInitIndices_1205_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(lean_object* v_lctxInitIndices_1210_, lean_object* v_mdecl_1211_, lean_object* v_t_1212_, lean_object* v_init_1213_){
_start:
{
lean_object* v_root_1214_; lean_object* v_tail_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v_root_1214_ = lean_ctor_get(v_t_1212_, 0);
v_tail_1215_ = lean_ctor_get(v_t_1212_, 1);
v___x_1216_ = lean_array_get_size(v_tail_1215_);
v___x_1217_ = lean_unsigned_to_nat(0u);
v___x_1218_ = lean_nat_dec_lt(v___x_1217_, v___x_1216_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; 
v___x_1219_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1210_, v_mdecl_1211_, v_root_1214_, v_init_1213_);
return v___x_1219_;
}
else
{
size_t v___x_1220_; size_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1220_ = lean_usize_of_nat(v___x_1216_);
v___x_1221_ = ((size_t)0ULL);
v___x_1222_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__2(v_lctxInitIndices_1210_, v_mdecl_1211_, v_tail_1215_, v___x_1220_, v___x_1221_, v_init_1213_);
v___x_1223_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0_spec__1(v_lctxInitIndices_1210_, v_mdecl_1211_, v_root_1214_, v___x_1222_);
return v___x_1223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0___boxed(lean_object* v_lctxInitIndices_1224_, lean_object* v_mdecl_1225_, lean_object* v_t_1226_, lean_object* v_init_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(v_lctxInitIndices_1224_, v_mdecl_1225_, v_t_1226_, v_init_1227_);
lean_dec_ref(v_t_1226_);
lean_dec_ref(v_mdecl_1225_);
lean_dec(v_lctxInitIndices_1224_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(lean_object* v_lctxInitIndices_1229_, lean_object* v_mdecl_1230_, lean_object* v_lctx_1231_, lean_object* v_init_1232_){
_start:
{
lean_object* v_decls_1233_; lean_object* v___x_1234_; 
v_decls_1233_ = lean_ctor_get(v_lctx_1231_, 1);
v___x_1234_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0_spec__0(v_lctxInitIndices_1229_, v_mdecl_1230_, v_decls_1233_, v_init_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0___boxed(lean_object* v_lctxInitIndices_1235_, lean_object* v_mdecl_1236_, lean_object* v_lctx_1237_, lean_object* v_init_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(v_lctxInitIndices_1235_, v_mdecl_1236_, v_lctx_1237_, v_init_1238_);
lean_dec_ref(v_lctx_1237_);
lean_dec_ref(v_mdecl_1236_);
lean_dec(v_lctxInitIndices_1235_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(lean_object* v_lctxInitIndices_1244_, lean_object* v_mdecl_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_lctx_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v_lctx_1248_ = lean_ctor_get(v_a_1246_, 2);
v___x_1249_ = lean_box(0);
v___x_1250_ = l_Lean_LocalContext_foldrM___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars_spec__0(v_lctxInitIndices_1244_, v_mdecl_1245_, v_lctx_1248_, v___x_1249_);
v___x_1251_ = l_List_isEmpty___redArg(v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1252_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__0));
v___x_1253_ = l_List_lengthTR___redArg(v___x_1250_);
v___x_1254_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__1));
v___x_1255_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__2));
v___x_1256_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1253_, v___x_1254_, v___x_1255_);
lean_dec(v___x_1253_);
v___x_1257_ = lean_string_append(v___x_1252_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___closed__3));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString(v___x_1250_);
v___x_1261_ = lean_string_append(v___x_1259_, v___x_1260_);
lean_dec_ref(v___x_1260_);
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_dec(v___x_1250_);
v___x_1263_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
return v___x_1264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg___boxed(lean_object* v_lctxInitIndices_1265_, lean_object* v_mdecl_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1265_, v_mdecl_1266_, v_a_1267_);
lean_dec_ref(v_a_1267_);
lean_dec_ref(v_mdecl_1266_);
lean_dec(v_lctxInitIndices_1265_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(lean_object* v_lctxInitIndices_1270_, lean_object* v_mdecl_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1270_, v_mdecl_1271_, v_a_1272_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___boxed(lean_object* v_lctxInitIndices_1278_, lean_object* v_mdecl_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars(v_lctxInitIndices_1278_, v_mdecl_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_a_1281_);
lean_dec_ref(v_a_1280_);
lean_dec_ref(v_mdecl_1279_);
lean_dec(v_lctxInitIndices_1278_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(size_t v_sz_1286_, size_t v_i_1287_, lean_object* v_bs_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
uint8_t v___x_1294_; 
v___x_1294_ = lean_usize_dec_lt(v_i_1287_, v_sz_1286_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = l_unsafeCast___redArg(v_bs_1288_);
lean_dec_ref(v_bs_1288_);
v___x_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
return v___x_1296_;
}
else
{
lean_object* v_v_1297_; lean_object* v___x_1298_; lean_object* v_bs_x27_1299_; lean_object* v_a_1301_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_v_1297_ = lean_array_uget(v_bs_1288_, v_i_1287_);
v___x_1298_ = lean_unsigned_to_nat(0u);
v_bs_x27_1299_ = lean_array_uset(v_bs_1288_, v_i_1287_, v___x_1298_);
v___x_1307_ = l_unsafeCast___redArg(v_v_1297_);
lean_dec(v_v_1297_);
v___x_1308_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v___x_1307_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v___x_1310_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_a_1309_);
lean_dec(v_a_1309_);
v_a_1301_ = v___x_1310_;
goto v___jp_1300_;
}
else
{
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1311_; 
v_a_1311_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1308_, 1);
v_a_1301_ = v_a_1311_;
goto v___jp_1300_;
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref(v_bs_x27_1299_);
v_a_1312_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1308_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1308_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
v___jp_1300_:
{
size_t v___x_1302_; size_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1302_ = ((size_t)1ULL);
v___x_1303_ = lean_usize_add(v_i_1287_, v___x_1302_);
v___x_1304_ = l_unsafeCast___redArg(v_a_1301_);
lean_dec_ref(v_a_1301_);
v___x_1305_ = lean_array_uset(v_bs_x27_1299_, v_i_1287_, v___x_1304_);
v_i_1287_ = v___x_1303_;
v_bs_1288_ = v___x_1305_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0___boxed(lean_object* v_sz_1320_, lean_object* v_i_1321_, lean_object* v_bs_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
size_t v_sz_boxed_1328_; size_t v_i_boxed_1329_; lean_object* v_res_1330_; 
v_sz_boxed_1328_ = lean_unbox_usize(v_sz_1320_);
lean_dec(v_sz_1320_);
v_i_boxed_1329_ = lean_unbox_usize(v_i_1321_);
lean_dec(v_i_1321_);
v_res_1330_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0(v_sz_boxed_1328_, v_i_boxed_1329_, v_bs_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(lean_object* v___x_1333_, lean_object* v_as_1334_, size_t v_i_1335_, size_t v_stop_1336_, lean_object* v_b_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_a_1344_; uint8_t v___x_1348_; 
v___x_1348_ = lean_usize_dec_eq(v_i_1335_, v_stop_1336_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = lean_array_uget_borrowed(v_as_1334_, v_i_1335_);
lean_inc(v___x_1349_);
v___x_1350_ = l_Lean_MVarId_getDecl(v___x_1349_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v_lctx_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v_lctx_1352_ = lean_ctor_get(v_a_1351_, 1);
lean_inc_ref(v_lctx_1352_);
lean_dec(v_a_1351_);
v___x_1353_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0));
v___x_1354_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_1352_, v___x_1333_, v___x_1353_);
lean_dec_ref(v_lctx_1352_);
if (v___x_1354_ == 0)
{
lean_object* v___x_1355_; 
lean_inc(v___x_1349_);
v___x_1355_ = lean_array_push(v_b_1337_, v___x_1349_);
v_a_1344_ = v___x_1355_;
goto v___jp_1343_;
}
else
{
v_a_1344_ = v_b_1337_;
goto v___jp_1343_;
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v_b_1337_);
v_a_1356_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1350_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1350_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_b_1337_);
return v___x_1364_;
}
v___jp_1343_:
{
size_t v___x_1345_; size_t v___x_1346_; 
v___x_1345_ = ((size_t)1ULL);
v___x_1346_ = lean_usize_add(v_i_1335_, v___x_1345_);
v_i_1335_ = v___x_1346_;
v_b_1337_ = v_a_1344_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___boxed(lean_object* v___x_1365_, lean_object* v_as_1366_, lean_object* v_i_1367_, lean_object* v_stop_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
size_t v_i_boxed_1375_; size_t v_stop_boxed_1376_; lean_object* v_res_1377_; 
v_i_boxed_1375_ = lean_unbox_usize(v_i_1367_);
lean_dec(v_i_1367_);
v_stop_boxed_1376_ = lean_unbox_usize(v_stop_1368_);
lean_dec(v_stop_1368_);
v_res_1377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(v___x_1365_, v_as_1366_, v_i_boxed_1375_, v_stop_boxed_1376_, v_b_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec_ref(v_as_1366_);
lean_dec_ref(v___x_1365_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(lean_object* v_e_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v_awaitingMVars_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_Meta_getMVarsNoDelayed(v_e_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v_a_1441_; lean_object* v___y_1446_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = lean_array_get_size(v_a_1439_);
v___x_1458_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__4));
v___x_1459_ = lean_nat_dec_lt(v___x_1456_, v___x_1457_);
if (v___x_1459_ == 0)
{
v_a_1441_ = v___x_1458_;
goto v___jp_1440_;
}
else
{
lean_object* v_lctx_1460_; uint8_t v___x_1461_; 
v_lctx_1460_ = lean_ctor_get(v_a_1387_, 2);
v___x_1461_ = lean_nat_dec_le(v___x_1457_, v___x_1457_);
if (v___x_1461_ == 0)
{
if (v___x_1459_ == 0)
{
v_a_1441_ = v___x_1458_;
goto v___jp_1440_;
}
else
{
size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = ((size_t)0ULL);
v___x_1463_ = lean_usize_of_nat(v___x_1457_);
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(v_lctx_1460_, v_a_1439_, v___x_1462_, v___x_1463_, v___x_1458_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_);
v___y_1446_ = v___x_1464_;
goto v___jp_1445_;
}
}
else
{
size_t v___x_1465_; size_t v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = ((size_t)0ULL);
v___x_1466_ = lean_usize_of_nat(v___x_1457_);
v___x_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1(v_lctx_1460_, v_a_1439_, v___x_1465_, v___x_1466_, v___x_1458_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_);
v___y_1446_ = v___x_1467_;
goto v___jp_1445_;
}
}
v___jp_1440_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v___x_1442_ = lean_array_get_size(v_a_1441_);
v___x_1443_ = lean_unsigned_to_nat(0u);
v___x_1444_ = lean_nat_dec_eq(v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_dec(v_a_1439_);
v_awaitingMVars_1393_ = v_a_1441_;
v___y_1394_ = v_a_1387_;
v___y_1395_ = v_a_1388_;
v___y_1396_ = v_a_1389_;
v___y_1397_ = v_a_1390_;
goto v___jp_1392_;
}
else
{
lean_dec_ref(v_a_1441_);
v_awaitingMVars_1393_ = v_a_1439_;
v___y_1394_ = v_a_1387_;
v___y_1395_ = v_a_1388_;
v___y_1396_ = v_a_1389_;
v___y_1397_ = v_a_1390_;
goto v___jp_1392_;
}
}
v___jp_1445_:
{
if (lean_obj_tag(v___y_1446_) == 0)
{
lean_object* v_a_1447_; 
v_a_1447_ = lean_ctor_get(v___y_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___y_1446_, 1);
v_a_1441_ = v_a_1447_;
goto v___jp_1440_;
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v_a_1439_);
v_a_1448_ = lean_ctor_get(v___y_1446_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___y_1446_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___y_1446_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___y_1446_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
v_a_1468_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1438_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1438_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
v___jp_1392_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; 
v___x_1398_ = lean_array_get_size(v_awaitingMVars_1393_);
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = lean_nat_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
size_t v_sz_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_2337__overap_1406_; lean_object* v___x_1407_; 
v_sz_1401_ = lean_array_size(v_awaitingMVars_1393_);
v___x_1402_ = l_unsafeCast___redArg(v_awaitingMVars_1393_);
lean_dec_ref(v_awaitingMVars_1393_);
v___x_1403_ = lean_box_usize(v_sz_1401_);
v___x_1404_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed__const__1));
v___x_1405_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__0___boxed), 8, 3);
lean_closure_set(v___x_1405_, 0, v___x_1403_);
lean_closure_set(v___x_1405_, 1, v___x_1404_);
lean_closure_set(v___x_1405_, 2, v___x_1402_);
v___x_2337__overap_1406_ = l_unsafeCast___redArg(v___x_1405_);
lean_dec_ref(v___x_1405_);
lean_inc(v___y_1397_);
lean_inc_ref(v___y_1396_);
lean_inc(v___y_1395_);
lean_inc_ref(v___y_1394_);
v___x_1407_ = lean_apply_5(v___x_2337__overap_1406_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, lean_box(0));
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1427_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1410_ = v___x_1407_;
v_isShared_1411_ = v_isSharedCheck_1427_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1407_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1427_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1412_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__0));
v___x_1413_ = lean_array_get_size(v_a_1408_);
v___x_1414_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__1));
v___x_1415_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__2));
v___x_1416_ = l___private_Lean_Elab_ErrorUtils_0__Nat_plural___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars_spec__1(v___x_1413_, v___x_1414_, v___x_1415_);
v___x_1417_ = lean_string_append(v___x_1412_, v___x_1416_);
lean_dec_ref(v___x_1416_);
v___x_1418_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___closed__3));
v___x_1419_ = lean_string_append(v___x_1417_, v___x_1418_);
v___x_1420_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_namesToString___closed__0));
v___x_1421_ = lean_array_to_list(v_a_1408_);
v___x_1422_ = l_String_intercalate(v___x_1420_, v___x_1421_);
v___x_1423_ = lean_string_append(v___x_1419_, v___x_1422_);
lean_dec_ref(v___x_1422_);
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 0, v___x_1423_);
v___x_1425_ = v___x_1410_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1407_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1407_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
lean_dec_ref(v_awaitingMVars_1393_);
v___x_1436_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg___closed__4));
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting___boxed(lean_object* v_e_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_e_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec(v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec_ref(v_a_1477_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(lean_object* v_mvarId_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; lean_object* v_mctx_1487_; lean_object* v_decl_1488_; lean_object* v_depth_1489_; lean_object* v_depth_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1486_ = lean_st_ref_get(v___y_1484_);
v_mctx_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc_ref(v_mctx_1487_);
lean_dec(v___x_1486_);
v_decl_1488_ = l_Lean_MetavarContext_getDecl(v_mctx_1487_, v_mvarId_1483_);
v_depth_1489_ = lean_ctor_get(v_decl_1488_, 3);
lean_inc(v_depth_1489_);
lean_dec_ref(v_decl_1488_);
v_depth_1490_ = lean_ctor_get(v_mctx_1487_, 0);
lean_inc(v_depth_1490_);
lean_dec_ref(v_mctx_1487_);
v___x_1491_ = lean_nat_dec_eq(v_depth_1489_, v_depth_1490_);
lean_dec(v_depth_1490_);
lean_dec(v_depth_1489_);
v___x_1492_ = lean_box(v___x_1491_);
v___x_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg___boxed(lean_object* v_mvarId_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1494_, v___y_1495_);
lean_dec(v___y_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(lean_object* v_mvarId_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1498_, v___y_1500_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___boxed(lean_object* v_mvarId_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0(v_mvarId_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(lean_object* v_mvarId_1525_, lean_object* v_lctxInitIndices_1526_, uint8_t v_fromDelayed_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v_delayedExpl_1533_; lean_object* v___x_1534_; 
v_delayedExpl_1533_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__0));
v___x_1534_ = l_Lean_MVarId_findDecl_x3f___redArg(v_mvarId_1525_, v_a_1529_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1694_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1537_ = v___x_1534_;
v_isShared_1538_ = v_isSharedCheck_1694_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1534_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1694_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
if (lean_obj_tag(v_a_1535_) == 1)
{
lean_object* v_val_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1689_; 
lean_del_object(v___x_1537_);
v_val_1539_ = lean_ctor_get(v_a_1535_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_a_1535_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1541_ = v_a_1535_;
v_isShared_1542_ = v_isSharedCheck_1689_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_val_1539_);
lean_dec(v_a_1535_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1689_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v_msg_1557_; lean_object* v___y_1558_; lean_object* v_msg_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; uint8_t v___y_1604_; lean_object* v_msg_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___x_1622_; lean_object* v_a_1623_; 
v___x_1622_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__2___redArg(v_mvarId_1525_, v_a_1529_);
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1623_);
lean_dec_ref(v___x_1622_);
if (lean_obj_tag(v_a_1623_) == 1)
{
lean_object* v_val_1624_; lean_object* v_mvarIdPending_1625_; lean_object* v___x_1626_; 
lean_del_object(v___x_1541_);
lean_dec(v_val_1539_);
lean_dec(v_mvarId_1525_);
v_val_1624_ = lean_ctor_get(v_a_1623_, 0);
lean_inc(v_val_1624_);
lean_dec_ref_known(v_a_1623_, 1);
v_mvarIdPending_1625_ = lean_ctor_get(v_val_1624_, 1);
lean_inc(v_mvarIdPending_1625_);
lean_dec(v_val_1624_);
v___x_1626_ = l_Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending(v_mvarIdPending_1625_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1628_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_a_1627_);
lean_dec_ref_known(v___x_1626_, 1);
v___x_1628_ = l_Lean_MVarId_findDecl_x3f___redArg(v_a_1627_, v_a_1529_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1668_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1631_ = v___x_1628_;
v_isShared_1632_ = v_isSharedCheck_1668_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1628_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1668_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
if (lean_obj_tag(v_a_1629_) == 1)
{
lean_object* v_val_1633_; lean_object* v_msg_1635_; lean_object* v___y_1636_; lean_object* v_a_1648_; lean_object* v___x_1660_; 
lean_del_object(v___x_1631_);
v_val_1633_ = lean_ctor_get(v_a_1629_, 0);
lean_inc(v_val_1633_);
lean_dec_ref_known(v_a_1629_, 1);
lean_inc(v_a_1627_);
v___x_1660_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAsStr(v_a_1627_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1662_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1660_, 1);
v___x_1662_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_wrap(v_a_1661_);
lean_dec(v_a_1661_);
v_a_1648_ = v___x_1662_;
goto v___jp_1647_;
}
else
{
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1663_; 
v_a_1663_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1660_, 1);
v_a_1648_ = v_a_1663_;
goto v___jp_1647_;
}
else
{
lean_dec(v_val_1633_);
lean_dec(v_a_1627_);
return v___x_1660_;
}
}
v___jp_1634_:
{
lean_object* v___x_1637_; lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1646_; 
v___x_1637_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_val_1633_, v___y_1636_);
lean_dec(v_val_1633_);
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1640_ = v___x_1637_;
v_isShared_1641_ = v_isSharedCheck_1646_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1637_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1646_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1642_ = lean_string_append(v_msg_1635_, v_a_1638_);
lean_dec(v_a_1638_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v___x_1642_);
v___x_1644_ = v___x_1640_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v_a_1655_; 
v___x_1649_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__6));
v___x_1650_ = lean_string_append(v___x_1649_, v_a_1648_);
lean_dec_ref(v_a_1648_);
v___x_1651_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__7));
v___x_1652_ = lean_string_append(v___x_1650_, v___x_1651_);
v___x_1653_ = lean_string_append(v___x_1652_, v_delayedExpl_1533_);
v___x_1654_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_a_1627_, v_a_1529_);
lean_dec(v_a_1627_);
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref(v___x_1654_);
if (lean_obj_tag(v_a_1655_) == 1)
{
lean_object* v_val_1656_; lean_object* v___x_1657_; 
v_val_1656_ = lean_ctor_get(v_a_1655_, 0);
lean_inc(v_val_1656_);
lean_dec_ref_known(v_a_1655_, 1);
v___x_1657_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_val_1656_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1659_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_a_1658_);
lean_dec_ref_known(v___x_1657_, 1);
v___x_1659_ = lean_string_append(v___x_1653_, v_a_1658_);
lean_dec(v_a_1658_);
v_msg_1635_ = v___x_1659_;
v___y_1636_ = v_a_1528_;
goto v___jp_1634_;
}
else
{
lean_dec_ref(v___x_1653_);
lean_dec(v_val_1633_);
return v___x_1657_;
}
}
else
{
lean_dec(v_a_1655_);
v_msg_1635_ = v___x_1653_;
v___y_1636_ = v_a_1528_;
goto v___jp_1634_;
}
}
}
else
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
lean_dec(v_a_1629_);
lean_dec(v_a_1627_);
v___x_1664_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__8));
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 0, v___x_1664_);
v___x_1666_ = v___x_1631_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_dec(v_a_1627_);
v_a_1669_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1628_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1628_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_a_1677_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1626_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1626_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
else
{
uint8_t v_kind_1685_; 
lean_dec(v_a_1623_);
v_kind_1685_ = lean_ctor_get_uint8(v_val_1539_, sizeof(void*)*7);
switch(v_kind_1685_)
{
case 0:
{
lean_object* v___x_1686_; 
v___x_1686_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__9));
v_msg_1608_ = v___x_1686_;
v___y_1609_ = v_a_1528_;
v___y_1610_ = v_a_1529_;
v___y_1611_ = v_a_1530_;
v___y_1612_ = v_a_1531_;
goto v___jp_1607_;
}
case 1:
{
lean_object* v___x_1687_; 
v___x_1687_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__10));
v_msg_1608_ = v___x_1687_;
v___y_1609_ = v_a_1528_;
v___y_1610_ = v_a_1529_;
v___y_1611_ = v_a_1530_;
v___y_1612_ = v_a_1531_;
goto v___jp_1607_;
}
default: 
{
lean_object* v___x_1688_; 
v___x_1688_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__11));
v_msg_1608_ = v___x_1688_;
v___y_1609_ = v_a_1528_;
v___y_1610_ = v_a_1529_;
v___y_1611_ = v_a_1530_;
v___y_1612_ = v_a_1531_;
goto v___jp_1607_;
}
}
}
v___jp_1543_:
{
lean_object* v___x_1546_; lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1555_; 
v___x_1546_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_absentLCtxVars___redArg(v_lctxInitIndices_1526_, v_val_1539_, v___y_1545_);
lean_dec(v_val_1539_);
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1551_ = lean_string_append(v___y_1544_, v_a_1547_);
lean_dec(v_a_1547_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1551_);
v___x_1553_ = v___x_1549_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
v___jp_1556_:
{
if (v_fromDelayed_1527_ == 0)
{
v___y_1544_ = v_msg_1557_;
v___y_1545_ = v___y_1558_;
goto v___jp_1543_;
}
else
{
lean_object* v_lctx_1559_; lean_object* v_lctx_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v_lctx_1559_ = lean_ctor_get(v___y_1558_, 2);
v_lctx_1560_ = lean_ctor_get(v_val_1539_, 1);
v___x_1561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting_spec__1___closed__0));
v___x_1562_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_1560_, v_lctx_1559_, v___x_1561_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1572_; 
v___x_1563_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_extraLCtxVars___redArg(v_val_1539_, v___y_1558_);
lean_dec(v_val_1539_);
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1566_ = v___x_1563_;
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1563_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1570_; 
v___x_1568_ = lean_string_append(v_msg_1557_, v_a_1564_);
lean_dec(v_a_1564_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1568_);
v___x_1570_ = v___x_1566_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1568_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
else
{
v___y_1544_ = v_msg_1557_;
v___y_1545_ = v___y_1558_;
goto v___jp_1543_;
}
}
}
v___jp_1573_:
{
lean_object* v___x_1579_; lean_object* v_a_1580_; 
v___x_1579_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_PrettyPrinter_Delaborator_getDelayedMVarIdPending_spec__0___redArg(v_mvarId_1525_, v___y_1576_);
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref(v___x_1579_);
if (lean_obj_tag(v_a_1580_) == 1)
{
lean_dec(v_mvarId_1525_);
if (v_fromDelayed_1527_ == 0)
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
lean_dec_ref_known(v_a_1580_, 1);
v___x_1581_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__1));
v___x_1582_ = lean_string_append(v_msg_1574_, v___x_1581_);
v_msg_1557_ = v___x_1582_;
v___y_1558_ = v___y_1575_;
goto v___jp_1556_;
}
else
{
lean_object* v_val_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v_val_1583_ = lean_ctor_get(v_a_1580_, 0);
lean_inc(v_val_1583_);
lean_dec_ref_known(v_a_1580_, 1);
v___x_1584_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__2));
v___x_1585_ = lean_string_append(v_msg_1574_, v___x_1584_);
v___x_1586_ = lean_string_append(v___x_1585_, v_delayedExpl_1533_);
v___x_1587_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_collectAwaiting(v_val_1583_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1589_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1589_ = lean_string_append(v___x_1586_, v_a_1588_);
lean_dec(v_a_1588_);
v_msg_1557_ = v___x_1589_;
v___y_1558_ = v___y_1575_;
goto v___jp_1556_;
}
else
{
lean_dec_ref(v___x_1586_);
lean_dec(v_val_1539_);
return v___x_1587_;
}
}
}
else
{
lean_object* v___x_1590_; lean_object* v_a_1591_; uint8_t v___x_1592_; 
lean_dec(v_a_1580_);
v___x_1590_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar_spec__0___redArg(v_mvarId_1525_, v___y_1576_);
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref(v___x_1590_);
v___x_1592_ = lean_unbox(v_a_1591_);
lean_dec(v_a_1591_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__3));
v___x_1594_ = lean_string_append(v_msg_1574_, v___x_1593_);
v_msg_1557_ = v___x_1594_;
v___y_1558_ = v___y_1575_;
goto v___jp_1556_;
}
else
{
if (v_fromDelayed_1527_ == 0)
{
v_msg_1557_ = v_msg_1574_;
v___y_1558_ = v___y_1575_;
goto v___jp_1556_;
}
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__4));
v___x_1596_ = lean_string_append(v_msg_1574_, v___x_1595_);
v___x_1597_ = lean_string_append(v___x_1596_, v_delayedExpl_1533_);
v_msg_1557_ = v___x_1597_;
v___y_1558_ = v___y_1575_;
goto v___jp_1556_;
}
}
}
}
v___jp_1598_:
{
if (v___y_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__5));
lean_inc_ref(v___y_1602_);
v___x_1606_ = lean_string_append(v___y_1602_, v___x_1605_);
v_msg_1574_ = v___x_1606_;
v___y_1575_ = v___y_1601_;
v___y_1576_ = v___y_1603_;
v___y_1577_ = v___y_1600_;
v___y_1578_ = v___y_1599_;
goto v___jp_1573_;
}
else
{
lean_inc_ref(v___y_1602_);
v_msg_1574_ = v___y_1602_;
v___y_1575_ = v___y_1601_;
v___y_1576_ = v___y_1603_;
v___y_1577_ = v___y_1600_;
v___y_1578_ = v___y_1599_;
goto v___jp_1573_;
}
}
v___jp_1607_:
{
lean_object* v___x_1613_; lean_object* v_userName_1614_; uint8_t v___x_1615_; 
v___x_1613_ = lean_st_ref_get(v___y_1610_);
v_userName_1614_ = lean_ctor_get(v_val_1539_, 0);
v___x_1615_ = l_Lean_Name_isAnonymous(v_userName_1614_);
if (v___x_1615_ == 0)
{
lean_object* v_mctx_1616_; lean_object* v___x_1618_; 
v_mctx_1616_ = lean_ctor_get(v___x_1613_, 0);
lean_inc_ref(v_mctx_1616_);
lean_dec(v___x_1613_);
lean_inc(v_mvarId_1525_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v_mvarId_1525_);
v___x_1618_ = v___x_1541_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_mvarId_1525_);
v___x_1618_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
lean_object* v___x_1619_; uint8_t v___x_1620_; 
v___x_1619_ = l_Lean_MetavarContext_findUserName_x3f(v_mctx_1616_, v_userName_1614_);
lean_dec_ref(v_mctx_1616_);
v___x_1620_ = l_Option_instBEq_beq___at___00__private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_delabMVarAuxAux_spec__0(v___x_1618_, v___x_1619_);
lean_dec(v___x_1619_);
lean_dec_ref(v___x_1618_);
v___y_1599_ = v___y_1612_;
v___y_1600_ = v___y_1611_;
v___y_1601_ = v___y_1609_;
v___y_1602_ = v_msg_1608_;
v___y_1603_ = v___y_1610_;
v___y_1604_ = v___x_1620_;
goto v___jp_1598_;
}
}
else
{
lean_dec(v___x_1613_);
lean_del_object(v___x_1541_);
v___y_1599_ = v___y_1612_;
v___y_1600_ = v___y_1611_;
v___y_1601_ = v___y_1609_;
v___y_1602_ = v_msg_1608_;
v___y_1603_ = v___y_1610_;
v___y_1604_ = v___x_1615_;
goto v___jp_1598_;
}
}
}
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
lean_dec(v_a_1535_);
lean_dec(v_mvarId_1525_);
v___x_1690_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___closed__12));
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v___x_1690_);
v___x_1692_ = v___x_1537_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_dec(v_mvarId_1525_);
v_a_1695_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1534_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1534_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed(lean_object* v_mvarId_1703_, lean_object* v_lctxInitIndices_1704_, lean_object* v_fromDelayed_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
uint8_t v_fromDelayed_boxed_1711_; lean_object* v_res_1712_; 
v_fromDelayed_boxed_1711_ = lean_unbox(v_fromDelayed_1705_);
v_res_1712_ = l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar(v_mvarId_1703_, v_lctxInitIndices_1704_, v_fromDelayed_boxed_1711_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_);
lean_dec(v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec_ref(v_a_1706_);
lean_dec(v_lctxInitIndices_1704_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(lean_object* v_mvarId_1713_, lean_object* v_lctxInitIndices_1714_, uint8_t v_fromDelayed_1715_, lean_object* v_ppCtx_1716_){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1718_ = lean_box(v_fromDelayed_1715_);
v___x_1719_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_Delaborator_Metavariable_0__Lean_PrettyPrinter_Delaborator_describeMVar___boxed), 8, 3);
lean_closure_set(v___x_1719_, 0, v_mvarId_1713_);
lean_closure_set(v___x_1719_, 1, v_lctxInitIndices_1714_);
lean_closure_set(v___x_1719_, 2, v___x_1718_);
v___x_1720_ = l_Lean_PPContext_runMetaM___redArg(v_ppCtx_1716_, v___x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed(lean_object* v_mvarId_1721_, lean_object* v_lctxInitIndices_1722_, lean_object* v_fromDelayed_1723_, lean_object* v_ppCtx_1724_, lean_object* v___y_1725_){
_start:
{
uint8_t v_fromDelayed_boxed_1726_; lean_object* v_res_1727_; 
v_fromDelayed_boxed_1726_ = lean_unbox(v_fromDelayed_1723_);
v_res_1727_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0(v_mvarId_1721_, v_lctxInitIndices_1722_, v_fromDelayed_boxed_1726_, v_ppCtx_1724_);
lean_dec_ref(v_ppCtx_1724_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(lean_object* v_mvarId_1728_, uint8_t v_fromDelayed_1729_, lean_object* v_a_1730_){
_start:
{
lean_object* v_lctxInitIndices_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___x_1735_; 
v_lctxInitIndices_1732_ = lean_ctor_get(v_a_1730_, 5);
v___x_1733_ = lean_box(v_fromDelayed_1729_);
lean_inc(v_lctxInitIndices_1732_);
v___f_1734_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1734_, 0, v_mvarId_1728_);
lean_closure_set(v___f_1734_, 1, v_lctxInitIndices_1732_);
lean_closure_set(v___f_1734_, 2, v___x_1733_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___f_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg___boxed(lean_object* v_mvarId_1736_, lean_object* v_fromDelayed_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
uint8_t v_fromDelayed_boxed_1740_; lean_object* v_res_1741_; 
v_fromDelayed_boxed_1740_ = lean_unbox(v_fromDelayed_1737_);
v_res_1741_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(v_mvarId_1736_, v_fromDelayed_boxed_1740_, v_a_1738_);
lean_dec_ref(v_a_1738_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(lean_object* v_mvarId_1742_, uint8_t v_fromDelayed_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___redArg(v_mvarId_1742_, v_fromDelayed_1743_, v_a_1744_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar___boxed(lean_object* v_mvarId_1752_, lean_object* v_fromDelayed_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
uint8_t v_fromDelayed_boxed_1761_; lean_object* v_res_1762_; 
v_fromDelayed_boxed_1761_ = lean_unbox(v_fromDelayed_1753_);
v_res_1762_ = l_Lean_PrettyPrinter_Delaborator_mkDescribeMVar(v_mvarId_1752_, v_fromDelayed_boxed_1761_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
lean_dec(v_a_1757_);
lean_dec_ref(v_a_1756_);
lean_dec(v_a_1755_);
lean_dec_ref(v_a_1754_);
return v_res_1762_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter_Delaborator_Metavariable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PrettyPrinter_Delaborator_Metavariable(builtin);
}
#ifdef __cplusplus
}
#endif

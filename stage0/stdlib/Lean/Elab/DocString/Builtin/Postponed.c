// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Postponed
// Imports: public import Lean.Elab.Term.TermElabM public import Lean.DocString.DeferredCheck
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
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_Doc_deferredCheckExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "doc"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deferred"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(39, 182, 57, 82, 86, 77, 242, 57)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(129, 127, 0, 79, 118, 118, 4, 216)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "if true, run the deferred checks recorded while elaborating Verso docstrings"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(219, 182, 224, 198, 198, 122, 225, 30)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(242, 165, 182, 144, 148, 234, 72, 121)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(8, 119, 36, 37, 165, 14, 86, 85)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_linter_doc_deferred;
static const lean_string_object l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value;
static const lean_string_object l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PostponedName"};
static const lean_object* l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value;
static const lean_ctor_object l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(167, 68, 121, 121, 24, 14, 202, 161)}};
static const lean_object* l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value;
static lean_once_cell_t l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Doc_instTypeNamePostponedName;
static const lean_string_object l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PostponedKind"};
static const lean_object* l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value;
static const lean_ctor_object l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(4, 126, 152, 146, 251, 151, 37, 250)}};
static const lean_object* l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_ = (const lean_object*)&l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__value;
static lean_once_cell_t l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l_Lean_Doc_instTypeNamePostponedKind;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "DeferredCheck"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "handlerExt"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(162, 254, 44, 225, 102, 40, 150, 242)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 216, 14, 79, 12, 54, 251, 118)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_handlerExt;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_builtinHandlers;
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_addBuiltinHandler(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_addBuiltinHandler___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "DeferredCheckHandler"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 146, 221, 208, 194, 218, 14, 77)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "invalid `deferred_doc_check` syntax"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "invalid attribute `deferred_doc_check`, must be global"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Builtin"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Postponed"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__16_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__16_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__16_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__18_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__18_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__18_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__26_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__26_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__26_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__28_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__28_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__28_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__31_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "deferred_doc_check"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__31_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__31_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__31_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 224, 174, 180, 143, 211, 85, 153)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__34_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__34_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__34_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__35_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = "Registers a `DeferredCheckHandler` for deferred docstring checks whose data has the named type."};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__35_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__35_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "addBuiltinHandler"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "invalid `builtin_deferred_doc_check` syntax"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "invalid attribute `builtin_deferred_doc_check`, must be global"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "builtin_deferred_doc_check"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 167, 152, 24, 233, 41, 21, 93)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2____boxed, .m_arity = 11, .m_num_fixed = 5, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__value),((lean_object*)&l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "Registers a builtin `DeferredCheckHandler` for deferred docstring checks whose data has the named type."};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_DeferredCheck_run_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "no handler registered for deferred check `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "the check requires "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " to be imported, but they are not"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_DeferredCheck_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_DeferredCheck_run___closed__0 = (const lean_object*)&l_Lean_Doc_DeferredCheck_run___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_56_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_57_ = l_Lean_Option_register___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4__spec__0(v___x_54_, v___x_55_, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4____boxed(lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_();
return v_res_59_;
}
}
static lean_object* _init_l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_));
v___x_67_ = l_unsafeCast___redArg(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_, &l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8__once, _init_l_Lean_Doc_instImpl___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_Doc_instTypeNamePostponedName(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_;
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_Doc_instImpl___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_));
v___x_76_ = l_unsafeCast___redArg(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_, &l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8__once, _init_l_Lean_Doc_instImpl___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Doc_instTypeNamePostponedKind(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_;
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object* v_m_79_, lean_object* v_x_80_){
_start:
{
lean_object* v_fst_81_; lean_object* v_snd_82_; lean_object* v___x_83_; 
v_fst_81_ = lean_ctor_get(v_x_80_, 0);
lean_inc(v_fst_81_);
v_snd_82_ = lean_ctor_get(v_x_80_, 1);
lean_inc(v_snd_82_);
lean_dec_ref(v_x_80_);
v___x_83_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_81_, v_snd_82_, v_m_79_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_84_, size_t v_i_85_, size_t v_stop_86_, lean_object* v_b_87_){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = lean_usize_dec_eq(v_i_85_, v_stop_86_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v_fst_90_; lean_object* v_snd_91_; lean_object* v___x_92_; size_t v___x_93_; size_t v___x_94_; 
v___x_89_ = lean_array_uget_borrowed(v_as_84_, v_i_85_);
v_fst_90_ = lean_ctor_get(v___x_89_, 0);
v_snd_91_ = lean_ctor_get(v___x_89_, 1);
lean_inc(v_snd_91_);
lean_inc(v_fst_90_);
v___x_92_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_90_, v_snd_91_, v_b_87_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_add(v_i_85_, v___x_93_);
v_i_85_ = v___x_94_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
return v_b_87_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_96_, lean_object* v_i_97_, lean_object* v_stop_98_, lean_object* v_b_99_){
_start:
{
size_t v_i_boxed_100_; size_t v_stop_boxed_101_; lean_object* v_res_102_; 
v_i_boxed_100_ = lean_unbox_usize(v_i_97_);
lean_dec(v_i_97_);
v_stop_boxed_101_ = lean_unbox_usize(v_stop_98_);
lean_dec(v_stop_98_);
v_res_102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0(v_as_96_, v_i_boxed_100_, v_stop_boxed_101_, v_b_99_);
lean_dec_ref(v_as_96_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0(lean_object* v_as_103_, size_t v_i_104_, size_t v_stop_105_, lean_object* v_b_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lean_usize_dec_eq(v_i_104_, v_stop_105_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v_fst_109_; lean_object* v_snd_110_; lean_object* v___x_111_; size_t v___x_112_; size_t v___x_113_; lean_object* v___x_114_; 
v___x_108_ = lean_array_uget_borrowed(v_as_103_, v_i_104_);
v_fst_109_ = lean_ctor_get(v___x_108_, 0);
v_snd_110_ = lean_ctor_get(v___x_108_, 1);
lean_inc(v_snd_110_);
lean_inc(v_fst_109_);
v___x_111_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_109_, v_snd_110_, v_b_106_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_104_, v___x_112_);
v___x_114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0_spec__0(v_as_103_, v___x_113_, v_stop_105_, v___x_111_);
return v___x_114_;
}
else
{
return v_b_106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_115_, lean_object* v_i_116_, lean_object* v_stop_117_, lean_object* v_b_118_){
_start:
{
size_t v_i_boxed_119_; size_t v_stop_boxed_120_; lean_object* v_res_121_; 
v_i_boxed_119_ = lean_unbox_usize(v_i_116_);
lean_dec(v_i_116_);
v_stop_boxed_120_ = lean_unbox_usize(v_stop_117_);
lean_dec(v_stop_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0(v_as_115_, v_i_boxed_119_, v_stop_boxed_120_, v_b_118_);
lean_dec_ref(v_as_115_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1(lean_object* v_as_122_, size_t v_i_123_, size_t v_stop_124_, lean_object* v_b_125_){
_start:
{
lean_object* v___y_127_; uint8_t v___x_131_; 
v___x_131_ = lean_usize_dec_eq(v_i_123_, v_stop_124_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_132_ = lean_array_uget_borrowed(v_as_122_, v_i_123_);
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_array_get_size(v___x_132_);
v___x_135_ = lean_nat_dec_lt(v___x_133_, v___x_134_);
if (v___x_135_ == 0)
{
v___y_127_ = v_b_125_;
goto v___jp_126_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = lean_nat_dec_le(v___x_134_, v___x_134_);
if (v___x_136_ == 0)
{
if (v___x_135_ == 0)
{
v___y_127_ = v_b_125_;
goto v___jp_126_;
}
else
{
size_t v___x_137_; size_t v___x_138_; lean_object* v___x_139_; 
v___x_137_ = ((size_t)0ULL);
v___x_138_ = lean_usize_of_nat(v___x_134_);
v___x_139_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0(v___x_132_, v___x_137_, v___x_138_, v_b_125_);
v___y_127_ = v___x_139_;
goto v___jp_126_;
}
}
else
{
size_t v___x_140_; size_t v___x_141_; lean_object* v___x_142_; 
v___x_140_ = ((size_t)0ULL);
v___x_141_ = lean_usize_of_nat(v___x_134_);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__0(v___x_132_, v___x_140_, v___x_141_, v_b_125_);
v___y_127_ = v___x_142_;
goto v___jp_126_;
}
}
}
else
{
return v_b_125_;
}
v___jp_126_:
{
size_t v___x_128_; size_t v___x_129_; 
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_add(v_i_123_, v___x_128_);
v_i_123_ = v___x_129_;
v_b_125_ = v___y_127_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_143_, lean_object* v_i_144_, lean_object* v_stop_145_, lean_object* v_b_146_){
_start:
{
size_t v_i_boxed_147_; size_t v_stop_boxed_148_; lean_object* v_res_149_; 
v_i_boxed_147_ = lean_unbox_usize(v_i_144_);
lean_dec(v_i_144_);
v_stop_boxed_148_ = lean_unbox_usize(v_stop_145_);
lean_dec(v_stop_145_);
v_res_149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1(v_as_143_, v_i_boxed_147_, v_stop_boxed_148_, v_b_146_);
lean_dec_ref(v_as_143_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object* v_nss_150_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_151_ = lean_box(1);
v___x_152_ = lean_unsigned_to_nat(0u);
v___x_153_ = lean_array_get_size(v_nss_150_);
v___x_154_ = lean_nat_dec_lt(v___x_152_, v___x_153_);
if (v___x_154_ == 0)
{
return v___x_151_;
}
else
{
uint8_t v___x_155_; 
v___x_155_ = lean_nat_dec_le(v___x_153_, v___x_153_);
if (v___x_155_ == 0)
{
if (v___x_154_ == 0)
{
return v___x_151_;
}
else
{
size_t v___x_156_; size_t v___x_157_; lean_object* v___x_158_; 
v___x_156_ = ((size_t)0ULL);
v___x_157_ = lean_usize_of_nat(v___x_153_);
v___x_158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1(v_nss_150_, v___x_156_, v___x_157_, v___x_151_);
return v___x_158_;
}
}
else
{
size_t v___x_159_; size_t v___x_160_; lean_object* v___x_161_; 
v___x_159_ = ((size_t)0ULL);
v___x_160_ = lean_usize_of_nat(v___x_153_);
v___x_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2__spec__1(v_nss_150_, v___x_159_, v___x_160_, v___x_151_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2____boxed(lean_object* v_nss_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(v_nss_162_);
lean_dec_ref(v_nss_162_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(lean_object* v_es_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_array_mk(v_es_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_));
v___x_185_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2____boxed(lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_();
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_box(1);
v___x_190_ = lean_st_mk_ref(v___x_189_);
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2____boxed(lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2_();
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_addBuiltinHandler(lean_object* v_key_194_, lean_object* v_impl_195_){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = l_Lean_Doc_DeferredCheck_builtinHandlers;
v___x_198_ = lean_st_ref_take(v___x_197_);
v___x_199_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_key_194_, v_impl_195_, v___x_198_);
v___x_200_ = lean_st_ref_put(v___x_197_, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_addBuiltinHandler___boxed(lean_object* v_key_202_, lean_object* v_impl_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Doc_DeferredCheck_addBuiltinHandler(v_key_202_, v_impl_203_);
return v_res_205_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_206_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_ctor_set(v___x_211_, 2, v___x_210_);
lean_ctor_set(v___x_211_, 3, v___x_210_);
lean_ctor_set(v___x_211_, 4, v___x_209_);
lean_ctor_set(v___x_211_, 5, v___x_209_);
lean_ctor_set(v___x_211_, 6, v___x_209_);
lean_ctor_set(v___x_211_, 7, v___x_209_);
lean_ctor_set(v___x_211_, 8, v___x_209_);
lean_ctor_set(v___x_211_, 9, v___x_209_);
lean_ctor_set(v___x_211_, 10, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_unsigned_to_nat(32u);
v___x_213_ = lean_mk_empty_array_with_capacity(v___x_212_);
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4(void){
_start:
{
size_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_215_ = ((size_t)5ULL);
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_unsigned_to_nat(32u);
v___x_218_ = lean_mk_empty_array_with_capacity(v___x_217_);
v___x_219_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3);
v___x_220_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_218_);
lean_ctor_set(v___x_220_, 2, v___x_216_);
lean_ctor_set(v___x_220_, 3, v___x_216_);
lean_ctor_set_usize(v___x_220_, 4, v___x_215_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_221_ = lean_box(1);
v___x_222_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4);
v___x_223_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_224_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v___x_222_);
lean_ctor_set(v___x_224_, 2, v___x_221_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object* v_msgData_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; lean_object* v_toCold_230_; lean_object* v_env_231_; lean_object* v_options_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_229_ = lean_st_ref_get(v___y_227_);
v_toCold_230_ = lean_ctor_get(v___y_226_, 0);
v_env_231_ = lean_ctor_get(v___x_229_, 0);
lean_inc_ref(v_env_231_);
lean_dec(v___x_229_);
v_options_232_ = lean_ctor_get(v_toCold_230_, 2);
v___x_233_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_234_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5);
lean_inc_ref(v_options_232_);
v___x_235_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_235_, 0, v_env_231_);
lean_ctor_set(v___x_235_, 1, v___x_233_);
lean_ctor_set(v___x_235_, 2, v___x_234_);
lean_ctor_set(v___x_235_, 3, v_options_232_);
v___x_236_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_msgData_225_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3(v_msgData_238_, v___y_239_, v___y_240_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_ref_247_; lean_object* v___x_248_; lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_257_; 
v_ref_247_ = lean_ctor_get(v___y_244_, 2);
v___x_248_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3(v_msg_243_, v___y_244_, v___y_245_);
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_257_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_257_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_257_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
lean_inc(v_ref_247_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v_ref_247_);
lean_ctor_set(v___x_253_, 1, v_a_249_);
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 1);
lean_ctor_set(v___x_251_, 0, v___x_253_);
v___x_255_ = v___x_251_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(lean_object* v_x_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_a_267_ = lean_ctor_get(v_x_263_, 0);
lean_inc(v_a_267_);
lean_dec_ref_known(v_x_263_, 1);
v___x_268_ = l_Lean_stringToMessageData(v_a_267_);
v___x_269_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_268_, v___y_264_, v___y_265_);
return v___x_269_;
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_277_; 
v_a_270_ = lean_ctor_get(v_x_263_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_277_ == 0)
{
v___x_272_ = v_x_263_;
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v_x_263_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_277_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set_tag(v___x_272_, 0);
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_a_270_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg___boxed(lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(v_x_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
return v_res_282_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = lean_box(0);
v___x_284_ = l_Lean_Elab_abortCommandExceptionId;
v___x_285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___closed__0);
v___x_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg___boxed(lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg();
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg(lean_object* v_typeName_291_, lean_object* v_constName_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v___x_296_; lean_object* v_env_297_; uint8_t v___x_298_; 
v___x_296_ = lean_st_ref_get(v___y_294_);
v_env_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc_ref(v_env_297_);
lean_dec(v___x_296_);
lean_inc(v_constName_292_);
v___x_298_ = lean_has_compile_error(v_env_297_, v_constName_292_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; lean_object* v_toCold_300_; lean_object* v_env_301_; lean_object* v_options_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_299_ = lean_st_ref_get(v___y_294_);
v_toCold_300_ = lean_ctor_get(v___y_293_, 0);
v_env_301_ = lean_ctor_get(v___x_299_, 0);
lean_inc_ref(v_env_301_);
lean_dec(v___x_299_);
v_options_302_ = lean_ctor_get(v_toCold_300_, 2);
v___x_303_ = l_Lean_Environment_evalConstCheck___redArg(v_env_301_, v_options_302_, v_typeName_291_, v_constName_292_);
v___x_304_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(v___x_303_, v___y_293_, v___y_294_);
return v___x_304_;
}
else
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v___x_306_; lean_object* v_toCold_307_; lean_object* v_env_308_; lean_object* v_options_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec_ref_known(v___x_305_, 1);
v___x_306_ = lean_st_ref_get(v___y_294_);
v_toCold_307_ = lean_ctor_get(v___y_293_, 0);
v_env_308_ = lean_ctor_get(v___x_306_, 0);
lean_inc_ref(v_env_308_);
lean_dec(v___x_306_);
v_options_309_ = lean_ctor_get(v_toCold_307_, 2);
v___x_310_ = l_Lean_Environment_evalConstCheck___redArg(v_env_308_, v_options_309_, v_typeName_291_, v_constName_292_);
v___x_311_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(v___x_310_, v___y_293_, v___y_294_);
return v___x_311_;
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_constName_292_);
lean_dec(v_typeName_291_);
v_a_312_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_305_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_305_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg___boxed(lean_object* v_typeName_320_, lean_object* v_constName_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg(v_typeName_320_, v_constName_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe(lean_object* v_declName_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___closed__1));
v___x_336_ = l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg(v___x_335_, v_declName_331_, v_a_332_, v_a_333_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe___boxed(lean_object* v_declName_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe(v_declName_337_, v_a_338_, v_a_339_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1(lean_object* v_00_u03b1_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___redArg();
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1___boxed(lean_object* v_00_u03b1_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__1(v_00_u03b1_347_, v___y_348_, v___y_349_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0(lean_object* v_00_u03b1_352_, lean_object* v_typeName_353_, lean_object* v_constName_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___redArg(v_typeName_353_, v_constName_354_, v___y_355_, v___y_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0___boxed(lean_object* v_00_u03b1_359_, lean_object* v_typeName_360_, lean_object* v_constName_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0(v_00_u03b1_359_, v_typeName_360_, v_constName_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0(lean_object* v_00_u03b1_366_, lean_object* v_x_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___redArg(v_x_367_, v___y_368_, v___y_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_372_, lean_object* v_x_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0(v_00_u03b1_372_, v_x_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_378_, lean_object* v_msg_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_379_, v___y_380_, v___y_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_384_, lean_object* v_msg_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1(v_00_u03b1_384_, v_msg_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_389_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_399_ = l_Lean_stringToMessageData(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_402_ = l_Lean_stringToMessageData(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(lean_object* v___x_403_, lean_object* v___x_404_, lean_object* v___x_405_, lean_object* v___x_406_, lean_object* v_decl_407_, lean_object* v_stx_408_, uint8_t v_kind_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v_key_414_; lean_object* v___y_415_; uint8_t v___x_494_; uint8_t v___x_495_; 
v___x_494_ = 0;
v___x_495_ = l_Lean_instBEqAttributeKind_beq(v_kind_409_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec(v_stx_408_);
lean_dec(v_decl_407_);
lean_dec_ref(v___x_404_);
lean_dec(v___x_403_);
v___x_496_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_497_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_496_, v___y_410_, v___y_411_);
return v___x_497_;
}
else
{
goto v___jp_442_;
}
v___jp_413_:
{
lean_object* v___x_416_; lean_object* v_env_417_; lean_object* v_nextMacroScope_418_; lean_object* v_ngen_419_; lean_object* v_auxDeclNGen_420_; lean_object* v_traceState_421_; lean_object* v_messages_422_; lean_object* v_infoState_423_; lean_object* v_snapshotTasks_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_440_; 
v___x_416_ = lean_st_ref_take(v___y_415_);
v_env_417_ = lean_ctor_get(v___x_416_, 0);
v_nextMacroScope_418_ = lean_ctor_get(v___x_416_, 1);
v_ngen_419_ = lean_ctor_get(v___x_416_, 2);
v_auxDeclNGen_420_ = lean_ctor_get(v___x_416_, 3);
v_traceState_421_ = lean_ctor_get(v___x_416_, 4);
v_messages_422_ = lean_ctor_get(v___x_416_, 6);
v_infoState_423_ = lean_ctor_get(v___x_416_, 7);
v_snapshotTasks_424_ = lean_ctor_get(v___x_416_, 8);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v___x_416_, 5);
lean_dec(v_unused_441_);
v___x_426_ = v___x_416_;
v_isShared_427_ = v_isSharedCheck_440_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_snapshotTasks_424_);
lean_inc(v_infoState_423_);
lean_inc(v_messages_422_);
lean_inc(v_traceState_421_);
lean_inc(v_auxDeclNGen_420_);
lean_inc(v_ngen_419_);
lean_inc(v_nextMacroScope_418_);
lean_inc(v_env_417_);
lean_dec(v___x_416_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_440_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_428_; lean_object* v_toEnvExtension_429_; lean_object* v_asyncMode_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_428_ = l_Lean_Doc_DeferredCheck_handlerExt;
v_toEnvExtension_429_ = lean_ctor_get(v___x_428_, 0);
v_asyncMode_430_ = lean_ctor_get(v_toEnvExtension_429_, 2);
v___x_431_ = lean_box(0);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v_key_414_);
lean_ctor_set(v___x_432_, 1, v_decl_407_);
v___x_433_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_428_, v_env_417_, v___x_432_, v_asyncMode_430_, v___x_403_);
v___x_434_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 5, v___x_434_);
lean_ctor_set(v___x_426_, 0, v___x_433_);
v___x_436_ = v___x_426_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_nextMacroScope_418_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_ngen_419_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v_auxDeclNGen_420_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v_traceState_421_);
lean_ctor_set(v_reuseFailAlloc_439_, 5, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_439_, 6, v_messages_422_);
lean_ctor_set(v_reuseFailAlloc_439_, 7, v_infoState_423_);
lean_ctor_set(v_reuseFailAlloc_439_, 8, v_snapshotTasks_424_);
v___x_436_ = v_reuseFailAlloc_439_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_st_ref_put(v___y_415_, v___x_436_);
v___x_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_431_);
return v___x_438_;
}
}
}
v___jp_442_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_443_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_444_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_445_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_446_ = l_Lean_Name_mkStr4(v___x_404_, v___x_443_, v___x_444_, v___x_445_);
lean_inc(v_stx_408_);
v___x_447_ = l_Lean_Syntax_isOfKind(v_stx_408_, v___x_446_);
lean_dec(v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_dec(v_stx_408_);
lean_dec(v_decl_407_);
lean_dec(v___x_403_);
v___x_448_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_449_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_448_, v___y_410_, v___y_411_);
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = l_Lean_Syntax_getArg(v_stx_408_, v___x_405_);
v___x_459_ = l_Lean_Syntax_matchesIdent(v___x_458_, v___x_406_);
lean_dec(v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec(v_stx_408_);
lean_dec(v_decl_407_);
lean_dec(v___x_403_);
v___x_460_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_461_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_460_, v___y_410_, v___y_411_);
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_461_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_470_ = lean_unsigned_to_nat(1u);
v___x_471_ = l_Lean_Syntax_getArg(v_stx_408_, v___x_470_);
lean_dec(v_stx_408_);
lean_inc(v___x_471_);
v___x_472_ = l_Lean_Syntax_matchesNull(v___x_471_, v___x_470_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v___x_471_);
lean_dec(v_decl_407_);
lean_dec(v___x_403_);
v___x_473_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_474_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_473_, v___y_410_, v___y_411_);
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
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
else
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = l_Lean_Syntax_getArg(v___x_471_, v___x_405_);
lean_dec(v___x_471_);
v___x_484_ = l_Lean_realizeGlobalConstNoOverload(v___x_483_, v___y_410_, v___y_411_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v_key_414_ = v_a_485_;
v___y_415_ = v___y_411_;
goto v___jp_413_;
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_dec(v_decl_407_);
lean_dec(v___x_403_);
v_a_486_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_484_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_484_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object* v___x_498_, lean_object* v___x_499_, lean_object* v___x_500_, lean_object* v___x_501_, lean_object* v_decl_502_, lean_object* v_stx_503_, lean_object* v_kind_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_){
_start:
{
uint8_t v_kind_boxed_508_; lean_object* v_res_509_; 
v_kind_boxed_508_ = lean_unbox(v_kind_504_);
v_res_509_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(v___x_498_, v___x_499_, v___x_500_, v___x_501_, v_decl_502_, v_stx_503_, v_kind_boxed_508_, v___y_505_, v___y_506_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec(v___x_501_);
lean_dec(v___x_500_);
return v_res_509_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_512_ = l_Lean_stringToMessageData(v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_515_ = l_Lean_stringToMessageData(v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(lean_object* v___x_516_, lean_object* v_decl_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_521_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_522_ = l_Lean_MessageData_ofName(v___x_516_);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_525_, v___y_518_, v___y_519_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object* v___x_527_, lean_object* v_decl_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(v___x_527_, v_decl_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v_decl_528_);
return v_res_532_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_box(0);
v___x_534_ = l_unsafeCast___redArg(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_536_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_537_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_538_ = l_Lean_Name_str___override(v___x_537_, v___x_536_);
return v___x_538_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_540_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_541_ = l_Lean_Name_str___override(v___x_540_, v___x_539_);
return v___x_541_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_544_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_545_ = l_Lean_Name_str___override(v___x_544_, v___x_543_);
return v___x_545_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_548_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_549_ = l_Lean_Name_str___override(v___x_548_, v___x_547_);
return v___x_549_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_552_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_553_ = l_Lean_Name_str___override(v___x_552_, v___x_551_);
return v___x_553_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_556_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_557_ = l_Lean_Name_str___override(v___x_556_, v___x_555_);
return v___x_557_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__11_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_560_ = l_Lean_Name_num___override(v___x_559_, v___x_558_);
return v___x_560_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_562_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__12_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_563_ = l_Lean_Name_str___override(v___x_562_, v___x_561_);
return v___x_563_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_564_ = ((lean_object*)(l_Lean_Doc_instImpl___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_));
v___x_565_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__13_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_566_ = l_Lean_Name_str___override(v___x_565_, v___x_564_);
return v___x_566_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_));
v___x_568_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__14_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_569_ = l_Lean_Name_str___override(v___x_568_, v___x_567_);
return v___x_569_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__16_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_572_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__15_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_573_ = l_Lean_Name_str___override(v___x_572_, v___x_571_);
return v___x_573_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__18_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_576_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__17_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_577_ = l_Lean_Name_str___override(v___x_576_, v___x_575_);
return v___x_577_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_579_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__19_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_580_ = l_Lean_Name_str___override(v___x_579_, v___x_578_);
return v___x_580_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_582_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__20_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_583_ = l_Lean_Name_str___override(v___x_582_, v___x_581_);
return v___x_583_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_584_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_585_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__21_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_586_ = l_Lean_Name_str___override(v___x_585_, v___x_584_);
return v___x_586_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_587_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_588_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__22_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_589_ = l_Lean_Name_str___override(v___x_588_, v___x_587_);
return v___x_589_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_591_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__23_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_592_ = l_Lean_Name_str___override(v___x_591_, v___x_590_);
return v___x_592_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = lean_unsigned_to_nat(1993970768u);
v___x_594_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_595_ = l_Lean_Name_num___override(v___x_594_, v___x_593_);
return v___x_595_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__26_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_598_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__25_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_599_ = l_Lean_Name_str___override(v___x_598_, v___x_597_);
return v___x_599_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__28_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_602_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__27_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_603_ = l_Lean_Name_str___override(v___x_602_, v___x_601_);
return v___x_603_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_unsigned_to_nat(2u);
v___x_605_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__29_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_606_ = l_Lean_Name_num___override(v___x_605_, v___x_604_);
return v___x_606_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___f_614_; 
v___x_610_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_));
v___x_613_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___f_614_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed), 10, 4);
lean_closure_set(v___f_614_, 0, v___x_613_);
lean_closure_set(v___f_614_, 1, v___x_612_);
lean_closure_set(v___f_614_, 2, v___x_611_);
lean_closure_set(v___f_614_, 3, v___x_610_);
return v___f_614_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_618_ = 1;
v___x_619_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__35_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_620_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__32_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_621_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__30_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_622_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___x_620_);
lean_ctor_set(v___x_622_, 2, v___x_619_);
lean_ctor_set_uint8(v___x_622_, sizeof(void*)*3, v___x_618_);
return v___x_622_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_623_; lean_object* v___f_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___f_623_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__34_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___f_624_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__33_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_625_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__36_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_626_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___f_624_);
lean_ctor_set(v___x_626_, 2, v___f_623_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__37_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_629_ = l_Lean_registerBuiltinAttribute(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2____boxed(lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_();
return v_res_631_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_638_ = l_Lean_stringToMessageData(v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v___x_641_, lean_object* v___x_642_, lean_object* v___x_643_, lean_object* v_decl_644_, lean_object* v_stx_645_, uint8_t v_kind_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_key_651_; lean_object* v___y_652_; lean_object* v___y_653_; uint8_t v___x_714_; uint8_t v___x_715_; 
v___x_714_ = 0;
v___x_715_ = l_Lean_instBEqAttributeKind_beq(v_kind_646_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec(v_stx_645_);
lean_dec(v_decl_644_);
lean_dec_ref(v___x_641_);
lean_dec_ref(v___x_640_);
lean_dec_ref(v___x_639_);
v___x_716_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_717_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_716_, v___y_647_, v___y_648_);
return v___x_717_;
}
else
{
goto v___jp_662_;
}
v___jp_650_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_654_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_655_ = l_Lean_Name_mkStr4(v___x_639_, v___x_640_, v___x_641_, v___x_654_);
v___x_656_ = lean_box(0);
v___x_657_ = l_Lean_Expr_const___override(v___x_655_, v___x_656_);
v___x_658_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_key_651_);
lean_inc(v_decl_644_);
v___x_659_ = l_Lean_Expr_const___override(v_decl_644_, v___x_656_);
v___x_660_ = l_Lean_mkAppB(v___x_657_, v___x_658_, v___x_659_);
v___x_661_ = l_Lean_declareBuiltin(v_decl_644_, v___x_660_, v___y_652_, v___y_653_);
return v___x_661_;
}
v___jp_662_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_663_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_664_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_665_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__4_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
lean_inc_ref(v___x_639_);
v___x_666_ = l_Lean_Name_mkStr4(v___x_639_, v___x_663_, v___x_664_, v___x_665_);
lean_inc(v_stx_645_);
v___x_667_ = l_Lean_Syntax_isOfKind(v_stx_645_, v___x_666_);
lean_dec(v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec(v_stx_645_);
lean_dec(v_decl_644_);
lean_dec_ref(v___x_641_);
lean_dec_ref(v___x_640_);
lean_dec_ref(v___x_639_);
v___x_668_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_669_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_668_, v___y_647_, v___y_648_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = l_Lean_Syntax_getArg(v_stx_645_, v___x_642_);
v___x_679_ = l_Lean_Syntax_matchesIdent(v___x_678_, v___x_643_);
lean_dec(v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec(v_stx_645_);
lean_dec(v_decl_644_);
lean_dec_ref(v___x_641_);
lean_dec_ref(v___x_640_);
lean_dec_ref(v___x_639_);
v___x_680_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_681_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_680_, v___y_647_, v___y_648_);
v_a_682_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_681_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = l_Lean_Syntax_getArg(v_stx_645_, v___x_690_);
lean_dec(v_stx_645_);
lean_inc(v___x_691_);
v___x_692_ = l_Lean_Syntax_matchesNull(v___x_691_, v___x_690_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec(v___x_691_);
lean_dec(v_decl_644_);
lean_dec_ref(v___x_641_);
lean_dec_ref(v___x_640_);
lean_dec_ref(v___x_639_);
v___x_693_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_694_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe_spec__0_spec__0_spec__1___redArg(v___x_693_, v___y_647_, v___y_648_);
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = l_Lean_Syntax_getArg(v___x_691_, v___x_642_);
lean_dec(v___x_691_);
v___x_704_ = l_Lean_realizeGlobalConstNoOverload(v___x_703_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_704_, 1);
v_key_651_ = v_a_705_;
v___y_652_ = v___y_647_;
v___y_653_ = v___y_648_;
goto v___jp_650_;
}
else
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
lean_dec(v_decl_644_);
lean_dec_ref(v___x_641_);
lean_dec_ref(v___x_640_);
lean_dec_ref(v___x_639_);
v_a_706_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_704_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_704_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2____boxed(lean_object* v___x_718_, lean_object* v___x_719_, lean_object* v___x_720_, lean_object* v___x_721_, lean_object* v___x_722_, lean_object* v_decl_723_, lean_object* v_stx_724_, lean_object* v_kind_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
uint8_t v_kind_boxed_729_; lean_object* v_res_730_; 
v_kind_boxed_729_ = lean_unbox(v_kind_725_);
v_res_730_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___lam__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(v___x_718_, v___x_719_, v___x_720_, v___x_721_, v___x_722_, v_decl_723_, v_stx_724_, v_kind_boxed_729_, v___y_726_, v___y_727_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___x_722_);
lean_dec(v___x_721_);
return v_res_730_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = lean_unsigned_to_nat(195487833u);
v___x_732_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__24_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_733_ = l_Lean_Name_num___override(v___x_732_, v___x_731_);
return v___x_733_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__26_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_735_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_736_ = l_Lean_Name_str___override(v___x_735_, v___x_734_);
return v___x_736_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_737_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__28_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_));
v___x_738_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__1_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_739_ = l_Lean_Name_str___override(v___x_738_, v___x_737_);
return v___x_739_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = lean_unsigned_to_nat(2u);
v___x_741_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__2_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_742_ = l_Lean_Name_num___override(v___x_741_, v___x_740_);
return v___x_742_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_755_ = 1;
v___x_756_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__8_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_757_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__5_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_758_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__3_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_759_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_759_, 0, v___x_758_);
lean_ctor_set(v___x_759_, 1, v___x_757_);
lean_ctor_set(v___x_759_, 2, v___x_756_);
lean_ctor_set_uint8(v___x_759_, sizeof(void*)*3, v___x_755_);
return v___x_759_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___f_760_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__7_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___f_761_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__6_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_));
v___x_762_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__9_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_763_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
lean_ctor_set(v___x_763_, 1, v___f_761_);
lean_ctor_set(v___x_763_, 2, v___f_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__10_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_);
v___x_766_ = l_Lean_registerBuiltinAttribute(v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2____boxed(lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_();
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg(lean_object* v_c_769_, lean_object* v_act_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_toCold_774_; lean_object* v_currRecDepth_775_; lean_object* v_ref_776_; uint8_t v_diag_777_; uint8_t v_suppressElabErrors_778_; lean_object* v_fileName_779_; lean_object* v_fileMap_780_; lean_object* v_maxRecDepth_781_; lean_object* v_initHeartbeats_782_; lean_object* v_maxHeartbeats_783_; lean_object* v_quotContext_784_; lean_object* v_currMacroScope_785_; lean_object* v_cancelTk_x3f_786_; lean_object* v_inheritedTraceOptions_787_; lean_object* v_currNamespace_788_; lean_object* v_openDecls_789_; lean_object* v_options_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_toCold_774_ = lean_ctor_get(v_a_771_, 0);
v_currRecDepth_775_ = lean_ctor_get(v_a_771_, 1);
v_ref_776_ = lean_ctor_get(v_a_771_, 2);
v_diag_777_ = lean_ctor_get_uint8(v_a_771_, sizeof(void*)*3);
v_suppressElabErrors_778_ = lean_ctor_get_uint8(v_a_771_, sizeof(void*)*3 + 1);
v_fileName_779_ = lean_ctor_get(v_toCold_774_, 0);
v_fileMap_780_ = lean_ctor_get(v_toCold_774_, 1);
v_maxRecDepth_781_ = lean_ctor_get(v_toCold_774_, 3);
v_initHeartbeats_782_ = lean_ctor_get(v_toCold_774_, 6);
v_maxHeartbeats_783_ = lean_ctor_get(v_toCold_774_, 7);
v_quotContext_784_ = lean_ctor_get(v_toCold_774_, 8);
v_currMacroScope_785_ = lean_ctor_get(v_toCold_774_, 9);
v_cancelTk_x3f_786_ = lean_ctor_get(v_toCold_774_, 10);
v_inheritedTraceOptions_787_ = lean_ctor_get(v_toCold_774_, 11);
v_currNamespace_788_ = lean_ctor_get(v_c_769_, 4);
v_openDecls_789_ = lean_ctor_get(v_c_769_, 5);
v_options_790_ = lean_ctor_get(v_c_769_, 6);
lean_inc_ref(v_inheritedTraceOptions_787_);
lean_inc(v_cancelTk_x3f_786_);
lean_inc(v_currMacroScope_785_);
lean_inc(v_quotContext_784_);
lean_inc(v_maxHeartbeats_783_);
lean_inc(v_initHeartbeats_782_);
lean_inc(v_openDecls_789_);
lean_inc(v_currNamespace_788_);
lean_inc(v_maxRecDepth_781_);
lean_inc_ref(v_options_790_);
lean_inc_ref(v_fileMap_780_);
lean_inc_ref(v_fileName_779_);
v___x_791_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_791_, 0, v_fileName_779_);
lean_ctor_set(v___x_791_, 1, v_fileMap_780_);
lean_ctor_set(v___x_791_, 2, v_options_790_);
lean_ctor_set(v___x_791_, 3, v_maxRecDepth_781_);
lean_ctor_set(v___x_791_, 4, v_currNamespace_788_);
lean_ctor_set(v___x_791_, 5, v_openDecls_789_);
lean_ctor_set(v___x_791_, 6, v_initHeartbeats_782_);
lean_ctor_set(v___x_791_, 7, v_maxHeartbeats_783_);
lean_ctor_set(v___x_791_, 8, v_quotContext_784_);
lean_ctor_set(v___x_791_, 9, v_currMacroScope_785_);
lean_ctor_set(v___x_791_, 10, v_cancelTk_x3f_786_);
lean_ctor_set(v___x_791_, 11, v_inheritedTraceOptions_787_);
lean_inc(v_ref_776_);
lean_inc(v_currRecDepth_775_);
v___x_792_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v_currRecDepth_775_);
lean_ctor_set(v___x_792_, 2, v_ref_776_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*3, v_diag_777_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*3 + 1, v_suppressElabErrors_778_);
lean_inc(v_a_772_);
v___x_793_ = lean_apply_3(v_act_770_, v___x_792_, v_a_772_, lean_box(0));
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg___boxed(lean_object* v_c_794_, lean_object* v_act_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg(v_c_794_, v_act_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec_ref(v_c_794_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope(lean_object* v_00_u03b1_800_, lean_object* v_c_801_, lean_object* v_act_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg(v_c_801_, v_act_802_, v_a_803_, v_a_804_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___boxed(lean_object* v_00_u03b1_807_, lean_object* v_c_808_, lean_object* v_act_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope(v_00_u03b1_807_, v_c_808_, v_act_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_c_808_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0(lean_object* v___x_814_, size_t v_sz_815_, size_t v_i_816_, lean_object* v_bs_817_){
_start:
{
uint8_t v___x_818_; 
v___x_818_ = lean_usize_dec_lt(v_i_816_, v_sz_815_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; 
lean_dec(v___x_814_);
v___x_819_ = l_unsafeCast___redArg(v_bs_817_);
lean_dec_ref(v_bs_817_);
return v___x_819_;
}
else
{
lean_object* v_v_820_; lean_object* v___x_821_; lean_object* v_bs_x27_822_; lean_object* v___x_823_; lean_object* v___x_824_; size_t v___x_825_; size_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_v_820_ = lean_array_uget(v_bs_817_, v_i_816_);
v___x_821_ = lean_unsigned_to_nat(0u);
v_bs_x27_822_ = lean_array_uset(v_bs_817_, v_i_816_, v___x_821_);
v___x_823_ = l_unsafeCast___redArg(v_v_820_);
lean_dec(v_v_820_);
lean_inc(v___x_814_);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_814_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = ((size_t)1ULL);
v___x_826_ = lean_usize_add(v_i_816_, v___x_825_);
v___x_827_ = l_unsafeCast___redArg(v___x_824_);
lean_dec_ref_known(v___x_824_, 2);
v___x_828_ = lean_array_uset(v_bs_x27_822_, v_i_816_, v___x_827_);
v_i_816_ = v___x_826_;
v_bs_817_ = v___x_828_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0___boxed(lean_object* v___x_830_, lean_object* v_sz_831_, lean_object* v_i_832_, lean_object* v_bs_833_){
_start:
{
size_t v_sz_boxed_834_; size_t v_i_boxed_835_; lean_object* v_res_836_; 
v_sz_boxed_834_ = lean_unbox_usize(v_sz_831_);
lean_dec(v_sz_831_);
v_i_boxed_835_ = lean_unbox_usize(v_i_832_);
lean_dec(v_i_832_);
v_res_836_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0(v___x_830_, v_sz_boxed_834_, v_i_boxed_835_, v_bs_833_);
return v_res_836_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = l_Array_instInhabited___redArg();
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg(lean_object* v___x_838_, lean_object* v_inPackage_839_, lean_object* v_env_840_, lean_object* v_range_841_, lean_object* v_b_842_, lean_object* v_i_843_){
_start:
{
lean_object* v_stop_844_; lean_object* v_step_845_; lean_object* v_a_847_; uint8_t v___x_850_; 
v_stop_844_ = lean_ctor_get(v_range_841_, 1);
v_step_845_ = lean_ctor_get(v_range_841_, 2);
v___x_850_ = lean_nat_dec_lt(v_i_843_, v_stop_844_);
if (v___x_850_ == 0)
{
lean_dec(v_i_843_);
lean_dec_ref(v_inPackage_839_);
return v_b_842_;
}
else
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_851_ = l_Lean_instInhabitedName;
v___x_852_ = lean_array_get_borrowed(v___x_851_, v___x_838_, v_i_843_);
lean_inc_ref(v_inPackage_839_);
lean_inc(v___x_852_);
v___x_853_ = lean_apply_1(v_inPackage_839_, v___x_852_);
v___x_854_ = lean_unbox(v___x_853_);
if (v___x_854_ == 0)
{
v_a_847_ = v_b_842_;
goto v___jp_846_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; lean_object* v___x_858_; size_t v_sz_859_; size_t v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_855_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0);
v___x_856_ = l_Lean_Doc_deferredCheckExt;
v___x_857_ = 0;
v___x_858_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_855_, v___x_856_, v_env_840_, v_i_843_, v___x_857_);
v_sz_859_ = lean_array_size(v___x_858_);
v___x_860_ = ((size_t)0ULL);
v___x_861_ = l_unsafeCast___redArg(v___x_858_);
lean_dec_ref(v___x_858_);
lean_inc(v___x_852_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0(v___x_852_, v_sz_859_, v___x_860_, v___x_861_);
v___x_863_ = l_unsafeCast___redArg(v___x_862_);
lean_dec_ref(v___x_862_);
v___x_864_ = l_Array_append___redArg(v_b_842_, v___x_863_);
lean_dec(v___x_863_);
v_a_847_ = v___x_864_;
goto v___jp_846_;
}
}
v___jp_846_:
{
lean_object* v___x_848_; 
v___x_848_ = lean_nat_add(v_i_843_, v_step_845_);
lean_dec(v_i_843_);
v_b_842_ = v_a_847_;
v_i_843_ = v___x_848_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___boxed(lean_object* v___x_865_, lean_object* v_inPackage_866_, lean_object* v_env_867_, lean_object* v_range_868_, lean_object* v_b_869_, lean_object* v_i_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg(v___x_865_, v_inPackage_866_, v_env_867_, v_range_868_, v_b_869_, v_i_870_);
lean_dec_ref(v_range_868_);
lean_dec_ref(v_env_867_);
lean_dec_ref(v___x_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect(lean_object* v_env_874_, lean_object* v_inPackage_875_){
_start:
{
lean_object* v___x_876_; lean_object* v_out_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_876_ = lean_unsigned_to_nat(0u);
v_out_877_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect___closed__0));
v___x_878_ = l_Lean_Environment_header(v_env_874_);
v___x_879_ = l_Lean_EnvironmentHeader_moduleNames(v___x_878_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_array_get_size(v___x_879_);
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_882_, 0, v___x_876_);
lean_ctor_set(v___x_882_, 1, v___x_880_);
lean_ctor_set(v___x_882_, 2, v___x_881_);
lean_inc_ref(v_inPackage_875_);
v___x_883_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg(v___x_879_, v_inPackage_875_, v_env_874_, v___x_882_, v_out_877_, v___x_876_);
lean_dec_ref_known(v___x_882_, 3);
lean_dec_ref(v___x_879_);
v___x_884_ = l_Lean_Environment_mainModule(v_env_874_);
lean_inc(v___x_884_);
v___x_885_ = lean_apply_1(v_inPackage_875_, v___x_884_);
v___x_886_ = lean_unbox(v___x_885_);
if (v___x_886_ == 0)
{
lean_dec(v___x_884_);
lean_dec_ref(v_env_874_);
return v___x_883_;
}
else
{
lean_object* v___x_887_; lean_object* v_toEnvExtension_888_; lean_object* v_asyncMode_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; size_t v_sz_893_; size_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_887_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_888_ = lean_ctor_get(v___x_887_, 0);
v_asyncMode_889_ = lean_ctor_get(v_toEnvExtension_888_, 2);
v___x_890_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg___closed__0);
v___x_891_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_892_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_890_, v___x_887_, v_env_874_, v_asyncMode_889_, v___x_891_);
v_sz_893_ = lean_array_size(v___x_892_);
v___x_894_ = ((size_t)0ULL);
v___x_895_ = l_unsafeCast___redArg(v___x_892_);
lean_dec(v___x_892_);
v___x_896_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__0(v___x_884_, v_sz_893_, v___x_894_, v___x_895_);
v___x_897_ = l_unsafeCast___redArg(v___x_896_);
lean_dec_ref(v___x_896_);
v___x_898_ = l_Array_append___redArg(v___x_883_, v___x_897_);
lean_dec(v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1(lean_object* v___x_899_, lean_object* v_inPackage_900_, lean_object* v_env_901_, lean_object* v_range_902_, lean_object* v_b_903_, lean_object* v_i_904_, lean_object* v_hs_905_, lean_object* v_hl_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___redArg(v___x_899_, v_inPackage_900_, v_env_901_, v_range_902_, v_b_903_, v_i_904_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1___boxed(lean_object* v___x_908_, lean_object* v_inPackage_909_, lean_object* v_env_910_, lean_object* v_range_911_, lean_object* v_b_912_, lean_object* v_i_913_, lean_object* v_hs_914_, lean_object* v_hl_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect_spec__1(v___x_908_, v_inPackage_909_, v_env_910_, v_range_911_, v_b_912_, v_i_913_, v_hs_914_, v_hl_915_);
lean_dec_ref(v_range_911_);
lean_dec_ref(v_env_910_);
lean_dec_ref(v___x_908_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3(lean_object* v_as_917_, size_t v_i_918_, size_t v_stop_919_, lean_object* v_b_920_){
_start:
{
uint8_t v___x_921_; 
v___x_921_ = lean_usize_dec_eq(v_i_918_, v_stop_919_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; size_t v___x_924_; size_t v___x_925_; 
v___x_922_ = lean_array_uget_borrowed(v_as_917_, v_i_918_);
lean_inc(v___x_922_);
v___x_923_ = l_Lean_NameSet_insert(v_b_920_, v___x_922_);
v___x_924_ = ((size_t)1ULL);
v___x_925_ = lean_usize_add(v_i_918_, v___x_924_);
v_i_918_ = v___x_925_;
v_b_920_ = v___x_923_;
goto _start;
}
else
{
return v_b_920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3___boxed(lean_object* v_as_927_, lean_object* v_i_928_, lean_object* v_stop_929_, lean_object* v_b_930_){
_start:
{
size_t v_i_boxed_931_; size_t v_stop_boxed_932_; lean_object* v_res_933_; 
v_i_boxed_931_ = lean_unbox_usize(v_i_928_);
lean_dec(v_i_928_);
v_stop_boxed_932_ = lean_unbox_usize(v_stop_929_);
lean_dec(v_stop_929_);
v_res_933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3(v_as_927_, v_i_boxed_931_, v_stop_boxed_932_, v_b_930_);
lean_dec_ref(v_as_927_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1(lean_object* v___y_934_, lean_object* v_as_935_, size_t v_i_936_, size_t v_stop_937_, lean_object* v_b_938_){
_start:
{
lean_object* v___y_940_; uint8_t v___x_944_; 
v___x_944_ = lean_usize_dec_eq(v_i_936_, v_stop_937_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_945_ = lean_array_uget_borrowed(v_as_935_, v_i_936_);
v___x_946_ = l_Lean_NameSet_contains(v___y_934_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_inc(v___x_945_);
v___x_947_ = lean_array_push(v_b_938_, v___x_945_);
v___y_940_ = v___x_947_;
goto v___jp_939_;
}
else
{
v___y_940_ = v_b_938_;
goto v___jp_939_;
}
}
else
{
return v_b_938_;
}
v___jp_939_:
{
size_t v___x_941_; size_t v___x_942_; 
v___x_941_ = ((size_t)1ULL);
v___x_942_ = lean_usize_add(v_i_936_, v___x_941_);
v_i_936_ = v___x_942_;
v_b_938_ = v___y_940_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1___boxed(lean_object* v___y_948_, lean_object* v_as_949_, lean_object* v_i_950_, lean_object* v_stop_951_, lean_object* v_b_952_){
_start:
{
size_t v_i_boxed_953_; size_t v_stop_boxed_954_; lean_object* v_res_955_; 
v_i_boxed_953_ = lean_unbox_usize(v_i_950_);
lean_dec(v_i_950_);
v_stop_boxed_954_ = lean_unbox_usize(v_stop_951_);
lean_dec(v_stop_951_);
v_res_955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1(v___y_948_, v_as_949_, v_i_boxed_953_, v_stop_boxed_954_, v_b_952_);
lean_dec_ref(v_as_949_);
lean_dec(v___y_948_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_DeferredCheck_run_spec__0(lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
if (lean_obj_tag(v_a_956_) == 0)
{
lean_object* v___x_958_; 
v___x_958_ = l_List_reverse___redArg(v_a_957_);
return v___x_958_;
}
else
{
lean_object* v_head_959_; lean_object* v_tail_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_969_; 
v_head_959_ = lean_ctor_get(v_a_956_, 0);
v_tail_960_ = lean_ctor_get(v_a_956_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_a_956_);
if (v_isSharedCheck_969_ == 0)
{
v___x_962_ = v_a_956_;
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_tail_960_);
lean_inc(v_head_959_);
lean_dec(v_a_956_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_964_ = l_Lean_MessageData_ofName(v_head_959_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v_a_957_);
lean_ctor_set(v___x_962_, 0, v___x_964_);
v___x_966_ = v___x_962_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_a_957_);
v___x_966_ = v_reuseFailAlloc_968_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
v_a_956_ = v_tail_960_;
v_a_957_ = v___x_966_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__0));
v___x_972_ = l_Lean_stringToMessageData(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__2));
v___x_975_ = l_Lean_stringToMessageData(v___x_974_);
return v___x_975_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__4));
v___x_978_ = l_Lean_stringToMessageData(v___x_977_);
return v___x_978_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__6));
v___x_981_ = l_Lean_stringToMessageData(v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2(lean_object* v_shouldCheck_984_, lean_object* v_val_985_, lean_object* v___x_986_, lean_object* v___y_987_, lean_object* v_as_988_, size_t v_sz_989_, size_t v_i_990_, lean_object* v_b_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_a_996_; uint8_t v___x_1000_; 
v___x_1000_ = lean_usize_dec_lt(v_i_990_, v_sz_989_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
lean_dec_ref(v_shouldCheck_984_);
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v_b_991_);
return v___x_1001_;
}
else
{
lean_object* v_a_1002_; lean_object* v_fst_1003_; lean_object* v_snd_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1093_; 
v_a_1002_ = lean_array_uget(v_as_988_, v_i_990_);
v_fst_1003_ = lean_ctor_get(v_a_1002_, 0);
v_snd_1004_ = lean_ctor_get(v_a_1002_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_a_1002_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1006_ = v_a_1002_;
v_isShared_1007_ = v_isSharedCheck_1093_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_snd_1004_);
lean_inc(v_fst_1003_);
lean_dec(v_a_1002_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1093_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___y_1022_; uint8_t v___y_1023_; lean_object* v_val_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_shouldCheck_984_);
lean_inc(v___y_993_);
lean_inc_ref(v___y_992_);
lean_inc(v_snd_1004_);
v___x_1040_ = lean_apply_4(v_shouldCheck_984_, v_snd_1004_, v___y_992_, v___y_993_, lean_box(0));
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; uint8_t v___x_1042_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = lean_unbox(v_a_1041_);
lean_dec(v_a_1041_);
if (v___x_1042_ == 0)
{
lean_del_object(v___x_1006_);
lean_dec(v_snd_1004_);
lean_dec(v_fst_1003_);
v_a_996_ = v_b_991_;
goto v___jp_995_;
}
else
{
lean_object* v_imports_1043_; lean_object* v_check_1044_; lean_object* v___y_1046_; lean_object* v___x_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v_imports_1043_ = lean_ctor_get(v_snd_1004_, 3);
v_check_1044_ = lean_ctor_get(v_snd_1004_, 7);
v___x_1075_ = lean_array_get_size(v_imports_1043_);
v___x_1076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__8));
v___x_1077_ = lean_nat_dec_lt(v___x_1039_, v___x_1075_);
if (v___x_1077_ == 0)
{
v___y_1046_ = v___x_1076_;
goto v___jp_1045_;
}
else
{
uint8_t v___x_1078_; 
v___x_1078_ = lean_nat_dec_le(v___x_1075_, v___x_1075_);
if (v___x_1078_ == 0)
{
if (v___x_1077_ == 0)
{
v___y_1046_ = v___x_1076_;
goto v___jp_1045_;
}
else
{
size_t v___x_1079_; size_t v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = ((size_t)0ULL);
v___x_1080_ = lean_usize_of_nat(v___x_1075_);
v___x_1081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1(v___y_987_, v_imports_1043_, v___x_1079_, v___x_1080_, v___x_1076_);
v___y_1046_ = v___x_1081_;
goto v___jp_1045_;
}
}
else
{
size_t v___x_1082_; size_t v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = ((size_t)0ULL);
v___x_1083_ = lean_usize_of_nat(v___x_1075_);
v___x_1084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__1(v___y_987_, v_imports_1043_, v___x_1082_, v___x_1083_, v___x_1076_);
v___y_1046_ = v___x_1084_;
goto v___jp_1045_;
}
}
v___jp_1045_:
{
lean_object* v___x_1047_; uint8_t v___x_1048_; 
v___x_1047_ = lean_array_get_size(v___y_1046_);
v___x_1048_ = lean_nat_dec_eq(v___x_1047_, v___x_1039_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
lean_del_object(v___x_1006_);
v___x_1049_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__5);
v___x_1050_ = lean_array_to_list(v___y_1046_);
v___x_1051_ = lean_box(0);
v___x_1052_ = l_List_mapTR_loop___at___00Lean_Doc_DeferredCheck_run_spec__0(v___x_1050_, v___x_1051_);
v___x_1053_ = l_Lean_MessageData_ofList(v___x_1052_);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1049_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__7);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1057_, 0, v_snd_1004_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v_fst_1003_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = lean_array_push(v_b_991_, v___x_1058_);
v_a_996_ = v___x_1059_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_dec_ref(v___y_1046_);
v___x_1060_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_check_1044_);
v___x_1061_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_val_985_, v___x_1060_);
if (lean_obj_tag(v___x_1061_) == 1)
{
lean_dec(v___x_1060_);
if (lean_obj_tag(v___x_1061_) == 0)
{
goto v___jp_1008_;
}
else
{
lean_object* v_val_1062_; 
lean_del_object(v___x_1006_);
v_val_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_val_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v_val_1030_ = v_val_1062_;
v___y_1031_ = v___y_992_;
v___y_1032_ = v___y_993_;
goto v___jp_1029_;
}
}
else
{
lean_object* v___x_1063_; 
lean_dec(v___x_1061_);
v___x_1063_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_986_, v___x_1060_);
lean_dec(v___x_1060_);
if (lean_obj_tag(v___x_1063_) == 1)
{
lean_object* v_val_1064_; lean_object* v___x_1065_; 
lean_del_object(v___x_1006_);
v_val_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_val_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1065_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_getHandlerUnsafe(v_val_1064_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v_val_1030_ = v_a_1066_;
v___y_1031_ = v___y_992_;
v___y_1032_ = v___y_993_;
goto v___jp_1029_;
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec(v_snd_1004_);
lean_dec(v_fst_1003_);
lean_dec_ref(v_b_991_);
lean_dec_ref(v_shouldCheck_984_);
v_a_1067_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1065_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1065_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
else
{
lean_dec(v___x_1063_);
goto v___jp_1008_;
}
}
}
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_del_object(v___x_1006_);
lean_dec(v_snd_1004_);
lean_dec(v_fst_1003_);
lean_dec_ref(v_b_991_);
lean_dec_ref(v_shouldCheck_984_);
v_a_1085_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1040_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1040_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
v___jp_1008_:
{
lean_object* v_check_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v_check_1009_ = lean_ctor_get(v_snd_1004_, 7);
v___x_1010_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__1);
v___x_1011_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_check_1009_);
v___x_1012_ = l_Lean_MessageData_ofName(v___x_1011_);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1010_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___closed__3);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 1, v___x_1015_);
lean_ctor_set(v___x_1006_, 0, v_snd_1004_);
v___x_1017_ = v___x_1006_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_snd_1004_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v___x_1015_);
v___x_1017_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_fst_1003_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_array_push(v_b_991_, v___x_1018_);
v_a_996_ = v___x_1019_;
goto v___jp_995_;
}
}
v___jp_1021_:
{
if (v___y_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1024_ = l_Lean_Exception_toMessageData(v___y_1022_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v_snd_1004_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v_fst_1003_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_array_push(v_b_991_, v___x_1026_);
v_a_996_ = v___x_1027_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1028_; 
lean_dec(v_snd_1004_);
lean_dec(v_fst_1003_);
lean_dec_ref(v_b_991_);
lean_dec_ref(v_shouldCheck_984_);
v___x_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___y_1022_);
return v___x_1028_;
}
}
v___jp_1029_:
{
lean_object* v_check_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_check_1033_ = lean_ctor_get(v_snd_1004_, 7);
lean_inc(v_check_1033_);
v___x_1034_ = lean_apply_1(v_val_1030_, v_check_1033_);
v___x_1035_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_withScope___redArg(v_snd_1004_, v___x_1034_, v___y_1031_, v___y_1032_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_dec_ref_known(v___x_1035_, 1);
lean_dec(v_snd_1004_);
lean_dec(v_fst_1003_);
v_a_996_ = v_b_991_;
goto v___jp_995_;
}
else
{
lean_object* v_a_1036_; uint8_t v___x_1037_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = l_Lean_Exception_isInterrupt(v_a_1036_);
if (v___x_1037_ == 0)
{
uint8_t v___x_1038_; 
lean_inc(v_a_1036_);
v___x_1038_ = l_Lean_Exception_isRuntime(v_a_1036_);
v___y_1022_ = v_a_1036_;
v___y_1023_ = v___x_1038_;
goto v___jp_1021_;
}
else
{
v___y_1022_ = v_a_1036_;
v___y_1023_ = v___x_1037_;
goto v___jp_1021_;
}
}
}
}
}
v___jp_995_:
{
size_t v___x_997_; size_t v___x_998_; 
v___x_997_ = ((size_t)1ULL);
v___x_998_ = lean_usize_add(v_i_990_, v___x_997_);
v_i_990_ = v___x_998_;
v_b_991_ = v_a_996_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2___boxed(lean_object* v_shouldCheck_1094_, lean_object* v_val_1095_, lean_object* v___x_1096_, lean_object* v___y_1097_, lean_object* v_as_1098_, lean_object* v_sz_1099_, lean_object* v_i_1100_, lean_object* v_b_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
size_t v_sz_boxed_1105_; size_t v_i_boxed_1106_; lean_object* v_res_1107_; 
v_sz_boxed_1105_ = lean_unbox_usize(v_sz_1099_);
lean_dec(v_sz_1099_);
v_i_boxed_1106_ = lean_unbox_usize(v_i_1100_);
lean_dec(v_i_1100_);
v_res_1107_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2(v_shouldCheck_1094_, v_val_1095_, v___x_1096_, v___y_1097_, v_as_1098_, v_sz_boxed_1105_, v_i_boxed_1106_, v_b_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_as_1098_);
lean_dec(v___y_1097_);
lean_dec(v___x_1096_);
lean_dec(v_val_1095_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_run(lean_object* v_inPackage_1110_, lean_object* v_shouldCheck_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v_env_1117_; lean_object* v___x_1118_; lean_object* v_toEnvExtension_1119_; lean_object* v_asyncMode_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___y_1130_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1115_ = lean_box(1);
v___x_1116_ = lean_st_ref_get(v_a_1113_);
v_env_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc_ref_n(v_env_1117_, 2);
lean_dec(v___x_1116_);
v___x_1118_ = l_Lean_Doc_DeferredCheck_handlerExt;
v_toEnvExtension_1119_ = lean_ctor_get(v___x_1118_, 0);
v_asyncMode_1120_ = lean_ctor_get(v_toEnvExtension_1119_, 2);
v___x_1121_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_, &l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn___closed__0_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_);
v___x_1122_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1115_, v___x_1118_, v_env_1117_, v_asyncMode_1120_, v___x_1121_);
v___x_1123_ = l_Lean_Doc_DeferredCheck_builtinHandlers;
v___x_1124_ = lean_st_ref_get(v___x_1123_);
v___x_1125_ = l_Lean_NameSet_empty;
v___x_1126_ = l_Lean_Environment_header(v_env_1117_);
v___x_1127_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1126_);
lean_dec_ref(v___x_1126_);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1136_ = lean_array_get_size(v___x_1127_);
v___x_1137_ = lean_nat_dec_lt(v___x_1128_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_dec_ref(v___x_1127_);
v___y_1130_ = v___x_1125_;
goto v___jp_1129_;
}
else
{
uint8_t v___x_1138_; 
v___x_1138_ = lean_nat_dec_le(v___x_1136_, v___x_1136_);
if (v___x_1138_ == 0)
{
if (v___x_1137_ == 0)
{
lean_dec_ref(v___x_1127_);
v___y_1130_ = v___x_1125_;
goto v___jp_1129_;
}
else
{
size_t v___x_1139_; size_t v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((size_t)0ULL);
v___x_1140_ = lean_usize_of_nat(v___x_1136_);
v___x_1141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3(v___x_1127_, v___x_1139_, v___x_1140_, v___x_1125_);
lean_dec_ref(v___x_1127_);
v___y_1130_ = v___x_1141_;
goto v___jp_1129_;
}
}
else
{
size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
v___x_1142_ = ((size_t)0ULL);
v___x_1143_ = lean_usize_of_nat(v___x_1136_);
v___x_1144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_DeferredCheck_run_spec__3(v___x_1127_, v___x_1142_, v___x_1143_, v___x_1125_);
lean_dec_ref(v___x_1127_);
v___y_1130_ = v___x_1144_;
goto v___jp_1129_;
}
}
v___jp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; size_t v_sz_1133_; size_t v___x_1134_; lean_object* v___x_1135_; 
v___x_1131_ = ((lean_object*)(l_Lean_Doc_DeferredCheck_run___closed__0));
v___x_1132_ = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_collect(v_env_1117_, v_inPackage_1110_);
v_sz_1133_ = lean_array_size(v___x_1132_);
v___x_1134_ = ((size_t)0ULL);
v___x_1135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Doc_DeferredCheck_run_spec__2(v_shouldCheck_1111_, v___x_1124_, v___x_1122_, v___y_1130_, v___x_1132_, v_sz_1133_, v___x_1134_, v___x_1131_, v_a_1112_, v_a_1113_);
lean_dec_ref(v___x_1132_);
lean_dec(v___y_1130_);
lean_dec(v___x_1122_);
lean_dec(v___x_1124_);
return v___x_1135_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DeferredCheck_run___boxed(lean_object* v_inPackage_1145_, lean_object* v_shouldCheck_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Doc_DeferredCheck_run(v_inPackage_1145_, v_shouldCheck_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
return v_res_1150_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3257731387____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_linter_doc_deferred = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_linter_doc_deferred);
lean_dec_ref(res);
l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_ = _init_l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_();
lean_mark_persistent(l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1706582166____hygCtx___hyg_8_);
l_Lean_Doc_instTypeNamePostponedName = _init_l_Lean_Doc_instTypeNamePostponedName();
lean_mark_persistent(l_Lean_Doc_instTypeNamePostponedName);
l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_ = _init_l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_();
lean_mark_persistent(l_Lean_Doc_instImpl_00___x40_Lean_Elab_DocString_Builtin_Postponed_1858815893____hygCtx___hyg_8_);
l_Lean_Doc_instTypeNamePostponedKind = _init_l_Lean_Doc_instTypeNamePostponedKind();
lean_mark_persistent(l_Lean_Doc_instTypeNamePostponedKind);
res = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3792406048____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_DeferredCheck_handlerExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_DeferredCheck_handlerExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_3985216099____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_DeferredCheck_builtinHandlers = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_DeferredCheck_builtinHandlers);
lean_dec_ref(res);
res = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_1993970768____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DocString_Builtin_Postponed_0__Lean_Doc_DeferredCheck_initFn_00___x40_Lean_Elab_DocString_Builtin_Postponed_195487833____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
}
#ifdef __cplusplus
}
#endif

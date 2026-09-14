// Lean compiler output
// Module: Lean.Elab.Deriving.Util
// Imports: public import Lean.Elab.Command import Lean.Elab.DeclNameGen
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Parser_Term_instBinder;
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_NameGen_mkBaseNameWithSuffix_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_InductiveVal_isNested(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_implicitBinder(uint8_t);
lean_object* l_Lean_Parser_Term_explicitBinder(uint8_t);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
static lean_once_cell_t l_Lean_Elab_Deriving_implicitBinderF___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_implicitBinderF___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_implicitBinderF;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_instBinderF;
static lean_once_cell_t l_Lean_Elab_Deriving_explicitBinderF___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_explicitBinderF___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_explicitBinderF;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Deriving_mkInductArgNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Deriving_mkInductArgNames___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductArgNames___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_1),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "cannot use `deriving ... @[expose]` with `"};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2;
static const lean_string_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "` as it has one or more private constructors"};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkInstName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l_Lean_Elab_Deriving_mkInstName___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInstName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__5;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instName: "};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__7;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " auxFunNames: "};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "localinst"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(49, 72, 186, 87, 62, 92, 205, 11)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 166, 195, 152, 24, 103, 8, 2)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Deriving_implicitBinderF___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l_Lean_Parser_Term_implicitBinder(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_implicitBinderF(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_Elab_Deriving_implicitBinderF___closed__0, &l_Lean_Elab_Deriving_implicitBinderF___closed__0_once, _init_l_Lean_Elab_Deriving_implicitBinderF___closed__0);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_instBinderF(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Lean_Parser_Term_instBinder;
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_explicitBinderF___closed__0(void){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; 
v___x_5_ = 0;
v___x_6_ = l_Lean_Parser_Term_explicitBinder(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_explicitBinderF(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Deriving_explicitBinderF___closed__0, &l_Lean_Elab_Deriving_explicitBinderF___closed__0_once, _init_l_Lean_Elab_Deriving_explicitBinderF___closed__0);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(lean_object* v_k_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
lean_inc(v___y_16_);
lean_inc_ref(v___y_15_);
lean_inc(v___y_14_);
lean_inc_ref(v___y_13_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
v___x_18_ = lean_apply_9(v_k_8_, v_b_11_, v_c_12_, v___y_9_, v___y_10_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, lean_box(0));
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed(lean_object* v_k_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v_b_22_, lean_object* v_c_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(v_k_19_, v___y_20_, v___y_21_, v_b_22_, v_c_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(lean_object* v_type_30_, lean_object* v_k_31_, uint8_t v_cleanupAnnotations_32_, uint8_t v_whnfType_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___f_41_; lean_object* v___x_42_; 
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
v___f_41_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_41_, 0, v_k_31_);
lean_closure_set(v___f_41_, 1, v___y_34_);
lean_closure_set(v___f_41_, 2, v___y_35_);
v___x_42_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_30_, v___f_41_, v_cleanupAnnotations_32_, v_whnfType_33_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
if (lean_obj_tag(v___x_42_) == 0)
{
return v___x_42_;
}
else
{
lean_object* v_a_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_50_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_50_ == 0)
{
v___x_45_ = v___x_42_;
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_a_43_);
lean_dec(v___x_42_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_48_; 
if (v_isShared_46_ == 0)
{
v___x_48_ = v___x_45_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_a_43_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___boxed(lean_object* v_type_51_, lean_object* v_k_52_, lean_object* v_cleanupAnnotations_53_, lean_object* v_whnfType_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_62_; uint8_t v_whnfType_boxed_63_; lean_object* v_res_64_; 
v_cleanupAnnotations_boxed_62_ = lean_unbox(v_cleanupAnnotations_53_);
v_whnfType_boxed_63_ = lean_unbox(v_whnfType_54_);
v_res_64_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_51_, v_k_52_, v_cleanupAnnotations_boxed_62_, v_whnfType_boxed_63_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(lean_object* v_00_u03b1_65_, lean_object* v_type_66_, lean_object* v_k_67_, uint8_t v_cleanupAnnotations_68_, uint8_t v_whnfType_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_66_, v_k_67_, v_cleanupAnnotations_68_, v_whnfType_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___boxed(lean_object* v_00_u03b1_78_, lean_object* v_type_79_, lean_object* v_k_80_, lean_object* v_cleanupAnnotations_81_, lean_object* v_whnfType_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_90_; uint8_t v_whnfType_boxed_91_; lean_object* v_res_92_; 
v_cleanupAnnotations_boxed_90_ = lean_unbox(v_cleanupAnnotations_81_);
v_whnfType_boxed_91_ = lean_unbox(v_whnfType_82_);
v_res_92_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(v_00_u03b1_78_, v_type_79_, v_k_80_, v_cleanupAnnotations_boxed_90_, v_whnfType_boxed_91_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(lean_object* v_as_93_, size_t v_sz_94_, size_t v_i_95_, lean_object* v_b_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = lean_usize_dec_lt(v_i_95_, v_sz_94_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v_b_96_);
return v___x_102_;
}
else
{
lean_object* v_a_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_a_103_ = lean_array_uget_borrowed(v_as_93_, v_i_95_);
v___x_104_ = l_Lean_Expr_fvarId_x21(v_a_103_);
v___x_105_ = l_Lean_FVarId_getDecl___redArg(v___x_104_, v___y_97_, v___y_98_, v___y_99_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v___x_107_ = l_Lean_LocalDecl_userName(v_a_106_);
lean_dec(v_a_106_);
v___x_108_ = l_Lean_Name_eraseMacroScopes(v___x_107_);
lean_dec(v___x_107_);
v___x_109_ = l_Lean_Core_mkFreshUserName(v___x_108_, v___y_98_, v___y_99_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; size_t v___x_112_; size_t v___x_113_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc(v_a_110_);
lean_dec_ref_known(v___x_109_, 1);
v___x_111_ = lean_array_push(v_b_96_, v_a_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_95_, v___x_112_);
v_i_95_ = v___x_113_;
v_b_96_ = v___x_111_;
goto _start;
}
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec_ref(v_b_96_);
v_a_115_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_109_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_109_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec_ref(v_b_96_);
v_a_123_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_105_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_105_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg___boxed(lean_object* v_as_131_, lean_object* v_sz_132_, lean_object* v_i_133_, lean_object* v_b_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
size_t v_sz_boxed_139_; size_t v_i_boxed_140_; lean_object* v_res_141_; 
v_sz_boxed_139_ = lean_unbox_usize(v_sz_132_);
lean_dec(v_sz_132_);
v_i_boxed_140_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_as_131_, v_sz_boxed_139_, v_i_boxed_140_, v_b_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v_as_131_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0(lean_object* v_xs_144_, lean_object* v_x_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_argNames_153_; size_t v_sz_154_; size_t v___x_155_; lean_object* v___x_156_; 
v_argNames_153_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v_sz_154_ = lean_array_size(v_xs_144_);
v___x_155_ = ((size_t)0ULL);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_xs_144_, v_sz_154_, v___x_155_, v_argNames_153_, v___y_148_, v___y_150_, v___y_151_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed(lean_object* v_xs_157_, lean_object* v_x_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Elab_Deriving_mkInductArgNames___lam__0(v_xs_157_, v_x_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec_ref(v_x_158_);
lean_dec_ref(v_xs_157_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object* v_indVal_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_toConstantVal_176_; lean_object* v_type_177_; lean_object* v___f_178_; uint8_t v___x_179_; lean_object* v___x_180_; 
v_toConstantVal_176_ = lean_ctor_get(v_indVal_168_, 0);
lean_inc_ref(v_toConstantVal_176_);
lean_dec_ref(v_indVal_168_);
v_type_177_ = lean_ctor_get(v_toConstantVal_176_, 2);
lean_inc_ref(v_type_177_);
lean_dec_ref(v_toConstantVal_176_);
v___f_178_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___closed__0));
v___x_179_ = 0;
v___x_180_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_177_, v___f_178_, v___x_179_, v___x_179_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___boxed(lean_object* v_indVal_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Elab_Deriving_mkInductArgNames(v_indVal_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(lean_object* v_as_190_, size_t v_sz_191_, size_t v_i_192_, lean_object* v_b_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_as_190_, v_sz_191_, v_i_192_, v_b_193_, v___y_196_, v___y_198_, v___y_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___boxed(lean_object* v_as_202_, lean_object* v_sz_203_, lean_object* v_i_204_, lean_object* v_b_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
size_t v_sz_boxed_213_; size_t v_i_boxed_214_; lean_object* v_res_215_; 
v_sz_boxed_213_ = lean_unbox_usize(v_sz_203_);
lean_dec(v_sz_203_);
v_i_boxed_214_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_res_215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(v_as_202_, v_sz_boxed_213_, v_i_boxed_214_, v_b_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec_ref(v_as_202_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(size_t v_sz_216_, size_t v_i_217_, lean_object* v_bs_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_lt(v_i_217_, v_sz_216_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = l_unsafeCast___redArg(v_bs_218_);
lean_dec_ref(v_bs_218_);
return v___x_220_;
}
else
{
lean_object* v_v_221_; lean_object* v___x_222_; lean_object* v_bs_x27_223_; lean_object* v___x_224_; size_t v___x_225_; size_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_v_221_ = lean_array_uget(v_bs_218_, v_i_217_);
v___x_222_ = lean_unsigned_to_nat(0u);
v_bs_x27_223_ = lean_array_uset(v_bs_218_, v_i_217_, v___x_222_);
v___x_224_ = l_unsafeCast___redArg(v_v_221_);
lean_dec(v_v_221_);
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_217_, v___x_225_);
v___x_227_ = l_unsafeCast___redArg(v___x_224_);
lean_dec(v___x_224_);
v___x_228_ = lean_array_uset(v_bs_x27_223_, v_i_217_, v___x_227_);
v_i_217_ = v___x_226_;
v_bs_218_ = v___x_228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1___boxed(lean_object* v_sz_230_, lean_object* v_i_231_, lean_object* v_bs_232_){
_start:
{
size_t v_sz_boxed_233_; size_t v_i_boxed_234_; lean_object* v_res_235_; 
v_sz_boxed_233_ = lean_unbox_usize(v_sz_230_);
lean_dec(v_sz_230_);
v_i_boxed_234_ = lean_unbox_usize(v_i_231_);
lean_dec(v_i_231_);
v_res_235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(v_sz_boxed_233_, v_i_boxed_234_, v_bs_232_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(size_t v_sz_236_, size_t v_i_237_, lean_object* v_bs_238_){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = lean_usize_dec_lt(v_i_237_, v_sz_236_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
v___x_240_ = l_unsafeCast___redArg(v_bs_238_);
lean_dec_ref(v_bs_238_);
return v___x_240_;
}
else
{
lean_object* v_v_241_; lean_object* v___x_242_; lean_object* v_bs_x27_243_; lean_object* v___x_244_; lean_object* v___x_245_; size_t v___x_246_; size_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_v_241_ = lean_array_uget(v_bs_238_, v_i_237_);
v___x_242_ = lean_unsigned_to_nat(0u);
v_bs_x27_243_ = lean_array_uset(v_bs_238_, v_i_237_, v___x_242_);
v___x_244_ = l_unsafeCast___redArg(v_v_241_);
lean_dec(v_v_241_);
v___x_245_ = l_Lean_mkIdent(v___x_244_);
v___x_246_ = ((size_t)1ULL);
v___x_247_ = lean_usize_add(v_i_237_, v___x_246_);
v___x_248_ = l_unsafeCast___redArg(v___x_245_);
lean_dec(v___x_245_);
v___x_249_ = lean_array_uset(v_bs_x27_243_, v_i_237_, v___x_248_);
v_i_237_ = v___x_247_;
v_bs_238_ = v___x_249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0___boxed(lean_object* v_sz_251_, lean_object* v_i_252_, lean_object* v_bs_253_){
_start:
{
size_t v_sz_boxed_254_; size_t v_i_boxed_255_; lean_object* v_res_256_; 
v_sz_boxed_254_ = lean_unbox_usize(v_sz_251_);
lean_dec(v_sz_251_);
v_i_boxed_255_ = lean_unbox_usize(v_i_252_);
lean_dec(v_i_252_);
v_res_256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(v_sz_boxed_254_, v_i_boxed_255_, v_bs_253_);
return v_res_256_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10(void){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Array_mkArray0___redArg();
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object* v_indVal_277_, lean_object* v_argNames_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_toConstantVal_281_; lean_object* v_name_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_313_; 
v_toConstantVal_281_ = lean_ctor_get(v_indVal_277_, 0);
lean_inc_ref(v_toConstantVal_281_);
lean_dec_ref(v_indVal_277_);
v_name_282_ = lean_ctor_get(v_toConstantVal_281_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v_toConstantVal_281_);
if (v_isSharedCheck_313_ == 0)
{
lean_object* v_unused_314_; lean_object* v_unused_315_; 
v_unused_314_ = lean_ctor_get(v_toConstantVal_281_, 2);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_toConstantVal_281_, 1);
lean_dec(v_unused_315_);
v___x_284_ = v_toConstantVal_281_;
v_isShared_285_ = v_isSharedCheck_313_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_name_282_);
lean_dec(v_toConstantVal_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_313_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v_ref_286_; lean_object* v_f_287_; size_t v_sz_288_; size_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v_args_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; size_t v_sz_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v_ref_286_ = lean_ctor_get(v_a_279_, 2);
v_f_287_ = l_Lean_mkCIdent(v_name_282_);
v_sz_288_ = lean_array_size(v_argNames_278_);
v___x_289_ = ((size_t)0ULL);
v___x_290_ = l_unsafeCast___redArg(v_argNames_278_);
v___x_291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(v_sz_288_, v___x_289_, v___x_290_);
v_args_292_ = l_unsafeCast___redArg(v___x_291_);
lean_dec_ref(v___x_291_);
v___x_293_ = 0;
v___x_294_ = l_Lean_SourceInfo_fromRef(v_ref_286_, v___x_293_);
v___x_295_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
v___x_296_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6));
v___x_297_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7));
lean_inc_n(v___x_294_, 3);
v___x_298_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_294_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = l_Lean_Syntax_node2(v___x_294_, v___x_296_, v___x_298_, v_f_287_);
v___x_300_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_301_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v_sz_302_ = lean_array_size(v_args_292_);
v___x_303_ = l_unsafeCast___redArg(v_args_292_);
lean_dec(v_args_292_);
v___x_304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(v_sz_302_, v___x_289_, v___x_303_);
v___x_305_ = l_unsafeCast___redArg(v___x_304_);
lean_dec_ref(v___x_304_);
v___x_306_ = l_unsafeCast___redArg(v___x_305_);
lean_dec(v___x_305_);
v___x_307_ = l_Array_append___redArg(v___x_301_, v___x_306_);
lean_dec(v___x_306_);
if (v_isShared_285_ == 0)
{
lean_ctor_set_tag(v___x_284_, 1);
lean_ctor_set(v___x_284_, 2, v___x_307_);
lean_ctor_set(v___x_284_, 1, v___x_300_);
lean_ctor_set(v___x_284_, 0, v___x_294_);
v___x_309_ = v___x_284_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_307_);
v___x_309_ = v_reuseFailAlloc_312_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = l_Lean_Syntax_node2(v___x_294_, v___x_295_, v___x_299_, v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___boxed(lean_object* v_indVal_316_, lean_object* v_argNames_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_316_, v_argNames_317_, v_a_318_);
lean_dec_ref(v_a_318_);
lean_dec_ref(v_argNames_317_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object* v_indVal_321_, lean_object* v_argNames_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_321_, v_argNames_322_, v_a_327_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object* v_indVal_331_, lean_object* v_argNames_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Elab_Deriving_mkInductiveApp(v_indVal_331_, v_argNames_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec_ref(v_argNames_332_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(size_t v_sz_349_, size_t v_i_350_, lean_object* v_bs_351_, lean_object* v___y_352_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = lean_usize_dec_lt(v_i_350_, v_sz_349_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = l_unsafeCast___redArg(v_bs_351_);
lean_dec_ref(v_bs_351_);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
else
{
lean_object* v_ref_357_; lean_object* v_v_358_; lean_object* v___x_359_; lean_object* v_bs_x27_360_; lean_object* v___x_361_; uint8_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; size_t v___x_375_; size_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_ref_357_ = lean_ctor_get(v___y_352_, 2);
v_v_358_ = lean_array_uget(v_bs_351_, v_i_350_);
v___x_359_ = lean_unsigned_to_nat(0u);
v_bs_x27_360_ = lean_array_uset(v_bs_351_, v_i_350_, v___x_359_);
v___x_361_ = l_unsafeCast___redArg(v_v_358_);
lean_dec(v_v_358_);
v___x_362_ = 0;
v___x_363_ = l_Lean_SourceInfo_fromRef(v_ref_357_, v___x_362_);
v___x_364_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1));
v___x_365_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2));
lean_inc_n(v___x_363_, 4);
v___x_366_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_363_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_368_ = l_Lean_mkIdent(v___x_361_);
v___x_369_ = l_Lean_Syntax_node1(v___x_363_, v___x_367_, v___x_368_);
v___x_370_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_371_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_371_, 0, v___x_363_);
lean_ctor_set(v___x_371_, 1, v___x_367_);
lean_ctor_set(v___x_371_, 2, v___x_370_);
v___x_372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3));
v___x_373_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_363_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
v___x_374_ = l_Lean_Syntax_node4(v___x_363_, v___x_364_, v___x_366_, v___x_369_, v___x_371_, v___x_373_);
v___x_375_ = ((size_t)1ULL);
v___x_376_ = lean_usize_add(v_i_350_, v___x_375_);
v___x_377_ = l_unsafeCast___redArg(v___x_374_);
lean_dec(v___x_374_);
v___x_378_ = lean_array_uset(v_bs_x27_360_, v_i_350_, v___x_377_);
v_i_350_ = v___x_376_;
v_bs_351_ = v___x_378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___boxed(lean_object* v_sz_380_, lean_object* v_i_381_, lean_object* v_bs_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
size_t v_sz_boxed_385_; size_t v_i_boxed_386_; lean_object* v_res_387_; 
v_sz_boxed_385_ = lean_unbox_usize(v_sz_380_);
lean_dec(v_sz_380_);
v_i_boxed_386_ = lean_unbox_usize(v_i_381_);
lean_dec(v_i_381_);
v_res_387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(v_sz_boxed_385_, v_i_boxed_386_, v_bs_382_, v___y_383_);
lean_dec_ref(v___y_383_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(size_t v_sz_388_, size_t v_i_389_, lean_object* v_bs_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(v_sz_388_, v_i_389_, v_bs_390_, v___y_395_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___boxed(lean_object* v_sz_399_, lean_object* v_i_400_, lean_object* v_bs_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
size_t v_sz_boxed_409_; size_t v_i_boxed_410_; lean_object* v_res_411_; 
v_sz_boxed_409_ = lean_unbox_usize(v_sz_399_);
lean_dec(v_sz_399_);
v_i_boxed_410_ = lean_unbox_usize(v_i_400_);
lean_dec(v_i_400_);
v_res_411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(v_sz_boxed_409_, v_i_boxed_410_, v_bs_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object* v_argNames_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
size_t v_sz_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_1652__overap_427_; lean_object* v___x_428_; 
v_sz_422_ = lean_array_size(v_argNames_414_);
v___x_423_ = l_unsafeCast___redArg(v_argNames_414_);
v___x_424_ = lean_box_usize(v_sz_422_);
v___x_425_ = ((lean_object*)(l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1));
v___x_426_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___boxed), 10, 3);
lean_closure_set(v___x_426_, 0, v___x_424_);
lean_closure_set(v___x_426_, 1, v___x_425_);
lean_closure_set(v___x_426_, 2, v___x_423_);
v___x_1652__overap_427_ = l_unsafeCast___redArg(v___x_426_);
lean_dec_ref(v___x_426_);
lean_inc(v_a_420_);
lean_inc_ref(v_a_419_);
lean_inc(v_a_418_);
lean_inc_ref(v_a_417_);
lean_inc(v_a_416_);
lean_inc_ref(v_a_415_);
v___x_428_ = lean_apply_7(v___x_1652__overap_427_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, lean_box(0));
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed(lean_object* v_argNames_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_argNames_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec_ref(v_argNames_429_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(lean_object* v_type_438_, lean_object* v_maxFVars_x3f_439_, lean_object* v_k_440_, uint8_t v_cleanupAnnotations_441_, uint8_t v_whnfType_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v___f_450_; lean_object* v___x_451_; 
lean_inc(v___y_444_);
lean_inc_ref(v___y_443_);
v___f_450_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_450_, 0, v_k_440_);
lean_closure_set(v___f_450_, 1, v___y_443_);
lean_closure_set(v___f_450_, 2, v___y_444_);
v___x_451_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_438_, v_maxFVars_x3f_439_, v___f_450_, v_cleanupAnnotations_441_, v_whnfType_442_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
if (lean_obj_tag(v___x_451_) == 0)
{
return v___x_451_;
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_451_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_451_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg___boxed(lean_object* v_type_460_, lean_object* v_maxFVars_x3f_461_, lean_object* v_k_462_, lean_object* v_cleanupAnnotations_463_, lean_object* v_whnfType_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_472_; uint8_t v_whnfType_boxed_473_; lean_object* v_res_474_; 
v_cleanupAnnotations_boxed_472_ = lean_unbox(v_cleanupAnnotations_463_);
v_whnfType_boxed_473_ = lean_unbox(v_whnfType_464_);
v_res_474_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_460_, v_maxFVars_x3f_461_, v_k_462_, v_cleanupAnnotations_boxed_472_, v_whnfType_boxed_473_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(lean_object* v_00_u03b1_475_, lean_object* v_type_476_, lean_object* v_maxFVars_x3f_477_, lean_object* v_k_478_, uint8_t v_cleanupAnnotations_479_, uint8_t v_whnfType_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_476_, v_maxFVars_x3f_477_, v_k_478_, v_cleanupAnnotations_479_, v_whnfType_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___boxed(lean_object* v_00_u03b1_489_, lean_object* v_type_490_, lean_object* v_maxFVars_x3f_491_, lean_object* v_k_492_, lean_object* v_cleanupAnnotations_493_, lean_object* v_whnfType_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_502_; uint8_t v_whnfType_boxed_503_; lean_object* v_res_504_; 
v_cleanupAnnotations_boxed_502_ = lean_unbox(v_cleanupAnnotations_493_);
v_whnfType_boxed_503_ = lean_unbox(v_whnfType_494_);
v_res_504_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(v_00_u03b1_489_, v_type_490_, v_maxFVars_x3f_491_, v_k_492_, v_cleanupAnnotations_boxed_502_, v_whnfType_boxed_503_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(lean_object* v_upperBound_513_, lean_object* v_xs_514_, lean_object* v_className_515_, lean_object* v_argNames_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_snd_525_; lean_object* v___y_530_; uint8_t v___y_531_; lean_object* v_a_534_; uint8_t v___x_537_; 
v___x_537_ = lean_nat_dec_lt(v_a_517_, v_upperBound_513_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; 
lean_dec(v_a_517_);
lean_dec(v_className_515_);
v___x_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_538_, 0, v_b_518_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_539_ = l_Lean_instInhabitedName;
v___x_540_ = lean_array_fget_borrowed(v_xs_514_, v_a_517_);
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = lean_mk_empty_array_with_capacity(v___x_541_);
lean_inc(v___x_540_);
v___x_543_ = lean_array_push(v___x_542_, v___x_540_);
lean_inc(v_className_515_);
v___x_544_ = l_Lean_Meta_mkAppM(v_className_515_, v___x_543_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = l_Lean_Meta_isTypeCorrect(v_a_545_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; uint8_t v___x_548_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_546_, 1);
v___x_548_ = lean_unbox(v_a_547_);
lean_dec(v_a_547_);
if (v___x_548_ == 0)
{
v_snd_525_ = v_b_518_;
goto v___jp_524_;
}
else
{
lean_object* v_ref_549_; lean_object* v___x_550_; uint8_t v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_ref_549_ = lean_ctor_get(v___y_521_, 2);
v___x_550_ = lean_array_get_borrowed(v___x_539_, v_argNames_516_, v_a_517_);
v___x_551_ = 0;
v___x_552_ = l_Lean_SourceInfo_fromRef(v_ref_549_, v___x_551_);
v___x_553_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1));
v___x_554_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2));
lean_inc_n(v___x_552_, 5);
v___x_555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_552_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_557_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_558_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_558_, 0, v___x_552_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
lean_ctor_set(v___x_558_, 2, v___x_557_);
v___x_559_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_515_);
v___x_560_ = l_Lean_mkCIdent(v_className_515_);
lean_inc(v___x_550_);
v___x_561_ = l_Lean_mkIdent(v___x_550_);
v___x_562_ = l_Lean_Syntax_node1(v___x_552_, v___x_556_, v___x_561_);
v___x_563_ = l_Lean_Syntax_node2(v___x_552_, v___x_559_, v___x_560_, v___x_562_);
v___x_564_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3));
v___x_565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_552_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = l_Lean_Syntax_node4(v___x_552_, v___x_553_, v___x_555_, v___x_558_, v___x_563_, v___x_565_);
v___x_567_ = lean_array_push(v_b_518_, v___x_566_);
v_snd_525_ = v___x_567_;
goto v___jp_524_;
}
}
else
{
lean_object* v_a_568_; 
v_a_568_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_546_, 1);
v_a_534_ = v_a_568_;
goto v___jp_533_;
}
}
else
{
lean_object* v_a_569_; 
v_a_569_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_544_, 1);
v_a_534_ = v_a_569_;
goto v___jp_533_;
}
}
v___jp_524_:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_add(v_a_517_, v___x_526_);
lean_dec(v_a_517_);
v_a_517_ = v___x_527_;
v_b_518_ = v_snd_525_;
goto _start;
}
v___jp_529_:
{
if (v___y_531_ == 0)
{
lean_dec_ref(v___y_530_);
v_snd_525_ = v_b_518_;
goto v___jp_524_;
}
else
{
lean_object* v___x_532_; 
lean_dec_ref(v_b_518_);
lean_dec(v_a_517_);
lean_dec(v_className_515_);
v___x_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_532_, 0, v___y_530_);
return v___x_532_;
}
}
v___jp_533_:
{
uint8_t v___x_535_; 
v___x_535_ = l_Lean_Exception_isInterrupt(v_a_534_);
if (v___x_535_ == 0)
{
uint8_t v___x_536_; 
lean_inc_ref(v_a_534_);
v___x_536_ = l_Lean_Exception_isRuntime(v_a_534_);
v___y_530_ = v_a_534_;
v___y_531_ = v___x_536_;
goto v___jp_529_;
}
else
{
v___y_530_ = v_a_534_;
v___y_531_ = v___x_535_;
goto v___jp_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___boxed(lean_object* v_upperBound_570_, lean_object* v_xs_571_, lean_object* v_className_572_, lean_object* v_argNames_573_, lean_object* v_a_574_, lean_object* v_b_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v_upperBound_570_, v_xs_571_, v_className_572_, v_argNames_573_, v_a_574_, v_b_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v_argNames_573_);
lean_dec_ref(v_xs_571_);
lean_dec(v_upperBound_570_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(lean_object* v_className_584_, lean_object* v_argNames_585_, lean_object* v_xs_586_, lean_object* v_x_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v_binders_597_; lean_object* v___x_598_; 
v___x_595_ = lean_array_get_size(v_xs_586_);
v___x_596_ = lean_unsigned_to_nat(0u);
v_binders_597_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_598_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v___x_595_, v_xs_586_, v_className_584_, v_argNames_585_, v___x_596_, v_binders_597_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed(lean_object* v_className_599_, lean_object* v_argNames_600_, lean_object* v_xs_601_, lean_object* v_x_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(v_className_599_, v_argNames_600_, v_xs_601_, v_x_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec_ref(v_x_602_);
lean_dec_ref(v_xs_601_);
lean_dec_ref(v_argNames_600_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object* v_className_611_, lean_object* v_indVal_612_, lean_object* v_argNames_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v_toConstantVal_621_; lean_object* v_numParams_622_; lean_object* v_type_623_; lean_object* v___f_624_; lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; 
v_toConstantVal_621_ = lean_ctor_get(v_indVal_612_, 0);
lean_inc_ref(v_toConstantVal_621_);
v_numParams_622_ = lean_ctor_get(v_indVal_612_, 1);
lean_inc(v_numParams_622_);
lean_dec_ref(v_indVal_612_);
v_type_623_ = lean_ctor_get(v_toConstantVal_621_, 2);
lean_inc_ref(v_type_623_);
lean_dec_ref(v_toConstantVal_621_);
v___f_624_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed), 11, 2);
lean_closure_set(v___f_624_, 0, v_className_611_);
lean_closure_set(v___f_624_, 1, v_argNames_613_);
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v_numParams_622_);
v___x_626_ = 0;
v___x_627_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_623_, v___x_625_, v___f_624_, v___x_626_, v___x_626_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___boxed(lean_object* v_className_628_, lean_object* v_indVal_629_, lean_object* v_argNames_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_628_, v_indVal_629_, v_argNames_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(lean_object* v_upperBound_639_, lean_object* v_xs_640_, lean_object* v_className_641_, lean_object* v_argNames_642_, lean_object* v_inst_643_, lean_object* v_R_644_, lean_object* v_a_645_, lean_object* v_b_646_, lean_object* v_c_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v_upperBound_639_, v_xs_640_, v_className_641_, v_argNames_642_, v_a_645_, v_b_646_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___boxed(lean_object* v_upperBound_656_, lean_object* v_xs_657_, lean_object* v_className_658_, lean_object* v_argNames_659_, lean_object* v_inst_660_, lean_object* v_R_661_, lean_object* v_a_662_, lean_object* v_b_663_, lean_object* v_c_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(v_upperBound_656_, v_xs_657_, v_className_658_, v_argNames_659_, v_inst_660_, v_R_661_, v_a_662_, v_b_663_, v_c_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec_ref(v_argNames_659_);
lean_dec_ref(v_xs_657_);
lean_dec(v_upperBound_656_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(uint8_t v___x_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
if (lean_obj_tag(v_a_696_) == 0)
{
lean_object* v___x_698_; 
v___x_698_ = l_List_reverse___redArg(v_a_697_);
return v___x_698_;
}
else
{
lean_object* v_head_699_; lean_object* v_tail_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_730_; 
v_head_699_ = lean_ctor_get(v_a_696_, 0);
v_tail_700_ = lean_ctor_get(v_a_696_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_a_696_);
if (v_isSharedCheck_730_ == 0)
{
v___x_702_ = v_a_696_;
v_isShared_703_ = v_isSharedCheck_730_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_tail_700_);
lean_inc(v_head_699_);
lean_dec(v_a_696_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_730_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
uint8_t v___y_705_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1));
lean_inc(v_head_699_);
v___x_713_ = l_Lean_Syntax_isOfKind(v_head_699_, v___x_712_);
if (v___x_713_ == 0)
{
v___y_705_ = v___x_713_;
goto v___jp_704_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_714_ = lean_unsigned_to_nat(0u);
v___x_715_ = l_Lean_Syntax_getArg(v_head_699_, v___x_714_);
v___x_716_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3));
lean_inc(v___x_715_);
v___x_717_ = l_Lean_Syntax_isOfKind(v___x_715_, v___x_716_);
if (v___x_717_ == 0)
{
lean_dec(v___x_715_);
v___y_705_ = v___x_717_;
goto v___jp_704_;
}
else
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = l_Lean_Syntax_getArg(v___x_715_, v___x_714_);
lean_dec(v___x_715_);
v___x_719_ = l_Lean_Syntax_matchesNull(v___x_718_, v___x_714_);
if (v___x_719_ == 0)
{
v___y_705_ = v___x_719_;
goto v___jp_704_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = l_Lean_Syntax_getArg(v_head_699_, v___x_720_);
v___x_722_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6));
lean_inc(v___x_721_);
v___x_723_ = l_Lean_Syntax_isOfKind(v___x_721_, v___x_722_);
if (v___x_723_ == 0)
{
lean_dec(v___x_721_);
v___y_705_ = v___x_723_;
goto v___jp_704_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_724_ = l_Lean_Syntax_getArg(v___x_721_, v___x_714_);
v___x_725_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8));
v___x_726_ = l_Lean_Syntax_matchesIdent(v___x_724_, v___x_725_);
lean_dec(v___x_724_);
if (v___x_726_ == 0)
{
lean_dec(v___x_721_);
v___y_705_ = v___x_726_;
goto v___jp_704_;
}
else
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = l_Lean_Syntax_getArg(v___x_721_, v___x_720_);
lean_dec(v___x_721_);
v___x_728_ = l_Lean_Syntax_matchesNull(v___x_727_, v___x_714_);
if (v___x_728_ == 0)
{
v___y_705_ = v___x_728_;
goto v___jp_704_;
}
else
{
lean_del_object(v___x_702_);
lean_dec(v_head_699_);
v_a_696_ = v_tail_700_;
goto _start;
}
}
}
}
}
}
v___jp_704_:
{
if (v___y_705_ == 0)
{
if (v___x_695_ == 0)
{
lean_del_object(v___x_702_);
lean_dec(v_head_699_);
v_a_696_ = v_tail_700_;
goto _start;
}
else
{
lean_object* v___x_708_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v_a_697_);
v___x_708_ = v___x_702_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_head_699_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_a_697_);
v___x_708_ = v_reuseFailAlloc_710_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
v_a_696_ = v_tail_700_;
v_a_697_ = v___x_708_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_702_);
lean_dec(v_head_699_);
v_a_696_ = v_tail_700_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___boxed(lean_object* v___x_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
uint8_t v___x_3723__boxed_734_; lean_object* v_res_735_; 
v___x_3723__boxed_734_ = lean_unbox(v___x_731_);
v_res_735_ = l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(v___x_3723__boxed_734_, v_a_732_, v_a_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(uint8_t v___x_736_, lean_object* v_sc_737_){
_start:
{
lean_object* v_header_738_; lean_object* v_opts_739_; lean_object* v_currNamespace_740_; lean_object* v_openDecls_741_; lean_object* v_levelNames_742_; lean_object* v_varDecls_743_; lean_object* v_varUIds_744_; lean_object* v_includedVars_745_; lean_object* v_omittedVars_746_; uint8_t v_isNoncomputable_747_; uint8_t v_isPublic_748_; uint8_t v_isMeta_749_; lean_object* v_attrs_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_759_; 
v_header_738_ = lean_ctor_get(v_sc_737_, 0);
v_opts_739_ = lean_ctor_get(v_sc_737_, 1);
v_currNamespace_740_ = lean_ctor_get(v_sc_737_, 2);
v_openDecls_741_ = lean_ctor_get(v_sc_737_, 3);
v_levelNames_742_ = lean_ctor_get(v_sc_737_, 4);
v_varDecls_743_ = lean_ctor_get(v_sc_737_, 5);
v_varUIds_744_ = lean_ctor_get(v_sc_737_, 6);
v_includedVars_745_ = lean_ctor_get(v_sc_737_, 7);
v_omittedVars_746_ = lean_ctor_get(v_sc_737_, 8);
v_isNoncomputable_747_ = lean_ctor_get_uint8(v_sc_737_, sizeof(void*)*10);
v_isPublic_748_ = lean_ctor_get_uint8(v_sc_737_, sizeof(void*)*10 + 1);
v_isMeta_749_ = lean_ctor_get_uint8(v_sc_737_, sizeof(void*)*10 + 2);
v_attrs_750_ = lean_ctor_get(v_sc_737_, 9);
v_isSharedCheck_759_ = !lean_is_exclusive(v_sc_737_);
if (v_isSharedCheck_759_ == 0)
{
v___x_752_ = v_sc_737_;
v_isShared_753_ = v_isSharedCheck_759_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_attrs_750_);
lean_inc(v_omittedVars_746_);
lean_inc(v_includedVars_745_);
lean_inc(v_varUIds_744_);
lean_inc(v_varDecls_743_);
lean_inc(v_levelNames_742_);
lean_inc(v_openDecls_741_);
lean_inc(v_currNamespace_740_);
lean_inc(v_opts_739_);
lean_inc(v_header_738_);
lean_dec(v_sc_737_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_759_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_754_ = lean_box(0);
v___x_755_ = l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(v___x_736_, v_attrs_750_, v___x_754_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 9, v___x_755_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_header_738_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_opts_739_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_currNamespace_740_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v_openDecls_741_);
lean_ctor_set(v_reuseFailAlloc_758_, 4, v_levelNames_742_);
lean_ctor_set(v_reuseFailAlloc_758_, 5, v_varDecls_743_);
lean_ctor_set(v_reuseFailAlloc_758_, 6, v_varUIds_744_);
lean_ctor_set(v_reuseFailAlloc_758_, 7, v_includedVars_745_);
lean_ctor_set(v_reuseFailAlloc_758_, 8, v_omittedVars_746_);
lean_ctor_set(v_reuseFailAlloc_758_, 9, v___x_755_);
lean_ctor_set_uint8(v_reuseFailAlloc_758_, sizeof(void*)*10, v_isNoncomputable_747_);
lean_ctor_set_uint8(v_reuseFailAlloc_758_, sizeof(void*)*10 + 1, v_isPublic_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_758_, sizeof(void*)*10 + 2, v_isMeta_749_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed(lean_object* v___x_760_, lean_object* v_sc_761_){
_start:
{
uint8_t v___x_3820__boxed_762_; lean_object* v_res_763_; 
v___x_3820__boxed_762_ = lean_unbox(v___x_760_);
v_res_763_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(v___x_3820__boxed_762_, v_sc_761_);
return v_res_763_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_box(1);
v___x_765_ = l_Lean_MessageData_ofFormat(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2));
v___x_770_ = l_Lean_MessageData_ofFormat(v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(lean_object* v_x_771_, lean_object* v_x_772_){
_start:
{
if (lean_obj_tag(v_x_772_) == 0)
{
return v_x_771_;
}
else
{
lean_object* v_head_773_; lean_object* v_tail_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_796_; 
v_head_773_ = lean_ctor_get(v_x_772_, 0);
v_tail_774_ = lean_ctor_get(v_x_772_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_796_ == 0)
{
v___x_776_ = v_x_772_;
v_isShared_777_ = v_isSharedCheck_796_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_tail_774_);
lean_inc(v_head_773_);
lean_dec(v_x_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_796_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_before_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_794_; 
v_before_778_ = lean_ctor_get(v_head_773_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v_head_773_);
if (v_isSharedCheck_794_ == 0)
{
lean_object* v_unused_795_; 
v_unused_795_ = lean_ctor_get(v_head_773_, 1);
lean_dec(v_unused_795_);
v___x_780_ = v_head_773_;
v_isShared_781_ = v_isSharedCheck_794_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_before_778_);
lean_dec(v_head_773_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_794_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_781_ == 0)
{
lean_ctor_set_tag(v___x_780_, 7);
lean_ctor_set(v___x_780_, 1, v___x_782_);
lean_ctor_set(v___x_780_, 0, v_x_771_);
v___x_784_ = v___x_780_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_x_771_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v___x_782_);
v___x_784_ = v_reuseFailAlloc_793_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3);
if (v_isShared_777_ == 0)
{
lean_ctor_set_tag(v___x_776_, 7);
lean_ctor_set(v___x_776_, 1, v___x_785_);
lean_ctor_set(v___x_776_, 0, v___x_784_);
v___x_787_ = v___x_776_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_785_);
v___x_787_ = v_reuseFailAlloc_792_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_788_ = l_Lean_MessageData_ofSyntax(v_before_778_);
v___x_789_ = l_Lean_indentD(v___x_788_);
v___x_790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_787_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v_x_771_ = v___x_790_;
v_x_772_ = v_tail_774_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(lean_object* v_opts_797_, lean_object* v_opt_798_){
_start:
{
lean_object* v_name_799_; lean_object* v_defValue_800_; lean_object* v_map_801_; lean_object* v___x_802_; 
v_name_799_ = lean_ctor_get(v_opt_798_, 0);
v_defValue_800_ = lean_ctor_get(v_opt_798_, 1);
v_map_801_ = lean_ctor_get(v_opts_797_, 0);
v___x_802_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_801_, v_name_799_);
if (lean_obj_tag(v___x_802_) == 0)
{
uint8_t v___x_803_; 
v___x_803_ = lean_unbox(v_defValue_800_);
return v___x_803_;
}
else
{
lean_object* v_val_804_; 
v_val_804_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_val_804_);
lean_dec_ref_known(v___x_802_, 1);
if (lean_obj_tag(v_val_804_) == 1)
{
uint8_t v_v_805_; 
v_v_805_ = lean_ctor_get_uint8(v_val_804_, 0);
lean_dec_ref_known(v_val_804_, 0);
return v_v_805_;
}
else
{
uint8_t v___x_806_; 
lean_dec(v_val_804_);
v___x_806_ = lean_unbox(v_defValue_800_);
return v___x_806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8___boxed(lean_object* v_opts_807_, lean_object* v_opt_808_){
_start:
{
uint8_t v_res_809_; lean_object* v_r_810_; 
v_res_809_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v_opts_807_, v_opt_808_);
lean_dec_ref(v_opt_808_);
lean_dec_ref(v_opts_807_);
v_r_810_ = lean_box(v_res_809_);
return v_r_810_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1));
v___x_815_ = l_Lean_MessageData_ofFormat(v___x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(lean_object* v_msgData_816_, lean_object* v_macroStack_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_scopes_822_; lean_object* v___x_823_; lean_object* v_opts_824_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_820_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_821_ = lean_st_ref_get(v___y_818_);
v_scopes_822_ = lean_ctor_get(v___x_821_, 2);
lean_inc(v_scopes_822_);
lean_dec(v___x_821_);
v___x_823_ = l_List_head_x21___redArg(v___x_820_, v_scopes_822_);
lean_dec(v_scopes_822_);
v_opts_824_ = lean_ctor_get(v___x_823_, 1);
lean_inc_ref(v_opts_824_);
lean_dec(v___x_823_);
v___x_825_ = l_Lean_Elab_pp_macroStack;
v___x_826_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v_opts_824_, v___x_825_);
lean_dec_ref(v_opts_824_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
lean_dec(v_macroStack_817_);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v_msgData_816_);
return v___x_827_;
}
else
{
if (lean_obj_tag(v_macroStack_817_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v_msgData_816_);
return v___x_828_;
}
else
{
lean_object* v_head_829_; lean_object* v_after_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_845_; 
v_head_829_ = lean_ctor_get(v_macroStack_817_, 0);
lean_inc(v_head_829_);
v_after_830_ = lean_ctor_get(v_head_829_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_head_829_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; 
v_unused_846_ = lean_ctor_get(v_head_829_, 0);
lean_dec(v_unused_846_);
v___x_832_ = v_head_829_;
v_isShared_833_ = v_isSharedCheck_845_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_after_830_);
lean_dec(v_head_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_845_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_834_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_833_ == 0)
{
lean_ctor_set_tag(v___x_832_, 7);
lean_ctor_set(v___x_832_, 1, v___x_834_);
lean_ctor_set(v___x_832_, 0, v_msgData_816_);
v___x_836_ = v___x_832_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_msgData_816_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v___x_834_);
v___x_836_ = v_reuseFailAlloc_844_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v_msgData_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_837_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2);
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = l_Lean_MessageData_ofSyntax(v_after_830_);
v___x_840_ = l_Lean_indentD(v___x_839_);
v_msgData_841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_841_, 0, v___x_838_);
lean_ctor_set(v_msgData_841_, 1, v___x_840_);
v___x_842_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(v_msgData_841_, v_macroStack_817_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___boxed(lean_object* v_msgData_847_, lean_object* v_macroStack_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_msgData_847_, v_macroStack_848_, v___y_849_);
lean_dec(v___y_849_);
return v_res_851_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_852_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1);
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
lean_ctor_set(v___x_857_, 1, v___x_856_);
lean_ctor_set(v___x_857_, 2, v___x_856_);
lean_ctor_set(v___x_857_, 3, v___x_856_);
lean_ctor_set(v___x_857_, 4, v___x_855_);
lean_ctor_set(v___x_857_, 5, v___x_855_);
lean_ctor_set(v___x_857_, 6, v___x_855_);
lean_ctor_set(v___x_857_, 7, v___x_855_);
lean_ctor_set(v___x_857_, 8, v___x_855_);
lean_ctor_set(v___x_857_, 9, v___x_855_);
lean_ctor_set(v___x_857_, 10, v___x_855_);
return v___x_857_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = lean_unsigned_to_nat(32u);
v___x_859_ = lean_mk_empty_array_with_capacity(v___x_858_);
v___x_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_860_, 0, v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_861_ = ((size_t)5ULL);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_unsigned_to_nat(32u);
v___x_864_ = lean_mk_empty_array_with_capacity(v___x_863_);
v___x_865_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3);
v___x_866_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_866_, 0, v___x_865_);
lean_ctor_set(v___x_866_, 1, v___x_864_);
lean_ctor_set(v___x_866_, 2, v___x_862_);
lean_ctor_set(v___x_866_, 3, v___x_862_);
lean_ctor_set_usize(v___x_866_, 4, v___x_861_);
return v___x_866_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_867_ = lean_box(1);
v___x_868_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4);
v___x_869_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1);
v___x_870_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v___x_868_);
lean_ctor_set(v___x_870_, 2, v___x_867_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(lean_object* v_msgData_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_874_; lean_object* v_env_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_scopes_878_; lean_object* v___x_879_; lean_object* v_opts_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_874_ = lean_st_ref_get(v___y_872_);
v_env_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc_ref(v_env_875_);
lean_dec(v___x_874_);
v___x_876_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_877_ = lean_st_ref_get(v___y_872_);
v_scopes_878_ = lean_ctor_get(v___x_877_, 2);
lean_inc(v_scopes_878_);
lean_dec(v___x_877_);
v___x_879_ = l_List_head_x21___redArg(v___x_876_, v_scopes_878_);
lean_dec(v_scopes_878_);
v_opts_880_ = lean_ctor_get(v___x_879_, 1);
lean_inc_ref(v_opts_880_);
lean_dec(v___x_879_);
v___x_881_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2);
v___x_882_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5);
v___x_883_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_883_, 0, v_env_875_);
lean_ctor_set(v___x_883_, 1, v___x_881_);
lean_ctor_set(v___x_883_, 2, v___x_882_);
lean_ctor_set(v___x_883_, 3, v_opts_880_);
v___x_884_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v_msgData_871_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___boxed(lean_object* v_msgData_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msgData_886_, v___y_887_);
lean_dec(v___y_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(lean_object* v_msg_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Elab_Command_getRef___redArg(v___y_891_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v_macroStack_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_909_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_894_, 1);
v_macroStack_896_ = lean_ctor_get(v___y_891_, 4);
v___x_897_ = l_Lean_Elab_getBetterRef(v_a_895_, v_macroStack_896_);
lean_dec(v_a_895_);
v___x_898_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msg_890_, v___y_892_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref(v___x_898_);
lean_inc(v_macroStack_896_);
v___x_900_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_a_899_, v_macroStack_896_, v___y_892_);
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_909_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_907_; 
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_897_);
lean_ctor_set(v___x_905_, 1, v_a_901_);
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 1);
lean_ctor_set(v___x_903_, 0, v___x_905_);
v___x_907_ = v___x_903_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec_ref(v_msg_890_);
v_a_910_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_894_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_894_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg___boxed(lean_object* v_msg_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v_msg_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
return v_res_922_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0));
v___x_925_ = l_Lean_stringToMessageData(v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2));
v___x_928_ = l_Lean_stringToMessageData(v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(lean_object* v_constName_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___x_933_; lean_object* v_env_934_; lean_object* v___x_935_; 
v___x_933_ = lean_st_ref_get(v___y_931_);
v_env_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc_ref(v_env_934_);
lean_dec(v___x_933_);
lean_inc(v_constName_929_);
v___x_935_ = l_Lean_isInductiveCore_x3f(v_env_934_, v_constName_929_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_936_; uint8_t v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_936_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1);
v___x_937_ = 0;
v___x_938_ = l_Lean_MessageData_ofConstName(v_constName_929_, v___x_937_);
v___x_939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_936_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v___x_941_, v___y_930_, v___y_931_);
return v___x_942_;
}
else
{
lean_object* v_val_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
lean_dec(v_constName_929_);
v_val_943_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_935_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_val_943_);
lean_dec(v___x_935_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 0);
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_val_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___boxed(lean_object* v_constName_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_constName_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(lean_object* v_as_x27_956_, lean_object* v_b_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
if (lean_obj_tag(v_as_x27_956_) == 0)
{
lean_object* v___x_961_; 
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v_b_957_);
return v___x_961_;
}
else
{
lean_object* v_head_962_; lean_object* v_tail_963_; lean_object* v___x_964_; 
v_head_962_ = lean_ctor_get(v_as_x27_956_, 0);
v_tail_963_ = lean_ctor_get(v_as_x27_956_, 1);
lean_inc(v_head_962_);
v___x_964_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_head_962_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = lean_array_push(v_b_957_, v_a_965_);
v_as_x27_956_ = v_tail_963_;
v_b_957_ = v___x_966_;
goto _start;
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v_b_957_);
v_a_968_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_964_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_964_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg___boxed(lean_object* v_as_x27_976_, lean_object* v_b_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_as_x27_976_, v_b_977_, v___y_978_, v___y_979_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v_as_x27_976_);
return v_res_981_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(lean_object* v___y_982_, lean_object* v_x_983_){
_start:
{
if (lean_obj_tag(v_x_983_) == 0)
{
uint8_t v___x_984_; 
v___x_984_ = 0;
return v___x_984_;
}
else
{
lean_object* v_head_985_; lean_object* v_tail_986_; uint8_t v___y_988_; lean_object* v___x_990_; uint8_t v___x_991_; 
v_head_985_ = lean_ctor_get(v_x_983_, 0);
lean_inc_n(v_head_985_, 2);
v_tail_986_ = lean_ctor_get(v_x_983_, 1);
lean_inc(v_tail_986_);
lean_dec_ref_known(v_x_983_, 2);
v___x_990_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1));
v___x_991_ = l_Lean_Syntax_isOfKind(v_head_985_, v___x_990_);
if (v___x_991_ == 0)
{
lean_dec(v_head_985_);
v___y_988_ = v___x_991_;
goto v___jp_987_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = l_Lean_Syntax_getArg(v_head_985_, v___x_992_);
v___x_994_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3));
lean_inc(v___x_993_);
v___x_995_ = l_Lean_Syntax_isOfKind(v___x_993_, v___x_994_);
if (v___x_995_ == 0)
{
lean_dec(v___x_993_);
lean_dec(v_head_985_);
v___y_988_ = v___x_995_;
goto v___jp_987_;
}
else
{
lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = l_Lean_Syntax_getArg(v___x_993_, v___x_992_);
lean_dec(v___x_993_);
v___x_997_ = l_Lean_Syntax_matchesNull(v___x_996_, v___x_992_);
if (v___x_997_ == 0)
{
lean_dec(v_head_985_);
v___y_988_ = v___x_997_;
goto v___jp_987_;
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_998_ = lean_unsigned_to_nat(1u);
v___x_999_ = l_Lean_Syntax_getArg(v_head_985_, v___x_998_);
lean_dec(v_head_985_);
v___x_1000_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6));
lean_inc(v___x_999_);
v___x_1001_ = l_Lean_Syntax_isOfKind(v___x_999_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_dec(v___x_999_);
v___y_988_ = v___x_1001_;
goto v___jp_987_;
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_1002_ = l_Lean_Syntax_getArg(v___x_999_, v___x_992_);
v___x_1003_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8));
v___x_1004_ = l_Lean_Syntax_matchesIdent(v___x_1002_, v___x_1003_);
lean_dec(v___x_1002_);
if (v___x_1004_ == 0)
{
lean_dec(v___x_999_);
v___y_988_ = v___x_1004_;
goto v___jp_987_;
}
else
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = l_Lean_Syntax_getArg(v___x_999_, v___x_998_);
lean_dec(v___x_999_);
v___x_1006_ = l_Lean_Syntax_matchesNull(v___x_1005_, v___x_992_);
if (v___x_1006_ == 0)
{
v___y_988_ = v___x_1006_;
goto v___jp_987_;
}
else
{
uint8_t v___x_1007_; 
v___x_1007_ = lean_nat_dec_lt(v___x_992_, v___y_982_);
v___y_988_ = v___x_1007_;
goto v___jp_987_;
}
}
}
}
}
}
v___jp_987_:
{
if (v___y_988_ == 0)
{
v_x_983_ = v_tail_986_;
goto _start;
}
else
{
lean_dec(v_tail_986_);
return v___y_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5___boxed(lean_object* v___y_1008_, lean_object* v_x_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(v___y_1008_, v_x_1009_);
lean_dec(v___y_1008_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(lean_object* v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 0)
{
uint8_t v___x_1013_; 
v___x_1013_ = 0;
return v___x_1013_;
}
else
{
lean_object* v_head_1014_; lean_object* v_tail_1015_; uint8_t v___x_1016_; 
v_head_1014_ = lean_ctor_get(v_x_1012_, 0);
v_tail_1015_ = lean_ctor_get(v_x_1012_, 1);
v___x_1016_ = l_Lean_isPrivateName(v_head_1014_);
if (v___x_1016_ == 0)
{
v_x_1012_ = v_tail_1015_;
goto _start;
}
else
{
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0___boxed(lean_object* v_x_1018_){
_start:
{
uint8_t v_res_1019_; lean_object* v_r_1020_; 
v_res_1019_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(v_x_1018_);
lean_dec(v_x_1018_);
v_r_1020_ = lean_box(v_res_1019_);
return v_r_1020_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(lean_object* v_as_1021_, size_t v_i_1022_, size_t v_stop_1023_){
_start:
{
uint8_t v___x_1024_; 
v___x_1024_ = lean_usize_dec_eq(v_i_1022_, v_stop_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v_ctors_1026_; uint8_t v___x_1027_; 
v___x_1025_ = lean_array_uget_borrowed(v_as_1021_, v_i_1022_);
v_ctors_1026_ = lean_ctor_get(v___x_1025_, 4);
v___x_1027_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(v_ctors_1026_);
if (v___x_1027_ == 0)
{
size_t v___x_1028_; size_t v___x_1029_; 
v___x_1028_ = ((size_t)1ULL);
v___x_1029_ = lean_usize_add(v_i_1022_, v___x_1028_);
v_i_1022_ = v___x_1029_;
goto _start;
}
else
{
return v___x_1027_;
}
}
else
{
uint8_t v___x_1031_; 
v___x_1031_ = 0;
return v___x_1031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3___boxed(lean_object* v_as_1032_, lean_object* v_i_1033_, lean_object* v_stop_1034_){
_start:
{
size_t v_i_boxed_1035_; size_t v_stop_boxed_1036_; uint8_t v_res_1037_; lean_object* v_r_1038_; 
v_i_boxed_1035_ = lean_unbox_usize(v_i_1033_);
lean_dec(v_i_1033_);
v_stop_boxed_1036_ = lean_unbox_usize(v_stop_1034_);
lean_dec(v_stop_1034_);
v_res_1037_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(v_as_1032_, v_i_boxed_1035_, v_stop_boxed_1036_);
lean_dec_ref(v_as_1032_);
v_r_1038_ = lean_box(v_res_1037_);
return v_r_1038_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1));
v___x_1043_ = l_Lean_stringToMessageData(v___x_1042_);
return v___x_1043_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object* v_typeName_1047_, lean_object* v_cont_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v___x_1052_; 
lean_inc(v_typeName_1047_);
v___x_1052_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_typeName_1047_, v_a_1049_, v_a_1050_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v_a_1053_; lean_object* v_all_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_a_1053_);
lean_dec_ref_known(v___x_1052_, 1);
v_all_1054_ = lean_ctor_get(v_a_1053_, 3);
lean_inc(v_all_1054_);
lean_dec(v_a_1053_);
v___x_1055_ = lean_unsigned_to_nat(0u);
v___x_1056_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0));
v___x_1057_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_all_1054_, v___x_1056_, v_a_1049_, v_a_1050_);
lean_dec(v_all_1054_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = lean_array_get_size(v_a_1058_);
v___x_1060_ = lean_nat_dec_lt(v___x_1055_, v___x_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_dec(v_a_1058_);
lean_dec(v_typeName_1047_);
lean_inc(v_a_1050_);
lean_inc_ref(v_a_1049_);
v___x_1061_ = lean_apply_3(v_cont_1048_, v_a_1049_, v_a_1050_, lean_box(0));
return v___x_1061_;
}
else
{
if (v___x_1060_ == 0)
{
lean_object* v___x_1062_; 
lean_dec(v_a_1058_);
lean_dec(v_typeName_1047_);
lean_inc(v_a_1050_);
lean_inc_ref(v_a_1049_);
v___x_1062_ = lean_apply_3(v_cont_1048_, v_a_1049_, v_a_1050_, lean_box(0));
return v___x_1062_;
}
else
{
size_t v___x_1063_; size_t v___x_1064_; uint8_t v___x_1065_; 
v___x_1063_ = ((size_t)0ULL);
v___x_1064_ = lean_usize_of_nat(v___x_1059_);
v___x_1065_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(v_a_1058_, v___x_1063_, v___x_1064_);
lean_dec(v_a_1058_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; 
lean_dec(v_typeName_1047_);
lean_inc(v_a_1050_);
lean_inc_ref(v_a_1049_);
v___x_1066_ = lean_apply_3(v_cont_1048_, v_a_1049_, v_a_1050_, lean_box(0));
return v___x_1066_;
}
else
{
lean_object* v___x_1067_; lean_object* v___f_1068_; uint8_t v___x_1069_; 
v___x_1067_ = lean_box(v___x_1065_);
v___f_1068_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1068_, 0, v___x_1067_);
v___x_1069_ = l_Lean_isPrivateName(v_typeName_1047_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Elab_Command_getScope___redArg(v_a_1050_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v_attrs_1072_; uint8_t v___x_1073_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v_attrs_1072_ = lean_ctor_get(v_a_1071_, 9);
lean_inc(v_attrs_1072_);
lean_dec(v_a_1071_);
v___x_1073_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(v___x_1059_, v_attrs_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
lean_dec(v_typeName_1047_);
v___x_1074_ = l_Lean_Elab_Command_withScope___redArg(v___f_1068_, v_cont_1048_, v_a_1049_, v_a_1050_);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
lean_dec_ref(v___f_1068_);
lean_dec_ref(v_cont_1048_);
v___x_1075_ = lean_obj_once(&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2, &l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2_once, _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2);
v___x_1076_ = l_Lean_MessageData_ofConstName(v_typeName_1047_, v___x_1069_);
v___x_1077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = lean_obj_once(&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4, &l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4_once, _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4);
v___x_1079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v___x_1079_, v_a_1049_, v_a_1050_);
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1081_);
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
lean_dec_ref(v___f_1068_);
lean_dec_ref(v_cont_1048_);
lean_dec(v_typeName_1047_);
v_a_1089_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1070_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1070_);
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
}
else
{
lean_object* v___x_1097_; 
lean_dec(v_typeName_1047_);
v___x_1097_ = l_Lean_Elab_Command_withScope___redArg(v___f_1068_, v_cont_1048_, v_a_1049_, v_a_1050_);
return v___x_1097_;
}
}
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec_ref(v_cont_1048_);
lean_dec(v_typeName_1047_);
v_a_1098_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1057_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1057_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec_ref(v_cont_1048_);
lean_dec(v_typeName_1047_);
v_a_1106_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1052_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1052_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___boxed(lean_object* v_typeName_1114_, lean_object* v_cont_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_typeName_1114_, v_cont_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors(lean_object* v_00_u03b1_1120_, lean_object* v_typeName_1121_, lean_object* v_cont_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_typeName_1121_, v_cont_1122_, v_a_1123_, v_a_1124_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___boxed(lean_object* v_00_u03b1_1127_, lean_object* v_typeName_1128_, lean_object* v_cont_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_Elab_Deriving_withoutExposeFromCtors(v_00_u03b1_1127_, v_typeName_1128_, v_cont_1129_, v_a_1130_, v_a_1131_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(lean_object* v_as_1134_, lean_object* v_as_x27_1135_, lean_object* v_b_1136_, lean_object* v_a_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_as_x27_1135_, v_b_1136_, v___y_1138_, v___y_1139_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___boxed(lean_object* v_as_1142_, lean_object* v_as_x27_1143_, lean_object* v_b_1144_, lean_object* v_a_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(v_as_1142_, v_as_x27_1143_, v_b_1144_, v_a_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v_as_x27_1143_);
lean_dec(v_as_1142_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(lean_object* v_msgData_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msgData_1150_, v___y_1152_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___boxed(lean_object* v_msgData_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(v_msgData_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(lean_object* v_00_u03b1_1160_, lean_object* v_msg_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v_msg_1161_, v___y_1162_, v___y_1163_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___boxed(lean_object* v_00_u03b1_1166_, lean_object* v_msg_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(v_00_u03b1_1166_, v_msg_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(lean_object* v_msgData_1172_, lean_object* v_macroStack_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_msgData_1172_, v_macroStack_1173_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___boxed(lean_object* v_msgData_1178_, lean_object* v_macroStack_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(v_msgData_1178_, v_macroStack_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(size_t v_sz_1184_, size_t v_i_1185_, lean_object* v_bs_1186_){
_start:
{
uint8_t v___x_1187_; 
v___x_1187_ = lean_usize_dec_lt(v_i_1185_, v_sz_1184_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; 
v___x_1188_ = l_unsafeCast___redArg(v_bs_1186_);
lean_dec_ref(v_bs_1186_);
return v___x_1188_;
}
else
{
lean_object* v_v_1189_; lean_object* v___x_1190_; lean_object* v_bs_x27_1191_; lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_v_1189_ = lean_array_uget(v_bs_1186_, v_i_1185_);
v___x_1190_ = lean_unsigned_to_nat(0u);
v_bs_x27_1191_ = lean_array_uset(v_bs_1186_, v_i_1185_, v___x_1190_);
v___x_1192_ = l_unsafeCast___redArg(v_v_1189_);
lean_dec(v_v_1189_);
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1185_, v___x_1193_);
v___x_1195_ = l_unsafeCast___redArg(v___x_1192_);
lean_dec(v___x_1192_);
v___x_1196_ = lean_array_uset(v_bs_x27_1191_, v_i_1185_, v___x_1195_);
v_i_1185_ = v___x_1194_;
v_bs_1186_ = v___x_1196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1___boxed(lean_object* v_sz_1198_, lean_object* v_i_1199_, lean_object* v_bs_1200_){
_start:
{
size_t v_sz_boxed_1201_; size_t v_i_boxed_1202_; lean_object* v_res_1203_; 
v_sz_boxed_1201_ = lean_unbox_usize(v_sz_1198_);
lean_dec(v_sz_1198_);
v_i_boxed_1202_ = lean_unbox_usize(v_i_1199_);
lean_dec(v_i_1199_);
v_res_1203_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(v_sz_boxed_1201_, v_i_boxed_1202_, v_bs_1200_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(lean_object* v_msgData_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; lean_object* v_env_1211_; lean_object* v___x_1212_; lean_object* v_toCold_1213_; lean_object* v_mctx_1214_; lean_object* v_lctx_1215_; lean_object* v_options_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1210_ = lean_st_ref_get(v___y_1208_);
v_env_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc_ref(v_env_1211_);
lean_dec(v___x_1210_);
v___x_1212_ = lean_st_ref_get(v___y_1206_);
v_toCold_1213_ = lean_ctor_get(v___y_1207_, 0);
v_mctx_1214_ = lean_ctor_get(v___x_1212_, 0);
lean_inc_ref(v_mctx_1214_);
lean_dec(v___x_1212_);
v_lctx_1215_ = lean_ctor_get(v___y_1205_, 2);
v_options_1216_ = lean_ctor_get(v_toCold_1213_, 2);
lean_inc_ref(v_options_1216_);
lean_inc_ref(v_lctx_1215_);
v___x_1217_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1217_, 0, v_env_1211_);
lean_ctor_set(v___x_1217_, 1, v_mctx_1214_);
lean_ctor_set(v___x_1217_, 2, v_lctx_1215_);
lean_ctor_set(v___x_1217_, 3, v_options_1216_);
v___x_1218_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v_msgData_1204_);
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msgData_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(lean_object* v_msgData_1227_, lean_object* v_macroStack_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_toCold_1231_; lean_object* v_options_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v_toCold_1231_ = lean_ctor_get(v___y_1229_, 0);
v_options_1232_ = lean_ctor_get(v_toCold_1231_, 2);
v___x_1233_ = l_Lean_Elab_pp_macroStack;
v___x_1234_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v_options_1232_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; 
lean_dec(v_macroStack_1228_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_msgData_1227_);
return v___x_1235_;
}
else
{
if (lean_obj_tag(v_macroStack_1228_) == 0)
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v_msgData_1227_);
return v___x_1236_;
}
else
{
lean_object* v_head_1237_; lean_object* v_after_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1253_; 
v_head_1237_ = lean_ctor_get(v_macroStack_1228_, 0);
lean_inc(v_head_1237_);
v_after_1238_ = lean_ctor_get(v_head_1237_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_head_1237_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v_head_1237_, 0);
lean_dec(v_unused_1254_);
v___x_1240_ = v_head_1237_;
v_isShared_1241_ = v_isSharedCheck_1253_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_after_1238_);
lean_dec(v_head_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1253_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1242_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 7);
lean_ctor_set(v___x_1240_, 1, v___x_1242_);
lean_ctor_set(v___x_1240_, 0, v_msgData_1227_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_msgData_1227_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v_msgData_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1245_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2);
v___x_1246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_MessageData_ofSyntax(v_after_1238_);
v___x_1248_ = l_Lean_indentD(v___x_1247_);
v_msgData_1249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1249_, 0, v___x_1246_);
lean_ctor_set(v_msgData_1249_, 1, v___x_1248_);
v___x_1250_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(v_msgData_1249_, v_macroStack_1228_);
v___x_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msgData_1255_, lean_object* v_macroStack_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_msgData_1255_, v_macroStack_1256_, v___y_1257_);
lean_dec_ref(v___y_1257_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(lean_object* v_msg_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_ref_1268_; lean_object* v_macroStack_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v_a_1272_; lean_object* v___x_1273_; lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1282_; 
v_ref_1268_ = lean_ctor_get(v___y_1265_, 2);
v_macroStack_1269_ = lean_ctor_get(v___y_1261_, 1);
v___x_1270_ = l_Lean_Elab_getBetterRef(v_ref_1268_, v_macroStack_1269_);
v___x_1271_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msg_1260_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1272_);
lean_dec_ref(v___x_1271_);
lean_inc(v_macroStack_1269_);
v___x_1273_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_a_1272_, v_macroStack_1269_, v___y_1265_);
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1276_ = v___x_1273_;
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1273_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1270_);
lean_ctor_set(v___x_1278_, 1, v_a_1274_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set_tag(v___x_1276_, 1);
lean_ctor_set(v___x_1276_, 0, v___x_1278_);
v___x_1280_ = v___x_1276_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v_msg_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(lean_object* v_constName_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v___x_1300_; lean_object* v_env_1301_; lean_object* v___x_1302_; 
v___x_1300_ = lean_st_ref_get(v___y_1298_);
v_env_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc_ref(v_env_1301_);
lean_dec(v___x_1300_);
lean_inc(v_constName_1292_);
v___x_1302_ = l_Lean_isInductiveCore_x3f(v_env_1301_, v_constName_1292_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v___x_1303_; uint8_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1303_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1);
v___x_1304_ = 0;
v___x_1305_ = l_Lean_MessageData_ofConstName(v_constName_1292_, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1303_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3);
v___x_1308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v___x_1308_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
return v___x_1309_;
}
else
{
lean_object* v_val_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec(v_constName_1292_);
v_val_1310_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1302_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_val_1310_);
lean_dec(v___x_1302_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set_tag(v___x_1312_, 0);
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_val_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0___boxed(lean_object* v_constName_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_constName_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName(lean_object* v_className_1328_, lean_object* v_indName_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_indName_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc_n(v_a_1338_, 2);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1339_ = l_Lean_Elab_Deriving_mkInductArgNames(v_a_1338_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1341_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1340_);
lean_dec_ref_known(v___x_1339_, 1);
v___x_1341_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_1340_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v_a_1344_; lean_object* v_ref_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; size_t v_sz_1354_; size_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1343_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_a_1338_, v_a_1340_, v_a_1334_);
lean_dec(v_a_1340_);
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref(v___x_1343_);
v_ref_1345_ = lean_ctor_get(v_a_1334_, 2);
v___x_1346_ = 0;
v___x_1347_ = l_Lean_SourceInfo_fromRef(v_ref_1345_, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
v___x_1349_ = l_Lean_mkCIdent(v_className_1328_);
v___x_1350_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_1347_);
v___x_1351_ = l_Lean_Syntax_node1(v___x_1347_, v___x_1350_, v_a_1344_);
v___x_1352_ = l_Lean_Syntax_node2(v___x_1347_, v___x_1348_, v___x_1349_, v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstName___closed__0));
v_sz_1354_ = lean_array_size(v_a_1342_);
v___x_1355_ = ((size_t)0ULL);
v___x_1356_ = l_unsafeCast___redArg(v_a_1342_);
lean_dec(v_a_1342_);
v___x_1357_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(v_sz_1354_, v___x_1355_, v___x_1356_);
v___x_1358_ = l_unsafeCast___redArg(v___x_1357_);
lean_dec_ref(v___x_1357_);
v___x_1359_ = l_Lean_Elab_Command_NameGen_mkBaseNameWithSuffix_x27(v___x_1353_, v___x_1358_, v___x_1352_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
return v___x_1359_;
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec(v_a_1340_);
lean_dec(v_a_1338_);
lean_dec(v_className_1328_);
v_a_1360_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1341_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1341_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
else
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
lean_dec(v_a_1338_);
lean_dec(v_className_1328_);
v_a_1368_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1339_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1339_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_dec(v_className_1328_);
v_a_1376_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1337_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1337_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName___boxed(lean_object* v_className_1384_, lean_object* v_indName_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lean_Elab_Deriving_mkInstName(v_className_1384_, v_indName_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
lean_dec(v_a_1391_);
lean_dec_ref(v_a_1390_);
lean_dec(v_a_1389_);
lean_dec_ref(v_a_1388_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(lean_object* v_00_u03b1_1394_, lean_object* v_msg_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v_msg_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_msg_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(v_00_u03b1_1404_, v_msg_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(lean_object* v_msgData_1414_, lean_object* v_macroStack_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_msgData_1414_, v_macroStack_1415_, v___y_1420_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_1424_, lean_object* v_macroStack_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(v_msgData_1424_, v_macroStack_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(lean_object* v_as_x27_1434_, lean_object* v_b_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
if (lean_obj_tag(v_as_x27_1434_) == 0)
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v_b_1435_);
return v___x_1443_;
}
else
{
lean_object* v_head_1444_; lean_object* v_tail_1445_; lean_object* v___x_1446_; 
v_head_1444_ = lean_ctor_get(v_as_x27_1434_, 0);
v_tail_1445_ = lean_ctor_get(v_as_x27_1434_, 1);
lean_inc(v_head_1444_);
v___x_1446_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_head_1444_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = lean_array_push(v_b_1435_, v_a_1447_);
v_as_x27_1434_ = v_tail_1445_;
v_b_1435_ = v___x_1448_;
goto _start;
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref(v_b_1435_);
v_a_1450_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1446_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1446_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg___boxed(lean_object* v_as_x27_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_as_x27_1458_, v_b_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v_as_x27_1458_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
if (lean_obj_tag(v_a_1468_) == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = l_List_reverse___redArg(v_a_1469_);
return v___x_1470_;
}
else
{
lean_object* v_head_1471_; lean_object* v_tail_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1481_; 
v_head_1471_ = lean_ctor_get(v_a_1468_, 0);
v_tail_1472_ = lean_ctor_get(v_a_1468_, 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_a_1468_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1474_ = v_a_1468_;
v_isShared_1475_ = v_isSharedCheck_1481_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_tail_1472_);
lean_inc(v_head_1471_);
lean_dec(v_a_1468_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1481_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1476_ = l_Lean_MessageData_ofName(v_head_1471_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 1, v_a_1469_);
lean_ctor_set(v___x_1474_, 0, v___x_1476_);
v___x_1478_ = v___x_1474_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1476_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_a_1469_);
v___x_1478_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
v_a_1468_ = v_tail_1472_;
v_a_1469_ = v___x_1478_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1482_; double v___x_1483_; 
v___x_1482_ = lean_unsigned_to_nat(0u);
v___x_1483_ = lean_float_of_nat(v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(lean_object* v_cls_1487_, lean_object* v_msg_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_ref_1494_; lean_object* v___x_1495_; lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1540_; 
v_ref_1494_ = lean_ctor_get(v___y_1491_, 2);
v___x_1495_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msg_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1498_ = v___x_1495_;
v_isShared_1499_ = v_isSharedCheck_1540_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1540_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v_traceState_1501_; lean_object* v_env_1502_; lean_object* v_nextMacroScope_1503_; lean_object* v_ngen_1504_; lean_object* v_auxDeclNGen_1505_; lean_object* v_cache_1506_; lean_object* v_messages_1507_; lean_object* v_infoState_1508_; lean_object* v_snapshotTasks_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1539_; 
v___x_1500_ = lean_st_ref_take(v___y_1492_);
v_traceState_1501_ = lean_ctor_get(v___x_1500_, 4);
v_env_1502_ = lean_ctor_get(v___x_1500_, 0);
v_nextMacroScope_1503_ = lean_ctor_get(v___x_1500_, 1);
v_ngen_1504_ = lean_ctor_get(v___x_1500_, 2);
v_auxDeclNGen_1505_ = lean_ctor_get(v___x_1500_, 3);
v_cache_1506_ = lean_ctor_get(v___x_1500_, 5);
v_messages_1507_ = lean_ctor_get(v___x_1500_, 6);
v_infoState_1508_ = lean_ctor_get(v___x_1500_, 7);
v_snapshotTasks_1509_ = lean_ctor_get(v___x_1500_, 8);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1511_ = v___x_1500_;
v_isShared_1512_ = v_isSharedCheck_1539_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_snapshotTasks_1509_);
lean_inc(v_infoState_1508_);
lean_inc(v_messages_1507_);
lean_inc(v_cache_1506_);
lean_inc(v_traceState_1501_);
lean_inc(v_auxDeclNGen_1505_);
lean_inc(v_ngen_1504_);
lean_inc(v_nextMacroScope_1503_);
lean_inc(v_env_1502_);
lean_dec(v___x_1500_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1539_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
uint64_t v_tid_1513_; lean_object* v_traces_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1538_; 
v_tid_1513_ = lean_ctor_get_uint64(v_traceState_1501_, sizeof(void*)*1);
v_traces_1514_ = lean_ctor_get(v_traceState_1501_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v_traceState_1501_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1516_ = v_traceState_1501_;
v_isShared_1517_ = v_isSharedCheck_1538_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_traces_1514_);
lean_dec(v_traceState_1501_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1538_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; double v___x_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_box(0);
v___x_1520_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0);
v___x_1521_ = 0;
v___x_1522_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1));
v___x_1523_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1523_, 0, v_cls_1487_);
lean_ctor_set(v___x_1523_, 1, v___x_1519_);
lean_ctor_set(v___x_1523_, 2, v___x_1522_);
lean_ctor_set_float(v___x_1523_, sizeof(void*)*3, v___x_1520_);
lean_ctor_set_float(v___x_1523_, sizeof(void*)*3 + 8, v___x_1520_);
lean_ctor_set_uint8(v___x_1523_, sizeof(void*)*3 + 16, v___x_1521_);
v___x_1524_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2));
v___x_1525_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v_a_1496_);
lean_ctor_set(v___x_1525_, 2, v___x_1524_);
lean_inc(v_ref_1494_);
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_ref_1494_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = l_Lean_PersistentArray_push___redArg(v_traces_1514_, v___x_1526_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1527_);
v___x_1529_ = v___x_1516_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1527_);
lean_ctor_set_uint64(v_reuseFailAlloc_1537_, sizeof(void*)*1, v_tid_1513_);
v___x_1529_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1531_; 
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 4, v___x_1529_);
v___x_1531_ = v___x_1511_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_env_1502_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_nextMacroScope_1503_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_ngen_1504_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_auxDeclNGen_1505_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1536_, 5, v_cache_1506_);
lean_ctor_set(v_reuseFailAlloc_1536_, 6, v_messages_1507_);
lean_ctor_set(v_reuseFailAlloc_1536_, 7, v_infoState_1508_);
lean_ctor_set(v_reuseFailAlloc_1536_, 8, v_snapshotTasks_1509_);
v___x_1531_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1532_ = lean_st_ref_put(v___y_1492_, v___x_1531_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1518_);
v___x_1534_ = v___x_1498_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1518_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___boxed(lean_object* v_cls_1541_, lean_object* v_msg_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v_cls_1541_, v_msg_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
return v_res_1548_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_box(0);
v___x_1551_ = l_unsafeCast___redArg(v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(lean_object* v_fnPrefix_1552_, lean_object* v_a_1553_, lean_object* v_range_1554_, lean_object* v_b_1555_, lean_object* v_i_1556_){
_start:
{
lean_object* v_stop_1558_; lean_object* v_step_1559_; uint8_t v___x_1560_; 
v_stop_1558_ = lean_ctor_get(v_range_1554_, 1);
v_step_1559_ = lean_ctor_get(v_range_1554_, 2);
v___x_1560_ = lean_nat_dec_lt(v_i_1556_, v_stop_1558_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v_i_1556_);
lean_dec(v_a_1553_);
lean_dec_ref(v_fnPrefix_1552_);
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_b_1555_);
return v___x_1561_;
}
else
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1562_ = lean_unsigned_to_nat(1u);
v___x_1563_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0));
lean_inc_ref(v_fnPrefix_1552_);
v___x_1564_ = lean_string_append(v_fnPrefix_1552_, v___x_1563_);
v___x_1565_ = lean_nat_add(v_i_1556_, v___x_1562_);
v___x_1566_ = l_Nat_reprFast(v___x_1565_);
v___x_1567_ = lean_string_append(v___x_1564_, v___x_1566_);
lean_dec_ref(v___x_1566_);
v___x_1568_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1);
v___x_1569_ = l_Lean_Name_str___override(v___x_1568_, v___x_1567_);
lean_inc(v_a_1553_);
v___x_1570_ = l_Lean_Name_append(v_a_1553_, v___x_1569_);
v___x_1571_ = lean_array_push(v_b_1555_, v___x_1570_);
v___x_1572_ = lean_nat_add(v_i_1556_, v_step_1559_);
lean_dec(v_i_1556_);
v_b_1555_ = v___x_1571_;
v_i_1556_ = v___x_1572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___boxed(lean_object* v_fnPrefix_1574_, lean_object* v_a_1575_, lean_object* v_range_1576_, lean_object* v_b_1577_, lean_object* v_i_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1574_, v_a_1575_, v_range_1576_, v_b_1577_, v_i_1578_);
lean_dec_ref(v_range_1576_);
return v_res_1580_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__5(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1589_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__2));
v___x_1590_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__4));
v___x_1591_ = l_Lean_Name_append(v___x_1590_, v___x_1589_);
return v___x_1591_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__7(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__6));
v___x_1594_ = l_Lean_stringToMessageData(v___x_1593_);
return v___x_1594_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__9(void){
_start:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1596_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__8));
v___x_1597_ = l_Lean_stringToMessageData(v___x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext(lean_object* v_className_1598_, lean_object* v_fnPrefix_1599_, lean_object* v_typeName_1600_, uint8_t v_supportsRec_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v___x_1609_; 
lean_inc(v_typeName_1600_);
v___x_1609_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_typeName_1600_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v_all_1611_; uint8_t v_isRec_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v_all_1611_ = lean_ctor_get(v_a_1610_, 3);
v_isRec_1612_ = lean_ctor_get_uint8(v_a_1610_, sizeof(void*)*6);
v___x_1613_ = lean_unsigned_to_nat(0u);
v___x_1614_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0));
v___x_1615_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_all_1611_, v___x_1614_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1617_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1615_, 1);
v___x_1617_ = l_Lean_Elab_Deriving_mkInstName(v_className_1598_, v_typeName_1600_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1682_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1682_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1682_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___y_1623_; uint8_t v___y_1624_; lean_object* v___y_1630_; uint8_t v___y_1631_; lean_object* v___y_1633_; lean_object* v_auxFunNames_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1672_ = l_List_lengthTR___redArg(v_all_1611_);
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_nat_dec_eq(v___x_1672_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v_a_1677_; 
v___x_1675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1613_);
lean_ctor_set(v___x_1675_, 1, v___x_1672_);
lean_ctor_set(v___x_1675_, 2, v___x_1673_);
lean_inc(v_a_1618_);
v___x_1676_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1599_, v_a_1618_, v___x_1675_, v___x_1614_, v___x_1613_);
lean_dec_ref_known(v___x_1675_, 3);
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref(v___x_1676_);
v_auxFunNames_1639_ = v_a_1677_;
v___y_1640_ = v_a_1602_;
v___y_1641_ = v_a_1603_;
v___y_1642_ = v_a_1604_;
v___y_1643_ = v_a_1605_;
v___y_1644_ = v_a_1606_;
v___y_1645_ = v_a_1607_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_dec(v___x_1672_);
v___x_1678_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__1);
v___x_1679_ = l_Lean_Name_str___override(v___x_1678_, v_fnPrefix_1599_);
lean_inc(v_a_1618_);
v___x_1680_ = l_Lean_Name_append(v_a_1618_, v___x_1679_);
v___x_1681_ = lean_array_push(v___x_1614_, v___x_1680_);
v_auxFunNames_1639_ = v___x_1681_;
v___y_1640_ = v_a_1602_;
v___y_1641_ = v_a_1603_;
v___y_1642_ = v_a_1604_;
v___y_1643_ = v_a_1605_;
v___y_1644_ = v_a_1606_;
v___y_1645_ = v_a_1607_;
goto v___jp_1638_;
}
v___jp_1622_:
{
lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1625_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1625_, 0, v_a_1618_);
lean_ctor_set(v___x_1625_, 1, v_a_1616_);
lean_ctor_set(v___x_1625_, 2, v___y_1623_);
lean_ctor_set_uint8(v___x_1625_, sizeof(void*)*3, v___y_1624_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v___x_1625_);
v___x_1627_ = v___x_1620_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
v___jp_1629_:
{
if (v___y_1631_ == 0)
{
if (v_isRec_1612_ == 0)
{
v___y_1623_ = v___y_1630_;
v___y_1624_ = v_isRec_1612_;
goto v___jp_1622_;
}
else
{
if (v_supportsRec_1601_ == 0)
{
v___y_1623_ = v___y_1630_;
v___y_1624_ = v_isRec_1612_;
goto v___jp_1622_;
}
else
{
v___y_1623_ = v___y_1630_;
v___y_1624_ = v___y_1631_;
goto v___jp_1622_;
}
}
}
else
{
v___y_1623_ = v___y_1630_;
v___y_1624_ = v___y_1631_;
goto v___jp_1622_;
}
}
v___jp_1632_:
{
uint8_t v___x_1634_; 
v___x_1634_ = l_Lean_InductiveVal_isNested(v_a_1610_);
lean_dec(v_a_1610_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = lean_array_get_size(v_a_1616_);
v___x_1637_ = lean_nat_dec_lt(v___x_1635_, v___x_1636_);
v___y_1630_ = v___y_1633_;
v___y_1631_ = v___x_1637_;
goto v___jp_1629_;
}
else
{
v___y_1630_ = v___y_1633_;
v___y_1631_ = v___x_1634_;
goto v___jp_1629_;
}
}
v___jp_1638_:
{
lean_object* v_toCold_1646_; lean_object* v_options_1647_; uint8_t v_hasTrace_1648_; 
v_toCold_1646_ = lean_ctor_get(v___y_1644_, 0);
v_options_1647_ = lean_ctor_get(v_toCold_1646_, 2);
v_hasTrace_1648_ = lean_ctor_get_uint8(v_options_1647_, sizeof(void*)*1);
if (v_hasTrace_1648_ == 0)
{
v___y_1633_ = v_auxFunNames_1639_;
goto v___jp_1632_;
}
else
{
lean_object* v_inheritedTraceOptions_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v_inheritedTraceOptions_1649_ = lean_ctor_get(v_toCold_1646_, 11);
v___x_1650_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__2));
v___x_1651_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__5, &l_Lean_Elab_Deriving_mkContext___closed__5_once, _init_l_Lean_Elab_Deriving_mkContext___closed__5);
v___x_1652_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1649_, v_options_1647_, v___x_1651_);
if (v___x_1652_ == 0)
{
v___y_1633_ = v_auxFunNames_1639_;
goto v___jp_1632_;
}
else
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1653_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__7, &l_Lean_Elab_Deriving_mkContext___closed__7_once, _init_l_Lean_Elab_Deriving_mkContext___closed__7);
lean_inc(v_a_1618_);
v___x_1654_ = l_Lean_MessageData_ofName(v_a_1618_);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__9, &l_Lean_Elab_Deriving_mkContext___closed__9_once, _init_l_Lean_Elab_Deriving_mkContext___closed__9);
v___x_1657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
lean_inc_ref(v_auxFunNames_1639_);
v___x_1658_ = lean_array_to_list(v_auxFunNames_1639_);
v___x_1659_ = lean_box(0);
v___x_1660_ = l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(v___x_1658_, v___x_1659_);
v___x_1661_ = l_Lean_MessageData_ofList(v___x_1660_);
v___x_1662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1657_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v___x_1650_, v___x_1662_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_dec_ref_known(v___x_1663_, 1);
v___y_1633_ = v_auxFunNames_1639_;
goto v___jp_1632_;
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec_ref(v_auxFunNames_1639_);
lean_del_object(v___x_1620_);
lean_dec(v_a_1618_);
lean_dec(v_a_1616_);
lean_dec(v_a_1610_);
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
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
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec(v_a_1616_);
lean_dec(v_a_1610_);
lean_dec_ref(v_fnPrefix_1599_);
v_a_1683_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1617_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1617_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
else
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
lean_dec(v_a_1610_);
lean_dec(v_typeName_1600_);
lean_dec_ref(v_fnPrefix_1599_);
lean_dec(v_className_1598_);
v_a_1691_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v___x_1615_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1615_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_dec(v_typeName_1600_);
lean_dec_ref(v_fnPrefix_1599_);
lean_dec(v_className_1598_);
v_a_1699_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1609_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1609_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object* v_className_1707_, lean_object* v_fnPrefix_1708_, lean_object* v_typeName_1709_, lean_object* v_supportsRec_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
uint8_t v_supportsRec_boxed_1718_; lean_object* v_res_1719_; 
v_supportsRec_boxed_1718_ = lean_unbox(v_supportsRec_1710_);
v_res_1719_ = l_Lean_Elab_Deriving_mkContext(v_className_1707_, v_fnPrefix_1708_, v_typeName_1709_, v_supportsRec_boxed_1718_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_);
lean_dec(v_a_1716_);
lean_dec_ref(v_a_1715_);
lean_dec(v_a_1714_);
lean_dec_ref(v_a_1713_);
lean_dec(v_a_1712_);
lean_dec_ref(v_a_1711_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(lean_object* v_as_1720_, lean_object* v_as_x27_1721_, lean_object* v_b_1722_, lean_object* v_a_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_as_x27_1721_, v_b_1722_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___boxed(lean_object* v_as_1732_, lean_object* v_as_x27_1733_, lean_object* v_b_1734_, lean_object* v_a_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(v_as_1732_, v_as_x27_1733_, v_b_1734_, v_a_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v_as_x27_1733_);
lean_dec(v_as_1732_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(lean_object* v_cls_1744_, lean_object* v_msg_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v_cls_1744_, v_msg_1745_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___boxed(lean_object* v_cls_1754_, lean_object* v_msg_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(v_cls_1754_, v_msg_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(lean_object* v_fnPrefix_1764_, lean_object* v_a_1765_, lean_object* v_range_1766_, lean_object* v_b_1767_, lean_object* v_i_1768_, lean_object* v_hs_1769_, lean_object* v_hl_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1764_, v_a_1765_, v_range_1766_, v_b_1767_, v_i_1768_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___boxed(lean_object* v_fnPrefix_1779_, lean_object* v_a_1780_, lean_object* v_range_1781_, lean_object* v_b_1782_, lean_object* v_i_1783_, lean_object* v_hs_1784_, lean_object* v_hl_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(v_fnPrefix_1779_, v_a_1780_, v_range_1781_, v_b_1782_, v_i_1783_, v_hs_1784_, v_hl_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v_range_1781_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(lean_object* v_a_1794_, lean_object* v_b_1795_){
_start:
{
lean_object* v_array_1796_; lean_object* v_start_1797_; lean_object* v_stop_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1811_; 
v_array_1796_ = lean_ctor_get(v_a_1794_, 0);
v_start_1797_ = lean_ctor_get(v_a_1794_, 1);
v_stop_1798_ = lean_ctor_get(v_a_1794_, 2);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_a_1794_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1800_ = v_a_1794_;
v_isShared_1801_ = v_isSharedCheck_1811_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_stop_1798_);
lean_inc(v_start_1797_);
lean_inc(v_array_1796_);
lean_dec(v_a_1794_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1811_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
uint8_t v___x_1802_; 
v___x_1802_ = lean_nat_dec_lt(v_start_1797_, v_stop_1798_);
if (v___x_1802_ == 0)
{
lean_del_object(v___x_1800_);
lean_dec(v_stop_1798_);
lean_dec(v_start_1797_);
lean_dec_ref(v_array_1796_);
return v_b_1795_;
}
else
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___x_1803_ = lean_unsigned_to_nat(1u);
v___x_1804_ = lean_nat_add(v_start_1797_, v___x_1803_);
lean_inc_ref(v_array_1796_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v___x_1804_);
v___x_1806_ = v___x_1800_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_array_1796_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1810_, 2, v_stop_1798_);
v___x_1806_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = lean_array_fget(v_array_1796_, v_start_1797_);
lean_dec(v_start_1797_);
lean_dec_ref(v_array_1796_);
v___x_1808_ = lean_array_push(v_b_1795_, v___x_1807_);
v_a_1794_ = v___x_1806_;
v_b_1795_ = v___x_1808_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_ref_1819_; uint8_t v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v_ref_1819_ = lean_ctor_get(v___y_1816_, 2);
v___x_1820_ = 0;
v___x_1821_ = l_Lean_SourceInfo_fromRef(v_ref_1819_, v___x_1820_);
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed(lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(lean_object* v_upperBound_1868_, lean_object* v___x_1869_, lean_object* v_ctx_1870_, lean_object* v_argNames_1871_, lean_object* v_className_1872_, lean_object* v_a_1873_, lean_object* v_b_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
uint8_t v___x_1882_; 
v___x_1882_ = lean_nat_dec_lt(v_a_1873_, v_upperBound_1868_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; 
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v___x_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1883_, 0, v_b_1874_);
return v___x_1883_;
}
else
{
lean_object* v_auxFunNames_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v_auxFunNames_1884_ = lean_ctor_get(v_ctx_1870_, 2);
v___x_1885_ = l_Lean_instInhabitedName;
v___x_1886_ = lean_array_fget_borrowed(v___x_1869_, v_a_1873_);
v___x_1887_ = lean_array_get_borrowed(v___x_1885_, v_auxFunNames_1884_, v_a_1873_);
lean_inc(v___x_1886_);
v___x_1888_ = l_Lean_Elab_Deriving_mkInductArgNames(v___x_1886_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v_numParams_1890_; lean_object* v_lower_1892_; lean_object* v_upper_1893_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1888_, 1);
v_numParams_1890_ = lean_ctor_get(v___x_1886_, 1);
v___x_1986_ = lean_unsigned_to_nat(0u);
v___x_1987_ = lean_array_get_size(v_a_1889_);
v___x_1988_ = lean_nat_dec_le(v_numParams_1890_, v___x_1986_);
if (v___x_1988_ == 0)
{
lean_inc(v_numParams_1890_);
v_lower_1892_ = v_numParams_1890_;
v_upper_1893_ = v___x_1987_;
goto v___jp_1891_;
}
else
{
v_lower_1892_ = v___x_1986_;
v_upper_1893_ = v___x_1987_;
goto v___jp_1891_;
}
v___jp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = l_Array_toSubarray___redArg(v_a_1889_, v_lower_1892_, v_upper_1893_);
lean_inc_ref(v___x_1894_);
v___x_1895_ = l_Subarray_copy___redArg(v___x_1894_);
v___x_1896_ = l_Lean_Elab_Deriving_mkImplicitBinders(v___x_1895_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
lean_dec_ref(v___x_1895_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v_a_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1890_);
lean_inc_ref(v_argNames_1871_);
v___x_1899_ = l_Array_toSubarray___redArg(v_argNames_1871_, v___x_1898_, v_numParams_1890_);
v___x_1900_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v___x_1901_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v___x_1899_, v___x_1900_);
v___x_1902_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v___x_1894_, v___x_1900_);
v_a_1903_ = l_Array_append___redArg(v___x_1901_, v___x_1902_);
lean_dec_ref(v___x_1902_);
v___x_1904_ = lean_array_get_size(v_a_1903_);
v___x_1905_ = l_Array_toSubarray___redArg(v_a_1903_, v___x_1898_, v___x_1904_);
v___x_1906_ = l_Subarray_copy___redArg(v___x_1905_);
lean_inc(v___x_1886_);
v___x_1907_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v___x_1886_, v___x_1906_, v___y_1879_);
lean_dec_ref(v___x_1906_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v_ref_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v_ref_1909_ = lean_ctor_get(v___y_1879_, 2);
v___x_1910_ = 0;
v___x_1911_ = l_Lean_SourceInfo_fromRef(v_ref_1909_, v___x_1910_);
v___x_1912_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_1872_);
v___x_1913_ = l_Lean_mkCIdent(v_className_1872_);
v___x_1914_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_1911_);
v___x_1915_ = l_Lean_Syntax_node1(v___x_1911_, v___x_1914_, v_a_1908_);
v___x_1916_ = l_Lean_Syntax_node2(v___x_1911_, v___x_1912_, v___x_1913_, v___x_1915_);
v___x_1917_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc_n(v_a_1918_, 4);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1919_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1));
v___x_1920_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2));
v___x_1921_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1921_, 0, v_a_1918_);
lean_ctor_set(v___x_1921_, 1, v___x_1920_);
lean_inc(v___x_1887_);
v___x_1922_ = l_Lean_mkIdent(v___x_1887_);
v___x_1923_ = l_Lean_Syntax_node1(v_a_1918_, v___x_1914_, v___x_1922_);
v___x_1924_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3));
v___x_1925_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1925_, 0, v_a_1918_);
lean_ctor_set(v___x_1925_, 1, v___x_1924_);
v___x_1926_ = l_Lean_Syntax_node3(v_a_1918_, v___x_1919_, v___x_1921_, v___x_1923_, v___x_1925_);
v___x_1927_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5));
v___x_1928_ = l_Lean_Core_mkFreshUserName(v___x_1927_, v___y_1879_, v___y_1880_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1930_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_1930_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc_n(v_a_1931_, 8);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7));
v___x_1933_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9));
v___x_1934_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11));
v___x_1935_ = l_Lean_mkIdent(v_a_1929_);
v___x_1936_ = l_Lean_Syntax_node1(v_a_1931_, v___x_1934_, v___x_1935_);
v___x_1937_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_1938_ = l_unsafeCast___redArg(v_a_1897_);
lean_dec(v_a_1897_);
v___x_1939_ = l_Array_append___redArg(v___x_1937_, v___x_1938_);
lean_dec(v___x_1938_);
v___x_1940_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1940_, 0, v_a_1931_);
lean_ctor_set(v___x_1940_, 1, v___x_1914_);
lean_ctor_set(v___x_1940_, 2, v___x_1939_);
v___x_1941_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13));
v___x_1942_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_1943_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1943_, 0, v_a_1931_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
v___x_1944_ = l_Lean_Syntax_node2(v_a_1931_, v___x_1941_, v___x_1943_, v___x_1916_);
v___x_1945_ = l_Lean_Syntax_node1(v_a_1931_, v___x_1914_, v___x_1944_);
v___x_1946_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15));
v___x_1947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1947_, 0, v_a_1931_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = l_Lean_Syntax_node5(v_a_1931_, v___x_1933_, v___x_1936_, v___x_1940_, v___x_1945_, v___x_1947_, v___x_1926_);
v___x_1949_ = l_Lean_Syntax_node1(v_a_1931_, v___x_1932_, v___x_1948_);
v___x_1950_ = lean_array_push(v_b_1874_, v___x_1949_);
v___x_1951_ = lean_unsigned_to_nat(1u);
v___x_1952_ = lean_nat_add(v_a_1873_, v___x_1951_);
lean_dec(v_a_1873_);
v_a_1873_ = v___x_1952_;
v_b_1874_ = v___x_1950_;
goto _start;
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v_a_1929_);
lean_dec(v___x_1926_);
lean_dec(v___x_1916_);
lean_dec(v_a_1897_);
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v_a_1954_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1930_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1930_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec(v___x_1926_);
lean_dec(v___x_1916_);
lean_dec(v_a_1897_);
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v_a_1962_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1928_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1928_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec(v___x_1916_);
lean_dec(v_a_1897_);
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v_a_1970_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1917_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1917_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec(v_a_1897_);
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v_a_1978_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1907_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1907_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
else
{
lean_dec_ref(v___x_1894_);
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
return v___x_1896_;
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
lean_dec_ref(v_b_1874_);
lean_dec(v_a_1873_);
lean_dec(v_className_1872_);
lean_dec_ref(v_argNames_1871_);
v_a_1989_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1888_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1888_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___boxed(lean_object* v_upperBound_1997_, lean_object* v___x_1998_, lean_object* v_ctx_1999_, lean_object* v_argNames_2000_, lean_object* v_className_2001_, lean_object* v_a_2002_, lean_object* v_b_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v_upperBound_1997_, v___x_1998_, v_ctx_1999_, v_argNames_2000_, v_className_2001_, v_a_2002_, v_b_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec_ref(v_ctx_1999_);
lean_dec_ref(v___x_1998_);
lean_dec(v_upperBound_1997_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object* v_ctx_2012_, lean_object* v_className_2013_, lean_object* v_argNames_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_typeInfos_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v_letDecls_2025_; lean_object* v___x_2026_; 
v_typeInfos_2022_ = lean_ctor_get(v_ctx_2012_, 1);
v___x_2023_ = lean_array_get_size(v_typeInfos_2022_);
v___x_2024_ = lean_unsigned_to_nat(0u);
v_letDecls_2025_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_2026_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v___x_2023_, v_typeInfos_2022_, v_ctx_2012_, v_argNames_2014_, v_className_2013_, v___x_2024_, v_letDecls_2025_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object* v_ctx_2027_, lean_object* v_className_2028_, lean_object* v_argNames_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_2027_, v_className_2028_, v_argNames_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec_ref(v_ctx_2027_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0(lean_object* v_inst_2038_, lean_object* v_R_2039_, lean_object* v_a_2040_, lean_object* v_b_2041_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v_a_2040_, v_b_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(lean_object* v_upperBound_2043_, lean_object* v___x_2044_, lean_object* v_ctx_2045_, lean_object* v_argNames_2046_, lean_object* v_className_2047_, lean_object* v_inst_2048_, lean_object* v_R_2049_, lean_object* v_a_2050_, lean_object* v_b_2051_, lean_object* v_c_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v_upperBound_2043_, v___x_2044_, v_ctx_2045_, v_argNames_2046_, v_className_2047_, v_a_2050_, v_b_2051_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2061_ = _args[0];
lean_object* v___x_2062_ = _args[1];
lean_object* v_ctx_2063_ = _args[2];
lean_object* v_argNames_2064_ = _args[3];
lean_object* v_className_2065_ = _args[4];
lean_object* v_inst_2066_ = _args[5];
lean_object* v_R_2067_ = _args[6];
lean_object* v_a_2068_ = _args[7];
lean_object* v_b_2069_ = _args[8];
lean_object* v_c_2070_ = _args[9];
lean_object* v___y_2071_ = _args[10];
lean_object* v___y_2072_ = _args[11];
lean_object* v___y_2073_ = _args[12];
lean_object* v___y_2074_ = _args[13];
lean_object* v___y_2075_ = _args[14];
lean_object* v___y_2076_ = _args[15];
lean_object* v___y_2077_ = _args[16];
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(v_upperBound_2061_, v___x_2062_, v_ctx_2063_, v_argNames_2064_, v_className_2065_, v_inst_2066_, v_R_2067_, v_a_2068_, v_b_2069_, v_c_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec_ref(v_ctx_2063_);
lean_dec_ref(v___x_2062_);
lean_dec(v_upperBound_2061_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(lean_object* v_as_2092_, size_t v_i_2093_, size_t v_stop_2094_, lean_object* v_b_2095_, lean_object* v___y_2096_){
_start:
{
uint8_t v___x_2098_; 
v___x_2098_ = lean_usize_dec_eq(v_i_2093_, v_stop_2094_);
if (v___x_2098_ == 0)
{
lean_object* v_ref_2099_; size_t v___x_2100_; size_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v_ref_2099_ = lean_ctor_get(v___y_2096_, 2);
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = lean_usize_sub(v_i_2093_, v___x_2100_);
v___x_2102_ = lean_array_uget_borrowed(v_as_2092_, v___x_2101_);
v___x_2103_ = l_Lean_SourceInfo_fromRef(v_ref_2099_, v___x_2098_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0));
v___x_2105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1));
lean_inc_n(v___x_2103_, 4);
v___x_2106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2103_);
lean_ctor_set(v___x_2106_, 1, v___x_2104_);
v___x_2107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3));
v___x_2108_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2109_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_2110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2103_);
lean_ctor_set(v___x_2110_, 1, v___x_2108_);
lean_ctor_set(v___x_2110_, 2, v___x_2109_);
v___x_2111_ = l_Lean_Syntax_node1(v___x_2103_, v___x_2107_, v___x_2110_);
v___x_2112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4));
v___x_2113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2103_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
lean_inc(v___x_2102_);
v___x_2114_ = l_Lean_Syntax_node5(v___x_2103_, v___x_2105_, v___x_2106_, v___x_2111_, v___x_2102_, v___x_2113_, v_b_2095_);
v_i_2093_ = v___x_2101_;
v_b_2095_ = v___x_2114_;
goto _start;
}
else
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v_b_2095_);
return v___x_2116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___boxed(lean_object* v_as_2117_, lean_object* v_i_2118_, lean_object* v_stop_2119_, lean_object* v_b_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
size_t v_i_boxed_2123_; size_t v_stop_boxed_2124_; lean_object* v_res_2125_; 
v_i_boxed_2123_ = lean_unbox_usize(v_i_2118_);
lean_dec(v_i_2118_);
v_stop_boxed_2124_ = lean_unbox_usize(v_stop_2119_);
lean_dec(v_stop_2119_);
v_res_2125_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_as_2117_, v_i_boxed_2123_, v_stop_boxed_2124_, v_b_2120_, v___y_2121_);
lean_dec_ref(v___y_2121_);
lean_dec_ref(v_as_2117_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet(lean_object* v_letDecls_2126_, lean_object* v_body_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2135_ = lean_array_get_size(v_letDecls_2126_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = lean_nat_dec_lt(v___x_2136_, v___x_2135_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_body_2127_);
return v___x_2138_;
}
else
{
size_t v___x_2139_; size_t v___x_2140_; lean_object* v___x_2141_; 
v___x_2139_ = lean_usize_of_nat(v___x_2135_);
v___x_2140_ = ((size_t)0ULL);
v___x_2141_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_letDecls_2126_, v___x_2139_, v___x_2140_, v_body_2127_, v_a_2132_);
return v___x_2141_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object* v_letDecls_2142_, lean_object* v_body_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lean_Elab_Deriving_mkLet(v_letDecls_2142_, v_body_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_);
lean_dec(v_a_2149_);
lean_dec_ref(v_a_2148_);
lean_dec(v_a_2147_);
lean_dec_ref(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
lean_dec_ref(v_letDecls_2142_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(lean_object* v_as_2152_, size_t v_i_2153_, size_t v_stop_2154_, lean_object* v_b_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_as_2152_, v_i_2153_, v_stop_2154_, v_b_2155_, v___y_2160_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___boxed(lean_object* v_as_2164_, lean_object* v_i_2165_, lean_object* v_stop_2166_, lean_object* v_b_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_){
_start:
{
size_t v_i_boxed_2175_; size_t v_stop_boxed_2176_; lean_object* v_res_2177_; 
v_i_boxed_2175_ = lean_unbox_usize(v_i_2165_);
lean_dec(v_i_2165_);
v_stop_boxed_2176_ = lean_unbox_usize(v_stop_2166_);
lean_dec(v_stop_2166_);
v_res_2177_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(v_as_2164_, v_i_boxed_2175_, v_stop_boxed_2176_, v_b_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2170_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v_as_2164_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(lean_object* v___f_2187_, lean_object* v___x_2188_, lean_object* v___x_2189_, lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v_instName_2192_, lean_object* v___x_2193_, lean_object* v___x_2194_, lean_object* v_b_2195_, lean_object* v_____r_2196_, lean_object* v_val_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v___x_2205_; 
lean_inc(v___y_2203_);
lean_inc_ref(v___y_2202_);
lean_inc(v___y_2201_);
lean_inc_ref(v___y_2200_);
lean_inc(v___y_2199_);
lean_inc_ref(v___y_2198_);
v___x_2205_ = lean_apply_7(v___f_2187_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, lean_box(0));
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2256_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2256_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2256_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2254_; 
v___x_2210_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0));
v___x_2211_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1));
lean_inc_ref_n(v___x_2189_, 8);
lean_inc_ref_n(v___x_2188_, 8);
v___x_2212_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2211_);
v___x_2213_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2));
v___x_2214_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2213_);
v___x_2215_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
lean_inc_n(v___x_2190_, 2);
lean_inc_n(v_a_2206_, 14);
v___x_2216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2216_, 0, v_a_2206_);
lean_ctor_set(v___x_2216_, 1, v___x_2190_);
lean_ctor_set(v___x_2216_, 2, v___x_2215_);
lean_inc_ref_n(v___x_2216_, 12);
v___x_2217_ = l_Lean_Syntax_node7(v_a_2206_, v___x_2214_, v___x_2216_, v___x_2216_, v___x_2216_, v___x_2216_, v___x_2216_, v___x_2216_, v___x_2216_);
v___x_2218_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3));
v___x_2219_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2218_);
v___x_2220_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2));
lean_inc_ref(v___x_2191_);
v___x_2221_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2191_, v___x_2220_);
v___x_2222_ = l_Lean_Syntax_node1(v_a_2206_, v___x_2221_, v___x_2216_);
v___x_2223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2223_, 0, v_a_2206_);
lean_ctor_set(v___x_2223_, 1, v___x_2218_);
v___x_2224_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4));
v___x_2225_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2224_);
v___x_2226_ = l_Lean_mkIdent(v_instName_2192_);
v___x_2227_ = l_Lean_Syntax_node2(v_a_2206_, v___x_2225_, v___x_2226_, v___x_2216_);
v___x_2228_ = l_Lean_Syntax_node1(v_a_2206_, v___x_2190_, v___x_2227_);
v___x_2229_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5));
v___x_2230_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2229_);
v___x_2231_ = l_unsafeCast___redArg(v___x_2193_);
v___x_2232_ = l_Array_append___redArg(v___x_2215_, v___x_2231_);
lean_dec(v___x_2231_);
v___x_2233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2233_, 0, v_a_2206_);
lean_ctor_set(v___x_2233_, 1, v___x_2190_);
lean_ctor_set(v___x_2233_, 2, v___x_2232_);
v___x_2234_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12));
v___x_2235_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2191_, v___x_2234_);
v___x_2236_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_2237_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2237_, 0, v_a_2206_);
lean_ctor_set(v___x_2237_, 1, v___x_2236_);
v___x_2238_ = l_Lean_Syntax_node2(v_a_2206_, v___x_2235_, v___x_2237_, v___x_2194_);
v___x_2239_ = l_Lean_Syntax_node2(v_a_2206_, v___x_2230_, v___x_2233_, v___x_2238_);
v___x_2240_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6));
v___x_2241_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2210_, v___x_2240_);
v___x_2242_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15));
v___x_2243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2243_, 0, v_a_2206_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7));
v___x_2245_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8));
v___x_2246_ = l_Lean_Name_mkStr4(v___x_2188_, v___x_2189_, v___x_2244_, v___x_2245_);
v___x_2247_ = l_Lean_Syntax_node2(v_a_2206_, v___x_2246_, v___x_2216_, v___x_2216_);
v___x_2248_ = l_Lean_Syntax_node4(v_a_2206_, v___x_2241_, v___x_2243_, v_val_2197_, v___x_2247_, v___x_2216_);
v___x_2249_ = l_Lean_Syntax_node6(v_a_2206_, v___x_2219_, v___x_2222_, v___x_2223_, v___x_2216_, v___x_2228_, v___x_2239_, v___x_2248_);
v___x_2250_ = l_Lean_Syntax_node2(v_a_2206_, v___x_2212_, v___x_2217_, v___x_2249_);
v___x_2251_ = lean_array_push(v_b_2195_, v___x_2250_);
v___x_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 0, v___x_2252_);
v___x_2254_ = v___x_2208_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2264_; 
lean_dec(v_val_2197_);
lean_dec_ref(v_b_2195_);
lean_dec(v___x_2194_);
lean_dec(v_instName_2192_);
lean_dec_ref(v___x_2191_);
lean_dec(v___x_2190_);
lean_dec_ref(v___x_2189_);
lean_dec_ref(v___x_2188_);
v_a_2257_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2259_ = v___x_2205_;
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_a_2257_);
lean_dec(v___x_2205_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_a_2257_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___f_2265_ = _args[0];
lean_object* v___x_2266_ = _args[1];
lean_object* v___x_2267_ = _args[2];
lean_object* v___x_2268_ = _args[3];
lean_object* v___x_2269_ = _args[4];
lean_object* v_instName_2270_ = _args[5];
lean_object* v___x_2271_ = _args[6];
lean_object* v___x_2272_ = _args[7];
lean_object* v_b_2273_ = _args[8];
lean_object* v_____r_2274_ = _args[9];
lean_object* v_val_2275_ = _args[10];
lean_object* v___y_2276_ = _args[11];
lean_object* v___y_2277_ = _args[12];
lean_object* v___y_2278_ = _args[13];
lean_object* v___y_2279_ = _args[14];
lean_object* v___y_2280_ = _args[15];
lean_object* v___y_2281_ = _args[16];
lean_object* v___y_2282_ = _args[17];
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v___f_2265_, v___x_2266_, v___x_2267_, v___x_2268_, v___x_2269_, v_instName_2270_, v___x_2271_, v___x_2272_, v_b_2273_, v_____r_2274_, v_val_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec_ref(v___x_2271_);
return v_res_2283_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(lean_object* v_a_2284_, lean_object* v_as_2285_, size_t v_i_2286_, size_t v_stop_2287_){
_start:
{
uint8_t v___x_2288_; 
v___x_2288_ = lean_usize_dec_eq(v_i_2286_, v_stop_2287_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; uint8_t v___x_2290_; 
v___x_2289_ = lean_array_uget_borrowed(v_as_2285_, v_i_2286_);
v___x_2290_ = lean_name_eq(v_a_2284_, v___x_2289_);
if (v___x_2290_ == 0)
{
size_t v___x_2291_; size_t v___x_2292_; 
v___x_2291_ = ((size_t)1ULL);
v___x_2292_ = lean_usize_add(v_i_2286_, v___x_2291_);
v_i_2286_ = v___x_2292_;
goto _start;
}
else
{
return v___x_2290_;
}
}
else
{
uint8_t v___x_2294_; 
v___x_2294_ = 0;
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0___boxed(lean_object* v_a_2295_, lean_object* v_as_2296_, lean_object* v_i_2297_, lean_object* v_stop_2298_){
_start:
{
size_t v_i_boxed_2299_; size_t v_stop_boxed_2300_; uint8_t v_res_2301_; lean_object* v_r_2302_; 
v_i_boxed_2299_ = lean_unbox_usize(v_i_2297_);
lean_dec(v_i_2297_);
v_stop_boxed_2300_ = lean_unbox_usize(v_stop_2298_);
lean_dec(v_stop_2298_);
v_res_2301_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(v_a_2295_, v_as_2296_, v_i_boxed_2299_, v_stop_boxed_2300_);
lean_dec_ref(v_as_2296_);
lean_dec(v_a_2295_);
v_r_2302_ = lean_box(v_res_2301_);
return v_r_2302_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(lean_object* v_as_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; uint8_t v___x_2307_; 
v___x_2305_ = lean_unsigned_to_nat(0u);
v___x_2306_ = lean_array_get_size(v_as_2303_);
v___x_2307_ = lean_nat_dec_lt(v___x_2305_, v___x_2306_);
if (v___x_2307_ == 0)
{
return v___x_2307_;
}
else
{
if (v___x_2307_ == 0)
{
return v___x_2307_;
}
else
{
size_t v___x_2308_; size_t v___x_2309_; uint8_t v___x_2310_; 
v___x_2308_ = ((size_t)0ULL);
v___x_2309_ = lean_usize_of_nat(v___x_2306_);
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(v_a_2304_, v_as_2303_, v___x_2308_, v___x_2309_);
return v___x_2310_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0___boxed(lean_object* v_as_2311_, lean_object* v_a_2312_){
_start:
{
uint8_t v_res_2313_; lean_object* v_r_2314_; 
v_res_2313_ = l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(v_as_2311_, v_a_2312_);
lean_dec(v_a_2312_);
lean_dec_ref(v_as_2311_);
v_r_2314_ = lean_box(v_res_2313_);
return v_r_2314_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(lean_object* v_upperBound_2316_, lean_object* v___x_2317_, lean_object* v_typeNames_2318_, lean_object* v_ctx_2319_, lean_object* v_className_2320_, uint8_t v_useAnonCtor_2321_, lean_object* v_a_2322_, lean_object* v_b_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v_a_2332_; lean_object* v___y_2337_; uint8_t v___x_2356_; 
v___x_2356_ = lean_nat_dec_lt(v_a_2322_, v_upperBound_2316_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; 
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v___x_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2357_, 0, v_b_2323_);
return v___x_2357_;
}
else
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_toConstantVal_2360_; lean_object* v_name_2361_; uint8_t v___x_2362_; 
v___x_2358_ = l_Lean_instInhabitedInductiveVal_default;
v___x_2359_ = lean_array_get_borrowed(v___x_2358_, v___x_2317_, v_a_2322_);
v_toConstantVal_2360_ = lean_ctor_get(v___x_2359_, 0);
v_name_2361_ = lean_ctor_get(v_toConstantVal_2360_, 0);
v___x_2362_ = l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(v_typeNames_2318_, v_name_2361_);
if (v___x_2362_ == 0)
{
v_a_2332_ = v_b_2323_;
goto v___jp_2331_;
}
else
{
lean_object* v_instName_2363_; lean_object* v_auxFunNames_2364_; lean_object* v___f_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v_instName_2363_ = lean_ctor_get(v_ctx_2319_, 0);
v_auxFunNames_2364_ = lean_ctor_get(v_ctx_2319_, 2);
v___f_2365_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0));
v___x_2366_ = l_Lean_instInhabitedName;
v___x_2367_ = lean_array_get_borrowed(v___x_2366_, v_auxFunNames_2364_, v_a_2322_);
lean_inc(v___x_2359_);
v___x_2368_ = l_Lean_Elab_Deriving_mkInductArgNames(v___x_2359_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2370_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_2369_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2372_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v___x_2370_, 1);
lean_inc(v_a_2369_);
lean_inc(v___x_2359_);
lean_inc(v_className_2320_);
v___x_2372_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_2320_, v___x_2359_, v_a_2369_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
v___x_2374_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0));
v___x_2375_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1));
v___x_2376_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2));
v___x_2377_ = l_unsafeCast___redArg(v_a_2373_);
lean_dec(v_a_2373_);
v___x_2378_ = l_Array_append___redArg(v_a_2371_, v___x_2377_);
lean_dec(v___x_2377_);
lean_inc(v___x_2359_);
v___x_2379_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v___x_2359_, v_a_2369_, v___y_2328_);
lean_dec(v_a_2369_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v_ref_2381_; uint8_t v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v_ref_2381_ = lean_ctor_get(v___y_2328_, 2);
v___x_2382_ = 0;
v___x_2383_ = l_Lean_SourceInfo_fromRef(v_ref_2381_, v___x_2382_);
v___x_2384_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_2320_);
v___x_2385_ = l_Lean_mkCIdent(v_className_2320_);
v___x_2386_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_2383_);
v___x_2387_ = l_Lean_Syntax_node1(v___x_2383_, v___x_2386_, v_a_2380_);
v___x_2388_ = l_Lean_Syntax_node2(v___x_2383_, v___x_2384_, v___x_2385_, v___x_2387_);
lean_inc(v___x_2367_);
v___x_2389_ = l_Lean_mkIdent(v___x_2367_);
if (v_useAnonCtor_2321_ == 0)
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = lean_box(0);
lean_inc(v_instName_2363_);
v___x_2391_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v___f_2365_, v___x_2374_, v___x_2375_, v___x_2386_, v___x_2376_, v_instName_2363_, v___x_2378_, v___x_2388_, v_b_2323_, v___x_2390_, v___x_2389_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec_ref(v___x_2378_);
v___y_2337_ = v___x_2391_;
goto v___jp_2336_;
}
else
{
lean_object* v___x_2392_; 
v___x_2392_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
lean_inc_n(v_a_2393_, 4);
lean_dec_ref_known(v___x_2392_, 1);
v___x_2394_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1));
v___x_2395_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2));
v___x_2396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2393_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Lean_Syntax_node1(v_a_2393_, v___x_2386_, v___x_2389_);
v___x_2398_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3));
v___x_2399_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2399_, 0, v_a_2393_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = l_Lean_Syntax_node3(v_a_2393_, v___x_2394_, v___x_2396_, v___x_2397_, v___x_2399_);
v___x_2401_ = lean_box(0);
lean_inc(v_instName_2363_);
v___x_2402_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v___f_2365_, v___x_2374_, v___x_2375_, v___x_2386_, v___x_2376_, v_instName_2363_, v___x_2378_, v___x_2388_, v_b_2323_, v___x_2401_, v___x_2400_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec_ref(v___x_2378_);
v___y_2337_ = v___x_2402_;
goto v___jp_2336_;
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v___x_2389_);
lean_dec(v___x_2388_);
lean_dec_ref(v___x_2378_);
lean_dec_ref(v_b_2323_);
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2403_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2392_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2392_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref(v___x_2378_);
lean_dec_ref(v_b_2323_);
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2411_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2379_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2379_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec(v_a_2371_);
lean_dec(v_a_2369_);
lean_dec_ref(v_b_2323_);
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2419_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2372_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2372_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
else
{
lean_dec(v_a_2369_);
lean_dec_ref(v_b_2323_);
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
return v___x_2370_;
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
lean_dec_ref(v_b_2323_);
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2427_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2368_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2368_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
v___jp_2331_:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = lean_unsigned_to_nat(1u);
v___x_2334_ = lean_nat_add(v_a_2322_, v___x_2333_);
lean_dec(v_a_2322_);
v_a_2322_ = v___x_2334_;
v_b_2323_ = v_a_2332_;
goto _start;
}
v___jp_2336_:
{
if (lean_obj_tag(v___y_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2347_; 
v_a_2338_ = lean_ctor_get(v___y_2337_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___y_2337_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2340_ = v___y_2337_;
v_isShared_2341_ = v_isSharedCheck_2347_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___y_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2347_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
if (lean_obj_tag(v_a_2338_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2344_; 
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2342_ = lean_ctor_get(v_a_2338_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v_a_2338_, 1);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 0, v_a_2342_);
v___x_2344_ = v___x_2340_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
else
{
lean_object* v_a_2346_; 
lean_del_object(v___x_2340_);
v_a_2346_ = lean_ctor_get(v_a_2338_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v_a_2338_, 1);
v_a_2332_ = v_a_2346_;
goto v___jp_2331_;
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec(v_a_2322_);
lean_dec(v_className_2320_);
lean_dec_ref(v_ctx_2319_);
v_a_2348_ = lean_ctor_get(v___y_2337_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___y_2337_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___y_2337_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___y_2337_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___boxed(lean_object* v_upperBound_2435_, lean_object* v___x_2436_, lean_object* v_typeNames_2437_, lean_object* v_ctx_2438_, lean_object* v_className_2439_, lean_object* v_useAnonCtor_2440_, lean_object* v_a_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
uint8_t v_useAnonCtor_boxed_2450_; lean_object* v_res_2451_; 
v_useAnonCtor_boxed_2450_ = lean_unbox(v_useAnonCtor_2440_);
v_res_2451_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v_upperBound_2435_, v___x_2436_, v_typeNames_2437_, v_ctx_2438_, v_className_2439_, v_useAnonCtor_boxed_2450_, v_a_2441_, v_b_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_typeNames_2437_);
lean_dec_ref(v___x_2436_);
lean_dec(v_upperBound_2435_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object* v_ctx_2452_, lean_object* v_className_2453_, lean_object* v_typeNames_2454_, uint8_t v_useAnonCtor_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_){
_start:
{
lean_object* v_typeInfos_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v_instances_2466_; lean_object* v___x_2467_; 
v_typeInfos_2463_ = lean_ctor_get(v_ctx_2452_, 1);
lean_inc_ref(v_typeInfos_2463_);
v___x_2464_ = lean_array_get_size(v_typeInfos_2463_);
v___x_2465_ = lean_unsigned_to_nat(0u);
v_instances_2466_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_2467_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v___x_2464_, v_typeInfos_2463_, v_typeNames_2454_, v_ctx_2452_, v_className_2453_, v_useAnonCtor_2455_, v___x_2465_, v_instances_2466_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_);
lean_dec_ref(v_typeInfos_2463_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object* v_ctx_2468_, lean_object* v_className_2469_, lean_object* v_typeNames_2470_, lean_object* v_useAnonCtor_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_){
_start:
{
uint8_t v_useAnonCtor_boxed_2479_; lean_object* v_res_2480_; 
v_useAnonCtor_boxed_2479_ = lean_unbox(v_useAnonCtor_2471_);
v_res_2480_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_ctx_2468_, v_className_2469_, v_typeNames_2470_, v_useAnonCtor_boxed_2479_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
lean_dec(v_a_2477_);
lean_dec_ref(v_a_2476_);
lean_dec(v_a_2475_);
lean_dec_ref(v_a_2474_);
lean_dec(v_a_2473_);
lean_dec_ref(v_a_2472_);
lean_dec_ref(v_typeNames_2470_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(lean_object* v_upperBound_2481_, lean_object* v___x_2482_, lean_object* v_typeNames_2483_, lean_object* v_ctx_2484_, lean_object* v_className_2485_, uint8_t v_useAnonCtor_2486_, lean_object* v_inst_2487_, lean_object* v_R_2488_, lean_object* v_a_2489_, lean_object* v_b_2490_, lean_object* v_c_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v_upperBound_2481_, v___x_2482_, v_typeNames_2483_, v_ctx_2484_, v_className_2485_, v_useAnonCtor_2486_, v_a_2489_, v_b_2490_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2500_ = _args[0];
lean_object* v___x_2501_ = _args[1];
lean_object* v_typeNames_2502_ = _args[2];
lean_object* v_ctx_2503_ = _args[3];
lean_object* v_className_2504_ = _args[4];
lean_object* v_useAnonCtor_2505_ = _args[5];
lean_object* v_inst_2506_ = _args[6];
lean_object* v_R_2507_ = _args[7];
lean_object* v_a_2508_ = _args[8];
lean_object* v_b_2509_ = _args[9];
lean_object* v_c_2510_ = _args[10];
lean_object* v___y_2511_ = _args[11];
lean_object* v___y_2512_ = _args[12];
lean_object* v___y_2513_ = _args[13];
lean_object* v___y_2514_ = _args[14];
lean_object* v___y_2515_ = _args[15];
lean_object* v___y_2516_ = _args[16];
lean_object* v___y_2517_ = _args[17];
_start:
{
uint8_t v_useAnonCtor_boxed_2518_; lean_object* v_res_2519_; 
v_useAnonCtor_boxed_2518_ = lean_unbox(v_useAnonCtor_2505_);
v_res_2519_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(v_upperBound_2500_, v___x_2501_, v_typeNames_2502_, v_ctx_2503_, v_className_2504_, v_useAnonCtor_boxed_2518_, v_inst_2506_, v_R_2507_, v_a_2508_, v_b_2509_, v_c_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec_ref(v_typeNames_2502_);
lean_dec_ref(v___x_2501_);
lean_dec(v_upperBound_2500_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg(lean_object* v_varName_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_ref_2529_; uint8_t v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_ref_2529_ = lean_ctor_get(v_a_2527_, 2);
v___x_2530_ = 0;
v___x_2531_ = l_Lean_SourceInfo_fromRef(v_ref_2529_, v___x_2530_);
v___x_2532_ = ((lean_object*)(l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1));
v___x_2533_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2534_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
lean_inc(v___x_2531_);
v___x_2535_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2531_);
lean_ctor_set(v___x_2535_, 1, v___x_2533_);
lean_ctor_set(v___x_2535_, 2, v___x_2534_);
v___x_2536_ = l_Lean_mkIdent(v_varName_2526_);
v___x_2537_ = l_Lean_Syntax_node2(v___x_2531_, v___x_2532_, v___x_2535_, v___x_2536_);
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___boxed(lean_object* v_varName_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v_varName_2539_, v_a_2540_);
lean_dec_ref(v_a_2540_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object* v_varName_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v___x_2551_; 
v___x_2551_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v_varName_2543_, v_a_2548_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object* v_varName_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_Elab_Deriving_mkDiscr(v_varName_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(lean_object* v_upperBound_2564_, lean_object* v_a_2565_, lean_object* v_b_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
uint8_t v___x_2570_; 
v___x_2570_ = lean_nat_dec_lt(v_a_2565_, v_upperBound_2564_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; 
lean_dec(v_a_2565_);
v___x_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2571_, 0, v_b_2566_);
return v___x_2571_;
}
else
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1));
v___x_2573_ = l_Lean_Core_mkFreshUserName(v___x_2572_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
v___x_2575_ = lean_array_push(v_b_2566_, v_a_2574_);
v___x_2576_ = lean_unsigned_to_nat(1u);
v___x_2577_ = lean_nat_add(v_a_2565_, v___x_2576_);
lean_dec(v_a_2565_);
v_a_2565_ = v___x_2577_;
v_b_2566_ = v___x_2575_;
goto _start;
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
lean_dec_ref(v_b_2566_);
lean_dec(v_a_2565_);
v_a_2579_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2573_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2573_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___boxed(lean_object* v_upperBound_2587_, lean_object* v_a_2588_, lean_object* v_b_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_upperBound_2587_, v_a_2588_, v_b_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v_upperBound_2587_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(lean_object* v_a_2602_, size_t v_sz_2603_, size_t v_i_2604_, lean_object* v_bs_2605_, lean_object* v___y_2606_){
_start:
{
uint8_t v___x_2608_; 
v___x_2608_ = lean_usize_dec_lt(v_i_2604_, v_sz_2603_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_dec(v_a_2602_);
v___x_2609_ = l_unsafeCast___redArg(v_bs_2605_);
lean_dec_ref(v_bs_2605_);
v___x_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
return v___x_2610_;
}
else
{
lean_object* v_ref_2611_; lean_object* v_v_2612_; lean_object* v___x_2613_; lean_object* v_bs_x27_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; size_t v___x_2632_; size_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v_ref_2611_ = lean_ctor_get(v___y_2606_, 2);
v_v_2612_ = lean_array_uget(v_bs_2605_, v_i_2604_);
v___x_2613_ = lean_unsigned_to_nat(0u);
v_bs_x27_2614_ = lean_array_uset(v_bs_2605_, v_i_2604_, v___x_2613_);
v___x_2615_ = l_unsafeCast___redArg(v_v_2612_);
lean_dec(v_v_2612_);
v___x_2616_ = 0;
v___x_2617_ = l_Lean_SourceInfo_fromRef(v_ref_2611_, v___x_2616_);
v___x_2618_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1));
v___x_2619_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2));
lean_inc_n(v___x_2617_, 6);
v___x_2620_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2617_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v___x_2621_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2622_ = l_Lean_mkIdent(v___x_2615_);
v___x_2623_ = l_Lean_Syntax_node1(v___x_2617_, v___x_2621_, v___x_2622_);
v___x_2624_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_2625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2617_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
lean_inc(v_a_2602_);
v___x_2626_ = l_Lean_Syntax_node2(v___x_2617_, v___x_2621_, v___x_2625_, v_a_2602_);
v___x_2627_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_2628_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2617_);
lean_ctor_set(v___x_2628_, 1, v___x_2621_);
lean_ctor_set(v___x_2628_, 2, v___x_2627_);
v___x_2629_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3));
v___x_2630_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2617_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = l_Lean_Syntax_node5(v___x_2617_, v___x_2618_, v___x_2620_, v___x_2623_, v___x_2626_, v___x_2628_, v___x_2630_);
v___x_2632_ = ((size_t)1ULL);
v___x_2633_ = lean_usize_add(v_i_2604_, v___x_2632_);
v___x_2634_ = l_unsafeCast___redArg(v___x_2631_);
lean_dec(v___x_2631_);
v___x_2635_ = lean_array_uset(v_bs_x27_2614_, v_i_2604_, v___x_2634_);
v_i_2604_ = v___x_2633_;
v_bs_2605_ = v___x_2635_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___boxed(lean_object* v_a_2637_, lean_object* v_sz_2638_, lean_object* v_i_2639_, lean_object* v_bs_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
size_t v_sz_boxed_2643_; size_t v_i_boxed_2644_; lean_object* v_res_2645_; 
v_sz_boxed_2643_ = lean_unbox_usize(v_sz_2638_);
lean_dec(v_sz_2638_);
v_i_boxed_2644_ = lean_unbox_usize(v_i_2639_);
lean_dec(v_i_2639_);
v_res_2645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(v_a_2637_, v_sz_boxed_2643_, v_i_boxed_2644_, v_bs_2640_, v___y_2641_);
lean_dec_ref(v___y_2641_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(lean_object* v_a_2646_, size_t v_sz_2647_, size_t v_i_2648_, lean_object* v_bs_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(v_a_2646_, v_sz_2647_, v_i_2648_, v_bs_2649_, v___y_2654_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___boxed(lean_object* v_a_2658_, lean_object* v_sz_2659_, lean_object* v_i_2660_, lean_object* v_bs_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
size_t v_sz_boxed_2669_; size_t v_i_boxed_2670_; lean_object* v_res_2671_; 
v_sz_boxed_2669_ = lean_unbox_usize(v_sz_2659_);
lean_dec(v_sz_2659_);
v_i_boxed_2670_ = lean_unbox_usize(v_i_2660_);
lean_dec(v_i_2660_);
v_res_2671_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(v_a_2658_, v_sz_boxed_2669_, v_i_boxed_2670_, v_bs_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object* v_className_2672_, lean_object* v_arity_2673_, lean_object* v_indVal_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v___x_2682_; 
lean_inc_ref(v_indVal_2674_);
v___x_2682_ = l_Lean_Elab_Deriving_mkInductArgNames(v_indVal_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_2683_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2686_; lean_object* v_a_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2684_, 1);
lean_inc_ref(v_indVal_2674_);
v___x_2686_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_2674_, v_a_2683_, v_a_2679_);
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref(v___x_2686_);
v___x_2688_ = lean_unsigned_to_nat(0u);
v___x_2689_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v___x_2690_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_arity_2673_, v___x_2688_, v___x_2689_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2692_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2690_, 1);
lean_inc(v_a_2683_);
v___x_2692_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_2672_, v_indVal_2674_, v_a_2683_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; size_t v_sz_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_4602__overap_2701_; lean_object* v___x_2702_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2692_, 1);
v___x_2694_ = l_unsafeCast___redArg(v_a_2693_);
lean_dec(v_a_2693_);
v___x_2695_ = l_Array_append___redArg(v_a_2685_, v___x_2694_);
lean_dec(v___x_2694_);
v_sz_2696_ = lean_array_size(v_a_2691_);
v___x_2697_ = l_unsafeCast___redArg(v_a_2691_);
v___x_2698_ = lean_box_usize(v_sz_2696_);
v___x_2699_ = ((lean_object*)(l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1));
lean_inc(v_a_2687_);
v___x_2700_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2700_, 0, v_a_2687_);
lean_closure_set(v___x_2700_, 1, v___x_2698_);
lean_closure_set(v___x_2700_, 2, v___x_2699_);
lean_closure_set(v___x_2700_, 3, v___x_2697_);
v___x_4602__overap_2701_ = l_unsafeCast___redArg(v___x_2700_);
lean_dec_ref(v___x_2700_);
lean_inc(v_a_2680_);
lean_inc_ref(v_a_2679_);
lean_inc(v_a_2678_);
lean_inc_ref(v_a_2677_);
lean_inc(v_a_2676_);
lean_inc_ref(v_a_2675_);
v___x_2702_ = lean_apply_7(v___x_4602__overap_2701_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, lean_box(0));
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2716_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2705_ = v___x_2702_;
v_isShared_2706_ = v_isSharedCheck_2716_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2702_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2716_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2707_ = l_unsafeCast___redArg(v_a_2703_);
lean_dec(v_a_2703_);
v___x_2708_ = l_unsafeCast___redArg(v___x_2707_);
lean_dec(v___x_2707_);
v___x_2709_ = l_Array_append___redArg(v___x_2695_, v___x_2708_);
lean_dec(v___x_2708_);
v___x_2710_ = l_unsafeCast___redArg(v___x_2709_);
lean_dec_ref(v___x_2709_);
v___x_2711_ = l_unsafeCast___redArg(v___x_2710_);
lean_dec(v___x_2710_);
v___x_2712_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2711_);
lean_ctor_set(v___x_2712_, 1, v_a_2683_);
lean_ctor_set(v___x_2712_, 2, v_a_2691_);
lean_ctor_set(v___x_2712_, 3, v_a_2687_);
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 0, v___x_2712_);
v___x_2714_ = v___x_2705_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2712_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec_ref(v___x_2695_);
lean_dec(v_a_2691_);
lean_dec(v_a_2687_);
lean_dec(v_a_2683_);
v_a_2717_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2702_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2702_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec(v_a_2691_);
lean_dec(v_a_2687_);
lean_dec(v_a_2685_);
lean_dec(v_a_2683_);
v_a_2725_ = lean_ctor_get(v___x_2692_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2692_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2692_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
lean_dec(v_a_2687_);
lean_dec(v_a_2685_);
lean_dec(v_a_2683_);
lean_dec_ref(v_indVal_2674_);
lean_dec(v_className_2672_);
v_a_2733_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2690_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2690_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
else
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2748_; 
lean_dec(v_a_2683_);
lean_dec_ref(v_indVal_2674_);
lean_dec(v_className_2672_);
v_a_2741_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2743_ = v___x_2684_;
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2684_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
lean_dec_ref(v_indVal_2674_);
lean_dec(v_className_2672_);
v_a_2749_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2682_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2682_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object* v_className_2757_, lean_object* v_arity_2758_, lean_object* v_indVal_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lean_Elab_Deriving_mkHeader(v_className_2757_, v_arity_2758_, v_indVal_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
lean_dec(v_a_2765_);
lean_dec_ref(v_a_2764_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_arity_2758_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(lean_object* v_upperBound_2768_, lean_object* v_inst_2769_, lean_object* v_R_2770_, lean_object* v_a_2771_, lean_object* v_b_2772_, lean_object* v_c_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_upperBound_2768_, v_a_2771_, v_b_2772_, v___y_2778_, v___y_2779_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___boxed(lean_object* v_upperBound_2782_, lean_object* v_inst_2783_, lean_object* v_R_2784_, lean_object* v_a_2785_, lean_object* v_b_2786_, lean_object* v_c_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(v_upperBound_2782_, v_inst_2783_, v_R_2784_, v_a_2785_, v_b_2786_, v_c_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v_upperBound_2782_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(lean_object* v_a_2796_, lean_object* v_b_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_array_2800_; lean_object* v_start_2801_; lean_object* v_stop_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2826_; 
v_array_2800_ = lean_ctor_get(v_a_2796_, 0);
v_start_2801_ = lean_ctor_get(v_a_2796_, 1);
v_stop_2802_ = lean_ctor_get(v_a_2796_, 2);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_a_2796_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2804_ = v_a_2796_;
v_isShared_2805_ = v_isSharedCheck_2826_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_stop_2802_);
lean_inc(v_start_2801_);
lean_inc(v_array_2800_);
lean_dec(v_a_2796_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2826_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
uint8_t v___x_2806_; 
v___x_2806_ = lean_nat_dec_lt(v_start_2801_, v_stop_2802_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; 
lean_del_object(v___x_2804_);
lean_dec(v_stop_2802_);
lean_dec(v_start_2801_);
lean_dec_ref(v_array_2800_);
v___x_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2807_, 0, v_b_2797_);
return v___x_2807_;
}
else
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2808_ = lean_unsigned_to_nat(1u);
v___x_2809_ = lean_nat_add(v_start_2801_, v___x_2808_);
lean_inc_ref(v_array_2800_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 1, v___x_2809_);
v___x_2811_ = v___x_2804_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_array_2800_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2809_);
lean_ctor_set(v_reuseFailAlloc_2825_, 2, v_stop_2802_);
v___x_2811_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = lean_array_fget(v_array_2800_, v_start_2801_);
lean_dec(v_start_2801_);
lean_dec_ref(v_array_2800_);
v___x_2813_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v___x_2812_, v___y_2798_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = lean_array_push(v_b_2797_, v_a_2814_);
v_a_2796_ = v___x_2811_;
v_b_2797_ = v___x_2815_;
goto _start;
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_dec_ref(v___x_2811_);
lean_dec_ref(v_b_2797_);
v_a_2817_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2813_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2813_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg___boxed(lean_object* v_a_2827_, lean_object* v_b_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v_a_2827_, v_b_2828_, v___y_2829_);
lean_dec_ref(v___y_2829_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(size_t v_sz_2832_, size_t v_i_2833_, lean_object* v_bs_2834_, lean_object* v___y_2835_){
_start:
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_usize_dec_lt(v_i_2833_, v_sz_2832_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = l_unsafeCast___redArg(v_bs_2834_);
lean_dec_ref(v_bs_2834_);
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
return v___x_2839_;
}
else
{
lean_object* v_v_2840_; lean_object* v___x_2841_; lean_object* v_bs_x27_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v_v_2840_ = lean_array_uget(v_bs_2834_, v_i_2833_);
v___x_2841_ = lean_unsigned_to_nat(0u);
v_bs_x27_2842_ = lean_array_uset(v_bs_2834_, v_i_2833_, v___x_2841_);
v___x_2843_ = l_unsafeCast___redArg(v_v_2840_);
lean_dec(v_v_2840_);
v___x_2844_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v___x_2843_, v___y_2835_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_object* v_a_2845_; size_t v___x_2846_; size_t v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_a_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_a_2845_);
lean_dec_ref_known(v___x_2844_, 1);
v___x_2846_ = ((size_t)1ULL);
v___x_2847_ = lean_usize_add(v_i_2833_, v___x_2846_);
v___x_2848_ = l_unsafeCast___redArg(v_a_2845_);
lean_dec(v_a_2845_);
v___x_2849_ = lean_array_uset(v_bs_x27_2842_, v_i_2833_, v___x_2848_);
v_i_2833_ = v___x_2847_;
v_bs_2834_ = v___x_2849_;
goto _start;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec_ref(v_bs_x27_2842_);
v_a_2851_ = lean_ctor_get(v___x_2844_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2844_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2844_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2844_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg___boxed(lean_object* v_sz_2859_, lean_object* v_i_2860_, lean_object* v_bs_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
size_t v_sz_boxed_2864_; size_t v_i_boxed_2865_; lean_object* v_res_2866_; 
v_sz_boxed_2864_ = lean_unbox_usize(v_sz_2859_);
lean_dec(v_sz_2859_);
v_i_boxed_2865_ = lean_unbox_usize(v_i_2860_);
lean_dec(v_i_2860_);
v_res_2866_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(v_sz_boxed_2864_, v_i_boxed_2865_, v_bs_2861_, v___y_2862_);
lean_dec_ref(v___y_2862_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(size_t v_sz_2867_, size_t v_i_2868_, lean_object* v_bs_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v___x_2877_; 
v___x_2877_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(v_sz_2867_, v_i_2868_, v_bs_2869_, v___y_2874_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___boxed(lean_object* v_sz_2878_, lean_object* v_i_2879_, lean_object* v_bs_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
size_t v_sz_boxed_2888_; size_t v_i_boxed_2889_; lean_object* v_res_2890_; 
v_sz_boxed_2888_ = lean_unbox_usize(v_sz_2878_);
lean_dec(v_sz_2878_);
v_i_boxed_2889_ = lean_unbox_usize(v_i_2879_);
lean_dec(v_i_2879_);
v_res_2890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(v_sz_boxed_2888_, v_i_boxed_2889_, v_bs_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object* v_header_2891_, lean_object* v_indVal_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_){
_start:
{
lean_object* v_argNames_2900_; lean_object* v_targetNames_2901_; lean_object* v_numParams_2902_; lean_object* v___x_2903_; lean_object* v_discrs_2904_; lean_object* v_lower_2906_; lean_object* v_upper_2907_; lean_object* v___x_2927_; uint8_t v___x_2928_; 
v_argNames_2900_ = lean_ctor_get(v_header_2891_, 1);
lean_inc_ref(v_argNames_2900_);
v_targetNames_2901_ = lean_ctor_get(v_header_2891_, 2);
lean_inc_ref(v_targetNames_2901_);
lean_dec_ref(v_header_2891_);
v_numParams_2902_ = lean_ctor_get(v_indVal_2892_, 1);
lean_inc(v_numParams_2902_);
lean_dec_ref(v_indVal_2892_);
v___x_2903_ = lean_unsigned_to_nat(0u);
v_discrs_2904_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_2927_ = lean_array_get_size(v_argNames_2900_);
v___x_2928_ = lean_nat_dec_le(v_numParams_2902_, v___x_2903_);
if (v___x_2928_ == 0)
{
v_lower_2906_ = v_numParams_2902_;
v_upper_2907_ = v___x_2927_;
goto v___jp_2905_;
}
else
{
lean_dec(v_numParams_2902_);
v_lower_2906_ = v___x_2903_;
v_upper_2907_ = v___x_2927_;
goto v___jp_2905_;
}
v___jp_2905_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = l_Array_toSubarray___redArg(v_argNames_2900_, v_lower_2906_, v_upper_2907_);
v___x_2909_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v___x_2908_, v_discrs_2904_, v_a_2897_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; size_t v_sz_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_1663__overap_2916_; lean_object* v___x_2917_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
v_sz_2911_ = lean_array_size(v_targetNames_2901_);
v___x_2912_ = l_unsafeCast___redArg(v_targetNames_2901_);
lean_dec_ref(v_targetNames_2901_);
v___x_2913_ = lean_box_usize(v_sz_2911_);
v___x_2914_ = ((lean_object*)(l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1));
v___x_2915_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___boxed), 10, 3);
lean_closure_set(v___x_2915_, 0, v___x_2913_);
lean_closure_set(v___x_2915_, 1, v___x_2914_);
lean_closure_set(v___x_2915_, 2, v___x_2912_);
v___x_1663__overap_2916_ = l_unsafeCast___redArg(v___x_2915_);
lean_dec_ref(v___x_2915_);
lean_inc(v_a_2898_);
lean_inc_ref(v_a_2897_);
lean_inc(v_a_2896_);
lean_inc_ref(v_a_2895_);
lean_inc(v_a_2894_);
lean_inc_ref(v_a_2893_);
v___x_2917_ = lean_apply_7(v___x_1663__overap_2916_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, lean_box(0));
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2926_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2920_ = v___x_2917_;
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2917_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2922_ = l_Array_append___redArg(v_a_2910_, v_a_2918_);
lean_dec(v_a_2918_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_dec(v_a_2910_);
return v___x_2917_;
}
}
else
{
lean_dec_ref(v_targetNames_2901_);
return v___x_2909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs___boxed(lean_object* v_header_2929_, lean_object* v_indVal_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Lean_Elab_Deriving_mkDiscrs(v_header_2929_, v_indVal_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_, v_a_2936_);
lean_dec(v_a_2936_);
lean_dec_ref(v_a_2935_);
lean_dec(v_a_2934_);
lean_dec_ref(v_a_2933_);
lean_dec(v_a_2932_);
lean_dec_ref(v_a_2931_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(lean_object* v_inst_2939_, lean_object* v_R_2940_, lean_object* v_a_2941_, lean_object* v_b_2942_, lean_object* v_c_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v_a_2941_, v_b_2942_, v___y_2948_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___boxed(lean_object* v_inst_2952_, lean_object* v_R_2953_, lean_object* v_a_2954_, lean_object* v_b_2955_, lean_object* v_c_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(v_inst_2952_, v_R_2953_, v_a_2954_, v_b_2955_, v_c_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
return v_res_2964_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Deriving_implicitBinderF = _init_l_Lean_Elab_Deriving_implicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_implicitBinderF);
l_Lean_Elab_Deriving_instBinderF = _init_l_Lean_Elab_Deriving_instBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_instBinderF);
l_Lean_Elab_Deriving_explicitBinderF = _init_l_Lean_Elab_Deriving_explicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_explicitBinderF);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_Util(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Server.Rpc.Deriving
// Imports: public import Lean.Elab.Deriving.Basic
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Parser_termParser(lean_object*);
lean_object* l_Lean_Parser_Term_matchAlt(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Server_RpcEncodable_isOptField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Server_RpcEncodable_isOptField___closed__0 = (const lean_object*)&l_Lean_Server_RpcEncodable_isOptField___closed__0_value;
static lean_once_cell_t l_Lean_Server_RpcEncodable_isOptField___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RpcEncodable_isOptField___closed__1;
LEAN_EXPORT uint8_t l_Lean_Server_RpcEncodable_isOptField(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RpcEncodable_isOptField___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "structExplicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(156, 255, 55, 101, 203, 12, 116, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "RpcEncodable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Json"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rpcEncode"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(181, 130, 28, 14, 164, 108, 68, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(147, 95, 3, 206, 143, 66, 59, 169)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rpcDecode"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(18, 61, 22, 59, 236, 209, 187, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(220, 0, 93, 28, 42, 216, 37, 123)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 100, 102, 194, 167, 62, 107, 182)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mapM"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(58, 78, 170, 251, 181, 31, 172, 28)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "__rpcref"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85_value),LEAN_SCALAR_PTR_LITERAL(120, 248, 178, 198, 26, 146, 90, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "'__rpcref' is reserved and cannot be used as a field name. See the `RpcEncodable` docstring."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value),LEAN_SCALAR_PTR_LITERAL(180, 236, 187, 15, 83, 171, 117, 65)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "structureTk"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value),LEAN_SCALAR_PTR_LITERAL(132, 164, 13, 167, 248, 219, 132, 242)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "RpcEncodablePacket"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value),LEAN_SCALAR_PTR_LITERAL(59, 154, 188, 20, 17, 205, 207, 181)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structFields"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18_value),LEAN_SCALAR_PTR_LITERAL(162, 20, 124, 55, 90, 140, 156, 83)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optDeriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value),LEAN_SCALAR_PTR_LITERAL(215, 163, 253, 206, 79, 89, 101, 240)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "derivingClass"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value),LEAN_SCALAR_PTR_LITERAL(71, 164, 144, 68, 145, 86, 212, 243)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FromJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value),LEAN_SCALAR_PTR_LITERAL(9, 26, 128, 190, 189, 230, 248, 17)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value),LEAN_SCALAR_PTR_LITERAL(90, 244, 120, 131, 70, 154, 113, 6)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value),LEAN_SCALAR_PTR_LITERAL(65, 79, 35, 19, 21, 38, 89, 10)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "variable"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value),LEAN_SCALAR_PTR_LITERAL(250, 93, 226, 106, 76, 14, 69, 165)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 110, 25, 5, 88, 138, 0, 41)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "enc"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value),LEAN_SCALAR_PTR_LITERAL(127, 112, 184, 188, 166, 208, 172, 147)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "whereDecls"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value),LEAN_SCALAR_PTR_LITERAL(51, 156, 180, 247, 37, 30, 126, 62)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termReturn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value),LEAN_SCALAR_PTR_LITERAL(199, 245, 184, 22, 191, 152, 219, 48)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value),LEAN_SCALAR_PTR_LITERAL(112, 200, 227, 76, 90, 242, 6, 135)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value),LEAN_SCALAR_PTR_LITERAL(240, 112, 235, 135, 88, 35, 83, 81)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110_value),LEAN_SCALAR_PTR_LITERAL(71, 110, 153, 29, 75, 133, 244, 52)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fromJson\?"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value),LEAN_SCALAR_PTR_LITERAL(3, 54, 193, 250, 66, 68, 188, 53)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value),LEAN_SCALAR_PTR_LITERAL(196, 88, 105, 59, 236, 221, 213, 61)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 131, 12, 184, 158, 202, 243, 28)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "for structure "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " with params "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "'__rpcref' is reserved and cannot be used as an argument name. See the `RpcEncodable` docstring."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 61, 118, 113, 180, 158, 239, 32)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "constructor name not a string: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 178, 72, 69, 244, 64, 6, 60)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(55, 91, 239, 116, 115, 0, 62, 115)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pkt"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value),LEAN_SCALAR_PTR_LITERAL(182, 192, 230, 127, 128, 175, 248, 240)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_<|_"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value),LEAN_SCALAR_PTR_LITERAL(152, 38, 96, 140, 215, 46, 31, 82)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<|"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "for inductive "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "indexed inductive families are not supported"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "mutually inductive types are not supported"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rpc"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Server_RpcEncodable_isOptField___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_Server_RpcEncodable_isOptField___closed__0));
v___x_3_ = lean_string_utf8_byte_size(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_RpcEncodable_isOptField(lean_object* v_n_4_){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_5_ = 1;
v___x_6_ = l_Lean_Name_toString(v_n_4_, v___x_5_);
v___x_7_ = ((lean_object*)(l_Lean_Server_RpcEncodable_isOptField___closed__0));
v___x_8_ = lean_string_utf8_byte_size(v___x_6_);
v___x_9_ = lean_obj_once(&l_Lean_Server_RpcEncodable_isOptField___closed__1, &l_Lean_Server_RpcEncodable_isOptField___closed__1_once, _init_l_Lean_Server_RpcEncodable_isOptField___closed__1);
v___x_10_ = lean_nat_dec_le(v___x_9_, v___x_8_);
if (v___x_10_ == 0)
{
lean_dec_ref(v___x_6_);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_nat_sub(v___x_8_, v___x_9_);
v___x_13_ = lean_string_memcmp(v___x_6_, v___x_7_, v___x_12_, v___x_11_, v___x_9_);
lean_dec(v___x_12_);
lean_dec_ref(v___x_6_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RpcEncodable_isOptField___boxed(lean_object* v_n_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Server_RpcEncodable_isOptField(v_n_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(size_t v_sz_17_, size_t v_i_18_, lean_object* v_bs_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = lean_usize_dec_lt(v_i_18_, v_sz_17_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; 
v___x_21_ = l_unsafeCast___redArg(v_bs_19_);
lean_dec_ref(v_bs_19_);
return v___x_21_;
}
else
{
lean_object* v_v_22_; lean_object* v___x_23_; lean_object* v_bs_x27_24_; lean_object* v___x_25_; size_t v___x_26_; size_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v_v_22_ = lean_array_uget(v_bs_19_, v_i_18_);
v___x_23_ = lean_unsigned_to_nat(0u);
v_bs_x27_24_ = lean_array_uset(v_bs_19_, v_i_18_, v___x_23_);
v___x_25_ = l_unsafeCast___redArg(v_v_22_);
lean_dec(v_v_22_);
v___x_26_ = ((size_t)1ULL);
v___x_27_ = lean_usize_add(v_i_18_, v___x_26_);
v___x_28_ = l_unsafeCast___redArg(v___x_25_);
lean_dec(v___x_25_);
v___x_29_ = lean_array_uset(v_bs_x27_24_, v_i_18_, v___x_28_);
v_i_18_ = v___x_27_;
v_bs_19_ = v___x_29_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5___boxed(lean_object* v_sz_31_, lean_object* v_i_32_, lean_object* v_bs_33_){
_start:
{
size_t v_sz_boxed_34_; size_t v_i_boxed_35_; lean_object* v_res_36_; 
v_sz_boxed_34_ = lean_unbox_usize(v_sz_31_);
lean_dec(v_sz_31_);
v_i_boxed_35_ = lean_unbox_usize(v_i_32_);
lean_dec(v_i_32_);
v_res_36_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_boxed_34_, v_i_boxed_35_, v_bs_33_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(size_t v_sz_37_, size_t v_i_38_, lean_object* v_bs_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___x_44_; 
v___x_44_ = lean_usize_dec_lt(v_i_38_, v_sz_37_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = l_unsafeCast___redArg(v_bs_39_);
lean_dec_ref(v_bs_39_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
else
{
lean_object* v_v_47_; lean_object* v___x_48_; lean_object* v_bs_x27_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_v_47_ = lean_array_uget(v_bs_39_, v_i_38_);
v___x_48_ = lean_unsigned_to_nat(0u);
v_bs_x27_49_ = lean_array_uset(v_bs_39_, v_i_38_, v___x_48_);
v___x_50_ = l_unsafeCast___redArg(v_v_47_);
lean_dec(v_v_47_);
v___x_51_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_50_, v___y_40_, v___y_41_, v___y_42_);
lean_dec(v___x_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_53_; lean_object* v___x_54_; size_t v___x_55_; size_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_52_);
lean_dec_ref_known(v___x_51_, 1);
v___x_53_ = l_Lean_LocalDecl_userName(v_a_52_);
lean_dec(v_a_52_);
v___x_54_ = l_Lean_mkIdent(v___x_53_);
v___x_55_ = ((size_t)1ULL);
v___x_56_ = lean_usize_add(v_i_38_, v___x_55_);
v___x_57_ = l_unsafeCast___redArg(v___x_54_);
lean_dec(v___x_54_);
v___x_58_ = lean_array_uset(v_bs_x27_49_, v_i_38_, v___x_57_);
v_i_38_ = v___x_56_;
v_bs_39_ = v___x_58_;
goto _start;
}
else
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_67_; 
lean_dec_ref(v_bs_x27_49_);
v_a_60_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_67_ == 0)
{
v___x_62_ = v___x_51_;
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_51_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg___boxed(lean_object* v_sz_68_, lean_object* v_i_69_, lean_object* v_bs_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
size_t v_sz_boxed_75_; size_t v_i_boxed_76_; lean_object* v_res_77_; 
v_sz_boxed_75_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_i_boxed_76_ = lean_unbox_usize(v_i_69_);
lean_dec(v_i_69_);
v_res_77_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_boxed_75_, v_i_boxed_76_, v_bs_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(size_t v_sz_78_, size_t v_i_79_, lean_object* v_bs_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_78_, v_i_79_, v_bs_80_, v___y_83_, v___y_85_, v___y_86_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed(lean_object* v_sz_89_, lean_object* v_i_90_, lean_object* v_bs_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
size_t v_sz_boxed_99_; size_t v_i_boxed_100_; lean_object* v_res_101_; 
v_sz_boxed_99_ = lean_unbox_usize(v_sz_89_);
lean_dec(v_sz_89_);
v_i_boxed_100_ = lean_unbox_usize(v_i_90_);
lean_dec(v_i_90_);
v_res_101_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(v_sz_boxed_99_, v_i_boxed_100_, v_bs_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(size_t v_sz_102_, size_t v_i_103_, lean_object* v_bs_104_){
_start:
{
uint8_t v___x_105_; 
v___x_105_ = lean_usize_dec_lt(v_i_103_, v_sz_102_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = l_unsafeCast___redArg(v_bs_104_);
lean_dec_ref(v_bs_104_);
return v___x_106_;
}
else
{
lean_object* v_v_107_; lean_object* v___x_108_; lean_object* v_bs_x27_109_; lean_object* v___x_110_; size_t v___x_111_; size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_v_107_ = lean_array_uget(v_bs_104_, v_i_103_);
v___x_108_ = lean_unsigned_to_nat(0u);
v_bs_x27_109_ = lean_array_uset(v_bs_104_, v_i_103_, v___x_108_);
v___x_110_ = l_unsafeCast___redArg(v_v_107_);
lean_dec(v_v_107_);
v___x_111_ = ((size_t)1ULL);
v___x_112_ = lean_usize_add(v_i_103_, v___x_111_);
v___x_113_ = l_unsafeCast___redArg(v___x_110_);
lean_dec(v___x_110_);
v___x_114_ = lean_array_uset(v_bs_x27_109_, v_i_103_, v___x_113_);
v_i_103_ = v___x_112_;
v_bs_104_ = v___x_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4___boxed(lean_object* v_sz_116_, lean_object* v_i_117_, lean_object* v_bs_118_){
_start:
{
size_t v_sz_boxed_119_; size_t v_i_boxed_120_; lean_object* v_res_121_; 
v_sz_boxed_119_ = lean_unbox_usize(v_sz_116_);
lean_dec(v_sz_116_);
v_i_boxed_120_ = lean_unbox_usize(v_i_117_);
lean_dec(v_i_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_boxed_119_, v_i_boxed_120_, v_bs_118_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(lean_object* v_msgData_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v___x_128_; lean_object* v_env_129_; lean_object* v___x_130_; lean_object* v_toCold_131_; lean_object* v_mctx_132_; lean_object* v_lctx_133_; lean_object* v_options_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_128_ = lean_st_ref_get(v___y_126_);
v_env_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc_ref(v_env_129_);
lean_dec(v___x_128_);
v___x_130_ = lean_st_ref_get(v___y_124_);
v_toCold_131_ = lean_ctor_get(v___y_125_, 0);
v_mctx_132_ = lean_ctor_get(v___x_130_, 0);
lean_inc_ref(v_mctx_132_);
lean_dec(v___x_130_);
v_lctx_133_ = lean_ctor_get(v___y_123_, 2);
v_options_134_ = lean_ctor_get(v_toCold_131_, 2);
lean_inc_ref(v_options_134_);
lean_inc_ref(v_lctx_133_);
v___x_135_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_135_, 0, v_env_129_);
lean_ctor_set(v___x_135_, 1, v_mctx_132_);
lean_ctor_set(v___x_135_, 2, v_lctx_133_);
lean_ctor_set(v___x_135_, 3, v_options_134_);
v___x_136_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_msgData_122_);
v___x_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0___boxed(lean_object* v_msgData_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msgData_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_144_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_145_; double v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_float_of_nat(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(lean_object* v_cls_150_, lean_object* v_msg_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_ref_157_; lean_object* v___x_158_; lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_203_; 
v_ref_157_ = lean_ctor_get(v___y_154_, 2);
v___x_158_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msg_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
v_a_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_203_ == 0)
{
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_203_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_203_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v_traceState_164_; lean_object* v_env_165_; lean_object* v_nextMacroScope_166_; lean_object* v_ngen_167_; lean_object* v_auxDeclNGen_168_; lean_object* v_cache_169_; lean_object* v_messages_170_; lean_object* v_infoState_171_; lean_object* v_snapshotTasks_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_202_; 
v___x_163_ = lean_st_ref_take(v___y_155_);
v_traceState_164_ = lean_ctor_get(v___x_163_, 4);
v_env_165_ = lean_ctor_get(v___x_163_, 0);
v_nextMacroScope_166_ = lean_ctor_get(v___x_163_, 1);
v_ngen_167_ = lean_ctor_get(v___x_163_, 2);
v_auxDeclNGen_168_ = lean_ctor_get(v___x_163_, 3);
v_cache_169_ = lean_ctor_get(v___x_163_, 5);
v_messages_170_ = lean_ctor_get(v___x_163_, 6);
v_infoState_171_ = lean_ctor_get(v___x_163_, 7);
v_snapshotTasks_172_ = lean_ctor_get(v___x_163_, 8);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_202_ == 0)
{
v___x_174_ = v___x_163_;
v_isShared_175_ = v_isSharedCheck_202_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_snapshotTasks_172_);
lean_inc(v_infoState_171_);
lean_inc(v_messages_170_);
lean_inc(v_cache_169_);
lean_inc(v_traceState_164_);
lean_inc(v_auxDeclNGen_168_);
lean_inc(v_ngen_167_);
lean_inc(v_nextMacroScope_166_);
lean_inc(v_env_165_);
lean_dec(v___x_163_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_202_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
uint64_t v_tid_176_; lean_object* v_traces_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_201_; 
v_tid_176_ = lean_ctor_get_uint64(v_traceState_164_, sizeof(void*)*1);
v_traces_177_ = lean_ctor_get(v_traceState_164_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v_traceState_164_);
if (v_isSharedCheck_201_ == 0)
{
v___x_179_ = v_traceState_164_;
v_isShared_180_ = v_isSharedCheck_201_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_traces_177_);
lean_dec(v_traceState_164_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_201_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; double v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_192_; 
v___x_181_ = lean_box(0);
v___x_182_ = lean_box(0);
v___x_183_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0);
v___x_184_ = 0;
v___x_185_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1));
v___x_186_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_186_, 0, v_cls_150_);
lean_ctor_set(v___x_186_, 1, v___x_182_);
lean_ctor_set(v___x_186_, 2, v___x_185_);
lean_ctor_set_float(v___x_186_, sizeof(void*)*3, v___x_183_);
lean_ctor_set_float(v___x_186_, sizeof(void*)*3 + 8, v___x_183_);
lean_ctor_set_uint8(v___x_186_, sizeof(void*)*3 + 16, v___x_184_);
v___x_187_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2));
v___x_188_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v_a_159_);
lean_ctor_set(v___x_188_, 2, v___x_187_);
lean_inc(v_ref_157_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_ref_157_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = l_Lean_PersistentArray_push___redArg(v_traces_177_, v___x_189_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_190_);
v___x_192_ = v___x_179_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_190_);
lean_ctor_set_uint64(v_reuseFailAlloc_200_, sizeof(void*)*1, v_tid_176_);
v___x_192_ = v_reuseFailAlloc_200_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_object* v___x_194_; 
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 4, v___x_192_);
v___x_194_ = v___x_174_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_env_165_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_nextMacroScope_166_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_ngen_167_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_auxDeclNGen_168_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_199_, 5, v_cache_169_);
lean_ctor_set(v_reuseFailAlloc_199_, 6, v_messages_170_);
lean_ctor_set(v_reuseFailAlloc_199_, 7, v_infoState_171_);
lean_ctor_set(v_reuseFailAlloc_199_, 8, v_snapshotTasks_172_);
v___x_194_ = v_reuseFailAlloc_199_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_195_ = lean_st_ref_put(v___y_155_, v___x_194_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_181_);
v___x_197_ = v___x_161_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_181_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___boxed(lean_object* v_cls_204_, lean_object* v_msg_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_204_, v_msg_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(lean_object* v___x_240_, lean_object* v___x_241_, lean_object* v___x_242_, size_t v_sz_243_, size_t v_i_244_, lean_object* v_bs_245_){
_start:
{
uint8_t v___x_246_; 
v___x_246_ = lean_usize_dec_lt(v_i_244_, v_sz_243_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; 
lean_dec(v___x_242_);
lean_dec(v___x_241_);
lean_dec(v___x_240_);
v___x_247_ = l_unsafeCast___redArg(v_bs_245_);
lean_dec_ref(v_bs_245_);
return v___x_247_;
}
else
{
lean_object* v_v_248_; lean_object* v___x_249_; lean_object* v_fst_250_; lean_object* v_snd_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_279_; 
v_v_248_ = lean_array_uget_borrowed(v_bs_245_, v_i_244_);
v___x_249_ = l_unsafeCast___redArg(v_v_248_);
v_fst_250_ = lean_ctor_get(v___x_249_, 0);
v_snd_251_ = lean_ctor_get(v___x_249_, 1);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_279_ == 0)
{
v___x_253_ = v___x_249_;
v_isShared_254_ = v_isSharedCheck_279_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_snd_251_);
lean_inc(v_fst_250_);
lean_dec(v___x_249_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_279_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v_bs_x27_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6));
v___x_257_ = lean_unsigned_to_nat(0u);
v_bs_x27_258_ = lean_array_uset(v_bs_245_, v_i_244_, v___x_257_);
v___x_259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8));
v___x_260_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
lean_inc(v___x_240_);
if (v_isShared_254_ == 0)
{
lean_ctor_set_tag(v___x_253_, 2);
lean_ctor_set(v___x_253_, 1, v___x_260_);
lean_ctor_set(v___x_253_, 0, v___x_240_);
v___x_262_ = v___x_253_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___x_260_);
v___x_262_ = v_reuseFailAlloc_278_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; size_t v___x_273_; size_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
lean_inc_n(v___x_240_, 7);
v___x_263_ = l_Lean_Syntax_node1(v___x_240_, v___x_255_, v_fst_250_);
v___x_264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_265_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_240_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_Syntax_node2(v___x_240_, v___x_264_, v___x_266_, v_snd_251_);
v___x_268_ = l_Lean_Syntax_node1(v___x_240_, v___x_255_, v___x_267_);
lean_inc_n(v___x_241_, 2);
v___x_269_ = l_Lean_Syntax_node2(v___x_240_, v___x_256_, v___x_241_, v___x_268_);
v___x_270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_271_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_240_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
lean_inc(v___x_242_);
v___x_272_ = l_Lean_Syntax_node6(v___x_240_, v___x_259_, v___x_242_, v___x_262_, v___x_263_, v___x_269_, v___x_241_, v___x_271_);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_add(v_i_244_, v___x_273_);
v___x_275_ = l_unsafeCast___redArg(v___x_272_);
lean_dec(v___x_272_);
v___x_276_ = lean_array_uset(v_bs_x27_258_, v_i_244_, v___x_275_);
v_i_244_ = v___x_274_;
v_bs_245_ = v___x_276_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___boxed(lean_object* v___x_280_, lean_object* v___x_281_, lean_object* v___x_282_, lean_object* v_sz_283_, lean_object* v_i_284_, lean_object* v_bs_285_){
_start:
{
size_t v_sz_boxed_286_; size_t v_i_boxed_287_; lean_object* v_res_288_; 
v_sz_boxed_286_ = lean_unbox_usize(v_sz_283_);
lean_dec(v_sz_283_);
v_i_boxed_287_ = lean_unbox_usize(v_i_284_);
lean_dec(v_i_284_);
v_res_288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(v___x_280_, v___x_281_, v___x_282_, v_sz_boxed_286_, v_i_boxed_287_, v_bs_285_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
if (lean_obj_tag(v_a_289_) == 0)
{
lean_object* v___x_291_; 
v___x_291_ = l_List_reverse___redArg(v_a_290_);
return v___x_291_;
}
else
{
lean_object* v_head_292_; lean_object* v_tail_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_302_; 
v_head_292_ = lean_ctor_get(v_a_289_, 0);
v_tail_293_ = lean_ctor_get(v_a_289_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v_a_289_);
if (v_isSharedCheck_302_ == 0)
{
v___x_295_ = v_a_289_;
v_isShared_296_ = v_isSharedCheck_302_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_tail_293_);
lean_inc(v_head_292_);
lean_dec(v_a_289_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_302_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = l_Lean_MessageData_ofExpr(v_head_292_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 1, v_a_290_);
lean_ctor_set(v___x_295_, 0, v___x_297_);
v___x_299_ = v___x_295_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_a_290_);
v___x_299_ = v_reuseFailAlloc_301_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
v_a_289_ = v_tail_293_;
v_a_290_ = v___x_299_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(uint8_t v___x_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_ref_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_ref_311_ = lean_ctor_get(v___y_308_, 2);
v___x_312_ = l_Lean_SourceInfo_fromRef(v_ref_311_, v___x_303_);
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1___boxed(lean_object* v___x_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
uint8_t v___x_30643__boxed_322_; lean_object* v_res_323_; 
v___x_30643__boxed_322_ = lean_unbox(v___x_314_);
v_res_323_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_30643__boxed_322_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_ref_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v_ref_331_ = lean_ctor_get(v___y_328_, 2);
v___x_332_ = 0;
v___x_333_ = l_Lean_SourceInfo_fromRef(v_ref_331_, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed(lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(lean_object* v_opts_343_, lean_object* v_opt_344_){
_start:
{
lean_object* v_name_345_; lean_object* v_defValue_346_; lean_object* v_map_347_; lean_object* v___x_348_; 
v_name_345_ = lean_ctor_get(v_opt_344_, 0);
v_defValue_346_ = lean_ctor_get(v_opt_344_, 1);
v_map_347_ = lean_ctor_get(v_opts_343_, 0);
v___x_348_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_347_, v_name_345_);
if (lean_obj_tag(v___x_348_) == 0)
{
uint8_t v___x_349_; 
v___x_349_ = lean_unbox(v_defValue_346_);
return v___x_349_;
}
else
{
lean_object* v_val_350_; 
v_val_350_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_val_350_);
lean_dec_ref_known(v___x_348_, 1);
if (lean_obj_tag(v_val_350_) == 1)
{
uint8_t v_v_351_; 
v_v_351_ = lean_ctor_get_uint8(v_val_350_, 0);
lean_dec_ref_known(v_val_350_, 0);
return v_v_351_;
}
else
{
uint8_t v___x_352_; 
lean_dec(v_val_350_);
v___x_352_ = lean_unbox(v_defValue_346_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_353_, lean_object* v_opt_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_opts_353_, v_opt_354_);
lean_dec_ref(v_opt_354_);
lean_dec_ref(v_opts_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_box(1);
v___x_358_ = l_Lean_MessageData_ofFormat(v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2));
v___x_363_ = l_Lean_MessageData_ofFormat(v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
if (lean_obj_tag(v_x_365_) == 0)
{
return v_x_364_;
}
else
{
lean_object* v_head_366_; lean_object* v_tail_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_389_; 
v_head_366_ = lean_ctor_get(v_x_365_, 0);
v_tail_367_ = lean_ctor_get(v_x_365_, 1);
v_isSharedCheck_389_ = !lean_is_exclusive(v_x_365_);
if (v_isSharedCheck_389_ == 0)
{
v___x_369_ = v_x_365_;
v_isShared_370_ = v_isSharedCheck_389_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_tail_367_);
lean_inc(v_head_366_);
lean_dec(v_x_365_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_389_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v_before_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_387_; 
v_before_371_ = lean_ctor_get(v_head_366_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v_head_366_);
if (v_isSharedCheck_387_ == 0)
{
lean_object* v_unused_388_; 
v_unused_388_ = lean_ctor_get(v_head_366_, 1);
lean_dec(v_unused_388_);
v___x_373_ = v_head_366_;
v_isShared_374_ = v_isSharedCheck_387_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_before_371_);
lean_dec(v_head_366_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_387_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_374_ == 0)
{
lean_ctor_set_tag(v___x_373_, 7);
lean_ctor_set(v___x_373_, 1, v___x_375_);
lean_ctor_set(v___x_373_, 0, v_x_364_);
v___x_377_ = v___x_373_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_x_364_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v___x_375_);
v___x_377_ = v_reuseFailAlloc_386_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_370_ == 0)
{
lean_ctor_set_tag(v___x_369_, 7);
lean_ctor_set(v___x_369_, 1, v___x_378_);
lean_ctor_set(v___x_369_, 0, v___x_377_);
v___x_380_ = v___x_369_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v___x_378_);
v___x_380_ = v_reuseFailAlloc_385_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = l_Lean_MessageData_ofSyntax(v_before_371_);
v___x_382_ = l_Lean_indentD(v___x_381_);
v___x_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_380_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v_x_364_ = v___x_383_;
v_x_365_ = v_tail_367_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1));
v___x_394_ = l_Lean_MessageData_ofFormat(v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(lean_object* v_msgData_395_, lean_object* v_macroStack_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_toCold_399_; lean_object* v_options_400_; lean_object* v___x_401_; uint8_t v___x_402_; 
v_toCold_399_ = lean_ctor_get(v___y_397_, 0);
v_options_400_ = lean_ctor_get(v_toCold_399_, 2);
v___x_401_ = l_Lean_Elab_pp_macroStack;
v___x_402_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_options_400_, v___x_401_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; 
lean_dec(v_macroStack_396_);
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v_msgData_395_);
return v___x_403_;
}
else
{
if (lean_obj_tag(v_macroStack_396_) == 0)
{
lean_object* v___x_404_; 
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v_msgData_395_);
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v_after_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_421_; 
v_head_405_ = lean_ctor_get(v_macroStack_396_, 0);
lean_inc(v_head_405_);
v_after_406_ = lean_ctor_get(v_head_405_, 1);
v_isSharedCheck_421_ = !lean_is_exclusive(v_head_405_);
if (v_isSharedCheck_421_ == 0)
{
lean_object* v_unused_422_; 
v_unused_422_ = lean_ctor_get(v_head_405_, 0);
lean_dec(v_unused_422_);
v___x_408_ = v_head_405_;
v_isShared_409_ = v_isSharedCheck_421_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_after_406_);
lean_dec(v_head_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_421_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_410_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 7);
lean_ctor_set(v___x_408_, 1, v___x_410_);
lean_ctor_set(v___x_408_, 0, v_msgData_395_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_msgData_395_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v___x_410_);
v___x_412_ = v_reuseFailAlloc_420_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_msgData_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_413_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2);
v___x_414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = l_Lean_MessageData_ofSyntax(v_after_406_);
v___x_416_ = l_Lean_indentD(v___x_415_);
v_msgData_417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_417_, 0, v___x_414_);
lean_ctor_set(v_msgData_417_, 1, v___x_416_);
v___x_418_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(v_msgData_417_, v_macroStack_396_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_423_, lean_object* v_macroStack_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_msgData_423_, v_macroStack_424_, v___y_425_);
lean_dec_ref(v___y_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(lean_object* v_msg_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_ref_436_; lean_object* v_macroStack_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v_a_440_; lean_object* v___x_441_; lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_450_; 
v_ref_436_ = lean_ctor_get(v___y_433_, 2);
v_macroStack_437_ = lean_ctor_get(v___y_429_, 1);
v___x_438_ = l_Lean_Elab_getBetterRef(v_ref_436_, v_macroStack_437_);
v___x_439_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msg_428_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
v_a_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_a_440_);
lean_dec_ref(v___x_439_);
lean_inc(v_macroStack_437_);
v___x_441_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_a_440_, v_macroStack_437_, v___y_433_);
v_a_442_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_450_ == 0)
{
v___x_444_ = v___x_441_;
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_441_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_450_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_438_);
lean_ctor_set(v___x_446_, 1, v_a_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set_tag(v___x_444_, 1);
lean_ctor_set(v___x_444_, 0, v___x_446_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg___boxed(lean_object* v_msg_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v_msg_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
return v_res_459_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2));
v___x_464_ = l_String_toRawSubstring_x27(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14(void){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Array_mkArray0___redArg();
return v___x_493_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25));
v___x_522_ = l_String_toRawSubstring_x27(v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34));
v___x_545_ = l_String_toRawSubstring_x27(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38));
v___x_551_ = l_String_toRawSubstring_x27(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44));
v___x_567_ = l_String_toRawSubstring_x27(v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1));
v___x_600_ = l_String_toRawSubstring_x27(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_box(0);
v___x_602_ = l_unsafeCast___redArg(v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82));
v___x_667_ = l_String_toRawSubstring_x27(v___x_666_);
return v___x_667_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87));
v___x_675_ = l_Lean_stringToMessageData(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(lean_object* v_as_676_, size_t v_sz_677_, size_t v_i_678_, lean_object* v_b_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_a_688_; uint8_t v___x_692_; 
v___x_692_ = lean_usize_dec_lt(v_i_678_, v_sz_677_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; 
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v_b_679_);
return v___x_693_;
}
else
{
lean_object* v_snd_694_; lean_object* v_snd_695_; lean_object* v_fst_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_963_; 
v_snd_694_ = lean_ctor_get(v_b_679_, 1);
lean_inc(v_snd_694_);
v_snd_695_ = lean_ctor_get(v_snd_694_, 1);
lean_inc(v_snd_695_);
v_fst_696_ = lean_ctor_get(v_b_679_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v_b_679_);
if (v_isSharedCheck_963_ == 0)
{
lean_object* v_unused_964_; 
v_unused_964_ = lean_ctor_get(v_b_679_, 1);
lean_dec(v_unused_964_);
v___x_698_ = v_b_679_;
v_isShared_699_ = v_isSharedCheck_963_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_fst_696_);
lean_dec(v_b_679_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_963_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_fst_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_961_; 
v_fst_700_ = lean_ctor_get(v_snd_694_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v_snd_694_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v_snd_694_, 1);
lean_dec(v_unused_962_);
v___x_702_ = v_snd_694_;
v_isShared_703_ = v_isSharedCheck_961_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_fst_700_);
lean_dec(v_snd_694_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_961_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_fst_704_; lean_object* v_snd_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_960_; 
v_fst_704_ = lean_ctor_get(v_snd_695_, 0);
v_snd_705_ = lean_ctor_get(v_snd_695_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v_snd_695_);
if (v_isSharedCheck_960_ == 0)
{
v___x_707_ = v_snd_695_;
v_isShared_708_ = v_isSharedCheck_960_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_snd_705_);
lean_inc(v_fst_704_);
lean_dec(v_snd_695_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_960_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_a_709_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___x_948_; uint8_t v___x_949_; 
v_a_709_ = lean_array_uget_borrowed(v_as_676_, v_i_678_);
v___x_948_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86));
v___x_949_ = lean_name_eq(v_a_709_, v___x_948_);
if (v___x_949_ == 0)
{
v___y_711_ = v___y_680_;
v___y_712_ = v___y_681_;
v___y_713_ = v___y_682_;
v___y_714_ = v___y_683_;
v___y_715_ = v___y_684_;
v___y_716_ = v___y_685_;
goto v___jp_710_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__88);
v___x_951_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_950_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_dec_ref_known(v___x_951_, 1);
v___y_711_ = v___y_680_;
v___y_712_ = v___y_681_;
v___y_713_ = v___y_682_;
v___y_714_ = v___y_683_;
v___y_715_ = v___y_684_;
v___y_716_ = v___y_685_;
goto v___jp_710_;
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_del_object(v___x_707_);
lean_dec(v_snd_705_);
lean_dec(v_fst_704_);
lean_del_object(v___x_702_);
lean_dec(v_fst_700_);
lean_del_object(v___x_698_);
lean_dec(v_fst_696_);
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
v___jp_710_:
{
lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
lean_inc_n(v_a_709_, 2);
v___x_717_ = l_Lean_mkIdent(v_a_709_);
lean_inc(v___x_717_);
v___x_718_ = lean_array_push(v_fst_696_, v___x_717_);
v___x_719_ = l_Lean_Server_RpcEncodable_isOptField(v_a_709_);
if (v___x_719_ == 0)
{
lean_object* v_toCold_720_; lean_object* v_ref_721_; lean_object* v_quotContext_722_; lean_object* v_currMacroScope_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_toCold_720_ = lean_ctor_get(v___y_715_, 0);
v_ref_721_ = lean_ctor_get(v___y_715_, 2);
v_quotContext_722_ = lean_ctor_get(v_toCold_720_, 8);
v_currMacroScope_723_ = lean_ctor_get(v_toCold_720_, 9);
v___x_724_ = l_Lean_SourceInfo_fromRef(v_ref_721_, v___x_719_);
v___x_725_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
lean_inc(v_currMacroScope_723_);
lean_inc(v_quotContext_722_);
v___x_727_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_726_, v_currMacroScope_723_);
v___x_728_ = lean_box(0);
v___x_729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_730_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_730_, 0, v___x_724_);
lean_ctor_set(v___x_730_, 1, v___x_725_);
lean_ctor_set(v___x_730_, 2, v___x_727_);
lean_ctor_set(v___x_730_, 3, v___x_729_);
v___x_731_ = lean_array_push(v_fst_700_, v___x_730_);
v___x_732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_719_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc_n(v_a_733_, 15);
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_735_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_736_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_737_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_738_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_738_, 0, v_a_733_);
lean_ctor_set(v___x_738_, 1, v___x_736_);
lean_ctor_set(v___x_738_, 2, v___x_737_);
lean_inc_ref_n(v___x_738_, 3);
lean_inc_n(v___x_717_, 2);
v___x_739_ = l_Lean_Syntax_node2(v_a_733_, v___x_735_, v___x_717_, v___x_738_);
v___x_740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_742_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_742_, 0, v_a_733_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_745_, 0, v_a_733_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_748_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_749_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc_n(v_currMacroScope_723_, 2);
lean_inc_n(v_quotContext_722_, 2);
v___x_750_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_749_, v_currMacroScope_723_);
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_752_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_752_, 0, v_a_733_);
lean_ctor_set(v___x_752_, 1, v___x_748_);
lean_ctor_set(v___x_752_, 2, v___x_750_);
lean_ctor_set(v___x_752_, 3, v___x_751_);
v___x_753_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33));
v___x_754_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_756_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_755_, v_currMacroScope_723_);
lean_inc(v___x_756_);
v___x_757_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_757_, 0, v_a_733_);
lean_ctor_set(v___x_757_, 1, v___x_754_);
lean_ctor_set(v___x_757_, 2, v___x_756_);
lean_ctor_set(v___x_757_, 3, v___x_728_);
v___x_758_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_759_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_759_, 0, v_a_733_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = l_Lean_Syntax_node3(v_a_733_, v___x_753_, v___x_757_, v___x_759_, v___x_717_);
v___x_761_ = l_Lean_Syntax_node1(v_a_733_, v___x_736_, v___x_760_);
v___x_762_ = l_Lean_Syntax_node2(v_a_733_, v___x_747_, v___x_752_, v___x_761_);
v___x_763_ = l_Lean_Syntax_node1(v_a_733_, v___x_746_, v___x_762_);
v___x_764_ = l_Lean_Syntax_node2(v_a_733_, v___x_743_, v___x_745_, v___x_763_);
v___x_765_ = l_Lean_Syntax_node3(v_a_733_, v___x_740_, v___x_742_, v___x_738_, v___x_764_);
v___x_766_ = l_Lean_Syntax_node3(v_a_733_, v___x_736_, v___x_738_, v___x_738_, v___x_765_);
v___x_767_ = l_Lean_Syntax_node2(v_a_733_, v___x_734_, v___x_739_, v___x_766_);
v___x_768_ = lean_array_push(v_fst_704_, v___x_767_);
v___x_769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_719_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc_n(v_a_770_, 15);
lean_dec_ref_known(v___x_769_, 1);
v___x_771_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_771_, 0, v_a_770_);
lean_ctor_set(v___x_771_, 1, v___x_736_);
lean_ctor_set(v___x_771_, 2, v___x_737_);
lean_inc_ref_n(v___x_771_, 3);
lean_inc(v___x_717_);
v___x_772_ = l_Lean_Syntax_node2(v_a_770_, v___x_735_, v___x_717_, v___x_771_);
v___x_773_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_773_, 0, v_a_770_);
lean_ctor_set(v___x_773_, 1, v___x_741_);
v___x_774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_774_, 0, v_a_770_);
lean_ctor_set(v___x_774_, 1, v___x_744_);
v___x_775_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_723_);
lean_inc(v_quotContext_722_);
v___x_777_ = l_Lean_addMacroScope(v_quotContext_722_, v___x_776_, v_currMacroScope_723_);
v___x_778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_779_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_779_, 0, v_a_770_);
lean_ctor_set(v___x_779_, 1, v___x_775_);
lean_ctor_set(v___x_779_, 2, v___x_777_);
lean_ctor_set(v___x_779_, 3, v___x_778_);
v___x_780_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_780_, 0, v_a_770_);
lean_ctor_set(v___x_780_, 1, v___x_754_);
lean_ctor_set(v___x_780_, 2, v___x_756_);
lean_ctor_set(v___x_780_, 3, v___x_728_);
v___x_781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_781_, 0, v_a_770_);
lean_ctor_set(v___x_781_, 1, v___x_758_);
v___x_782_ = l_Lean_Syntax_node3(v_a_770_, v___x_753_, v___x_780_, v___x_781_, v___x_717_);
v___x_783_ = l_Lean_Syntax_node1(v_a_770_, v___x_736_, v___x_782_);
v___x_784_ = l_Lean_Syntax_node2(v_a_770_, v___x_747_, v___x_779_, v___x_783_);
v___x_785_ = l_Lean_Syntax_node1(v_a_770_, v___x_746_, v___x_784_);
v___x_786_ = l_Lean_Syntax_node2(v_a_770_, v___x_743_, v___x_774_, v___x_785_);
v___x_787_ = l_Lean_Syntax_node3(v_a_770_, v___x_740_, v___x_773_, v___x_771_, v___x_786_);
v___x_788_ = l_Lean_Syntax_node3(v_a_770_, v___x_736_, v___x_771_, v___x_771_, v___x_787_);
v___x_789_ = l_Lean_Syntax_node2(v_a_770_, v___x_734_, v___x_772_, v___x_788_);
v___x_790_ = lean_array_push(v_snd_705_, v___x_789_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_790_);
lean_ctor_set(v___x_707_, 0, v___x_768_);
v___x_792_ = v___x_707_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v___x_790_);
v___x_792_ = v_reuseFailAlloc_799_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_794_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v___x_792_);
lean_ctor_set(v___x_702_, 0, v___x_731_);
v___x_794_ = v___x_702_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v___x_792_);
v___x_794_ = v_reuseFailAlloc_798_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
lean_object* v___x_796_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v___x_794_);
lean_ctor_set(v___x_698_, 0, v___x_718_);
v___x_796_ = v___x_698_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
v_a_688_ = v___x_796_;
goto v___jp_687_;
}
}
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec_ref(v___x_768_);
lean_dec(v___x_756_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_718_);
lean_dec(v___x_717_);
lean_del_object(v___x_707_);
lean_dec(v_snd_705_);
lean_del_object(v___x_702_);
lean_del_object(v___x_698_);
v_a_800_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_769_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_769_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_718_);
lean_dec(v___x_717_);
lean_del_object(v___x_707_);
lean_dec(v_snd_705_);
lean_dec(v_fst_704_);
lean_del_object(v___x_702_);
lean_del_object(v___x_698_);
v_a_808_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_732_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_732_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_object* v_toCold_816_; lean_object* v_ref_817_; lean_object* v_quotContext_818_; lean_object* v_currMacroScope_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_toCold_816_ = lean_ctor_get(v___y_715_, 0);
v_ref_817_ = lean_ctor_get(v___y_715_, 2);
v_quotContext_818_ = lean_ctor_get(v_toCold_816_, 8);
v_currMacroScope_819_ = lean_ctor_get(v_toCold_816_, 9);
v___x_820_ = 0;
v___x_821_ = l_Lean_SourceInfo_fromRef(v_ref_817_, v___x_820_);
v___x_822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_823_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45);
v___x_824_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46));
lean_inc_n(v_currMacroScope_819_, 2);
lean_inc_n(v_quotContext_818_, 2);
v___x_825_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_824_, v_currMacroScope_819_);
v___x_826_ = lean_box(0);
v___x_827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51));
lean_inc_n(v___x_821_, 3);
v___x_828_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_828_, 0, v___x_821_);
lean_ctor_set(v___x_828_, 1, v___x_823_);
lean_ctor_set(v___x_828_, 2, v___x_825_);
lean_ctor_set(v___x_828_, 3, v___x_827_);
v___x_829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_830_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
v___x_832_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_831_, v_currMacroScope_819_);
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_834_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_834_, 0, v___x_821_);
lean_ctor_set(v___x_834_, 1, v___x_830_);
lean_ctor_set(v___x_834_, 2, v___x_832_);
lean_ctor_set(v___x_834_, 3, v___x_833_);
v___x_835_ = l_Lean_Syntax_node1(v___x_821_, v___x_829_, v___x_834_);
v___x_836_ = l_Lean_Syntax_node2(v___x_821_, v___x_822_, v___x_828_, v___x_835_);
v___x_837_ = lean_array_push(v_fst_700_, v___x_836_);
v___x_838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc_n(v_a_839_, 23);
lean_dec_ref_known(v___x_838_, 1);
v___x_840_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_841_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_842_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_843_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_843_, 0, v_a_839_);
lean_ctor_set(v___x_843_, 1, v___x_829_);
lean_ctor_set(v___x_843_, 2, v___x_842_);
lean_inc_ref_n(v___x_843_, 3);
lean_inc_n(v___x_717_, 2);
v___x_844_ = l_Lean_Syntax_node2(v_a_839_, v___x_841_, v___x_717_, v___x_843_);
v___x_845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_847_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_847_, 0, v_a_839_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_850_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_850_, 0, v_a_839_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
v___x_851_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_852_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33));
v___x_853_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_854_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
v___x_856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_856_, 0, v_a_839_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_858_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_859_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59);
lean_inc_n(v_currMacroScope_819_, 4);
lean_inc_n(v_quotContext_818_, 4);
v___x_860_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_859_, v_currMacroScope_819_);
v___x_861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81));
lean_inc(v___x_860_);
v___x_862_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_862_, 0, v_a_839_);
lean_ctor_set(v___x_862_, 1, v___x_858_);
lean_ctor_set(v___x_862_, 2, v___x_860_);
lean_ctor_set(v___x_862_, 3, v___x_861_);
v___x_863_ = l_Lean_Syntax_node1(v_a_839_, v___x_857_, v___x_862_);
v___x_864_ = l_Lean_Syntax_node2(v_a_839_, v___x_854_, v___x_856_, v___x_863_);
v___x_865_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_866_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_867_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_866_, v_currMacroScope_819_);
lean_inc(v___x_867_);
v___x_868_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_868_, 0, v_a_839_);
lean_ctor_set(v___x_868_, 1, v___x_865_);
lean_ctor_set(v___x_868_, 2, v___x_867_);
lean_ctor_set(v___x_868_, 3, v___x_826_);
v___x_869_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_870_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_870_, 0, v_a_839_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_inc_ref(v___x_870_);
v___x_871_ = l_Lean_Syntax_node3(v_a_839_, v___x_852_, v___x_868_, v___x_870_, v___x_717_);
v___x_872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_873_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_873_, 0, v_a_839_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = l_Lean_Syntax_node3(v_a_839_, v___x_853_, v___x_864_, v___x_871_, v___x_873_);
v___x_875_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83);
v___x_876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84));
v___x_877_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_876_, v_currMacroScope_819_);
lean_inc(v___x_877_);
v___x_878_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_878_, 0, v_a_839_);
lean_ctor_set(v___x_878_, 1, v___x_875_);
lean_ctor_set(v___x_878_, 2, v___x_877_);
lean_ctor_set(v___x_878_, 3, v___x_826_);
v___x_879_ = l_Lean_Syntax_node3(v_a_839_, v___x_852_, v___x_874_, v___x_870_, v___x_878_);
v___x_880_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_882_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_881_, v_currMacroScope_819_);
v___x_883_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_884_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_884_, 0, v_a_839_);
lean_ctor_set(v___x_884_, 1, v___x_880_);
lean_ctor_set(v___x_884_, 2, v___x_882_);
lean_ctor_set(v___x_884_, 3, v___x_883_);
v___x_885_ = l_Lean_Syntax_node1(v_a_839_, v___x_829_, v___x_884_);
v___x_886_ = l_Lean_Syntax_node2(v_a_839_, v___x_822_, v___x_879_, v___x_885_);
v___x_887_ = l_Lean_Syntax_node1(v_a_839_, v___x_851_, v___x_886_);
v___x_888_ = l_Lean_Syntax_node2(v_a_839_, v___x_848_, v___x_850_, v___x_887_);
v___x_889_ = l_Lean_Syntax_node3(v_a_839_, v___x_845_, v___x_847_, v___x_843_, v___x_888_);
v___x_890_ = l_Lean_Syntax_node3(v_a_839_, v___x_829_, v___x_843_, v___x_843_, v___x_889_);
v___x_891_ = l_Lean_Syntax_node2(v_a_839_, v___x_840_, v___x_844_, v___x_890_);
v___x_892_ = lean_array_push(v_fst_704_, v___x_891_);
v___x_893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc_n(v_a_894_, 23);
lean_dec_ref_known(v___x_893_, 1);
v___x_895_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_895_, 0, v_a_894_);
lean_ctor_set(v___x_895_, 1, v___x_829_);
lean_ctor_set(v___x_895_, 2, v___x_842_);
lean_inc_ref_n(v___x_895_, 3);
lean_inc(v___x_717_);
v___x_896_ = l_Lean_Syntax_node2(v_a_894_, v___x_841_, v___x_717_, v___x_895_);
v___x_897_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_897_, 0, v_a_894_);
lean_ctor_set(v___x_897_, 1, v___x_846_);
v___x_898_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_898_, 0, v_a_894_);
lean_ctor_set(v___x_898_, 1, v___x_849_);
v___x_899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_899_, 0, v_a_894_);
lean_ctor_set(v___x_899_, 1, v___x_855_);
v___x_900_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_900_, 0, v_a_894_);
lean_ctor_set(v___x_900_, 1, v___x_858_);
lean_ctor_set(v___x_900_, 2, v___x_860_);
lean_ctor_set(v___x_900_, 3, v___x_861_);
v___x_901_ = l_Lean_Syntax_node1(v_a_894_, v___x_857_, v___x_900_);
v___x_902_ = l_Lean_Syntax_node2(v_a_894_, v___x_854_, v___x_899_, v___x_901_);
v___x_903_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_903_, 0, v_a_894_);
lean_ctor_set(v___x_903_, 1, v___x_865_);
lean_ctor_set(v___x_903_, 2, v___x_867_);
lean_ctor_set(v___x_903_, 3, v___x_826_);
v___x_904_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_904_, 0, v_a_894_);
lean_ctor_set(v___x_904_, 1, v___x_869_);
lean_inc_ref(v___x_904_);
v___x_905_ = l_Lean_Syntax_node3(v_a_894_, v___x_852_, v___x_903_, v___x_904_, v___x_717_);
v___x_906_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_906_, 0, v_a_894_);
lean_ctor_set(v___x_906_, 1, v___x_872_);
v___x_907_ = l_Lean_Syntax_node3(v_a_894_, v___x_853_, v___x_902_, v___x_905_, v___x_906_);
v___x_908_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_908_, 0, v_a_894_);
lean_ctor_set(v___x_908_, 1, v___x_875_);
lean_ctor_set(v___x_908_, 2, v___x_877_);
lean_ctor_set(v___x_908_, 3, v___x_826_);
v___x_909_ = l_Lean_Syntax_node3(v_a_894_, v___x_852_, v___x_907_, v___x_904_, v___x_908_);
v___x_910_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_911_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_819_);
lean_inc(v_quotContext_818_);
v___x_912_ = l_Lean_addMacroScope(v_quotContext_818_, v___x_911_, v_currMacroScope_819_);
v___x_913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_914_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_914_, 0, v_a_894_);
lean_ctor_set(v___x_914_, 1, v___x_910_);
lean_ctor_set(v___x_914_, 2, v___x_912_);
lean_ctor_set(v___x_914_, 3, v___x_913_);
v___x_915_ = l_Lean_Syntax_node1(v_a_894_, v___x_829_, v___x_914_);
v___x_916_ = l_Lean_Syntax_node2(v_a_894_, v___x_822_, v___x_909_, v___x_915_);
v___x_917_ = l_Lean_Syntax_node1(v_a_894_, v___x_851_, v___x_916_);
v___x_918_ = l_Lean_Syntax_node2(v_a_894_, v___x_848_, v___x_898_, v___x_917_);
v___x_919_ = l_Lean_Syntax_node3(v_a_894_, v___x_845_, v___x_897_, v___x_895_, v___x_918_);
v___x_920_ = l_Lean_Syntax_node3(v_a_894_, v___x_829_, v___x_895_, v___x_895_, v___x_919_);
v___x_921_ = l_Lean_Syntax_node2(v_a_894_, v___x_840_, v___x_896_, v___x_920_);
v___x_922_ = lean_array_push(v_snd_705_, v___x_921_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_922_);
lean_ctor_set(v___x_707_, 0, v___x_892_);
v___x_924_ = v___x_707_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v___x_922_);
v___x_924_ = v_reuseFailAlloc_931_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_926_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v___x_924_);
lean_ctor_set(v___x_702_, 0, v___x_837_);
v___x_926_ = v___x_702_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_930_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_928_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v___x_926_);
lean_ctor_set(v___x_698_, 0, v___x_718_);
v___x_928_ = v___x_698_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
v_a_688_ = v___x_928_;
goto v___jp_687_;
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec_ref(v___x_892_);
lean_dec(v___x_877_);
lean_dec(v___x_867_);
lean_dec(v___x_860_);
lean_dec_ref(v___x_837_);
lean_dec_ref(v___x_718_);
lean_dec(v___x_717_);
lean_del_object(v___x_707_);
lean_dec(v_snd_705_);
lean_del_object(v___x_702_);
lean_del_object(v___x_698_);
v_a_932_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_893_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_893_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec_ref(v___x_837_);
lean_dec_ref(v___x_718_);
lean_dec(v___x_717_);
lean_del_object(v___x_707_);
lean_dec(v_snd_705_);
lean_dec(v_fst_704_);
lean_del_object(v___x_702_);
lean_del_object(v___x_698_);
v_a_940_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_838_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_838_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
}
}
}
}
v___jp_687_:
{
size_t v___x_689_; size_t v___x_690_; 
v___x_689_ = ((size_t)1ULL);
v___x_690_ = lean_usize_add(v_i_678_, v___x_689_);
v_i_678_ = v___x_690_;
v_b_679_ = v_a_688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___boxed(lean_object* v_as_965_, lean_object* v_sz_966_, lean_object* v_i_967_, lean_object* v_b_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
size_t v_sz_boxed_976_; size_t v_i_boxed_977_; lean_object* v_res_978_; 
v_sz_boxed_976_ = lean_unbox_usize(v_sz_966_);
lean_dec(v_sz_966_);
v_i_boxed_977_ = lean_unbox_usize(v_i_967_);
lean_dec(v_i_967_);
v_res_978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(v_as_965_, v_sz_boxed_976_, v_i_boxed_977_, v_b_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec_ref(v_as_965_);
return v_res_978_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14));
v___x_1021_ = l_String_toRawSubstring_x27(v___x_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25));
v___x_1046_ = l_String_toRawSubstring_x27(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35(void){
_start:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34));
v___x_1066_ = l_String_toRawSubstring_x27(v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0));
v___x_1114_ = l_String_toRawSubstring_x27(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76));
v___x_1181_ = l_String_toRawSubstring_x27(v___x_1180_);
return v___x_1181_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81));
v___x_1192_ = l_String_toRawSubstring_x27(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104(void){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1247_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103));
v___x_1248_ = l_String_toRawSubstring_x27(v___x_1247_);
return v___x_1248_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33));
v___x_1262_ = l_Lean_mkAtom(v___x_1261_);
return v___x_1262_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110));
v___x_1265_ = l_String_toRawSubstring_x27(v___x_1264_);
return v___x_1265_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126));
v___x_1307_ = l_String_toRawSubstring_x27(v___x_1306_);
return v___x_1307_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135));
v___x_1335_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137));
v___x_1336_ = l_Lean_Name_append(v___x_1335_, v___x_1334_);
return v___x_1336_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139));
v___x_1339_ = l_Lean_stringToMessageData(v___x_1338_);
return v___x_1339_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141));
v___x_1342_ = l_Lean_stringToMessageData(v___x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(lean_object* v_indVal_1345_, lean_object* v_params_1346_, lean_object* v_encInstBinders_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v___x_1355_; lean_object* v_toConstantVal_1356_; lean_object* v_toCold_1357_; lean_object* v_options_1358_; lean_object* v_env_1359_; lean_object* v_name_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1715_; 
v___x_1355_ = lean_st_ref_get(v_a_1353_);
v_toConstantVal_1356_ = lean_ctor_get(v_indVal_1345_, 0);
lean_inc_ref(v_toConstantVal_1356_);
lean_dec_ref(v_indVal_1345_);
v_toCold_1357_ = lean_ctor_get(v_a_1352_, 0);
v_options_1358_ = lean_ctor_get(v_toCold_1357_, 2);
v_env_1359_ = lean_ctor_get(v___x_1355_, 0);
lean_inc_ref(v_env_1359_);
lean_dec(v___x_1355_);
v_name_1360_ = lean_ctor_get(v_toConstantVal_1356_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_toConstantVal_1356_);
if (v_isSharedCheck_1715_ == 0)
{
lean_object* v_unused_1716_; lean_object* v_unused_1717_; 
v_unused_1716_ = lean_ctor_get(v_toConstantVal_1356_, 2);
lean_dec(v_unused_1716_);
v_unused_1717_ = lean_ctor_get(v_toConstantVal_1356_, 1);
lean_dec(v_unused_1717_);
v___x_1362_ = v_toConstantVal_1356_;
v_isShared_1363_ = v_isSharedCheck_1715_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_name_1360_);
lean_dec(v_toConstantVal_1356_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1715_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v_inheritedTraceOptions_1364_; uint8_t v_hasTrace_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; 
v_inheritedTraceOptions_1364_ = lean_ctor_get(v_toCold_1357_, 11);
v_hasTrace_1365_ = lean_ctor_get_uint8(v_options_1358_, sizeof(void*)*1);
v___x_1366_ = 0;
lean_inc(v_name_1360_);
v___x_1367_ = l_Lean_getStructureFieldsFlattened(v_env_1359_, v_name_1360_, v___x_1366_);
if (v_hasTrace_1365_ == 0)
{
v___y_1369_ = v_a_1348_;
v___y_1370_ = v_a_1349_;
v___y_1371_ = v_a_1350_;
v___y_1372_ = v_a_1351_;
v___y_1373_ = v_a_1352_;
v___y_1374_ = v_a_1353_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; uint8_t v___x_1695_; 
v___x_1693_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135));
v___x_1694_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138);
v___x_1695_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1364_, v_options_1358_, v___x_1694_);
if (v___x_1695_ == 0)
{
v___y_1369_ = v_a_1348_;
v___y_1370_ = v_a_1349_;
v___y_1371_ = v_a_1350_;
v___y_1372_ = v_a_1351_;
v___y_1373_ = v_a_1352_;
v___y_1374_ = v_a_1353_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1696_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140);
lean_inc(v_name_1360_);
v___x_1697_ = l_Lean_MessageData_ofName(v_name_1360_);
v___x_1698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142);
v___x_1700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1698_);
lean_ctor_set(v___x_1700_, 1, v___x_1699_);
lean_inc_ref(v_params_1346_);
v___x_1701_ = lean_array_to_list(v_params_1346_);
v___x_1702_ = lean_box(0);
v___x_1703_ = l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(v___x_1701_, v___x_1702_);
v___x_1704_ = l_Lean_MessageData_ofList(v___x_1703_);
v___x_1705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1700_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v___x_1693_, v___x_1705_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_dec_ref_known(v___x_1706_, 1);
v___y_1369_ = v_a_1348_;
v___y_1370_ = v_a_1349_;
v___y_1371_ = v_a_1350_;
v___y_1372_ = v_a_1351_;
v___y_1373_ = v_a_1352_;
v___y_1374_ = v_a_1353_;
goto v___jp_1368_;
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec_ref(v___x_1367_);
lean_del_object(v___x_1362_);
lean_dec(v_name_1360_);
lean_dec_ref(v_params_1346_);
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
}
v___jp_1368_:
{
lean_object* v___x_1375_; size_t v_sz_1376_; size_t v___x_1377_; lean_object* v___x_1378_; 
v___x_1375_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3));
v_sz_1376_ = lean_array_size(v___x_1367_);
v___x_1377_ = ((size_t)0ULL);
v___x_1378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(v___x_1367_, v_sz_1376_, v___x_1377_, v___x_1375_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
lean_dec_ref(v___x_1367_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v_snd_1380_; lean_object* v_snd_1381_; lean_object* v_fst_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1683_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v_snd_1380_ = lean_ctor_get(v_a_1379_, 1);
lean_inc(v_snd_1380_);
v_snd_1381_ = lean_ctor_get(v_snd_1380_, 1);
lean_inc(v_snd_1381_);
v_fst_1382_ = lean_ctor_get(v_a_1379_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_a_1379_);
if (v_isSharedCheck_1683_ == 0)
{
lean_object* v_unused_1684_; 
v_unused_1684_ = lean_ctor_get(v_a_1379_, 1);
lean_dec(v_unused_1684_);
v___x_1384_ = v_a_1379_;
v_isShared_1385_ = v_isSharedCheck_1683_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_fst_1382_);
lean_dec(v_a_1379_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1683_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v_fst_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1681_; 
v_fst_1386_ = lean_ctor_get(v_snd_1380_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_snd_1380_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; 
v_unused_1682_ = lean_ctor_get(v_snd_1380_, 1);
lean_dec(v_unused_1682_);
v___x_1388_ = v_snd_1380_;
v_isShared_1389_ = v_isSharedCheck_1681_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_fst_1386_);
lean_dec(v_snd_1380_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1681_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v_fst_1390_; lean_object* v_snd_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1680_; 
v_fst_1390_ = lean_ctor_get(v_snd_1381_, 0);
v_snd_1391_ = lean_ctor_get(v_snd_1381_, 1);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_snd_1381_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1393_ = v_snd_1381_;
v_isShared_1394_ = v_isSharedCheck_1680_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_snd_1391_);
lean_inc(v_fst_1390_);
lean_dec(v_snd_1381_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1680_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
size_t v_sz_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_30119__overap_1400_; lean_object* v___x_1401_; 
v_sz_1395_ = lean_array_size(v_params_1346_);
v___x_1396_ = l_unsafeCast___redArg(v_params_1346_);
lean_dec_ref(v_params_1346_);
v___x_1397_ = lean_box_usize(v_sz_1395_);
v___x_1398_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
v___x_1399_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed), 10, 3);
lean_closure_set(v___x_1399_, 0, v___x_1397_);
lean_closure_set(v___x_1399_, 1, v___x_1398_);
lean_closure_set(v___x_1399_, 2, v___x_1396_);
v___x_30119__overap_1400_ = l_unsafeCast___redArg(v___x_1399_);
lean_dec_ref(v___x_1399_);
lean_inc(v___y_1374_);
lean_inc_ref(v___y_1373_);
lean_inc(v___y_1372_);
lean_inc_ref(v___y_1371_);
lean_inc(v___y_1370_);
lean_inc_ref(v___y_1369_);
v___x_1401_ = lean_apply_7(v___x_30119__overap_1400_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, lean_box(0));
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_toCold_1402_; lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1671_; 
v_toCold_1402_ = lean_ctor_get(v___y_1373_, 0);
v_a_1403_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1405_ = v___x_1401_;
v_isShared_1406_ = v_isSharedCheck_1671_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1401_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1671_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v_ref_1407_; lean_object* v_quotContext_1408_; lean_object* v_currMacroScope_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1416_; 
v_ref_1407_ = lean_ctor_get(v___y_1373_, 2);
v_quotContext_1408_ = lean_ctor_get(v_toCold_1402_, 8);
v_currMacroScope_1409_ = lean_ctor_get(v_toCold_1402_, 9);
v___x_1410_ = l_Lean_SourceInfo_fromRef(v_ref_1407_, v___x_1366_);
v___x_1411_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_1412_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5));
v___x_1413_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
v___x_1414_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
lean_inc(v___x_1410_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 1);
lean_ctor_set(v___x_1362_, 2, v___x_1414_);
lean_ctor_set(v___x_1362_, 1, v___x_1411_);
lean_ctor_set(v___x_1362_, 0, v___x_1410_);
v___x_1416_ = v___x_1362_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
lean_inc_ref_n(v___x_1416_, 7);
lean_inc_n(v___x_1410_, 2);
v___x_1417_ = l_Lean_Syntax_node7(v___x_1410_, v___x_1413_, v___x_1416_, v___x_1416_, v___x_1416_, v___x_1416_, v___x_1416_, v___x_1416_, v___x_1416_);
v___x_1418_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8));
v___x_1419_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9));
v___x_1420_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11));
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 2);
lean_ctor_set(v___x_1393_, 1, v___x_1418_);
lean_ctor_set(v___x_1393_, 0, v___x_1410_);
v___x_1422_ = v___x_1393_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1669_, 1, v___x_1418_);
v___x_1422_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
lean_inc_n(v___x_1410_, 5);
v___x_1423_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1420_, v___x_1422_);
v___x_1424_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13));
v___x_1425_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15);
v___x_1426_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16));
lean_inc(v_currMacroScope_1409_);
lean_inc(v_quotContext_1408_);
v___x_1427_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1426_, v_currMacroScope_1409_);
v___x_1428_ = lean_box(0);
v___x_1429_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1410_);
lean_ctor_set(v___x_1429_, 1, v___x_1425_);
lean_ctor_set(v___x_1429_, 2, v___x_1427_);
lean_ctor_set(v___x_1429_, 3, v___x_1428_);
lean_inc_ref_n(v___x_1416_, 3);
lean_inc_ref(v___x_1429_);
v___x_1430_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1424_, v___x_1429_, v___x_1416_);
v___x_1431_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6));
v___x_1432_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1431_, v___x_1416_, v___x_1416_);
v___x_1433_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17));
if (v_isShared_1389_ == 0)
{
lean_ctor_set_tag(v___x_1388_, 2);
lean_ctor_set(v___x_1388_, 1, v___x_1433_);
lean_ctor_set(v___x_1388_, 0, v___x_1410_);
v___x_1435_ = v___x_1388_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; size_t v_sz_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1436_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19));
v___x_1437_ = l_Array_zip___redArg(v_fst_1382_, v_fst_1386_);
lean_dec(v_fst_1386_);
lean_dec(v_fst_1382_);
v_sz_1438_ = lean_array_size(v___x_1437_);
v___x_1439_ = l_unsafeCast___redArg(v___x_1437_);
lean_dec_ref(v___x_1437_);
lean_inc(v___x_1417_);
lean_inc_ref_n(v___x_1416_, 2);
lean_inc_n(v___x_1410_, 5);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(v___x_1410_, v___x_1416_, v___x_1417_, v_sz_1438_, v___x_1377_, v___x_1439_);
v___x_1441_ = l_unsafeCast___redArg(v___x_1440_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = l_Array_append___redArg(v___x_1414_, v___x_1441_);
lean_dec(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1410_);
lean_ctor_set(v___x_1443_, 1, v___x_1411_);
lean_ctor_set(v___x_1443_, 2, v___x_1442_);
v___x_1444_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1436_, v___x_1443_);
lean_inc_ref(v___x_1435_);
v___x_1445_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1435_, v___x_1416_, v___x_1444_);
v___x_1446_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21));
v___x_1447_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22));
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 2);
lean_ctor_set(v___x_1384_, 1, v___x_1447_);
lean_ctor_set(v___x_1384_, 0, v___x_1410_);
v___x_1449_ = v___x_1384_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; size_t v_sz_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; size_t v_sz_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
v___x_1450_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24));
v___x_1451_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26);
v___x_1452_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27));
lean_inc_n(v_currMacroScope_1409_, 12);
lean_inc_n(v_quotContext_1408_, 12);
v___x_1453_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1452_, v_currMacroScope_1409_);
v___x_1454_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32));
lean_inc_n(v___x_1410_, 102);
v___x_1455_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1410_);
lean_ctor_set(v___x_1455_, 1, v___x_1451_);
lean_ctor_set(v___x_1455_, 2, v___x_1453_);
lean_ctor_set(v___x_1455_, 3, v___x_1454_);
lean_inc_ref_n(v___x_1416_, 34);
v___x_1456_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1450_, v___x_1416_, v___x_1455_);
v___x_1457_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33));
v___x_1458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1410_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35);
v___x_1460_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36));
v___x_1461_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1460_, v_currMacroScope_1409_);
v___x_1462_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41));
v___x_1463_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1410_);
lean_ctor_set(v___x_1463_, 1, v___x_1459_);
lean_ctor_set(v___x_1463_, 2, v___x_1461_);
lean_ctor_set(v___x_1463_, 3, v___x_1462_);
v___x_1464_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1450_, v___x_1416_, v___x_1463_);
lean_inc_ref(v___x_1458_);
v___x_1465_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1456_, v___x_1458_, v___x_1464_);
v___x_1466_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1411_, v___x_1449_, v___x_1465_);
v___x_1467_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1446_, v___x_1466_);
v___x_1468_ = l_Lean_Syntax_node6(v___x_1410_, v___x_1419_, v___x_1423_, v___x_1430_, v___x_1432_, v___x_1416_, v___x_1445_, v___x_1467_);
lean_inc(v___x_1417_);
v___x_1469_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1412_, v___x_1417_, v___x_1468_);
v___x_1470_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42));
v___x_1471_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43));
v___x_1472_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44));
v___x_1473_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45));
v___x_1474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1410_);
lean_ctor_set(v___x_1474_, 1, v___x_1472_);
v___x_1475_ = l_unsafeCast___redArg(v_encInstBinders_1347_);
v___x_1476_ = l_Array_append___redArg(v___x_1414_, v___x_1475_);
lean_dec(v___x_1475_);
v___x_1477_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1410_);
lean_ctor_set(v___x_1477_, 1, v___x_1411_);
lean_ctor_set(v___x_1477_, 2, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1473_, v___x_1474_, v___x_1477_);
v___x_1479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1410_);
lean_ctor_set(v___x_1479_, 1, v___x_1470_);
v___x_1480_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46));
v___x_1481_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47));
v___x_1482_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49));
v___x_1483_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1482_, v___x_1416_);
v___x_1484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1410_);
lean_ctor_set(v___x_1484_, 1, v___x_1480_);
v___x_1485_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51));
v___x_1486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_1487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_1488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1410_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
v___x_1489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_1490_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52);
v___x_1491_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53));
v___x_1492_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1491_, v_currMacroScope_1409_);
v___x_1493_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56));
v___x_1494_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1410_);
lean_ctor_set(v___x_1494_, 1, v___x_1490_);
lean_ctor_set(v___x_1494_, 2, v___x_1492_);
lean_ctor_set(v___x_1494_, 3, v___x_1493_);
v___x_1495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_1496_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_1497_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
v___x_1498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1410_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_1500_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_1501_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59);
v___x_1502_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1501_, v_currMacroScope_1409_);
v___x_1503_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63));
v___x_1504_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1410_);
lean_ctor_set(v___x_1504_, 1, v___x_1500_);
lean_ctor_set(v___x_1504_, 2, v___x_1502_);
lean_ctor_set(v___x_1504_, 3, v___x_1503_);
v___x_1505_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1499_, v___x_1504_);
v___x_1506_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1496_, v___x_1498_, v___x_1505_);
v___x_1507_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65));
v___x_1508_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66));
v___x_1509_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1410_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = l_Lean_mkCIdent(v_name_1360_);
v___x_1511_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1507_, v___x_1509_, v___x_1510_);
v_sz_1512_ = lean_array_size(v_a_1403_);
v___x_1513_ = l_unsafeCast___redArg(v_a_1403_);
lean_dec(v_a_1403_);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_1512_, v___x_1377_, v___x_1513_);
v___x_1515_ = l_unsafeCast___redArg(v___x_1514_);
lean_dec_ref(v___x_1514_);
v___x_1516_ = l_unsafeCast___redArg(v___x_1515_);
lean_dec(v___x_1515_);
v___x_1517_ = l_Array_append___redArg(v___x_1414_, v___x_1516_);
lean_dec(v___x_1516_);
v___x_1518_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1410_);
lean_ctor_set(v___x_1518_, 1, v___x_1411_);
lean_ctor_set(v___x_1518_, 2, v___x_1517_);
v___x_1519_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1489_, v___x_1511_, v___x_1518_);
v___x_1520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_1521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1410_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1495_, v___x_1506_, v___x_1519_, v___x_1521_);
v___x_1523_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1522_);
v___x_1524_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1489_, v___x_1494_, v___x_1523_);
lean_inc_ref_n(v___x_1488_, 2);
v___x_1525_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1486_, v___x_1488_, v___x_1524_);
v___x_1526_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1485_, v___x_1416_, v___x_1525_);
v___x_1527_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68));
v___x_1528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_1529_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1410_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70));
v___x_1531_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71));
v___x_1532_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1410_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73));
v___x_1534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_1535_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_1536_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_1537_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_1538_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1537_, v_currMacroScope_1409_);
v___x_1539_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75));
v___x_1540_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1410_);
lean_ctor_set(v___x_1540_, 1, v___x_1536_);
lean_ctor_set(v___x_1540_, 2, v___x_1538_);
lean_ctor_set(v___x_1540_, 3, v___x_1539_);
v___x_1541_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1535_, v___x_1540_, v___x_1416_);
v___x_1542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_1543_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77);
v___x_1544_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78));
v___x_1545_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1544_, v_currMacroScope_1409_);
v___x_1546_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1410_);
lean_ctor_set(v___x_1546_, 1, v___x_1543_);
lean_ctor_set(v___x_1546_, 2, v___x_1545_);
lean_ctor_set(v___x_1546_, 3, v___x_1428_);
lean_inc_ref(v___x_1546_);
lean_inc_ref_n(v___x_1529_, 4);
v___x_1547_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1542_, v___x_1529_, v___x_1416_, v___x_1546_);
v___x_1548_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1416_, v___x_1416_, v___x_1547_);
v___x_1549_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1534_, v___x_1541_, v___x_1548_);
v___x_1550_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_1551_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
v___x_1552_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1551_, v_currMacroScope_1409_);
v___x_1553_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80));
v___x_1554_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1410_);
lean_ctor_set(v___x_1554_, 1, v___x_1550_);
lean_ctor_set(v___x_1554_, 2, v___x_1552_);
lean_ctor_set(v___x_1554_, 3, v___x_1553_);
v___x_1555_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1535_, v___x_1554_, v___x_1416_);
v___x_1556_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82);
v___x_1557_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83));
v___x_1558_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1557_, v_currMacroScope_1409_);
v___x_1559_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1410_);
lean_ctor_set(v___x_1559_, 1, v___x_1556_);
lean_ctor_set(v___x_1559_, 2, v___x_1558_);
lean_ctor_set(v___x_1559_, 3, v___x_1428_);
lean_inc_ref(v___x_1559_);
v___x_1560_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1542_, v___x_1529_, v___x_1416_, v___x_1559_);
v___x_1561_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1416_, v___x_1416_, v___x_1560_);
v___x_1562_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1534_, v___x_1555_, v___x_1561_);
v___x_1563_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1549_, v___x_1458_, v___x_1562_);
v___x_1564_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1533_, v___x_1563_);
v___x_1565_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85));
v___x_1566_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1565_, v___x_1416_);
v___x_1567_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86));
v___x_1568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1410_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
lean_inc_ref_n(v___x_1568_, 2);
lean_inc_n(v___x_1566_, 2);
lean_inc_ref_n(v___x_1532_, 2);
v___x_1569_ = l_Lean_Syntax_node6(v___x_1410_, v___x_1530_, v___x_1532_, v___x_1416_, v___x_1564_, v___x_1566_, v___x_1416_, v___x_1568_);
v___x_1570_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89));
v___x_1571_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1570_, v___x_1416_, v___x_1416_);
v___x_1572_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91));
v___x_1573_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93));
v___x_1574_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95));
v___x_1575_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97));
v___x_1576_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99));
v___x_1577_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1576_, v___x_1546_);
v___x_1578_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_1579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_1580_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1579_, v_currMacroScope_1409_);
v___x_1581_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1410_);
lean_ctor_set(v___x_1581_, 1, v___x_1578_);
lean_ctor_set(v___x_1581_, 2, v___x_1580_);
lean_ctor_set(v___x_1581_, 3, v___x_1428_);
lean_inc_ref(v___x_1581_);
v___x_1582_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1581_);
v___x_1583_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101));
v___x_1584_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102));
v___x_1585_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1410_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
v___x_1586_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104);
v___x_1587_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105));
v___x_1588_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1587_, v_currMacroScope_1409_);
v___x_1589_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108));
v___x_1590_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1410_);
lean_ctor_set(v___x_1590_, 1, v___x_1586_);
lean_ctor_set(v___x_1590_, 2, v___x_1588_);
lean_ctor_set(v___x_1590_, 3, v___x_1589_);
v_sz_1591_ = lean_array_size(v_fst_1390_);
v___x_1592_ = l_unsafeCast___redArg(v_fst_1390_);
lean_dec(v_fst_1390_);
v___x_1593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_1591_, v___x_1377_, v___x_1592_);
v___x_1594_ = l_unsafeCast___redArg(v___x_1593_);
lean_dec_ref(v___x_1593_);
v___x_1595_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109);
v___x_1596_ = l_Lean_mkSepArray(v___x_1594_, v___x_1595_);
lean_dec(v___x_1594_);
v___x_1597_ = l_Array_append___redArg(v___x_1414_, v___x_1596_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1410_);
lean_ctor_set(v___x_1598_, 1, v___x_1411_);
lean_ctor_set(v___x_1598_, 2, v___x_1597_);
v___x_1599_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1533_, v___x_1598_);
lean_inc_ref(v___x_1429_);
v___x_1600_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1411_, v___x_1488_, v___x_1429_);
v___x_1601_ = l_Lean_Syntax_node6(v___x_1410_, v___x_1530_, v___x_1532_, v___x_1416_, v___x_1599_, v___x_1566_, v___x_1600_, v___x_1568_);
v___x_1602_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1601_);
v___x_1603_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1489_, v___x_1590_, v___x_1602_);
v___x_1604_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1603_);
lean_inc_ref(v___x_1585_);
v___x_1605_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1583_, v___x_1585_, v___x_1604_);
v___x_1606_ = l_Lean_Syntax_node5(v___x_1410_, v___x_1575_, v___x_1577_, v___x_1582_, v___x_1416_, v___x_1529_, v___x_1605_);
v___x_1607_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1574_, v___x_1606_);
lean_inc_n(v___x_1571_, 2);
v___x_1608_ = l_Lean_Syntax_node4(v___x_1410_, v___x_1573_, v___x_1416_, v___x_1416_, v___x_1607_, v___x_1571_);
v___x_1609_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1576_, v___x_1559_);
v___x_1610_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111);
v___x_1611_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112));
v___x_1612_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1611_, v_currMacroScope_1409_);
v___x_1613_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1410_);
lean_ctor_set(v___x_1613_, 1, v___x_1610_);
lean_ctor_set(v___x_1613_, 2, v___x_1612_);
lean_ctor_set(v___x_1613_, 3, v___x_1428_);
v___x_1614_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1613_);
v___x_1615_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113));
v___x_1616_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114));
v___x_1617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1410_);
lean_ctor_set(v___x_1617_, 1, v___x_1615_);
v___x_1618_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116));
v___x_1619_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118));
v___x_1620_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120));
v___x_1621_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121));
v___x_1622_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1410_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123));
v___x_1624_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1623_, v___x_1416_);
v___x_1625_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125));
v___x_1626_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1486_, v___x_1488_, v___x_1429_);
v___x_1627_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1626_);
v___x_1628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_1629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1410_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_1631_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127);
v___x_1632_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128));
v___x_1633_ = l_Lean_addMacroScope(v_quotContext_1408_, v___x_1632_, v_currMacroScope_1409_);
v___x_1634_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131));
v___x_1635_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1410_);
lean_ctor_set(v___x_1635_, 1, v___x_1631_);
lean_ctor_set(v___x_1635_, 2, v___x_1633_);
lean_ctor_set(v___x_1635_, 3, v___x_1634_);
lean_inc(v___x_1614_);
v___x_1636_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1489_, v___x_1635_, v___x_1614_);
v___x_1637_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1630_, v___x_1636_);
v___x_1638_ = l_Lean_Syntax_node4(v___x_1410_, v___x_1625_, v___x_1581_, v___x_1627_, v___x_1629_, v___x_1637_);
v___x_1639_ = l_Lean_Syntax_node4(v___x_1410_, v___x_1620_, v___x_1622_, v___x_1416_, v___x_1624_, v___x_1638_);
v___x_1640_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1619_, v___x_1639_, v___x_1416_);
v___x_1641_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133));
v___x_1642_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_1457_, v_snd_1391_);
lean_dec(v_snd_1391_);
v___x_1643_ = l_Array_append___redArg(v___x_1414_, v___x_1642_);
lean_dec_ref(v___x_1642_);
v___x_1644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1410_);
lean_ctor_set(v___x_1644_, 1, v___x_1411_);
lean_ctor_set(v___x_1644_, 2, v___x_1643_);
v___x_1645_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1533_, v___x_1644_);
v___x_1646_ = l_Lean_Syntax_node6(v___x_1410_, v___x_1530_, v___x_1532_, v___x_1416_, v___x_1645_, v___x_1566_, v___x_1416_, v___x_1568_);
v___x_1647_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1646_);
v___x_1648_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1641_, v___x_1585_, v___x_1647_);
v___x_1649_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1619_, v___x_1648_, v___x_1416_);
v___x_1650_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1411_, v___x_1640_, v___x_1649_);
v___x_1651_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1618_, v___x_1650_);
v___x_1652_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1616_, v___x_1617_, v___x_1651_);
v___x_1653_ = l_Lean_Syntax_node5(v___x_1410_, v___x_1575_, v___x_1609_, v___x_1614_, v___x_1416_, v___x_1529_, v___x_1652_);
v___x_1654_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1574_, v___x_1653_);
v___x_1655_ = l_Lean_Syntax_node4(v___x_1410_, v___x_1573_, v___x_1416_, v___x_1416_, v___x_1654_, v___x_1571_);
v___x_1656_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1411_, v___x_1608_, v___x_1416_, v___x_1655_);
v___x_1657_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1572_, v___x_1435_, v___x_1656_, v___x_1416_);
v___x_1658_ = l_Lean_Syntax_node1(v___x_1410_, v___x_1411_, v___x_1657_);
v___x_1659_ = l_Lean_Syntax_node4(v___x_1410_, v___x_1527_, v___x_1529_, v___x_1569_, v___x_1571_, v___x_1658_);
v___x_1660_ = l_Lean_Syntax_node6(v___x_1410_, v___x_1481_, v___x_1483_, v___x_1484_, v___x_1416_, v___x_1416_, v___x_1526_, v___x_1659_);
v___x_1661_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1412_, v___x_1417_, v___x_1660_);
v___x_1662_ = l_Lean_Syntax_node3(v___x_1410_, v___x_1471_, v___x_1478_, v___x_1479_, v___x_1661_);
v___x_1663_ = l_Lean_Syntax_node2(v___x_1410_, v___x_1411_, v___x_1469_, v___x_1662_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1663_);
v___x_1665_ = v___x_1405_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
lean_del_object(v___x_1393_);
lean_dec(v_snd_1391_);
lean_dec(v_fst_1390_);
lean_del_object(v___x_1388_);
lean_dec(v_fst_1386_);
lean_del_object(v___x_1384_);
lean_dec(v_fst_1382_);
lean_del_object(v___x_1362_);
lean_dec(v_name_1360_);
v_a_1672_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1401_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1401_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_del_object(v___x_1362_);
lean_dec(v_name_1360_);
lean_dec_ref(v_params_1346_);
v_a_1685_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1378_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1378_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed(lean_object* v_indVal_1718_, lean_object* v_params_1719_, lean_object* v_encInstBinders_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(v_indVal_1718_, v_params_1719_, v_encInstBinders_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_);
lean_dec(v_a_1726_);
lean_dec_ref(v_a_1725_);
lean_dec(v_a_1724_);
lean_dec_ref(v_a_1723_);
lean_dec(v_a_1722_);
lean_dec_ref(v_a_1721_);
lean_dec_ref(v_encInstBinders_1720_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(lean_object* v_00_u03b1_1729_, lean_object* v_msg_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v_msg_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___boxed(lean_object* v_00_u03b1_1739_, lean_object* v_msg_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(v_00_u03b1_1739_, v_msg_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(lean_object* v_cls_1749_, lean_object* v_msg_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_1749_, v_msg_1750_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___boxed(lean_object* v_cls_1759_, lean_object* v_msg_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(v_cls_1759_, v_msg_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(lean_object* v_msgData_1769_, lean_object* v_macroStack_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_msgData_1769_, v_macroStack_1770_, v___y_1775_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___boxed(lean_object* v_msgData_1779_, lean_object* v_macroStack_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(v_msgData_1779_, v_macroStack_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
return v_res_1788_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_unsigned_to_nat(0u);
v___x_1790_ = l_Lean_Parser_termParser(v___x_1789_);
return v___x_1790_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0);
v___x_1792_ = l_Lean_Parser_Term_matchAlt(v___x_1791_);
return v___x_1792_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm(void){
_start:
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(lean_object* v_s_1794_){
_start:
{
lean_inc(v_s_1794_);
return v_s_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed(lean_object* v_s_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(v_s_1795_);
lean_dec(v_s_1795_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(lean_object* v___x_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v_toCold_1803_; lean_object* v_quotContext_1804_; lean_object* v_currMacroScope_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v_toCold_1803_ = lean_ctor_get(v___y_1800_, 0);
lean_inc_ref(v_toCold_1803_);
lean_dec_ref(v___y_1800_);
v_quotContext_1804_ = lean_ctor_get(v_toCold_1803_, 8);
lean_inc(v_quotContext_1804_);
v_currMacroScope_1805_ = lean_ctor_get(v_toCold_1803_, 9);
lean_inc(v_currMacroScope_1805_);
lean_dec_ref(v_toCold_1803_);
v___x_1806_ = l_Lean_addMacroScope(v_quotContext_1804_, v___x_1799_, v_currMacroScope_1805_);
v___x_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed(lean_object* v___x_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(v___x_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v___f_1821_; lean_object* v___x_1822_; 
v___f_1821_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2));
v___x_1822_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_1821_, v___y_1818_, v___y_1819_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___boxed(lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1831_, v___y_1832_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___boxed(lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(lean_object* v_k_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v_b_1846_, lean_object* v_c_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v___x_1853_; 
lean_inc(v___y_1851_);
lean_inc_ref(v___y_1850_);
lean_inc(v___y_1849_);
lean_inc_ref(v___y_1848_);
lean_inc(v___y_1845_);
lean_inc_ref(v___y_1844_);
v___x_1853_ = lean_apply_9(v_k_1843_, v_b_1846_, v_c_1847_, v___y_1844_, v___y_1845_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, lean_box(0));
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed(lean_object* v_k_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v_b_1857_, lean_object* v_c_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(v_k_1854_, v___y_1855_, v___y_1856_, v_b_1857_, v_c_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(lean_object* v_type_1865_, lean_object* v_k_1866_, uint8_t v_cleanupAnnotations_1867_, uint8_t v_whnfType_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v___f_1876_; lean_object* v___x_1877_; 
lean_inc(v___y_1870_);
lean_inc_ref(v___y_1869_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1876_, 0, v_k_1866_);
lean_closure_set(v___f_1876_, 1, v___y_1869_);
lean_closure_set(v___f_1876_, 2, v___y_1870_);
v___x_1877_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1865_, v___f_1876_, v_cleanupAnnotations_1867_, v_whnfType_1868_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
if (lean_obj_tag(v___x_1877_) == 0)
{
return v___x_1877_;
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1877_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1877_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___boxed(lean_object* v_type_1886_, lean_object* v_k_1887_, lean_object* v_cleanupAnnotations_1888_, lean_object* v_whnfType_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1897_; uint8_t v_whnfType_boxed_1898_; lean_object* v_res_1899_; 
v_cleanupAnnotations_boxed_1897_ = lean_unbox(v_cleanupAnnotations_1888_);
v_whnfType_boxed_1898_ = lean_unbox(v_whnfType_1889_);
v_res_1899_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_type_1886_, v_k_1887_, v_cleanupAnnotations_boxed_1897_, v_whnfType_boxed_1898_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(lean_object* v_00_u03b1_1900_, lean_object* v_type_1901_, lean_object* v_k_1902_, uint8_t v_cleanupAnnotations_1903_, uint8_t v_whnfType_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_type_1901_, v_k_1902_, v_cleanupAnnotations_1903_, v_whnfType_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed(lean_object* v_00_u03b1_1913_, lean_object* v_type_1914_, lean_object* v_k_1915_, lean_object* v_cleanupAnnotations_1916_, lean_object* v_whnfType_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1925_; uint8_t v_whnfType_boxed_1926_; lean_object* v_res_1927_; 
v_cleanupAnnotations_boxed_1925_ = lean_unbox(v_cleanupAnnotations_1916_);
v_whnfType_boxed_1926_ = lean_unbox(v_whnfType_1917_);
v_res_1927_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(v_00_u03b1_1913_, v_type_1914_, v_k_1915_, v_cleanupAnnotations_boxed_1925_, v_whnfType_boxed_1926_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(size_t v_sz_1928_, size_t v_i_1929_, lean_object* v_bs_1930_){
_start:
{
uint8_t v___x_1931_; 
v___x_1931_ = lean_usize_dec_lt(v_i_1929_, v_sz_1928_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; 
v___x_1932_ = l_unsafeCast___redArg(v_bs_1930_);
lean_dec_ref(v_bs_1930_);
return v___x_1932_;
}
else
{
lean_object* v_v_1933_; lean_object* v___x_1934_; lean_object* v_bs_x27_1935_; lean_object* v___x_1936_; size_t v___x_1937_; size_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_v_1933_ = lean_array_uget(v_bs_1930_, v_i_1929_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v_bs_x27_1935_ = lean_array_uset(v_bs_1930_, v_i_1929_, v___x_1934_);
v___x_1936_ = l_unsafeCast___redArg(v_v_1933_);
lean_dec(v_v_1933_);
v___x_1937_ = ((size_t)1ULL);
v___x_1938_ = lean_usize_add(v_i_1929_, v___x_1937_);
v___x_1939_ = l_unsafeCast___redArg(v___x_1936_);
lean_dec(v___x_1936_);
v___x_1940_ = lean_array_uset(v_bs_x27_1935_, v_i_1929_, v___x_1939_);
v_i_1929_ = v___x_1938_;
v_bs_1930_ = v___x_1940_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15___boxed(lean_object* v_sz_1942_, lean_object* v_i_1943_, lean_object* v_bs_1944_){
_start:
{
size_t v_sz_boxed_1945_; size_t v_i_boxed_1946_; lean_object* v_res_1947_; 
v_sz_boxed_1945_ = lean_unbox_usize(v_sz_1942_);
lean_dec(v_sz_1942_);
v_i_boxed_1946_ = lean_unbox_usize(v_i_1943_);
lean_dec(v_i_1943_);
v_res_1947_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(v_sz_boxed_1945_, v_i_boxed_1946_, v_bs_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(size_t v_sz_1948_, size_t v_i_1949_, lean_object* v_bs_1950_){
_start:
{
uint8_t v___x_1951_; 
v___x_1951_ = lean_usize_dec_lt(v_i_1949_, v_sz_1948_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; 
v___x_1952_ = l_unsafeCast___redArg(v_bs_1950_);
lean_dec_ref(v_bs_1950_);
return v___x_1952_;
}
else
{
lean_object* v_v_1953_; lean_object* v___x_1954_; lean_object* v_bs_x27_1955_; lean_object* v___x_1956_; size_t v___x_1957_; size_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v_v_1953_ = lean_array_uget(v_bs_1950_, v_i_1949_);
v___x_1954_ = lean_unsigned_to_nat(0u);
v_bs_x27_1955_ = lean_array_uset(v_bs_1950_, v_i_1949_, v___x_1954_);
v___x_1956_ = l_unsafeCast___redArg(v_v_1953_);
lean_dec(v_v_1953_);
v___x_1957_ = ((size_t)1ULL);
v___x_1958_ = lean_usize_add(v_i_1949_, v___x_1957_);
v___x_1959_ = l_unsafeCast___redArg(v___x_1956_);
lean_dec(v___x_1956_);
v___x_1960_ = lean_array_uset(v_bs_x27_1955_, v_i_1949_, v___x_1959_);
v___x_1961_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(v_sz_1948_, v___x_1958_, v___x_1960_);
return v___x_1961_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12___boxed(lean_object* v_sz_1962_, lean_object* v_i_1963_, lean_object* v_bs_1964_){
_start:
{
size_t v_sz_boxed_1965_; size_t v_i_boxed_1966_; lean_object* v_res_1967_; 
v_sz_boxed_1965_ = lean_unbox_usize(v_sz_1962_);
lean_dec(v_sz_1962_);
v_i_boxed_1966_ = lean_unbox_usize(v_i_1963_);
lean_dec(v_i_1963_);
v_res_1967_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_boxed_1965_, v_i_boxed_1966_, v_bs_1964_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(size_t v_sz_1968_, size_t v_i_1969_, lean_object* v_bs_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
uint8_t v___x_1978_; 
v___x_1978_ = lean_usize_dec_lt(v_i_1969_, v_sz_1968_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = l_unsafeCast___redArg(v_bs_1970_);
lean_dec_ref(v_bs_1970_);
v___x_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
return v___x_1980_;
}
else
{
lean_object* v___x_1981_; lean_object* v_bs_x27_1982_; lean_object* v___x_1983_; 
v___x_1981_ = lean_unsigned_to_nat(0u);
v_bs_x27_1982_ = lean_array_uset(v_bs_1970_, v_i_1969_, v___x_1981_);
v___x_1983_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1975_, v___y_1976_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1985_; size_t v___x_1986_; size_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v___x_1985_ = l_Lean_mkIdent(v_a_1984_);
v___x_1986_ = ((size_t)1ULL);
v___x_1987_ = lean_usize_add(v_i_1969_, v___x_1986_);
v___x_1988_ = l_unsafeCast___redArg(v___x_1985_);
lean_dec(v___x_1985_);
v___x_1989_ = lean_array_uset(v_bs_x27_1982_, v_i_1969_, v___x_1988_);
v_i_1969_ = v___x_1987_;
v_bs_1970_ = v___x_1989_;
goto _start;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_dec_ref(v_bs_x27_1982_);
v_a_1991_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1983_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1983_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5___boxed(lean_object* v_sz_1999_, lean_object* v_i_2000_, lean_object* v_bs_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
size_t v_sz_boxed_2009_; size_t v_i_boxed_2010_; lean_object* v_res_2011_; 
v_sz_boxed_2009_ = lean_unbox_usize(v_sz_1999_);
lean_dec(v_sz_1999_);
v_i_boxed_2010_ = lean_unbox_usize(v_i_2000_);
lean_dec(v_i_2000_);
v_res_2011_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(v_sz_boxed_2009_, v_i_boxed_2010_, v_bs_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(size_t v_sz_2012_, size_t v_i_2013_, lean_object* v_bs_2014_){
_start:
{
uint8_t v___x_2015_; 
v___x_2015_ = lean_usize_dec_lt(v_i_2013_, v_sz_2012_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
v___x_2016_ = l_unsafeCast___redArg(v_bs_2014_);
lean_dec_ref(v_bs_2014_);
return v___x_2016_;
}
else
{
lean_object* v_v_2017_; lean_object* v___x_2018_; lean_object* v_bs_x27_2019_; lean_object* v___x_2020_; size_t v___x_2021_; size_t v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_v_2017_ = lean_array_uget(v_bs_2014_, v_i_2013_);
v___x_2018_ = lean_unsigned_to_nat(0u);
v_bs_x27_2019_ = lean_array_uset(v_bs_2014_, v_i_2013_, v___x_2018_);
v___x_2020_ = l_unsafeCast___redArg(v_v_2017_);
lean_dec(v_v_2017_);
v___x_2021_ = ((size_t)1ULL);
v___x_2022_ = lean_usize_add(v_i_2013_, v___x_2021_);
v___x_2023_ = l_unsafeCast___redArg(v___x_2020_);
lean_dec(v___x_2020_);
v___x_2024_ = lean_array_uset(v_bs_x27_2019_, v_i_2013_, v___x_2023_);
v_i_2013_ = v___x_2022_;
v_bs_2014_ = v___x_2024_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3___boxed(lean_object* v_sz_2026_, lean_object* v_i_2027_, lean_object* v_bs_2028_){
_start:
{
size_t v_sz_boxed_2029_; size_t v_i_boxed_2030_; lean_object* v_res_2031_; 
v_sz_boxed_2029_ = lean_unbox_usize(v_sz_2026_);
lean_dec(v_sz_2026_);
v_i_boxed_2030_ = lean_unbox_usize(v_i_2027_);
lean_dec(v_i_2027_);
v_res_2031_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(v_sz_boxed_2029_, v_i_boxed_2030_, v_bs_2028_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(size_t v_sz_2032_, size_t v_i_2033_, lean_object* v_bs_2034_, lean_object* v___y_2035_){
_start:
{
uint8_t v___x_2037_; 
v___x_2037_ = lean_usize_dec_lt(v_i_2033_, v_sz_2032_);
if (v___x_2037_ == 0)
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = l_unsafeCast___redArg(v_bs_2034_);
lean_dec_ref(v_bs_2034_);
v___x_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
return v___x_2039_;
}
else
{
lean_object* v_toCold_2040_; lean_object* v_ref_2041_; lean_object* v_quotContext_2042_; lean_object* v_currMacroScope_2043_; lean_object* v_v_2044_; lean_object* v___x_2045_; lean_object* v_bs_x27_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; size_t v___x_2065_; size_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v_toCold_2040_ = lean_ctor_get(v___y_2035_, 0);
v_ref_2041_ = lean_ctor_get(v___y_2035_, 2);
v_quotContext_2042_ = lean_ctor_get(v_toCold_2040_, 8);
v_currMacroScope_2043_ = lean_ctor_get(v_toCold_2040_, 9);
v_v_2044_ = lean_array_uget(v_bs_2034_, v_i_2033_);
v___x_2045_ = lean_unsigned_to_nat(0u);
v_bs_x27_2046_ = lean_array_uset(v_bs_2034_, v_i_2033_, v___x_2045_);
v___x_2047_ = l_unsafeCast___redArg(v_v_2044_);
lean_dec(v_v_2044_);
v___x_2048_ = 0;
v___x_2049_ = l_Lean_SourceInfo_fromRef(v_ref_2041_, v___x_2048_);
v___x_2050_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2051_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2049_, 5);
v___x_2052_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2049_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2054_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2055_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_2056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_2043_);
lean_inc(v_quotContext_2042_);
v___x_2057_ = l_Lean_addMacroScope(v_quotContext_2042_, v___x_2056_, v_currMacroScope_2043_);
v___x_2058_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_2059_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2049_);
lean_ctor_set(v___x_2059_, 1, v___x_2055_);
lean_ctor_set(v___x_2059_, 2, v___x_2057_);
lean_ctor_set(v___x_2059_, 3, v___x_2058_);
v___x_2060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2061_ = l_Lean_Syntax_node1(v___x_2049_, v___x_2060_, v___x_2047_);
v___x_2062_ = l_Lean_Syntax_node2(v___x_2049_, v___x_2054_, v___x_2059_, v___x_2061_);
v___x_2063_ = l_Lean_Syntax_node1(v___x_2049_, v___x_2053_, v___x_2062_);
v___x_2064_ = l_Lean_Syntax_node2(v___x_2049_, v___x_2050_, v___x_2052_, v___x_2063_);
v___x_2065_ = ((size_t)1ULL);
v___x_2066_ = lean_usize_add(v_i_2033_, v___x_2065_);
v___x_2067_ = l_unsafeCast___redArg(v___x_2064_);
lean_dec(v___x_2064_);
v___x_2068_ = lean_array_uset(v_bs_x27_2046_, v_i_2033_, v___x_2067_);
v_i_2033_ = v___x_2066_;
v_bs_2034_ = v___x_2068_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg___boxed(lean_object* v_sz_2070_, lean_object* v_i_2071_, lean_object* v_bs_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
size_t v_sz_boxed_2075_; size_t v_i_boxed_2076_; lean_object* v_res_2077_; 
v_sz_boxed_2075_ = lean_unbox_usize(v_sz_2070_);
lean_dec(v_sz_2070_);
v_i_boxed_2076_ = lean_unbox_usize(v_i_2071_);
lean_dec(v_i_2071_);
v_res_2077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_boxed_2075_, v_i_boxed_2076_, v_bs_2072_, v___y_2073_);
lean_dec_ref(v___y_2073_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(size_t v_sz_2078_, size_t v_i_2079_, lean_object* v_bs_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_usize_dec_lt(v_i_2079_, v_sz_2078_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = l_unsafeCast___redArg(v_bs_2080_);
lean_dec_ref(v_bs_2080_);
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
return v___x_2090_;
}
else
{
lean_object* v_toCold_2091_; lean_object* v_ref_2092_; lean_object* v_quotContext_2093_; lean_object* v_currMacroScope_2094_; lean_object* v_v_2095_; lean_object* v___x_2096_; lean_object* v_bs_x27_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; size_t v___x_2116_; size_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v_toCold_2091_ = lean_ctor_get(v___y_2085_, 0);
v_ref_2092_ = lean_ctor_get(v___y_2085_, 2);
v_quotContext_2093_ = lean_ctor_get(v_toCold_2091_, 8);
v_currMacroScope_2094_ = lean_ctor_get(v_toCold_2091_, 9);
v_v_2095_ = lean_array_uget(v_bs_2080_, v_i_2079_);
v___x_2096_ = lean_unsigned_to_nat(0u);
v_bs_x27_2097_ = lean_array_uset(v_bs_2080_, v_i_2079_, v___x_2096_);
v___x_2098_ = l_unsafeCast___redArg(v_v_2095_);
lean_dec(v_v_2095_);
v___x_2099_ = 0;
v___x_2100_ = l_Lean_SourceInfo_fromRef(v_ref_2092_, v___x_2099_);
v___x_2101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2100_, 5);
v___x_2103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2100_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2106_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_2107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_2094_);
lean_inc(v_quotContext_2093_);
v___x_2108_ = l_Lean_addMacroScope(v_quotContext_2093_, v___x_2107_, v_currMacroScope_2094_);
v___x_2109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_2110_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2100_);
lean_ctor_set(v___x_2110_, 1, v___x_2106_);
lean_ctor_set(v___x_2110_, 2, v___x_2108_);
lean_ctor_set(v___x_2110_, 3, v___x_2109_);
v___x_2111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2112_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2111_, v___x_2098_);
v___x_2113_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2105_, v___x_2110_, v___x_2112_);
v___x_2114_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2104_, v___x_2113_);
v___x_2115_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2101_, v___x_2103_, v___x_2114_);
v___x_2116_ = ((size_t)1ULL);
v___x_2117_ = lean_usize_add(v_i_2079_, v___x_2116_);
v___x_2118_ = l_unsafeCast___redArg(v___x_2115_);
lean_dec(v___x_2115_);
v___x_2119_ = lean_array_uset(v_bs_x27_2097_, v_i_2079_, v___x_2118_);
v___x_2120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_2078_, v___x_2117_, v___x_2119_, v___y_2085_);
return v___x_2120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8___boxed(lean_object* v_sz_2121_, lean_object* v_i_2122_, lean_object* v_bs_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
size_t v_sz_boxed_2131_; size_t v_i_boxed_2132_; lean_object* v_res_2133_; 
v_sz_boxed_2131_ = lean_unbox_usize(v_sz_2121_);
lean_dec(v_sz_2121_);
v_i_boxed_2132_ = lean_unbox_usize(v_i_2122_);
lean_dec(v_i_2122_);
v_res_2133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(v_sz_boxed_2131_, v_i_boxed_2132_, v_bs_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(size_t v_sz_2134_, size_t v_i_2135_, lean_object* v_bs_2136_, lean_object* v___y_2137_){
_start:
{
uint8_t v___x_2139_; 
v___x_2139_ = lean_usize_dec_lt(v_i_2135_, v_sz_2134_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = l_unsafeCast___redArg(v_bs_2136_);
lean_dec_ref(v_bs_2136_);
v___x_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
return v___x_2141_;
}
else
{
lean_object* v_toCold_2142_; lean_object* v_ref_2143_; lean_object* v_quotContext_2144_; lean_object* v_currMacroScope_2145_; lean_object* v_v_2146_; lean_object* v___x_2147_; lean_object* v_bs_x27_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; size_t v___x_2167_; size_t v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_toCold_2142_ = lean_ctor_get(v___y_2137_, 0);
v_ref_2143_ = lean_ctor_get(v___y_2137_, 2);
v_quotContext_2144_ = lean_ctor_get(v_toCold_2142_, 8);
v_currMacroScope_2145_ = lean_ctor_get(v_toCold_2142_, 9);
v_v_2146_ = lean_array_uget(v_bs_2136_, v_i_2135_);
v___x_2147_ = lean_unsigned_to_nat(0u);
v_bs_x27_2148_ = lean_array_uset(v_bs_2136_, v_i_2135_, v___x_2147_);
v___x_2149_ = l_unsafeCast___redArg(v_v_2146_);
lean_dec(v_v_2146_);
v___x_2150_ = 0;
v___x_2151_ = l_Lean_SourceInfo_fromRef(v_ref_2143_, v___x_2150_);
v___x_2152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2151_, 5);
v___x_2154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2151_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
v___x_2155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2157_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_2158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc(v_currMacroScope_2145_);
lean_inc(v_quotContext_2144_);
v___x_2159_ = l_Lean_addMacroScope(v_quotContext_2144_, v___x_2158_, v_currMacroScope_2145_);
v___x_2160_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_2161_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2151_);
lean_ctor_set(v___x_2161_, 1, v___x_2157_);
lean_ctor_set(v___x_2161_, 2, v___x_2159_);
lean_ctor_set(v___x_2161_, 3, v___x_2160_);
v___x_2162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2163_ = l_Lean_Syntax_node1(v___x_2151_, v___x_2162_, v___x_2149_);
v___x_2164_ = l_Lean_Syntax_node2(v___x_2151_, v___x_2156_, v___x_2161_, v___x_2163_);
v___x_2165_ = l_Lean_Syntax_node1(v___x_2151_, v___x_2155_, v___x_2164_);
v___x_2166_ = l_Lean_Syntax_node2(v___x_2151_, v___x_2152_, v___x_2154_, v___x_2165_);
v___x_2167_ = ((size_t)1ULL);
v___x_2168_ = lean_usize_add(v_i_2135_, v___x_2167_);
v___x_2169_ = l_unsafeCast___redArg(v___x_2166_);
lean_dec(v___x_2166_);
v___x_2170_ = lean_array_uset(v_bs_x27_2148_, v_i_2135_, v___x_2169_);
v_i_2135_ = v___x_2168_;
v_bs_2136_ = v___x_2170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg___boxed(lean_object* v_sz_2172_, lean_object* v_i_2173_, lean_object* v_bs_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_){
_start:
{
size_t v_sz_boxed_2177_; size_t v_i_boxed_2178_; lean_object* v_res_2179_; 
v_sz_boxed_2177_ = lean_unbox_usize(v_sz_2172_);
lean_dec(v_sz_2172_);
v_i_boxed_2178_ = lean_unbox_usize(v_i_2173_);
lean_dec(v_i_2173_);
v_res_2179_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_boxed_2177_, v_i_boxed_2178_, v_bs_2174_, v___y_2175_);
lean_dec_ref(v___y_2175_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(size_t v_sz_2180_, size_t v_i_2181_, lean_object* v_bs_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v___x_2190_; 
v___x_2190_ = lean_usize_dec_lt(v_i_2181_, v_sz_2180_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = l_unsafeCast___redArg(v_bs_2182_);
lean_dec_ref(v_bs_2182_);
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
return v___x_2192_;
}
else
{
lean_object* v_toCold_2193_; lean_object* v_ref_2194_; lean_object* v_quotContext_2195_; lean_object* v_currMacroScope_2196_; lean_object* v_v_2197_; lean_object* v___x_2198_; lean_object* v_bs_x27_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; size_t v___x_2218_; size_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v_toCold_2193_ = lean_ctor_get(v___y_2187_, 0);
v_ref_2194_ = lean_ctor_get(v___y_2187_, 2);
v_quotContext_2195_ = lean_ctor_get(v_toCold_2193_, 8);
v_currMacroScope_2196_ = lean_ctor_get(v_toCold_2193_, 9);
v_v_2197_ = lean_array_uget(v_bs_2182_, v_i_2181_);
v___x_2198_ = lean_unsigned_to_nat(0u);
v_bs_x27_2199_ = lean_array_uset(v_bs_2182_, v_i_2181_, v___x_2198_);
v___x_2200_ = l_unsafeCast___redArg(v_v_2197_);
lean_dec(v_v_2197_);
v___x_2201_ = 0;
v___x_2202_ = l_Lean_SourceInfo_fromRef(v_ref_2194_, v___x_2201_);
v___x_2203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2202_, 5);
v___x_2205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2202_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
v___x_2206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2208_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_2209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc(v_currMacroScope_2196_);
lean_inc(v_quotContext_2195_);
v___x_2210_ = l_Lean_addMacroScope(v_quotContext_2195_, v___x_2209_, v_currMacroScope_2196_);
v___x_2211_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_2212_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2202_);
lean_ctor_set(v___x_2212_, 1, v___x_2208_);
lean_ctor_set(v___x_2212_, 2, v___x_2210_);
lean_ctor_set(v___x_2212_, 3, v___x_2211_);
v___x_2213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2214_ = l_Lean_Syntax_node1(v___x_2202_, v___x_2213_, v___x_2200_);
v___x_2215_ = l_Lean_Syntax_node2(v___x_2202_, v___x_2207_, v___x_2212_, v___x_2214_);
v___x_2216_ = l_Lean_Syntax_node1(v___x_2202_, v___x_2206_, v___x_2215_);
v___x_2217_ = l_Lean_Syntax_node2(v___x_2202_, v___x_2203_, v___x_2205_, v___x_2216_);
v___x_2218_ = ((size_t)1ULL);
v___x_2219_ = lean_usize_add(v_i_2181_, v___x_2218_);
v___x_2220_ = l_unsafeCast___redArg(v___x_2217_);
lean_dec(v___x_2217_);
v___x_2221_ = lean_array_uset(v_bs_x27_2199_, v_i_2181_, v___x_2220_);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_2180_, v___x_2219_, v___x_2221_, v___y_2187_);
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7___boxed(lean_object* v_sz_2223_, lean_object* v_i_2224_, lean_object* v_bs_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
size_t v_sz_boxed_2233_; size_t v_i_boxed_2234_; lean_object* v_res_2235_; 
v_sz_boxed_2233_ = lean_unbox_usize(v_sz_2223_);
lean_dec(v_sz_2223_);
v_i_boxed_2234_ = lean_unbox_usize(v_i_2224_);
lean_dec(v_i_2224_);
v_res_2235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(v_sz_boxed_2233_, v_i_boxed_2234_, v_bs_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(size_t v_sz_2236_, size_t v_i_2237_, lean_object* v_bs_2238_){
_start:
{
uint8_t v___x_2239_; 
v___x_2239_ = lean_usize_dec_lt(v_i_2237_, v_sz_2236_);
if (v___x_2239_ == 0)
{
lean_object* v___x_2240_; 
v___x_2240_ = l_unsafeCast___redArg(v_bs_2238_);
lean_dec_ref(v_bs_2238_);
return v___x_2240_;
}
else
{
lean_object* v_v_2241_; lean_object* v___x_2242_; lean_object* v_bs_x27_2243_; lean_object* v___x_2244_; size_t v___x_2245_; size_t v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_v_2241_ = lean_array_uget(v_bs_2238_, v_i_2237_);
v___x_2242_ = lean_unsigned_to_nat(0u);
v_bs_x27_2243_ = lean_array_uset(v_bs_2238_, v_i_2237_, v___x_2242_);
v___x_2244_ = l_unsafeCast___redArg(v_v_2241_);
lean_dec(v_v_2241_);
v___x_2245_ = ((size_t)1ULL);
v___x_2246_ = lean_usize_add(v_i_2237_, v___x_2245_);
v___x_2247_ = l_unsafeCast___redArg(v___x_2244_);
lean_dec(v___x_2244_);
v___x_2248_ = lean_array_uset(v_bs_x27_2243_, v_i_2237_, v___x_2247_);
v_i_2237_ = v___x_2246_;
v_bs_2238_ = v___x_2248_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2___boxed(lean_object* v_sz_2250_, lean_object* v_i_2251_, lean_object* v_bs_2252_){
_start:
{
size_t v_sz_boxed_2253_; size_t v_i_boxed_2254_; lean_object* v_res_2255_; 
v_sz_boxed_2253_ = lean_unbox_usize(v_sz_2250_);
lean_dec(v_sz_2250_);
v_i_boxed_2254_ = lean_unbox_usize(v_i_2251_);
lean_dec(v_i_2251_);
v_res_2255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(v_sz_boxed_2253_, v_i_boxed_2254_, v_bs_2252_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(size_t v_sz_2256_, size_t v_i_2257_, lean_object* v_bs_2258_){
_start:
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_usize_dec_lt(v_i_2257_, v_sz_2256_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; 
v___x_2260_ = l_unsafeCast___redArg(v_bs_2258_);
lean_dec_ref(v_bs_2258_);
return v___x_2260_;
}
else
{
lean_object* v_v_2261_; lean_object* v___x_2262_; lean_object* v_bs_x27_2263_; lean_object* v___x_2264_; size_t v___x_2265_; size_t v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v_v_2261_ = lean_array_uget(v_bs_2258_, v_i_2257_);
v___x_2262_ = lean_unsigned_to_nat(0u);
v_bs_x27_2263_ = lean_array_uset(v_bs_2258_, v_i_2257_, v___x_2262_);
v___x_2264_ = l_unsafeCast___redArg(v_v_2261_);
lean_dec(v_v_2261_);
v___x_2265_ = ((size_t)1ULL);
v___x_2266_ = lean_usize_add(v_i_2257_, v___x_2265_);
v___x_2267_ = l_unsafeCast___redArg(v___x_2264_);
lean_dec(v___x_2264_);
v___x_2268_ = lean_array_uset(v_bs_x27_2263_, v_i_2257_, v___x_2267_);
v_i_2257_ = v___x_2266_;
v_bs_2258_ = v___x_2268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6___boxed(lean_object* v_sz_2270_, lean_object* v_i_2271_, lean_object* v_bs_2272_){
_start:
{
size_t v_sz_boxed_2273_; size_t v_i_boxed_2274_; lean_object* v_res_2275_; 
v_sz_boxed_2273_ = lean_unbox_usize(v_sz_2270_);
lean_dec(v_sz_2270_);
v_i_boxed_2274_ = lean_unbox_usize(v_i_2271_);
lean_dec(v_i_2271_);
v_res_2275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(v_sz_boxed_2273_, v_i_boxed_2274_, v_bs_2272_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(size_t v_sz_2276_, size_t v_i_2277_, lean_object* v_bs_2278_){
_start:
{
uint8_t v___x_2279_; 
v___x_2279_ = lean_usize_dec_lt(v_i_2277_, v_sz_2276_);
if (v___x_2279_ == 0)
{
lean_object* v___x_2280_; 
v___x_2280_ = l_unsafeCast___redArg(v_bs_2278_);
lean_dec_ref(v_bs_2278_);
return v___x_2280_;
}
else
{
lean_object* v_v_2281_; lean_object* v___x_2282_; lean_object* v_bs_x27_2283_; lean_object* v___x_2284_; size_t v___x_2285_; size_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v_v_2281_ = lean_array_uget(v_bs_2278_, v_i_2277_);
v___x_2282_ = lean_unsigned_to_nat(0u);
v_bs_x27_2283_ = lean_array_uset(v_bs_2278_, v_i_2277_, v___x_2282_);
v___x_2284_ = l_unsafeCast___redArg(v_v_2281_);
lean_dec(v_v_2281_);
v___x_2285_ = ((size_t)1ULL);
v___x_2286_ = lean_usize_add(v_i_2277_, v___x_2285_);
v___x_2287_ = l_unsafeCast___redArg(v___x_2284_);
lean_dec(v___x_2284_);
v___x_2288_ = lean_array_uset(v_bs_x27_2283_, v_i_2277_, v___x_2287_);
v_i_2277_ = v___x_2286_;
v_bs_2278_ = v___x_2288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4___boxed(lean_object* v_sz_2290_, lean_object* v_i_2291_, lean_object* v_bs_2292_){
_start:
{
size_t v_sz_boxed_2293_; size_t v_i_boxed_2294_; lean_object* v_res_2295_; 
v_sz_boxed_2293_ = lean_unbox_usize(v_sz_2290_);
lean_dec(v_sz_2290_);
v_i_boxed_2294_ = lean_unbox_usize(v_i_2291_);
lean_dec(v_i_2291_);
v_res_2295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(v_sz_boxed_2293_, v_i_boxed_2294_, v_bs_2292_);
return v_res_2295_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2));
v___x_2304_ = l_Lean_stringToMessageData(v___x_2303_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(size_t v_sz_2305_, size_t v_i_2306_, lean_object* v_bs_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
uint8_t v___x_2315_; 
v___x_2315_ = lean_usize_dec_lt(v_i_2306_, v_sz_2305_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = l_unsafeCast___redArg(v_bs_2307_);
lean_dec_ref(v_bs_2307_);
v___x_2317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
return v___x_2317_;
}
else
{
lean_object* v_v_2318_; lean_object* v___x_2319_; lean_object* v_bs_x27_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v_v_2318_ = lean_array_uget(v_bs_2307_, v_i_2306_);
v___x_2319_ = lean_unsigned_to_nat(0u);
v_bs_x27_2320_ = lean_array_uset(v_bs_2307_, v_i_2306_, v___x_2319_);
v___x_2321_ = l_unsafeCast___redArg(v_v_2318_);
lean_dec(v_v_2318_);
v___x_2322_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_2321_, v___y_2310_, v___y_2312_, v___y_2313_);
lean_dec(v___x_2321_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2324_; lean_object* v___y_2326_; lean_object* v___x_2357_; uint8_t v___x_2358_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2324_ = l_Lean_LocalDecl_userName(v_a_2323_);
lean_dec(v_a_2323_);
v___x_2357_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86));
v___x_2358_ = lean_name_eq(v___x_2324_, v___x_2357_);
if (v___x_2358_ == 0)
{
v___y_2326_ = v___y_2312_;
goto v___jp_2325_;
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2359_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3);
v___x_2360_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2359_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_dec_ref_known(v___x_2360_, 1);
v___y_2326_ = v___y_2312_;
goto v___jp_2325_;
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_dec(v___x_2324_);
lean_dec_ref(v_bs_x27_2320_);
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
v___jp_2325_:
{
lean_object* v_toCold_2327_; lean_object* v_ref_2328_; lean_object* v_quotContext_2329_; lean_object* v_currMacroScope_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; size_t v___x_2352_; size_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_toCold_2327_ = lean_ctor_get(v___y_2326_, 0);
v_ref_2328_ = lean_ctor_get(v___y_2326_, 2);
v_quotContext_2329_ = lean_ctor_get(v_toCold_2327_, 8);
v_currMacroScope_2330_ = lean_ctor_get(v_toCold_2327_, 9);
v___x_2331_ = 0;
v___x_2332_ = l_Lean_SourceInfo_fromRef(v_ref_2328_, v___x_2331_);
v___x_2333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1));
v___x_2334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
lean_inc_n(v___x_2332_, 7);
v___x_2335_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2332_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2337_ = l_Lean_mkIdent(v___x_2324_);
v___x_2338_ = l_Lean_Syntax_node1(v___x_2332_, v___x_2336_, v___x_2337_);
v___x_2339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_2340_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2332_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_2342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
lean_inc(v_currMacroScope_2330_);
lean_inc(v_quotContext_2329_);
v___x_2343_ = l_Lean_addMacroScope(v_quotContext_2329_, v___x_2342_, v_currMacroScope_2330_);
v___x_2344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_2345_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2332_);
lean_ctor_set(v___x_2345_, 1, v___x_2341_);
lean_ctor_set(v___x_2345_, 2, v___x_2343_);
lean_ctor_set(v___x_2345_, 3, v___x_2344_);
v___x_2346_ = l_Lean_Syntax_node2(v___x_2332_, v___x_2336_, v___x_2340_, v___x_2345_);
v___x_2347_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_2348_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2332_);
lean_ctor_set(v___x_2348_, 1, v___x_2336_);
lean_ctor_set(v___x_2348_, 2, v___x_2347_);
v___x_2349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_2350_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2332_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = l_Lean_Syntax_node5(v___x_2332_, v___x_2333_, v___x_2335_, v___x_2338_, v___x_2346_, v___x_2348_, v___x_2350_);
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2306_, v___x_2352_);
v___x_2354_ = l_unsafeCast___redArg(v___x_2351_);
lean_dec(v___x_2351_);
v___x_2355_ = lean_array_uset(v_bs_x27_2320_, v_i_2306_, v___x_2354_);
v_i_2306_ = v___x_2353_;
v_bs_2307_ = v___x_2355_;
goto _start;
}
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_dec_ref(v_bs_x27_2320_);
v_a_2369_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2322_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2322_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___boxed(lean_object* v_sz_2377_, lean_object* v_i_2378_, lean_object* v_bs_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
size_t v_sz_boxed_2387_; size_t v_i_boxed_2388_; lean_object* v_res_2389_; 
v_sz_boxed_2387_ = lean_unbox_usize(v_sz_2377_);
lean_dec(v_sz_2377_);
v_i_boxed_2388_ = lean_unbox_usize(v_i_2378_);
lean_dec(v_i_2378_);
v_res_2389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(v_sz_boxed_2387_, v_i_boxed_2388_, v_bs_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
return v_res_2389_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10));
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(lean_object* v___x_2419_, lean_object* v___f_2420_, lean_object* v___x_2421_, lean_object* v___x_2422_, lean_object* v_argVars_2423_, lean_object* v_x_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
if (lean_obj_tag(v___x_2419_) == 1)
{
lean_object* v_str_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; size_t v_sz_2436_; size_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_40967__overap_2442_; lean_object* v___x_2443_; 
v_str_2432_ = lean_ctor_get(v___x_2419_, 1);
lean_inc_ref(v_str_2432_);
lean_dec_ref_known(v___x_2419_, 2);
v___x_2433_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59);
v___x_2434_ = l_Lean_Name_str___override(v___x_2433_, v_str_2432_);
v___x_2435_ = l_Lean_mkIdent(v___x_2434_);
v_sz_2436_ = lean_array_size(v_argVars_2423_);
v___x_2437_ = ((size_t)0ULL);
v___x_2438_ = l_unsafeCast___redArg(v_argVars_2423_);
v___x_2439_ = lean_box_usize(v_sz_2436_);
v___x_2440_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
lean_inc(v___x_2438_);
v___x_2441_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___boxed), 10, 3);
lean_closure_set(v___x_2441_, 0, v___x_2439_);
lean_closure_set(v___x_2441_, 1, v___x_2440_);
lean_closure_set(v___x_2441_, 2, v___x_2438_);
v___x_40967__overap_2442_ = l_unsafeCast___redArg(v___x_2441_);
lean_dec_ref(v___x_2441_);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2443_ = lean_apply_7(v___x_40967__overap_2442_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_toCold_2444_; lean_object* v_a_2445_; lean_object* v_ref_2446_; lean_object* v_quotContext_2447_; lean_object* v_currMacroScope_2448_; uint8_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; size_t v_sz_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; size_t v_sz_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; size_t v_sz_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; size_t v_sz_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_41018__overap_2496_; lean_object* v___x_2497_; 
v_toCold_2444_ = lean_ctor_get(v___y_2429_, 0);
v_a_2445_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2445_);
lean_dec_ref_known(v___x_2443_, 1);
v_ref_2446_ = lean_ctor_get(v___y_2429_, 2);
v_quotContext_2447_ = lean_ctor_get(v_toCold_2444_, 8);
v_currMacroScope_2448_ = lean_ctor_get(v_toCold_2444_, 9);
v___x_2449_ = 0;
v___x_2450_ = l_Lean_SourceInfo_fromRef(v_ref_2446_, v___x_2449_);
v___x_2451_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0));
v___x_2452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2));
v___x_2453_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1));
v___x_2454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2455_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
lean_inc_n(v___x_2450_, 9);
v___x_2456_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2450_);
lean_ctor_set(v___x_2456_, 1, v___x_2454_);
lean_ctor_set(v___x_2456_, 2, v___x_2455_);
v___x_2457_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2));
v___x_2458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2450_);
lean_ctor_set(v___x_2458_, 1, v___x_2457_);
v___x_2459_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
lean_inc_ref_n(v___x_2456_, 7);
v___x_2460_ = l_Lean_Syntax_node7(v___x_2450_, v___x_2459_, v___x_2456_, v___x_2456_, v___x_2456_, v___x_2456_, v___x_2456_, v___x_2456_, v___x_2456_);
v___x_2461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6));
v_sz_2462_ = lean_array_size(v_a_2445_);
v___x_2463_ = l_unsafeCast___redArg(v_a_2445_);
lean_dec(v_a_2445_);
v___x_2464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(v_sz_2462_, v___x_2437_, v___x_2463_);
v___x_2465_ = l_unsafeCast___redArg(v___x_2464_);
lean_dec_ref(v___x_2464_);
v_sz_2466_ = lean_array_size(v___x_2465_);
v___x_2467_ = l_unsafeCast___redArg(v___x_2465_);
lean_dec(v___x_2465_);
v___x_2468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(v_sz_2466_, v___x_2437_, v___x_2467_);
v___x_2469_ = l_unsafeCast___redArg(v___x_2468_);
lean_dec_ref(v___x_2468_);
v_sz_2470_ = lean_array_size(v___x_2469_);
v___x_2471_ = l_unsafeCast___redArg(v___x_2469_);
lean_dec(v___x_2469_);
v___x_2472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(v_sz_2470_, v___x_2437_, v___x_2471_);
v___x_2473_ = l_unsafeCast___redArg(v___x_2472_);
lean_dec_ref(v___x_2472_);
v_sz_2474_ = lean_array_size(v___x_2473_);
v___x_2475_ = l_unsafeCast___redArg(v___x_2473_);
lean_dec(v___x_2473_);
v___x_2476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_2474_, v___x_2437_, v___x_2475_);
v___x_2477_ = l_unsafeCast___redArg(v___x_2476_);
lean_dec_ref(v___x_2476_);
v___x_2478_ = l_Array_append___redArg(v___x_2455_, v___x_2477_);
lean_dec(v___x_2477_);
v___x_2479_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2450_);
lean_ctor_set(v___x_2479_, 1, v___x_2454_);
lean_ctor_set(v___x_2479_, 2, v___x_2478_);
v___x_2480_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
v___x_2481_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_2482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_2483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2450_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15);
v___x_2485_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16));
lean_inc(v_currMacroScope_2448_);
lean_inc(v_quotContext_2447_);
v___x_2486_ = l_Lean_addMacroScope(v_quotContext_2447_, v___x_2485_, v_currMacroScope_2448_);
v___x_2487_ = lean_box(0);
lean_inc(v___x_2486_);
v___x_2488_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2450_);
lean_ctor_set(v___x_2488_, 1, v___x_2484_);
lean_ctor_set(v___x_2488_, 2, v___x_2486_);
lean_ctor_set(v___x_2488_, 3, v___x_2487_);
v___x_2489_ = l_Lean_Syntax_node2(v___x_2450_, v___x_2481_, v___x_2483_, v___x_2488_);
v___x_2490_ = l_Lean_Syntax_node1(v___x_2450_, v___x_2454_, v___x_2489_);
v___x_2491_ = l_Lean_Syntax_node2(v___x_2450_, v___x_2461_, v___x_2479_, v___x_2490_);
lean_inc(v___x_2435_);
v___x_2492_ = l_Lean_Syntax_node5(v___x_2450_, v___x_2453_, v___x_2456_, v___x_2458_, v___x_2460_, v___x_2435_, v___x_2491_);
v___x_2493_ = lean_box_usize(v_sz_2436_);
v___x_2494_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
v___x_2495_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5___boxed), 10, 3);
lean_closure_set(v___x_2495_, 0, v___x_2493_);
lean_closure_set(v___x_2495_, 1, v___x_2494_);
lean_closure_set(v___x_2495_, 2, v___x_2438_);
v___x_41018__overap_2496_ = l_unsafeCast___redArg(v___x_2495_);
lean_dec_ref(v___x_2495_);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2497_ = lean_apply_7(v___x_41018__overap_2496_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; size_t v_sz_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; size_t v_sz_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_41026__overap_2508_; lean_object* v___x_2509_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
v_sz_2499_ = lean_array_size(v_a_2498_);
v___x_2500_ = l_unsafeCast___redArg(v_a_2498_);
lean_dec(v_a_2498_);
v___x_2501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(v_sz_2499_, v___x_2437_, v___x_2500_);
v___x_2502_ = l_unsafeCast___redArg(v___x_2501_);
lean_dec_ref(v___x_2501_);
v_sz_2503_ = lean_array_size(v___x_2502_);
v___x_2504_ = l_unsafeCast___redArg(v___x_2502_);
lean_dec(v___x_2502_);
v___x_2505_ = lean_box_usize(v_sz_2503_);
v___x_2506_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
lean_inc(v___x_2504_);
v___x_2507_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7___boxed), 10, 3);
lean_closure_set(v___x_2507_, 0, v___x_2505_);
lean_closure_set(v___x_2507_, 1, v___x_2506_);
lean_closure_set(v___x_2507_, 2, v___x_2504_);
v___x_41026__overap_2508_ = l_unsafeCast___redArg(v___x_2507_);
lean_dec_ref(v___x_2507_);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2509_ = lean_apply_7(v___x_41026__overap_2508_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2511_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
lean_inc_ref(v___f_2420_);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2511_ = lean_apply_7(v___f_2420_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_41117__overap_2581_; lean_object* v___x_2582_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
lean_inc_n(v_a_2512_, 26);
lean_dec_ref_known(v___x_2511_, 1);
v___x_2513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28));
v___x_2514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4));
v___x_2515_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2515_, 0, v_a_2512_);
lean_ctor_set(v___x_2515_, 1, v___x_2457_);
v___x_2516_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6));
v___x_2518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_2519_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_a_2512_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
lean_inc(v___x_2435_);
v___x_2520_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2517_, v___x_2519_, v___x_2435_);
v___x_2521_ = l_Array_append___redArg(v___x_2455_, v___x_2504_);
lean_inc_ref(v___x_2521_);
v___x_2522_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2522_, 0, v_a_2512_);
lean_ctor_set(v___x_2522_, 1, v___x_2454_);
lean_ctor_set(v___x_2522_, 2, v___x_2521_);
lean_inc(v___x_2520_);
v___x_2523_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2516_, v___x_2520_, v___x_2522_);
v___x_2524_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2454_, v___x_2523_);
v___x_2525_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2454_, v___x_2524_);
v___x_2526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7));
v___x_2527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2527_, 0, v_a_2512_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101));
v___x_2529_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102));
v___x_2530_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2530_, 0, v_a_2512_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
v___x_2531_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104);
v___x_2532_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105));
lean_inc_n(v_currMacroScope_2448_, 2);
lean_inc_n(v_quotContext_2447_, 2);
v___x_2533_ = l_Lean_addMacroScope(v_quotContext_2447_, v___x_2532_, v_currMacroScope_2448_);
v___x_2534_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108));
v___x_2535_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2535_, 0, v_a_2512_);
lean_ctor_set(v___x_2535_, 1, v___x_2531_);
lean_ctor_set(v___x_2535_, 2, v___x_2533_);
lean_ctor_set(v___x_2535_, 3, v___x_2534_);
v___x_2536_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9));
v___x_2537_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_2538_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
v___x_2539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2539_, 0, v_a_2512_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
v___x_2540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_2541_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_2542_ = l_Lean_addMacroScope(v_quotContext_2447_, v___x_2433_, v_currMacroScope_2448_);
v___x_2543_ = l_Lean_Name_mkStr3(v___x_2451_, v___x_2513_, v___x_2421_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
v___x_2545_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63));
lean_inc_ref_n(v___x_2422_, 2);
v___x_2546_ = l_Lean_Name_mkStr3(v___x_2451_, v___x_2422_, v___x_2480_);
v___x_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2546_);
v___x_2548_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68));
v___x_2549_ = l_Lean_Name_mkStr3(v___x_2451_, v___x_2422_, v___x_2452_);
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
v___x_2551_ = l_Lean_Name_mkStr2(v___x_2451_, v___x_2422_);
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
v___x_2553_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57));
v___x_2554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set(v___x_2554_, 1, v___x_2553_);
v___x_2555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2550_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2548_);
lean_ctor_set(v___x_2556_, 1, v___x_2555_);
v___x_2557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2547_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2545_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
v___x_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2544_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
lean_inc_ref(v___x_2559_);
lean_inc(v___x_2542_);
v___x_2560_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2560_, 0, v_a_2512_);
lean_ctor_set(v___x_2560_, 1, v___x_2541_);
lean_ctor_set(v___x_2560_, 2, v___x_2542_);
lean_ctor_set(v___x_2560_, 3, v___x_2559_);
v___x_2561_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2540_, v___x_2560_);
v___x_2562_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2537_, v___x_2539_, v___x_2561_);
v___x_2563_ = l_unsafeCast___redArg(v_a_2510_);
lean_dec(v_a_2510_);
v___x_2564_ = l_Array_append___redArg(v___x_2455_, v___x_2563_);
lean_dec(v___x_2563_);
v___x_2565_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2565_, 0, v_a_2512_);
lean_ctor_set(v___x_2565_, 1, v___x_2454_);
lean_ctor_set(v___x_2565_, 2, v___x_2564_);
v___x_2566_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2516_, v___x_2520_, v___x_2565_);
v___x_2567_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2567_, 0, v_a_2512_);
lean_ctor_set(v___x_2567_, 1, v___x_2482_);
v___x_2568_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2568_, 0, v_a_2512_);
lean_ctor_set(v___x_2568_, 1, v___x_2484_);
lean_ctor_set(v___x_2568_, 2, v___x_2486_);
lean_ctor_set(v___x_2568_, 3, v___x_2487_);
v___x_2569_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2454_, v___x_2568_);
v___x_2570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_2571_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_a_2512_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = l_Lean_Syntax_node5(v_a_2512_, v___x_2536_, v___x_2562_, v___x_2566_, v___x_2567_, v___x_2569_, v___x_2571_);
v___x_2573_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2454_, v___x_2572_);
v___x_2574_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2516_, v___x_2535_, v___x_2573_);
v___x_2575_ = l_Lean_Syntax_node1(v_a_2512_, v___x_2454_, v___x_2574_);
v___x_2576_ = l_Lean_Syntax_node2(v_a_2512_, v___x_2528_, v___x_2530_, v___x_2575_);
v___x_2577_ = l_Lean_Syntax_node4(v_a_2512_, v___x_2514_, v___x_2515_, v___x_2525_, v___x_2527_, v___x_2576_);
v___x_2578_ = lean_box_usize(v_sz_2503_);
v___x_2579_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
v___x_2580_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8___boxed), 10, 3);
lean_closure_set(v___x_2580_, 0, v___x_2578_);
lean_closure_set(v___x_2580_, 1, v___x_2579_);
lean_closure_set(v___x_2580_, 2, v___x_2504_);
v___x_41117__overap_2581_ = l_unsafeCast___redArg(v___x_2580_);
lean_dec_ref(v___x_2580_);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2582_ = lean_apply_7(v___x_41117__overap_2581_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
lean_inc(v___y_2430_);
lean_inc_ref(v___y_2429_);
lean_inc(v___y_2428_);
lean_inc_ref(v___y_2427_);
lean_inc(v___y_2426_);
lean_inc_ref(v___y_2425_);
v___x_2584_ = lean_apply_7(v___f_2420_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, lean_box(0));
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2617_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2587_ = v___x_2584_;
v_isShared_2588_ = v_isSharedCheck_2617_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2584_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2617_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2615_; 
lean_inc_n(v_a_2585_, 19);
v___x_2589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2589_, 0, v_a_2585_);
lean_ctor_set(v___x_2589_, 1, v___x_2457_);
v___x_2590_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2590_, 0, v_a_2585_);
lean_ctor_set(v___x_2590_, 1, v___x_2518_);
v___x_2591_ = l_Lean_Syntax_node2(v_a_2585_, v___x_2517_, v___x_2590_, v___x_2435_);
v___x_2592_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2592_, 0, v_a_2585_);
lean_ctor_set(v___x_2592_, 1, v___x_2454_);
lean_ctor_set(v___x_2592_, 2, v___x_2521_);
lean_inc(v___x_2591_);
v___x_2593_ = l_Lean_Syntax_node2(v_a_2585_, v___x_2516_, v___x_2591_, v___x_2592_);
v___x_2594_ = l_Lean_Syntax_node1(v_a_2585_, v___x_2454_, v___x_2593_);
v___x_2595_ = l_Lean_Syntax_node1(v_a_2585_, v___x_2454_, v___x_2594_);
v___x_2596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_a_2585_);
lean_ctor_set(v___x_2596_, 1, v___x_2526_);
v___x_2597_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2597_, 0, v_a_2585_);
lean_ctor_set(v___x_2597_, 1, v___x_2529_);
v___x_2598_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_2599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2599_, 0, v_a_2585_);
lean_ctor_set(v___x_2599_, 1, v___x_2538_);
v___x_2600_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2600_, 0, v_a_2585_);
lean_ctor_set(v___x_2600_, 1, v___x_2541_);
lean_ctor_set(v___x_2600_, 2, v___x_2542_);
lean_ctor_set(v___x_2600_, 3, v___x_2559_);
v___x_2601_ = l_Lean_Syntax_node1(v_a_2585_, v___x_2540_, v___x_2600_);
v___x_2602_ = l_Lean_Syntax_node2(v_a_2585_, v___x_2537_, v___x_2599_, v___x_2601_);
v___x_2603_ = l_unsafeCast___redArg(v_a_2583_);
lean_dec(v_a_2583_);
v___x_2604_ = l_Array_append___redArg(v___x_2455_, v___x_2603_);
lean_dec(v___x_2603_);
v___x_2605_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2605_, 0, v_a_2585_);
lean_ctor_set(v___x_2605_, 1, v___x_2454_);
lean_ctor_set(v___x_2605_, 2, v___x_2604_);
v___x_2606_ = l_Lean_Syntax_node2(v_a_2585_, v___x_2516_, v___x_2591_, v___x_2605_);
v___x_2607_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2607_, 0, v_a_2585_);
lean_ctor_set(v___x_2607_, 1, v___x_2570_);
v___x_2608_ = l_Lean_Syntax_node3(v_a_2585_, v___x_2598_, v___x_2602_, v___x_2606_, v___x_2607_);
v___x_2609_ = l_Lean_Syntax_node1(v_a_2585_, v___x_2454_, v___x_2608_);
v___x_2610_ = l_Lean_Syntax_node2(v_a_2585_, v___x_2528_, v___x_2597_, v___x_2609_);
v___x_2611_ = l_Lean_Syntax_node4(v_a_2585_, v___x_2514_, v___x_2589_, v___x_2595_, v___x_2596_, v___x_2610_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2577_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2492_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v___x_2613_);
v___x_2615_ = v___x_2587_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v___x_2613_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
else
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
lean_dec(v_a_2583_);
lean_dec(v___x_2577_);
lean_dec_ref_known(v___x_2559_, 2);
lean_dec(v___x_2542_);
lean_dec_ref(v___x_2521_);
lean_dec(v___x_2492_);
lean_dec(v___x_2435_);
v_a_2618_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2584_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2584_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec(v___x_2577_);
lean_dec_ref_known(v___x_2559_, 2);
lean_dec(v___x_2542_);
lean_dec_ref(v___x_2521_);
lean_dec(v___x_2492_);
lean_dec(v___x_2435_);
lean_dec_ref(v___f_2420_);
v_a_2626_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2582_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2582_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
lean_dec(v_a_2510_);
lean_dec(v___x_2504_);
lean_dec(v___x_2492_);
lean_dec(v___x_2486_);
lean_dec(v___x_2435_);
lean_dec_ref(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___f_2420_);
v_a_2634_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2511_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2511_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
lean_dec(v___x_2504_);
lean_dec(v___x_2492_);
lean_dec(v___x_2486_);
lean_dec(v___x_2435_);
lean_dec_ref(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___f_2420_);
v_a_2642_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2509_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2509_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v___x_2492_);
lean_dec(v___x_2486_);
lean_dec(v___x_2435_);
lean_dec_ref(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___f_2420_);
v_a_2650_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2497_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2497_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_dec(v___x_2438_);
lean_dec(v___x_2435_);
lean_dec_ref(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___f_2420_);
v_a_2658_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2443_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2443_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
else
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
lean_dec_ref(v___x_2422_);
lean_dec_ref(v___x_2421_);
lean_dec_ref(v___f_2420_);
v___x_2666_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11);
v___x_2667_ = l_Lean_MessageData_ofName(v___x_2419_);
v___x_2668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2666_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2668_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_);
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed(lean_object* v___x_2670_, lean_object* v___f_2671_, lean_object* v___x_2672_, lean_object* v___x_2673_, lean_object* v_argVars_2674_, lean_object* v_x_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(v___x_2670_, v___f_2671_, v___x_2672_, v___x_2673_, v_argVars_2674_, v_x_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec_ref(v_x_2675_);
lean_dec_ref(v_argVars_2674_);
return v_res_2683_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0(void){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_instMonadEIO___redArg();
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(lean_object* v_msg_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v_toApplicative_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2792_; 
v___x_2699_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0);
v___x_2700_ = l_StateRefT_x27_instMonad___redArg(v___x_2699_);
v_toApplicative_2701_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2792_ == 0)
{
lean_object* v_unused_2793_; 
v_unused_2793_ = lean_ctor_get(v___x_2700_, 1);
lean_dec(v_unused_2793_);
v___x_2703_ = v___x_2700_;
v_isShared_2704_ = v_isSharedCheck_2792_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_toApplicative_2701_);
lean_dec(v___x_2700_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2792_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v_toFunctor_2705_; lean_object* v_toSeq_2706_; lean_object* v_toSeqLeft_2707_; lean_object* v_toSeqRight_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2790_; 
v_toFunctor_2705_ = lean_ctor_get(v_toApplicative_2701_, 0);
v_toSeq_2706_ = lean_ctor_get(v_toApplicative_2701_, 2);
v_toSeqLeft_2707_ = lean_ctor_get(v_toApplicative_2701_, 3);
v_toSeqRight_2708_ = lean_ctor_get(v_toApplicative_2701_, 4);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_toApplicative_2701_);
if (v_isSharedCheck_2790_ == 0)
{
lean_object* v_unused_2791_; 
v_unused_2791_ = lean_ctor_get(v_toApplicative_2701_, 1);
lean_dec(v_unused_2791_);
v___x_2710_ = v_toApplicative_2701_;
v_isShared_2711_ = v_isSharedCheck_2790_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_toSeqRight_2708_);
lean_inc(v_toSeqLeft_2707_);
lean_inc(v_toSeq_2706_);
lean_inc(v_toFunctor_2705_);
lean_dec(v_toApplicative_2701_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2790_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___f_2712_; lean_object* v___f_2713_; lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___x_2716_; lean_object* v___f_2717_; lean_object* v___f_2718_; lean_object* v___f_2719_; lean_object* v___x_2721_; 
v___f_2712_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1));
v___f_2713_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2));
lean_inc_ref(v_toFunctor_2705_);
v___f_2714_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2714_, 0, v_toFunctor_2705_);
v___f_2715_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2715_, 0, v_toFunctor_2705_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___f_2714_);
lean_ctor_set(v___x_2716_, 1, v___f_2715_);
v___f_2717_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2717_, 0, v_toSeqRight_2708_);
v___f_2718_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2718_, 0, v_toSeqLeft_2707_);
v___f_2719_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2719_, 0, v_toSeq_2706_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 4, v___f_2717_);
lean_ctor_set(v___x_2710_, 3, v___f_2718_);
lean_ctor_set(v___x_2710_, 2, v___f_2719_);
lean_ctor_set(v___x_2710_, 1, v___f_2712_);
lean_ctor_set(v___x_2710_, 0, v___x_2716_);
v___x_2721_ = v___x_2710_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2716_);
lean_ctor_set(v_reuseFailAlloc_2789_, 1, v___f_2712_);
lean_ctor_set(v_reuseFailAlloc_2789_, 2, v___f_2719_);
lean_ctor_set(v_reuseFailAlloc_2789_, 3, v___f_2718_);
lean_ctor_set(v_reuseFailAlloc_2789_, 4, v___f_2717_);
v___x_2721_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2723_; 
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 1, v___f_2713_);
lean_ctor_set(v___x_2703_, 0, v___x_2721_);
v___x_2723_ = v___x_2703_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2721_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v___f_2713_);
v___x_2723_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2724_; lean_object* v_toApplicative_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2786_; 
v___x_2724_ = l_StateRefT_x27_instMonad___redArg(v___x_2723_);
v_toApplicative_2725_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v___x_2724_, 1);
lean_dec(v_unused_2787_);
v___x_2727_ = v___x_2724_;
v_isShared_2728_ = v_isSharedCheck_2786_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_toApplicative_2725_);
lean_dec(v___x_2724_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2786_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v_toFunctor_2729_; lean_object* v_toSeq_2730_; lean_object* v_toSeqLeft_2731_; lean_object* v_toSeqRight_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2784_; 
v_toFunctor_2729_ = lean_ctor_get(v_toApplicative_2725_, 0);
v_toSeq_2730_ = lean_ctor_get(v_toApplicative_2725_, 2);
v_toSeqLeft_2731_ = lean_ctor_get(v_toApplicative_2725_, 3);
v_toSeqRight_2732_ = lean_ctor_get(v_toApplicative_2725_, 4);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_toApplicative_2725_);
if (v_isSharedCheck_2784_ == 0)
{
lean_object* v_unused_2785_; 
v_unused_2785_ = lean_ctor_get(v_toApplicative_2725_, 1);
lean_dec(v_unused_2785_);
v___x_2734_ = v_toApplicative_2725_;
v_isShared_2735_ = v_isSharedCheck_2784_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_toSeqRight_2732_);
lean_inc(v_toSeqLeft_2731_);
lean_inc(v_toSeq_2730_);
lean_inc(v_toFunctor_2729_);
lean_dec(v_toApplicative_2725_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2784_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___f_2736_; lean_object* v___f_2737_; lean_object* v___f_2738_; lean_object* v___f_2739_; lean_object* v___x_2740_; lean_object* v___f_2741_; lean_object* v___f_2742_; lean_object* v___f_2743_; lean_object* v___x_2745_; 
v___f_2736_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3));
v___f_2737_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4));
lean_inc_ref(v_toFunctor_2729_);
v___f_2738_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2738_, 0, v_toFunctor_2729_);
v___f_2739_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2739_, 0, v_toFunctor_2729_);
v___x_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___f_2738_);
lean_ctor_set(v___x_2740_, 1, v___f_2739_);
v___f_2741_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2741_, 0, v_toSeqRight_2732_);
v___f_2742_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2742_, 0, v_toSeqLeft_2731_);
v___f_2743_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2743_, 0, v_toSeq_2730_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 4, v___f_2741_);
lean_ctor_set(v___x_2734_, 3, v___f_2742_);
lean_ctor_set(v___x_2734_, 2, v___f_2743_);
lean_ctor_set(v___x_2734_, 1, v___f_2736_);
lean_ctor_set(v___x_2734_, 0, v___x_2740_);
v___x_2745_ = v___x_2734_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2740_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___f_2736_);
lean_ctor_set(v_reuseFailAlloc_2783_, 2, v___f_2743_);
lean_ctor_set(v_reuseFailAlloc_2783_, 3, v___f_2742_);
lean_ctor_set(v_reuseFailAlloc_2783_, 4, v___f_2741_);
v___x_2745_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2747_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 1, v___f_2737_);
lean_ctor_set(v___x_2727_, 0, v___x_2745_);
v___x_2747_ = v___x_2727_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2745_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v___f_2737_);
v___x_2747_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v___x_2748_; lean_object* v_toApplicative_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2780_; 
v___x_2748_ = l_StateRefT_x27_instMonad___redArg(v___x_2747_);
v_toApplicative_2749_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2780_ == 0)
{
lean_object* v_unused_2781_; 
v_unused_2781_ = lean_ctor_get(v___x_2748_, 1);
lean_dec(v_unused_2781_);
v___x_2751_ = v___x_2748_;
v_isShared_2752_ = v_isSharedCheck_2780_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_toApplicative_2749_);
lean_dec(v___x_2748_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2780_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v_toFunctor_2753_; lean_object* v_toSeq_2754_; lean_object* v_toSeqLeft_2755_; lean_object* v_toSeqRight_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2778_; 
v_toFunctor_2753_ = lean_ctor_get(v_toApplicative_2749_, 0);
v_toSeq_2754_ = lean_ctor_get(v_toApplicative_2749_, 2);
v_toSeqLeft_2755_ = lean_ctor_get(v_toApplicative_2749_, 3);
v_toSeqRight_2756_ = lean_ctor_get(v_toApplicative_2749_, 4);
v_isSharedCheck_2778_ = !lean_is_exclusive(v_toApplicative_2749_);
if (v_isSharedCheck_2778_ == 0)
{
lean_object* v_unused_2779_; 
v_unused_2779_ = lean_ctor_get(v_toApplicative_2749_, 1);
lean_dec(v_unused_2779_);
v___x_2758_ = v_toApplicative_2749_;
v_isShared_2759_ = v_isSharedCheck_2778_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_toSeqRight_2756_);
lean_inc(v_toSeqLeft_2755_);
lean_inc(v_toSeq_2754_);
lean_inc(v_toFunctor_2753_);
lean_dec(v_toApplicative_2749_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2778_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___f_2760_; lean_object* v___f_2761_; lean_object* v___f_2762_; lean_object* v___f_2763_; lean_object* v___x_2764_; lean_object* v___f_2765_; lean_object* v___f_2766_; lean_object* v___f_2767_; lean_object* v___x_2769_; 
v___f_2760_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5));
v___f_2761_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6));
lean_inc_ref(v_toFunctor_2753_);
v___f_2762_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2762_, 0, v_toFunctor_2753_);
v___f_2763_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2763_, 0, v_toFunctor_2753_);
v___x_2764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___f_2762_);
lean_ctor_set(v___x_2764_, 1, v___f_2763_);
v___f_2765_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2765_, 0, v_toSeqRight_2756_);
v___f_2766_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2766_, 0, v_toSeqLeft_2755_);
v___f_2767_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2767_, 0, v_toSeq_2754_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 4, v___f_2765_);
lean_ctor_set(v___x_2758_, 3, v___f_2766_);
lean_ctor_set(v___x_2758_, 2, v___f_2767_);
lean_ctor_set(v___x_2758_, 1, v___f_2760_);
lean_ctor_set(v___x_2758_, 0, v___x_2764_);
v___x_2769_ = v___x_2758_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v___x_2764_);
lean_ctor_set(v_reuseFailAlloc_2777_, 1, v___f_2760_);
lean_ctor_set(v_reuseFailAlloc_2777_, 2, v___f_2767_);
lean_ctor_set(v_reuseFailAlloc_2777_, 3, v___f_2766_);
lean_ctor_set(v_reuseFailAlloc_2777_, 4, v___f_2765_);
v___x_2769_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___x_2771_; 
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 1, v___f_2761_);
lean_ctor_set(v___x_2751_, 0, v___x_2769_);
v___x_2771_ = v___x_2751_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2769_);
lean_ctor_set(v_reuseFailAlloc_2776_, 1, v___f_2761_);
v___x_2771_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_40112__overap_2774_; lean_object* v___x_2775_; 
v___x_2772_ = lean_box(0);
v___x_2773_ = l_instInhabitedOfMonad___redArg(v___x_2771_, v___x_2772_);
v___x_40112__overap_2774_ = lean_panic_fn_borrowed(v___x_2773_, v_msg_2691_);
lean_dec(v___x_2773_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc_ref(v___y_2694_);
lean_inc(v___y_2693_);
lean_inc_ref(v___y_2692_);
v___x_2775_ = lean_apply_7(v___x_40112__overap_2774_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, lean_box(0));
return v___x_2775_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___boxed(lean_object* v_msg_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(v_msg_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
return v_res_2802_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0));
v___x_2805_ = l_Lean_stringToMessageData(v___x_2804_);
return v___x_2805_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2));
v___x_2808_ = l_Lean_stringToMessageData(v___x_2807_);
return v___x_2808_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2812_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6));
v___x_2813_ = lean_unsigned_to_nat(11u);
v___x_2814_ = lean_unsigned_to_nat(122u);
v___x_2815_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5));
v___x_2816_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4));
v___x_2817_ = l_mkPanicMessageWithDecl(v___x_2816_, v___x_2815_, v___x_2814_, v___x_2813_, v___x_2812_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(lean_object* v_constName_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___x_2834_; lean_object* v_env_2835_; uint8_t v___x_2836_; lean_object* v___x_2837_; 
v___x_2834_ = lean_st_ref_get(v___y_2824_);
v_env_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc_ref(v_env_2835_);
lean_dec(v___x_2834_);
v___x_2836_ = 0;
lean_inc(v_constName_2818_);
v___x_2837_ = l_Lean_Environment_findAsync_x3f(v_env_2835_, v_constName_2818_, v___x_2836_);
if (lean_obj_tag(v___x_2837_) == 1)
{
lean_object* v_val_2838_; uint8_t v_kind_2839_; 
v_val_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_val_2838_);
lean_dec_ref_known(v___x_2837_, 1);
v_kind_2839_ = lean_ctor_get_uint8(v_val_2838_, sizeof(void*)*3);
if (v_kind_2839_ == 6)
{
lean_object* v___x_2840_; 
v___x_2840_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2838_);
if (lean_obj_tag(v___x_2840_) == 6)
{
lean_object* v_val_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_constName_2818_);
v_val_2841_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2840_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_val_2841_);
lean_dec(v___x_2840_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
lean_ctor_set_tag(v___x_2843_, 0);
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_val_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
else
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
lean_dec_ref(v___x_2840_);
v___x_2849_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7);
v___x_2850_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(v___x_2849_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2859_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2853_ = v___x_2850_;
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2850_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
if (lean_obj_tag(v_a_2851_) == 0)
{
lean_del_object(v___x_2853_);
goto v___jp_2826_;
}
else
{
lean_object* v_val_2855_; lean_object* v___x_2857_; 
lean_dec(v_constName_2818_);
v_val_2855_ = lean_ctor_get(v_a_2851_, 0);
lean_inc(v_val_2855_);
lean_dec_ref_known(v_a_2851_, 1);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 0, v_val_2855_);
v___x_2857_ = v___x_2853_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_val_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec(v_constName_2818_);
v_a_2860_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2850_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2850_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
else
{
lean_dec(v_val_2838_);
goto v___jp_2826_;
}
}
else
{
lean_dec(v___x_2837_);
goto v___jp_2826_;
}
v___jp_2826_:
{
lean_object* v___x_2827_; uint8_t v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2827_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1);
v___x_2828_ = 0;
v___x_2829_ = l_Lean_MessageData_ofConstName(v_constName_2818_, v___x_2828_);
v___x_2830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2827_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3);
v___x_2832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2830_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2832_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
return v___x_2833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___boxed(lean_object* v_constName_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(v_constName_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(lean_object* v_params_2878_, size_t v_sz_2879_, size_t v_i_2880_, lean_object* v_bs_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
uint8_t v___x_2889_; 
v___x_2889_ = lean_usize_dec_lt(v_i_2880_, v_sz_2879_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = l_unsafeCast___redArg(v_bs_2881_);
lean_dec_ref(v_bs_2881_);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
else
{
lean_object* v___f_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v_v_2895_; lean_object* v___x_2896_; lean_object* v_bs_x27_2897_; lean_object* v___x_2898_; lean_object* v___f_2899_; lean_object* v___x_2900_; 
v___f_2892_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0));
v___x_2893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0));
v___x_2894_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1));
v_v_2895_ = lean_array_uget(v_bs_2881_, v_i_2880_);
v___x_2896_ = lean_unsigned_to_nat(0u);
v_bs_x27_2897_ = lean_array_uset(v_bs_2881_, v_i_2880_, v___x_2896_);
v___x_2898_ = l_unsafeCast___redArg(v_v_2895_);
lean_dec(v_v_2895_);
lean_inc(v___x_2898_);
v___f_2899_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2899_, 0, v___x_2898_);
lean_closure_set(v___f_2899_, 1, v___f_2892_);
lean_closure_set(v___f_2899_, 2, v___x_2893_);
lean_closure_set(v___f_2899_, 3, v___x_2894_);
v___x_2900_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(v___x_2898_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v_toConstantVal_2902_; lean_object* v_type_2903_; lean_object* v___x_2904_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v_toConstantVal_2902_ = lean_ctor_get(v_a_2901_, 0);
lean_inc_ref(v_toConstantVal_2902_);
lean_dec(v_a_2901_);
v_type_2903_ = lean_ctor_get(v_toConstantVal_2902_, 2);
lean_inc_ref(v_type_2903_);
lean_dec_ref(v_toConstantVal_2902_);
v___x_2904_ = l_Lean_Meta_instantiateForall(v_type_2903_, v_params_2878_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_a_2905_; uint8_t v___x_2906_; lean_object* v___x_2907_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v___x_2904_, 1);
v___x_2906_ = 0;
v___x_2907_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_a_2905_, v___f_2899_, v___x_2906_, v___x_2906_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; size_t v___x_2909_; size_t v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_a_2908_);
lean_dec_ref_known(v___x_2907_, 1);
v___x_2909_ = ((size_t)1ULL);
v___x_2910_ = lean_usize_add(v_i_2880_, v___x_2909_);
v___x_2911_ = l_unsafeCast___redArg(v_a_2908_);
lean_dec(v_a_2908_);
v___x_2912_ = lean_array_uset(v_bs_x27_2897_, v_i_2880_, v___x_2911_);
v_i_2880_ = v___x_2910_;
v_bs_2881_ = v___x_2912_;
goto _start;
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec_ref(v_bs_x27_2897_);
v_a_2914_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2907_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2907_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_dec_ref(v___f_2899_);
lean_dec_ref(v_bs_x27_2897_);
v_a_2922_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2904_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2904_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_dec_ref(v___f_2899_);
lean_dec_ref(v_bs_x27_2897_);
v_a_2930_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2900_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2900_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___boxed(lean_object* v_params_2938_, lean_object* v_sz_2939_, lean_object* v_i_2940_, lean_object* v_bs_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
size_t v_sz_boxed_2949_; size_t v_i_boxed_2950_; lean_object* v_res_2951_; 
v_sz_boxed_2949_ = lean_unbox_usize(v_sz_2939_);
lean_dec(v_sz_2939_);
v_i_boxed_2950_ = lean_unbox_usize(v_i_2940_);
lean_dec(v_i_2940_);
v_res_2951_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(v_params_2938_, v_sz_boxed_2949_, v_i_boxed_2950_, v_bs_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec_ref(v___y_2942_);
lean_dec_ref(v_params_2938_);
return v_res_2951_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4(void){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0));
v___x_2965_ = l_String_toRawSubstring_x27(v___x_2964_);
return v___x_2965_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8(void){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7));
v___x_2974_ = l_String_toRawSubstring_x27(v___x_2973_);
return v___x_2974_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20(void){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19));
v___x_3004_ = l_String_toRawSubstring_x27(v___x_3003_);
return v___x_3004_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25(void){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24));
v___x_3012_ = l_String_toRawSubstring_x27(v___x_3011_);
return v___x_3012_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30));
v___x_3024_ = l_Lean_stringToMessageData(v___x_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(lean_object* v_indVal_3025_, lean_object* v_params_3026_, lean_object* v_encInstBinders_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_){
_start:
{
lean_object* v_toCold_3035_; lean_object* v_options_3036_; lean_object* v_inheritedTraceOptions_3037_; uint8_t v_hasTrace_3038_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; 
v_toCold_3035_ = lean_ctor_get(v_a_3032_, 0);
v_options_3036_ = lean_ctor_get(v_toCold_3035_, 2);
v_inheritedTraceOptions_3037_ = lean_ctor_get(v_toCold_3035_, 11);
v_hasTrace_3038_ = lean_ctor_get_uint8(v_options_3036_, sizeof(void*)*1);
if (v_hasTrace_3038_ == 0)
{
v___y_3040_ = v_a_3028_;
v___y_3041_ = v_a_3029_;
v___y_3042_ = v_a_3030_;
v___y_3043_ = v_a_3031_;
v___y_3044_ = v_a_3032_;
v___y_3045_ = v_a_3033_;
goto v___jp_3039_;
}
else
{
lean_object* v_cls_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v_cls_3390_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135));
v___x_3391_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138);
v___x_3392_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3037_, v_options_3036_, v___x_3391_);
if (v___x_3392_ == 0)
{
v___y_3040_ = v_a_3028_;
v___y_3041_ = v_a_3029_;
v___y_3042_ = v_a_3030_;
v___y_3043_ = v_a_3031_;
v___y_3044_ = v_a_3032_;
v___y_3045_ = v_a_3033_;
goto v___jp_3039_;
}
else
{
lean_object* v_toConstantVal_3393_; lean_object* v_name_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v_toConstantVal_3393_ = lean_ctor_get(v_indVal_3025_, 0);
v_name_3394_ = lean_ctor_get(v_toConstantVal_3393_, 0);
v___x_3395_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31);
lean_inc(v_name_3394_);
v___x_3396_ = l_Lean_MessageData_ofName(v_name_3394_);
v___x_3397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3395_);
lean_ctor_set(v___x_3397_, 1, v___x_3396_);
v___x_3398_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142);
v___x_3399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
lean_inc_ref(v_params_3026_);
v___x_3400_ = lean_array_to_list(v_params_3026_);
v___x_3401_ = lean_box(0);
v___x_3402_ = l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(v___x_3400_, v___x_3401_);
v___x_3403_ = l_Lean_MessageData_ofList(v___x_3402_);
v___x_3404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3399_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_3390_, v___x_3404_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_dec_ref_known(v___x_3405_, 1);
v___y_3040_ = v_a_3028_;
v___y_3041_ = v_a_3029_;
v___y_3042_ = v_a_3030_;
v___y_3043_ = v_a_3031_;
v___y_3044_ = v_a_3032_;
v___y_3045_ = v_a_3033_;
goto v___jp_3039_;
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec_ref(v_params_3026_);
lean_dec_ref(v_indVal_3025_);
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3405_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
v___jp_3039_:
{
lean_object* v_toConstantVal_3046_; lean_object* v_ctors_3047_; lean_object* v___x_3048_; size_t v_sz_3049_; size_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_40737__overap_3055_; lean_object* v___x_3056_; 
v_toConstantVal_3046_ = lean_ctor_get(v_indVal_3025_, 0);
lean_inc_ref(v_toConstantVal_3046_);
v_ctors_3047_ = lean_ctor_get(v_indVal_3025_, 4);
lean_inc(v_ctors_3047_);
lean_dec_ref(v_indVal_3025_);
v___x_3048_ = lean_array_mk(v_ctors_3047_);
v_sz_3049_ = lean_array_size(v___x_3048_);
v___x_3050_ = ((size_t)0ULL);
v___x_3051_ = l_unsafeCast___redArg(v___x_3048_);
lean_dec_ref(v___x_3048_);
v___x_3052_ = lean_box_usize(v_sz_3049_);
v___x_3053_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
lean_inc_ref(v_params_3026_);
v___x_3054_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___boxed), 11, 4);
lean_closure_set(v___x_3054_, 0, v_params_3026_);
lean_closure_set(v___x_3054_, 1, v___x_3052_);
lean_closure_set(v___x_3054_, 2, v___x_3053_);
lean_closure_set(v___x_3054_, 3, v___x_3051_);
v___x_40737__overap_3055_ = l_unsafeCast___redArg(v___x_3054_);
lean_dec_ref(v___x_3054_);
lean_inc(v___y_3045_);
lean_inc_ref(v___y_3044_);
lean_inc(v___y_3043_);
lean_inc_ref(v___y_3042_);
lean_inc(v___y_3041_);
lean_inc_ref(v___y_3040_);
v___x_3056_ = lean_apply_7(v___x_40737__overap_3055_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, lean_box(0));
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3058_; lean_object* v_fst_3059_; lean_object* v_snd_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3381_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3058_ = l_Array_unzip___redArg(v_a_3057_);
lean_dec(v_a_3057_);
v_fst_3059_ = lean_ctor_get(v___x_3058_, 0);
v_snd_3060_ = lean_ctor_get(v___x_3058_, 1);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3062_ = v___x_3058_;
v_isShared_3063_ = v_isSharedCheck_3381_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_snd_3060_);
lean_inc(v_fst_3059_);
lean_dec(v___x_3058_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3381_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3064_; lean_object* v_fst_3065_; lean_object* v_snd_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3380_; 
v___x_3064_ = l_Array_unzip___redArg(v_snd_3060_);
lean_dec(v_snd_3060_);
v_fst_3065_ = lean_ctor_get(v___x_3064_, 0);
v_snd_3066_ = lean_ctor_get(v___x_3064_, 1);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3068_ = v___x_3064_;
v_isShared_3069_ = v_isSharedCheck_3380_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_snd_3066_);
lean_inc(v_fst_3065_);
lean_dec(v___x_3064_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3380_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
size_t v_sz_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_40742__overap_3075_; lean_object* v___x_3076_; 
v_sz_3070_ = lean_array_size(v_params_3026_);
v___x_3071_ = l_unsafeCast___redArg(v_params_3026_);
lean_dec_ref(v_params_3026_);
v___x_3072_ = lean_box_usize(v_sz_3070_);
v___x_3073_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
v___x_3074_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed), 10, 3);
lean_closure_set(v___x_3074_, 0, v___x_3072_);
lean_closure_set(v___x_3074_, 1, v___x_3073_);
lean_closure_set(v___x_3074_, 2, v___x_3071_);
v___x_40742__overap_3075_ = l_unsafeCast___redArg(v___x_3074_);
lean_dec_ref(v___x_3074_);
lean_inc(v___y_3045_);
lean_inc_ref(v___y_3044_);
lean_inc(v___y_3043_);
lean_inc_ref(v___y_3042_);
lean_inc(v___y_3041_);
lean_inc_ref(v___y_3040_);
v___x_3076_ = lean_apply_7(v___x_40742__overap_3075_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, lean_box(0));
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_toCold_3077_; lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3371_; 
v_toCold_3077_ = lean_ctor_get(v___y_3044_, 0);
v_a_3078_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3080_ = v___x_3076_;
v_isShared_3081_ = v_isSharedCheck_3371_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3076_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3371_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v_ref_3082_; lean_object* v_name_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3368_; 
v_ref_3082_ = lean_ctor_get(v___y_3044_, 2);
v_name_3083_ = lean_ctor_get(v_toConstantVal_3046_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v_toConstantVal_3046_);
if (v_isSharedCheck_3368_ == 0)
{
lean_object* v_unused_3369_; lean_object* v_unused_3370_; 
v_unused_3369_ = lean_ctor_get(v_toConstantVal_3046_, 2);
lean_dec(v_unused_3369_);
v_unused_3370_ = lean_ctor_get(v_toConstantVal_3046_, 1);
lean_dec(v_unused_3370_);
v___x_3085_ = v_toConstantVal_3046_;
v_isShared_3086_ = v_isSharedCheck_3368_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_name_3083_);
lean_dec(v_toConstantVal_3046_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3368_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v_quotContext_3087_; lean_object* v_currMacroScope_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3094_; 
v_quotContext_3087_ = lean_ctor_get(v_toCold_3077_, 8);
v_currMacroScope_3088_ = lean_ctor_get(v_toCold_3077_, 9);
v___x_3089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_3090_ = 0;
v___x_3091_ = l_Lean_SourceInfo_fromRef(v_ref_3082_, v___x_3090_);
v___x_3092_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66));
lean_inc(v___x_3091_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 2);
lean_ctor_set(v___x_3068_, 1, v___x_3092_);
lean_ctor_set(v___x_3068_, 0, v___x_3091_);
v___x_3094_ = v___x_3068_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3367_, 1, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; size_t v_sz_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3095_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65));
v___x_3096_ = l_Lean_mkCIdent(v_name_3083_);
lean_inc_n(v___x_3091_, 2);
v___x_3097_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3095_, v___x_3094_, v___x_3096_);
v___x_3098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_3099_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v_sz_3100_ = lean_array_size(v_a_3078_);
v___x_3101_ = l_unsafeCast___redArg(v_a_3078_);
lean_dec(v_a_3078_);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_3100_, v___x_3050_, v___x_3101_);
v___x_3103_ = l_unsafeCast___redArg(v___x_3102_);
lean_dec_ref(v___x_3102_);
v___x_3104_ = l_unsafeCast___redArg(v___x_3103_);
lean_dec(v___x_3103_);
v___x_3105_ = l_Array_append___redArg(v___x_3099_, v___x_3104_);
lean_dec(v___x_3104_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set_tag(v___x_3085_, 1);
lean_ctor_set(v___x_3085_, 2, v___x_3105_);
lean_ctor_set(v___x_3085_, 1, v___x_3098_);
lean_ctor_set(v___x_3085_, 0, v___x_3091_);
v___x_3107_ = v___x_3085_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3366_, 1, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3366_, 2, v___x_3105_);
v___x_3107_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3116_; 
lean_inc_n(v___x_3091_, 4);
v___x_3108_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3089_, v___x_3097_, v___x_3107_);
v___x_3109_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5));
v___x_3110_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
v___x_3111_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3091_);
lean_ctor_set(v___x_3111_, 1, v___x_3098_);
lean_ctor_set(v___x_3111_, 2, v___x_3099_);
lean_inc_ref_n(v___x_3111_, 7);
v___x_3112_ = l_Lean_Syntax_node7(v___x_3091_, v___x_3110_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_);
v___x_3113_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0));
v___x_3114_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1));
if (v_isShared_3063_ == 0)
{
lean_ctor_set_tag(v___x_3062_, 2);
lean_ctor_set(v___x_3062_, 1, v___x_3113_);
lean_ctor_set(v___x_3062_, 0, v___x_3091_);
v___x_3116_ = v___x_3062_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v___x_3113_);
v___x_3116_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; size_t v_sz_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; size_t v_sz_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; size_t v_sz_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; size_t v_sz_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; size_t v_sz_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3363_; 
v___x_3117_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13));
v___x_3118_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15);
v___x_3119_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16));
lean_inc_n(v_currMacroScope_3088_, 14);
lean_inc_n(v_quotContext_3087_, 14);
v___x_3120_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3119_, v_currMacroScope_3088_);
v___x_3121_ = lean_box(0);
lean_inc_n(v___x_3091_, 114);
v___x_3122_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3091_);
lean_ctor_set(v___x_3122_, 1, v___x_3118_);
lean_ctor_set(v___x_3122_, 2, v___x_3120_);
lean_ctor_set(v___x_3122_, 3, v___x_3121_);
lean_inc_ref_n(v___x_3111_, 50);
lean_inc_ref(v___x_3122_);
v___x_3123_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3117_, v___x_3122_, v___x_3111_);
v___x_3124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6));
v___x_3125_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3124_, v___x_3111_, v___x_3111_);
v___x_3126_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17));
v___x_3127_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3091_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
lean_inc_ref(v___x_3127_);
v___x_3128_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3127_);
v_sz_3129_ = lean_array_size(v_fst_3059_);
v___x_3130_ = l_unsafeCast___redArg(v_fst_3059_);
lean_dec(v_fst_3059_);
v___x_3131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3129_, v___x_3050_, v___x_3130_);
v___x_3132_ = l_unsafeCast___redArg(v___x_3131_);
lean_dec_ref(v___x_3131_);
v___x_3133_ = l_Array_append___redArg(v___x_3099_, v___x_3132_);
lean_dec(v___x_3132_);
v___x_3134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3091_);
lean_ctor_set(v___x_3134_, 1, v___x_3098_);
lean_ctor_set(v___x_3134_, 2, v___x_3133_);
v___x_3135_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21));
v___x_3136_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22));
v___x_3137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3091_);
lean_ctor_set(v___x_3137_, 1, v___x_3136_);
v___x_3138_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24));
v___x_3139_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26);
v___x_3140_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27));
v___x_3141_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3140_, v_currMacroScope_3088_);
v___x_3142_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32));
v___x_3143_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3091_);
lean_ctor_set(v___x_3143_, 1, v___x_3139_);
lean_ctor_set(v___x_3143_, 2, v___x_3141_);
lean_ctor_set(v___x_3143_, 3, v___x_3142_);
v___x_3144_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3138_, v___x_3111_, v___x_3143_);
v___x_3145_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33));
v___x_3146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3091_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35);
v___x_3148_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36));
v___x_3149_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3148_, v_currMacroScope_3088_);
v___x_3150_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41));
v___x_3151_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3091_);
lean_ctor_set(v___x_3151_, 1, v___x_3147_);
lean_ctor_set(v___x_3151_, 2, v___x_3149_);
lean_ctor_set(v___x_3151_, 3, v___x_3150_);
v___x_3152_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3138_, v___x_3111_, v___x_3151_);
lean_inc_ref(v___x_3146_);
v___x_3153_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3144_, v___x_3146_, v___x_3152_);
v___x_3154_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3098_, v___x_3137_, v___x_3153_);
v___x_3155_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3135_, v___x_3154_);
v___x_3156_ = l_Lean_Syntax_node8(v___x_3091_, v___x_3114_, v___x_3116_, v___x_3123_, v___x_3125_, v___x_3128_, v___x_3134_, v___x_3111_, v___x_3155_, v___x_3111_);
v___x_3157_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3109_, v___x_3112_, v___x_3156_);
v___x_3158_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42));
v___x_3159_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43));
v___x_3160_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44));
v___x_3161_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45));
v___x_3162_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3091_);
lean_ctor_set(v___x_3162_, 1, v___x_3160_);
v___x_3163_ = l_unsafeCast___redArg(v_encInstBinders_3027_);
v___x_3164_ = l_Array_append___redArg(v___x_3099_, v___x_3163_);
lean_dec(v___x_3163_);
v___x_3165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3091_);
lean_ctor_set(v___x_3165_, 1, v___x_3098_);
lean_ctor_set(v___x_3165_, 2, v___x_3164_);
v___x_3166_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3161_, v___x_3162_, v___x_3165_);
v___x_3167_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3091_);
lean_ctor_set(v___x_3167_, 1, v___x_3158_);
v___x_3168_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2));
v___x_3169_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3));
v___x_3170_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3091_);
lean_ctor_set(v___x_3170_, 1, v___x_3168_);
v___x_3171_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3169_, v___x_3170_);
v___x_3172_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3171_);
v___x_3173_ = l_Lean_Syntax_node7(v___x_3091_, v___x_3110_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3111_, v___x_3172_);
v___x_3174_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46));
v___x_3175_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47));
v___x_3176_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49));
v___x_3177_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3176_, v___x_3111_);
v___x_3178_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3091_);
lean_ctor_set(v___x_3178_, 1, v___x_3174_);
v___x_3179_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51));
v___x_3180_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_3181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_3182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3091_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52);
v___x_3184_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53));
v___x_3185_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3184_, v_currMacroScope_3088_);
v___x_3186_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56));
v___x_3187_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3091_);
lean_ctor_set(v___x_3187_, 1, v___x_3183_);
lean_ctor_set(v___x_3187_, 2, v___x_3185_);
lean_ctor_set(v___x_3187_, 3, v___x_3186_);
v___x_3188_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3108_);
v___x_3189_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3089_, v___x_3187_, v___x_3188_);
lean_inc_ref(v___x_3182_);
v___x_3190_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3180_, v___x_3182_, v___x_3189_);
lean_inc(v___x_3190_);
v___x_3191_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3179_, v___x_3111_, v___x_3190_);
v___x_3192_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68));
v___x_3193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_3194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3091_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70));
v___x_3196_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71));
v___x_3197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3091_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
v___x_3198_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73));
v___x_3199_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_3200_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_3201_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_3202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_3203_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3202_, v_currMacroScope_3088_);
v___x_3204_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75));
v___x_3205_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3091_);
lean_ctor_set(v___x_3205_, 1, v___x_3201_);
lean_ctor_set(v___x_3205_, 2, v___x_3203_);
lean_ctor_set(v___x_3205_, 3, v___x_3204_);
v___x_3206_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3200_, v___x_3205_, v___x_3111_);
v___x_3207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_3208_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77);
v___x_3209_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78));
v___x_3210_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3209_, v_currMacroScope_3088_);
v___x_3211_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3091_);
lean_ctor_set(v___x_3211_, 1, v___x_3208_);
lean_ctor_set(v___x_3211_, 2, v___x_3210_);
lean_ctor_set(v___x_3211_, 3, v___x_3121_);
lean_inc_ref(v___x_3211_);
lean_inc_ref_n(v___x_3194_, 5);
v___x_3212_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3207_, v___x_3194_, v___x_3111_, v___x_3211_);
v___x_3213_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3111_, v___x_3111_, v___x_3212_);
v___x_3214_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3199_, v___x_3206_, v___x_3213_);
v___x_3215_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_3216_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
v___x_3217_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3216_, v_currMacroScope_3088_);
v___x_3218_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80));
v___x_3219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3091_);
lean_ctor_set(v___x_3219_, 1, v___x_3215_);
lean_ctor_set(v___x_3219_, 2, v___x_3217_);
lean_ctor_set(v___x_3219_, 3, v___x_3218_);
v___x_3220_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3200_, v___x_3219_, v___x_3111_);
v___x_3221_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82);
v___x_3222_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83));
v___x_3223_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3222_, v_currMacroScope_3088_);
v___x_3224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3091_);
lean_ctor_set(v___x_3224_, 1, v___x_3221_);
lean_ctor_set(v___x_3224_, 2, v___x_3223_);
lean_ctor_set(v___x_3224_, 3, v___x_3121_);
lean_inc_ref(v___x_3224_);
v___x_3225_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3207_, v___x_3194_, v___x_3111_, v___x_3224_);
v___x_3226_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3111_, v___x_3111_, v___x_3225_);
v___x_3227_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3199_, v___x_3220_, v___x_3226_);
v___x_3228_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3214_, v___x_3146_, v___x_3227_);
v___x_3229_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3198_, v___x_3228_);
v___x_3230_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85));
v___x_3231_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3230_, v___x_3111_);
v___x_3232_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86));
v___x_3233_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3091_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = l_Lean_Syntax_node6(v___x_3091_, v___x_3195_, v___x_3197_, v___x_3111_, v___x_3229_, v___x_3231_, v___x_3111_, v___x_3233_);
v___x_3235_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89));
v___x_3236_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3235_, v___x_3111_, v___x_3111_);
v___x_3237_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91));
v___x_3238_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93));
v___x_3239_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95));
v___x_3240_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97));
v___x_3241_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99));
v___x_3242_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3241_, v___x_3211_);
v___x_3243_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4);
v___x_3244_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1));
v___x_3245_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3244_, v_currMacroScope_3088_);
v___x_3246_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3091_);
lean_ctor_set(v___x_3246_, 1, v___x_3243_);
lean_ctor_set(v___x_3246_, 2, v___x_3245_);
lean_ctor_set(v___x_3246_, 3, v___x_3121_);
lean_inc_ref(v___x_3246_);
v___x_3247_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3246_);
v___x_3248_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5));
v___x_3249_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6));
v___x_3250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3091_);
lean_ctor_set(v___x_3250_, 1, v___x_3248_);
v___x_3251_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123));
v___x_3252_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3251_, v___x_3111_);
v___x_3253_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8);
v___x_3254_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9));
v___x_3255_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3254_, v_currMacroScope_3088_);
v___x_3256_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3091_);
lean_ctor_set(v___x_3256_, 1, v___x_3253_);
lean_ctor_set(v___x_3256_, 2, v___x_3255_);
lean_ctor_set(v___x_3256_, 3, v___x_3121_);
v___x_3257_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3241_, v___x_3256_);
v___x_3258_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3190_);
lean_inc(v___x_3234_);
v___x_3259_ = l_Lean_Syntax_node5(v___x_3091_, v___x_3240_, v___x_3257_, v___x_3111_, v___x_3258_, v___x_3194_, v___x_3234_);
v___x_3260_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3239_, v___x_3259_);
v___x_3261_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10));
v___x_3262_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11));
v___x_3263_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3091_);
lean_ctor_set(v___x_3263_, 1, v___x_3261_);
v___x_3264_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13));
v___x_3265_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3264_, v___x_3111_, v___x_3246_);
v___x_3266_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3265_);
v___x_3267_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14));
v___x_3268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3091_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16));
v_sz_3270_ = lean_array_size(v_fst_3065_);
v___x_3271_ = l_unsafeCast___redArg(v_fst_3065_);
lean_dec(v_fst_3065_);
v___x_3272_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_3270_, v___x_3050_, v___x_3271_);
v___x_3273_ = l_unsafeCast___redArg(v___x_3272_);
lean_dec_ref(v___x_3272_);
v_sz_3274_ = lean_array_size(v___x_3273_);
v___x_3275_ = l_unsafeCast___redArg(v___x_3273_);
lean_dec(v___x_3273_);
v___x_3276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3274_, v___x_3050_, v___x_3275_);
v___x_3277_ = l_unsafeCast___redArg(v___x_3276_);
lean_dec_ref(v___x_3276_);
v___x_3278_ = l_Array_append___redArg(v___x_3099_, v___x_3277_);
lean_dec(v___x_3277_);
v___x_3279_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3091_);
lean_ctor_set(v___x_3279_, 1, v___x_3098_);
lean_ctor_set(v___x_3279_, 2, v___x_3278_);
v___x_3280_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3269_, v___x_3279_);
lean_inc_ref(v___x_3268_);
lean_inc_ref(v___x_3263_);
v___x_3281_ = l_Lean_Syntax_node6(v___x_3091_, v___x_3262_, v___x_3263_, v___x_3111_, v___x_3111_, v___x_3266_, v___x_3268_, v___x_3280_);
lean_inc(v___x_3260_);
lean_inc_n(v___x_3252_, 2);
lean_inc_ref(v___x_3250_);
v___x_3282_ = l_Lean_Syntax_node5(v___x_3091_, v___x_3249_, v___x_3250_, v___x_3252_, v___x_3260_, v___x_3111_, v___x_3281_);
v___x_3283_ = l_Lean_Syntax_node5(v___x_3091_, v___x_3240_, v___x_3242_, v___x_3247_, v___x_3111_, v___x_3194_, v___x_3282_);
v___x_3284_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3239_, v___x_3283_);
lean_inc_n(v___x_3236_, 2);
v___x_3285_ = l_Lean_Syntax_node4(v___x_3091_, v___x_3238_, v___x_3111_, v___x_3111_, v___x_3284_, v___x_3236_);
v___x_3286_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3241_, v___x_3224_);
v___x_3287_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111);
v___x_3288_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112));
v___x_3289_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3288_, v_currMacroScope_3088_);
v___x_3290_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3091_);
lean_ctor_set(v___x_3290_, 1, v___x_3287_);
lean_ctor_set(v___x_3290_, 2, v___x_3289_);
lean_ctor_set(v___x_3290_, 3, v___x_3121_);
v___x_3291_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3290_);
v___x_3292_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113));
v___x_3293_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114));
v___x_3294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3091_);
lean_ctor_set(v___x_3294_, 1, v___x_3292_);
v___x_3295_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116));
v___x_3296_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118));
v___x_3297_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18));
v___x_3298_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3297_, v___x_3250_, v___x_3252_, v___x_3260_);
v___x_3299_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3296_, v___x_3298_, v___x_3111_);
v___x_3300_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120));
v___x_3301_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121));
v___x_3302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3091_);
lean_ctor_set(v___x_3302_, 1, v___x_3301_);
v___x_3303_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125));
v___x_3304_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20);
v___x_3305_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21));
v___x_3306_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3305_, v_currMacroScope_3088_);
v___x_3307_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3091_);
lean_ctor_set(v___x_3307_, 1, v___x_3304_);
lean_ctor_set(v___x_3307_, 2, v___x_3306_);
lean_ctor_set(v___x_3307_, 3, v___x_3121_);
v___x_3308_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3180_, v___x_3182_, v___x_3122_);
v___x_3309_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3308_);
v___x_3310_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_3311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3091_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
v___x_3312_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_3313_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127);
v___x_3314_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128));
v___x_3315_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3314_, v_currMacroScope_3088_);
v___x_3316_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131));
v___x_3317_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3091_);
lean_ctor_set(v___x_3317_, 1, v___x_3313_);
lean_ctor_set(v___x_3317_, 2, v___x_3315_);
lean_ctor_set(v___x_3317_, 3, v___x_3316_);
lean_inc(v___x_3291_);
v___x_3318_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3089_, v___x_3317_, v___x_3291_);
v___x_3319_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3312_, v___x_3318_);
lean_inc_ref(v___x_3307_);
v___x_3320_ = l_Lean_Syntax_node4(v___x_3091_, v___x_3303_, v___x_3307_, v___x_3309_, v___x_3311_, v___x_3319_);
v___x_3321_ = l_Lean_Syntax_node4(v___x_3091_, v___x_3300_, v___x_3302_, v___x_3111_, v___x_3252_, v___x_3320_);
v___x_3322_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3296_, v___x_3321_, v___x_3111_);
v___x_3323_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23));
v___x_3324_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25);
v___x_3325_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26));
v___x_3326_ = l_Lean_addMacroScope(v_quotContext_3087_, v___x_3325_, v_currMacroScope_3088_);
v___x_3327_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28));
v___x_3328_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3091_);
lean_ctor_set(v___x_3328_, 1, v___x_3324_);
lean_ctor_set(v___x_3328_, 2, v___x_3326_);
lean_ctor_set(v___x_3328_, 3, v___x_3327_);
v___x_3329_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29));
v___x_3330_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3091_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3264_, v___x_3111_, v___x_3307_);
v___x_3332_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3331_);
v_sz_3333_ = lean_array_size(v_snd_3066_);
v___x_3334_ = l_unsafeCast___redArg(v_snd_3066_);
lean_dec(v_snd_3066_);
v___x_3335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_3333_, v___x_3050_, v___x_3334_);
v___x_3336_ = l_unsafeCast___redArg(v___x_3335_);
lean_dec_ref(v___x_3335_);
v_sz_3337_ = lean_array_size(v___x_3336_);
v___x_3338_ = l_unsafeCast___redArg(v___x_3336_);
lean_dec(v___x_3336_);
v___x_3339_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3337_, v___x_3050_, v___x_3338_);
v___x_3340_ = l_unsafeCast___redArg(v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = l_Array_append___redArg(v___x_3099_, v___x_3340_);
lean_dec(v___x_3340_);
v___x_3342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3091_);
lean_ctor_set(v___x_3342_, 1, v___x_3098_);
lean_ctor_set(v___x_3342_, 2, v___x_3341_);
v___x_3343_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3269_, v___x_3342_);
v___x_3344_ = l_Lean_Syntax_node6(v___x_3091_, v___x_3262_, v___x_3263_, v___x_3111_, v___x_3111_, v___x_3332_, v___x_3268_, v___x_3343_);
v___x_3345_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3323_, v___x_3328_, v___x_3330_, v___x_3344_);
v___x_3346_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3312_, v___x_3345_);
v___x_3347_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3296_, v___x_3346_, v___x_3111_);
v___x_3348_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3299_, v___x_3322_, v___x_3347_);
v___x_3349_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3295_, v___x_3348_);
v___x_3350_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3293_, v___x_3294_, v___x_3349_);
v___x_3351_ = l_Lean_Syntax_node5(v___x_3091_, v___x_3240_, v___x_3286_, v___x_3291_, v___x_3111_, v___x_3194_, v___x_3350_);
v___x_3352_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3239_, v___x_3351_);
v___x_3353_ = l_Lean_Syntax_node4(v___x_3091_, v___x_3238_, v___x_3111_, v___x_3111_, v___x_3352_, v___x_3236_);
v___x_3354_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3098_, v___x_3285_, v___x_3111_, v___x_3353_);
v___x_3355_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3237_, v___x_3127_, v___x_3354_, v___x_3111_);
v___x_3356_ = l_Lean_Syntax_node1(v___x_3091_, v___x_3098_, v___x_3355_);
v___x_3357_ = l_Lean_Syntax_node4(v___x_3091_, v___x_3192_, v___x_3194_, v___x_3234_, v___x_3236_, v___x_3356_);
v___x_3358_ = l_Lean_Syntax_node6(v___x_3091_, v___x_3175_, v___x_3177_, v___x_3178_, v___x_3111_, v___x_3111_, v___x_3191_, v___x_3357_);
v___x_3359_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3109_, v___x_3173_, v___x_3358_);
v___x_3360_ = l_Lean_Syntax_node3(v___x_3091_, v___x_3159_, v___x_3166_, v___x_3167_, v___x_3359_);
v___x_3361_ = l_Lean_Syntax_node2(v___x_3091_, v___x_3098_, v___x_3157_, v___x_3360_);
if (v_isShared_3081_ == 0)
{
lean_ctor_set(v___x_3080_, 0, v___x_3361_);
v___x_3363_ = v___x_3080_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
lean_del_object(v___x_3068_);
lean_dec(v_snd_3066_);
lean_dec(v_fst_3065_);
lean_del_object(v___x_3062_);
lean_dec(v_fst_3059_);
lean_dec_ref(v_toConstantVal_3046_);
v_a_3372_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3076_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3076_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v_toConstantVal_3046_);
lean_dec_ref(v_params_3026_);
v_a_3382_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3056_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3056_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___boxed(lean_object* v_indVal_3414_, lean_object* v_params_3415_, lean_object* v_encInstBinders_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(v_indVal_3414_, v_params_3415_, v_encInstBinders_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_);
lean_dec(v_a_3422_);
lean_dec_ref(v_a_3421_);
lean_dec(v_a_3420_);
lean_dec_ref(v_a_3419_);
lean_dec(v_a_3418_);
lean_dec_ref(v_a_3417_);
lean_dec_ref(v_encInstBinders_3416_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(size_t v_sz_3425_, size_t v_i_3426_, lean_object* v_bs_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_3425_, v_i_3426_, v_bs_3427_, v___y_3432_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___boxed(lean_object* v_sz_3436_, lean_object* v_i_3437_, lean_object* v_bs_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
size_t v_sz_boxed_3446_; size_t v_i_boxed_3447_; lean_object* v_res_3448_; 
v_sz_boxed_3446_ = lean_unbox_usize(v_sz_3436_);
lean_dec(v_sz_3436_);
v_i_boxed_3447_ = lean_unbox_usize(v_i_3437_);
lean_dec(v_i_3437_);
v_res_3448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(v_sz_boxed_3446_, v_i_boxed_3447_, v_bs_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(size_t v_sz_3449_, size_t v_i_3450_, lean_object* v_bs_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_3449_, v_i_3450_, v_bs_3451_, v___y_3456_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___boxed(lean_object* v_sz_3460_, lean_object* v_i_3461_, lean_object* v_bs_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
size_t v_sz_boxed_3470_; size_t v_i_boxed_3471_; lean_object* v_res_3472_; 
v_sz_boxed_3470_ = lean_unbox_usize(v_sz_3460_);
lean_dec(v_sz_3460_);
v_i_boxed_3471_ = lean_unbox_usize(v_i_3461_);
lean_dec(v_i_3461_);
v_res_3472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(v_sz_boxed_3470_, v_i_boxed_3471_, v_bs_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
lean_dec(v___y_3466_);
lean_dec_ref(v___y_3465_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(size_t v_sz_3490_, size_t v_i_3491_, lean_object* v_bs_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
uint8_t v___x_3497_; 
v___x_3497_ = lean_usize_dec_lt(v_i_3491_, v_sz_3490_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = l_unsafeCast___redArg(v_bs_3492_);
lean_dec_ref(v_bs_3492_);
v___x_3499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
return v___x_3499_;
}
else
{
lean_object* v_v_3500_; lean_object* v___x_3501_; lean_object* v_bs_x27_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
v_v_3500_ = lean_array_uget(v_bs_3492_, v_i_3491_);
v___x_3501_ = lean_unsigned_to_nat(0u);
v_bs_x27_3502_ = lean_array_uset(v_bs_3492_, v_i_3491_, v___x_3501_);
v___x_3503_ = l_unsafeCast___redArg(v_v_3500_);
lean_dec(v_v_3500_);
v___x_3504_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_3503_, v___y_3493_, v___y_3494_, v___y_3495_);
lean_dec(v___x_3503_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_toCold_3505_; lean_object* v_a_3506_; lean_object* v_ref_3507_; lean_object* v_quotContext_3508_; lean_object* v_currMacroScope_3509_; uint8_t v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; size_t v___x_3531_; size_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v_toCold_3505_ = lean_ctor_get(v___y_3494_, 0);
v_a_3506_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3504_, 1);
v_ref_3507_ = lean_ctor_get(v___y_3494_, 2);
v_quotContext_3508_ = lean_ctor_get(v_toCold_3505_, 8);
v_currMacroScope_3509_ = lean_ctor_get(v_toCold_3505_, 9);
v___x_3510_ = 0;
v___x_3511_ = l_Lean_SourceInfo_fromRef(v_ref_3507_, v___x_3510_);
v___x_3512_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1));
v___x_3513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2));
lean_inc_n(v___x_3511_, 6);
v___x_3514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3511_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_3516_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_3517_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3511_);
lean_ctor_set(v___x_3517_, 1, v___x_3515_);
lean_ctor_set(v___x_3517_, 2, v___x_3516_);
v___x_3518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_3519_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52);
v___x_3520_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53));
lean_inc(v_currMacroScope_3509_);
lean_inc(v_quotContext_3508_);
v___x_3521_ = l_Lean_addMacroScope(v_quotContext_3508_, v___x_3520_, v_currMacroScope_3509_);
v___x_3522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5));
v___x_3523_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3511_);
lean_ctor_set(v___x_3523_, 1, v___x_3519_);
lean_ctor_set(v___x_3523_, 2, v___x_3521_);
lean_ctor_set(v___x_3523_, 3, v___x_3522_);
v___x_3524_ = l_Lean_LocalDecl_userName(v_a_3506_);
lean_dec(v_a_3506_);
v___x_3525_ = l_Lean_mkIdent(v___x_3524_);
v___x_3526_ = l_Lean_Syntax_node1(v___x_3511_, v___x_3515_, v___x_3525_);
v___x_3527_ = l_Lean_Syntax_node2(v___x_3511_, v___x_3518_, v___x_3523_, v___x_3526_);
v___x_3528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6));
v___x_3529_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3511_);
lean_ctor_set(v___x_3529_, 1, v___x_3528_);
v___x_3530_ = l_Lean_Syntax_node4(v___x_3511_, v___x_3512_, v___x_3514_, v___x_3517_, v___x_3527_, v___x_3529_);
v___x_3531_ = ((size_t)1ULL);
v___x_3532_ = lean_usize_add(v_i_3491_, v___x_3531_);
v___x_3533_ = l_unsafeCast___redArg(v___x_3530_);
lean_dec(v___x_3530_);
v___x_3534_ = lean_array_uset(v_bs_x27_3502_, v_i_3491_, v___x_3533_);
v_i_3491_ = v___x_3532_;
v_bs_3492_ = v___x_3534_;
goto _start;
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec_ref(v_bs_x27_3502_);
v_a_3536_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3504_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3504_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___boxed(lean_object* v_sz_3544_, lean_object* v_i_3545_, lean_object* v_bs_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_){
_start:
{
size_t v_sz_boxed_3551_; size_t v_i_boxed_3552_; lean_object* v_res_3553_; 
v_sz_boxed_3551_ = lean_unbox_usize(v_sz_3544_);
lean_dec(v_sz_3544_);
v_i_boxed_3552_ = lean_unbox_usize(v_i_3545_);
lean_dec(v_i_3545_);
v_res_3553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(v_sz_boxed_3551_, v_i_boxed_3552_, v_bs_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec_ref(v___y_3547_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(size_t v_sz_3554_, size_t v_i_3555_, lean_object* v_bs_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_){
_start:
{
lean_object* v___x_3564_; 
v___x_3564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(v_sz_3554_, v_i_3555_, v_bs_3556_, v___y_3559_, v___y_3561_, v___y_3562_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___boxed(lean_object* v_sz_3565_, lean_object* v_i_3566_, lean_object* v_bs_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
size_t v_sz_boxed_3575_; size_t v_i_boxed_3576_; lean_object* v_res_3577_; 
v_sz_boxed_3575_ = lean_unbox_usize(v_sz_3565_);
lean_dec(v_sz_3565_);
v_i_boxed_3576_ = lean_unbox_usize(v_i_3566_);
lean_dec(v_i_3566_);
v_res_3577_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(v_sz_boxed_3575_, v_i_boxed_3576_, v_bs_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec(v___y_3569_);
lean_dec_ref(v___y_3568_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(size_t v_sz_3578_, size_t v_i_3579_, lean_object* v_bs_3580_){
_start:
{
uint8_t v___x_3581_; 
v___x_3581_ = lean_usize_dec_lt(v_i_3579_, v_sz_3578_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; 
v___x_3582_ = l_unsafeCast___redArg(v_bs_3580_);
lean_dec_ref(v_bs_3580_);
return v___x_3582_;
}
else
{
lean_object* v_v_3583_; lean_object* v___x_3584_; lean_object* v_bs_x27_3585_; lean_object* v___x_3586_; size_t v___x_3587_; size_t v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_v_3583_ = lean_array_uget(v_bs_3580_, v_i_3579_);
v___x_3584_ = lean_unsigned_to_nat(0u);
v_bs_x27_3585_ = lean_array_uset(v_bs_3580_, v_i_3579_, v___x_3584_);
v___x_3586_ = l_unsafeCast___redArg(v_v_3583_);
lean_dec(v_v_3583_);
v___x_3587_ = ((size_t)1ULL);
v___x_3588_ = lean_usize_add(v_i_3579_, v___x_3587_);
v___x_3589_ = l_unsafeCast___redArg(v___x_3586_);
lean_dec(v___x_3586_);
v___x_3590_ = lean_array_uset(v_bs_x27_3585_, v_i_3579_, v___x_3589_);
v_i_3579_ = v___x_3588_;
v_bs_3580_ = v___x_3590_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2___boxed(lean_object* v_sz_3592_, lean_object* v_i_3593_, lean_object* v_bs_3594_){
_start:
{
size_t v_sz_boxed_3595_; size_t v_i_boxed_3596_; lean_object* v_res_3597_; 
v_sz_boxed_3595_ = lean_unbox_usize(v_sz_3592_);
lean_dec(v_sz_3592_);
v_i_boxed_3596_ = lean_unbox_usize(v_i_3593_);
lean_dec(v_i_3593_);
v_res_3597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_boxed_3595_, v_i_boxed_3596_, v_bs_3594_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(lean_object* v_as_3598_, size_t v_i_3599_, size_t v_stop_3600_, lean_object* v_b_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v_a_3608_; uint8_t v___x_3612_; 
v___x_3612_ = lean_usize_dec_eq(v_i_3599_, v_stop_3600_);
if (v___x_3612_ == 0)
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = lean_array_uget_borrowed(v_as_3598_, v_i_3599_);
lean_inc(v___x_3613_);
v___x_3614_ = l_Lean_Meta_isType(v___x_3613_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; uint8_t v___x_3616_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3614_, 1);
v___x_3616_ = lean_unbox(v_a_3615_);
lean_dec(v_a_3615_);
if (v___x_3616_ == 0)
{
v_a_3608_ = v_b_3601_;
goto v___jp_3607_;
}
else
{
lean_object* v___x_3617_; 
lean_inc(v___x_3613_);
v___x_3617_ = lean_array_push(v_b_3601_, v___x_3613_);
v_a_3608_ = v___x_3617_;
goto v___jp_3607_;
}
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
lean_dec_ref(v_b_3601_);
v_a_3618_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3614_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3614_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
else
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3626_, 0, v_b_3601_);
return v___x_3626_;
}
v___jp_3607_:
{
size_t v___x_3609_; size_t v___x_3610_; 
v___x_3609_ = ((size_t)1ULL);
v___x_3610_ = lean_usize_add(v_i_3599_, v___x_3609_);
v_i_3599_ = v___x_3610_;
v_b_3601_ = v_a_3608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg___boxed(lean_object* v_as_3627_, lean_object* v_i_3628_, lean_object* v_stop_3629_, lean_object* v_b_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
size_t v_i_boxed_3636_; size_t v_stop_boxed_3637_; lean_object* v_res_3638_; 
v_i_boxed_3636_ = lean_unbox_usize(v_i_3628_);
lean_dec(v_i_3628_);
v_stop_boxed_3637_ = lean_unbox_usize(v_stop_3629_);
lean_dec(v_stop_3629_);
v_res_3638_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_as_3627_, v_i_boxed_3636_, v_stop_boxed_3637_, v_b_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
lean_dec_ref(v_as_3627_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(lean_object* v___x_3639_, lean_object* v_a_3640_, lean_object* v___x_3641_, lean_object* v_params_3642_, lean_object* v_x_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v_a_3652_; lean_object* v___y_3684_; lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_array_get_size(v_params_3642_);
v___x_3695_ = lean_mk_empty_array_with_capacity(v___x_3641_);
v___x_3696_ = lean_nat_dec_lt(v___x_3641_, v___x_3694_);
if (v___x_3696_ == 0)
{
v_a_3652_ = v___x_3695_;
goto v___jp_3651_;
}
else
{
uint8_t v___x_3697_; 
v___x_3697_ = lean_nat_dec_le(v___x_3694_, v___x_3694_);
if (v___x_3697_ == 0)
{
if (v___x_3696_ == 0)
{
v_a_3652_ = v___x_3695_;
goto v___jp_3651_;
}
else
{
size_t v___x_3698_; size_t v___x_3699_; lean_object* v___x_3700_; 
v___x_3698_ = ((size_t)0ULL);
v___x_3699_ = lean_usize_of_nat(v___x_3694_);
v___x_3700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_params_3642_, v___x_3698_, v___x_3699_, v___x_3695_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
v___y_3684_ = v___x_3700_;
goto v___jp_3683_;
}
}
else
{
size_t v___x_3701_; size_t v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = ((size_t)0ULL);
v___x_3702_ = lean_usize_of_nat(v___x_3694_);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_params_3642_, v___x_3701_, v___x_3702_, v___x_3695_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
v___y_3684_ = v___x_3703_;
goto v___jp_3683_;
}
}
v___jp_3651_:
{
size_t v_sz_3653_; size_t v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_7082__overap_3659_; lean_object* v___x_3660_; 
v_sz_3653_ = lean_array_size(v_a_3652_);
v___x_3654_ = ((size_t)0ULL);
v___x_3655_ = l_unsafeCast___redArg(v_a_3652_);
lean_dec_ref(v_a_3652_);
v___x_3656_ = lean_box_usize(v_sz_3653_);
v___x_3657_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed__const__1));
v___x_3658_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___boxed), 10, 3);
lean_closure_set(v___x_3658_, 0, v___x_3656_);
lean_closure_set(v___x_3658_, 1, v___x_3657_);
lean_closure_set(v___x_3658_, 2, v___x_3655_);
v___x_7082__overap_3659_ = l_unsafeCast___redArg(v___x_3658_);
lean_dec_ref(v___x_3658_);
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
lean_inc(v___y_3647_);
lean_inc_ref(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
v___x_3660_ = lean_apply_7(v___x_7082__overap_3659_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, lean_box(0));
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v_env_3663_; uint8_t v___x_3664_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref_known(v___x_3660_, 1);
v___x_3662_ = lean_st_ref_get(v___y_3649_);
v_env_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc_ref(v_env_3663_);
lean_dec(v___x_3662_);
v___x_3664_ = l_Lean_isStructure(v_env_3663_, v___x_3639_);
if (v___x_3664_ == 0)
{
size_t v_sz_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v_sz_3665_ = lean_array_size(v_a_3661_);
v___x_3666_ = l_unsafeCast___redArg(v_a_3661_);
lean_dec(v_a_3661_);
v___x_3667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_3665_, v___x_3654_, v___x_3666_);
v___x_3668_ = l_unsafeCast___redArg(v___x_3667_);
lean_dec_ref(v___x_3667_);
v___x_3669_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(v_a_3640_, v_params_3642_, v___x_3668_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
lean_dec(v___x_3668_);
return v___x_3669_;
}
else
{
size_t v_sz_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v_sz_3670_ = lean_array_size(v_a_3661_);
v___x_3671_ = l_unsafeCast___redArg(v_a_3661_);
lean_dec(v_a_3661_);
v___x_3672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_3670_, v___x_3654_, v___x_3671_);
v___x_3673_ = l_unsafeCast___redArg(v___x_3672_);
lean_dec_ref(v___x_3672_);
v___x_3674_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(v_a_3640_, v_params_3642_, v___x_3673_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
lean_dec(v___x_3673_);
return v___x_3674_;
}
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_dec_ref(v_params_3642_);
lean_dec_ref(v_a_3640_);
lean_dec(v___x_3639_);
v_a_3675_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3660_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3660_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
v___jp_3683_:
{
if (lean_obj_tag(v___y_3684_) == 0)
{
lean_object* v_a_3685_; 
v_a_3685_ = lean_ctor_get(v___y_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___y_3684_, 1);
v_a_3652_ = v_a_3685_;
goto v___jp_3651_;
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
lean_dec_ref(v_params_3642_);
lean_dec_ref(v_a_3640_);
lean_dec(v___x_3639_);
v_a_3686_ = lean_ctor_get(v___y_3684_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___y_3684_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___y_3684_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___y_3684_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed(lean_object* v___x_3704_, lean_object* v_a_3705_, lean_object* v___x_3706_, lean_object* v_params_3707_, lean_object* v_x_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(v___x_3704_, v_a_3705_, v___x_3706_, v_params_3707_, v_x_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec_ref(v_x_3708_);
lean_dec(v___x_3706_);
return v_res_3716_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3717_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0);
v___x_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
return v___x_3719_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3720_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1);
v___x_3721_ = lean_unsigned_to_nat(0u);
v___x_3722_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
lean_ctor_set(v___x_3722_, 2, v___x_3721_);
lean_ctor_set(v___x_3722_, 3, v___x_3721_);
lean_ctor_set(v___x_3722_, 4, v___x_3720_);
lean_ctor_set(v___x_3722_, 5, v___x_3720_);
lean_ctor_set(v___x_3722_, 6, v___x_3720_);
lean_ctor_set(v___x_3722_, 7, v___x_3720_);
lean_ctor_set(v___x_3722_, 8, v___x_3720_);
lean_ctor_set(v___x_3722_, 9, v___x_3720_);
lean_ctor_set(v___x_3722_, 10, v___x_3720_);
return v___x_3722_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3723_ = lean_unsigned_to_nat(32u);
v___x_3724_ = lean_mk_empty_array_with_capacity(v___x_3723_);
v___x_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
return v___x_3725_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3726_ = ((size_t)5ULL);
v___x_3727_ = lean_unsigned_to_nat(0u);
v___x_3728_ = lean_unsigned_to_nat(32u);
v___x_3729_ = lean_mk_empty_array_with_capacity(v___x_3728_);
v___x_3730_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3);
v___x_3731_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
lean_ctor_set(v___x_3731_, 1, v___x_3729_);
lean_ctor_set(v___x_3731_, 2, v___x_3727_);
lean_ctor_set(v___x_3731_, 3, v___x_3727_);
lean_ctor_set_usize(v___x_3731_, 4, v___x_3726_);
return v___x_3731_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3732_ = lean_box(1);
v___x_3733_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4);
v___x_3734_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1);
v___x_3735_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
lean_ctor_set(v___x_3735_, 1, v___x_3733_);
lean_ctor_set(v___x_3735_, 2, v___x_3732_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(lean_object* v_msgData_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v___x_3739_; lean_object* v_env_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v_scopes_3743_; lean_object* v___x_3744_; lean_object* v_opts_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3739_ = lean_st_ref_get(v___y_3737_);
v_env_3740_ = lean_ctor_get(v___x_3739_, 0);
lean_inc_ref(v_env_3740_);
lean_dec(v___x_3739_);
v___x_3741_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3742_ = lean_st_ref_get(v___y_3737_);
v_scopes_3743_ = lean_ctor_get(v___x_3742_, 2);
lean_inc(v_scopes_3743_);
lean_dec(v___x_3742_);
v___x_3744_ = l_List_head_x21___redArg(v___x_3741_, v_scopes_3743_);
lean_dec(v_scopes_3743_);
v_opts_3745_ = lean_ctor_get(v___x_3744_, 1);
lean_inc_ref(v_opts_3745_);
lean_dec(v___x_3744_);
v___x_3746_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2);
v___x_3747_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5);
v___x_3748_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3748_, 0, v_env_3740_);
lean_ctor_set(v___x_3748_, 1, v___x_3746_);
lean_ctor_set(v___x_3748_, 2, v___x_3747_);
lean_ctor_set(v___x_3748_, 3, v_opts_3745_);
v___x_3749_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3748_);
lean_ctor_set(v___x_3749_, 1, v_msgData_3736_);
v___x_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3749_);
return v___x_3750_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___boxed(lean_object* v_msgData_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v_res_3754_; 
v_res_3754_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msgData_3751_, v___y_3752_);
lean_dec(v___y_3752_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(lean_object* v_msgData_3755_, lean_object* v_macroStack_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v_scopes_3761_; lean_object* v___x_3762_; lean_object* v_opts_3763_; lean_object* v___x_3764_; uint8_t v___x_3765_; 
v___x_3759_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3760_ = lean_st_ref_get(v___y_3757_);
v_scopes_3761_ = lean_ctor_get(v___x_3760_, 2);
lean_inc(v_scopes_3761_);
lean_dec(v___x_3760_);
v___x_3762_ = l_List_head_x21___redArg(v___x_3759_, v_scopes_3761_);
lean_dec(v_scopes_3761_);
v_opts_3763_ = lean_ctor_get(v___x_3762_, 1);
lean_inc_ref(v_opts_3763_);
lean_dec(v___x_3762_);
v___x_3764_ = l_Lean_Elab_pp_macroStack;
v___x_3765_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_opts_3763_, v___x_3764_);
lean_dec_ref(v_opts_3763_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
lean_dec(v_macroStack_3756_);
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v_msgData_3755_);
return v___x_3766_;
}
else
{
if (lean_obj_tag(v_macroStack_3756_) == 0)
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_msgData_3755_);
return v___x_3767_;
}
else
{
lean_object* v_head_3768_; lean_object* v_after_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3784_; 
v_head_3768_ = lean_ctor_get(v_macroStack_3756_, 0);
lean_inc(v_head_3768_);
v_after_3769_ = lean_ctor_get(v_head_3768_, 1);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_head_3768_);
if (v_isSharedCheck_3784_ == 0)
{
lean_object* v_unused_3785_; 
v_unused_3785_ = lean_ctor_get(v_head_3768_, 0);
lean_dec(v_unused_3785_);
v___x_3771_ = v_head_3768_;
v_isShared_3772_ = v_isSharedCheck_3784_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_after_3769_);
lean_dec(v_head_3768_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3784_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3773_; lean_object* v___x_3775_; 
v___x_3773_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_3772_ == 0)
{
lean_ctor_set_tag(v___x_3771_, 7);
lean_ctor_set(v___x_3771_, 1, v___x_3773_);
lean_ctor_set(v___x_3771_, 0, v_msgData_3755_);
v___x_3775_ = v___x_3771_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_msgData_3755_);
lean_ctor_set(v_reuseFailAlloc_3783_, 1, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v_msgData_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3776_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2);
v___x_3777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = l_Lean_MessageData_ofSyntax(v_after_3769_);
v___x_3779_ = l_Lean_indentD(v___x_3778_);
v_msgData_3780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3780_, 0, v___x_3777_);
lean_ctor_set(v_msgData_3780_, 1, v___x_3779_);
v___x_3781_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(v_msgData_3780_, v_macroStack_3756_);
v___x_3782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
return v___x_3782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg___boxed(lean_object* v_msgData_3786_, lean_object* v_macroStack_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_msgData_3786_, v_macroStack_3787_, v___y_3788_);
lean_dec(v___y_3788_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(lean_object* v_msg_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = l_Lean_Elab_Command_getRef___redArg(v___y_3792_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; lean_object* v_macroStack_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v_a_3800_; lean_object* v___x_3801_; lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3810_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3795_, 1);
v_macroStack_3797_ = lean_ctor_get(v___y_3792_, 4);
v___x_3798_ = l_Lean_Elab_getBetterRef(v_a_3796_, v_macroStack_3797_);
lean_dec(v_a_3796_);
v___x_3799_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msg_3791_, v___y_3793_);
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3800_);
lean_dec_ref(v___x_3799_);
lean_inc(v_macroStack_3797_);
v___x_3801_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_a_3800_, v_macroStack_3797_, v___y_3793_);
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3804_ = v___x_3801_;
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3801_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3806_; lean_object* v___x_3808_; 
v___x_3806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3798_);
lean_ctor_set(v___x_3806_, 1, v_a_3802_);
if (v_isShared_3805_ == 0)
{
lean_ctor_set_tag(v___x_3804_, 1);
lean_ctor_set(v___x_3804_, 0, v___x_3806_);
v___x_3808_ = v___x_3804_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3806_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
lean_dec_ref(v_msg_3791_);
v_a_3811_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3795_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v___x_3795_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg___boxed(lean_object* v_msg_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v_msg_3819_, v___y_3820_, v___y_3821_);
lean_dec(v___y_3821_);
lean_dec_ref(v___y_3820_);
return v_res_3823_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0));
v___x_3826_ = l_Lean_stringToMessageData(v___x_3825_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(lean_object* v_constName_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v___x_3831_; lean_object* v_env_3832_; lean_object* v___x_3833_; 
v___x_3831_ = lean_st_ref_get(v___y_3829_);
v_env_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc_ref(v_env_3832_);
lean_dec(v___x_3831_);
lean_inc(v_constName_3827_);
v___x_3833_ = l_Lean_isInductiveCore_x3f(v_env_3832_, v_constName_3827_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v___x_3834_; uint8_t v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3834_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1);
v___x_3835_ = 0;
v___x_3836_ = l_Lean_MessageData_ofConstName(v_constName_3827_, v___x_3835_);
v___x_3837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3834_);
lean_ctor_set(v___x_3837_, 1, v___x_3836_);
v___x_3838_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1);
v___x_3839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3837_);
lean_ctor_set(v___x_3839_, 1, v___x_3838_);
v___x_3840_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3839_, v___y_3828_, v___y_3829_);
return v___x_3840_;
}
else
{
lean_object* v_val_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
lean_dec(v_constName_3827_);
v_val_3841_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3833_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_val_3841_);
lean_dec(v___x_3833_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
lean_ctor_set_tag(v___x_3843_, 0);
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_val_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___boxed(lean_object* v_constName_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(v_constName_3849_, v___y_3850_, v___y_3851_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
return v_res_3853_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1(void){
_start:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0));
v___x_3856_ = l_Lean_stringToMessageData(v___x_3855_);
return v___x_3856_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3(void){
_start:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3858_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2));
v___x_3859_ = l_Lean_stringToMessageData(v___x_3858_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(lean_object* v_declNames_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_){
_start:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; uint8_t v___x_3866_; 
v___x_3864_ = lean_array_get_size(v_declNames_3860_);
v___x_3865_ = lean_unsigned_to_nat(1u);
v___x_3866_ = lean_nat_dec_eq(v___x_3864_, v___x_3865_);
if (v___x_3866_ == 0)
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = lean_box(v___x_3866_);
v___x_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3867_);
return v___x_3868_;
}
else
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3869_ = lean_unsigned_to_nat(0u);
v___x_3870_ = lean_array_fget_borrowed(v_declNames_3860_, v___x_3869_);
lean_inc(v___x_3870_);
v___x_3871_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(v___x_3870_, v_a_3861_, v_a_3862_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v_toConstantVal_3873_; lean_object* v_numIndices_3874_; lean_object* v_all_3875_; lean_object* v___f_3876_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3914_; lean_object* v___y_3915_; lean_object* v___x_3927_; uint8_t v___x_3928_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v___x_3871_, 1);
v_toConstantVal_3873_ = lean_ctor_get(v_a_3872_, 0);
lean_inc_ref(v_toConstantVal_3873_);
v_numIndices_3874_ = lean_ctor_get(v_a_3872_, 2);
lean_inc(v_numIndices_3874_);
v_all_3875_ = lean_ctor_get(v_a_3872_, 3);
lean_inc(v_all_3875_);
lean_inc(v___x_3870_);
v___f_3876_ = lean_alloc_closure((void*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed), 12, 3);
lean_closure_set(v___f_3876_, 0, v___x_3870_);
lean_closure_set(v___f_3876_, 1, v_a_3872_);
lean_closure_set(v___f_3876_, 2, v___x_3869_);
v___x_3927_ = l_List_lengthTR___redArg(v_all_3875_);
lean_dec(v_all_3875_);
v___x_3928_ = lean_nat_dec_eq(v___x_3927_, v___x_3865_);
lean_dec(v___x_3927_);
if (v___x_3928_ == 0)
{
if (v___x_3866_ == 0)
{
v___y_3914_ = v_a_3861_;
v___y_3915_ = v_a_3862_;
goto v___jp_3913_;
}
else
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec_ref(v___f_3876_);
lean_dec(v_numIndices_3874_);
lean_dec_ref(v_toConstantVal_3873_);
v___x_3929_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3);
v___x_3930_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3929_, v_a_3861_, v_a_3862_);
v_a_3931_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3930_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3930_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
else
{
v___y_3914_ = v_a_3861_;
v___y_3915_ = v_a_3862_;
goto v___jp_3913_;
}
v___jp_3877_:
{
lean_object* v_type_3880_; uint8_t v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v_type_3880_ = lean_ctor_get(v_toConstantVal_3873_, 2);
lean_inc_ref(v_type_3880_);
lean_dec_ref(v_toConstantVal_3873_);
v___x_3881_ = 0;
v___x_3882_ = lean_box(v___x_3881_);
v___x_3883_ = lean_box(v___x_3881_);
v___x_3884_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed), 12, 5);
lean_closure_set(v___x_3884_, 0, lean_box(0));
lean_closure_set(v___x_3884_, 1, v_type_3880_);
lean_closure_set(v___x_3884_, 2, v___f_3876_);
lean_closure_set(v___x_3884_, 3, v___x_3882_);
lean_closure_set(v___x_3884_, 4, v___x_3883_);
v___x_3885_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3884_, v___y_3878_, v___y_3879_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v___x_3887_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v___x_3885_, 1);
v___x_3887_ = l_Lean_Elab_Command_elabCommand(v_a_3886_, v___y_3878_, v___y_3879_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3895_; 
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3895_ == 0)
{
lean_object* v_unused_3896_; 
v_unused_3896_ = lean_ctor_get(v___x_3887_, 0);
lean_dec(v_unused_3896_);
v___x_3889_ = v___x_3887_;
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
else
{
lean_dec(v___x_3887_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3895_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3891_; lean_object* v___x_3893_; 
v___x_3891_ = lean_box(v___x_3866_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3891_);
v___x_3893_ = v___x_3889_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v___x_3891_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
else
{
lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
v_a_3897_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3887_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_dec(v___x_3887_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
v_a_3905_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3885_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3885_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
v___jp_3913_:
{
uint8_t v___x_3916_; 
v___x_3916_ = lean_nat_dec_eq(v_numIndices_3874_, v___x_3869_);
lean_dec(v_numIndices_3874_);
if (v___x_3916_ == 0)
{
if (v___x_3866_ == 0)
{
v___y_3878_ = v___y_3914_;
v___y_3879_ = v___y_3915_;
goto v___jp_3877_;
}
else
{
lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
lean_dec_ref(v___f_3876_);
lean_dec_ref(v_toConstantVal_3873_);
v___x_3917_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1);
v___x_3918_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3917_, v___y_3914_, v___y_3915_);
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3918_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
else
{
v___y_3878_ = v___y_3914_;
v___y_3879_ = v___y_3915_;
goto v___jp_3877_;
}
}
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
v_a_3939_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3871_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3871_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed(lean_object* v_declNames_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(v_declNames_3947_, v_a_3948_, v_a_3949_);
lean_dec(v_a_3949_);
lean_dec_ref(v_a_3948_);
lean_dec_ref(v_declNames_3947_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(lean_object* v_as_3952_, size_t v_i_3953_, size_t v_stop_3954_, lean_object* v_b_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v___x_3963_; 
v___x_3963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_as_3952_, v_i_3953_, v_stop_3954_, v_b_3955_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
return v___x_3963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___boxed(lean_object* v_as_3964_, lean_object* v_i_3965_, lean_object* v_stop_3966_, lean_object* v_b_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_){
_start:
{
size_t v_i_boxed_3975_; size_t v_stop_boxed_3976_; lean_object* v_res_3977_; 
v_i_boxed_3975_ = lean_unbox_usize(v_i_3965_);
lean_dec(v_i_3965_);
v_stop_boxed_3976_ = lean_unbox_usize(v_stop_3966_);
lean_dec(v_stop_3966_);
v_res_3977_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(v_as_3964_, v_i_boxed_3975_, v_stop_boxed_3976_, v_b_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec(v___y_3973_);
lean_dec_ref(v___y_3972_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec_ref(v_as_3964_);
return v_res_3977_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(lean_object* v_msgData_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msgData_3978_, v___y_3980_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___boxed(lean_object* v_msgData_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(v_msgData_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(lean_object* v_00_u03b1_3988_, lean_object* v_msg_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v___x_3993_; 
v___x_3993_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v_msg_3989_, v___y_3990_, v___y_3991_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___boxed(lean_object* v_00_u03b1_3994_, lean_object* v_msg_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(v_00_u03b1_3994_, v_msg_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(lean_object* v_msgData_4000_, lean_object* v_macroStack_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
lean_object* v___x_4005_; 
v___x_4005_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_msgData_4000_, v_macroStack_4001_, v___y_4003_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___boxed(lean_object* v_msgData_4006_, lean_object* v_macroStack_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(v_msgData_4006_, v_macroStack_4007_, v___y_4008_, v___y_4009_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
return v_res_4011_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4014_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4015_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59);
v___x_4016_ = l_Lean_Name_str___override(v___x_4015_, v___x_4014_);
return v___x_4016_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v___x_4017_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0));
v___x_4018_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4019_ = l_Lean_Name_str___override(v___x_4018_, v___x_4017_);
return v___x_4019_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28));
v___x_4021_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4022_ = l_Lean_Name_str___override(v___x_4021_, v___x_4020_);
return v___x_4022_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4024_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4025_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4026_ = l_Lean_Name_str___override(v___x_4025_, v___x_4024_);
return v___x_4026_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4027_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134));
v___x_4028_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4029_ = l_Lean_Name_str___override(v___x_4028_, v___x_4027_);
return v___x_4029_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = lean_unsigned_to_nat(0u);
v___x_4031_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4032_ = l_Lean_Name_num___override(v___x_4031_, v___x_4030_);
return v___x_4032_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0));
v___x_4034_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4035_ = l_Lean_Name_str___override(v___x_4034_, v___x_4033_);
return v___x_4035_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28));
v___x_4037_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4038_ = l_Lean_Name_str___override(v___x_4037_, v___x_4036_);
return v___x_4038_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0));
v___x_4040_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4041_ = l_Lean_Name_str___override(v___x_4040_, v___x_4039_);
return v___x_4041_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4043_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4044_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4045_ = l_Lean_Name_str___override(v___x_4044_, v___x_4043_);
return v___x_4045_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4047_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4048_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4049_ = l_Lean_Name_str___override(v___x_4048_, v___x_4047_);
return v___x_4049_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4050_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0));
v___x_4051_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4052_ = l_Lean_Name_str___override(v___x_4051_, v___x_4050_);
return v___x_4052_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; 
v___x_4053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28));
v___x_4054_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4055_ = l_Lean_Name_str___override(v___x_4054_, v___x_4053_);
return v___x_4055_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4056_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4057_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4058_ = l_Lean_Name_str___override(v___x_4057_, v___x_4056_);
return v___x_4058_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4059_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134));
v___x_4060_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4061_ = l_Lean_Name_str___override(v___x_4060_, v___x_4059_);
return v___x_4061_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = lean_unsigned_to_nat(198155338u);
v___x_4063_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4064_ = l_Lean_Name_num___override(v___x_4063_, v___x_4062_);
return v___x_4064_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4066_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4067_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4068_ = l_Lean_Name_str___override(v___x_4067_, v___x_4066_);
return v___x_4068_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4070_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4071_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4072_ = l_Lean_Name_str___override(v___x_4071_, v___x_4070_);
return v___x_4072_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4073_ = lean_unsigned_to_nat(2u);
v___x_4074_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4075_ = l_Lean_Name_num___override(v___x_4074_, v___x_4073_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60));
v___x_4078_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_4079_ = l_Lean_Elab_registerDerivingHandler(v___x_4077_, v___x_4078_);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v___x_4080_; uint8_t v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_dec_ref_known(v___x_4079_, 1);
v___x_4080_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135));
v___x_4081_ = 0;
v___x_4082_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_);
v___x_4083_ = l_Lean_registerTraceClass(v___x_4080_, v___x_4081_, v___x_4082_);
return v___x_4083_;
}
else
{
return v___x_4079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2____boxed(lean_object* v_a_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
return v_res_4085_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm = _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm();
lean_mark_persistent(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Rpc_Deriving(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Rpc_Deriving(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Rpc_Deriving(builtin);
}
#ifdef __cplusplus
}
#endif

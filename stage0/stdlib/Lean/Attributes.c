// Lean compiler output
// Module: Lean.Attributes
// Imports: public import Lean.CoreM public import Lean.Compiler.MetaAttr
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime;
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeApplicationTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeApplicationTime_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeApplicationTime___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeApplicationTime = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMonadLiftImportMAttrM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadLiftImportMAttrM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadLiftImportMAttrM___closed__0 = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instMonadLiftImportMAttrM = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__0 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__1 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__2 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__3 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__4 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value;
static const lean_array_object l_Lean_AttributeImplCore_ref___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__5 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__5_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__6 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__7 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__8 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__9 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__9_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__10 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__11 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__12;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__13;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__14 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__15 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__16 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__17 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__18;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__19;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__20;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__21;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__22;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__23;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__24;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__25;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__26;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__27;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_AttributeImplCore_ref___autoParam;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "instInhabitedAttributeImplCore"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 168, 67, 30, 9, 195, 195, 250)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 28, 76, 169, 127, 73, 161, 93)}};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImplCore_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__3;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__4 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImplCore_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImplCore_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImplCore;
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeKind___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeKind = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__0_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__1 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__1_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__2 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToStringAttributeKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringAttributeKind___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringAttributeKind = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1;
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedAttributeImpl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeMapRef;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "Failed to register attribute: Attributes can only be registered during initialization"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__0 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__0_value;
static lean_once_cell_t l_Lean_registerBuiltinAttribute___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerBuiltinAttribute___closed__1;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Invalid builtin attribute declaration: `"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__2 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__2_value;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` has already been used"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__3 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Unexpected attribute argument: This attribute takes no arguments"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__4;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__5 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__6 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Unexpected attribute argument"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__4 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__5;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected identifier, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getAttrParamOptPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected a priority, but found"};
static const lean_object* l_Lean_getAttrParamOptPrio___closed__0 = (const lean_object*)&l_Lean_getAttrParamOptPrio___closed__0_value;
static lean_once_cell_t l_Lean_getAttrParamOptPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAttrParamOptPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "Unexpected attribute argument: Expected an optional priority, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getPrio___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getPrio___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "]`: Declaration `"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nbut `["};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "]` can only be added to declarations of type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` must be public"};
static const lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsMeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` must be marked as `meta`"};
static const lean_object* l_Lean_ensureAttrDeclIsMeta___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsMeta___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsMeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsMeta___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__3 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__4;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__5;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tag attribute"};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value;
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__5 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerTagAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___closed__0_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___closed__1_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___closed__2_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___closed__3_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___closed__4_value;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__5;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__6;
static const lean_ctor_object l_Lean_registerTagAttribute___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___closed__1_value)}};
static const lean_object* l_Lean_registerTagAttribute___closed__7 = (const lean_object*)&l_Lean_registerTagAttribute___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "parametric attribute"};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__2_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__4 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__5 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to add parametric attribute `["};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "]` to `"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "`: Attribute has already been set"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`: Declaration is in an imported module"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "enumeration attribute extension"};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__2_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__3_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__4 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__6___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__5 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__5_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__6___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__6 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__6_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__7 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__7_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__8 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Internal error calling `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__0 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__0_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ".setValue` for `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__1 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__1_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = ": Declaration is not from this async context `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__2 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__2_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__3 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__3_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(some "};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__4 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__4_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__5 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__5_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = ": Attribute has already been set"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__6 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__6_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ": Declaration is in an imported module"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__7 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeImplBuilderTableRef;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Attribute implementation builder `"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__0 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__0_value;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__1 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Unknown attribute implementation builder `"};
static const lean_object* l_Lean_mkAttributeImplOfEntry___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeExtensionState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "Unexpected attribute implementation type: `{.ofConstName declName}` is not of type `Lean.AttributeImpl`"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value)}};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__1 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__2 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AttributeImpl"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__3 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "attributeExtension"};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(219, 25, 250, 145, 208, 184, 170, 105)}};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_addAttrEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeExtension;
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames();
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object*);
static const lean_string_object l_Lean_getBuiltinAttributeImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unknown attribute `"};
static const lean_object* l_Lean_getBuiltinAttributeImpl___closed__0 = (const lean_object*)&l_Lean_getBuiltinAttributeImpl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_num_attributes();
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_AttributeApplicationTime_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_AttributeApplicationTime_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_AttributeApplicationTime_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object* v_afterTypeChecking_23_){
_start:
{
lean_inc(v_afterTypeChecking_23_);
return v_afterTypeChecking_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object* v_afterTypeChecking_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(v_afterTypeChecking_24_);
lean_dec(v_afterTypeChecking_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_afterTypeChecking_29_){
_start:
{
lean_inc(v_afterTypeChecking_29_);
return v_afterTypeChecking_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_afterTypeChecking_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_afterTypeChecking_33_);
lean_dec(v_afterTypeChecking_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object* v_afterCompilation_36_){
_start:
{
lean_inc(v_afterCompilation_36_);
return v_afterCompilation_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object* v_afterCompilation_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(v_afterCompilation_37_);
lean_dec(v_afterCompilation_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_afterCompilation_42_){
_start:
{
lean_inc(v_afterCompilation_42_);
return v_afterCompilation_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_afterCompilation_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_AttributeApplicationTime_afterCompilation_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_afterCompilation_46_);
lean_dec(v_afterCompilation_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object* v_beforeElaboration_49_){
_start:
{
lean_inc(v_beforeElaboration_49_);
return v_beforeElaboration_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object* v_beforeElaboration_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(v_beforeElaboration_50_);
lean_dec(v_beforeElaboration_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_beforeElaboration_55_){
_start:
{
lean_inc(v_beforeElaboration_55_);
return v_beforeElaboration_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_beforeElaboration_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_beforeElaboration_59_);
lean_dec(v_beforeElaboration_59_);
return v_res_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime_default(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime(void){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t v_x_64_, uint8_t v_y_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_66_ = l_Lean_AttributeApplicationTime_ctorIdx(v_x_64_);
v___x_67_ = l_Lean_AttributeApplicationTime_ctorIdx(v_y_65_);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
lean_dec(v___x_67_);
lean_dec(v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object* v_x_69_, lean_object* v_y_70_){
_start:
{
uint8_t v_x_21__boxed_71_; uint8_t v_y_22__boxed_72_; uint8_t v_res_73_; lean_object* v_r_74_; 
v_x_21__boxed_71_ = lean_unbox(v_x_69_);
v_y_22__boxed_72_ = lean_unbox(v_y_70_);
v_res_73_ = l_Lean_instBEqAttributeApplicationTime_beq(v_x_21__boxed_71_, v_y_22__boxed_72_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object* v_00_u03b1_77_, lean_object* v_x_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toCold_83_; lean_object* v_env_84_; lean_object* v_ref_85_; lean_object* v_options_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_82_ = lean_st_ref_get(v___y_80_);
v_toCold_83_ = lean_ctor_get(v___y_79_, 0);
v_env_84_ = lean_ctor_get(v___x_82_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_82_);
v_ref_85_ = lean_ctor_get(v___y_79_, 2);
v_options_86_ = lean_ctor_get(v_toCold_83_, 2);
lean_inc_ref(v_options_86_);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v_env_84_);
lean_ctor_set(v___x_87_, 1, v_options_86_);
v___x_88_ = lean_apply_2(v_x_78_, v___x_87_, lean_box(0));
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_108_; 
v_a_97_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_108_ == 0)
{
v___x_99_ = v___x_88_;
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_88_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_101_ = lean_io_error_to_string(v_a_97_);
v___x_102_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
v___x_103_ = l_Lean_MessageData_ofFormat(v___x_102_);
lean_inc(v_ref_85_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_ref_85_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_104_);
v___x_106_ = v___x_99_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object* v_00_u03b1_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_instMonadLiftImportMAttrM___lam__0(v_00_u03b1_109_, v_x_110_, v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
return v_res_114_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__10));
v___x_144_ = l_Lean_mkAtom(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__12, &l_Lean_AttributeImplCore_ref___autoParam___closed__12_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12);
v___x_146_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_147_ = lean_array_push(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__17));
v___x_157_ = l_Lean_mkAtom(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__18, &l_Lean_AttributeImplCore_ref___autoParam___closed__18_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18);
v___x_159_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_160_ = lean_array_push(v___x_159_, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__19, &l_Lean_AttributeImplCore_ref___autoParam___closed__19_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19);
v___x_162_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__16));
v___x_163_ = lean_box(2);
v___x_164_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__20, &l_Lean_AttributeImplCore_ref___autoParam___closed__20_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20);
v___x_166_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__13, &l_Lean_AttributeImplCore_ref___autoParam___closed__13_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13);
v___x_167_ = lean_array_push(v___x_166_, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__21, &l_Lean_AttributeImplCore_ref___autoParam___closed__21_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21);
v___x_169_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__11));
v___x_170_ = lean_box(2);
v___x_171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
lean_ctor_set(v___x_171_, 2, v___x_168_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__22, &l_Lean_AttributeImplCore_ref___autoParam___closed__22_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22);
v___x_173_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_174_ = lean_array_push(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__23, &l_Lean_AttributeImplCore_ref___autoParam___closed__23_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23);
v___x_176_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__9));
v___x_177_ = lean_box(2);
v___x_178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__24, &l_Lean_AttributeImplCore_ref___autoParam___closed__24_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24);
v___x_180_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_181_ = lean_array_push(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_182_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__25, &l_Lean_AttributeImplCore_ref___autoParam___closed__25_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25);
v___x_183_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__7));
v___x_184_ = lean_box(2);
v___x_185_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
lean_ctor_set(v___x_185_, 2, v___x_182_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__26, &l_Lean_AttributeImplCore_ref___autoParam___closed__26_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26);
v___x_187_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_188_ = lean_array_push(v___x_187_, v___x_186_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__27, &l_Lean_AttributeImplCore_ref___autoParam___closed__27_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27);
v___x_190_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__4));
v___x_191_ = lean_box(2);
v___x_192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_190_);
lean_ctor_set(v___x_192_, 2, v___x_189_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_box(0);
v___x_201_ = l_unsafeCast___redArg(v___x_200_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImplCore_default___closed__5(void){
_start:
{
uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_203_ = 0;
v___x_204_ = ((lean_object*)(l_Lean_instInhabitedAttributeImplCore_default___closed__4));
v___x_205_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_206_ = ((lean_object*)(l_Lean_instInhabitedAttributeImplCore_default___closed__2));
v___x_207_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
lean_ctor_set(v___x_207_, 2, v___x_204_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*3, v___x_203_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImplCore_default(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__5, &l_Lean_instInhabitedAttributeImplCore_default___closed__5_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__5);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImplCore(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_instInhabitedAttributeImplCore_default;
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx(uint8_t v_x_210_){
_start:
{
switch(v_x_210_)
{
case 0:
{
lean_object* v___x_211_; 
v___x_211_ = lean_unsigned_to_nat(0u);
return v___x_211_;
}
case 1:
{
lean_object* v___x_212_; 
v___x_212_ = lean_unsigned_to_nat(1u);
return v___x_212_;
}
default: 
{
lean_object* v___x_213_; 
v___x_213_ = lean_unsigned_to_nat(2u);
return v___x_213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___boxed(lean_object* v_x_214_){
_start:
{
uint8_t v_x_boxed_215_; lean_object* v_res_216_; 
v_x_boxed_215_ = lean_unbox(v_x_214_);
v_res_216_ = l_Lean_AttributeKind_ctorIdx(v_x_boxed_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object* v_k_217_){
_start:
{
lean_inc(v_k_217_);
return v_k_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object* v_k_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_AttributeKind_ctorElim___redArg(v_k_218_);
lean_dec(v_k_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object* v_motive_220_, lean_object* v_ctorIdx_221_, uint8_t v_t_222_, lean_object* v_h_223_, lean_object* v_k_224_){
_start:
{
lean_inc(v_k_224_);
return v_k_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object* v_motive_225_, lean_object* v_ctorIdx_226_, lean_object* v_t_227_, lean_object* v_h_228_, lean_object* v_k_229_){
_start:
{
uint8_t v_t_boxed_230_; lean_object* v_res_231_; 
v_t_boxed_230_ = lean_unbox(v_t_227_);
v_res_231_ = l_Lean_AttributeKind_ctorElim(v_motive_225_, v_ctorIdx_226_, v_t_boxed_230_, v_h_228_, v_k_229_);
lean_dec(v_k_229_);
lean_dec(v_ctorIdx_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object* v_global_232_){
_start:
{
lean_inc(v_global_232_);
return v_global_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object* v_global_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_AttributeKind_global_elim___redArg(v_global_233_);
lean_dec(v_global_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object* v_motive_235_, uint8_t v_t_236_, lean_object* v_h_237_, lean_object* v_global_238_){
_start:
{
lean_inc(v_global_238_);
return v_global_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object* v_motive_239_, lean_object* v_t_240_, lean_object* v_h_241_, lean_object* v_global_242_){
_start:
{
uint8_t v_t_boxed_243_; lean_object* v_res_244_; 
v_t_boxed_243_ = lean_unbox(v_t_240_);
v_res_244_ = l_Lean_AttributeKind_global_elim(v_motive_239_, v_t_boxed_243_, v_h_241_, v_global_242_);
lean_dec(v_global_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object* v_local_245_){
_start:
{
lean_inc(v_local_245_);
return v_local_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object* v_local_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_AttributeKind_local_elim___redArg(v_local_246_);
lean_dec(v_local_246_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object* v_motive_248_, uint8_t v_t_249_, lean_object* v_h_250_, lean_object* v_local_251_){
_start:
{
lean_inc(v_local_251_);
return v_local_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object* v_motive_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_local_255_){
_start:
{
uint8_t v_t_boxed_256_; lean_object* v_res_257_; 
v_t_boxed_256_ = lean_unbox(v_t_253_);
v_res_257_ = l_Lean_AttributeKind_local_elim(v_motive_252_, v_t_boxed_256_, v_h_254_, v_local_255_);
lean_dec(v_local_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object* v_scoped_258_){
_start:
{
lean_inc(v_scoped_258_);
return v_scoped_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object* v_scoped_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_AttributeKind_scoped_elim___redArg(v_scoped_259_);
lean_dec(v_scoped_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object* v_motive_261_, uint8_t v_t_262_, lean_object* v_h_263_, lean_object* v_scoped_264_){
_start:
{
lean_inc(v_scoped_264_);
return v_scoped_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_scoped_268_){
_start:
{
uint8_t v_t_boxed_269_; lean_object* v_res_270_; 
v_t_boxed_269_ = lean_unbox(v_t_266_);
v_res_270_ = l_Lean_AttributeKind_scoped_elim(v_motive_265_, v_t_boxed_269_, v_h_267_, v_scoped_268_);
lean_dec(v_scoped_268_);
return v_res_270_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t v_x_271_, uint8_t v_y_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_273_ = l_Lean_AttributeKind_ctorIdx(v_x_271_);
v___x_274_ = l_Lean_AttributeKind_ctorIdx(v_y_272_);
v___x_275_ = lean_nat_dec_eq(v___x_273_, v___x_274_);
lean_dec(v___x_274_);
lean_dec(v___x_273_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object* v_x_276_, lean_object* v_y_277_){
_start:
{
uint8_t v_x_21__boxed_278_; uint8_t v_y_22__boxed_279_; uint8_t v_res_280_; lean_object* v_r_281_; 
v_x_21__boxed_278_ = lean_unbox(v_x_276_);
v_y_22__boxed_279_ = lean_unbox(v_y_277_);
v_res_280_ = l_Lean_instBEqAttributeKind_beq(v_x_21__boxed_278_, v_y_22__boxed_279_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind_default(void){
_start:
{
uint8_t v___x_284_; 
v___x_284_ = 0;
return v___x_284_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind(void){
_start:
{
uint8_t v___x_285_; 
v___x_285_ = 0;
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t v_x_289_){
_start:
{
switch(v_x_289_)
{
case 0:
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
return v___x_290_;
}
case 1:
{
lean_object* v___x_291_; 
v___x_291_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
return v___x_291_;
}
default: 
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object* v_x_293_){
_start:
{
uint8_t v_x_36__boxed_294_; lean_object* v_res_295_; 
v_x_36__boxed_294_ = lean_unbox(v_x_293_);
v_res_295_ = l_Lean_instToStringAttributeKind___lam__0(v_x_36__boxed_294_);
return v_res_295_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = l_Lean_instInhabitedMessageData_default;
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object* v_x_301_, lean_object* v___y_302_, uint8_t v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0, &l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0);
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object* v_x_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
uint8_t v___y_1014__boxed_315_; lean_object* v_res_316_; 
v___y_1014__boxed_315_ = lean_unbox(v___y_311_);
v_res_316_ = l_Lean_instInhabitedAttributeImpl_default___lam__0(v_x_309_, v___y_310_, v___y_1014__boxed_315_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_310_);
lean_dec(v_x_309_);
return v_res_316_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_317_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
lean_ctor_set(v___x_322_, 2, v___x_321_);
lean_ctor_set(v___x_322_, 3, v___x_321_);
lean_ctor_set(v___x_322_, 4, v___x_320_);
lean_ctor_set(v___x_322_, 5, v___x_320_);
lean_ctor_set(v___x_322_, 6, v___x_320_);
lean_ctor_set(v___x_322_, 7, v___x_320_);
lean_ctor_set(v___x_322_, 8, v___x_320_);
lean_ctor_set(v___x_322_, 9, v___x_320_);
lean_ctor_set(v___x_322_, 10, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_unsigned_to_nat(32u);
v___x_324_ = lean_mk_empty_array_with_capacity(v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_326_ = ((size_t)5ULL);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_unsigned_to_nat(32u);
v___x_329_ = lean_mk_empty_array_with_capacity(v___x_328_);
v___x_330_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3);
v___x_331_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v___x_329_);
lean_ctor_set(v___x_331_, 2, v___x_327_);
lean_ctor_set(v___x_331_, 3, v___x_327_);
lean_ctor_set_usize(v___x_331_, 4, v___x_326_);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_332_ = lean_box(1);
v___x_333_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4);
v___x_334_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_333_);
lean_ctor_set(v___x_335_, 2, v___x_332_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object* v_msgData_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; lean_object* v_toCold_341_; lean_object* v_env_342_; lean_object* v_options_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_340_ = lean_st_ref_get(v___y_338_);
v_toCold_341_ = lean_ctor_get(v___y_337_, 0);
v_env_342_ = lean_ctor_get(v___x_340_, 0);
lean_inc_ref(v_env_342_);
lean_dec(v___x_340_);
v_options_343_ = lean_ctor_get(v_toCold_341_, 2);
v___x_344_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2);
v___x_345_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_343_);
v___x_346_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_346_, 0, v_env_342_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
lean_ctor_set(v___x_346_, 2, v___x_345_);
lean_ctor_set(v___x_346_, 3, v_options_343_);
v___x_347_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v_msgData_336_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object* v_msgData_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msgData_349_, v___y_350_, v___y_351_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object* v_msg_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_ref_358_; lean_object* v___x_359_; lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_368_; 
v_ref_358_ = lean_ctor_get(v___y_355_, 2);
v___x_359_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msg_354_, v___y_355_, v___y_356_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_368_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_368_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_368_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
lean_inc(v_ref_358_);
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v_ref_358_);
lean_ctor_set(v___x_364_, 1, v_a_360_);
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 1);
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object* v_msg_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
return v_res_373_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0));
v___x_376_ = l_Lean_stringToMessageData(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2));
v___x_379_ = l_Lean_stringToMessageData(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object* v___x_380_, lean_object* v_decl_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_name_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_name_385_ = lean_ctor_get(v___x_380_, 1);
lean_inc(v_name_385_);
lean_dec_ref(v___x_380_);
v___x_386_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_387_ = l_Lean_MessageData_ofName(v_name_385_);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_390_, v___y_382_, v___y_383_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object* v___x_392_, lean_object* v_decl_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_instInhabitedAttributeImpl_default___lam__1(v___x_392_, v_decl_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_decl_393_);
return v_res_397_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___closed__1(void){
_start:
{
lean_object* v___x_399_; lean_object* v___f_400_; 
v___x_399_ = l_Lean_instInhabitedAttributeImplCore_default;
v___f_400_ = lean_alloc_closure((void*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed), 5, 1);
lean_closure_set(v___f_400_, 0, v___x_399_);
return v___f_400_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___closed__2(void){
_start:
{
lean_object* v___f_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___f_401_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___closed__1, &l_Lean_instInhabitedAttributeImpl_default___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___closed__1);
v___f_402_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___closed__0));
v___x_403_ = l_Lean_instInhabitedAttributeImplCore_default;
v___x_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v___f_402_);
lean_ctor_set(v___x_404_, 2, v___f_401_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___closed__2, &l_Lean_instInhabitedAttributeImpl_default___closed__2_once, _init_l_Lean_instInhabitedAttributeImpl_default___closed__2);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object* v_00_u03b1_406_, lean_object* v_msg_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_407_, v___y_408_, v___y_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object* v_00_u03b1_412_, lean_object* v_msg_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(v_00_u03b1_412_, v_msg_413_, v___y_414_, v___y_415_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
return v_res_417_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_instInhabitedAttributeImpl_default;
return v___x_418_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_box(0);
v___x_420_ = lean_unsigned_to_nat(16u);
v___x_421_ = lean_mk_array(v___x_420_, v___x_419_);
return v___x_421_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_427_ = lean_st_mk_ref(v___x_426_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
return v_res_430_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object* v_a_431_, lean_object* v_x_432_){
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
v___x_436_ = lean_name_eq(v_key_434_, v_a_431_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object* v_a_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_438_, v_x_439_);
lean_dec(v_x_439_);
lean_dec(v_a_438_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object* v_m_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_buckets_444_; lean_object* v___x_445_; uint64_t v___y_447_; lean_object* v___x_461_; 
v_buckets_444_ = lean_ctor_get(v_m_442_, 1);
v___x_445_ = lean_array_get_size(v_buckets_444_);
v___x_461_ = l_unsafeCast___redArg(v_a_443_);
if (lean_obj_tag(v___x_461_) == 0)
{
uint64_t v___x_462_; 
v___x_462_ = 1723ULL;
v___y_447_ = v___x_462_;
goto v___jp_446_;
}
else
{
uint64_t v_hash_463_; 
v_hash_463_ = lean_ctor_get_uint64(v___x_461_, sizeof(void*)*2);
lean_dec(v___x_461_);
v___y_447_ = v_hash_463_;
goto v___jp_446_;
}
v___jp_446_:
{
uint64_t v___x_448_; uint64_t v___x_449_; uint64_t v_fold_450_; uint64_t v___x_451_; uint64_t v___x_452_; uint64_t v___x_453_; size_t v___x_454_; size_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_448_ = 32ULL;
v___x_449_ = lean_uint64_shift_right(v___y_447_, v___x_448_);
v_fold_450_ = lean_uint64_xor(v___y_447_, v___x_449_);
v___x_451_ = 16ULL;
v___x_452_ = lean_uint64_shift_right(v_fold_450_, v___x_451_);
v___x_453_ = lean_uint64_xor(v_fold_450_, v___x_452_);
v___x_454_ = lean_uint64_to_usize(v___x_453_);
v___x_455_ = lean_usize_of_nat(v___x_445_);
v___x_456_ = ((size_t)1ULL);
v___x_457_ = lean_usize_sub(v___x_455_, v___x_456_);
v___x_458_ = lean_usize_land(v___x_454_, v___x_457_);
v___x_459_ = lean_array_uget_borrowed(v_buckets_444_, v___x_458_);
v___x_460_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_443_, v___x_459_);
return v___x_460_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object* v_m_464_, lean_object* v_a_465_){
_start:
{
uint8_t v_res_466_; lean_object* v_r_467_; 
v_res_466_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_464_, v_a_465_);
lean_dec(v_a_465_);
lean_dec_ref(v_m_464_);
v_r_467_ = lean_box(v_res_466_);
return v_r_467_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object* v_a_468_, lean_object* v_b_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
lean_dec(v_b_469_);
lean_dec(v_a_468_);
return v_x_470_;
}
else
{
lean_object* v_key_471_; lean_object* v_value_472_; lean_object* v_tail_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_485_; 
v_key_471_ = lean_ctor_get(v_x_470_, 0);
v_value_472_ = lean_ctor_get(v_x_470_, 1);
v_tail_473_ = lean_ctor_get(v_x_470_, 2);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_470_);
if (v_isSharedCheck_485_ == 0)
{
v___x_475_ = v_x_470_;
v_isShared_476_ = v_isSharedCheck_485_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_tail_473_);
lean_inc(v_value_472_);
lean_inc(v_key_471_);
lean_dec(v_x_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_485_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
uint8_t v___x_477_; 
v___x_477_ = lean_name_eq(v_key_471_, v_a_468_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_478_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_468_, v_b_469_, v_tail_473_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 2, v___x_478_);
v___x_480_ = v___x_475_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_key_471_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_value_472_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v___x_483_; 
lean_dec(v_value_472_);
lean_dec(v_key_471_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_b_469_);
lean_ctor_set(v___x_475_, 0, v_a_468_);
v___x_483_ = v___x_475_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_468_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_b_469_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_tail_473_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
return v_x_486_;
}
else
{
lean_object* v_key_488_; lean_object* v_value_489_; lean_object* v_tail_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_517_; 
v_key_488_ = lean_ctor_get(v_x_487_, 0);
v_value_489_ = lean_ctor_get(v_x_487_, 1);
v_tail_490_ = lean_ctor_get(v_x_487_, 2);
v_isSharedCheck_517_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_517_ == 0)
{
v___x_492_ = v_x_487_;
v_isShared_493_ = v_isSharedCheck_517_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_tail_490_);
lean_inc(v_value_489_);
lean_inc(v_key_488_);
lean_dec(v_x_487_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_517_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; uint64_t v___y_496_; lean_object* v___x_514_; 
v___x_494_ = lean_array_get_size(v_x_486_);
v___x_514_ = l_unsafeCast___redArg(v_key_488_);
if (lean_obj_tag(v___x_514_) == 0)
{
uint64_t v___x_515_; 
v___x_515_ = 1723ULL;
v___y_496_ = v___x_515_;
goto v___jp_495_;
}
else
{
uint64_t v_hash_516_; 
v_hash_516_ = lean_ctor_get_uint64(v___x_514_, sizeof(void*)*2);
lean_dec(v___x_514_);
v___y_496_ = v_hash_516_;
goto v___jp_495_;
}
v___jp_495_:
{
uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v_fold_499_; uint64_t v___x_500_; uint64_t v___x_501_; uint64_t v___x_502_; size_t v___x_503_; size_t v___x_504_; size_t v___x_505_; size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_497_ = 32ULL;
v___x_498_ = lean_uint64_shift_right(v___y_496_, v___x_497_);
v_fold_499_ = lean_uint64_xor(v___y_496_, v___x_498_);
v___x_500_ = 16ULL;
v___x_501_ = lean_uint64_shift_right(v_fold_499_, v___x_500_);
v___x_502_ = lean_uint64_xor(v_fold_499_, v___x_501_);
v___x_503_ = lean_uint64_to_usize(v___x_502_);
v___x_504_ = lean_usize_of_nat(v___x_494_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_sub(v___x_504_, v___x_505_);
v___x_507_ = lean_usize_land(v___x_503_, v___x_506_);
v___x_508_ = lean_array_uget_borrowed(v_x_486_, v___x_507_);
lean_inc(v___x_508_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 2, v___x_508_);
v___x_510_ = v___x_492_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_key_488_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_value_489_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v___x_508_);
v___x_510_ = v_reuseFailAlloc_513_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_511_; 
v___x_511_ = lean_array_uset(v_x_486_, v___x_507_, v___x_510_);
v_x_486_ = v___x_511_;
v_x_487_ = v_tail_490_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object* v_i_518_, lean_object* v_source_519_, lean_object* v_target_520_){
_start:
{
lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_521_ = lean_array_get_size(v_source_519_);
v___x_522_ = lean_nat_dec_lt(v_i_518_, v___x_521_);
if (v___x_522_ == 0)
{
lean_dec_ref(v_source_519_);
lean_dec(v_i_518_);
return v_target_520_;
}
else
{
lean_object* v_es_523_; lean_object* v___x_524_; lean_object* v_source_525_; lean_object* v_target_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_es_523_ = lean_array_fget(v_source_519_, v_i_518_);
v___x_524_ = lean_box(0);
v_source_525_ = lean_array_fset(v_source_519_, v_i_518_, v___x_524_);
v_target_526_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_target_520_, v_es_523_);
v___x_527_ = lean_unsigned_to_nat(1u);
v___x_528_ = lean_nat_add(v_i_518_, v___x_527_);
lean_dec(v_i_518_);
v_i_518_ = v___x_528_;
v_source_519_ = v_source_525_;
v_target_520_ = v_target_526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object* v_data_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_nbuckets_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_531_ = lean_array_get_size(v_data_530_);
v___x_532_ = lean_unsigned_to_nat(2u);
v_nbuckets_533_ = lean_nat_mul(v___x_531_, v___x_532_);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = lean_box(0);
v___x_536_ = lean_mk_array(v_nbuckets_533_, v___x_535_);
v___x_537_ = lean_array_propagate_mark(v_data_530_, v___x_536_);
v___x_538_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v___x_534_, v_data_530_, v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object* v_m_539_, lean_object* v_a_540_, lean_object* v_b_541_){
_start:
{
lean_object* v_size_542_; lean_object* v_buckets_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_590_; 
v_size_542_ = lean_ctor_get(v_m_539_, 0);
v_buckets_543_ = lean_ctor_get(v_m_539_, 1);
v_isSharedCheck_590_ = !lean_is_exclusive(v_m_539_);
if (v_isSharedCheck_590_ == 0)
{
v___x_545_ = v_m_539_;
v_isShared_546_ = v_isSharedCheck_590_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_buckets_543_);
lean_inc(v_size_542_);
lean_dec(v_m_539_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_590_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; uint64_t v___y_549_; lean_object* v___x_587_; 
v___x_547_ = lean_array_get_size(v_buckets_543_);
v___x_587_ = l_unsafeCast___redArg(v_a_540_);
if (lean_obj_tag(v___x_587_) == 0)
{
uint64_t v___x_588_; 
v___x_588_ = 1723ULL;
v___y_549_ = v___x_588_;
goto v___jp_548_;
}
else
{
uint64_t v_hash_589_; 
v_hash_589_ = lean_ctor_get_uint64(v___x_587_, sizeof(void*)*2);
lean_dec(v___x_587_);
v___y_549_ = v_hash_589_;
goto v___jp_548_;
}
v___jp_548_:
{
uint64_t v___x_550_; uint64_t v___x_551_; uint64_t v_fold_552_; uint64_t v___x_553_; uint64_t v___x_554_; uint64_t v___x_555_; size_t v___x_556_; size_t v___x_557_; size_t v___x_558_; size_t v___x_559_; size_t v___x_560_; lean_object* v_bkt_561_; uint8_t v___x_562_; 
v___x_550_ = 32ULL;
v___x_551_ = lean_uint64_shift_right(v___y_549_, v___x_550_);
v_fold_552_ = lean_uint64_xor(v___y_549_, v___x_551_);
v___x_553_ = 16ULL;
v___x_554_ = lean_uint64_shift_right(v_fold_552_, v___x_553_);
v___x_555_ = lean_uint64_xor(v_fold_552_, v___x_554_);
v___x_556_ = lean_uint64_to_usize(v___x_555_);
v___x_557_ = lean_usize_of_nat(v___x_547_);
v___x_558_ = ((size_t)1ULL);
v___x_559_ = lean_usize_sub(v___x_557_, v___x_558_);
v___x_560_ = lean_usize_land(v___x_556_, v___x_559_);
v_bkt_561_ = lean_array_uget_borrowed(v_buckets_543_, v___x_560_);
v___x_562_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_540_, v_bkt_561_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v_size_x27_564_; lean_object* v___x_565_; lean_object* v_buckets_x27_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_563_ = lean_unsigned_to_nat(1u);
v_size_x27_564_ = lean_nat_add(v_size_542_, v___x_563_);
lean_dec(v_size_542_);
lean_inc(v_bkt_561_);
v___x_565_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_565_, 0, v_a_540_);
lean_ctor_set(v___x_565_, 1, v_b_541_);
lean_ctor_set(v___x_565_, 2, v_bkt_561_);
v_buckets_x27_566_ = lean_array_uset(v_buckets_543_, v___x_560_, v___x_565_);
v___x_567_ = lean_unsigned_to_nat(4u);
v___x_568_ = lean_nat_mul(v_size_x27_564_, v___x_567_);
v___x_569_ = lean_unsigned_to_nat(3u);
v___x_570_ = lean_nat_div(v___x_568_, v___x_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_array_get_size(v_buckets_x27_566_);
v___x_572_ = lean_nat_dec_le(v___x_570_, v___x_571_);
lean_dec(v___x_570_);
if (v___x_572_ == 0)
{
lean_object* v_val_573_; lean_object* v___x_575_; 
v_val_573_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_buckets_x27_566_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 1, v_val_573_);
lean_ctor_set(v___x_545_, 0, v_size_x27_564_);
v___x_575_ = v___x_545_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_size_x27_564_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_val_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
else
{
lean_object* v___x_578_; 
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 1, v_buckets_x27_566_);
lean_ctor_set(v___x_545_, 0, v_size_x27_564_);
v___x_578_ = v___x_545_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_size_x27_564_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_buckets_x27_566_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
else
{
lean_object* v___x_580_; lean_object* v_buckets_x27_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
lean_inc(v_bkt_561_);
v___x_580_ = lean_box(0);
v_buckets_x27_581_ = lean_array_uset(v_buckets_543_, v___x_560_, v___x_580_);
v___x_582_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_540_, v_b_541_, v_bkt_561_);
v___x_583_ = lean_array_uset(v_buckets_x27_581_, v___x_560_, v___x_582_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 1, v___x_583_);
v___x_585_ = v___x_545_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_size_542_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_registerBuiltinAttribute___closed__1(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__0));
v___x_593_ = lean_mk_io_user_error(v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object* v_attr_596_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_toAttributeImplCore_600_; lean_object* v_name_601_; uint8_t v___x_602_; 
v___x_598_ = l_Lean_attributeMapRef;
v___x_599_ = lean_st_ref_get(v___x_598_);
v_toAttributeImplCore_600_ = lean_ctor_get(v_attr_596_, 0);
v_name_601_ = lean_ctor_get(v_toAttributeImplCore_600_, 1);
lean_inc(v_name_601_);
v___x_602_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_599_, v_name_601_);
lean_dec(v___x_599_);
if (v___x_602_ == 0)
{
uint8_t v___x_603_; 
v___x_603_ = l_Lean_initializing();
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec(v_name_601_);
lean_dec_ref(v_attr_596_);
v___x_604_ = lean_obj_once(&l_Lean_registerBuiltinAttribute___closed__1, &l_Lean_registerBuiltinAttribute___closed__1_once, _init_l_Lean_registerBuiltinAttribute___closed__1);
v___x_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_st_ref_take(v___x_598_);
v___x_607_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_606_, v_name_601_, v_attr_596_);
v___x_608_ = lean_st_ref_put(v___x_598_, v___x_607_);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
}
else
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
lean_dec_ref(v_attr_596_);
v___x_610_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_611_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_601_, v___x_602_);
v___x_612_ = lean_string_append(v___x_610_, v___x_611_);
lean_dec_ref(v___x_611_);
v___x_613_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_614_ = lean_string_append(v___x_612_, v___x_613_);
v___x_615_ = lean_mk_io_user_error(v___x_614_);
v___x_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object* v_attr_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_registerBuiltinAttribute(v_attr_617_);
return v_res_619_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object* v_00_u03b2_620_, lean_object* v_m_621_, lean_object* v_a_622_){
_start:
{
uint8_t v___x_623_; 
v___x_623_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_621_, v_a_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object* v_00_u03b2_624_, lean_object* v_m_625_, lean_object* v_a_626_){
_start:
{
uint8_t v_res_627_; lean_object* v_r_628_; 
v_res_627_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(v_00_u03b2_624_, v_m_625_, v_a_626_);
lean_dec(v_a_626_);
lean_dec_ref(v_m_625_);
v_r_628_ = lean_box(v_res_627_);
return v_r_628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object* v_00_u03b2_629_, lean_object* v_m_630_, lean_object* v_a_631_, lean_object* v_b_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_m_630_, v_a_631_, v_b_632_);
return v___x_633_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object* v_00_u03b2_634_, lean_object* v_a_635_, lean_object* v_x_636_){
_start:
{
uint8_t v___x_637_; 
v___x_637_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_635_, v_x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object* v_00_u03b2_638_, lean_object* v_a_639_, lean_object* v_x_640_){
_start:
{
uint8_t v_res_641_; lean_object* v_r_642_; 
v_res_641_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(v_00_u03b2_638_, v_a_639_, v_x_640_);
lean_dec(v_x_640_);
lean_dec(v_a_639_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object* v_00_u03b2_643_, lean_object* v_data_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_data_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object* v_00_u03b2_646_, lean_object* v_a_647_, lean_object* v_b_648_, lean_object* v_x_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_647_, v_b_648_, v_x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_651_, lean_object* v_i_652_, lean_object* v_source_653_, lean_object* v_target_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v_i_652_, v_source_653_, v_target_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_656_, lean_object* v_x_657_, lean_object* v_x_658_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_x_657_, v_x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object* v_ref_660_, lean_object* v_msg_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_toCold_665_; lean_object* v_currRecDepth_666_; lean_object* v_ref_667_; uint8_t v_diag_668_; uint8_t v_suppressElabErrors_669_; lean_object* v_ref_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_toCold_665_ = lean_ctor_get(v___y_662_, 0);
v_currRecDepth_666_ = lean_ctor_get(v___y_662_, 1);
v_ref_667_ = lean_ctor_get(v___y_662_, 2);
v_diag_668_ = lean_ctor_get_uint8(v___y_662_, sizeof(void*)*3);
v_suppressElabErrors_669_ = lean_ctor_get_uint8(v___y_662_, sizeof(void*)*3 + 1);
v_ref_670_ = l_Lean_replaceRef(v_ref_660_, v_ref_667_);
lean_inc(v_currRecDepth_666_);
lean_inc_ref(v_toCold_665_);
v___x_671_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_671_, 0, v_toCold_665_);
lean_ctor_set(v___x_671_, 1, v_currRecDepth_666_);
lean_ctor_set(v___x_671_, 2, v_ref_670_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*3, v_diag_668_);
lean_ctor_set_uint8(v___x_671_, sizeof(void*)*3 + 1, v_suppressElabErrors_669_);
v___x_672_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_661_, v___x_671_, v___y_663_);
lean_dec_ref_known(v___x_671_, 3);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object* v_ref_673_, lean_object* v_msg_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_673_, v_msg_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v_ref_673_);
return v_res_678_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__3));
v___x_688_ = l_Lean_stringToMessageData(v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object* v_stx_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v___x_699_; uint8_t v___y_710_; lean_object* v___x_716_; uint8_t v___x_717_; 
lean_inc(v_stx_695_);
v___x_699_ = l_Lean_Syntax_getKind(v_stx_695_);
v___x_716_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_717_ = lean_name_eq(v___x_699_, v___x_716_);
if (v___x_717_ == 0)
{
v___y_710_ = v___x_717_;
goto v___jp_709_;
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_718_ = lean_unsigned_to_nat(1u);
v___x_719_ = l_Lean_Syntax_getArg(v_stx_695_, v___x_718_);
v___x_720_ = l_Lean_Syntax_isNone(v___x_719_);
lean_dec(v___x_719_);
v___y_710_ = v___x_720_;
goto v___jp_709_;
}
v___jp_700_:
{
lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_701_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__2));
v___x_702_ = lean_name_eq(v___x_699_, v___x_701_);
lean_dec(v___x_699_);
if (v___x_702_ == 0)
{
if (lean_obj_tag(v_stx_695_) == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_box(0);
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
else
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_obj_once(&l_Lean_Attribute_Builtin_ensureNoArgs___closed__4, &l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once, _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4);
v___x_706_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_695_, v___x_705_, v_a_696_, v_a_697_);
lean_dec(v_stx_695_);
return v___x_706_;
}
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec(v_stx_695_);
v___x_707_ = lean_box(0);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
v___jp_709_:
{
if (v___y_710_ == 0)
{
goto v___jp_700_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_711_ = lean_unsigned_to_nat(2u);
v___x_712_ = l_Lean_Syntax_getArg(v_stx_695_, v___x_711_);
v___x_713_ = l_Lean_Syntax_isNone(v___x_712_);
lean_dec(v___x_712_);
if (v___x_713_ == 0)
{
goto v___jp_700_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec(v___x_699_);
lean_dec(v_stx_695_);
v___x_714_ = lean_box(0);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object* v_stx_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_721_, v_a_722_, v_a_723_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object* v_00_u03b1_726_, lean_object* v_ref_727_, lean_object* v_msg_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_727_, v_msg_728_, v___y_729_, v___y_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object* v_00_u03b1_733_, lean_object* v_ref_734_, lean_object* v_msg_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(v_00_u03b1_733_, v_ref_734_, v_msg_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v_ref_734_);
return v_res_739_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__4));
v___x_754_ = l_Lean_stringToMessageData(v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object* v_stx_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
lean_inc(v_stx_755_);
v___x_767_ = l_Lean_Syntax_getKind(v_stx_755_);
v___x_768_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_769_ = lean_name_eq(v___x_767_, v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__1));
v___x_771_ = lean_name_eq(v___x_767_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__3));
v___x_773_ = lean_name_eq(v___x_767_, v___x_772_);
lean_dec(v___x_767_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent_x3f___closed__5, &l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once, _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5);
v___x_775_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_755_, v___x_774_, v_a_756_, v_a_757_);
lean_dec(v_stx_755_);
return v___x_775_;
}
else
{
goto v___jp_759_;
}
}
else
{
lean_dec(v___x_767_);
goto v___jp_759_;
}
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
lean_dec(v___x_767_);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = l_Lean_Syntax_getArg(v_stx_755_, v___x_776_);
lean_dec(v_stx_755_);
v___x_778_ = l_Lean_Syntax_isNone(v___x_777_);
if (v___x_778_ == 0)
{
if (v___x_769_ == 0)
{
lean_dec(v___x_777_);
goto v___jp_764_;
}
else
{
lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_779_ = lean_unsigned_to_nat(0u);
v___x_780_ = l_Lean_Syntax_getArg(v___x_777_, v___x_779_);
lean_dec(v___x_777_);
v___x_781_ = l_Lean_Syntax_isIdent(v___x_780_);
if (v___x_781_ == 0)
{
lean_dec(v___x_780_);
goto v___jp_764_;
}
else
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_780_);
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
return v___x_783_;
}
}
}
else
{
lean_dec(v___x_777_);
goto v___jp_764_;
}
}
v___jp_759_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = l_Lean_Syntax_getArg(v_stx_755_, v___x_760_);
lean_dec(v_stx_755_);
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
return v___x_763_;
}
v___jp_764_:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_box(0);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object* v_stx_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_784_, v_a_785_, v_a_786_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
return v_res_788_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent___closed__1(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent___closed__0));
v___x_791_ = l_Lean_stringToMessageData(v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object* v_stx_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v___x_796_; 
lean_inc(v_stx_792_);
v___x_796_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_792_, v_a_793_, v_a_794_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_810_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_810_ == 0)
{
v___x_799_ = v___x_796_;
v_isShared_800_ = v_isSharedCheck_810_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_796_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_810_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
if (lean_obj_tag(v_a_797_) == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
lean_del_object(v___x_799_);
v___x_801_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent___closed__1, &l_Lean_Attribute_Builtin_getIdent___closed__1_once, _init_l_Lean_Attribute_Builtin_getIdent___closed__1);
lean_inc(v_stx_792_);
v___x_802_ = l_Lean_MessageData_ofSyntax(v_stx_792_);
v___x_803_ = l_Lean_indentD(v___x_802_);
v___x_804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_801_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_792_, v___x_804_, v_a_793_, v_a_794_);
lean_dec(v_stx_792_);
return v___x_805_;
}
else
{
lean_object* v_val_806_; lean_object* v___x_808_; 
lean_dec(v_stx_792_);
v_val_806_ = lean_ctor_get(v_a_797_, 0);
lean_inc(v_val_806_);
lean_dec_ref_known(v_a_797_, 1);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v_val_806_);
v___x_808_ = v___x_799_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_val_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_stx_792_);
v_a_811_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_796_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_796_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object* v_stx_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_Attribute_Builtin_getIdent(v_stx_819_, v_a_820_, v_a_821_);
lean_dec(v_a_821_);
lean_dec_ref(v_a_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object* v_stx_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_824_, v_a_825_, v_a_826_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_849_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_849_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_849_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_849_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
if (lean_obj_tag(v_a_829_) == 0)
{
lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_833_ = lean_box(0);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_833_);
v___x_835_ = v___x_831_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v_val_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_848_; 
v_val_837_ = lean_ctor_get(v_a_829_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v_a_829_);
if (v_isSharedCheck_848_ == 0)
{
v___x_839_ = v_a_829_;
v_isShared_840_ = v_isSharedCheck_848_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_val_837_);
lean_dec(v_a_829_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_848_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = l_Lean_Syntax_getId(v_val_837_);
lean_dec(v_val_837_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v___x_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_847_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_845_; 
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_843_);
v___x_845_ = v___x_831_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_828_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_828_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object* v_stx_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_Attribute_Builtin_getId_x3f(v_stx_858_, v_a_859_, v_a_860_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object* v_stx_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Attribute_Builtin_getIdent(v_stx_863_, v_a_864_, v_a_865_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_876_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_876_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_872_ = l_Lean_Syntax_getId(v_a_868_);
lean_dec(v_a_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_874_ = v___x_870_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_867_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_867_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object* v_stx_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_Attribute_Builtin_getId(v_stx_885_, v_a_886_, v_a_887_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
return v_res_889_;
}
}
static lean_object* _init_l_Lean_getAttrParamOptPrio___closed__1(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(l_Lean_getAttrParamOptPrio___closed__0));
v___x_892_ = l_Lean_stringToMessageData(v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object* v_optPrioStx_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = l_Lean_Syntax_isNone(v_optPrioStx_893_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = l_Lean_Syntax_getArg(v_optPrioStx_893_, v___x_898_);
v___x_900_ = l_Lean_Syntax_isNatLit_x3f(v___x_899_);
lean_dec(v___x_899_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_901_ = lean_obj_once(&l_Lean_getAttrParamOptPrio___closed__1, &l_Lean_getAttrParamOptPrio___closed__1_once, _init_l_Lean_getAttrParamOptPrio___closed__1);
lean_inc(v_optPrioStx_893_);
v___x_902_ = l_Lean_MessageData_ofSyntax(v_optPrioStx_893_);
v___x_903_ = l_Lean_indentD(v___x_902_);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_901_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_optPrioStx_893_, v___x_904_, v_a_894_, v_a_895_);
lean_dec(v_optPrioStx_893_);
return v___x_905_;
}
else
{
lean_object* v_val_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_optPrioStx_893_);
v_val_906_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_900_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_val_906_);
lean_dec(v___x_900_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_val_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; 
lean_dec(v_optPrioStx_893_);
v___x_914_ = lean_unsigned_to_nat(1000u);
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object* v_optPrioStx_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_getAttrParamOptPrio(v_optPrioStx_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
return v_res_920_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getPrio___closed__1(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Lean_Attribute_Builtin_getPrio___closed__0));
v___x_923_ = l_Lean_stringToMessageData(v___x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object* v_stx_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
lean_inc(v_stx_924_);
v___x_928_ = l_Lean_Syntax_getKind(v_stx_924_);
v___x_929_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_930_ = lean_name_eq(v___x_928_, v___x_929_);
lean_dec(v___x_928_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_931_ = lean_obj_once(&l_Lean_Attribute_Builtin_getPrio___closed__1, &l_Lean_Attribute_Builtin_getPrio___closed__1_once, _init_l_Lean_Attribute_Builtin_getPrio___closed__1);
lean_inc(v_stx_924_);
v___x_932_ = l_Lean_MessageData_ofSyntax(v_stx_924_);
v___x_933_ = l_Lean_indentD(v___x_932_);
v___x_934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_931_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_924_, v___x_934_, v_a_925_, v_a_926_);
lean_dec(v_stx_924_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_936_ = lean_unsigned_to_nat(1u);
v___x_937_ = l_Lean_Syntax_getArg(v_stx_924_, v___x_936_);
lean_dec(v_stx_924_);
v___x_938_ = l_Lean_getAttrParamOptPrio(v___x_937_, v_a_925_, v_a_926_);
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object* v_stx_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_Attribute_Builtin_getPrio(v_stx_939_, v_a_940_, v_a_941_);
lean_dec(v_a_941_);
lean_dec_ref(v_a_940_);
return v_res_943_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__0));
v___x_946_ = l_Lean_stringToMessageData(v___x_945_);
return v___x_946_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__2));
v___x_949_ = l_Lean_stringToMessageData(v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_952_ = l_Lean_stringToMessageData(v___x_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_name_955_, uint8_t v_kind_956_){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___y_963_; 
v___x_957_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_958_ = l_Lean_MessageData_ofName(v_name_955_);
v___x_959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
switch(v_kind_956_)
{
case 0:
{
lean_object* v___x_970_; 
v___x_970_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_963_ = v___x_970_;
goto v___jp_962_;
}
case 1:
{
lean_object* v___x_971_; 
v___x_971_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_963_ = v___x_971_;
goto v___jp_962_;
}
default: 
{
lean_object* v___x_972_; 
v___x_972_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_963_ = v___x_972_;
goto v___jp_962_;
}
}
v___jp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
lean_inc_ref(v___y_963_);
v___x_964_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_964_, 0, v___y_963_);
v___x_965_ = l_Lean_MessageData_ofFormat(v___x_964_);
v___x_966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_961_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = l_Lean_throwError___redArg(v_inst_953_, v_inst_954_, v___x_968_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object* v_inst_973_, lean_object* v_inst_974_, lean_object* v_name_975_, lean_object* v_kind_976_){
_start:
{
uint8_t v_kind_boxed_977_; lean_object* v_res_978_; 
v_kind_boxed_977_ = lean_unbox(v_kind_976_);
v_res_978_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_973_, v_inst_974_, v_name_975_, v_kind_boxed_977_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object* v_m_979_, lean_object* v_inst_980_, lean_object* v_inst_981_, lean_object* v_00_u03b1_982_, lean_object* v_name_983_, uint8_t v_kind_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_980_, v_inst_981_, v_name_983_, v_kind_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object* v_m_986_, lean_object* v_inst_987_, lean_object* v_inst_988_, lean_object* v_00_u03b1_989_, lean_object* v_name_990_, lean_object* v_kind_991_){
_start:
{
uint8_t v_kind_boxed_992_; lean_object* v_res_993_; 
v_kind_boxed_992_ = lean_unbox(v_kind_991_);
v_res_993_ = l_Lean_throwAttrMustBeGlobal(v_m_986_, v_inst_987_, v_inst_988_, v_00_u03b1_989_, v_name_990_, v_kind_boxed_992_);
return v_res_993_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__0));
v___x_996_ = l_Lean_stringToMessageData(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__2));
v___x_999_ = l_Lean_stringToMessageData(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__4));
v___x_1002_ = l_Lean_stringToMessageData(v___x_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object* v_inst_1003_, lean_object* v_inst_1004_, lean_object* v_attrName_1005_, lean_object* v_declName_1006_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1007_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1008_ = l_Lean_MessageData_ofName(v_attrName_1005_);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = 0;
v___x_1013_ = l_Lean_MessageData_ofConstName(v_declName_1006_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1011_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Lean_throwError___redArg(v_inst_1003_, v_inst_1004_, v___x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object* v_m_1018_, lean_object* v_inst_1019_, lean_object* v_inst_1020_, lean_object* v_00_u03b1_1021_, lean_object* v_attrName_1022_, lean_object* v_declName_1023_){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_1019_, v_inst_1020_, v_attrName_1022_, v_declName_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0));
v___x_1027_ = l_Lean_stringToMessageData(v___x_1026_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2));
v___x_1030_ = l_Lean_stringToMessageData(v___x_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object* v_inst_1031_, lean_object* v_inst_1032_, lean_object* v_attrName_1033_, lean_object* v_declName_1034_, lean_object* v_asyncPrefix_x3f_1035_){
_start:
{
lean_object* v___y_1037_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1035_) == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lean_MessageData_nil;
v___y_1037_ = v___x_1050_;
goto v___jp_1036_;
}
else
{
lean_object* v_val_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_val_1051_ = lean_ctor_get(v_asyncPrefix_x3f_1035_, 0);
lean_inc(v_val_1051_);
lean_dec_ref_known(v_asyncPrefix_x3f_1035_, 1);
v___x_1052_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1053_ = l_Lean_MessageData_ofName(v_val_1051_);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___y_1037_ = v___x_1056_;
goto v___jp_1036_;
}
v___jp_1036_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1038_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1039_ = l_Lean_MessageData_ofName(v_attrName_1033_);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = 0;
v___x_1044_ = l_Lean_MessageData_ofConstName(v_declName_1034_, v___x_1043_);
v___x_1045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1042_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
lean_ctor_set(v___x_1048_, 1, v___y_1037_);
v___x_1049_ = l_Lean_throwError___redArg(v_inst_1031_, v_inst_1032_, v___x_1048_);
return v___x_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object* v_m_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_00_u03b1_1060_, lean_object* v_attrName_1061_, lean_object* v_declName_1062_, lean_object* v_asyncPrefix_x3f_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_1058_, v_inst_1059_, v_attrName_1061_, v_declName_1062_, v_asyncPrefix_x3f_1063_);
return v___x_1064_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0));
v___x_1067_ = l_Lean_stringToMessageData(v___x_1066_);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2));
v___x_1070_ = l_Lean_stringToMessageData(v___x_1069_);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4));
v___x_1073_ = l_Lean_stringToMessageData(v___x_1072_);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6));
v___x_1076_ = l_Lean_stringToMessageData(v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_attrName_1079_, lean_object* v_declName_1080_, lean_object* v_givenType_1081_, lean_object* v_expectedType_1082_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1083_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1084_ = l_Lean_MessageData_ofName(v_attrName_1079_);
lean_inc_ref(v___x_1084_);
v___x_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = 0;
v___x_1089_ = l_Lean_MessageData_ofConstName(v_declName_1080_, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lean_indentExpr(v_givenType_1081_);
v___x_1094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5);
v___x_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1084_);
v___x_1098_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7);
v___x_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = l_Lean_indentExpr(v_expectedType_1082_);
v___x_1101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_throwError___redArg(v_inst_1077_, v_inst_1078_, v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object* v_m_1103_, lean_object* v_inst_1104_, lean_object* v_inst_1105_, lean_object* v_00_u03b1_1106_, lean_object* v_attrName_1107_, lean_object* v_declName_1108_, lean_object* v_givenType_1109_, lean_object* v_expectedType_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_throwAttrDeclNotOfExpectedType___redArg(v_inst_1104_, v_inst_1105_, v_attrName_1107_, v_declName_1108_, v_givenType_1109_, v_expectedType_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object* v_constName_1112_, uint8_t v_skipRealize_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v_env_1117_; uint8_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1116_ = lean_st_ref_get(v___y_1114_);
v_env_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc_ref(v_env_1117_);
lean_dec(v___x_1116_);
v___x_1118_ = l_Lean_Environment_contains(v_env_1117_, v_constName_1112_, v_skipRealize_1113_);
v___x_1119_ = lean_box(v___x_1118_);
v___x_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object* v_constName_1121_, lean_object* v_skipRealize_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v_skipRealize_boxed_1125_; lean_object* v_res_1126_; 
v_skipRealize_boxed_1125_ = lean_unbox(v_skipRealize_1122_);
v_res_1126_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1121_, v_skipRealize_boxed_1125_, v___y_1123_);
lean_dec(v___y_1123_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object* v_constName_1127_, uint8_t v_skipRealize_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1127_, v_skipRealize_1128_, v___y_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object* v_constName_1133_, lean_object* v_skipRealize_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
uint8_t v_skipRealize_boxed_1138_; lean_object* v_res_1139_; 
v_skipRealize_boxed_1138_ = lean_unbox(v_skipRealize_1134_);
v_res_1139_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(v_constName_1133_, v_skipRealize_boxed_1138_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object* v___y_1140_, uint8_t v_isExporting_1141_, lean_object* v___x_1142_, lean_object* v_a_x3f_1143_){
_start:
{
lean_object* v___x_1145_; lean_object* v_env_1146_; lean_object* v_nextMacroScope_1147_; lean_object* v_ngen_1148_; lean_object* v_auxDeclNGen_1149_; lean_object* v_traceState_1150_; lean_object* v_messages_1151_; lean_object* v_infoState_1152_; lean_object* v_snapshotTasks_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1164_; 
v___x_1145_ = lean_st_ref_take(v___y_1140_);
v_env_1146_ = lean_ctor_get(v___x_1145_, 0);
v_nextMacroScope_1147_ = lean_ctor_get(v___x_1145_, 1);
v_ngen_1148_ = lean_ctor_get(v___x_1145_, 2);
v_auxDeclNGen_1149_ = lean_ctor_get(v___x_1145_, 3);
v_traceState_1150_ = lean_ctor_get(v___x_1145_, 4);
v_messages_1151_ = lean_ctor_get(v___x_1145_, 6);
v_infoState_1152_ = lean_ctor_get(v___x_1145_, 7);
v_snapshotTasks_1153_ = lean_ctor_get(v___x_1145_, 8);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; 
v_unused_1165_ = lean_ctor_get(v___x_1145_, 5);
lean_dec(v_unused_1165_);
v___x_1155_ = v___x_1145_;
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_snapshotTasks_1153_);
lean_inc(v_infoState_1152_);
lean_inc(v_messages_1151_);
lean_inc(v_traceState_1150_);
lean_inc(v_auxDeclNGen_1149_);
lean_inc(v_ngen_1148_);
lean_inc(v_nextMacroScope_1147_);
lean_inc(v_env_1146_);
lean_dec(v___x_1145_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1157_ = lean_box(0);
v___x_1158_ = l_Lean_Environment_setExporting(v_env_1146_, v_isExporting_1141_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 5, v___x_1142_);
lean_ctor_set(v___x_1155_, 0, v___x_1158_);
v___x_1160_ = v___x_1155_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_nextMacroScope_1147_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v_ngen_1148_);
lean_ctor_set(v_reuseFailAlloc_1163_, 3, v_auxDeclNGen_1149_);
lean_ctor_set(v_reuseFailAlloc_1163_, 4, v_traceState_1150_);
lean_ctor_set(v_reuseFailAlloc_1163_, 5, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1163_, 6, v_messages_1151_);
lean_ctor_set(v_reuseFailAlloc_1163_, 7, v_infoState_1152_);
lean_ctor_set(v_reuseFailAlloc_1163_, 8, v_snapshotTasks_1153_);
v___x_1160_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_st_ref_put(v___y_1140_, v___x_1160_);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1157_);
return v___x_1162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object* v___y_1166_, lean_object* v_isExporting_1167_, lean_object* v___x_1168_, lean_object* v_a_x3f_1169_, lean_object* v___y_1170_){
_start:
{
uint8_t v_isExporting_boxed_1171_; lean_object* v_res_1172_; 
v_isExporting_boxed_1171_ = lean_unbox(v_isExporting_1167_);
v_res_1172_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1166_, v_isExporting_boxed_1171_, v___x_1168_, v_a_x3f_1169_);
lean_dec(v_a_x3f_1169_);
lean_dec(v___y_1166_);
return v_res_1172_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0);
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object* v_x_1177_, uint8_t v_isExporting_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v___x_1182_; lean_object* v_env_1183_; lean_object* v___x_1184_; uint8_t v_isModule_1185_; 
v___x_1182_ = lean_st_ref_get(v___y_1180_);
v_env_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc_ref(v_env_1183_);
lean_dec(v___x_1182_);
v___x_1184_ = l_Lean_Environment_header(v_env_1183_);
v_isModule_1185_ = lean_ctor_get_uint8(v___x_1184_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1184_);
if (v_isModule_1185_ == 0)
{
lean_object* v___x_1186_; 
lean_dec_ref(v_env_1183_);
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1186_ = lean_apply_3(v_x_1177_, v___y_1179_, v___y_1180_, lean_box(0));
return v___x_1186_;
}
else
{
uint8_t v_isExporting_1187_; 
v_isExporting_1187_ = lean_ctor_get_uint8(v_env_1183_, sizeof(void*)*8);
lean_dec_ref(v_env_1183_);
if (v_isExporting_1178_ == 0)
{
if (v_isExporting_1187_ == 0)
{
lean_object* v___x_1238_; 
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1238_ = lean_apply_3(v_x_1177_, v___y_1179_, v___y_1180_, lean_box(0));
return v___x_1238_;
}
else
{
goto v___jp_1188_;
}
}
else
{
if (v_isExporting_1187_ == 0)
{
goto v___jp_1188_;
}
else
{
lean_object* v___x_1239_; 
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1239_ = lean_apply_3(v_x_1177_, v___y_1179_, v___y_1180_, lean_box(0));
return v___x_1239_;
}
}
v___jp_1188_:
{
lean_object* v___x_1189_; lean_object* v_env_1190_; lean_object* v_nextMacroScope_1191_; lean_object* v_ngen_1192_; lean_object* v_auxDeclNGen_1193_; lean_object* v_traceState_1194_; lean_object* v_messages_1195_; lean_object* v_infoState_1196_; lean_object* v_snapshotTasks_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1236_; 
v___x_1189_ = lean_st_ref_take(v___y_1180_);
v_env_1190_ = lean_ctor_get(v___x_1189_, 0);
v_nextMacroScope_1191_ = lean_ctor_get(v___x_1189_, 1);
v_ngen_1192_ = lean_ctor_get(v___x_1189_, 2);
v_auxDeclNGen_1193_ = lean_ctor_get(v___x_1189_, 3);
v_traceState_1194_ = lean_ctor_get(v___x_1189_, 4);
v_messages_1195_ = lean_ctor_get(v___x_1189_, 6);
v_infoState_1196_ = lean_ctor_get(v___x_1189_, 7);
v_snapshotTasks_1197_ = lean_ctor_get(v___x_1189_, 8);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1236_ == 0)
{
lean_object* v_unused_1237_; 
v_unused_1237_ = lean_ctor_get(v___x_1189_, 5);
lean_dec(v_unused_1237_);
v___x_1199_ = v___x_1189_;
v_isShared_1200_ = v_isSharedCheck_1236_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_snapshotTasks_1197_);
lean_inc(v_infoState_1196_);
lean_inc(v_messages_1195_);
lean_inc(v_traceState_1194_);
lean_inc(v_auxDeclNGen_1193_);
lean_inc(v_ngen_1192_);
lean_inc(v_nextMacroScope_1191_);
lean_inc(v_env_1190_);
lean_dec(v___x_1189_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1236_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1201_ = l_Lean_Environment_setExporting(v_env_1190_, v_isExporting_1178_);
v___x_1202_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 5, v___x_1202_);
lean_ctor_set(v___x_1199_, 0, v___x_1201_);
v___x_1204_ = v___x_1199_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_nextMacroScope_1191_);
lean_ctor_set(v_reuseFailAlloc_1235_, 2, v_ngen_1192_);
lean_ctor_set(v_reuseFailAlloc_1235_, 3, v_auxDeclNGen_1193_);
lean_ctor_set(v_reuseFailAlloc_1235_, 4, v_traceState_1194_);
lean_ctor_set(v_reuseFailAlloc_1235_, 5, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1235_, 6, v_messages_1195_);
lean_ctor_set(v_reuseFailAlloc_1235_, 7, v_infoState_1196_);
lean_ctor_set(v_reuseFailAlloc_1235_, 8, v_snapshotTasks_1197_);
v___x_1204_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v_r_1206_; 
v___x_1205_ = lean_st_ref_put(v___y_1180_, v___x_1204_);
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v_r_1206_ = lean_apply_3(v_x_1177_, v___y_1179_, v___y_1180_, lean_box(0));
if (lean_obj_tag(v_r_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1223_; 
v_a_1207_ = lean_ctor_get(v_r_1206_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_r_1206_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1209_ = v_r_1206_;
v_isShared_1210_ = v_isSharedCheck_1223_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v_r_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1223_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
lean_inc(v_a_1207_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set_tag(v___x_1209_, 1);
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
v___x_1213_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1180_, v_isExporting_1187_, v___x_1202_, v___x_1212_);
lean_dec_ref(v___x_1212_);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1220_ == 0)
{
lean_object* v_unused_1221_; 
v_unused_1221_ = lean_ctor_get(v___x_1213_, 0);
lean_dec(v_unused_1221_);
v___x_1215_ = v___x_1213_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_dec(v___x_1213_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v_a_1207_);
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1207_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v_a_1224_ = lean_ctor_get(v_r_1206_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v_r_1206_, 1);
v___x_1225_ = lean_box(0);
v___x_1226_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1180_, v_isExporting_1187_, v___x_1202_, v___x_1225_);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; 
v_unused_1234_ = lean_ctor_get(v___x_1226_, 0);
lean_dec(v_unused_1234_);
v___x_1228_ = v___x_1226_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_dec(v___x_1226_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set_tag(v___x_1228_, 1);
lean_ctor_set(v___x_1228_, 0, v_a_1224_);
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1224_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object* v_x_1240_, lean_object* v_isExporting_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
uint8_t v_isExporting_boxed_1245_; lean_object* v_res_1246_; 
v_isExporting_boxed_1245_ = lean_unbox(v_isExporting_1241_);
v_res_1246_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1240_, v_isExporting_boxed_1245_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object* v_00_u03b1_1247_, lean_object* v_x_1248_, uint8_t v_isExporting_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1248_, v_isExporting_1249_, v___y_1250_, v___y_1251_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object* v_00_u03b1_1254_, lean_object* v_x_1255_, lean_object* v_isExporting_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
uint8_t v_isExporting_boxed_1260_; lean_object* v_res_1261_; 
v_isExporting_boxed_1260_ = lean_unbox(v_isExporting_1256_);
v_res_1261_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(v_00_u03b1_1254_, v_x_1255_, v_isExporting_boxed_1260_, v___y_1257_, v___y_1258_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
return v_res_1261_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object* v_opts_1262_, lean_object* v_opt_1263_){
_start:
{
lean_object* v_name_1264_; lean_object* v_defValue_1265_; lean_object* v_map_1266_; lean_object* v___x_1267_; 
v_name_1264_ = lean_ctor_get(v_opt_1263_, 0);
v_defValue_1265_ = lean_ctor_get(v_opt_1263_, 1);
v_map_1266_ = lean_ctor_get(v_opts_1262_, 0);
v___x_1267_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1266_, v_name_1264_);
if (lean_obj_tag(v___x_1267_) == 0)
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_unbox(v_defValue_1265_);
return v___x_1268_;
}
else
{
lean_object* v_val_1269_; 
v_val_1269_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_val_1269_);
lean_dec_ref_known(v___x_1267_, 1);
if (lean_obj_tag(v_val_1269_) == 1)
{
uint8_t v_v_1270_; 
v_v_1270_ = lean_ctor_get_uint8(v_val_1269_, 0);
lean_dec_ref_known(v_val_1269_, 0);
return v_v_1270_;
}
else
{
uint8_t v___x_1271_; 
lean_dec(v_val_1269_);
v___x_1271_ = lean_unbox(v_defValue_1265_);
return v___x_1271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object* v_opts_1272_, lean_object* v_opt_1273_){
_start:
{
uint8_t v_res_1274_; lean_object* v_r_1275_; 
v_res_1274_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_opts_1272_, v_opt_1273_);
lean_dec_ref(v_opt_1273_);
lean_dec_ref(v_opts_1272_);
v_r_1275_ = lean_box(v_res_1274_);
return v_r_1275_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t v_suppressElabErrors_1283_, uint8_t v___y_1284_, lean_object* v_x_1285_){
_start:
{
if (lean_obj_tag(v_x_1285_) == 1)
{
lean_object* v_pre_1286_; 
v_pre_1286_ = lean_ctor_get(v_x_1285_, 0);
switch(lean_obj_tag(v_pre_1286_))
{
case 1:
{
lean_object* v_pre_1287_; 
v_pre_1287_ = lean_ctor_get(v_pre_1286_, 0);
switch(lean_obj_tag(v_pre_1287_))
{
case 0:
{
lean_object* v_str_1288_; lean_object* v_str_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_str_1288_ = lean_ctor_get(v_x_1285_, 1);
v_str_1289_ = lean_ctor_get(v_pre_1286_, 1);
v___x_1290_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0));
v___x_1291_ = lean_string_dec_eq(v_str_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__2));
v___x_1293_ = lean_string_dec_eq(v_str_1289_, v___x_1292_);
if (v___x_1293_ == 0)
{
return v___x_1293_;
}
else
{
lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1294_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1));
v___x_1295_ = lean_string_dec_eq(v_str_1288_, v___x_1294_);
if (v___x_1295_ == 0)
{
return v___x_1295_;
}
else
{
return v_suppressElabErrors_1283_;
}
}
}
else
{
lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2));
v___x_1297_ = lean_string_dec_eq(v_str_1288_, v___x_1296_);
if (v___x_1297_ == 0)
{
return v___x_1297_;
}
else
{
return v_suppressElabErrors_1283_;
}
}
}
case 1:
{
lean_object* v_pre_1298_; 
v_pre_1298_ = lean_ctor_get(v_pre_1287_, 0);
if (lean_obj_tag(v_pre_1298_) == 0)
{
lean_object* v_str_1299_; lean_object* v_str_1300_; lean_object* v_str_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v_str_1299_ = lean_ctor_get(v_x_1285_, 1);
v_str_1300_ = lean_ctor_get(v_pre_1286_, 1);
v_str_1301_ = lean_ctor_get(v_pre_1287_, 1);
v___x_1302_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3));
v___x_1303_ = lean_string_dec_eq(v_str_1301_, v___x_1302_);
if (v___x_1303_ == 0)
{
return v___x_1303_;
}
else
{
lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4));
v___x_1305_ = lean_string_dec_eq(v_str_1300_, v___x_1304_);
if (v___x_1305_ == 0)
{
return v___x_1305_;
}
else
{
lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1306_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5));
v___x_1307_ = lean_string_dec_eq(v_str_1299_, v___x_1306_);
if (v___x_1307_ == 0)
{
return v___x_1307_;
}
else
{
return v_suppressElabErrors_1283_;
}
}
}
}
else
{
return v___y_1284_;
}
}
default: 
{
return v___y_1284_;
}
}
}
case 0:
{
lean_object* v_str_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v_str_1308_ = lean_ctor_get(v_x_1285_, 1);
v___x_1309_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6));
v___x_1310_ = lean_string_dec_eq(v_str_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
return v___x_1310_;
}
else
{
return v_suppressElabErrors_1283_;
}
}
default: 
{
return v___y_1284_;
}
}
}
else
{
return v___y_1284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object* v_suppressElabErrors_1311_, lean_object* v___y_1312_, lean_object* v_x_1313_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1314_; uint8_t v___y_5064__boxed_1315_; uint8_t v_res_1316_; lean_object* v_r_1317_; 
v_suppressElabErrors_boxed_1314_ = lean_unbox(v_suppressElabErrors_1311_);
v___y_5064__boxed_1315_ = lean_unbox(v___y_1312_);
v_res_1316_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(v_suppressElabErrors_boxed_1314_, v___y_5064__boxed_1315_, v_x_1313_);
lean_dec(v_x_1313_);
v_r_1317_ = lean_box(v_res_1316_);
return v_r_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object* v_ref_1318_, lean_object* v_msgData_1319_, uint8_t v_severity_1320_, uint8_t v_isSilent_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
uint8_t v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; uint8_t v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v_currNamespace_1333_; lean_object* v_openDecls_1334_; lean_object* v___y_1335_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; uint8_t v___y_1365_; lean_object* v___y_1366_; uint8_t v___y_1367_; lean_object* v___y_1368_; uint8_t v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; uint8_t v___y_1392_; uint8_t v___y_1393_; uint8_t v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; uint8_t v___y_1406_; lean_object* v___y_1407_; uint8_t v___y_1408_; uint8_t v___y_1409_; uint8_t v___x_1414_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; uint8_t v___y_1422_; uint8_t v___y_1423_; uint8_t v___y_1424_; uint8_t v___y_1426_; uint8_t v___x_1444_; 
v___x_1414_ = 2;
v___x_1444_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1320_, v___x_1414_);
if (v___x_1444_ == 0)
{
v___y_1426_ = v___x_1444_;
goto v___jp_1425_;
}
else
{
uint8_t v___x_1445_; 
lean_inc_ref(v_msgData_1319_);
v___x_1445_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1319_);
v___y_1426_ = v___x_1445_;
goto v___jp_1425_;
}
v___jp_1325_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v_env_1340_; lean_object* v_nextMacroScope_1341_; lean_object* v_ngen_1342_; lean_object* v_auxDeclNGen_1343_; lean_object* v_traceState_1344_; lean_object* v_cache_1345_; lean_object* v_messages_1346_; lean_object* v_infoState_1347_; lean_object* v_snapshotTasks_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1359_; 
lean_inc(v_openDecls_1334_);
lean_inc(v_currNamespace_1333_);
v___x_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1336_, 0, v_currNamespace_1333_);
lean_ctor_set(v___x_1336_, 1, v_openDecls_1334_);
v___x_1337_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___y_1327_);
lean_inc_ref(v___y_1328_);
lean_inc_ref(v___y_1331_);
v___x_1338_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1338_, 0, v___y_1331_);
lean_ctor_set(v___x_1338_, 1, v___y_1330_);
lean_ctor_set(v___x_1338_, 2, v___y_1332_);
lean_ctor_set(v___x_1338_, 3, v___y_1328_);
lean_ctor_set(v___x_1338_, 4, v___x_1337_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*5, v___y_1329_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*5 + 1, v___y_1326_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*5 + 2, v_isSilent_1321_);
v___x_1339_ = lean_st_ref_take(v___y_1335_);
v_env_1340_ = lean_ctor_get(v___x_1339_, 0);
v_nextMacroScope_1341_ = lean_ctor_get(v___x_1339_, 1);
v_ngen_1342_ = lean_ctor_get(v___x_1339_, 2);
v_auxDeclNGen_1343_ = lean_ctor_get(v___x_1339_, 3);
v_traceState_1344_ = lean_ctor_get(v___x_1339_, 4);
v_cache_1345_ = lean_ctor_get(v___x_1339_, 5);
v_messages_1346_ = lean_ctor_get(v___x_1339_, 6);
v_infoState_1347_ = lean_ctor_get(v___x_1339_, 7);
v_snapshotTasks_1348_ = lean_ctor_get(v___x_1339_, 8);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1350_ = v___x_1339_;
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_snapshotTasks_1348_);
lean_inc(v_infoState_1347_);
lean_inc(v_messages_1346_);
lean_inc(v_cache_1345_);
lean_inc(v_traceState_1344_);
lean_inc(v_auxDeclNGen_1343_);
lean_inc(v_ngen_1342_);
lean_inc(v_nextMacroScope_1341_);
lean_inc(v_env_1340_);
lean_dec(v___x_1339_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = lean_box(0);
v___x_1353_ = l_Lean_MessageLog_add(v___x_1338_, v_messages_1346_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 6, v___x_1353_);
v___x_1355_ = v___x_1350_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_env_1340_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_nextMacroScope_1341_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_ngen_1342_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_auxDeclNGen_1343_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v_traceState_1344_);
lean_ctor_set(v_reuseFailAlloc_1358_, 5, v_cache_1345_);
lean_ctor_set(v_reuseFailAlloc_1358_, 6, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1358_, 7, v_infoState_1347_);
lean_ctor_set(v_reuseFailAlloc_1358_, 8, v_snapshotTasks_1348_);
v___x_1355_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_st_ref_put(v___y_1335_, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1352_);
return v___x_1357_;
}
}
}
v___jp_1360_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1386_; 
v___x_1371_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1319_);
v___x_1372_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v___x_1371_, v___y_1322_, v___y_1323_);
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_inc_ref_n(v___y_1366_, 2);
v___x_1377_ = l_Lean_FileMap_toPosition(v___y_1366_, v___y_1364_);
lean_dec(v___y_1364_);
v___x_1378_ = l_Lean_FileMap_toPosition(v___y_1366_, v___y_1370_);
lean_dec(v___y_1370_);
v___x_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lean_instInhabitedAttributeImplCore_default___closed__4));
if (v___y_1367_ == 0)
{
lean_del_object(v___x_1375_);
lean_dec_ref(v___y_1361_);
v___y_1326_ = v___y_1365_;
v___y_1327_ = v_a_1373_;
v___y_1328_ = v___x_1380_;
v___y_1329_ = v___y_1369_;
v___y_1330_ = v___x_1377_;
v___y_1331_ = v___y_1368_;
v___y_1332_ = v___x_1379_;
v_currNamespace_1333_ = v___y_1362_;
v_openDecls_1334_ = v___y_1363_;
v___y_1335_ = v___y_1323_;
goto v___jp_1325_;
}
else
{
uint8_t v___x_1381_; 
lean_inc(v_a_1373_);
v___x_1381_ = l_Lean_MessageData_hasTag(v___y_1361_, v_a_1373_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
lean_dec_ref_known(v___x_1379_, 1);
lean_dec_ref(v___x_1377_);
lean_dec(v_a_1373_);
v___x_1382_ = lean_box(0);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1382_);
v___x_1384_ = v___x_1375_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
else
{
lean_del_object(v___x_1375_);
v___y_1326_ = v___y_1365_;
v___y_1327_ = v_a_1373_;
v___y_1328_ = v___x_1380_;
v___y_1329_ = v___y_1369_;
v___y_1330_ = v___x_1377_;
v___y_1331_ = v___y_1368_;
v___y_1332_ = v___x_1379_;
v_currNamespace_1333_ = v___y_1362_;
v_openDecls_1334_ = v___y_1363_;
v___y_1335_ = v___y_1323_;
goto v___jp_1325_;
}
}
}
}
v___jp_1387_:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_Syntax_getTailPos_x3f(v___y_1396_, v___y_1394_);
lean_dec(v___y_1396_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_inc(v___y_1397_);
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1390_;
v___y_1364_ = v___y_1397_;
v___y_1365_ = v___y_1392_;
v___y_1366_ = v___y_1391_;
v___y_1367_ = v___y_1393_;
v___y_1368_ = v___y_1395_;
v___y_1369_ = v___y_1394_;
v___y_1370_ = v___y_1397_;
goto v___jp_1360_;
}
else
{
lean_object* v_val_1399_; 
v_val_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_val_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1390_;
v___y_1364_ = v___y_1397_;
v___y_1365_ = v___y_1392_;
v___y_1366_ = v___y_1391_;
v___y_1367_ = v___y_1393_;
v___y_1368_ = v___y_1395_;
v___y_1369_ = v___y_1394_;
v___y_1370_ = v_val_1399_;
goto v___jp_1360_;
}
}
v___jp_1400_:
{
lean_object* v_ref_1410_; lean_object* v___x_1411_; 
v_ref_1410_ = l_Lean_replaceRef(v_ref_1318_, v___y_1405_);
v___x_1411_ = l_Lean_Syntax_getPos_x3f(v_ref_1410_, v___y_1408_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
v___y_1388_ = v___y_1401_;
v___y_1389_ = v___y_1402_;
v___y_1390_ = v___y_1403_;
v___y_1391_ = v___y_1404_;
v___y_1392_ = v___y_1409_;
v___y_1393_ = v___y_1406_;
v___y_1394_ = v___y_1408_;
v___y_1395_ = v___y_1407_;
v___y_1396_ = v_ref_1410_;
v___y_1397_ = v___x_1412_;
goto v___jp_1387_;
}
else
{
lean_object* v_val_1413_; 
v_val_1413_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_val_1413_);
lean_dec_ref_known(v___x_1411_, 1);
v___y_1388_ = v___y_1401_;
v___y_1389_ = v___y_1402_;
v___y_1390_ = v___y_1403_;
v___y_1391_ = v___y_1404_;
v___y_1392_ = v___y_1409_;
v___y_1393_ = v___y_1406_;
v___y_1394_ = v___y_1408_;
v___y_1395_ = v___y_1407_;
v___y_1396_ = v_ref_1410_;
v___y_1397_ = v_val_1413_;
goto v___jp_1387_;
}
}
v___jp_1415_:
{
if (v___y_1424_ == 0)
{
v___y_1401_ = v___y_1417_;
v___y_1402_ = v___y_1419_;
v___y_1403_ = v___y_1420_;
v___y_1404_ = v___y_1416_;
v___y_1405_ = v___y_1421_;
v___y_1406_ = v___y_1422_;
v___y_1407_ = v___y_1418_;
v___y_1408_ = v___y_1423_;
v___y_1409_ = v_severity_1320_;
goto v___jp_1400_;
}
else
{
v___y_1401_ = v___y_1417_;
v___y_1402_ = v___y_1419_;
v___y_1403_ = v___y_1420_;
v___y_1404_ = v___y_1416_;
v___y_1405_ = v___y_1421_;
v___y_1406_ = v___y_1422_;
v___y_1407_ = v___y_1418_;
v___y_1408_ = v___y_1423_;
v___y_1409_ = v___x_1414_;
goto v___jp_1400_;
}
}
v___jp_1425_:
{
if (v___y_1426_ == 0)
{
lean_object* v_toCold_1427_; lean_object* v_ref_1428_; uint8_t v_suppressElabErrors_1429_; lean_object* v_fileName_1430_; lean_object* v_fileMap_1431_; lean_object* v_options_1432_; lean_object* v_currNamespace_1433_; lean_object* v_openDecls_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___f_1437_; uint8_t v___x_1438_; uint8_t v___x_1439_; 
v_toCold_1427_ = lean_ctor_get(v___y_1322_, 0);
v_ref_1428_ = lean_ctor_get(v___y_1322_, 2);
v_suppressElabErrors_1429_ = lean_ctor_get_uint8(v___y_1322_, sizeof(void*)*3 + 1);
v_fileName_1430_ = lean_ctor_get(v_toCold_1427_, 0);
v_fileMap_1431_ = lean_ctor_get(v_toCold_1427_, 1);
v_options_1432_ = lean_ctor_get(v_toCold_1427_, 2);
v_currNamespace_1433_ = lean_ctor_get(v_toCold_1427_, 4);
v_openDecls_1434_ = lean_ctor_get(v_toCold_1427_, 5);
v___x_1435_ = lean_box(v_suppressElabErrors_1429_);
v___x_1436_ = lean_box(v___y_1426_);
v___f_1437_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1437_, 0, v___x_1435_);
lean_closure_set(v___f_1437_, 1, v___x_1436_);
v___x_1438_ = 1;
v___x_1439_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1320_, v___x_1438_);
if (v___x_1439_ == 0)
{
v___y_1416_ = v_fileMap_1431_;
v___y_1417_ = v___f_1437_;
v___y_1418_ = v_fileName_1430_;
v___y_1419_ = v_currNamespace_1433_;
v___y_1420_ = v_openDecls_1434_;
v___y_1421_ = v_ref_1428_;
v___y_1422_ = v_suppressElabErrors_1429_;
v___y_1423_ = v___y_1426_;
v___y_1424_ = v___x_1439_;
goto v___jp_1415_;
}
else
{
lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1440_ = l_Lean_warningAsError;
v___x_1441_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_options_1432_, v___x_1440_);
v___y_1416_ = v_fileMap_1431_;
v___y_1417_ = v___f_1437_;
v___y_1418_ = v_fileName_1430_;
v___y_1419_ = v_currNamespace_1433_;
v___y_1420_ = v_openDecls_1434_;
v___y_1421_ = v_ref_1428_;
v___y_1422_ = v_suppressElabErrors_1429_;
v___y_1423_ = v___y_1426_;
v___y_1424_ = v___x_1441_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v_msgData_1319_);
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
return v___x_1443_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object* v_ref_1446_, lean_object* v_msgData_1447_, lean_object* v_severity_1448_, lean_object* v_isSilent_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
uint8_t v_severity_boxed_1453_; uint8_t v_isSilent_boxed_1454_; lean_object* v_res_1455_; 
v_severity_boxed_1453_ = lean_unbox(v_severity_1448_);
v_isSilent_boxed_1454_ = lean_unbox(v_isSilent_1449_);
v_res_1455_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1446_, v_msgData_1447_, v_severity_boxed_1453_, v_isSilent_boxed_1454_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v_ref_1446_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object* v_msgData_1456_, uint8_t v_severity_1457_, uint8_t v_isSilent_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_ref_1462_; lean_object* v___x_1463_; 
v_ref_1462_ = lean_ctor_get(v___y_1459_, 2);
v___x_1463_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1462_, v_msgData_1456_, v_severity_1457_, v_isSilent_1458_, v___y_1459_, v___y_1460_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object* v_msgData_1464_, lean_object* v_severity_1465_, lean_object* v_isSilent_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
uint8_t v_severity_boxed_1470_; uint8_t v_isSilent_boxed_1471_; lean_object* v_res_1472_; 
v_severity_boxed_1470_ = lean_unbox(v_severity_1465_);
v_isSilent_boxed_1471_ = lean_unbox(v_isSilent_1466_);
v_res_1472_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1464_, v_severity_boxed_1470_, v_isSilent_boxed_1471_, v___y_1467_, v___y_1468_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object* v_msgData_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
uint8_t v___x_1477_; uint8_t v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = 1;
v___x_1478_ = 0;
v___x_1479_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1473_, v___x_1477_, v___x_1478_, v___y_1474_, v___y_1475_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object* v_msgData_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v_msgData_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object* v_opt_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v_toCold_1488_; lean_object* v_options_1489_; uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v_toCold_1488_ = lean_ctor_get(v___y_1486_, 0);
v_options_1489_ = lean_ctor_get(v_toCold_1488_, 2);
v___x_1490_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_options_1489_, v_opt_1485_);
v___x_1491_ = lean_box(v___x_1490_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object* v_opt_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1493_, v___y_1494_);
lean_dec_ref(v___y_1494_);
lean_dec_ref(v_opt_1493_);
return v_res_1496_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0));
v___x_1499_ = l_Lean_stringToMessageData(v___x_1498_);
return v___x_1499_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2));
v___x_1502_ = l_Lean_stringToMessageData(v___x_1501_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object* v_id_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; lean_object* v_env_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1530_; 
v___x_1507_ = lean_st_ref_get(v___y_1505_);
v_env_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc_ref(v_env_1508_);
lean_dec(v___x_1507_);
v___x_1509_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1510_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v___x_1509_, v___y_1504_);
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1513_ = v___x_1510_;
v_isShared_1514_ = v_isSharedCheck_1530_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1530_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
uint8_t v_isExporting_1520_; 
v_isExporting_1520_ = lean_ctor_get_uint8(v_env_1508_, sizeof(void*)*8);
lean_dec_ref(v_env_1508_);
if (v_isExporting_1520_ == 0)
{
lean_dec(v_a_1511_);
lean_dec(v_id_1503_);
goto v___jp_1515_;
}
else
{
uint8_t v___x_1521_; 
v___x_1521_ = l_Lean_isPrivateName(v_id_1503_);
if (v___x_1521_ == 0)
{
lean_dec(v_a_1511_);
lean_dec(v_id_1503_);
goto v___jp_1515_;
}
else
{
uint8_t v___x_1522_; 
v___x_1522_ = lean_unbox(v_a_1511_);
lean_dec(v_a_1511_);
if (v___x_1522_ == 0)
{
lean_dec(v_id_1503_);
goto v___jp_1515_;
}
else
{
lean_object* v___x_1523_; uint8_t v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_del_object(v___x_1513_);
v___x_1523_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1);
v___x_1524_ = 0;
v___x_1525_ = l_Lean_MessageData_ofConstName(v_id_1503_, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1523_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3);
v___x_1528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v___x_1528_, v___y_1504_, v___y_1505_);
return v___x_1529_;
}
}
}
v___jp_1515_:
{
lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1516_ = lean_box(0);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1516_);
v___x_1518_ = v___x_1513_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object* v_id_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_id_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
return v_res_1535_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = ((lean_object*)(l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0));
v___x_1538_ = l_Lean_stringToMessageData(v___x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object* v_declName_1539_, uint8_t v_isModule_1540_, lean_object* v_attrName_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v___x_1545_; 
lean_inc(v_declName_1539_);
v___x_1545_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_declName_1539_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v___x_1546_; lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1567_; 
lean_dec_ref_known(v___x_1545_, 1);
lean_inc(v_declName_1539_);
v___x_1546_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_declName_1539_, v_isModule_1540_, v___y_1543_);
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1567_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1567_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
uint8_t v___x_1551_; 
v___x_1551_ = lean_unbox(v_a_1547_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_del_object(v___x_1549_);
v___x_1552_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1553_ = l_Lean_MessageData_ofName(v_attrName_1541_);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1552_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = lean_unbox(v_a_1547_);
lean_dec(v_a_1547_);
v___x_1558_ = l_Lean_MessageData_ofConstName(v_declName_1539_, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1556_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = lean_obj_once(&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1, &l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once, _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1);
v___x_1561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1561_, v___y_1542_, v___y_1543_);
return v___x_1562_;
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1565_; 
lean_dec(v_a_1547_);
lean_dec(v_attrName_1541_);
lean_dec(v_declName_1539_);
v___x_1563_ = lean_box(0);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1563_);
v___x_1565_ = v___x_1549_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v___x_1563_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
else
{
lean_dec(v_attrName_1541_);
lean_dec(v_declName_1539_);
return v___x_1545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object* v_declName_1568_, lean_object* v_isModule_1569_, lean_object* v_attrName_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
uint8_t v_isModule_boxed_1574_; lean_object* v_res_1575_; 
v_isModule_boxed_1574_ = lean_unbox(v_isModule_1569_);
v_res_1575_ = l_Lean_ensureAttrDeclIsPublic___lam__0(v_declName_1568_, v_isModule_boxed_1574_, v_attrName_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object* v_attrName_1576_, lean_object* v_declName_1577_, uint8_t v_attrKind_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v___x_1582_; lean_object* v_env_1586_; lean_object* v___x_1587_; uint8_t v_isModule_1588_; 
v___x_1582_ = lean_st_ref_get(v_a_1580_);
v_env_1586_ = lean_ctor_get(v___x_1582_, 0);
lean_inc_ref(v_env_1586_);
lean_dec(v___x_1582_);
v___x_1587_ = l_Lean_Environment_header(v_env_1586_);
lean_dec_ref(v_env_1586_);
v_isModule_1588_ = lean_ctor_get_uint8(v___x_1587_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1587_);
if (v_isModule_1588_ == 0)
{
lean_dec(v_declName_1577_);
lean_dec(v_attrName_1576_);
goto v___jp_1583_;
}
else
{
uint8_t v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = 1;
v___x_1590_ = l_Lean_instBEqAttributeKind_beq(v_attrKind_1578_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___f_1592_; lean_object* v___x_1593_; 
v___x_1591_ = lean_box(v_isModule_1588_);
v___f_1592_ = lean_alloc_closure((void*)(l_Lean_ensureAttrDeclIsPublic___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1592_, 0, v_declName_1577_);
lean_closure_set(v___f_1592_, 1, v___x_1591_);
lean_closure_set(v___f_1592_, 2, v_attrName_1576_);
v___x_1593_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v___f_1592_, v_isModule_1588_, v_a_1579_, v_a_1580_);
return v___x_1593_;
}
else
{
lean_dec(v_declName_1577_);
lean_dec(v_attrName_1576_);
goto v___jp_1583_;
}
}
v___jp_1583_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object* v_attrName_1594_, lean_object* v_declName_1595_, lean_object* v_attrKind_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_){
_start:
{
uint8_t v_attrKind_boxed_1600_; lean_object* v_res_1601_; 
v_attrKind_boxed_1600_ = lean_unbox(v_attrKind_1596_);
v_res_1601_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1594_, v_declName_1595_, v_attrKind_boxed_1600_, v_a_1597_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object* v_opt_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1602_, v___y_1603_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object* v_opt_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(v_opt_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec_ref(v_opt_1607_);
return v_res_1611_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsMeta___closed__1(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = ((lean_object*)(l_Lean_ensureAttrDeclIsMeta___closed__0));
v___x_1614_ = l_Lean_stringToMessageData(v___x_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object* v_attrName_1615_, lean_object* v_declName_1616_, uint8_t v_attrKind_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v_env_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v_isModule_1625_; 
v___x_1621_ = lean_st_ref_get(v_a_1619_);
v_env_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc_ref(v_env_1622_);
lean_dec(v___x_1621_);
v___x_1623_ = lean_st_ref_get(v_a_1619_);
v___x_1624_ = l_Lean_Environment_header(v_env_1622_);
lean_dec_ref(v_env_1622_);
v_isModule_1625_ = lean_ctor_get_uint8(v___x_1624_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1624_);
if (v_isModule_1625_ == 0)
{
lean_object* v___x_1626_; 
lean_dec(v___x_1623_);
v___x_1626_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1615_, v_declName_1616_, v_attrKind_1617_, v_a_1618_, v_a_1619_);
return v___x_1626_;
}
else
{
lean_object* v_env_1627_; uint8_t v___x_1628_; 
v_env_1627_ = lean_ctor_get(v___x_1623_, 0);
lean_inc_ref(v_env_1627_);
lean_dec(v___x_1623_);
lean_inc(v_declName_1616_);
v___x_1628_ = l_Lean_isMarkedMeta(v_env_1627_, v_declName_1616_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1629_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1630_ = l_Lean_MessageData_ofName(v_attrName_1615_);
v___x_1631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = l_Lean_MessageData_ofConstName(v_declName_1616_, v___x_1628_);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&l_Lean_ensureAttrDeclIsMeta___closed__1, &l_Lean_ensureAttrDeclIsMeta___closed__1_once, _init_l_Lean_ensureAttrDeclIsMeta___closed__1);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1637_, v_a_1618_, v_a_1619_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1615_, v_declName_1616_, v_attrKind_1617_, v_a_1618_, v_a_1619_);
return v___x_1639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object* v_attrName_1640_, lean_object* v_declName_1641_, lean_object* v_attrKind_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_){
_start:
{
uint8_t v_attrKind_boxed_1646_; lean_object* v_res_1647_; 
v_attrKind_boxed_1646_ = lean_unbox(v_attrKind_1642_);
v_res_1647_ = l_Lean_ensureAttrDeclIsMeta(v_attrName_1640_, v_declName_1641_, v_attrKind_boxed_1646_, v_a_1643_, v_a_1644_);
lean_dec(v_a_1644_);
lean_dec_ref(v_a_1643_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object* v_x_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object* v_x_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_instInhabitedTagAttribute_default___lam__0(v_x_1656_, v___y_1657_);
lean_dec_ref(v___y_1657_);
lean_dec_ref(v_x_1656_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object* v_s_1660_, lean_object* v_x_1661_){
_start:
{
lean_inc(v_s_1660_);
return v_s_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object* v_s_1662_, lean_object* v_x_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_instInhabitedTagAttribute_default___lam__1(v_s_1662_, v_x_1663_);
lean_dec(v_x_1663_);
lean_dec(v_s_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1));
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object* v_x_1672_, lean_object* v_x_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_instInhabitedTagAttribute_default___lam__2(v_x_1672_, v_x_1673_);
lean_dec(v_x_1673_);
lean_dec_ref(v_x_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object* v_x_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_box(0);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object* v_x_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_instInhabitedTagAttribute_default___lam__3(v_x_1677_);
lean_dec(v_x_1677_);
return v_res_1678_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_1683_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_1684_; lean_object* v___f_1685_; lean_object* v___f_1686_; lean_object* v___f_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___f_1684_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_1685_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__2));
v___f_1686_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__1));
v___f_1687_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__0));
v___x_1688_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_1689_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_1690_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
lean_ctor_set(v___x_1690_, 1, v___x_1688_);
lean_ctor_set(v___x_1690_, 2, v___f_1687_);
lean_ctor_set(v___x_1690_, 3, v___f_1686_);
lean_ctor_set(v___x_1690_, 4, v___f_1685_);
lean_ctor_set(v___x_1690_, 5, v___f_1684_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__5, &l_Lean_instInhabitedTagAttribute_default___closed__5_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__5);
v___x_1692_ = l_Lean_instInhabitedAttributeImpl_default;
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
lean_ctor_set(v___x_1693_, 1, v___x_1691_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__6, &l_Lean_instInhabitedTagAttribute_default___closed__6_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__6);
return v___x_1694_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute(void){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_instInhabitedTagAttribute_default;
return v___x_1695_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___auto__1(void){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object* v_x_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object* v_x_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lean_registerTagAttribute___lam__0(v_x_1699_);
lean_dec(v_x_1699_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object* v_newState_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_){
_start:
{
if (lean_obj_tag(v_x_1703_) == 0)
{
return v_x_1702_;
}
else
{
lean_object* v_head_1704_; lean_object* v_tail_1705_; uint8_t v___x_1706_; 
v_head_1704_ = lean_ctor_get(v_x_1703_, 0);
lean_inc(v_head_1704_);
v_tail_1705_ = lean_ctor_get(v_x_1703_, 1);
lean_inc(v_tail_1705_);
lean_dec_ref_known(v_x_1703_, 2);
v___x_1706_ = l_Lean_NameSet_contains(v_newState_1701_, v_head_1704_);
if (v___x_1706_ == 0)
{
lean_dec(v_head_1704_);
v_x_1703_ = v_tail_1705_;
goto _start;
}
else
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_NameSet_insert(v_x_1702_, v_head_1704_);
v_x_1702_ = v___x_1708_;
v_x_1703_ = v_tail_1705_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object* v_newState_1710_, lean_object* v_x_1711_, lean_object* v_x_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1710_, v_x_1711_, v_x_1712_);
lean_dec(v_newState_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object* v_x_1714_, lean_object* v_newState_1715_, lean_object* v_newConsts_1716_, lean_object* v_s_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1715_, v_s_1717_, v_newConsts_1716_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object* v_x_1719_, lean_object* v_newState_1720_, lean_object* v_newConsts_1721_, lean_object* v_s_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lean_registerTagAttribute___lam__1(v_x_1719_, v_newState_1720_, v_newConsts_1721_, v_s_1722_);
lean_dec(v_newState_1720_);
lean_dec(v_x_1719_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object* v_s_1736_){
_start:
{
lean_object* v___x_1737_; lean_object* v___y_1739_; 
v___x_1737_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__5));
if (lean_obj_tag(v_s_1736_) == 0)
{
lean_object* v_size_1743_; 
v_size_1743_ = lean_ctor_get(v_s_1736_, 0);
lean_inc(v_size_1743_);
lean_dec_ref_known(v_s_1736_, 5);
v___y_1739_ = v_size_1743_;
goto v___jp_1738_;
}
else
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_unsigned_to_nat(0u);
v___y_1739_ = v___x_1744_;
goto v___jp_1738_;
}
v___jp_1738_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1740_ = l_Nat_reprFast(v___y_1739_);
v___x_1741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
v___x_1742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1737_);
lean_ctor_set(v___x_1742_, 1, v___x_1741_);
return v___x_1742_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(lean_object* v_hi_1745_, lean_object* v_pivot_1746_, lean_object* v_as_1747_, lean_object* v_i_1748_, lean_object* v_k_1749_){
_start:
{
uint8_t v___x_1750_; 
v___x_1750_ = lean_nat_dec_lt(v_k_1749_, v_hi_1745_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec(v_k_1749_);
v___x_1751_ = lean_array_fswap(v_as_1747_, v_i_1748_, v_hi_1745_);
v___x_1752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1752_, 0, v_i_1748_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
return v___x_1752_;
}
else
{
lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = lean_array_fget_borrowed(v_as_1747_, v_k_1749_);
v___x_1754_ = l_Lean_Name_quickLt(v___x_1753_, v_pivot_1746_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_unsigned_to_nat(1u);
v___x_1756_ = lean_nat_add(v_k_1749_, v___x_1755_);
lean_dec(v_k_1749_);
v_k_1749_ = v___x_1756_;
goto _start;
}
else
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1758_ = lean_array_fswap(v_as_1747_, v_i_1748_, v_k_1749_);
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = lean_nat_add(v_i_1748_, v___x_1759_);
lean_dec(v_i_1748_);
v___x_1761_ = lean_nat_add(v_k_1749_, v___x_1759_);
lean_dec(v_k_1749_);
v_as_1747_ = v___x_1758_;
v_i_1748_ = v___x_1760_;
v_k_1749_ = v___x_1761_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg___boxed(lean_object* v_hi_1763_, lean_object* v_pivot_1764_, lean_object* v_as_1765_, lean_object* v_i_1766_, lean_object* v_k_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_1763_, v_pivot_1764_, v_as_1765_, v_i_1766_, v_k_1767_);
lean_dec(v_pivot_1764_);
lean_dec(v_hi_1763_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object* v_n_1769_, lean_object* v_as_1770_, lean_object* v_lo_1771_, lean_object* v_hi_1772_){
_start:
{
lean_object* v___y_1774_; uint8_t v___x_1784_; 
v___x_1784_ = lean_nat_dec_lt(v_lo_1771_, v_hi_1772_);
if (v___x_1784_ == 0)
{
lean_dec(v_lo_1771_);
return v_as_1770_;
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v_mid_1787_; lean_object* v___y_1789_; lean_object* v___y_1795_; lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v___x_1785_ = lean_nat_add(v_lo_1771_, v_hi_1772_);
v___x_1786_ = lean_unsigned_to_nat(1u);
v_mid_1787_ = lean_nat_shiftr(v___x_1785_, v___x_1786_);
lean_dec(v___x_1785_);
v___x_1800_ = lean_array_fget_borrowed(v_as_1770_, v_mid_1787_);
v___x_1801_ = lean_array_fget_borrowed(v_as_1770_, v_lo_1771_);
v___x_1802_ = l_Lean_Name_quickLt(v___x_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
v___y_1795_ = v_as_1770_;
goto v___jp_1794_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_array_fswap(v_as_1770_, v_lo_1771_, v_mid_1787_);
v___y_1795_ = v___x_1803_;
goto v___jp_1794_;
}
v___jp_1788_:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1790_ = lean_array_fget_borrowed(v___y_1789_, v_mid_1787_);
v___x_1791_ = lean_array_fget_borrowed(v___y_1789_, v_hi_1772_);
v___x_1792_ = l_Lean_Name_quickLt(v___x_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_dec(v_mid_1787_);
v___y_1774_ = v___y_1789_;
goto v___jp_1773_;
}
else
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_array_fswap(v___y_1789_, v_mid_1787_, v_hi_1772_);
lean_dec(v_mid_1787_);
v___y_1774_ = v___x_1793_;
goto v___jp_1773_;
}
}
v___jp_1794_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1796_ = lean_array_fget_borrowed(v___y_1795_, v_hi_1772_);
v___x_1797_ = lean_array_fget_borrowed(v___y_1795_, v_lo_1771_);
v___x_1798_ = l_Lean_Name_quickLt(v___x_1796_, v___x_1797_);
if (v___x_1798_ == 0)
{
v___y_1789_ = v___y_1795_;
goto v___jp_1788_;
}
else
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_array_fswap(v___y_1795_, v_lo_1771_, v_hi_1772_);
v___y_1789_ = v___x_1799_;
goto v___jp_1788_;
}
}
}
v___jp_1773_:
{
lean_object* v_pivot_1775_; lean_object* v___x_1776_; lean_object* v_fst_1777_; lean_object* v_snd_1778_; uint8_t v___x_1779_; 
v_pivot_1775_ = lean_array_fget(v___y_1774_, v_hi_1772_);
lean_inc_n(v_lo_1771_, 2);
v___x_1776_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_1772_, v_pivot_1775_, v___y_1774_, v_lo_1771_, v_lo_1771_);
lean_dec(v_pivot_1775_);
v_fst_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_fst_1777_);
v_snd_1778_ = lean_ctor_get(v___x_1776_, 1);
lean_inc(v_snd_1778_);
lean_dec_ref(v___x_1776_);
v___x_1779_ = lean_nat_dec_le(v_hi_1772_, v_fst_1777_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1780_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_1769_, v_snd_1778_, v_lo_1771_, v_fst_1777_);
v___x_1781_ = lean_unsigned_to_nat(1u);
v___x_1782_ = lean_nat_add(v_fst_1777_, v___x_1781_);
lean_dec(v_fst_1777_);
v_as_1770_ = v___x_1780_;
v_lo_1771_ = v___x_1782_;
goto _start;
}
else
{
lean_dec(v_fst_1777_);
lean_dec(v_lo_1771_);
return v_snd_1778_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object* v_n_1804_, lean_object* v_as_1805_, lean_object* v_lo_1806_, lean_object* v_hi_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_1804_, v_as_1805_, v_lo_1806_, v_hi_1807_);
lean_dec(v_hi_1807_);
lean_dec(v_n_1804_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(lean_object* v_env_1809_, lean_object* v_as_1810_, size_t v_i_1811_, size_t v_stop_1812_, lean_object* v_b_1813_){
_start:
{
lean_object* v___y_1815_; uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_eq(v_i_1811_, v_stop_1812_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1820_ = lean_array_uget_borrowed(v_as_1810_, v_i_1811_);
v___x_1821_ = 1;
lean_inc_ref(v_env_1809_);
v___x_1822_ = l_Lean_Environment_setExporting(v_env_1809_, v___x_1821_);
lean_inc(v___x_1820_);
v___x_1823_ = l_Lean_Environment_contains(v___x_1822_, v___x_1820_, v___x_1819_);
if (v___x_1823_ == 0)
{
v___y_1815_ = v_b_1813_;
goto v___jp_1814_;
}
else
{
lean_object* v___x_1824_; 
lean_inc(v___x_1820_);
v___x_1824_ = lean_array_push(v_b_1813_, v___x_1820_);
v___y_1815_ = v___x_1824_;
goto v___jp_1814_;
}
}
else
{
lean_dec_ref(v_env_1809_);
return v_b_1813_;
}
v___jp_1814_:
{
size_t v___x_1816_; size_t v___x_1817_; 
v___x_1816_ = ((size_t)1ULL);
v___x_1817_ = lean_usize_add(v_i_1811_, v___x_1816_);
v_i_1811_ = v___x_1817_;
v_b_1813_ = v___y_1815_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object* v_env_1825_, lean_object* v_as_1826_, lean_object* v_i_1827_, lean_object* v_stop_1828_, lean_object* v_b_1829_){
_start:
{
size_t v_i_boxed_1830_; size_t v_stop_boxed_1831_; lean_object* v_res_1832_; 
v_i_boxed_1830_ = lean_unbox_usize(v_i_1827_);
lean_dec(v_i_1827_);
v_stop_boxed_1831_ = lean_unbox_usize(v_stop_1828_);
lean_dec(v_stop_1828_);
v_res_1832_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(v_env_1825_, v_as_1826_, v_i_boxed_1830_, v_stop_boxed_1831_, v_b_1829_);
lean_dec_ref(v_as_1826_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(lean_object* v_init_1833_, lean_object* v_x_1834_){
_start:
{
if (lean_obj_tag(v_x_1834_) == 0)
{
lean_object* v_k_1835_; lean_object* v_l_1836_; lean_object* v_r_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v_k_1835_ = lean_ctor_get(v_x_1834_, 1);
lean_inc(v_k_1835_);
v_l_1836_ = lean_ctor_get(v_x_1834_, 3);
lean_inc(v_l_1836_);
v_r_1837_ = lean_ctor_get(v_x_1834_, 4);
lean_inc(v_r_1837_);
lean_dec_ref_known(v_x_1834_, 5);
v___x_1838_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v_init_1833_, v_l_1836_);
v___x_1839_ = lean_array_push(v___x_1838_, v_k_1835_);
v_init_1833_ = v___x_1839_;
v_x_1834_ = v_r_1837_;
goto _start;
}
else
{
return v_init_1833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object* v_env_1841_, lean_object* v_es_1842_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___y_1846_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___y_1863_; lean_object* v___y_1864_; uint8_t v___x_1866_; 
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
v___x_1860_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v___x_1844_, v_es_1842_);
v___x_1861_ = lean_array_get_size(v___x_1860_);
v___x_1866_ = lean_nat_dec_eq(v___x_1861_, v___x_1843_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___y_1870_; uint8_t v___x_1872_; 
v___x_1867_ = lean_unsigned_to_nat(1u);
v___x_1868_ = lean_nat_sub(v___x_1861_, v___x_1867_);
v___x_1872_ = lean_nat_dec_le(v___x_1843_, v___x_1868_);
if (v___x_1872_ == 0)
{
lean_inc(v___x_1868_);
v___y_1870_ = v___x_1868_;
goto v___jp_1869_;
}
else
{
v___y_1870_ = v___x_1843_;
goto v___jp_1869_;
}
v___jp_1869_:
{
uint8_t v___x_1871_; 
v___x_1871_ = lean_nat_dec_le(v___y_1870_, v___x_1868_);
if (v___x_1871_ == 0)
{
lean_dec(v___x_1868_);
lean_inc(v___y_1870_);
v___y_1863_ = v___y_1870_;
v___y_1864_ = v___y_1870_;
goto v___jp_1862_;
}
else
{
v___y_1863_ = v___y_1870_;
v___y_1864_ = v___x_1868_;
goto v___jp_1862_;
}
}
}
else
{
v___y_1846_ = v___x_1860_;
goto v___jp_1845_;
}
v___jp_1845_:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = lean_array_get_size(v___y_1846_);
v___x_1848_ = lean_nat_dec_lt(v___x_1843_, v___x_1847_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; 
lean_dec_ref(v_env_1841_);
v___x_1849_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1844_);
lean_ctor_set(v___x_1849_, 1, v___x_1844_);
lean_ctor_set(v___x_1849_, 2, v___y_1846_);
return v___x_1849_;
}
else
{
uint8_t v___x_1850_; 
v___x_1850_ = lean_nat_dec_le(v___x_1847_, v___x_1847_);
if (v___x_1850_ == 0)
{
if (v___x_1848_ == 0)
{
lean_object* v___x_1851_; 
lean_dec_ref(v_env_1841_);
v___x_1851_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1844_);
lean_ctor_set(v___x_1851_, 1, v___x_1844_);
lean_ctor_set(v___x_1851_, 2, v___y_1846_);
return v___x_1851_;
}
else
{
size_t v___x_1852_; size_t v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1852_ = ((size_t)0ULL);
v___x_1853_ = lean_usize_of_nat(v___x_1847_);
v___x_1854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(v_env_1841_, v___y_1846_, v___x_1852_, v___x_1853_, v___x_1844_);
lean_inc_ref(v___x_1854_);
v___x_1855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
lean_ctor_set(v___x_1855_, 2, v___y_1846_);
return v___x_1855_;
}
}
else
{
size_t v___x_1856_; size_t v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1856_ = ((size_t)0ULL);
v___x_1857_ = lean_usize_of_nat(v___x_1847_);
v___x_1858_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__2(v_env_1841_, v___y_1846_, v___x_1856_, v___x_1857_, v___x_1844_);
lean_inc_ref(v___x_1858_);
v___x_1859_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
lean_ctor_set(v___x_1859_, 2, v___y_1846_);
return v___x_1859_;
}
}
}
v___jp_1862_:
{
lean_object* v___x_1865_; 
v___x_1865_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v___x_1861_, v___x_1860_, v___y_1863_, v___y_1864_);
lean_dec(v___y_1864_);
v___y_1846_ = v___x_1865_;
goto v___jp_1845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object* v_name_1873_, lean_object* v_decl_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1878_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_1879_ = l_Lean_MessageData_ofName(v_name_1873_);
v___x_1880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1878_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
v___x_1881_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_1882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1880_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1882_, v___y_1875_, v___y_1876_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4___boxed(lean_object* v_name_1884_, lean_object* v_decl_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_registerTagAttribute___lam__4(v_name_1884_, v_decl_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_decl_1885_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object* v___x_1890_, lean_object* v_x_1891_, lean_object* v_x_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1890_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object* v___x_1895_, lean_object* v_x_1896_, lean_object* v_x_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_registerTagAttribute___lam__5(v___x_1895_, v_x_1896_, v_x_1897_);
lean_dec_ref(v_x_1897_);
lean_dec_ref(v_x_1896_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object* v___x_1900_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1900_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object* v___x_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_registerTagAttribute___lam__6(v___x_1903_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object* v_attrName_1906_, lean_object* v_declName_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1911_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1912_ = l_Lean_MessageData_ofName(v_attrName_1906_);
v___x_1913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
v___x_1916_ = 0;
v___x_1917_ = l_Lean_MessageData_ofConstName(v_declName_1907_, v___x_1916_);
v___x_1918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1915_);
lean_ctor_set(v___x_1918_, 1, v___x_1917_);
v___x_1919_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1918_);
lean_ctor_set(v___x_1920_, 1, v___x_1919_);
v___x_1921_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1920_, v___y_1908_, v___y_1909_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object* v_attrName_1922_, lean_object* v_declName_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_attrName_1922_, v_declName_1923_, v___y_1924_, v___y_1925_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object* v_attrName_1928_, lean_object* v_declName_1929_, lean_object* v_asyncPrefix_x3f_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v___y_1935_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1930_) == 0)
{
lean_object* v___x_1948_; 
v___x_1948_ = l_Lean_MessageData_nil;
v___y_1935_ = v___x_1948_;
goto v___jp_1934_;
}
else
{
lean_object* v_val_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v_val_1949_ = lean_ctor_get(v_asyncPrefix_x3f_1930_, 0);
lean_inc(v_val_1949_);
lean_dec_ref_known(v_asyncPrefix_x3f_1930_, 1);
v___x_1950_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1951_ = l_Lean_MessageData_ofName(v_val_1949_);
v___x_1952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
v___y_1935_ = v___x_1954_;
goto v___jp_1934_;
}
v___jp_1934_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1936_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1937_ = l_Lean_MessageData_ofName(v_attrName_1928_);
v___x_1938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1938_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___x_1941_ = 0;
v___x_1942_ = l_Lean_MessageData_ofConstName(v_declName_1929_, v___x_1941_);
v___x_1943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1940_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
v___x_1944_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
lean_ctor_set(v___x_1946_, 1, v___y_1935_);
v___x_1947_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1946_, v___y_1931_, v___y_1932_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object* v_attrName_1955_, lean_object* v_declName_1956_, lean_object* v_asyncPrefix_x3f_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_1955_, v_declName_1956_, v_asyncPrefix_x3f_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(lean_object* v_name_1962_, uint8_t v_kind_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___y_1973_; 
v___x_1967_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_1968_ = l_Lean_MessageData_ofName(v_name_1962_);
v___x_1969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1967_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_1971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1969_);
lean_ctor_set(v___x_1971_, 1, v___x_1970_);
switch(v_kind_1963_)
{
case 0:
{
lean_object* v___x_1980_; 
v___x_1980_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_1973_ = v___x_1980_;
goto v___jp_1972_;
}
case 1:
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_1973_ = v___x_1981_;
goto v___jp_1972_;
}
default: 
{
lean_object* v___x_1982_; 
v___x_1982_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_1973_ = v___x_1982_;
goto v___jp_1972_;
}
}
v___jp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_inc_ref(v___y_1973_);
v___x_1974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___y_1973_);
v___x_1975_ = l_Lean_MessageData_ofFormat(v___x_1974_);
v___x_1976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1971_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___x_1977_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1976_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1978_, v___y_1964_, v___y_1965_);
return v___x_1979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg___boxed(lean_object* v_name_1983_, lean_object* v_kind_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
uint8_t v_kind_boxed_1988_; lean_object* v_res_1989_; 
v_kind_boxed_1988_ = lean_unbox(v_kind_1984_);
v_res_1989_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_1983_, v_kind_boxed_1988_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object* v_validate_1990_, lean_object* v_a_1991_, lean_object* v_name_1992_, lean_object* v_decl_1993_, lean_object* v_stx_1994_, uint8_t v_kind_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_1994_, v___y_1996_, v___y_1997_);
if (lean_obj_tag(v___x_2048_) == 0)
{
uint8_t v___x_2049_; uint8_t v___x_2050_; 
lean_dec_ref_known(v___x_2048_, 1);
v___x_2049_ = 0;
v___x_2050_ = l_Lean_instBEqAttributeKind_beq(v_kind_1995_, v___x_2049_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; 
lean_dec(v_decl_1993_);
lean_dec_ref(v_a_1991_);
lean_dec_ref(v_validate_1990_);
v___x_2051_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_1992_, v_kind_1995_, v___y_1996_, v___y_1997_);
return v___x_2051_;
}
else
{
goto v___jp_2043_;
}
}
else
{
lean_dec(v_decl_1993_);
lean_dec(v_name_1992_);
lean_dec_ref(v_a_1991_);
lean_dec_ref(v_validate_1990_);
return v___x_2048_;
}
v___jp_1999_:
{
lean_object* v___x_2002_; 
lean_inc(v___y_2001_);
lean_inc_ref(v___y_2000_);
lean_inc(v_decl_1993_);
v___x_2002_ = lean_apply_4(v_validate_1990_, v_decl_1993_, v___y_2000_, v___y_2001_, lean_box(0));
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2032_; 
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v___x_2002_, 0);
lean_dec(v_unused_2033_);
v___x_2004_ = v___x_2002_;
v_isShared_2005_ = v_isSharedCheck_2032_;
goto v_resetjp_2003_;
}
else
{
lean_dec(v___x_2002_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2032_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2006_; lean_object* v_toEnvExtension_2007_; lean_object* v_env_2008_; lean_object* v_nextMacroScope_2009_; lean_object* v_ngen_2010_; lean_object* v_auxDeclNGen_2011_; lean_object* v_traceState_2012_; lean_object* v_messages_2013_; lean_object* v_infoState_2014_; lean_object* v_snapshotTasks_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2030_; 
v___x_2006_ = lean_st_ref_take(v___y_2001_);
v_toEnvExtension_2007_ = lean_ctor_get(v_a_1991_, 0);
v_env_2008_ = lean_ctor_get(v___x_2006_, 0);
v_nextMacroScope_2009_ = lean_ctor_get(v___x_2006_, 1);
v_ngen_2010_ = lean_ctor_get(v___x_2006_, 2);
v_auxDeclNGen_2011_ = lean_ctor_get(v___x_2006_, 3);
v_traceState_2012_ = lean_ctor_get(v___x_2006_, 4);
v_messages_2013_ = lean_ctor_get(v___x_2006_, 6);
v_infoState_2014_ = lean_ctor_get(v___x_2006_, 7);
v_snapshotTasks_2015_ = lean_ctor_get(v___x_2006_, 8);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2006_);
if (v_isSharedCheck_2030_ == 0)
{
lean_object* v_unused_2031_; 
v_unused_2031_ = lean_ctor_get(v___x_2006_, 5);
lean_dec(v_unused_2031_);
v___x_2017_ = v___x_2006_;
v_isShared_2018_ = v_isSharedCheck_2030_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_snapshotTasks_2015_);
lean_inc(v_infoState_2014_);
lean_inc(v_messages_2013_);
lean_inc(v_traceState_2012_);
lean_inc(v_auxDeclNGen_2011_);
lean_inc(v_ngen_2010_);
lean_inc(v_nextMacroScope_2009_);
lean_inc(v_env_2008_);
lean_dec(v___x_2006_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2030_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v_asyncMode_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v_asyncMode_2019_ = lean_ctor_get(v_toEnvExtension_2007_, 2);
lean_inc(v_asyncMode_2019_);
v___x_2020_ = lean_box(0);
lean_inc(v_decl_1993_);
v___x_2021_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_1991_, v_env_2008_, v_decl_1993_, v_asyncMode_2019_, v_decl_1993_);
lean_dec(v_asyncMode_2019_);
v___x_2022_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 5, v___x_2022_);
lean_ctor_set(v___x_2017_, 0, v___x_2021_);
v___x_2024_ = v___x_2017_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_nextMacroScope_2009_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_ngen_2010_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_auxDeclNGen_2011_);
lean_ctor_set(v_reuseFailAlloc_2029_, 4, v_traceState_2012_);
lean_ctor_set(v_reuseFailAlloc_2029_, 5, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2029_, 6, v_messages_2013_);
lean_ctor_set(v_reuseFailAlloc_2029_, 7, v_infoState_2014_);
lean_ctor_set(v_reuseFailAlloc_2029_, 8, v_snapshotTasks_2015_);
v___x_2024_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2027_; 
v___x_2025_ = lean_st_ref_put(v___y_2001_, v___x_2024_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2020_);
v___x_2027_ = v___x_2004_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2020_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
else
{
lean_dec(v_decl_1993_);
lean_dec_ref(v_a_1991_);
return v___x_2002_;
}
}
v___jp_2034_:
{
lean_object* v_toEnvExtension_2038_; lean_object* v_asyncMode_2039_; uint8_t v___x_2040_; 
v_toEnvExtension_2038_ = lean_ctor_get(v_a_1991_, 0);
v_asyncMode_2039_ = lean_ctor_get(v_toEnvExtension_2038_, 2);
lean_inc(v_decl_1993_);
lean_inc_ref(v___y_2035_);
v___x_2040_ = l_Lean_EnvExtension_asyncMayModify___redArg(v___y_2035_, v_decl_1993_, v_asyncMode_2039_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_dec_ref(v_a_1991_);
lean_dec_ref(v_validate_1990_);
v___x_2041_ = l_Lean_Environment_asyncPrefix_x3f(v___y_2035_);
v___x_2042_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_name_1992_, v_decl_1993_, v___x_2041_, v___y_2036_, v___y_2037_);
return v___x_2042_;
}
else
{
lean_dec_ref(v___y_2035_);
lean_dec(v_name_1992_);
v___y_2000_ = v___y_2036_;
v___y_2001_ = v___y_2037_;
goto v___jp_1999_;
}
}
v___jp_2043_:
{
lean_object* v___x_2044_; lean_object* v_env_2045_; lean_object* v___x_2046_; 
v___x_2044_ = lean_st_ref_get(v___y_1997_);
v_env_2045_ = lean_ctor_get(v___x_2044_, 0);
lean_inc_ref(v_env_2045_);
lean_dec(v___x_2044_);
v___x_2046_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2045_, v_decl_1993_);
if (lean_obj_tag(v___x_2046_) == 0)
{
v___y_2035_ = v_env_2045_;
v___y_2036_ = v___y_1996_;
v___y_2037_ = v___y_1997_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2047_; 
lean_dec_ref_known(v___x_2046_, 1);
lean_dec_ref(v_env_2045_);
lean_dec_ref(v_a_1991_);
lean_dec_ref(v_validate_1990_);
v___x_2047_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_1992_, v_decl_1993_, v___y_1996_, v___y_1997_);
return v___x_2047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7___boxed(lean_object* v_validate_2052_, lean_object* v_a_2053_, lean_object* v_name_2054_, lean_object* v_decl_2055_, lean_object* v_stx_2056_, lean_object* v_kind_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
uint8_t v_kind_boxed_2061_; lean_object* v_res_2062_; 
v_kind_boxed_2061_ = lean_unbox(v_kind_2057_);
v_res_2062_ = l_Lean_registerTagAttribute___lam__7(v_validate_2052_, v_a_2053_, v_name_2054_, v_decl_2055_, v_stx_2056_, v_kind_boxed_2061_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
return v_res_2062_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__5(void){
_start:
{
lean_object* v___x_2068_; lean_object* v___f_2069_; 
v___x_2068_ = l_Lean_NameSet_empty;
v___f_2069_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__5___boxed), 4, 1);
lean_closure_set(v___f_2069_, 0, v___x_2068_);
return v___f_2069_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__6(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___f_2071_; 
v___x_2070_ = l_Lean_NameSet_empty;
v___f_2071_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2071_, 0, v___x_2070_);
return v___f_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object* v_name_2074_, lean_object* v_descr_2075_, lean_object* v_validate_2076_, lean_object* v_ref_2077_, uint8_t v_applicationTime_2078_, lean_object* v_asyncMode_2079_){
_start:
{
lean_object* v___f_2081_; lean_object* v___f_2082_; lean_object* v___f_2083_; lean_object* v___f_2084_; lean_object* v___f_2085_; lean_object* v___f_2086_; lean_object* v___f_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___f_2081_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__0));
v___f_2082_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__2));
v___f_2083_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__3));
v___f_2084_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__4));
lean_inc(v_name_2074_);
v___f_2085_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__4___boxed), 5, 1);
lean_closure_set(v___f_2085_, 0, v_name_2074_);
v___f_2086_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__5, &l_Lean_registerTagAttribute___closed__5_once, _init_l_Lean_registerTagAttribute___closed__5);
v___f_2087_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__6, &l_Lean_registerTagAttribute___closed__6_once, _init_l_Lean_registerTagAttribute___closed__6);
v___x_2088_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__7));
lean_inc(v_ref_2077_);
v___x_2089_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2089_, 0, v_ref_2077_);
lean_ctor_set(v___x_2089_, 1, v___f_2087_);
lean_ctor_set(v___x_2089_, 2, v___f_2086_);
lean_ctor_set(v___x_2089_, 3, v___f_2084_);
lean_ctor_set(v___x_2089_, 4, v___f_2083_);
lean_ctor_set(v___x_2089_, 5, v___f_2082_);
lean_ctor_set(v___x_2089_, 6, v_asyncMode_2079_);
lean_ctor_set(v___x_2089_, 7, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v___f_2081_);
v___x_2091_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2090_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___f_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc_n(v_a_2092_, 2);
lean_dec_ref_known(v___x_2091_, 1);
lean_inc(v_name_2074_);
v___f_2093_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__7___boxed), 9, 3);
lean_closure_set(v___f_2093_, 0, v_validate_2076_);
lean_closure_set(v___f_2093_, 1, v_a_2092_);
lean_closure_set(v___f_2093_, 2, v_name_2074_);
v___x_2094_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2094_, 0, v_ref_2077_);
lean_ctor_set(v___x_2094_, 1, v_name_2074_);
lean_ctor_set(v___x_2094_, 2, v_descr_2075_);
lean_ctor_set_uint8(v___x_2094_, sizeof(void*)*3, v_applicationTime_2078_);
v___x_2095_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___f_2093_);
lean_ctor_set(v___x_2095_, 2, v___f_2085_);
lean_inc_ref(v___x_2095_);
v___x_2096_ = l_Lean_registerBuiltinAttribute(v___x_2095_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2104_; 
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v___x_2096_, 0);
lean_dec(v_unused_2105_);
v___x_2098_ = v___x_2096_;
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
else
{
lean_dec(v___x_2096_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2095_);
lean_ctor_set(v___x_2100_, 1, v_a_2092_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2100_);
v___x_2102_ = v___x_2098_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec_ref_known(v___x_2095_, 3);
lean_dec(v_a_2092_);
v_a_2106_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2096_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2096_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
lean_dec_ref(v___f_2085_);
lean_dec(v_ref_2077_);
lean_dec_ref(v_validate_2076_);
lean_dec_ref(v_descr_2075_);
lean_dec(v_name_2074_);
v_a_2114_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___x_2091_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2091_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object* v_name_2122_, lean_object* v_descr_2123_, lean_object* v_validate_2124_, lean_object* v_ref_2125_, lean_object* v_applicationTime_2126_, lean_object* v_asyncMode_2127_, lean_object* v_a_2128_){
_start:
{
uint8_t v_applicationTime_boxed_2129_; lean_object* v_res_2130_; 
v_applicationTime_boxed_2129_ = lean_unbox(v_applicationTime_2126_);
v_res_2130_ = l_Lean_registerTagAttribute(v_name_2122_, v_descr_2123_, v_validate_2124_, v_ref_2125_, v_applicationTime_boxed_2129_, v_asyncMode_2127_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1(lean_object* v_init_2131_, lean_object* v_t_2132_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerTagAttribute_spec__1_spec__1(v_init_2131_, v_t_2132_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(lean_object* v_n_2134_, lean_object* v_as_2135_, lean_object* v_lo_2136_, lean_object* v_hi_2137_, lean_object* v_w_2138_, lean_object* v_hlo_2139_, lean_object* v_hhi_2140_){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___redArg(v_n_2134_, v_as_2135_, v_lo_2136_, v_hi_2137_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object* v_n_2142_, lean_object* v_as_2143_, lean_object* v_lo_2144_, lean_object* v_hi_2145_, lean_object* v_w_2146_, lean_object* v_hlo_2147_, lean_object* v_hhi_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3(v_n_2142_, v_as_2143_, v_lo_2144_, v_hi_2145_, v_w_2146_, v_hlo_2147_, v_hhi_2148_);
lean_dec(v_hi_2145_);
lean_dec(v_n_2142_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(lean_object* v_00_u03b1_2150_, lean_object* v_attrName_2151_, lean_object* v_declName_2152_, lean_object* v_asyncPrefix_x3f_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v___x_2157_; 
v___x_2157_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_2151_, v_declName_2152_, v_asyncPrefix_x3f_2153_, v___y_2154_, v___y_2155_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object* v_00_u03b1_2158_, lean_object* v_attrName_2159_, lean_object* v_declName_2160_, lean_object* v_asyncPrefix_x3f_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__4(v_00_u03b1_2158_, v_attrName_2159_, v_declName_2160_, v_asyncPrefix_x3f_2161_, v___y_2162_, v___y_2163_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(lean_object* v_00_u03b1_2166_, lean_object* v_attrName_2167_, lean_object* v_declName_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_attrName_2167_, v_declName_2168_, v___y_2169_, v___y_2170_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object* v_00_u03b1_2173_, lean_object* v_attrName_2174_, lean_object* v_declName_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5(v_00_u03b1_2173_, v_attrName_2174_, v_declName_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(lean_object* v_00_u03b1_2180_, lean_object* v_name_2181_, uint8_t v_kind_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v___x_2186_; 
v___x_2186_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_2181_, v_kind_2182_, v___y_2183_, v___y_2184_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___boxed(lean_object* v_00_u03b1_2187_, lean_object* v_name_2188_, lean_object* v_kind_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
uint8_t v_kind_boxed_2193_; lean_object* v_res_2194_; 
v_kind_boxed_2193_ = lean_unbox(v_kind_2189_);
v_res_2194_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6(v_00_u03b1_2187_, v_name_2188_, v_kind_boxed_2193_, v___y_2190_, v___y_2191_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(lean_object* v_n_2195_, lean_object* v_lo_2196_, lean_object* v_hi_2197_, lean_object* v_hhi_2198_, lean_object* v_pivot_2199_, lean_object* v_as_2200_, lean_object* v_i_2201_, lean_object* v_k_2202_, lean_object* v_ilo_2203_, lean_object* v_ik_2204_, lean_object* v_w_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___redArg(v_hi_2197_, v_pivot_2199_, v_as_2200_, v_i_2201_, v_k_2202_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4___boxed(lean_object* v_n_2207_, lean_object* v_lo_2208_, lean_object* v_hi_2209_, lean_object* v_hhi_2210_, lean_object* v_pivot_2211_, lean_object* v_as_2212_, lean_object* v_i_2213_, lean_object* v_k_2214_, lean_object* v_ilo_2215_, lean_object* v_ik_2216_, lean_object* v_w_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__3_spec__4(v_n_2207_, v_lo_2208_, v_hi_2209_, v_hhi_2210_, v_pivot_2211_, v_as_2212_, v_i_2213_, v_k_2214_, v_ilo_2215_, v_ik_2216_, v_w_2217_);
lean_dec(v_pivot_2211_);
lean_dec(v_hi_2209_);
lean_dec(v_lo_2208_);
lean_dec(v_n_2207_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object* v_attr_2219_, lean_object* v_decl_2220_, lean_object* v_env_2221_){
_start:
{
lean_object* v_ext_2222_; lean_object* v_toEnvExtension_2223_; lean_object* v_asyncMode_2224_; lean_object* v___x_2225_; 
v_ext_2222_ = lean_ctor_get(v_attr_2219_, 1);
lean_inc_ref(v_ext_2222_);
lean_dec_ref(v_attr_2219_);
v_toEnvExtension_2223_ = lean_ctor_get(v_ext_2222_, 0);
v_asyncMode_2224_ = lean_ctor_get(v_toEnvExtension_2223_, 2);
lean_inc(v_asyncMode_2224_);
lean_inc(v_decl_2220_);
v___x_2225_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2222_, v_env_2221_, v_decl_2220_, v_asyncMode_2224_, v_decl_2220_);
lean_dec(v_asyncMode_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object* v_modifyEnv_2226_, lean_object* v___f_2227_, lean_object* v_____r_2228_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = lean_apply_1(v_modifyEnv_2226_, v___f_2227_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object* v_attr_2230_, lean_object* v_env_2231_, lean_object* v_decl_2232_, lean_object* v_inst_2233_, lean_object* v_inst_2234_, lean_object* v_toBind_2235_, lean_object* v___f_2236_, lean_object* v_modifyEnv_2237_, lean_object* v___f_2238_, lean_object* v_____r_2239_){
_start:
{
lean_object* v_ext_2240_; lean_object* v_toEnvExtension_2241_; lean_object* v_attr_2242_; lean_object* v_asyncMode_2243_; uint8_t v___x_2244_; 
v_ext_2240_ = lean_ctor_get(v_attr_2230_, 1);
v_toEnvExtension_2241_ = lean_ctor_get(v_ext_2240_, 0);
lean_inc_ref(v_toEnvExtension_2241_);
v_attr_2242_ = lean_ctor_get(v_attr_2230_, 0);
lean_inc_ref(v_attr_2242_);
lean_dec_ref(v_attr_2230_);
v_asyncMode_2243_ = lean_ctor_get(v_toEnvExtension_2241_, 2);
lean_inc(v_asyncMode_2243_);
lean_dec_ref(v_toEnvExtension_2241_);
lean_inc(v_decl_2232_);
lean_inc_ref(v_env_2231_);
v___x_2244_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2231_, v_decl_2232_, v_asyncMode_2243_);
lean_dec(v_asyncMode_2243_);
if (v___x_2244_ == 0)
{
lean_object* v_toAttributeImplCore_2245_; lean_object* v_name_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
lean_dec_ref(v___f_2238_);
lean_dec(v_modifyEnv_2237_);
v_toAttributeImplCore_2245_ = lean_ctor_get(v_attr_2242_, 0);
lean_inc_ref(v_toAttributeImplCore_2245_);
lean_dec_ref(v_attr_2242_);
v_name_2246_ = lean_ctor_get(v_toAttributeImplCore_2245_, 1);
lean_inc(v_name_2246_);
lean_dec_ref(v_toAttributeImplCore_2245_);
v___x_2247_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2231_);
v___x_2248_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_2233_, v_inst_2234_, v_name_2246_, v_decl_2232_, v___x_2247_);
v___x_2249_ = lean_apply_4(v_toBind_2235_, lean_box(0), lean_box(0), v___x_2248_, v___f_2236_);
return v___x_2249_;
}
else
{
lean_object* v___x_2250_; 
lean_dec_ref(v_attr_2242_);
lean_dec(v___f_2236_);
lean_dec(v_toBind_2235_);
lean_dec_ref(v_inst_2234_);
lean_dec_ref(v_inst_2233_);
lean_dec(v_decl_2232_);
lean_dec_ref(v_env_2231_);
v___x_2250_ = lean_apply_1(v_modifyEnv_2237_, v___f_2238_);
return v___x_2250_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object* v___f_2251_, lean_object* v_____r_2252_){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = lean_apply_1(v___f_2251_, v_____r_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object* v_attr_2254_, lean_object* v_decl_2255_, lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_toBind_2258_, lean_object* v___f_2259_, lean_object* v_modifyEnv_2260_, lean_object* v___f_2261_, lean_object* v_env_2262_){
_start:
{
lean_object* v___f_2263_; lean_object* v___x_2264_; 
lean_inc_ref(v___f_2261_);
lean_inc(v_modifyEnv_2260_);
lean_inc(v___f_2259_);
lean_inc(v_toBind_2258_);
lean_inc_ref(v_inst_2257_);
lean_inc_ref(v_inst_2256_);
lean_inc(v_decl_2255_);
lean_inc_ref(v_env_2262_);
lean_inc_ref(v_attr_2254_);
v___f_2263_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__2), 10, 9);
lean_closure_set(v___f_2263_, 0, v_attr_2254_);
lean_closure_set(v___f_2263_, 1, v_env_2262_);
lean_closure_set(v___f_2263_, 2, v_decl_2255_);
lean_closure_set(v___f_2263_, 3, v_inst_2256_);
lean_closure_set(v___f_2263_, 4, v_inst_2257_);
lean_closure_set(v___f_2263_, 5, v_toBind_2258_);
lean_closure_set(v___f_2263_, 6, v___f_2259_);
lean_closure_set(v___f_2263_, 7, v_modifyEnv_2260_);
lean_closure_set(v___f_2263_, 8, v___f_2261_);
v___x_2264_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2262_, v_decl_2255_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec_ref(v___f_2263_);
v___x_2265_ = lean_box(0);
v___x_2266_ = l_Lean_TagAttribute_setTag___redArg___lam__2(v_attr_2254_, v_env_2262_, v_decl_2255_, v_inst_2256_, v_inst_2257_, v_toBind_2258_, v___f_2259_, v_modifyEnv_2260_, v___f_2261_, v___x_2265_);
return v___x_2266_;
}
else
{
lean_object* v_attr_2267_; lean_object* v_toAttributeImplCore_2268_; lean_object* v_name_2269_; lean_object* v___f_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
lean_dec_ref_known(v___x_2264_, 1);
lean_dec_ref(v_env_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v_modifyEnv_2260_);
lean_dec(v___f_2259_);
v_attr_2267_ = lean_ctor_get(v_attr_2254_, 0);
lean_inc_ref(v_attr_2267_);
lean_dec_ref(v_attr_2254_);
v_toAttributeImplCore_2268_ = lean_ctor_get(v_attr_2267_, 0);
lean_inc_ref(v_toAttributeImplCore_2268_);
lean_dec_ref(v_attr_2267_);
v_name_2269_ = lean_ctor_get(v_toAttributeImplCore_2268_, 1);
lean_inc(v_name_2269_);
lean_dec_ref(v_toAttributeImplCore_2268_);
v___f_2270_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2270_, 0, v___f_2263_);
v___x_2271_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_2256_, v_inst_2257_, v_name_2269_, v_decl_2255_);
v___x_2272_ = lean_apply_4(v_toBind_2258_, lean_box(0), lean_box(0), v___x_2271_, v___f_2270_);
return v___x_2272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_inst_2275_, lean_object* v_attr_2276_, lean_object* v_decl_2277_){
_start:
{
lean_object* v_toBind_2278_; lean_object* v_getEnv_2279_; lean_object* v_modifyEnv_2280_; lean_object* v___f_2281_; lean_object* v___f_2282_; lean_object* v___f_2283_; lean_object* v___x_2284_; 
v_toBind_2278_ = lean_ctor_get(v_inst_2273_, 1);
lean_inc_n(v_toBind_2278_, 2);
v_getEnv_2279_ = lean_ctor_get(v_inst_2275_, 0);
lean_inc(v_getEnv_2279_);
v_modifyEnv_2280_ = lean_ctor_get(v_inst_2275_, 1);
lean_inc_n(v_modifyEnv_2280_, 2);
lean_dec_ref(v_inst_2275_);
lean_inc(v_decl_2277_);
lean_inc_ref(v_attr_2276_);
v___f_2281_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2281_, 0, v_attr_2276_);
lean_closure_set(v___f_2281_, 1, v_decl_2277_);
lean_inc_ref(v___f_2281_);
v___f_2282_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2282_, 0, v_modifyEnv_2280_);
lean_closure_set(v___f_2282_, 1, v___f_2281_);
v___f_2283_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__4), 9, 8);
lean_closure_set(v___f_2283_, 0, v_attr_2276_);
lean_closure_set(v___f_2283_, 1, v_decl_2277_);
lean_closure_set(v___f_2283_, 2, v_inst_2273_);
lean_closure_set(v___f_2283_, 3, v_inst_2274_);
lean_closure_set(v___f_2283_, 4, v_toBind_2278_);
lean_closure_set(v___f_2283_, 5, v___f_2282_);
lean_closure_set(v___f_2283_, 6, v_modifyEnv_2280_);
lean_closure_set(v___f_2283_, 7, v___f_2281_);
v___x_2284_ = lean_apply_4(v_toBind_2278_, lean_box(0), lean_box(0), v_getEnv_2279_, v___f_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object* v_m_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_attr_2289_, lean_object* v_decl_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Lean_TagAttribute_setTag___redArg(v_inst_2286_, v_inst_2287_, v_inst_2288_, v_attr_2289_, v_decl_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(lean_object* v___y_2292_, lean_object* v_as_2293_, lean_object* v_k_2294_, lean_object* v_x_2295_, lean_object* v_x_2296_){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v_m_2299_; lean_object* v_a_2300_; uint8_t v___x_2301_; 
v___x_2297_ = lean_nat_add(v_x_2295_, v_x_2296_);
v___x_2298_ = lean_unsigned_to_nat(1u);
v_m_2299_ = lean_nat_shiftr(v___x_2297_, v___x_2298_);
lean_dec(v___x_2297_);
v_a_2300_ = lean_array_fget_borrowed(v_as_2293_, v_m_2299_);
v___x_2301_ = l_Lean_Name_quickLt(v_a_2300_, v_k_2294_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; uint8_t v___x_2303_; 
lean_dec(v_x_2296_);
v___x_2302_ = lean_unsigned_to_nat(0u);
v___x_2303_ = l_Lean_Name_quickLt(v_k_2294_, v_a_2300_);
if (v___x_2303_ == 0)
{
uint8_t v___x_2304_; 
lean_dec(v_m_2299_);
lean_dec(v_x_2295_);
v___x_2304_ = lean_nat_dec_le(v___x_2302_, v___y_2292_);
return v___x_2304_;
}
else
{
uint8_t v___x_2305_; lean_object* v___x_2306_; uint8_t v___y_2308_; 
v___x_2305_ = lean_nat_dec_eq(v_m_2299_, v___x_2302_);
v___x_2306_ = lean_nat_sub(v_m_2299_, v___x_2298_);
lean_dec(v_m_2299_);
if (v___x_2305_ == 0)
{
uint8_t v___x_2310_; 
v___x_2310_ = lean_nat_dec_lt(v___x_2306_, v_x_2295_);
v___y_2308_ = v___x_2310_;
goto v___jp_2307_;
}
else
{
v___y_2308_ = v___x_2305_;
goto v___jp_2307_;
}
v___jp_2307_:
{
if (v___y_2308_ == 0)
{
v_x_2296_ = v___x_2306_;
goto _start;
}
else
{
lean_dec(v___x_2306_);
lean_dec(v_x_2295_);
return v___x_2301_;
}
}
}
}
else
{
lean_object* v___x_2311_; uint8_t v___x_2312_; 
lean_dec(v_x_2295_);
v___x_2311_ = lean_nat_add(v_m_2299_, v___x_2298_);
lean_dec(v_m_2299_);
v___x_2312_ = lean_nat_dec_le(v___x_2311_, v_x_2296_);
if (v___x_2312_ == 0)
{
lean_dec(v___x_2311_);
lean_dec(v_x_2296_);
return v___x_2312_;
}
else
{
v_x_2295_ = v___x_2311_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg___boxed(lean_object* v___y_2314_, lean_object* v_as_2315_, lean_object* v_k_2316_, lean_object* v_x_2317_, lean_object* v_x_2318_){
_start:
{
uint8_t v_res_2319_; lean_object* v_r_2320_; 
v_res_2319_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___y_2314_, v_as_2315_, v_k_2316_, v_x_2317_, v_x_2318_);
lean_dec(v_k_2316_);
lean_dec_ref(v_as_2315_);
lean_dec(v___y_2314_);
v_r_2320_ = lean_box(v_res_2319_);
return v_r_2320_;
}
}
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object* v_attr_2321_, lean_object* v_env_2322_, lean_object* v_decl_2323_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = lean_box(1);
v___x_2325_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2322_, v_decl_2323_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_ext_2326_; lean_object* v_toEnvExtension_2327_; lean_object* v_asyncMode_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; 
v_ext_2326_ = lean_ctor_get(v_attr_2321_, 1);
v_toEnvExtension_2327_ = lean_ctor_get(v_ext_2326_, 0);
v_asyncMode_2328_ = lean_ctor_get(v_toEnvExtension_2327_, 2);
lean_inc(v_decl_2323_);
v___x_2329_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2324_, v_ext_2326_, v_env_2322_, v_asyncMode_2328_, v_decl_2323_);
v___x_2330_ = l_Lean_NameSet_contains(v___x_2329_, v_decl_2323_);
lean_dec(v_decl_2323_);
lean_dec(v___x_2329_);
return v___x_2330_;
}
else
{
lean_object* v_val_2331_; lean_object* v_ext_2332_; uint8_t v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_val_2331_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_val_2331_);
lean_dec_ref_known(v___x_2325_, 1);
v_ext_2332_ = lean_ctor_get(v_attr_2321_, 1);
v___x_2333_ = 0;
v___x_2334_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2324_, v_ext_2332_, v_env_2322_, v_val_2331_, v___x_2333_);
lean_dec(v_val_2331_);
lean_dec_ref(v_env_2322_);
v___x_2335_ = lean_unsigned_to_nat(0u);
v___x_2336_ = lean_array_get_size(v___x_2334_);
v___x_2337_ = lean_nat_dec_lt(v___x_2335_, v___x_2336_);
if (v___x_2337_ == 0)
{
lean_dec_ref(v___x_2334_);
lean_dec(v_decl_2323_);
return v___x_2337_;
}
else
{
lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2338_ = lean_unsigned_to_nat(1u);
v___x_2339_ = lean_nat_sub(v___x_2336_, v___x_2338_);
v___x_2340_ = lean_nat_dec_le(v___x_2335_, v___x_2339_);
if (v___x_2340_ == 0)
{
lean_dec(v___x_2339_);
lean_dec_ref(v___x_2334_);
lean_dec(v_decl_2323_);
return v___x_2340_;
}
else
{
uint8_t v___x_2341_; 
lean_inc(v___x_2339_);
v___x_2341_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___x_2339_, v___x_2334_, v_decl_2323_, v___x_2335_, v___x_2339_);
lean_dec(v_decl_2323_);
lean_dec_ref(v___x_2334_);
lean_dec(v___x_2339_);
return v___x_2341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object* v_attr_2342_, lean_object* v_env_2343_, lean_object* v_decl_2344_){
_start:
{
uint8_t v_res_2345_; lean_object* v_r_2346_; 
v_res_2345_ = l_Lean_TagAttribute_hasTag(v_attr_2342_, v_env_2343_, v_decl_2344_);
lean_dec_ref(v_attr_2342_);
v_r_2346_ = lean_box(v_res_2345_);
return v_r_2346_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(lean_object* v___y_2347_, lean_object* v_as_2348_, lean_object* v_k_2349_, lean_object* v_x_2350_, lean_object* v_x_2351_, lean_object* v_x_2352_){
_start:
{
uint8_t v___x_2353_; 
v___x_2353_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___y_2347_, v_as_2348_, v_k_2349_, v_x_2350_, v_x_2351_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___boxed(lean_object* v___y_2354_, lean_object* v_as_2355_, lean_object* v_k_2356_, lean_object* v_x_2357_, lean_object* v_x_2358_, lean_object* v_x_2359_){
_start:
{
uint8_t v_res_2360_; lean_object* v_r_2361_; 
v_res_2360_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(v___y_2354_, v_as_2355_, v_k_2356_, v_x_2357_, v_x_2358_, v_x_2359_);
lean_dec(v_k_2356_);
lean_dec_ref(v_as_2355_);
lean_dec(v___y_2354_);
v_r_2361_ = lean_box(v_res_2360_);
return v_r_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object* v_x_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object* v_x_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(v_x_2367_, v___y_2368_);
lean_dec_ref(v___y_2368_);
lean_dec_ref(v_x_2367_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object* v_s_2371_, lean_object* v_x_2372_){
_start:
{
lean_inc_ref(v_s_2371_);
return v_s_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object* v_s_2373_, lean_object* v_x_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(v_s_2373_, v_x_2374_);
lean_dec_ref(v_x_2374_);
lean_dec_ref(v_s_2373_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object* v_x_2380_, lean_object* v_x_2381_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object* v_x_2383_, lean_object* v_x_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(v_x_2383_, v_x_2384_);
lean_dec_ref(v_x_2384_);
lean_dec_ref(v_x_2383_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object* v_x_2386_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = lean_box(0);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object* v_x_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(v_x_2388_);
lean_dec_ref(v_x_2388_);
return v_res_2389_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4(void){
_start:
{
lean_object* v___f_2394_; lean_object* v___f_2395_; lean_object* v___f_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___f_2394_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3));
v___f_2395_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2));
v___f_2396_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1));
v___f_2397_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0));
v___x_2398_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_2399_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_2400_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
lean_ctor_set(v___x_2400_, 1, v___x_2398_);
lean_ctor_set(v___x_2400_, 2, v___f_2397_);
lean_ctor_set(v___x_2400_, 3, v___f_2396_);
lean_ctor_set(v___x_2400_, 4, v___f_2395_);
lean_ctor_set(v___x_2400_, 5, v___f_2394_);
return v___x_2400_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5(void){
_start:
{
uint8_t v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2401_ = 0;
v___x_2402_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4);
v___x_2403_ = l_Lean_instInhabitedAttributeImpl_default;
v___x_2404_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
lean_ctor_set(v___x_2404_, 1, v___x_2402_);
lean_ctor_set_uint8(v___x_2404_, sizeof(void*)*2, v___x_2401_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg(){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object* v___dummy_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v_res_2408_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___closed__0(void){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object* v_00_u03b1_2410_){
_start:
{
lean_object* v___x_2411_; 
v___x_2411_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg(){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object* v___dummy_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lean_instInhabitedParametricAttribute___redArg();
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object* v_a_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object* v_x_2418_, lean_object* v_p_2419_){
_start:
{
lean_object* v_fst_2420_; lean_object* v_snd_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2438_; 
v_fst_2420_ = lean_ctor_get(v_x_2418_, 0);
v_snd_2421_ = lean_ctor_get(v_x_2418_, 1);
v_isSharedCheck_2438_ = !lean_is_exclusive(v_x_2418_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2423_ = v_x_2418_;
v_isShared_2424_ = v_isSharedCheck_2438_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_snd_2421_);
lean_inc(v_fst_2420_);
lean_dec(v_x_2418_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2438_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v_fst_2425_; lean_object* v_snd_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2437_; 
v_fst_2425_ = lean_ctor_get(v_p_2419_, 0);
v_snd_2426_ = lean_ctor_get(v_p_2419_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_p_2419_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2428_ = v_p_2419_;
v_isShared_2429_ = v_isSharedCheck_2437_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_snd_2426_);
lean_inc(v_fst_2425_);
lean_dec(v_p_2419_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2437_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
lean_inc(v_fst_2425_);
if (v_isShared_2424_ == 0)
{
lean_ctor_set_tag(v___x_2423_, 1);
lean_ctor_set(v___x_2423_, 1, v_fst_2420_);
lean_ctor_set(v___x_2423_, 0, v_fst_2425_);
v___x_2431_ = v___x_2423_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_fst_2425_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_fst_2420_);
v___x_2431_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2432_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2425_, v_snd_2426_, v_snd_2421_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 1, v___x_2432_);
lean_ctor_set(v___x_2428_, 0, v___x_2431_);
v___x_2434_ = v___x_2428_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2431_);
lean_ctor_set(v_reuseFailAlloc_2435_, 1, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object* v_init_2439_, lean_object* v_x_2440_){
_start:
{
if (lean_obj_tag(v_x_2440_) == 0)
{
lean_object* v_k_2441_; lean_object* v_v_2442_; lean_object* v_l_2443_; lean_object* v_r_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_k_2441_ = lean_ctor_get(v_x_2440_, 1);
v_v_2442_ = lean_ctor_get(v_x_2440_, 2);
v_l_2443_ = lean_ctor_get(v_x_2440_, 3);
v_r_2444_ = lean_ctor_get(v_x_2440_, 4);
v___x_2445_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2439_, v_l_2443_);
lean_inc(v_v_2442_);
lean_inc(v_k_2441_);
v___x_2446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2446_, 0, v_k_2441_);
lean_ctor_set(v___x_2446_, 1, v_v_2442_);
v___x_2447_ = lean_array_push(v___x_2445_, v___x_2446_);
v_init_2439_ = v___x_2447_;
v_x_2440_ = v_r_2444_;
goto _start;
}
else
{
return v_init_2439_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object* v_init_2449_, lean_object* v_x_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2449_, v_x_2450_);
lean_dec(v_x_2450_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(lean_object* v_snd_2452_, lean_object* v_as_2453_, size_t v_i_2454_, size_t v_stop_2455_, lean_object* v_b_2456_){
_start:
{
lean_object* v___y_2458_; uint8_t v___x_2462_; 
v___x_2462_ = lean_usize_dec_eq(v_i_2454_, v_stop_2455_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = lean_array_uget_borrowed(v_as_2453_, v_i_2454_);
v___x_2464_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_2452_, v___x_2463_);
if (lean_obj_tag(v___x_2464_) == 0)
{
v___y_2458_ = v_b_2456_;
goto v___jp_2457_;
}
else
{
lean_object* v_val_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v_val_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_val_2465_);
lean_dec_ref_known(v___x_2464_, 1);
lean_inc(v___x_2463_);
v___x_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2463_);
lean_ctor_set(v___x_2466_, 1, v_val_2465_);
v___x_2467_ = lean_array_push(v_b_2456_, v___x_2466_);
v___y_2458_ = v___x_2467_;
goto v___jp_2457_;
}
}
else
{
return v_b_2456_;
}
v___jp_2457_:
{
size_t v___x_2459_; size_t v___x_2460_; 
v___x_2459_ = ((size_t)1ULL);
v___x_2460_ = lean_usize_add(v_i_2454_, v___x_2459_);
v_i_2454_ = v___x_2460_;
v_b_2456_ = v___y_2458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg___boxed(lean_object* v_snd_2468_, lean_object* v_as_2469_, lean_object* v_i_2470_, lean_object* v_stop_2471_, lean_object* v_b_2472_){
_start:
{
size_t v_i_boxed_2473_; size_t v_stop_boxed_2474_; lean_object* v_res_2475_; 
v_i_boxed_2473_ = lean_unbox_usize(v_i_2470_);
lean_dec(v_i_2470_);
v_stop_boxed_2474_ = lean_unbox_usize(v_stop_2471_);
lean_dec(v_stop_2471_);
v_res_2475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2468_, v_as_2469_, v_i_boxed_2473_, v_stop_boxed_2474_, v_b_2472_);
lean_dec_ref(v_as_2469_);
lean_dec(v_snd_2468_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(lean_object* v_snd_2476_, lean_object* v_as_2477_, lean_object* v_start_2478_, lean_object* v_stop_2479_){
_start:
{
lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2480_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2481_ = lean_nat_dec_lt(v_start_2478_, v_stop_2479_);
if (v___x_2481_ == 0)
{
return v___x_2480_;
}
else
{
lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2482_ = lean_array_get_size(v_as_2477_);
v___x_2483_ = lean_nat_dec_le(v_stop_2479_, v___x_2482_);
if (v___x_2483_ == 0)
{
uint8_t v___x_2484_; 
v___x_2484_ = lean_nat_dec_lt(v_start_2478_, v___x_2482_);
if (v___x_2484_ == 0)
{
return v___x_2480_;
}
else
{
size_t v___x_2485_; size_t v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = lean_usize_of_nat(v_start_2478_);
v___x_2486_ = lean_usize_of_nat(v___x_2482_);
v___x_2487_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2476_, v_as_2477_, v___x_2485_, v___x_2486_, v___x_2480_);
return v___x_2487_;
}
}
else
{
size_t v___x_2488_; size_t v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = lean_usize_of_nat(v_start_2478_);
v___x_2489_ = lean_usize_of_nat(v_stop_2479_);
v___x_2490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2476_, v_as_2477_, v___x_2488_, v___x_2489_, v___x_2480_);
return v___x_2490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg___boxed(lean_object* v_snd_2491_, lean_object* v_as_2492_, lean_object* v_start_2493_, lean_object* v_stop_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2491_, v_as_2492_, v_start_2493_, v_stop_2494_);
lean_dec(v_stop_2494_);
lean_dec(v_start_2493_);
lean_dec_ref(v_as_2492_);
lean_dec(v_snd_2491_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object* v_hi_2496_, lean_object* v_pivot_2497_, lean_object* v_as_2498_, lean_object* v_i_2499_, lean_object* v_k_2500_){
_start:
{
uint8_t v___x_2501_; 
v___x_2501_ = lean_nat_dec_lt(v_k_2500_, v_hi_2496_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
lean_dec(v_k_2500_);
v___x_2502_ = lean_array_fswap(v_as_2498_, v_i_2499_, v_hi_2496_);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v_i_2499_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
return v___x_2503_;
}
else
{
lean_object* v___x_2504_; lean_object* v_fst_2505_; lean_object* v_fst_2506_; uint8_t v___x_2507_; 
v___x_2504_ = lean_array_fget_borrowed(v_as_2498_, v_k_2500_);
v_fst_2505_ = lean_ctor_get(v___x_2504_, 0);
v_fst_2506_ = lean_ctor_get(v_pivot_2497_, 0);
v___x_2507_ = l_Lean_Name_quickLt(v_fst_2505_, v_fst_2506_);
if (v___x_2507_ == 0)
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_unsigned_to_nat(1u);
v___x_2509_ = lean_nat_add(v_k_2500_, v___x_2508_);
lean_dec(v_k_2500_);
v_k_2500_ = v___x_2509_;
goto _start;
}
else
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2511_ = lean_array_fswap(v_as_2498_, v_i_2499_, v_k_2500_);
v___x_2512_ = lean_unsigned_to_nat(1u);
v___x_2513_ = lean_nat_add(v_i_2499_, v___x_2512_);
lean_dec(v_i_2499_);
v___x_2514_ = lean_nat_add(v_k_2500_, v___x_2512_);
lean_dec(v_k_2500_);
v_as_2498_ = v___x_2511_;
v_i_2499_ = v___x_2513_;
v_k_2500_ = v___x_2514_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object* v_hi_2516_, lean_object* v_pivot_2517_, lean_object* v_as_2518_, lean_object* v_i_2519_, lean_object* v_k_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2516_, v_pivot_2517_, v_as_2518_, v_i_2519_, v_k_2520_);
lean_dec_ref(v_pivot_2517_);
lean_dec(v_hi_2516_);
return v_res_2521_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(lean_object* v_a_2522_, lean_object* v_b_2523_){
_start:
{
lean_object* v_fst_2524_; lean_object* v_fst_2525_; uint8_t v___x_2526_; 
v_fst_2524_ = lean_ctor_get(v_a_2522_, 0);
v_fst_2525_ = lean_ctor_get(v_b_2523_, 0);
v___x_2526_ = l_Lean_Name_quickLt(v_fst_2524_, v_fst_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0___boxed(lean_object* v_a_2527_, lean_object* v_b_2528_){
_start:
{
uint8_t v_res_2529_; lean_object* v_r_2530_; 
v_res_2529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v_a_2527_, v_b_2528_);
lean_dec_ref(v_b_2528_);
lean_dec_ref(v_a_2527_);
v_r_2530_ = lean_box(v_res_2529_);
return v_r_2530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object* v_n_2531_, lean_object* v_as_2532_, lean_object* v_lo_2533_, lean_object* v_hi_2534_){
_start:
{
lean_object* v___y_2536_; uint8_t v___x_2546_; 
v___x_2546_ = lean_nat_dec_lt(v_lo_2533_, v_hi_2534_);
if (v___x_2546_ == 0)
{
lean_dec(v_lo_2533_);
return v_as_2532_;
}
else
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v_mid_2549_; lean_object* v___y_2551_; lean_object* v___y_2557_; lean_object* v___x_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2547_ = lean_nat_add(v_lo_2533_, v_hi_2534_);
v___x_2548_ = lean_unsigned_to_nat(1u);
v_mid_2549_ = lean_nat_shiftr(v___x_2547_, v___x_2548_);
lean_dec(v___x_2547_);
v___x_2562_ = lean_array_fget_borrowed(v_as_2532_, v_mid_2549_);
v___x_2563_ = lean_array_fget_borrowed(v_as_2532_, v_lo_2533_);
v___x_2564_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2562_, v___x_2563_);
if (v___x_2564_ == 0)
{
v___y_2557_ = v_as_2532_;
goto v___jp_2556_;
}
else
{
lean_object* v___x_2565_; 
v___x_2565_ = lean_array_fswap(v_as_2532_, v_lo_2533_, v_mid_2549_);
v___y_2557_ = v___x_2565_;
goto v___jp_2556_;
}
v___jp_2550_:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; 
v___x_2552_ = lean_array_fget_borrowed(v___y_2551_, v_mid_2549_);
v___x_2553_ = lean_array_fget_borrowed(v___y_2551_, v_hi_2534_);
v___x_2554_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2552_, v___x_2553_);
if (v___x_2554_ == 0)
{
lean_dec(v_mid_2549_);
v___y_2536_ = v___y_2551_;
goto v___jp_2535_;
}
else
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_array_fswap(v___y_2551_, v_mid_2549_, v_hi_2534_);
lean_dec(v_mid_2549_);
v___y_2536_ = v___x_2555_;
goto v___jp_2535_;
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; uint8_t v___x_2560_; 
v___x_2558_ = lean_array_fget_borrowed(v___y_2557_, v_hi_2534_);
v___x_2559_ = lean_array_fget_borrowed(v___y_2557_, v_lo_2533_);
v___x_2560_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___lam__0(v___x_2558_, v___x_2559_);
if (v___x_2560_ == 0)
{
v___y_2551_ = v___y_2557_;
goto v___jp_2550_;
}
else
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_array_fswap(v___y_2557_, v_lo_2533_, v_hi_2534_);
v___y_2551_ = v___x_2561_;
goto v___jp_2550_;
}
}
}
v___jp_2535_:
{
lean_object* v_pivot_2537_; lean_object* v___x_2538_; lean_object* v_fst_2539_; lean_object* v_snd_2540_; uint8_t v___x_2541_; 
v_pivot_2537_ = lean_array_fget(v___y_2536_, v_hi_2534_);
lean_inc_n(v_lo_2533_, 2);
v___x_2538_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2534_, v_pivot_2537_, v___y_2536_, v_lo_2533_, v_lo_2533_);
lean_dec(v_pivot_2537_);
v_fst_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_fst_2539_);
v_snd_2540_ = lean_ctor_get(v___x_2538_, 1);
lean_inc(v_snd_2540_);
lean_dec_ref(v___x_2538_);
v___x_2541_ = lean_nat_dec_le(v_hi_2534_, v_fst_2539_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2531_, v_snd_2540_, v_lo_2533_, v_fst_2539_);
v___x_2543_ = lean_unsigned_to_nat(1u);
v___x_2544_ = lean_nat_add(v_fst_2539_, v___x_2543_);
lean_dec(v_fst_2539_);
v_as_2532_ = v___x_2542_;
v_lo_2533_ = v___x_2544_;
goto _start;
}
else
{
lean_dec(v_fst_2539_);
lean_dec(v_lo_2533_);
return v_snd_2540_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object* v_n_2566_, lean_object* v_as_2567_, lean_object* v_lo_2568_, lean_object* v_hi_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2566_, v_as_2567_, v_lo_2568_, v_hi_2569_);
lean_dec(v_hi_2569_);
lean_dec(v_n_2566_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object* v_filterExport_2571_, lean_object* v_env_2572_, lean_object* v_as_2573_, size_t v_i_2574_, size_t v_stop_2575_, lean_object* v_b_2576_){
_start:
{
lean_object* v___y_2578_; uint8_t v___x_2582_; 
v___x_2582_ = lean_usize_dec_eq(v_i_2574_, v_stop_2575_);
if (v___x_2582_ == 0)
{
lean_object* v___x_2583_; lean_object* v_fst_2584_; lean_object* v_snd_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; 
v___x_2583_ = lean_array_uget_borrowed(v_as_2573_, v_i_2574_);
v_fst_2584_ = lean_ctor_get(v___x_2583_, 0);
v_snd_2585_ = lean_ctor_get(v___x_2583_, 1);
lean_inc_ref(v_filterExport_2571_);
lean_inc(v_snd_2585_);
lean_inc(v_fst_2584_);
lean_inc_ref(v_env_2572_);
v___x_2586_ = lean_apply_3(v_filterExport_2571_, v_env_2572_, v_fst_2584_, v_snd_2585_);
v___x_2587_ = lean_unbox(v___x_2586_);
if (v___x_2587_ == 0)
{
v___y_2578_ = v_b_2576_;
goto v___jp_2577_;
}
else
{
lean_object* v___x_2588_; 
lean_inc(v___x_2583_);
v___x_2588_ = lean_array_push(v_b_2576_, v___x_2583_);
v___y_2578_ = v___x_2588_;
goto v___jp_2577_;
}
}
else
{
lean_dec_ref(v_env_2572_);
lean_dec_ref(v_filterExport_2571_);
return v_b_2576_;
}
v___jp_2577_:
{
size_t v___x_2579_; size_t v___x_2580_; 
v___x_2579_ = ((size_t)1ULL);
v___x_2580_ = lean_usize_add(v_i_2574_, v___x_2579_);
v_i_2574_ = v___x_2580_;
v_b_2576_ = v___y_2578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object* v_filterExport_2589_, lean_object* v_env_2590_, lean_object* v_as_2591_, lean_object* v_i_2592_, lean_object* v_stop_2593_, lean_object* v_b_2594_){
_start:
{
size_t v_i_boxed_2595_; size_t v_stop_boxed_2596_; lean_object* v_res_2597_; 
v_i_boxed_2595_ = lean_unbox_usize(v_i_2592_);
lean_dec(v_i_2592_);
v_stop_boxed_2596_ = lean_unbox_usize(v_stop_2593_);
lean_dec(v_stop_2593_);
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2589_, v_env_2590_, v_as_2591_, v_i_boxed_2595_, v_stop_boxed_2596_, v_b_2594_);
lean_dec_ref(v_as_2591_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object* v_filterExport_2598_, uint8_t v_preserveOrder_2599_, lean_object* v_env_2600_, lean_object* v_x_2601_){
_start:
{
lean_object* v___y_2603_; 
if (v_preserveOrder_2599_ == 0)
{
lean_object* v_snd_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v_r_2622_; lean_object* v___x_2623_; lean_object* v___y_2625_; lean_object* v___y_2626_; uint8_t v___x_2628_; 
v_snd_2619_ = lean_ctor_get(v_x_2601_, 1);
lean_inc(v_snd_2619_);
lean_dec_ref(v_x_2601_);
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v_r_2622_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v___x_2621_, v_snd_2619_);
lean_dec(v_snd_2619_);
v___x_2623_ = lean_array_get_size(v_r_2622_);
v___x_2628_ = lean_nat_dec_eq(v___x_2623_, v___x_2620_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___y_2632_; uint8_t v___x_2634_; 
v___x_2629_ = lean_unsigned_to_nat(1u);
v___x_2630_ = lean_nat_sub(v___x_2623_, v___x_2629_);
v___x_2634_ = lean_nat_dec_le(v___x_2620_, v___x_2630_);
if (v___x_2634_ == 0)
{
lean_inc(v___x_2630_);
v___y_2632_ = v___x_2630_;
goto v___jp_2631_;
}
else
{
v___y_2632_ = v___x_2620_;
goto v___jp_2631_;
}
v___jp_2631_:
{
uint8_t v___x_2633_; 
v___x_2633_ = lean_nat_dec_le(v___y_2632_, v___x_2630_);
if (v___x_2633_ == 0)
{
lean_dec(v___x_2630_);
lean_inc(v___y_2632_);
v___y_2625_ = v___y_2632_;
v___y_2626_ = v___y_2632_;
goto v___jp_2624_;
}
else
{
v___y_2625_ = v___y_2632_;
v___y_2626_ = v___x_2630_;
goto v___jp_2624_;
}
}
}
else
{
v___y_2603_ = v_r_2622_;
goto v___jp_2602_;
}
v___jp_2624_:
{
lean_object* v___x_2627_; 
v___x_2627_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v___x_2623_, v_r_2622_, v___y_2625_, v___y_2626_);
lean_dec(v___y_2626_);
v___y_2603_ = v___x_2627_;
goto v___jp_2602_;
}
}
else
{
lean_object* v_fst_2635_; lean_object* v_snd_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_fst_2635_ = lean_ctor_get(v_x_2601_, 0);
lean_inc(v_fst_2635_);
v_snd_2636_ = lean_ctor_get(v_x_2601_, 1);
lean_inc(v_snd_2636_);
lean_dec_ref(v_x_2601_);
v___x_2637_ = lean_array_mk(v_fst_2635_);
v___x_2638_ = l_Array_reverse___redArg(v___x_2637_);
v___x_2639_ = lean_unsigned_to_nat(0u);
v___x_2640_ = lean_array_get_size(v___x_2638_);
v___x_2641_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2636_, v___x_2638_, v___x_2639_, v___x_2640_);
lean_dec_ref(v___x_2638_);
lean_dec(v_snd_2636_);
v___y_2603_ = v___x_2641_;
goto v___jp_2602_;
}
v___jp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2604_ = lean_unsigned_to_nat(0u);
v___x_2605_ = lean_array_get_size(v___y_2603_);
v___x_2606_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2607_ = lean_nat_dec_lt(v___x_2604_, v___x_2605_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; 
lean_dec_ref(v_env_2600_);
lean_dec_ref(v_filterExport_2598_);
v___x_2608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2606_);
lean_ctor_set(v___x_2608_, 1, v___x_2606_);
lean_ctor_set(v___x_2608_, 2, v___y_2603_);
return v___x_2608_;
}
else
{
uint8_t v___x_2609_; 
v___x_2609_ = lean_nat_dec_le(v___x_2605_, v___x_2605_);
if (v___x_2609_ == 0)
{
if (v___x_2607_ == 0)
{
lean_object* v___x_2610_; 
lean_dec_ref(v_env_2600_);
lean_dec_ref(v_filterExport_2598_);
v___x_2610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2606_);
lean_ctor_set(v___x_2610_, 1, v___x_2606_);
lean_ctor_set(v___x_2610_, 2, v___y_2603_);
return v___x_2610_;
}
else
{
size_t v___x_2611_; size_t v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2611_ = ((size_t)0ULL);
v___x_2612_ = lean_usize_of_nat(v___x_2605_);
v___x_2613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2598_, v_env_2600_, v___y_2603_, v___x_2611_, v___x_2612_, v___x_2606_);
lean_inc_ref(v___x_2613_);
v___x_2614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
lean_ctor_set(v___x_2614_, 2, v___y_2603_);
return v___x_2614_;
}
}
else
{
size_t v___x_2615_; size_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2615_ = ((size_t)0ULL);
v___x_2616_ = lean_usize_of_nat(v___x_2605_);
v___x_2617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2598_, v_env_2600_, v___y_2603_, v___x_2615_, v___x_2616_, v___x_2606_);
lean_inc_ref(v___x_2617_);
v___x_2618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
lean_ctor_set(v___x_2618_, 2, v___y_2603_);
return v___x_2618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed(lean_object* v_filterExport_2642_, lean_object* v_preserveOrder_2643_, lean_object* v_env_2644_, lean_object* v_x_2645_){
_start:
{
uint8_t v_preserveOrder_boxed_2646_; lean_object* v_res_2647_; 
v_preserveOrder_boxed_2646_ = lean_unbox(v_preserveOrder_2643_);
v_res_2647_ = l_Lean_registerParametricAttributeExt___redArg___lam__1(v_filterExport_2642_, v_preserveOrder_boxed_2646_, v_env_2644_, v_x_2645_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object* v_x_2657_){
_start:
{
lean_object* v_snd_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2672_; 
v_snd_2658_ = lean_ctor_get(v_x_2657_, 1);
v_isSharedCheck_2672_ = !lean_is_exclusive(v_x_2657_);
if (v_isSharedCheck_2672_ == 0)
{
lean_object* v_unused_2673_; 
v_unused_2673_ = lean_ctor_get(v_x_2657_, 0);
lean_dec(v_unused_2673_);
v___x_2660_ = v_x_2657_;
v_isShared_2661_ = v_isSharedCheck_2672_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_snd_2658_);
lean_dec(v_x_2657_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2672_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; lean_object* v___y_2664_; 
v___x_2662_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___lam__2___closed__3));
if (lean_obj_tag(v_snd_2658_) == 0)
{
lean_object* v_size_2670_; 
v_size_2670_ = lean_ctor_get(v_snd_2658_, 0);
lean_inc(v_size_2670_);
lean_dec_ref_known(v_snd_2658_, 5);
v___y_2664_ = v_size_2670_;
goto v___jp_2663_;
}
else
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_unsigned_to_nat(0u);
v___y_2664_ = v___x_2671_;
goto v___jp_2663_;
}
v___jp_2663_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2668_; 
v___x_2665_ = l_Nat_reprFast(v___y_2664_);
v___x_2666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set_tag(v___x_2660_, 5);
lean_ctor_set(v___x_2660_, 1, v___x_2666_);
lean_ctor_set(v___x_2660_, 0, v___x_2662_);
v___x_2668_ = v___x_2660_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2662_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object* v_x_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___boxed(lean_object* v_x_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_registerParametricAttributeExt___redArg___lam__3(v_x_2676_);
lean_dec_ref(v_x_2676_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object* v___x_2678_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object* v___x_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_registerParametricAttributeExt___redArg___lam__4(v___x_2681_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object* v___x_2684_, lean_object* v_x_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2684_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object* v___x_2689_, lean_object* v_x_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Lean_registerParametricAttributeExt___redArg___lam__5(v___x_2689_, v_x_2690_, v___y_2691_);
lean_dec_ref(v___y_2691_);
lean_dec_ref(v_x_2690_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object* v_ref_2704_, uint8_t v_preserveOrder_2705_, lean_object* v_filterExport_2706_){
_start:
{
lean_object* v___f_2708_; lean_object* v___x_2709_; lean_object* v___f_2710_; lean_object* v___f_2711_; lean_object* v___f_2712_; lean_object* v___f_2713_; lean_object* v___f_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___f_2708_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__0));
v___x_2709_ = lean_box(v_preserveOrder_2705_);
v___f_2710_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeExt___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2710_, 0, v_filterExport_2706_);
lean_closure_set(v___f_2710_, 1, v___x_2709_);
v___f_2711_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__1));
v___f_2712_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__2));
v___f_2713_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__4));
v___f_2714_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__5));
v___x_2715_ = lean_box(2);
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2717_, 0, v_ref_2704_);
lean_ctor_set(v___x_2717_, 1, v___f_2713_);
lean_ctor_set(v___x_2717_, 2, v___f_2714_);
lean_ctor_set(v___x_2717_, 3, v___f_2708_);
lean_ctor_set(v___x_2717_, 4, v___f_2710_);
lean_ctor_set(v___x_2717_, 5, v___f_2711_);
lean_ctor_set(v___x_2717_, 6, v___x_2715_);
lean_ctor_set(v___x_2717_, 7, v___x_2716_);
v___x_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
lean_ctor_set(v___x_2718_, 1, v___f_2712_);
v___x_2719_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object* v_ref_2720_, lean_object* v_preserveOrder_2721_, lean_object* v_filterExport_2722_, lean_object* v_a_2723_){
_start:
{
uint8_t v_preserveOrder_boxed_2724_; lean_object* v_res_2725_; 
v_preserveOrder_boxed_2724_ = lean_unbox(v_preserveOrder_2721_);
v_res_2725_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2720_, v_preserveOrder_boxed_2724_, v_filterExport_2722_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object* v_00_u03b1_2726_, lean_object* v_ref_2727_, uint8_t v_preserveOrder_2728_, lean_object* v_filterExport_2729_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2727_, v_preserveOrder_2728_, v_filterExport_2729_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object* v_00_u03b1_2732_, lean_object* v_ref_2733_, lean_object* v_preserveOrder_2734_, lean_object* v_filterExport_2735_, lean_object* v_a_2736_){
_start:
{
uint8_t v_preserveOrder_boxed_2737_; lean_object* v_res_2738_; 
v_preserveOrder_boxed_2737_ = lean_unbox(v_preserveOrder_2734_);
v_res_2738_ = l_Lean_registerParametricAttributeExt(v_00_u03b1_2732_, v_ref_2733_, v_preserveOrder_boxed_2737_, v_filterExport_2735_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object* v_00_u03b1_2739_, lean_object* v_filterExport_2740_, lean_object* v_env_2741_, lean_object* v_as_2742_, size_t v_i_2743_, size_t v_stop_2744_, lean_object* v_b_2745_){
_start:
{
lean_object* v___x_2746_; 
v___x_2746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2740_, v_env_2741_, v_as_2742_, v_i_2743_, v_stop_2744_, v_b_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object* v_00_u03b1_2747_, lean_object* v_filterExport_2748_, lean_object* v_env_2749_, lean_object* v_as_2750_, lean_object* v_i_2751_, lean_object* v_stop_2752_, lean_object* v_b_2753_){
_start:
{
size_t v_i_boxed_2754_; size_t v_stop_boxed_2755_; lean_object* v_res_2756_; 
v_i_boxed_2754_ = lean_unbox_usize(v_i_2751_);
lean_dec(v_i_2751_);
v_stop_boxed_2755_ = lean_unbox_usize(v_stop_2752_);
lean_dec(v_stop_2752_);
v_res_2756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(v_00_u03b1_2747_, v_filterExport_2748_, v_env_2749_, v_as_2750_, v_i_boxed_2754_, v_stop_boxed_2755_, v_b_2753_);
lean_dec_ref(v_as_2750_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object* v_init_2757_, lean_object* v_t_2758_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2757_, v_t_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object* v_init_2760_, lean_object* v_t_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v_init_2760_, v_t_2761_);
lean_dec(v_t_2761_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(lean_object* v_00_u03b1_2763_, lean_object* v_init_2764_, lean_object* v_t_2765_){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2764_, v_t_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object* v_00_u03b1_2767_, lean_object* v_init_2768_, lean_object* v_t_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1(v_00_u03b1_2767_, v_init_2768_, v_t_2769_);
lean_dec(v_t_2769_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(lean_object* v_00_u03b1_2771_, lean_object* v_n_2772_, lean_object* v_as_2773_, lean_object* v_lo_2774_, lean_object* v_hi_2775_, lean_object* v_w_2776_, lean_object* v_hlo_2777_, lean_object* v_hhi_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_n_2772_, v_as_2773_, v_lo_2774_, v_hi_2775_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object* v_00_u03b1_2780_, lean_object* v_n_2781_, lean_object* v_as_2782_, lean_object* v_lo_2783_, lean_object* v_hi_2784_, lean_object* v_w_2785_, lean_object* v_hlo_2786_, lean_object* v_hhi_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2(v_00_u03b1_2780_, v_n_2781_, v_as_2782_, v_lo_2783_, v_hi_2784_, v_w_2785_, v_hlo_2786_, v_hhi_2787_);
lean_dec(v_hi_2784_);
lean_dec(v_n_2781_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(lean_object* v_00_u03b1_2789_, lean_object* v_snd_2790_, lean_object* v_as_2791_, lean_object* v_start_2792_, lean_object* v_stop_2793_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___redArg(v_snd_2790_, v_as_2791_, v_start_2792_, v_stop_2793_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3___boxed(lean_object* v_00_u03b1_2795_, lean_object* v_snd_2796_, lean_object* v_as_2797_, lean_object* v_start_2798_, lean_object* v_stop_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3(v_00_u03b1_2795_, v_snd_2796_, v_as_2797_, v_start_2798_, v_stop_2799_);
lean_dec(v_stop_2799_);
lean_dec(v_start_2798_);
lean_dec_ref(v_as_2797_);
lean_dec(v_snd_2796_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object* v_00_u03b1_2801_, lean_object* v_init_2802_, lean_object* v_x_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_init_2802_, v_x_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2805_, lean_object* v_init_2806_, lean_object* v_x_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(v_00_u03b1_2805_, v_init_2806_, v_x_2807_);
lean_dec(v_x_2807_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object* v_00_u03b1_2809_, lean_object* v_n_2810_, lean_object* v_lo_2811_, lean_object* v_hi_2812_, lean_object* v_hhi_2813_, lean_object* v_pivot_2814_, lean_object* v_as_2815_, lean_object* v_i_2816_, lean_object* v_k_2817_, lean_object* v_ilo_2818_, lean_object* v_ik_2819_, lean_object* v_w_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_hi_2812_, v_pivot_2814_, v_as_2815_, v_i_2816_, v_k_2817_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2822_, lean_object* v_n_2823_, lean_object* v_lo_2824_, lean_object* v_hi_2825_, lean_object* v_hhi_2826_, lean_object* v_pivot_2827_, lean_object* v_as_2828_, lean_object* v_i_2829_, lean_object* v_k_2830_, lean_object* v_ilo_2831_, lean_object* v_ik_2832_, lean_object* v_w_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(v_00_u03b1_2822_, v_n_2823_, v_lo_2824_, v_hi_2825_, v_hhi_2826_, v_pivot_2827_, v_as_2828_, v_i_2829_, v_k_2830_, v_ilo_2831_, v_ik_2832_, v_w_2833_);
lean_dec_ref(v_pivot_2827_);
lean_dec(v_hi_2825_);
lean_dec(v_lo_2824_);
lean_dec(v_n_2823_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(lean_object* v_00_u03b1_2835_, lean_object* v_snd_2836_, lean_object* v_as_2837_, size_t v_i_2838_, size_t v_stop_2839_, lean_object* v_b_2840_){
_start:
{
lean_object* v___x_2841_; 
v___x_2841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___redArg(v_snd_2836_, v_as_2837_, v_i_2838_, v_stop_2839_, v_b_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5___boxed(lean_object* v_00_u03b1_2842_, lean_object* v_snd_2843_, lean_object* v_as_2844_, lean_object* v_i_2845_, lean_object* v_stop_2846_, lean_object* v_b_2847_){
_start:
{
size_t v_i_boxed_2848_; size_t v_stop_boxed_2849_; lean_object* v_res_2850_; 
v_i_boxed_2848_ = lean_unbox_usize(v_i_2845_);
lean_dec(v_i_2845_);
v_stop_boxed_2849_ = lean_unbox_usize(v_stop_2846_);
lean_dec(v_stop_2846_);
v_res_2850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__3_spec__5(v_00_u03b1_2842_, v_snd_2843_, v_as_2844_, v_i_boxed_2848_, v_stop_boxed_2849_, v_b_2847_);
lean_dec_ref(v_as_2844_);
lean_dec(v_snd_2843_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object* v_env_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v___x_2854_; lean_object* v_nextMacroScope_2855_; lean_object* v_ngen_2856_; lean_object* v_auxDeclNGen_2857_; lean_object* v_traceState_2858_; lean_object* v_messages_2859_; lean_object* v_infoState_2860_; lean_object* v_snapshotTasks_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2872_; 
v___x_2854_ = lean_st_ref_take(v___y_2852_);
v_nextMacroScope_2855_ = lean_ctor_get(v___x_2854_, 1);
v_ngen_2856_ = lean_ctor_get(v___x_2854_, 2);
v_auxDeclNGen_2857_ = lean_ctor_get(v___x_2854_, 3);
v_traceState_2858_ = lean_ctor_get(v___x_2854_, 4);
v_messages_2859_ = lean_ctor_get(v___x_2854_, 6);
v_infoState_2860_ = lean_ctor_get(v___x_2854_, 7);
v_snapshotTasks_2861_ = lean_ctor_get(v___x_2854_, 8);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2872_ == 0)
{
lean_object* v_unused_2873_; lean_object* v_unused_2874_; 
v_unused_2873_ = lean_ctor_get(v___x_2854_, 5);
lean_dec(v_unused_2873_);
v_unused_2874_ = lean_ctor_get(v___x_2854_, 0);
lean_dec(v_unused_2874_);
v___x_2863_ = v___x_2854_;
v_isShared_2864_ = v_isSharedCheck_2872_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_snapshotTasks_2861_);
lean_inc(v_infoState_2860_);
lean_inc(v_messages_2859_);
lean_inc(v_traceState_2858_);
lean_inc(v_auxDeclNGen_2857_);
lean_inc(v_ngen_2856_);
lean_inc(v_nextMacroScope_2855_);
lean_dec(v___x_2854_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2872_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2868_; 
v___x_2865_ = lean_box(0);
v___x_2866_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 5, v___x_2866_);
lean_ctor_set(v___x_2863_, 0, v_env_2851_);
v___x_2868_ = v___x_2863_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_env_2851_);
lean_ctor_set(v_reuseFailAlloc_2871_, 1, v_nextMacroScope_2855_);
lean_ctor_set(v_reuseFailAlloc_2871_, 2, v_ngen_2856_);
lean_ctor_set(v_reuseFailAlloc_2871_, 3, v_auxDeclNGen_2857_);
lean_ctor_set(v_reuseFailAlloc_2871_, 4, v_traceState_2858_);
lean_ctor_set(v_reuseFailAlloc_2871_, 5, v___x_2866_);
lean_ctor_set(v_reuseFailAlloc_2871_, 6, v_messages_2859_);
lean_ctor_set(v_reuseFailAlloc_2871_, 7, v_infoState_2860_);
lean_ctor_set(v_reuseFailAlloc_2871_, 8, v_snapshotTasks_2861_);
v___x_2868_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_st_ref_put(v___y_2852_, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2865_);
return v___x_2870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object* v_env_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2875_, v___y_2876_);
lean_dec(v___y_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object* v_env_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
lean_object* v___x_2883_; 
v___x_2883_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2879_, v___y_2881_);
return v___x_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object* v_env_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(v_env_2884_, v___y_2885_, v___y_2886_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object* v_getParam_2889_, lean_object* v_ext_2890_, lean_object* v_afterSet_2891_, lean_object* v_toAttributeImplCore_2892_, lean_object* v_decl_2893_, lean_object* v_stx_2894_, uint8_t v_kind_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; uint8_t v___y_2904_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2909_; uint8_t v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = 0;
v___x_2954_ = l_Lean_instBEqAttributeKind_beq(v_kind_2895_, v___x_2953_);
if (v___x_2954_ == 0)
{
lean_object* v_name_2955_; lean_object* v___x_2956_; 
lean_dec(v_stx_2894_);
lean_dec(v_decl_2893_);
lean_dec_ref(v_afterSet_2891_);
lean_dec_ref(v_ext_2890_);
lean_dec_ref(v_getParam_2889_);
v_name_2955_ = lean_ctor_get(v_toAttributeImplCore_2892_, 1);
lean_inc(v_name_2955_);
lean_dec_ref(v_toAttributeImplCore_2892_);
v___x_2956_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_name_2955_, v_kind_2895_, v___y_2896_, v___y_2897_);
return v___x_2956_;
}
else
{
goto v___jp_2947_;
}
v___jp_2899_:
{
if (v___y_2904_ == 0)
{
lean_object* v___x_2905_; 
lean_dec_ref(v___y_2901_);
v___x_2905_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v___y_2900_, v___y_2902_);
return v___x_2905_;
}
else
{
lean_dec_ref(v___y_2900_);
return v___y_2901_;
}
}
v___jp_2906_:
{
lean_object* v___x_2910_; 
lean_inc(v___y_2909_);
lean_inc_ref(v___y_2908_);
lean_inc(v_decl_2893_);
v___x_2910_ = lean_apply_5(v_getParam_2889_, v_decl_2893_, v_stx_2894_, v___y_2908_, v___y_2909_, lean_box(0));
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_a_2911_; lean_object* v___x_2912_; lean_object* v_toEnvExtension_2913_; lean_object* v_env_2914_; lean_object* v_nextMacroScope_2915_; lean_object* v_ngen_2916_; lean_object* v_auxDeclNGen_2917_; lean_object* v_traceState_2918_; lean_object* v_messages_2919_; lean_object* v_infoState_2920_; lean_object* v_snapshotTasks_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2937_; 
v_a_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2910_, 1);
v___x_2912_ = lean_st_ref_take(v___y_2909_);
v_toEnvExtension_2913_ = lean_ctor_get(v_ext_2890_, 0);
v_env_2914_ = lean_ctor_get(v___x_2912_, 0);
v_nextMacroScope_2915_ = lean_ctor_get(v___x_2912_, 1);
v_ngen_2916_ = lean_ctor_get(v___x_2912_, 2);
v_auxDeclNGen_2917_ = lean_ctor_get(v___x_2912_, 3);
v_traceState_2918_ = lean_ctor_get(v___x_2912_, 4);
v_messages_2919_ = lean_ctor_get(v___x_2912_, 6);
v_infoState_2920_ = lean_ctor_get(v___x_2912_, 7);
v_snapshotTasks_2921_ = lean_ctor_get(v___x_2912_, 8);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; 
v_unused_2938_ = lean_ctor_get(v___x_2912_, 5);
lean_dec(v_unused_2938_);
v___x_2923_ = v___x_2912_;
v_isShared_2924_ = v_isSharedCheck_2937_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_snapshotTasks_2921_);
lean_inc(v_infoState_2920_);
lean_inc(v_messages_2919_);
lean_inc(v_traceState_2918_);
lean_inc(v_auxDeclNGen_2917_);
lean_inc(v_ngen_2916_);
lean_inc(v_nextMacroScope_2915_);
lean_inc(v_env_2914_);
lean_dec(v___x_2912_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2937_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v_asyncMode_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v_asyncMode_2925_ = lean_ctor_get(v_toEnvExtension_2913_, 2);
lean_inc(v_asyncMode_2925_);
lean_inc(v_a_2911_);
lean_inc_n(v_decl_2893_, 2);
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v_decl_2893_);
lean_ctor_set(v___x_2926_, 1, v_a_2911_);
v___x_2927_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2890_, v_env_2914_, v___x_2926_, v_asyncMode_2925_, v_decl_2893_);
lean_dec(v_asyncMode_2925_);
v___x_2928_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 5, v___x_2928_);
lean_ctor_set(v___x_2923_, 0, v___x_2927_);
v___x_2930_ = v___x_2923_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v_nextMacroScope_2915_);
lean_ctor_set(v_reuseFailAlloc_2936_, 2, v_ngen_2916_);
lean_ctor_set(v_reuseFailAlloc_2936_, 3, v_auxDeclNGen_2917_);
lean_ctor_set(v_reuseFailAlloc_2936_, 4, v_traceState_2918_);
lean_ctor_set(v_reuseFailAlloc_2936_, 5, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_2936_, 6, v_messages_2919_);
lean_ctor_set(v_reuseFailAlloc_2936_, 7, v_infoState_2920_);
lean_ctor_set(v_reuseFailAlloc_2936_, 8, v_snapshotTasks_2921_);
v___x_2930_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_st_ref_put(v___y_2909_, v___x_2930_);
lean_inc(v___y_2909_);
lean_inc_ref(v___y_2908_);
v___x_2932_ = lean_apply_5(v_afterSet_2891_, v_decl_2893_, v_a_2911_, v___y_2908_, v___y_2909_, lean_box(0));
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_dec_ref(v___y_2907_);
return v___x_2932_;
}
else
{
lean_object* v_a_2933_; uint8_t v___x_2934_; 
v_a_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2933_);
v___x_2934_ = l_Lean_Exception_isInterrupt(v_a_2933_);
if (v___x_2934_ == 0)
{
uint8_t v___x_2935_; 
v___x_2935_ = l_Lean_Exception_isRuntime(v_a_2933_);
v___y_2900_ = v___y_2907_;
v___y_2901_ = v___x_2932_;
v___y_2902_ = v___y_2909_;
v___y_2903_ = v___y_2908_;
v___y_2904_ = v___x_2935_;
goto v___jp_2899_;
}
else
{
lean_dec(v_a_2933_);
v___y_2900_ = v___y_2907_;
v___y_2901_ = v___x_2932_;
v___y_2902_ = v___y_2909_;
v___y_2903_ = v___y_2908_;
v___y_2904_ = v___x_2934_;
goto v___jp_2899_;
}
}
}
}
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec_ref(v___y_2907_);
lean_dec(v_decl_2893_);
lean_dec_ref(v_afterSet_2891_);
lean_dec_ref(v_ext_2890_);
v_a_2939_ = lean_ctor_get(v___x_2910_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2910_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2910_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2910_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
v___jp_2947_:
{
lean_object* v___x_2948_; lean_object* v_env_2949_; lean_object* v___x_2950_; 
v___x_2948_ = lean_st_ref_get(v___y_2897_);
v_env_2949_ = lean_ctor_get(v___x_2948_, 0);
lean_inc_ref(v_env_2949_);
lean_dec(v___x_2948_);
v___x_2950_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2949_, v_decl_2893_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_dec_ref(v_toAttributeImplCore_2892_);
v___y_2907_ = v_env_2949_;
v___y_2908_ = v___y_2896_;
v___y_2909_ = v___y_2897_;
goto v___jp_2906_;
}
else
{
lean_object* v_name_2951_; lean_object* v___x_2952_; 
lean_dec_ref_known(v___x_2950_, 1);
lean_dec_ref(v_env_2949_);
lean_dec(v_stx_2894_);
lean_dec_ref(v_afterSet_2891_);
lean_dec_ref(v_ext_2890_);
lean_dec_ref(v_getParam_2889_);
v_name_2951_ = lean_ctor_get(v_toAttributeImplCore_2892_, 1);
lean_inc(v_name_2951_);
lean_dec_ref(v_toAttributeImplCore_2892_);
v___x_2952_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_2951_, v_decl_2893_, v___y_2896_, v___y_2897_);
return v___x_2952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed(lean_object* v_getParam_2957_, lean_object* v_ext_2958_, lean_object* v_afterSet_2959_, lean_object* v_toAttributeImplCore_2960_, lean_object* v_decl_2961_, lean_object* v_stx_2962_, lean_object* v_kind_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
uint8_t v_kind_boxed_2967_; lean_object* v_res_2968_; 
v_kind_boxed_2967_ = lean_unbox(v_kind_2963_);
v_res_2968_ = l_Lean_registerParametricAttributeForExt___redArg___lam__0(v_getParam_2957_, v_ext_2958_, v_afterSet_2959_, v_toAttributeImplCore_2960_, v_decl_2961_, v_stx_2962_, v_kind_boxed_2967_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object* v_toAttributeImplCore_2969_, lean_object* v_decl_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_name_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_name_2974_ = lean_ctor_get(v_toAttributeImplCore_2969_, 1);
lean_inc(v_name_2974_);
lean_dec_ref(v_toAttributeImplCore_2969_);
v___x_2975_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_2976_ = l_Lean_MessageData_ofName(v_name_2974_);
v___x_2977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_2979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2977_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
v___x_2980_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_2979_, v___y_2971_, v___y_2972_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object* v_toAttributeImplCore_2981_, lean_object* v_decl_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Lean_registerParametricAttributeForExt___redArg___lam__1(v_toAttributeImplCore_2981_, v_decl_2982_, v___y_2983_, v___y_2984_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v_decl_2982_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object* v_impl_2987_, lean_object* v_ext_2988_){
_start:
{
lean_object* v_toAttributeImplCore_2990_; lean_object* v_getParam_2991_; lean_object* v_afterSet_2992_; uint8_t v_preserveOrder_2993_; lean_object* v___f_2994_; lean_object* v___f_2995_; lean_object* v_attrImpl_2996_; lean_object* v___x_2997_; 
v_toAttributeImplCore_2990_ = lean_ctor_get(v_impl_2987_, 0);
lean_inc_ref_n(v_toAttributeImplCore_2990_, 3);
v_getParam_2991_ = lean_ctor_get(v_impl_2987_, 1);
lean_inc_ref(v_getParam_2991_);
v_afterSet_2992_ = lean_ctor_get(v_impl_2987_, 2);
lean_inc_ref(v_afterSet_2992_);
v_preserveOrder_2993_ = lean_ctor_get_uint8(v_impl_2987_, sizeof(void*)*4);
lean_dec_ref(v_impl_2987_);
lean_inc_ref(v_ext_2988_);
v___f_2994_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2994_, 0, v_getParam_2991_);
lean_closure_set(v___f_2994_, 1, v_ext_2988_);
lean_closure_set(v___f_2994_, 2, v_afterSet_2992_);
lean_closure_set(v___f_2994_, 3, v_toAttributeImplCore_2990_);
v___f_2995_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_2995_, 0, v_toAttributeImplCore_2990_);
v_attrImpl_2996_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_attrImpl_2996_, 0, v_toAttributeImplCore_2990_);
lean_ctor_set(v_attrImpl_2996_, 1, v___f_2994_);
lean_ctor_set(v_attrImpl_2996_, 2, v___f_2995_);
lean_inc_ref(v_attrImpl_2996_);
v___x_2997_ = l_Lean_registerBuiltinAttribute(v_attrImpl_2996_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3005_; 
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3005_ == 0)
{
lean_object* v_unused_3006_; 
v_unused_3006_ = lean_ctor_get(v___x_2997_, 0);
lean_dec(v_unused_3006_);
v___x_2999_ = v___x_2997_;
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
else
{
lean_dec(v___x_2997_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; lean_object* v___x_3003_; 
v___x_3001_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3001_, 0, v_attrImpl_2996_);
lean_ctor_set(v___x_3001_, 1, v_ext_2988_);
lean_ctor_set_uint8(v___x_3001_, sizeof(void*)*2, v_preserveOrder_2993_);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___x_3001_);
v___x_3003_ = v___x_2999_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_3001_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref_known(v_attrImpl_2996_, 3);
lean_dec_ref(v_ext_2988_);
v_a_3007_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2997_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_2997_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object* v_impl_3015_, lean_object* v_ext_3016_, lean_object* v_a_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_3015_, v_ext_3016_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object* v_00_u03b1_3019_, lean_object* v_impl_3020_, lean_object* v_ext_3021_){
_start:
{
lean_object* v___x_3023_; 
v___x_3023_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_3020_, v_ext_3021_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object* v_00_u03b1_3024_, lean_object* v_impl_3025_, lean_object* v_ext_3026_, lean_object* v_a_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Lean_registerParametricAttributeForExt(v_00_u03b1_3024_, v_impl_3025_, v_ext_3026_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object* v_impl_3029_){
_start:
{
lean_object* v_toAttributeImplCore_3031_; uint8_t v_preserveOrder_3032_; lean_object* v_filterExport_3033_; lean_object* v_ref_3034_; lean_object* v___x_3035_; 
v_toAttributeImplCore_3031_ = lean_ctor_get(v_impl_3029_, 0);
v_preserveOrder_3032_ = lean_ctor_get_uint8(v_impl_3029_, sizeof(void*)*4);
v_filterExport_3033_ = lean_ctor_get(v_impl_3029_, 3);
v_ref_3034_ = lean_ctor_get(v_toAttributeImplCore_3031_, 0);
lean_inc_ref(v_filterExport_3033_);
lean_inc(v_ref_3034_);
v___x_3035_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_3034_, v_preserveOrder_3032_, v_filterExport_3033_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v_a_3036_; lean_object* v___x_3037_; 
v_a_3036_ = lean_ctor_get(v___x_3035_, 0);
lean_inc(v_a_3036_);
lean_dec_ref_known(v___x_3035_, 1);
v___x_3037_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_3029_, v_a_3036_);
return v___x_3037_;
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v_impl_3029_);
v_a_3038_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3035_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3035_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object* v_impl_3046_, lean_object* v_a_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Lean_registerParametricAttribute___redArg(v_impl_3046_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object* v_00_u03b1_3049_, lean_object* v_impl_3050_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Lean_registerParametricAttribute___redArg(v_impl_3050_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object* v_00_u03b1_3053_, lean_object* v_impl_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lean_registerParametricAttribute(v_00_u03b1_3053_, v_impl_3054_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(lean_object* v_decl_3057_, lean_object* v___x_3058_, lean_object* v___x_3059_, lean_object* v_a_3060_, lean_object* v_x_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_fst_3063_; uint8_t v___x_3064_; 
v_fst_3063_ = lean_ctor_get(v_a_3060_, 0);
v___x_3064_ = lean_name_eq(v_fst_3063_, v_decl_3057_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; 
lean_dec_ref(v_a_3060_);
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3058_);
return v___x_3065_;
}
else
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
lean_dec_ref(v___x_3058_);
v___x_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3066_, 0, v_a_3060_);
v___x_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
v___x_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3067_);
lean_ctor_set(v___x_3068_, 1, v___x_3059_);
v___x_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
return v___x_3069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed(lean_object* v_decl_3070_, lean_object* v___x_3071_, lean_object* v___x_3072_, lean_object* v_a_3073_, lean_object* v_x_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(v_decl_3070_, v___x_3071_, v___x_3072_, v_a_3073_, v_x_3074_, v___y_3075_);
lean_dec_ref(v___y_3075_);
lean_dec(v_decl_3070_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object* v_inst_3104_, lean_object* v_ext_3105_, uint8_t v_preserveOrder_3106_, lean_object* v_env_3107_, lean_object* v_decl_3108_){
_start:
{
lean_object* v___y_3110_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3122_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3107_, v_decl_3108_);
if (lean_obj_tag(v___x_3122_) == 0)
{
lean_object* v_toEnvExtension_3123_; lean_object* v_asyncMode_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v_snd_3127_; lean_object* v___x_3128_; 
lean_dec(v_inst_3104_);
v_toEnvExtension_3123_ = lean_ctor_get(v_ext_3105_, 0);
v_asyncMode_3124_ = lean_ctor_get(v_toEnvExtension_3123_, 2);
v___x_3125_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_3126_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3121_, v_ext_3105_, v_env_3107_, v_asyncMode_3124_, v___x_3125_);
v_snd_3127_ = lean_ctor_get(v___x_3126_, 1);
lean_inc(v_snd_3127_);
lean_dec(v___x_3126_);
v___x_3128_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3127_, v_decl_3108_);
lean_dec(v_decl_3108_);
lean_dec(v_snd_3127_);
return v___x_3128_;
}
else
{
if (v_preserveOrder_3106_ == 0)
{
lean_object* v_val_3129_; uint8_t v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v_val_3129_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_val_3129_);
lean_dec_ref_known(v___x_3122_, 1);
v___x_3130_ = 0;
v___x_3131_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3121_, v_ext_3105_, v_env_3107_, v_val_3129_, v___x_3130_);
lean_dec(v_val_3129_);
lean_dec_ref(v_env_3107_);
v___x_3132_ = lean_unsigned_to_nat(0u);
v___x_3133_ = lean_array_get_size(v___x_3131_);
v___x_3134_ = lean_nat_dec_lt(v___x_3132_, v___x_3133_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; 
lean_dec_ref(v___x_3131_);
lean_dec(v_decl_3108_);
lean_dec(v_inst_3104_);
v___x_3135_ = lean_box(0);
return v___x_3135_;
}
else
{
lean_object* v___x_3136_; lean_object* v___x_3137_; uint8_t v___x_3138_; 
v___x_3136_ = lean_unsigned_to_nat(1u);
v___x_3137_ = lean_nat_sub(v___x_3133_, v___x_3136_);
v___x_3138_ = lean_nat_dec_le(v___x_3132_, v___x_3137_);
if (v___x_3138_ == 0)
{
lean_object* v___x_3139_; 
lean_dec(v___x_3137_);
lean_dec_ref(v___x_3131_);
lean_dec(v_decl_3108_);
lean_dec(v_inst_3104_);
v___x_3139_ = lean_box(0);
return v___x_3139_;
}
else
{
lean_object* v___f_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___f_3140_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
v___x_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_decl_3108_);
lean_ctor_set(v___x_3141_, 1, v_inst_3104_);
v___x_3142_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3143_ = l_Array_binSearchAux___redArg(v___f_3140_, v___x_3142_, v___x_3131_, v___x_3141_, v___x_3132_, v___x_3137_);
lean_dec_ref(v___x_3131_);
v___y_3110_ = v___x_3143_;
goto v___jp_3109_;
}
}
}
else
{
lean_object* v_val_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___f_3151_; size_t v_sz_3152_; size_t v___x_3153_; lean_object* v___x_3154_; lean_object* v_fst_3155_; 
lean_dec(v_inst_3104_);
v_val_3144_ = lean_ctor_get(v___x_3122_, 0);
lean_inc(v_val_3144_);
lean_dec_ref_known(v___x_3122_, 1);
v___x_3145_ = 0;
v___x_3146_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3121_, v_ext_3105_, v_env_3107_, v_val_3144_, v___x_3145_);
lean_dec(v_val_3144_);
lean_dec_ref(v_env_3107_);
v___x_3147_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12));
v___x_3148_ = lean_box(0);
v___x_3149_ = lean_box(0);
v___x_3150_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13));
v___f_3151_ = lean_alloc_closure((void*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_3151_, 0, v_decl_3108_);
lean_closure_set(v___f_3151_, 1, v___x_3150_);
lean_closure_set(v___f_3151_, 2, v___x_3149_);
v_sz_3152_ = lean_array_size(v___x_3146_);
v___x_3153_ = ((size_t)0ULL);
v___x_3154_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3147_, v___x_3146_, v___f_3151_, v_sz_3152_, v___x_3153_, v___x_3150_);
v_fst_3155_ = lean_ctor_get(v___x_3154_, 0);
lean_inc(v_fst_3155_);
lean_dec(v___x_3154_);
if (lean_obj_tag(v_fst_3155_) == 0)
{
return v___x_3148_;
}
else
{
lean_object* v_val_3156_; 
v_val_3156_ = lean_ctor_get(v_fst_3155_, 0);
lean_inc(v_val_3156_);
lean_dec_ref_known(v_fst_3155_, 1);
v___y_3110_ = v_val_3156_;
goto v___jp_3109_;
}
}
}
v___jp_3109_:
{
if (lean_obj_tag(v___y_3110_) == 0)
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_box(0);
return v___x_3111_;
}
else
{
lean_object* v_val_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3120_; 
v_val_3112_ = lean_ctor_get(v___y_3110_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___y_3110_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3114_ = v___y_3110_;
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_val_3112_);
lean_dec(v___y_3110_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v_snd_3116_; lean_object* v___x_3118_; 
v_snd_3116_ = lean_ctor_get(v_val_3112_, 1);
lean_inc(v_snd_3116_);
lean_dec(v_val_3112_);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v_snd_3116_);
v___x_3118_ = v___x_3114_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_snd_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object* v_inst_3157_, lean_object* v_ext_3158_, lean_object* v_preserveOrder_3159_, lean_object* v_env_3160_, lean_object* v_decl_3161_){
_start:
{
uint8_t v_preserveOrder_boxed_3162_; lean_object* v_res_3163_; 
v_preserveOrder_boxed_3162_ = lean_unbox(v_preserveOrder_3159_);
v_res_3163_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3157_, v_ext_3158_, v_preserveOrder_boxed_3162_, v_env_3160_, v_decl_3161_);
lean_dec_ref(v_ext_3158_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object* v_00_u03b1_3164_, lean_object* v_inst_3165_, lean_object* v_ext_3166_, uint8_t v_preserveOrder_3167_, lean_object* v_env_3168_, lean_object* v_decl_3169_){
_start:
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3165_, v_ext_3166_, v_preserveOrder_3167_, v_env_3168_, v_decl_3169_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object* v_00_u03b1_3171_, lean_object* v_inst_3172_, lean_object* v_ext_3173_, lean_object* v_preserveOrder_3174_, lean_object* v_env_3175_, lean_object* v_decl_3176_){
_start:
{
uint8_t v_preserveOrder_boxed_3177_; lean_object* v_res_3178_; 
v_preserveOrder_boxed_3177_ = lean_unbox(v_preserveOrder_3174_);
v_res_3178_ = l_Lean_ParametricAttribute_getParamFromExt_x3f(v_00_u03b1_3171_, v_inst_3172_, v_ext_3173_, v_preserveOrder_boxed_3177_, v_env_3175_, v_decl_3176_);
lean_dec_ref(v_ext_3173_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object* v_inst_3179_, lean_object* v_attr_3180_, lean_object* v_env_3181_, lean_object* v_decl_3182_){
_start:
{
lean_object* v_ext_3183_; uint8_t v_preserveOrder_3184_; lean_object* v___x_3185_; 
v_ext_3183_ = lean_ctor_get(v_attr_3180_, 1);
v_preserveOrder_3184_ = lean_ctor_get_uint8(v_attr_3180_, sizeof(void*)*2);
v___x_3185_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3179_, v_ext_3183_, v_preserveOrder_3184_, v_env_3181_, v_decl_3182_);
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object* v_inst_3186_, lean_object* v_attr_3187_, lean_object* v_env_3188_, lean_object* v_decl_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3186_, v_attr_3187_, v_env_3188_, v_decl_3189_);
lean_dec_ref(v_attr_3187_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object* v_00_u03b1_3191_, lean_object* v_inst_3192_, lean_object* v_attr_3193_, lean_object* v_env_3194_, lean_object* v_decl_3195_){
_start:
{
lean_object* v___x_3196_; 
v___x_3196_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3192_, v_attr_3193_, v_env_3194_, v_decl_3195_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object* v_00_u03b1_3197_, lean_object* v_inst_3198_, lean_object* v_attr_3199_, lean_object* v_env_3200_, lean_object* v_decl_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_ParametricAttribute_getParam_x3f(v_00_u03b1_3197_, v_inst_3198_, v_attr_3199_, v_env_3200_, v_decl_3201_);
lean_dec_ref(v_attr_3199_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object* v_ext_3207_, lean_object* v_attr_3208_, lean_object* v_env_3209_, lean_object* v_decl_3210_, lean_object* v_param_3211_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3209_, v_decl_3210_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v_toEnvExtension_3213_; lean_object* v_asyncMode_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v_snd_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3248_; 
v_toEnvExtension_3213_ = lean_ctor_get(v_ext_3207_, 0);
v_asyncMode_3214_ = lean_ctor_get(v_toEnvExtension_3213_, 2);
lean_inc(v_asyncMode_3214_);
v___x_3215_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3216_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
lean_inc_ref(v_env_3209_);
v___x_3217_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3215_, v_ext_3207_, v_env_3209_, v_asyncMode_3214_, v___x_3216_);
v_snd_3218_ = lean_ctor_get(v___x_3217_, 1);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3248_ == 0)
{
lean_object* v_unused_3249_; 
v_unused_3249_ = lean_ctor_get(v___x_3217_, 0);
lean_dec(v_unused_3249_);
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3248_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_snd_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3248_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; 
v___x_3222_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3218_, v_decl_3210_);
lean_dec(v_snd_3218_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v___x_3224_; 
lean_dec_ref(v_attr_3208_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 1, v_param_3211_);
lean_ctor_set(v___x_3220_, 0, v_decl_3210_);
v___x_3224_ = v___x_3220_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_decl_3210_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v_param_3211_);
v___x_3224_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_3207_, v_env_3209_, v___x_3224_, v_asyncMode_3214_, v___x_3216_);
lean_dec(v_asyncMode_3214_);
v___x_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
return v___x_3226_;
}
}
else
{
lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3246_; 
lean_del_object(v___x_3220_);
lean_dec(v_asyncMode_3214_);
lean_dec(v_param_3211_);
lean_dec_ref(v_env_3209_);
lean_dec_ref(v_ext_3207_);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3246_ == 0)
{
lean_object* v_unused_3247_; 
v_unused_3247_ = lean_ctor_get(v___x_3222_, 0);
lean_dec(v_unused_3247_);
v___x_3229_ = v___x_3222_;
v_isShared_3230_ = v_isSharedCheck_3246_;
goto v_resetjp_3228_;
}
else
{
lean_dec(v___x_3222_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3246_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v_toAttributeImplCore_3231_; lean_object* v_name_3232_; uint8_t v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3244_; 
v_toAttributeImplCore_3231_ = lean_ctor_get(v_attr_3208_, 0);
lean_inc_ref(v_toAttributeImplCore_3231_);
lean_dec_ref(v_attr_3208_);
v_name_3232_ = lean_ctor_get(v_toAttributeImplCore_3231_, 1);
lean_inc(v_name_3232_);
lean_dec_ref(v_toAttributeImplCore_3231_);
v___x_3233_ = 1;
v___x_3234_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3235_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3232_, v___x_3233_);
v___x_3236_ = lean_string_append(v___x_3234_, v___x_3235_);
lean_dec_ref(v___x_3235_);
v___x_3237_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3238_ = lean_string_append(v___x_3236_, v___x_3237_);
v___x_3239_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3210_, v___x_3233_);
v___x_3240_ = lean_string_append(v___x_3238_, v___x_3239_);
lean_dec_ref(v___x_3239_);
v___x_3241_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2));
v___x_3242_ = lean_string_append(v___x_3240_, v___x_3241_);
if (v_isShared_3230_ == 0)
{
lean_ctor_set_tag(v___x_3229_, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3242_);
v___x_3244_ = v___x_3229_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
}
else
{
lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v_param_3211_);
lean_dec_ref(v_env_3209_);
lean_dec_ref(v_ext_3207_);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3268_ == 0)
{
lean_object* v_unused_3269_; 
v_unused_3269_ = lean_ctor_get(v___x_3212_, 0);
lean_dec(v_unused_3269_);
v___x_3251_ = v___x_3212_;
v_isShared_3252_ = v_isSharedCheck_3268_;
goto v_resetjp_3250_;
}
else
{
lean_dec(v___x_3212_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3268_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v_toAttributeImplCore_3253_; lean_object* v_name_3254_; uint8_t v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v_toAttributeImplCore_3253_ = lean_ctor_get(v_attr_3208_, 0);
lean_inc_ref(v_toAttributeImplCore_3253_);
lean_dec_ref(v_attr_3208_);
v_name_3254_ = lean_ctor_get(v_toAttributeImplCore_3253_, 1);
lean_inc(v_name_3254_);
lean_dec_ref(v_toAttributeImplCore_3253_);
v___x_3255_ = 1;
v___x_3256_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3257_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3254_, v___x_3255_);
v___x_3258_ = lean_string_append(v___x_3256_, v___x_3257_);
lean_dec_ref(v___x_3257_);
v___x_3259_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3260_ = lean_string_append(v___x_3258_, v___x_3259_);
v___x_3261_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3210_, v___x_3255_);
v___x_3262_ = lean_string_append(v___x_3260_, v___x_3261_);
lean_dec_ref(v___x_3261_);
v___x_3263_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3));
v___x_3264_ = lean_string_append(v___x_3262_, v___x_3263_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set_tag(v___x_3251_, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3264_);
v___x_3266_ = v___x_3251_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object* v_00_u03b1_3270_, lean_object* v_ext_3271_, lean_object* v_attr_3272_, lean_object* v_env_3273_, lean_object* v_decl_3274_, lean_object* v_param_3275_){
_start:
{
lean_object* v___x_3276_; 
v___x_3276_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3271_, v_attr_3272_, v_env_3273_, v_decl_3274_, v_param_3275_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object* v_attr_3277_, lean_object* v_env_3278_, lean_object* v_decl_3279_, lean_object* v_param_3280_){
_start:
{
lean_object* v_attr_3281_; lean_object* v_ext_3282_; lean_object* v___x_3283_; 
v_attr_3281_ = lean_ctor_get(v_attr_3277_, 0);
lean_inc_ref(v_attr_3281_);
v_ext_3282_ = lean_ctor_get(v_attr_3277_, 1);
lean_inc_ref(v_ext_3282_);
lean_dec_ref(v_attr_3277_);
v___x_3283_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3282_, v_attr_3281_, v_env_3278_, v_decl_3279_, v_param_3280_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object* v_00_u03b1_3284_, lean_object* v_attr_3285_, lean_object* v_env_3286_, lean_object* v_decl_3287_, lean_object* v_param_3288_){
_start:
{
lean_object* v___x_3289_; 
v___x_3289_ = l_Lean_ParametricAttribute_setParam___redArg(v_attr_3285_, v_env_3286_, v_decl_3287_, v_param_3288_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object* v_x_3290_, lean_object* v___y_3291_){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object* v_x_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(v_x_3295_, v___y_3296_);
lean_dec_ref(v___y_3296_);
lean_dec_ref(v_x_3295_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object* v_s_3299_, lean_object* v_x_3300_){
_start:
{
lean_inc(v_s_3299_);
return v_s_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object* v_s_3301_, lean_object* v_x_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(v_s_3301_, v_x_3302_);
lean_dec_ref(v_x_3302_);
lean_dec(v_s_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object* v_x_3304_, lean_object* v_x_3305_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object* v_x_3307_, lean_object* v_x_3308_){
_start:
{
lean_object* v_res_3309_; 
v_res_3309_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(v_x_3307_, v_x_3308_);
lean_dec(v_x_3308_);
lean_dec_ref(v_x_3307_);
return v_res_3309_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3(void){
_start:
{
lean_object* v___f_3313_; lean_object* v___f_3314_; lean_object* v___f_3315_; lean_object* v___f_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___f_3313_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_3314_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2));
v___f_3315_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1));
v___f_3316_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0));
v___x_3317_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_3318_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_3319_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
lean_ctor_set(v___x_3319_, 1, v___x_3317_);
lean_ctor_set(v___x_3319_, 2, v___f_3316_);
lean_ctor_set(v___x_3319_, 3, v___f_3315_);
lean_ctor_set(v___x_3319_, 4, v___f_3314_);
lean_ctor_set(v___x_3319_, 5, v___f_3313_);
return v___x_3319_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3320_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3);
v___x_3321_ = lean_box(0);
v___x_3322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3322_, 0, v___x_3321_);
lean_ctor_set(v___x_3322_, 1, v___x_3320_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg(){
_start:
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4);
return v___x_3324_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object* v___dummy_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v_res_3326_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___closed__0(void){
_start:
{
lean_object* v___x_3327_; 
v___x_3327_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object* v_00_u03b1_3328_){
_start:
{
lean_object* v___x_3329_; 
v___x_3329_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg(){
_start:
{
lean_object* v___x_3331_; 
v___x_3331_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object* v___dummy_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_instInhabitedEnumAttributes___redArg();
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object* v_a_3334_){
_start:
{
lean_object* v___x_3335_; 
v___x_3335_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3335_;
}
}
static lean_object* _init_l_Lean_registerEnumAttributes___auto__1(void){
_start:
{
lean_object* v___x_3336_; 
v___x_3336_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object* v_x_3337_){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object* v_x_3339_){
_start:
{
lean_object* v_res_3340_; 
v_res_3340_ = l_Lean_registerEnumAttributes___redArg___lam__0(v_x_3339_);
lean_dec(v_x_3339_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object* v_newState_3341_, lean_object* v_x_3342_, lean_object* v_x_3343_){
_start:
{
if (lean_obj_tag(v_x_3343_) == 0)
{
return v_x_3342_;
}
else
{
lean_object* v_head_3344_; lean_object* v_tail_3345_; lean_object* v___x_3346_; 
v_head_3344_ = lean_ctor_get(v_x_3343_, 0);
lean_inc(v_head_3344_);
v_tail_3345_ = lean_ctor_get(v_x_3343_, 1);
lean_inc(v_tail_3345_);
lean_dec_ref_known(v_x_3343_, 2);
v___x_3346_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_3341_, v_head_3344_);
if (lean_obj_tag(v___x_3346_) == 1)
{
lean_object* v_val_3347_; lean_object* v___x_3348_; 
v_val_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_val_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v___x_3348_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_3344_, v_val_3347_, v_x_3342_);
v_x_3342_ = v___x_3348_;
v_x_3343_ = v_tail_3345_;
goto _start;
}
else
{
lean_dec(v___x_3346_);
lean_dec(v_head_3344_);
v_x_3343_ = v_tail_3345_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object* v_newState_3351_, lean_object* v_x_3352_, lean_object* v_x_3353_){
_start:
{
lean_object* v_res_3354_; 
v_res_3354_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3351_, v_x_3352_, v_x_3353_);
lean_dec(v_newState_3351_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object* v_x_3355_, lean_object* v_newState_3356_, lean_object* v_consts_3357_, lean_object* v_st_3358_){
_start:
{
lean_object* v___x_3359_; 
v___x_3359_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3356_, v_st_3358_, v_consts_3357_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object* v_x_3360_, lean_object* v_newState_3361_, lean_object* v_consts_3362_, lean_object* v_st_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_Lean_registerEnumAttributes___redArg___lam__1(v_x_3360_, v_newState_3361_, v_consts_3362_, v_st_3363_);
lean_dec(v_newState_3361_);
lean_dec(v_x_3360_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object* v_s_3374_){
_start:
{
lean_object* v___x_3375_; lean_object* v___y_3377_; 
v___x_3375_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___lam__2___closed__3));
if (lean_obj_tag(v_s_3374_) == 0)
{
lean_object* v_size_3381_; 
v_size_3381_ = lean_ctor_get(v_s_3374_, 0);
lean_inc(v_size_3381_);
lean_dec_ref_known(v_s_3374_, 5);
v___y_3377_ = v_size_3381_;
goto v___jp_3376_;
}
else
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_unsigned_to_nat(0u);
v___y_3377_ = v___x_3382_;
goto v___jp_3376_;
}
v___jp_3376_:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3378_ = l_Nat_reprFast(v___y_3377_);
v___x_3379_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
v___x_3380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3375_);
lean_ctor_set(v___x_3380_, 1, v___x_3379_);
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object* v_env_3383_, lean_object* v_as_3384_, size_t v_i_3385_, size_t v_stop_3386_, lean_object* v_b_3387_){
_start:
{
lean_object* v___y_3389_; uint8_t v___x_3393_; 
v___x_3393_ = lean_usize_dec_eq(v_i_3385_, v_stop_3386_);
if (v___x_3393_ == 0)
{
lean_object* v___x_3394_; lean_object* v_fst_3395_; uint8_t v___x_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v___x_3394_ = lean_array_uget_borrowed(v_as_3384_, v_i_3385_);
v_fst_3395_ = lean_ctor_get(v___x_3394_, 0);
v___x_3396_ = 1;
lean_inc_ref(v_env_3383_);
v___x_3397_ = l_Lean_Environment_setExporting(v_env_3383_, v___x_3396_);
lean_inc(v_fst_3395_);
v___x_3398_ = l_Lean_Environment_contains(v___x_3397_, v_fst_3395_, v___x_3393_);
if (v___x_3398_ == 0)
{
v___y_3389_ = v_b_3387_;
goto v___jp_3388_;
}
else
{
lean_object* v___x_3399_; 
lean_inc(v___x_3394_);
v___x_3399_ = lean_array_push(v_b_3387_, v___x_3394_);
v___y_3389_ = v___x_3399_;
goto v___jp_3388_;
}
}
else
{
lean_dec_ref(v_env_3383_);
return v_b_3387_;
}
v___jp_3388_:
{
size_t v___x_3390_; size_t v___x_3391_; 
v___x_3390_ = ((size_t)1ULL);
v___x_3391_ = lean_usize_add(v_i_3385_, v___x_3390_);
v_i_3385_ = v___x_3391_;
v_b_3387_ = v___y_3389_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object* v_env_3400_, lean_object* v_as_3401_, lean_object* v_i_3402_, lean_object* v_stop_3403_, lean_object* v_b_3404_){
_start:
{
size_t v_i_boxed_3405_; size_t v_stop_boxed_3406_; lean_object* v_res_3407_; 
v_i_boxed_3405_ = lean_unbox_usize(v_i_3402_);
lean_dec(v_i_3402_);
v_stop_boxed_3406_ = lean_unbox_usize(v_stop_3403_);
lean_dec(v_stop_3403_);
v_res_3407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3400_, v_as_3401_, v_i_boxed_3405_, v_stop_boxed_3406_, v_b_3404_);
lean_dec_ref(v_as_3401_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object* v_env_3408_, lean_object* v_m_3409_){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___y_3413_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___y_3430_; lean_object* v___y_3431_; uint8_t v___x_3433_; 
v___x_3410_ = lean_unsigned_to_nat(0u);
v___x_3411_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_3427_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v___x_3411_, v_m_3409_);
v___x_3428_ = lean_array_get_size(v___x_3427_);
v___x_3433_ = lean_nat_dec_eq(v___x_3428_, v___x_3410_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___y_3437_; uint8_t v___x_3439_; 
v___x_3434_ = lean_unsigned_to_nat(1u);
v___x_3435_ = lean_nat_sub(v___x_3428_, v___x_3434_);
v___x_3439_ = lean_nat_dec_le(v___x_3410_, v___x_3435_);
if (v___x_3439_ == 0)
{
lean_inc(v___x_3435_);
v___y_3437_ = v___x_3435_;
goto v___jp_3436_;
}
else
{
v___y_3437_ = v___x_3410_;
goto v___jp_3436_;
}
v___jp_3436_:
{
uint8_t v___x_3438_; 
v___x_3438_ = lean_nat_dec_le(v___y_3437_, v___x_3435_);
if (v___x_3438_ == 0)
{
lean_dec(v___x_3435_);
lean_inc(v___y_3437_);
v___y_3430_ = v___y_3437_;
v___y_3431_ = v___y_3437_;
goto v___jp_3429_;
}
else
{
v___y_3430_ = v___y_3437_;
v___y_3431_ = v___x_3435_;
goto v___jp_3429_;
}
}
}
else
{
v___y_3413_ = v___x_3427_;
goto v___jp_3412_;
}
v___jp_3412_:
{
lean_object* v___x_3414_; uint8_t v___x_3415_; 
v___x_3414_ = lean_array_get_size(v___y_3413_);
v___x_3415_ = lean_nat_dec_lt(v___x_3410_, v___x_3414_);
if (v___x_3415_ == 0)
{
lean_object* v___x_3416_; 
lean_dec_ref(v_env_3408_);
v___x_3416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3411_);
lean_ctor_set(v___x_3416_, 1, v___x_3411_);
lean_ctor_set(v___x_3416_, 2, v___y_3413_);
return v___x_3416_;
}
else
{
uint8_t v___x_3417_; 
v___x_3417_ = lean_nat_dec_le(v___x_3414_, v___x_3414_);
if (v___x_3417_ == 0)
{
if (v___x_3415_ == 0)
{
lean_object* v___x_3418_; 
lean_dec_ref(v_env_3408_);
v___x_3418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3411_);
lean_ctor_set(v___x_3418_, 1, v___x_3411_);
lean_ctor_set(v___x_3418_, 2, v___y_3413_);
return v___x_3418_;
}
else
{
size_t v___x_3419_; size_t v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3419_ = ((size_t)0ULL);
v___x_3420_ = lean_usize_of_nat(v___x_3414_);
v___x_3421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3408_, v___y_3413_, v___x_3419_, v___x_3420_, v___x_3411_);
lean_inc_ref(v___x_3421_);
v___x_3422_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
lean_ctor_set(v___x_3422_, 2, v___y_3413_);
return v___x_3422_;
}
}
else
{
size_t v___x_3423_; size_t v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3423_ = ((size_t)0ULL);
v___x_3424_ = lean_usize_of_nat(v___x_3414_);
v___x_3425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3408_, v___y_3413_, v___x_3423_, v___x_3424_, v___x_3411_);
lean_inc_ref(v___x_3425_);
v___x_3426_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3425_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
lean_ctor_set(v___x_3426_, 2, v___y_3413_);
return v___x_3426_;
}
}
}
v___jp_3429_:
{
lean_object* v___x_3432_; 
v___x_3432_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v___x_3428_, v___x_3427_, v___y_3430_, v___y_3431_);
lean_dec(v___y_3431_);
v___y_3413_ = v___x_3432_;
goto v___jp_3412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3___boxed(lean_object* v_env_3440_, lean_object* v_m_3441_){
_start:
{
lean_object* v_res_3442_; 
v_res_3442_ = l_Lean_registerEnumAttributes___redArg___lam__3(v_env_3440_, v_m_3441_);
lean_dec(v_m_3441_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object* v_s_3443_, lean_object* v_p_3444_){
_start:
{
lean_object* v_fst_3445_; lean_object* v_snd_3446_; lean_object* v___x_3447_; 
v_fst_3445_ = lean_ctor_get(v_p_3444_, 0);
lean_inc(v_fst_3445_);
v_snd_3446_ = lean_ctor_get(v_p_3444_, 1);
lean_inc(v_snd_3446_);
lean_dec_ref(v_p_3444_);
v___x_3447_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3445_, v_snd_3446_, v_s_3443_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object* v___x_3448_, lean_object* v_x_3449_, lean_object* v_x_3450_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3448_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object* v___x_3453_, lean_object* v_x_3454_, lean_object* v_x_3455_, lean_object* v___y_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lean_registerEnumAttributes___redArg___lam__6(v___x_3453_, v_x_3454_, v_x_3455_);
lean_dec_ref(v_x_3455_);
lean_dec_ref(v_x_3454_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object* v_as_3458_){
_start:
{
if (lean_obj_tag(v_as_3458_) == 0)
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = lean_box(0);
v___x_3461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3460_);
return v___x_3461_;
}
else
{
lean_object* v_head_3462_; lean_object* v_tail_3463_; lean_object* v___x_3464_; 
v_head_3462_ = lean_ctor_get(v_as_3458_, 0);
lean_inc(v_head_3462_);
v_tail_3463_ = lean_ctor_get(v_as_3458_, 1);
lean_inc(v_tail_3463_);
lean_dec_ref_known(v_as_3458_, 2);
v___x_3464_ = l_Lean_registerBuiltinAttribute(v_head_3462_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_dec_ref_known(v___x_3464_, 1);
v_as_3458_ = v_tail_3463_;
goto _start;
}
else
{
lean_dec(v_tail_3463_);
return v___x_3464_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object* v_as_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v_as_3466_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object* v_validate_3469_, lean_object* v_snd_3470_, lean_object* v_a_3471_, lean_object* v_fst_3472_, lean_object* v_decl_3473_, lean_object* v_stx_3474_, uint8_t v_kind_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___x_3520_; 
v___x_3520_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_3474_, v___y_3476_, v___y_3477_);
if (lean_obj_tag(v___x_3520_) == 0)
{
uint8_t v___x_3521_; uint8_t v___x_3522_; 
lean_dec_ref_known(v___x_3520_, 1);
v___x_3521_ = 0;
v___x_3522_ = l_Lean_instBEqAttributeKind_beq(v_kind_3475_, v___x_3521_);
if (v___x_3522_ == 0)
{
lean_object* v___x_3523_; 
lean_dec(v_decl_3473_);
lean_dec_ref(v_a_3471_);
lean_dec(v_snd_3470_);
lean_dec_ref(v_validate_3469_);
v___x_3523_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__6___redArg(v_fst_3472_, v_kind_3475_, v___y_3476_, v___y_3477_);
return v___x_3523_;
}
else
{
goto v___jp_3515_;
}
}
else
{
lean_dec(v_decl_3473_);
lean_dec(v_fst_3472_);
lean_dec_ref(v_a_3471_);
lean_dec(v_snd_3470_);
lean_dec_ref(v_validate_3469_);
return v___x_3520_;
}
v___jp_3479_:
{
lean_object* v___x_3482_; 
lean_inc(v___y_3481_);
lean_inc_ref(v___y_3480_);
lean_inc(v_snd_3470_);
lean_inc(v_decl_3473_);
v___x_3482_ = lean_apply_5(v_validate_3469_, v_decl_3473_, v_snd_3470_, v___y_3480_, v___y_3481_, lean_box(0));
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3513_; 
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v___x_3482_, 0);
lean_dec(v_unused_3514_);
v___x_3484_ = v___x_3482_;
v_isShared_3485_ = v_isSharedCheck_3513_;
goto v_resetjp_3483_;
}
else
{
lean_dec(v___x_3482_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3513_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3486_; lean_object* v_toEnvExtension_3487_; lean_object* v_env_3488_; lean_object* v_nextMacroScope_3489_; lean_object* v_ngen_3490_; lean_object* v_auxDeclNGen_3491_; lean_object* v_traceState_3492_; lean_object* v_messages_3493_; lean_object* v_infoState_3494_; lean_object* v_snapshotTasks_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3511_; 
v___x_3486_ = lean_st_ref_take(v___y_3481_);
v_toEnvExtension_3487_ = lean_ctor_get(v_a_3471_, 0);
v_env_3488_ = lean_ctor_get(v___x_3486_, 0);
v_nextMacroScope_3489_ = lean_ctor_get(v___x_3486_, 1);
v_ngen_3490_ = lean_ctor_get(v___x_3486_, 2);
v_auxDeclNGen_3491_ = lean_ctor_get(v___x_3486_, 3);
v_traceState_3492_ = lean_ctor_get(v___x_3486_, 4);
v_messages_3493_ = lean_ctor_get(v___x_3486_, 6);
v_infoState_3494_ = lean_ctor_get(v___x_3486_, 7);
v_snapshotTasks_3495_ = lean_ctor_get(v___x_3486_, 8);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3511_ == 0)
{
lean_object* v_unused_3512_; 
v_unused_3512_ = lean_ctor_get(v___x_3486_, 5);
lean_dec(v_unused_3512_);
v___x_3497_ = v___x_3486_;
v_isShared_3498_ = v_isSharedCheck_3511_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_snapshotTasks_3495_);
lean_inc(v_infoState_3494_);
lean_inc(v_messages_3493_);
lean_inc(v_traceState_3492_);
lean_inc(v_auxDeclNGen_3491_);
lean_inc(v_ngen_3490_);
lean_inc(v_nextMacroScope_3489_);
lean_inc(v_env_3488_);
lean_dec(v___x_3486_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3511_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v_asyncMode_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3505_; 
v_asyncMode_3499_ = lean_ctor_get(v_toEnvExtension_3487_, 2);
lean_inc(v_asyncMode_3499_);
v___x_3500_ = lean_box(0);
lean_inc(v_decl_3473_);
v___x_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3501_, 0, v_decl_3473_);
lean_ctor_set(v___x_3501_, 1, v_snd_3470_);
v___x_3502_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_3471_, v_env_3488_, v___x_3501_, v_asyncMode_3499_, v_decl_3473_);
lean_dec(v_asyncMode_3499_);
v___x_3503_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 5, v___x_3503_);
lean_ctor_set(v___x_3497_, 0, v___x_3502_);
v___x_3505_ = v___x_3497_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3502_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_nextMacroScope_3489_);
lean_ctor_set(v_reuseFailAlloc_3510_, 2, v_ngen_3490_);
lean_ctor_set(v_reuseFailAlloc_3510_, 3, v_auxDeclNGen_3491_);
lean_ctor_set(v_reuseFailAlloc_3510_, 4, v_traceState_3492_);
lean_ctor_set(v_reuseFailAlloc_3510_, 5, v___x_3503_);
lean_ctor_set(v_reuseFailAlloc_3510_, 6, v_messages_3493_);
lean_ctor_set(v_reuseFailAlloc_3510_, 7, v_infoState_3494_);
lean_ctor_set(v_reuseFailAlloc_3510_, 8, v_snapshotTasks_3495_);
v___x_3505_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3506_ = lean_st_ref_put(v___y_3481_, v___x_3505_);
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 0, v___x_3500_);
v___x_3508_ = v___x_3484_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3500_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
}
else
{
lean_dec(v_decl_3473_);
lean_dec_ref(v_a_3471_);
lean_dec(v_snd_3470_);
return v___x_3482_;
}
}
v___jp_3515_:
{
lean_object* v___x_3516_; lean_object* v_env_3517_; lean_object* v___x_3518_; 
v___x_3516_ = lean_st_ref_get(v___y_3477_);
v_env_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc_ref(v_env_3517_);
lean_dec(v___x_3516_);
v___x_3518_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3517_, v_decl_3473_);
lean_dec_ref(v_env_3517_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_dec(v_fst_3472_);
v___y_3480_ = v___y_3476_;
v___y_3481_ = v___y_3477_;
goto v___jp_3479_;
}
else
{
lean_object* v___x_3519_; 
lean_dec_ref_known(v___x_3518_, 1);
lean_dec_ref(v_a_3471_);
lean_dec(v_snd_3470_);
lean_dec_ref(v_validate_3469_);
v___x_3519_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__5___redArg(v_fst_3472_, v_decl_3473_, v___y_3476_, v___y_3477_);
return v___x_3519_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed(lean_object* v_validate_3524_, lean_object* v_snd_3525_, lean_object* v_a_3526_, lean_object* v_fst_3527_, lean_object* v_decl_3528_, lean_object* v_stx_3529_, lean_object* v_kind_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
uint8_t v_kind_boxed_3534_; lean_object* v_res_3535_; 
v_kind_boxed_3534_ = lean_unbox(v_kind_3530_);
v_res_3535_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(v_validate_3524_, v_snd_3525_, v_a_3526_, v_fst_3527_, v_decl_3528_, v_stx_3529_, v_kind_boxed_3534_, v___y_3531_, v___y_3532_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object* v_fst_3536_, lean_object* v_decl_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3541_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_3542_ = l_Lean_MessageData_ofName(v_fst_3536_);
v___x_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3541_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_3545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3543_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_3545_, v___y_3538_, v___y_3539_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object* v_fst_3547_, lean_object* v_decl_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(v_fst_3547_, v_decl_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v_decl_3548_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object* v_validate_3553_, lean_object* v_a_3554_, lean_object* v_ref_3555_, uint8_t v_applicationTime_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
if (lean_obj_tag(v_a_3557_) == 0)
{
lean_object* v___x_3559_; 
lean_dec(v_ref_3555_);
lean_dec_ref(v_a_3554_);
lean_dec_ref(v_validate_3553_);
v___x_3559_ = l_List_reverse___redArg(v_a_3558_);
return v___x_3559_;
}
else
{
lean_object* v_head_3560_; lean_object* v_snd_3561_; lean_object* v_tail_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3577_; 
v_head_3560_ = lean_ctor_get(v_a_3557_, 0);
lean_inc(v_head_3560_);
v_snd_3561_ = lean_ctor_get(v_head_3560_, 1);
lean_inc(v_snd_3561_);
v_tail_3562_ = lean_ctor_get(v_a_3557_, 1);
v_isSharedCheck_3577_ = !lean_is_exclusive(v_a_3557_);
if (v_isSharedCheck_3577_ == 0)
{
lean_object* v_unused_3578_; 
v_unused_3578_ = lean_ctor_get(v_a_3557_, 0);
lean_dec(v_unused_3578_);
v___x_3564_ = v_a_3557_;
v_isShared_3565_ = v_isSharedCheck_3577_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_tail_3562_);
lean_dec(v_a_3557_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3577_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v_fst_3566_; lean_object* v_fst_3567_; lean_object* v_snd_3568_; lean_object* v___f_3569_; lean_object* v___f_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3574_; 
v_fst_3566_ = lean_ctor_get(v_head_3560_, 0);
lean_inc_n(v_fst_3566_, 3);
lean_dec(v_head_3560_);
v_fst_3567_ = lean_ctor_get(v_snd_3561_, 0);
lean_inc(v_fst_3567_);
v_snd_3568_ = lean_ctor_get(v_snd_3561_, 1);
lean_inc(v_snd_3568_);
lean_dec(v_snd_3561_);
v___f_3569_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3569_, 0, v_fst_3566_);
lean_inc_ref(v_a_3554_);
lean_inc_ref(v_validate_3553_);
v___f_3570_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3570_, 0, v_validate_3553_);
lean_closure_set(v___f_3570_, 1, v_snd_3568_);
lean_closure_set(v___f_3570_, 2, v_a_3554_);
lean_closure_set(v___f_3570_, 3, v_fst_3566_);
lean_inc(v_ref_3555_);
v___x_3571_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3571_, 0, v_ref_3555_);
lean_ctor_set(v___x_3571_, 1, v_fst_3566_);
lean_ctor_set(v___x_3571_, 2, v_fst_3567_);
lean_ctor_set_uint8(v___x_3571_, sizeof(void*)*3, v_applicationTime_3556_);
v___x_3572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
lean_ctor_set(v___x_3572_, 1, v___f_3570_);
lean_ctor_set(v___x_3572_, 2, v___f_3569_);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v_a_3558_);
lean_ctor_set(v___x_3564_, 0, v___x_3572_);
v___x_3574_ = v___x_3564_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3572_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v_a_3558_);
v___x_3574_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
v_a_3557_ = v_tail_3562_;
v_a_3558_ = v___x_3574_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object* v_validate_3579_, lean_object* v_a_3580_, lean_object* v_ref_3581_, lean_object* v_applicationTime_3582_, lean_object* v_a_3583_, lean_object* v_a_3584_){
_start:
{
uint8_t v_applicationTime_boxed_3585_; lean_object* v_res_3586_; 
v_applicationTime_boxed_3585_ = lean_unbox(v_applicationTime_3582_);
v_res_3586_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3579_, v_a_3580_, v_ref_3581_, v_applicationTime_boxed_3585_, v_a_3583_, v_a_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object* v_attrDescrs_3600_, lean_object* v_validate_3601_, uint8_t v_applicationTime_3602_, lean_object* v_ref_3603_){
_start:
{
lean_object* v___f_3605_; lean_object* v___f_3606_; lean_object* v___f_3607_; lean_object* v___f_3608_; lean_object* v___f_3609_; lean_object* v___f_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___f_3605_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__0));
v___f_3606_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__2));
v___f_3607_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__3));
v___f_3608_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__4));
v___f_3609_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__5));
v___f_3610_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__6));
v___x_3611_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__7));
v___x_3612_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__8));
lean_inc(v_ref_3603_);
v___x_3613_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3613_, 0, v_ref_3603_);
lean_ctor_set(v___x_3613_, 1, v___f_3609_);
lean_ctor_set(v___x_3613_, 2, v___f_3610_);
lean_ctor_set(v___x_3613_, 3, v___f_3608_);
lean_ctor_set(v___x_3613_, 4, v___f_3607_);
lean_ctor_set(v___x_3613_, 5, v___f_3606_);
lean_ctor_set(v___x_3613_, 6, v___x_3611_);
lean_ctor_set(v___x_3613_, 7, v___x_3612_);
v___x_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___f_3605_);
v___x_3615_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc_n(v_a_3616_, 2);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3617_ = lean_box(0);
v___x_3618_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3601_, v_a_3616_, v_ref_3603_, v_applicationTime_3602_, v_attrDescrs_3600_, v___x_3617_);
lean_inc(v___x_3618_);
v___x_3619_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v___x_3618_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3627_; 
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3627_ == 0)
{
lean_object* v_unused_3628_; 
v_unused_3628_ = lean_ctor_get(v___x_3619_, 0);
lean_dec(v_unused_3628_);
v___x_3621_ = v___x_3619_;
v_isShared_3622_ = v_isSharedCheck_3627_;
goto v_resetjp_3620_;
}
else
{
lean_dec(v___x_3619_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3627_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3623_; lean_object* v___x_3625_; 
v___x_3623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3618_);
lean_ctor_set(v___x_3623_, 1, v_a_3616_);
if (v_isShared_3622_ == 0)
{
lean_ctor_set(v___x_3621_, 0, v___x_3623_);
v___x_3625_ = v___x_3621_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3623_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
lean_dec(v___x_3618_);
lean_dec(v_a_3616_);
v_a_3629_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3619_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3619_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
lean_dec(v_ref_3603_);
lean_dec_ref(v_validate_3601_);
lean_dec(v_attrDescrs_3600_);
v_a_3637_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3615_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3615_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object* v_attrDescrs_3645_, lean_object* v_validate_3646_, lean_object* v_applicationTime_3647_, lean_object* v_ref_3648_, lean_object* v_a_3649_){
_start:
{
uint8_t v_applicationTime_boxed_3650_; lean_object* v_res_3651_; 
v_applicationTime_boxed_3650_ = lean_unbox(v_applicationTime_3647_);
v_res_3651_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3645_, v_validate_3646_, v_applicationTime_boxed_3650_, v_ref_3648_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object* v_00_u03b1_3652_, lean_object* v_attrDescrs_3653_, lean_object* v_validate_3654_, uint8_t v_applicationTime_3655_, lean_object* v_ref_3656_){
_start:
{
lean_object* v___x_3658_; 
v___x_3658_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3653_, v_validate_3654_, v_applicationTime_3655_, v_ref_3656_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object* v_00_u03b1_3659_, lean_object* v_attrDescrs_3660_, lean_object* v_validate_3661_, lean_object* v_applicationTime_3662_, lean_object* v_ref_3663_, lean_object* v_a_3664_){
_start:
{
uint8_t v_applicationTime_boxed_3665_; lean_object* v_res_3666_; 
v_applicationTime_boxed_3665_ = lean_unbox(v_applicationTime_3662_);
v_res_3666_ = l_Lean_registerEnumAttributes(v_00_u03b1_3659_, v_attrDescrs_3660_, v_validate_3661_, v_applicationTime_boxed_3665_, v_ref_3663_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object* v_00_u03b1_3667_, lean_object* v_env_3668_, lean_object* v_as_3669_, size_t v_i_3670_, size_t v_stop_3671_, lean_object* v_b_3672_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3668_, v_as_3669_, v_i_3670_, v_stop_3671_, v_b_3672_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object* v_00_u03b1_3674_, lean_object* v_env_3675_, lean_object* v_as_3676_, lean_object* v_i_3677_, lean_object* v_stop_3678_, lean_object* v_b_3679_){
_start:
{
size_t v_i_boxed_3680_; size_t v_stop_boxed_3681_; lean_object* v_res_3682_; 
v_i_boxed_3680_ = lean_unbox_usize(v_i_3677_);
lean_dec(v_i_3677_);
v_stop_boxed_3681_ = lean_unbox_usize(v_stop_3678_);
lean_dec(v_stop_3678_);
v_res_3682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(v_00_u03b1_3674_, v_env_3675_, v_as_3676_, v_i_boxed_3680_, v_stop_boxed_3681_, v_b_3679_);
lean_dec_ref(v_as_3676_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object* v_00_u03b1_3683_, lean_object* v_newState_3684_, lean_object* v_x_3685_, lean_object* v_x_3686_){
_start:
{
lean_object* v___x_3687_; 
v___x_3687_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3684_, v_x_3685_, v_x_3686_);
return v___x_3687_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object* v_00_u03b1_3688_, lean_object* v_newState_3689_, lean_object* v_x_3690_, lean_object* v_x_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(v_00_u03b1_3688_, v_newState_3689_, v_x_3690_, v_x_3691_);
lean_dec(v_newState_3689_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object* v_00_u03b1_3693_, lean_object* v_validate_3694_, lean_object* v_a_3695_, lean_object* v_ref_3696_, uint8_t v_applicationTime_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_){
_start:
{
lean_object* v___x_3700_; 
v___x_3700_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3694_, v_a_3695_, v_ref_3696_, v_applicationTime_3697_, v_a_3698_, v_a_3699_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object* v_00_u03b1_3701_, lean_object* v_validate_3702_, lean_object* v_a_3703_, lean_object* v_ref_3704_, lean_object* v_applicationTime_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_){
_start:
{
uint8_t v_applicationTime_boxed_3708_; lean_object* v_res_3709_; 
v_applicationTime_boxed_3708_ = lean_unbox(v_applicationTime_3705_);
v_res_3709_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(v_00_u03b1_3701_, v_validate_3702_, v_a_3703_, v_ref_3704_, v_applicationTime_boxed_3708_, v_a_3706_, v_a_3707_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object* v_inst_3710_, lean_object* v_attr_3711_, lean_object* v_env_3712_, lean_object* v_decl_3713_){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = lean_box(1);
v___x_3715_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3712_, v_decl_3713_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_ext_3716_; lean_object* v_toEnvExtension_3717_; lean_object* v_asyncMode_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
lean_dec(v_inst_3710_);
v_ext_3716_ = lean_ctor_get(v_attr_3711_, 1);
lean_inc_ref(v_ext_3716_);
lean_dec_ref(v_attr_3711_);
v_toEnvExtension_3717_ = lean_ctor_get(v_ext_3716_, 0);
v_asyncMode_3718_ = lean_ctor_get(v_toEnvExtension_3717_, 2);
lean_inc(v_asyncMode_3718_);
lean_inc(v_decl_3713_);
v___x_3719_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3714_, v_ext_3716_, v_env_3712_, v_asyncMode_3718_, v_decl_3713_);
lean_dec(v_asyncMode_3718_);
lean_dec_ref(v_ext_3716_);
v___x_3720_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3719_, v_decl_3713_);
lean_dec(v_decl_3713_);
lean_dec(v___x_3719_);
return v___x_3720_;
}
else
{
lean_object* v_val_3721_; lean_object* v_ext_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3752_; 
v_val_3721_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_val_3721_);
lean_dec_ref_known(v___x_3715_, 1);
v_ext_3722_ = lean_ctor_get(v_attr_3711_, 1);
v_isSharedCheck_3752_ = !lean_is_exclusive(v_attr_3711_);
if (v_isSharedCheck_3752_ == 0)
{
lean_object* v_unused_3753_; 
v_unused_3753_ = lean_ctor_get(v_attr_3711_, 0);
lean_dec(v_unused_3753_);
v___x_3724_ = v_attr_3711_;
v_isShared_3725_ = v_isSharedCheck_3752_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_ext_3722_);
lean_dec(v_attr_3711_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3752_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
uint8_t v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v___x_3726_ = 0;
v___x_3727_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3714_, v_ext_3722_, v_env_3712_, v_val_3721_, v___x_3726_);
lean_dec(v_val_3721_);
lean_dec_ref(v_env_3712_);
lean_dec_ref(v_ext_3722_);
v___x_3728_ = lean_unsigned_to_nat(0u);
v___x_3729_ = lean_array_get_size(v___x_3727_);
v___x_3730_ = lean_nat_dec_lt(v___x_3728_, v___x_3729_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; 
lean_dec_ref(v___x_3727_);
lean_del_object(v___x_3724_);
lean_dec(v_decl_3713_);
lean_dec(v_inst_3710_);
v___x_3731_ = lean_box(0);
return v___x_3731_;
}
else
{
lean_object* v___x_3732_; lean_object* v___x_3733_; uint8_t v___x_3734_; 
v___x_3732_ = lean_unsigned_to_nat(1u);
v___x_3733_ = lean_nat_sub(v___x_3729_, v___x_3732_);
v___x_3734_ = lean_nat_dec_le(v___x_3728_, v___x_3733_);
if (v___x_3734_ == 0)
{
lean_object* v___x_3735_; 
lean_dec(v___x_3733_);
lean_dec_ref(v___x_3727_);
lean_del_object(v___x_3724_);
lean_dec(v_decl_3713_);
lean_dec(v_inst_3710_);
v___x_3735_ = lean_box(0);
return v___x_3735_;
}
else
{
lean_object* v___f_3736_; lean_object* v___x_3738_; 
v___f_3736_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 1, v_inst_3710_);
lean_ctor_set(v___x_3724_, 0, v_decl_3713_);
v___x_3738_ = v___x_3724_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_decl_3713_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v_inst_3710_);
v___x_3738_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3739_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3740_ = l_Array_binSearchAux___redArg(v___f_3736_, v___x_3739_, v___x_3727_, v___x_3738_, v___x_3728_, v___x_3733_);
lean_dec_ref(v___x_3727_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v___x_3741_; 
v___x_3741_ = lean_box(0);
return v___x_3741_;
}
else
{
lean_object* v_val_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3750_; 
v_val_3742_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3744_ = v___x_3740_;
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_val_3742_);
lean_dec(v___x_3740_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v_snd_3746_; lean_object* v___x_3748_; 
v_snd_3746_ = lean_ctor_get(v_val_3742_, 1);
lean_inc(v_snd_3746_);
lean_dec(v_val_3742_);
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 0, v_snd_3746_);
v___x_3748_ = v___x_3744_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_snd_3746_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
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
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object* v_00_u03b1_3754_, lean_object* v_inst_3755_, lean_object* v_attr_3756_, lean_object* v_env_3757_, lean_object* v_decl_3758_){
_start:
{
lean_object* v___x_3759_; 
v___x_3759_ = l_Lean_EnumAttributes_getValue___redArg(v_inst_3755_, v_attr_3756_, v_env_3757_, v_decl_3758_);
return v___x_3759_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object* v_attrs_3768_, lean_object* v_env_3769_, lean_object* v_decl_3770_, lean_object* v_val_3771_){
_start:
{
lean_object* v_ext_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3835_; 
v_ext_3772_ = lean_ctor_get(v_attrs_3768_, 1);
v_isSharedCheck_3835_ = !lean_is_exclusive(v_attrs_3768_);
if (v_isSharedCheck_3835_ == 0)
{
lean_object* v_unused_3836_; 
v_unused_3836_ = lean_ctor_get(v_attrs_3768_, 0);
lean_dec(v_unused_3836_);
v___x_3774_ = v_attrs_3768_;
v_isShared_3775_ = v_isSharedCheck_3835_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_ext_3772_);
lean_dec(v_attrs_3768_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3835_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v_toEnvExtension_3776_; lean_object* v_name_3777_; lean_object* v___x_3778_; uint8_t v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v_pfx_3787_; lean_object* v___x_3788_; 
v_toEnvExtension_3776_ = lean_ctor_get(v_ext_3772_, 0);
v_name_3777_ = lean_ctor_get(v_ext_3772_, 1);
v___x_3778_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__0));
v___x_3779_ = 1;
lean_inc(v_name_3777_);
v___x_3780_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3777_, v___x_3779_);
v___x_3781_ = lean_string_append(v___x_3778_, v___x_3780_);
lean_dec_ref(v___x_3780_);
v___x_3782_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__1));
v___x_3783_ = lean_string_append(v___x_3781_, v___x_3782_);
lean_inc(v_decl_3770_);
v___x_3784_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3770_, v___x_3779_);
v___x_3785_ = lean_string_append(v___x_3783_, v___x_3784_);
lean_dec_ref(v___x_3784_);
v___x_3786_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v_pfx_3787_ = lean_string_append(v___x_3785_, v___x_3786_);
v___x_3788_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3769_, v_decl_3770_);
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_asyncMode_3789_; uint8_t v___x_3790_; 
v_asyncMode_3789_ = lean_ctor_get(v_toEnvExtension_3776_, 2);
lean_inc(v_asyncMode_3789_);
lean_inc(v_decl_3770_);
lean_inc_ref(v_env_3769_);
v___x_3790_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_3769_, v_decl_3770_, v_asyncMode_3789_);
if (v___x_3790_ == 0)
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___y_3794_; lean_object* v___x_3798_; 
lean_dec(v_asyncMode_3789_);
lean_del_object(v___x_3774_);
lean_dec_ref(v_ext_3772_);
lean_dec(v_val_3771_);
lean_dec(v_decl_3770_);
v___x_3791_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__2));
v___x_3792_ = lean_string_append(v_pfx_3787_, v___x_3791_);
v___x_3798_ = l_Lean_Environment_asyncPrefix_x3f(v_env_3769_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v___x_3799_; 
v___x_3799_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__3));
v___y_3794_ = v___x_3799_;
goto v___jp_3793_;
}
else
{
lean_object* v_val_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v_val_3800_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_val_3800_);
lean_dec_ref_known(v___x_3798_, 1);
v___x_3801_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__4));
v___x_3802_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3800_, v___x_3779_);
v___x_3803_ = l_addParenHeuristic(v___x_3802_);
v___x_3804_ = lean_string_append(v___x_3801_, v___x_3803_);
lean_dec_ref(v___x_3803_);
v___x_3805_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__5));
v___x_3806_ = lean_string_append(v___x_3804_, v___x_3805_);
v___y_3794_ = v___x_3806_;
goto v___jp_3793_;
}
v___jp_3793_:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3795_ = lean_string_append(v___x_3792_, v___y_3794_);
lean_dec_ref(v___y_3794_);
v___x_3796_ = lean_string_append(v___x_3795_, v___x_3786_);
v___x_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
return v___x_3797_;
}
}
else
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3807_ = lean_box(1);
lean_inc(v_decl_3770_);
lean_inc_ref(v_env_3769_);
v___x_3808_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3807_, v_ext_3772_, v_env_3769_, v_asyncMode_3789_, v_decl_3770_);
v___x_3809_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3808_, v_decl_3770_);
lean_dec(v___x_3808_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v___x_3811_; 
lean_dec_ref(v_pfx_3787_);
lean_inc(v_decl_3770_);
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 1, v_val_3771_);
lean_ctor_set(v___x_3774_, 0, v_decl_3770_);
v___x_3811_ = v___x_3774_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_decl_3770_);
lean_ctor_set(v_reuseFailAlloc_3814_, 1, v_val_3771_);
v___x_3811_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3812_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_3772_, v_env_3769_, v___x_3811_, v_asyncMode_3789_, v_decl_3770_);
lean_dec(v_asyncMode_3789_);
v___x_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
return v___x_3813_;
}
}
else
{
lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3823_; 
lean_dec(v_asyncMode_3789_);
lean_del_object(v___x_3774_);
lean_dec_ref(v_ext_3772_);
lean_dec(v_val_3771_);
lean_dec(v_decl_3770_);
lean_dec_ref(v_env_3769_);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_3823_ == 0)
{
lean_object* v_unused_3824_; 
v_unused_3824_ = lean_ctor_get(v___x_3809_, 0);
lean_dec(v_unused_3824_);
v___x_3816_ = v___x_3809_;
v_isShared_3817_ = v_isSharedCheck_3823_;
goto v_resetjp_3815_;
}
else
{
lean_dec(v___x_3809_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3823_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3818_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__6));
v___x_3819_ = lean_string_append(v_pfx_3787_, v___x_3818_);
if (v_isShared_3817_ == 0)
{
lean_ctor_set_tag(v___x_3816_, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3819_);
v___x_3821_ = v___x_3816_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3819_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
else
{
lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3833_; 
lean_del_object(v___x_3774_);
lean_dec_ref(v_ext_3772_);
lean_dec(v_val_3771_);
lean_dec(v_decl_3770_);
lean_dec_ref(v_env_3769_);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3788_);
if (v_isSharedCheck_3833_ == 0)
{
lean_object* v_unused_3834_; 
v_unused_3834_ = lean_ctor_get(v___x_3788_, 0);
lean_dec(v_unused_3834_);
v___x_3826_ = v___x_3788_;
v_isShared_3827_ = v_isSharedCheck_3833_;
goto v_resetjp_3825_;
}
else
{
lean_dec(v___x_3788_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3833_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3831_; 
v___x_3828_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__7));
v___x_3829_ = lean_string_append(v_pfx_3787_, v___x_3828_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set_tag(v___x_3826_, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3829_);
v___x_3831_ = v___x_3826_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v___x_3829_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object* v_00_u03b1_3837_, lean_object* v_attrs_3838_, lean_object* v_env_3839_, lean_object* v_decl_3840_, lean_object* v_val_3841_){
_start:
{
lean_object* v___x_3842_; 
v___x_3842_ = l_Lean_EnumAttributes_setValue___redArg(v_attrs_3838_, v_env_3839_, v_decl_3840_, v_val_3841_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3844_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3845_ = lean_st_mk_ref(v___x_3844_);
v___x_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object* v_a_3847_){
_start:
{
lean_object* v_res_3848_; 
v_res_3848_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object* v_builderId_3851_, lean_object* v_builder_3852_){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; 
v___x_3854_ = l_Lean_attributeImplBuilderTableRef;
v___x_3855_ = lean_st_ref_get(v___x_3854_);
v___x_3856_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_3855_, v_builderId_3851_);
lean_dec(v___x_3855_);
if (v___x_3856_ == 0)
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
v___x_3857_ = lean_st_ref_take(v___x_3854_);
v___x_3858_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_3857_, v_builderId_3851_, v_builder_3852_);
v___x_3859_ = lean_st_ref_put(v___x_3854_, v___x_3858_);
v___x_3860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
return v___x_3860_;
}
else
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; 
lean_dec_ref(v_builder_3852_);
v___x_3861_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__0));
v___x_3862_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3851_, v___x_3856_);
v___x_3863_ = lean_string_append(v___x_3861_, v___x_3862_);
lean_dec_ref(v___x_3862_);
v___x_3864_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__1));
v___x_3865_ = lean_string_append(v___x_3863_, v___x_3864_);
v___x_3866_ = lean_mk_io_user_error(v___x_3865_);
v___x_3867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
return v___x_3867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object* v_builderId_3868_, lean_object* v_builder_3869_, lean_object* v_a_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_registerAttributeImplBuilder(v_builderId_3868_, v_builder_3869_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object* v_e_3872_){
_start:
{
if (lean_obj_tag(v_e_3872_) == 0)
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3882_; 
v_a_3874_ = lean_ctor_get(v_e_3872_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v_e_3872_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3876_ = v_e_3872_;
v_isShared_3877_ = v_isSharedCheck_3882_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v_e_3872_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3882_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3878_; lean_object* v___x_3880_; 
v___x_3878_ = lean_mk_io_user_error(v_a_3874_);
if (v_isShared_3877_ == 0)
{
lean_ctor_set_tag(v___x_3876_, 1);
lean_ctor_set(v___x_3876_, 0, v___x_3878_);
v___x_3880_ = v___x_3876_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v___x_3878_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
v_a_3883_ = lean_ctor_get(v_e_3872_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_e_3872_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v_e_3872_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v_e_3872_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
lean_ctor_set_tag(v___x_3885_, 0);
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object* v_e_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3891_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object* v_00_u03b1_3894_, lean_object* v_e_3895_){
_start:
{
lean_object* v___x_3897_; 
v___x_3897_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3895_);
return v___x_3897_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object* v_00_u03b1_3898_, lean_object* v_e_3899_, lean_object* v_a_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(v_00_u03b1_3898_, v_e_3899_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object* v_a_3902_, lean_object* v_x_3903_){
_start:
{
if (lean_obj_tag(v_x_3903_) == 0)
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_box(0);
return v___x_3904_;
}
else
{
lean_object* v_key_3905_; lean_object* v_value_3906_; lean_object* v_tail_3907_; uint8_t v___x_3908_; 
v_key_3905_ = lean_ctor_get(v_x_3903_, 0);
v_value_3906_ = lean_ctor_get(v_x_3903_, 1);
v_tail_3907_ = lean_ctor_get(v_x_3903_, 2);
v___x_3908_ = lean_name_eq(v_key_3905_, v_a_3902_);
if (v___x_3908_ == 0)
{
v_x_3903_ = v_tail_3907_;
goto _start;
}
else
{
lean_object* v___x_3910_; 
lean_inc(v_value_3906_);
v___x_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3910_, 0, v_value_3906_);
return v___x_3910_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object* v_a_3911_, lean_object* v_x_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3911_, v_x_3912_);
lean_dec(v_x_3912_);
lean_dec(v_a_3911_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object* v_m_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_buckets_3916_; lean_object* v___x_3917_; uint64_t v___y_3919_; lean_object* v___x_3933_; 
v_buckets_3916_ = lean_ctor_get(v_m_3914_, 1);
v___x_3917_ = lean_array_get_size(v_buckets_3916_);
v___x_3933_ = l_unsafeCast___redArg(v_a_3915_);
if (lean_obj_tag(v___x_3933_) == 0)
{
uint64_t v___x_3934_; 
v___x_3934_ = 1723ULL;
v___y_3919_ = v___x_3934_;
goto v___jp_3918_;
}
else
{
uint64_t v_hash_3935_; 
v_hash_3935_ = lean_ctor_get_uint64(v___x_3933_, sizeof(void*)*2);
lean_dec(v___x_3933_);
v___y_3919_ = v_hash_3935_;
goto v___jp_3918_;
}
v___jp_3918_:
{
uint64_t v___x_3920_; uint64_t v___x_3921_; uint64_t v_fold_3922_; uint64_t v___x_3923_; uint64_t v___x_3924_; uint64_t v___x_3925_; size_t v___x_3926_; size_t v___x_3927_; size_t v___x_3928_; size_t v___x_3929_; size_t v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3920_ = 32ULL;
v___x_3921_ = lean_uint64_shift_right(v___y_3919_, v___x_3920_);
v_fold_3922_ = lean_uint64_xor(v___y_3919_, v___x_3921_);
v___x_3923_ = 16ULL;
v___x_3924_ = lean_uint64_shift_right(v_fold_3922_, v___x_3923_);
v___x_3925_ = lean_uint64_xor(v_fold_3922_, v___x_3924_);
v___x_3926_ = lean_uint64_to_usize(v___x_3925_);
v___x_3927_ = lean_usize_of_nat(v___x_3917_);
v___x_3928_ = ((size_t)1ULL);
v___x_3929_ = lean_usize_sub(v___x_3927_, v___x_3928_);
v___x_3930_ = lean_usize_land(v___x_3926_, v___x_3929_);
v___x_3931_ = lean_array_uget_borrowed(v_buckets_3916_, v___x_3930_);
v___x_3932_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3915_, v___x_3931_);
return v___x_3932_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object* v_m_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3936_, v_a_3937_);
lean_dec(v_a_3937_);
lean_dec_ref(v_m_3936_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object* v_e_3940_){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v_builderId_3944_; lean_object* v_ref_3945_; lean_object* v_args_3946_; lean_object* v___x_3947_; 
v___x_3942_ = l_Lean_attributeImplBuilderTableRef;
v___x_3943_ = lean_st_ref_get(v___x_3942_);
v_builderId_3944_ = lean_ctor_get(v_e_3940_, 0);
lean_inc(v_builderId_3944_);
v_ref_3945_ = lean_ctor_get(v_e_3940_, 1);
lean_inc(v_ref_3945_);
v_args_3946_ = lean_ctor_get(v_e_3940_, 2);
lean_inc(v_args_3946_);
lean_dec_ref(v_e_3940_);
v___x_3947_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_3943_, v_builderId_3944_);
lean_dec(v___x_3943_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v___x_3948_; uint8_t v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; 
lean_dec(v_args_3946_);
lean_dec(v_ref_3945_);
v___x_3948_ = ((lean_object*)(l_Lean_mkAttributeImplOfEntry___closed__0));
v___x_3949_ = 1;
v___x_3950_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3944_, v___x_3949_);
v___x_3951_ = lean_string_append(v___x_3948_, v___x_3950_);
lean_dec_ref(v___x_3950_);
v___x_3952_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_3953_ = lean_string_append(v___x_3951_, v___x_3952_);
v___x_3954_ = lean_mk_io_user_error(v___x_3953_);
v___x_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3954_);
return v___x_3955_;
}
else
{
lean_object* v_val_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
lean_dec(v_builderId_3944_);
v_val_3956_ = lean_ctor_get(v___x_3947_, 0);
lean_inc(v_val_3956_);
lean_dec_ref_known(v___x_3947_, 1);
v___x_3957_ = lean_apply_2(v_val_3956_, v_ref_3945_, v_args_3946_);
v___x_3958_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v___x_3957_);
return v___x_3958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object* v_e_3959_, lean_object* v_a_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Lean_mkAttributeImplOfEntry(v_e_3959_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object* v_00_u03b2_3962_, lean_object* v_m_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3963_, v_a_3964_);
return v___x_3965_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object* v_00_u03b2_3966_, lean_object* v_m_3967_, lean_object* v_a_3968_){
_start:
{
lean_object* v_res_3969_; 
v_res_3969_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(v_00_u03b2_3966_, v_m_3967_, v_a_3968_);
lean_dec(v_a_3968_);
lean_dec_ref(v_m_3967_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object* v_00_u03b2_3970_, lean_object* v_a_3971_, lean_object* v_x_3972_){
_start:
{
lean_object* v___x_3973_; 
v___x_3973_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3971_, v_x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3974_, lean_object* v_a_3975_, lean_object* v_x_3976_){
_start:
{
lean_object* v_res_3977_; 
v_res_3977_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(v_00_u03b2_3974_, v_a_3975_, v_x_3976_);
lean_dec(v_x_3976_);
lean_dec(v_a_3975_);
return v_res_3977_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0(void){
_start:
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3978_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3979_ = lean_box(0);
v___x_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
lean_ctor_set(v___x_3980_, 1, v___x_3978_);
return v___x_3980_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default(void){
_start:
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_obj_once(&l_Lean_instInhabitedAttributeExtensionState_default___closed__0, &l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once, _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0);
return v___x_3981_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState(void){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_instInhabitedAttributeExtensionState_default;
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial(){
_start:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3984_ = l_Lean_attributeMapRef;
v___x_3985_ = lean_st_ref_get(v___x_3984_);
v___x_3986_ = lean_box(0);
v___x_3987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3987_, 0, v___x_3986_);
lean_ctor_set(v___x_3987_, 1, v___x_3985_);
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object* v_a_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object* v_env_3996_, lean_object* v_opts_3997_, lean_object* v_declName_3998_){
_start:
{
uint8_t v___x_4001_; lean_object* v___x_4002_; 
v___x_4001_ = 0;
lean_inc(v_declName_3998_);
lean_inc_ref(v_env_3996_);
v___x_4002_ = l_Lean_Environment_find_x3f(v_env_3996_, v_declName_3998_, v___x_4001_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v___x_4003_; uint8_t v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
lean_dec_ref(v_env_3996_);
v___x_4003_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__2));
v___x_4004_ = 1;
v___x_4005_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_3998_, v___x_4004_);
v___x_4006_ = lean_string_append(v___x_4003_, v___x_4005_);
lean_dec_ref(v___x_4005_);
v___x_4007_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4008_ = lean_string_append(v___x_4006_, v___x_4007_);
v___x_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
return v___x_4009_;
}
else
{
lean_object* v_val_4010_; lean_object* v___x_4011_; 
v_val_4010_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_val_4010_);
lean_dec_ref_known(v___x_4002_, 1);
v___x_4011_ = l_Lean_ConstantInfo_type(v_val_4010_);
lean_dec(v_val_4010_);
if (lean_obj_tag(v___x_4011_) == 4)
{
lean_object* v_declName_4012_; 
v_declName_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_declName_4012_);
lean_dec_ref_known(v___x_4011_, 2);
if (lean_obj_tag(v_declName_4012_) == 1)
{
lean_object* v_pre_4013_; 
v_pre_4013_ = lean_ctor_get(v_declName_4012_, 0);
lean_inc(v_pre_4013_);
if (lean_obj_tag(v_pre_4013_) == 1)
{
lean_object* v_pre_4014_; 
v_pre_4014_ = lean_ctor_get(v_pre_4013_, 0);
if (lean_obj_tag(v_pre_4014_) == 0)
{
lean_object* v_str_4015_; lean_object* v_str_4016_; lean_object* v___x_4017_; uint8_t v___x_4018_; 
v_str_4015_ = lean_ctor_get(v_declName_4012_, 1);
lean_inc_ref(v_str_4015_);
lean_dec_ref_known(v_declName_4012_, 2);
v_str_4016_ = lean_ctor_get(v_pre_4013_, 1);
lean_inc_ref(v_str_4016_);
lean_dec_ref_known(v_pre_4013_, 2);
v___x_4017_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__0));
v___x_4018_ = lean_string_dec_eq(v_str_4016_, v___x_4017_);
lean_dec_ref(v_str_4016_);
if (v___x_4018_ == 0)
{
lean_dec_ref(v_str_4015_);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
else
{
lean_object* v___x_4019_; uint8_t v___x_4020_; 
v___x_4019_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__3));
v___x_4020_ = lean_string_dec_eq(v_str_4015_, v___x_4019_);
lean_dec_ref(v_str_4015_);
if (v___x_4020_ == 0)
{
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
else
{
lean_object* v___x_4021_; 
v___x_4021_ = l_Lean_Environment_evalConst___redArg(v_env_3996_, v_opts_3997_, v_declName_3998_, v___x_4020_);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
return v___x_4021_;
}
}
}
else
{
lean_dec_ref_known(v_pre_4013_, 2);
lean_dec_ref_known(v_declName_4012_, 2);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
}
else
{
lean_dec(v_pre_4013_);
lean_dec_ref_known(v_declName_4012_, 2);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
}
else
{
lean_dec(v_declName_4012_);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
}
else
{
lean_dec_ref(v___x_4011_);
lean_dec(v_declName_3998_);
lean_dec_ref(v_env_3996_);
goto v___jp_3999_;
}
}
v___jp_3999_:
{
lean_object* v___x_4000_; 
v___x_4000_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__1));
return v___x_4000_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object* v_env_4022_, lean_object* v_opts_4023_, lean_object* v_declName_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lean_mkAttributeImplOfConstantUnsafe(v_env_4022_, v_opts_4023_, v_declName_4024_);
lean_dec_ref(v_opts_4023_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object* v_as_4026_, size_t v_i_4027_, size_t v_stop_4028_, lean_object* v_b_4029_){
_start:
{
uint8_t v___x_4031_; 
v___x_4031_ = lean_usize_dec_eq(v_i_4027_, v_stop_4028_);
if (v___x_4031_ == 0)
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4032_ = lean_array_uget_borrowed(v_as_4026_, v_i_4027_);
lean_inc(v___x_4032_);
v___x_4033_ = l_Lean_mkAttributeImplOfEntry(v___x_4032_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; lean_object* v_toAttributeImplCore_4035_; lean_object* v_name_4036_; lean_object* v___x_4037_; size_t v___x_4038_; size_t v___x_4039_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___x_4033_, 1);
v_toAttributeImplCore_4035_ = lean_ctor_get(v_a_4034_, 0);
v_name_4036_ = lean_ctor_get(v_toAttributeImplCore_4035_, 1);
lean_inc(v_name_4036_);
v___x_4037_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_b_4029_, v_name_4036_, v_a_4034_);
v___x_4038_ = ((size_t)1ULL);
v___x_4039_ = lean_usize_add(v_i_4027_, v___x_4038_);
v_i_4027_ = v___x_4039_;
v_b_4029_ = v___x_4037_;
goto _start;
}
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
lean_dec_ref(v_b_4029_);
v_a_4041_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4033_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4033_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
else
{
lean_object* v___x_4049_; 
v___x_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4049_, 0, v_b_4029_);
return v___x_4049_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object* v_as_4050_, lean_object* v_i_4051_, lean_object* v_stop_4052_, lean_object* v_b_4053_, lean_object* v___y_4054_){
_start:
{
size_t v_i_boxed_4055_; size_t v_stop_boxed_4056_; lean_object* v_res_4057_; 
v_i_boxed_4055_ = lean_unbox_usize(v_i_4051_);
lean_dec(v_i_4051_);
v_stop_boxed_4056_ = lean_unbox_usize(v_stop_4052_);
lean_dec(v_stop_4052_);
v_res_4057_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4050_, v_i_boxed_4055_, v_stop_boxed_4056_, v_b_4053_);
lean_dec_ref(v_as_4050_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object* v_as_4058_, size_t v_i_4059_, size_t v_stop_4060_, lean_object* v_b_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_a_4065_; lean_object* v___y_4070_; uint8_t v___x_4072_; 
v___x_4072_ = lean_usize_dec_eq(v_i_4059_, v_stop_4060_);
if (v___x_4072_ == 0)
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; uint8_t v___x_4076_; 
v___x_4073_ = lean_array_uget_borrowed(v_as_4058_, v_i_4059_);
v___x_4074_ = lean_unsigned_to_nat(0u);
v___x_4075_ = lean_array_get_size(v___x_4073_);
v___x_4076_ = lean_nat_dec_lt(v___x_4074_, v___x_4075_);
if (v___x_4076_ == 0)
{
v_a_4065_ = v_b_4061_;
goto v___jp_4064_;
}
else
{
uint8_t v___x_4077_; 
v___x_4077_ = lean_nat_dec_le(v___x_4075_, v___x_4075_);
if (v___x_4077_ == 0)
{
if (v___x_4076_ == 0)
{
v_a_4065_ = v_b_4061_;
goto v___jp_4064_;
}
else
{
size_t v___x_4078_; size_t v___x_4079_; lean_object* v___x_4080_; 
v___x_4078_ = ((size_t)0ULL);
v___x_4079_ = lean_usize_of_nat(v___x_4075_);
v___x_4080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v___x_4073_, v___x_4078_, v___x_4079_, v_b_4061_);
v___y_4070_ = v___x_4080_;
goto v___jp_4069_;
}
}
else
{
size_t v___x_4081_; size_t v___x_4082_; lean_object* v___x_4083_; 
v___x_4081_ = ((size_t)0ULL);
v___x_4082_ = lean_usize_of_nat(v___x_4075_);
v___x_4083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v___x_4073_, v___x_4081_, v___x_4082_, v_b_4061_);
v___y_4070_ = v___x_4083_;
goto v___jp_4069_;
}
}
}
else
{
lean_object* v___x_4084_; 
v___x_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4084_, 0, v_b_4061_);
return v___x_4084_;
}
v___jp_4064_:
{
size_t v___x_4066_; size_t v___x_4067_; 
v___x_4066_ = ((size_t)1ULL);
v___x_4067_ = lean_usize_add(v_i_4059_, v___x_4066_);
v_i_4059_ = v___x_4067_;
v_b_4061_ = v_a_4065_;
goto _start;
}
v___jp_4069_:
{
if (lean_obj_tag(v___y_4070_) == 0)
{
lean_object* v_a_4071_; 
v_a_4071_ = lean_ctor_get(v___y_4070_, 0);
lean_inc(v_a_4071_);
lean_dec_ref_known(v___y_4070_, 1);
v_a_4065_ = v_a_4071_;
goto v___jp_4064_;
}
else
{
return v___y_4070_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object* v_as_4085_, lean_object* v_i_4086_, lean_object* v_stop_4087_, lean_object* v_b_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
size_t v_i_boxed_4091_; size_t v_stop_boxed_4092_; lean_object* v_res_4093_; 
v_i_boxed_4091_ = lean_unbox_usize(v_i_4086_);
lean_dec(v_i_4086_);
v_stop_boxed_4092_ = lean_unbox_usize(v_stop_4087_);
lean_dec(v_stop_4087_);
v_res_4093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_as_4085_, v_i_boxed_4091_, v_stop_boxed_4092_, v_b_4088_, v___y_4089_);
lean_dec_ref(v___y_4089_);
lean_dec_ref(v_as_4085_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object* v_es_4094_, lean_object* v_a_4095_){
_start:
{
lean_object* v_a_4098_; lean_object* v___y_4103_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; uint8_t v___x_4117_; 
v___x_4113_ = l_Lean_attributeMapRef;
v___x_4114_ = lean_st_ref_get(v___x_4113_);
v___x_4115_ = lean_unsigned_to_nat(0u);
v___x_4116_ = lean_array_get_size(v_es_4094_);
v___x_4117_ = lean_nat_dec_lt(v___x_4115_, v___x_4116_);
if (v___x_4117_ == 0)
{
v_a_4098_ = v___x_4114_;
goto v___jp_4097_;
}
else
{
uint8_t v___x_4118_; 
v___x_4118_ = lean_nat_dec_le(v___x_4116_, v___x_4116_);
if (v___x_4118_ == 0)
{
if (v___x_4117_ == 0)
{
v_a_4098_ = v___x_4114_;
goto v___jp_4097_;
}
else
{
size_t v___x_4119_; size_t v___x_4120_; lean_object* v___x_4121_; 
v___x_4119_ = ((size_t)0ULL);
v___x_4120_ = lean_usize_of_nat(v___x_4116_);
v___x_4121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_es_4094_, v___x_4119_, v___x_4120_, v___x_4114_, v_a_4095_);
v___y_4103_ = v___x_4121_;
goto v___jp_4102_;
}
}
else
{
size_t v___x_4122_; size_t v___x_4123_; lean_object* v___x_4124_; 
v___x_4122_ = ((size_t)0ULL);
v___x_4123_ = lean_usize_of_nat(v___x_4116_);
v___x_4124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_es_4094_, v___x_4122_, v___x_4123_, v___x_4114_, v_a_4095_);
v___y_4103_ = v___x_4124_;
goto v___jp_4102_;
}
}
v___jp_4097_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4099_ = lean_box(0);
v___x_4100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
lean_ctor_set(v___x_4100_, 1, v_a_4098_);
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
v___jp_4102_:
{
if (lean_obj_tag(v___y_4103_) == 0)
{
lean_object* v_a_4104_; 
v_a_4104_ = lean_ctor_get(v___y_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___y_4103_, 1);
v_a_4098_ = v_a_4104_;
goto v___jp_4097_;
}
else
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4112_; 
v_a_4105_ = lean_ctor_get(v___y_4103_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___y_4103_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4107_ = v___y_4103_;
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___y_4103_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object* v_es_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(v_es_4125_, v_a_4126_);
lean_dec_ref(v_a_4126_);
lean_dec_ref(v_es_4125_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object* v_as_4129_, size_t v_i_4130_, size_t v_stop_4131_, lean_object* v_b_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v___x_4135_; 
v___x_4135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4129_, v_i_4130_, v_stop_4131_, v_b_4132_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object* v_as_4136_, lean_object* v_i_4137_, lean_object* v_stop_4138_, lean_object* v_b_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
size_t v_i_boxed_4142_; size_t v_stop_boxed_4143_; lean_object* v_res_4144_; 
v_i_boxed_4142_ = lean_unbox_usize(v_i_4137_);
lean_dec(v_i_4137_);
v_stop_boxed_4143_ = lean_unbox_usize(v_stop_4138_);
lean_dec(v_stop_4138_);
v_res_4144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(v_as_4136_, v_i_boxed_4142_, v_stop_boxed_4143_, v_b_4139_, v___y_4140_);
lean_dec_ref(v___y_4140_);
lean_dec_ref(v_as_4136_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object* v_s_4145_, lean_object* v_e_4146_){
_start:
{
lean_object* v_snd_4147_; lean_object* v_toAttributeImplCore_4148_; lean_object* v_fst_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4167_; 
v_snd_4147_ = lean_ctor_get(v_e_4146_, 1);
lean_inc(v_snd_4147_);
v_toAttributeImplCore_4148_ = lean_ctor_get(v_snd_4147_, 0);
v_fst_4149_ = lean_ctor_get(v_e_4146_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_e_4146_);
if (v_isSharedCheck_4167_ == 0)
{
lean_object* v_unused_4168_; 
v_unused_4168_ = lean_ctor_get(v_e_4146_, 1);
lean_dec(v_unused_4168_);
v___x_4151_ = v_e_4146_;
v_isShared_4152_ = v_isSharedCheck_4167_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_fst_4149_);
lean_dec(v_e_4146_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4167_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v_newEntries_4153_; lean_object* v_map_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4166_; 
v_newEntries_4153_ = lean_ctor_get(v_s_4145_, 0);
v_map_4154_ = lean_ctor_get(v_s_4145_, 1);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_s_4145_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4156_ = v_s_4145_;
v_isShared_4157_ = v_isSharedCheck_4166_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_map_4154_);
lean_inc(v_newEntries_4153_);
lean_dec(v_s_4145_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4166_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v_name_4158_; lean_object* v___x_4160_; 
v_name_4158_ = lean_ctor_get(v_toAttributeImplCore_4148_, 1);
lean_inc(v_name_4158_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set_tag(v___x_4151_, 1);
lean_ctor_set(v___x_4151_, 1, v_newEntries_4153_);
v___x_4160_ = v___x_4151_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_fst_4149_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v_newEntries_4153_);
v___x_4160_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
lean_object* v___x_4161_; lean_object* v___x_4163_; 
v___x_4161_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4154_, v_name_4158_, v_snd_4147_);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 1, v___x_4161_);
lean_ctor_set(v___x_4156_, 0, v___x_4160_);
v___x_4163_ = v___x_4156_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v___x_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_x_4169_, lean_object* v_s_4170_){
_start:
{
lean_object* v_newEntries_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v_newEntries_4171_ = lean_ctor_get(v_s_4170_, 0);
lean_inc(v_newEntries_4171_);
lean_dec_ref(v_s_4170_);
v___x_4172_ = l_List_reverse___redArg(v_newEntries_4171_);
v___x_4173_ = lean_array_mk(v___x_4172_);
lean_inc_ref_n(v___x_4173_, 2);
v___x_4174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
lean_ctor_set(v___x_4174_, 1, v___x_4173_);
lean_ctor_set(v___x_4174_, 2, v___x_4173_);
return v___x_4174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v_x_4175_, lean_object* v_s_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(v_x_4175_, v_s_4176_);
lean_dec_ref(v_x_4175_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4178_){
_start:
{
lean_object* v_newEntries_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4190_; 
v_newEntries_4179_ = lean_ctor_get(v_s_4178_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v_s_4178_);
if (v_isSharedCheck_4190_ == 0)
{
lean_object* v_unused_4191_; 
v_unused_4191_ = lean_ctor_get(v_s_4178_, 1);
lean_dec(v_unused_4191_);
v___x_4181_ = v_s_4178_;
v_isShared_4182_ = v_isSharedCheck_4190_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_newEntries_4179_);
lean_dec(v_s_4178_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4190_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4188_; 
v___x_4183_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__4));
v___x_4184_ = l_List_lengthTR___redArg(v_newEntries_4179_);
lean_dec(v_newEntries_4179_);
v___x_4185_ = l_Nat_reprFast(v___x_4184_);
v___x_4186_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4185_);
if (v_isShared_4182_ == 0)
{
lean_ctor_set_tag(v___x_4181_, 5);
lean_ctor_set(v___x_4181_, 1, v___x_4186_);
lean_ctor_set(v___x_4181_, 0, v___x_4183_);
v___x_4188_ = v___x_4181_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v___x_4183_);
lean_ctor_set(v_reuseFailAlloc_4189_, 1, v___x_4186_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4192_){
_start:
{
lean_object* v_newEntries_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v_newEntries_4193_ = lean_ctor_get(v_s_4192_, 0);
lean_inc(v_newEntries_4193_);
lean_dec_ref(v_s_4192_);
v___x_4194_ = l_List_reverse___redArg(v_newEntries_4193_);
v___x_4195_ = lean_array_mk(v___x_4194_);
return v___x_4195_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___f_4207_; lean_object* v___f_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4205_ = lean_box(0);
v___x_4206_ = lean_box(2);
v___f_4207_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___f_4208_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4209_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4210_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4211_ = lean_alloc_closure((void*)(l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed), 1, 0);
v___x_4212_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4213_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4212_);
lean_ctor_set(v___x_4213_, 1, v___x_4211_);
lean_ctor_set(v___x_4213_, 2, v___x_4210_);
lean_ctor_set(v___x_4213_, 3, v___x_4209_);
lean_ctor_set(v___x_4213_, 4, v___f_4208_);
lean_ctor_set(v___x_4213_, 5, v___f_4207_);
lean_ctor_set(v___x_4213_, 6, v___x_4206_);
lean_ctor_set(v___x_4213_, 7, v___x_4205_);
return v___x_4213_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___f_4214_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4215_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4215_);
lean_ctor_set(v___x_4216_, 1, v___f_4214_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4218_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4219_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_4218_);
return v___x_4219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v_a_4220_){
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
return v_res_4221_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object* v_n_4222_){
_start:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4224_ = l_Lean_attributeMapRef;
v___x_4225_ = lean_st_ref_get(v___x_4224_);
v___x_4226_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_4225_, v_n_4222_);
lean_dec(v___x_4225_);
v___x_4227_ = lean_box(v___x_4226_);
v___x_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4227_);
return v___x_4228_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object* v_n_4229_, lean_object* v_a_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_Lean_isBuiltinAttribute(v_n_4229_);
lean_dec(v_n_4229_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object* v_x_4232_, lean_object* v_x_4233_){
_start:
{
if (lean_obj_tag(v_x_4233_) == 0)
{
return v_x_4232_;
}
else
{
lean_object* v_key_4234_; lean_object* v_tail_4235_; lean_object* v___x_4236_; 
v_key_4234_ = lean_ctor_get(v_x_4233_, 0);
v_tail_4235_ = lean_ctor_get(v_x_4233_, 2);
lean_inc(v_key_4234_);
v___x_4236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4236_, 0, v_key_4234_);
lean_ctor_set(v___x_4236_, 1, v_x_4232_);
v_x_4232_ = v___x_4236_;
v_x_4233_ = v_tail_4235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object* v_x_4238_, lean_object* v_x_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_x_4238_, v_x_4239_);
lean_dec(v_x_4239_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object* v_as_4241_, size_t v_i_4242_, size_t v_stop_4243_, lean_object* v_b_4244_){
_start:
{
uint8_t v___x_4245_; 
v___x_4245_ = lean_usize_dec_eq(v_i_4242_, v_stop_4243_);
if (v___x_4245_ == 0)
{
lean_object* v___x_4246_; lean_object* v___x_4247_; size_t v___x_4248_; size_t v___x_4249_; 
v___x_4246_ = lean_array_uget_borrowed(v_as_4241_, v_i_4242_);
v___x_4247_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_b_4244_, v___x_4246_);
v___x_4248_ = ((size_t)1ULL);
v___x_4249_ = lean_usize_add(v_i_4242_, v___x_4248_);
v_i_4242_ = v___x_4249_;
v_b_4244_ = v___x_4247_;
goto _start;
}
else
{
return v_b_4244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object* v_as_4251_, lean_object* v_i_4252_, lean_object* v_stop_4253_, lean_object* v_b_4254_){
_start:
{
size_t v_i_boxed_4255_; size_t v_stop_boxed_4256_; lean_object* v_res_4257_; 
v_i_boxed_4255_ = lean_unbox_usize(v_i_4252_);
lean_dec(v_i_4252_);
v_stop_boxed_4256_ = lean_unbox_usize(v_stop_4253_);
lean_dec(v_stop_4253_);
v_res_4257_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_as_4251_, v_i_boxed_4255_, v_stop_boxed_4256_, v_b_4254_);
lean_dec_ref(v_as_4251_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames(){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v_buckets_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; uint8_t v___x_4265_; 
v___x_4259_ = l_Lean_attributeMapRef;
v___x_4260_ = lean_st_ref_get(v___x_4259_);
v_buckets_4261_ = lean_ctor_get(v___x_4260_, 1);
lean_inc_ref(v_buckets_4261_);
lean_dec(v___x_4260_);
v___x_4262_ = lean_box(0);
v___x_4263_ = lean_unsigned_to_nat(0u);
v___x_4264_ = lean_array_get_size(v_buckets_4261_);
v___x_4265_ = lean_nat_dec_lt(v___x_4263_, v___x_4264_);
if (v___x_4265_ == 0)
{
lean_object* v___x_4266_; 
lean_dec_ref(v_buckets_4261_);
v___x_4266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4262_);
return v___x_4266_;
}
else
{
size_t v___x_4267_; size_t v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4267_ = ((size_t)0ULL);
v___x_4268_ = lean_usize_of_nat(v___x_4264_);
v___x_4269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4261_, v___x_4267_, v___x_4268_, v___x_4262_);
lean_dec_ref(v_buckets_4261_);
v___x_4270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4269_);
return v___x_4270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object* v_a_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lean_getBuiltinAttributeNames();
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object* v_attrName_4274_){
_start:
{
lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
v___x_4276_ = l_Lean_attributeMapRef;
v___x_4277_ = lean_st_ref_get(v___x_4276_);
v___x_4278_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_4277_, v_attrName_4274_);
lean_dec(v___x_4277_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_object* v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; 
v___x_4279_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4280_ = 1;
v___x_4281_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4274_, v___x_4280_);
v___x_4282_ = lean_string_append(v___x_4279_, v___x_4281_);
lean_dec_ref(v___x_4281_);
v___x_4283_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4284_ = lean_string_append(v___x_4282_, v___x_4283_);
v___x_4285_ = lean_mk_io_user_error(v___x_4284_);
v___x_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4286_, 0, v___x_4285_);
return v___x_4286_;
}
else
{
lean_object* v_val_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
lean_dec(v_attrName_4274_);
v_val_4287_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4278_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_val_4287_);
lean_dec(v___x_4278_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
lean_ctor_set_tag(v___x_4289_, 0);
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_val_4287_);
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
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object* v_attrName_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_getBuiltinAttributeImpl(v_attrName_4295_);
return v_res_4297_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object* v_env_4298_, lean_object* v_attrName_4299_){
_start:
{
lean_object* v___x_4300_; lean_object* v_toEnvExtension_4301_; lean_object* v_asyncMode_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v_map_4306_; uint8_t v___x_4307_; 
v___x_4300_ = l_Lean_attributeExtension;
v_toEnvExtension_4301_ = lean_ctor_get(v___x_4300_, 0);
v_asyncMode_4302_ = lean_ctor_get(v_toEnvExtension_4301_, 2);
v___x_4303_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4304_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_4305_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4303_, v___x_4300_, v_env_4298_, v_asyncMode_4302_, v___x_4304_);
v_map_4306_ = lean_ctor_get(v___x_4305_, 1);
lean_inc_ref(v_map_4306_);
lean_dec(v___x_4305_);
v___x_4307_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4306_, v_attrName_4299_);
lean_dec_ref(v_map_4306_);
return v___x_4307_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object* v_env_4308_, lean_object* v_attrName_4309_){
_start:
{
uint8_t v_res_4310_; lean_object* v_r_4311_; 
v_res_4310_ = l_Lean_isAttribute(v_env_4308_, v_attrName_4309_);
lean_dec(v_attrName_4309_);
v_r_4311_ = lean_box(v_res_4310_);
return v_r_4311_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object* v_env_4312_){
_start:
{
lean_object* v___x_4313_; lean_object* v_toEnvExtension_4314_; lean_object* v_asyncMode_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v_map_4319_; lean_object* v_buckets_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; uint8_t v___x_4324_; 
v___x_4313_ = l_Lean_attributeExtension;
v_toEnvExtension_4314_ = lean_ctor_get(v___x_4313_, 0);
v_asyncMode_4315_ = lean_ctor_get(v_toEnvExtension_4314_, 2);
v___x_4316_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4317_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_4318_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4316_, v___x_4313_, v_env_4312_, v_asyncMode_4315_, v___x_4317_);
v_map_4319_ = lean_ctor_get(v___x_4318_, 1);
lean_inc_ref(v_map_4319_);
lean_dec(v___x_4318_);
v_buckets_4320_ = lean_ctor_get(v_map_4319_, 1);
lean_inc_ref(v_buckets_4320_);
lean_dec_ref(v_map_4319_);
v___x_4321_ = lean_box(0);
v___x_4322_ = lean_unsigned_to_nat(0u);
v___x_4323_ = lean_array_get_size(v_buckets_4320_);
v___x_4324_ = lean_nat_dec_lt(v___x_4322_, v___x_4323_);
if (v___x_4324_ == 0)
{
lean_dec_ref(v_buckets_4320_);
return v___x_4321_;
}
else
{
size_t v___x_4325_; size_t v___x_4326_; lean_object* v___x_4327_; 
v___x_4325_ = ((size_t)0ULL);
v___x_4326_ = lean_usize_of_nat(v___x_4323_);
v___x_4327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4320_, v___x_4325_, v___x_4326_, v___x_4321_);
lean_dec_ref(v_buckets_4320_);
return v___x_4327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object* v_env_4328_, lean_object* v_attrName_4329_){
_start:
{
lean_object* v___x_4330_; lean_object* v_toEnvExtension_4331_; lean_object* v_asyncMode_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v_map_4336_; lean_object* v___x_4337_; 
v___x_4330_ = l_Lean_attributeExtension;
v_toEnvExtension_4331_ = lean_ctor_get(v___x_4330_, 0);
v_asyncMode_4332_ = lean_ctor_get(v_toEnvExtension_4331_, 2);
v___x_4333_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4334_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_4335_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4333_, v___x_4330_, v_env_4328_, v_asyncMode_4332_, v___x_4334_);
v_map_4336_ = lean_ctor_get(v___x_4335_, 1);
lean_inc_ref(v_map_4336_);
lean_dec(v___x_4335_);
v___x_4337_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_map_4336_, v_attrName_4329_);
lean_dec_ref(v_map_4336_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v___x_4338_; uint8_t v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4338_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4339_ = 1;
v___x_4340_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4329_, v___x_4339_);
v___x_4341_ = lean_string_append(v___x_4338_, v___x_4340_);
lean_dec_ref(v___x_4340_);
v___x_4342_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
v___x_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4344_, 0, v___x_4343_);
return v___x_4344_;
}
else
{
lean_object* v_val_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
lean_dec(v_attrName_4329_);
v_val_4345_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4337_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_val_4345_);
lean_dec(v___x_4337_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_val_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object* v_env_4353_, lean_object* v_builderId_4354_, lean_object* v_ref_4355_, lean_object* v_args_4356_){
_start:
{
lean_object* v_entry_4358_; lean_object* v___x_4359_; 
v_entry_4358_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_entry_4358_, 0, v_builderId_4354_);
lean_ctor_set(v_entry_4358_, 1, v_ref_4355_);
lean_ctor_set(v_entry_4358_, 2, v_args_4356_);
lean_inc_ref(v_entry_4358_);
v___x_4359_ = l_Lean_mkAttributeImplOfEntry(v_entry_4358_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4385_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4362_ = v___x_4359_;
v_isShared_4363_ = v_isSharedCheck_4385_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4359_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4385_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v_toAttributeImplCore_4364_; lean_object* v_name_4365_; uint8_t v___x_4366_; 
v_toAttributeImplCore_4364_ = lean_ctor_get(v_a_4360_, 0);
v_name_4365_ = lean_ctor_get(v_toAttributeImplCore_4364_, 1);
lean_inc_ref(v_env_4353_);
v___x_4366_ = l_Lean_isAttribute(v_env_4353_, v_name_4365_);
if (v___x_4366_ == 0)
{
lean_object* v___x_4367_; lean_object* v_toEnvExtension_4368_; lean_object* v_asyncMode_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4374_; 
v___x_4367_ = l_Lean_attributeExtension;
v_toEnvExtension_4368_ = lean_ctor_get(v___x_4367_, 0);
v_asyncMode_4369_ = lean_ctor_get(v_toEnvExtension_4368_, 2);
v___x_4370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4370_, 0, v_entry_4358_);
lean_ctor_set(v___x_4370_, 1, v_a_4360_);
v___x_4371_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
v___x_4372_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_4367_, v_env_4353_, v___x_4370_, v_asyncMode_4369_, v___x_4371_);
if (v_isShared_4363_ == 0)
{
lean_ctor_set(v___x_4362_, 0, v___x_4372_);
v___x_4374_ = v___x_4362_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4372_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
else
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4383_; 
lean_inc(v_name_4365_);
lean_dec(v_a_4360_);
lean_dec_ref_known(v_entry_4358_, 3);
lean_dec_ref(v_env_4353_);
v___x_4376_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_4377_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4365_, v___x_4366_);
v___x_4378_ = lean_string_append(v___x_4376_, v___x_4377_);
lean_dec_ref(v___x_4377_);
v___x_4379_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_4380_ = lean_string_append(v___x_4378_, v___x_4379_);
v___x_4381_ = lean_mk_io_user_error(v___x_4380_);
if (v_isShared_4363_ == 0)
{
lean_ctor_set_tag(v___x_4362_, 1);
lean_ctor_set(v___x_4362_, 0, v___x_4381_);
v___x_4383_ = v___x_4362_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v___x_4381_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
else
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
lean_dec_ref_known(v_entry_4358_, 3);
lean_dec_ref(v_env_4353_);
v_a_4386_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4388_ = v___x_4359_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4359_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4391_; 
if (v_isShared_4389_ == 0)
{
v___x_4391_ = v___x_4388_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_a_4386_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object* v_env_4394_, lean_object* v_builderId_4395_, lean_object* v_ref_4396_, lean_object* v_args_4397_, lean_object* v_a_4398_){
_start:
{
lean_object* v_res_4399_; 
v_res_4399_ = l_Lean_registerAttributeOfBuilder(v_env_4394_, v_builderId_4395_, v_ref_4396_, v_args_4397_);
return v_res_4399_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object* v_x_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_){
_start:
{
if (lean_obj_tag(v_x_4400_) == 0)
{
lean_object* v_a_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
v_a_4404_ = lean_ctor_get(v_x_4400_, 0);
lean_inc(v_a_4404_);
lean_dec_ref_known(v_x_4400_, 1);
v___x_4405_ = l_Lean_stringToMessageData(v_a_4404_);
v___x_4406_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_4405_, v___y_4401_, v___y_4402_);
return v___x_4406_;
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
v_a_4407_ = lean_ctor_get(v_x_4400_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v_x_4400_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v_x_4400_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v_x_4400_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
lean_ctor_set_tag(v___x_4409_, 0);
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object* v_x_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_){
_start:
{
lean_object* v_res_4419_; 
v_res_4419_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4415_, v___y_4416_, v___y_4417_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object* v_declName_4420_, lean_object* v_attrName_4421_, lean_object* v_stx_4422_, uint8_t v_kind_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v___x_4427_; lean_object* v_env_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; 
v___x_4427_ = lean_st_ref_get(v_a_4425_);
v_env_4428_ = lean_ctor_get(v___x_4427_, 0);
lean_inc_ref(v_env_4428_);
lean_dec(v___x_4427_);
v___x_4429_ = l_Lean_getAttributeImpl(v_env_4428_, v_attrName_4421_);
v___x_4430_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4429_, v_a_4424_, v_a_4425_);
if (lean_obj_tag(v___x_4430_) == 0)
{
lean_object* v_a_4431_; lean_object* v_add_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v_a_4431_ = lean_ctor_get(v___x_4430_, 0);
lean_inc(v_a_4431_);
lean_dec_ref_known(v___x_4430_, 1);
v_add_4432_ = lean_ctor_get(v_a_4431_, 1);
lean_inc_ref(v_add_4432_);
lean_dec(v_a_4431_);
v___x_4433_ = lean_box(v_kind_4423_);
lean_inc(v_a_4425_);
lean_inc_ref(v_a_4424_);
v___x_4434_ = lean_apply_6(v_add_4432_, v_declName_4420_, v_stx_4422_, v___x_4433_, v_a_4424_, v_a_4425_, lean_box(0));
return v___x_4434_;
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec(v_stx_4422_);
lean_dec(v_declName_4420_);
v_a_4435_ = lean_ctor_get(v___x_4430_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4430_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4430_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object* v_declName_4443_, lean_object* v_attrName_4444_, lean_object* v_stx_4445_, lean_object* v_kind_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_){
_start:
{
uint8_t v_kind_boxed_4450_; lean_object* v_res_4451_; 
v_kind_boxed_4450_ = lean_unbox(v_kind_4446_);
v_res_4451_ = l_Lean_Attribute_add(v_declName_4443_, v_attrName_4444_, v_stx_4445_, v_kind_boxed_4450_, v_a_4447_, v_a_4448_);
lean_dec(v_a_4448_);
lean_dec_ref(v_a_4447_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object* v_00_u03b1_4452_, lean_object* v_x_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_){
_start:
{
lean_object* v___x_4457_; 
v___x_4457_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4453_, v___y_4454_, v___y_4455_);
return v___x_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object* v_00_u03b1_4458_, lean_object* v_x_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(v_00_u03b1_4458_, v_x_4459_, v___y_4460_, v___y_4461_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object* v_declName_4464_, lean_object* v_attrName_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_){
_start:
{
lean_object* v___x_4469_; lean_object* v_env_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; 
v___x_4469_ = lean_st_ref_get(v_a_4467_);
v_env_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc_ref(v_env_4470_);
lean_dec(v___x_4469_);
v___x_4471_ = l_Lean_getAttributeImpl(v_env_4470_, v_attrName_4465_);
v___x_4472_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4471_, v_a_4466_, v_a_4467_);
if (lean_obj_tag(v___x_4472_) == 0)
{
lean_object* v_a_4473_; lean_object* v_erase_4474_; lean_object* v___x_4475_; 
v_a_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_a_4473_);
lean_dec_ref_known(v___x_4472_, 1);
v_erase_4474_ = lean_ctor_get(v_a_4473_, 2);
lean_inc_ref(v_erase_4474_);
lean_dec(v_a_4473_);
lean_inc(v_a_4467_);
lean_inc_ref(v_a_4466_);
v___x_4475_ = lean_apply_4(v_erase_4474_, v_declName_4464_, v_a_4466_, v_a_4467_, lean_box(0));
return v___x_4475_;
}
else
{
lean_object* v_a_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
lean_dec(v_declName_4464_);
v_a_4476_ = lean_ctor_get(v___x_4472_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4472_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_a_4476_);
lean_dec(v___x_4472_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object* v_declName_4484_, lean_object* v_attrName_4485_, lean_object* v_a_4486_, lean_object* v_a_4487_, lean_object* v_a_4488_){
_start:
{
lean_object* v_res_4489_; 
v_res_4489_ = l_Lean_Attribute_erase(v_declName_4484_, v_attrName_4485_, v_a_4486_, v_a_4487_);
lean_dec(v_a_4487_);
lean_dec_ref(v_a_4486_);
return v_res_4489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object* v_x_4490_, lean_object* v_x_4491_){
_start:
{
if (lean_obj_tag(v_x_4491_) == 0)
{
return v_x_4490_;
}
else
{
lean_object* v_key_4492_; lean_object* v_value_4493_; lean_object* v_tail_4494_; lean_object* v_newEntries_4495_; lean_object* v_map_4496_; uint8_t v___x_4497_; 
v_key_4492_ = lean_ctor_get(v_x_4491_, 0);
lean_inc(v_key_4492_);
v_value_4493_ = lean_ctor_get(v_x_4491_, 1);
lean_inc(v_value_4493_);
v_tail_4494_ = lean_ctor_get(v_x_4491_, 2);
lean_inc(v_tail_4494_);
lean_dec_ref_known(v_x_4491_, 3);
v_newEntries_4495_ = lean_ctor_get(v_x_4490_, 0);
v_map_4496_ = lean_ctor_get(v_x_4490_, 1);
v___x_4497_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4496_, v_key_4492_);
if (v___x_4497_ == 0)
{
lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4506_; 
lean_inc_ref(v_map_4496_);
lean_inc(v_newEntries_4495_);
v_isSharedCheck_4506_ = !lean_is_exclusive(v_x_4490_);
if (v_isSharedCheck_4506_ == 0)
{
lean_object* v_unused_4507_; lean_object* v_unused_4508_; 
v_unused_4507_ = lean_ctor_get(v_x_4490_, 1);
lean_dec(v_unused_4507_);
v_unused_4508_ = lean_ctor_get(v_x_4490_, 0);
lean_dec(v_unused_4508_);
v___x_4499_ = v_x_4490_;
v_isShared_4500_ = v_isSharedCheck_4506_;
goto v_resetjp_4498_;
}
else
{
lean_dec(v_x_4490_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4506_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4501_; lean_object* v___x_4503_; 
v___x_4501_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4496_, v_key_4492_, v_value_4493_);
if (v_isShared_4500_ == 0)
{
lean_ctor_set(v___x_4499_, 1, v___x_4501_);
v___x_4503_ = v___x_4499_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_newEntries_4495_);
lean_ctor_set(v_reuseFailAlloc_4505_, 1, v___x_4501_);
v___x_4503_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
v_x_4490_ = v___x_4503_;
v_x_4491_ = v_tail_4494_;
goto _start;
}
}
}
else
{
lean_dec(v_value_4493_);
lean_dec(v_key_4492_);
v_x_4491_ = v_tail_4494_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object* v_as_4510_, size_t v_i_4511_, size_t v_stop_4512_, lean_object* v_b_4513_){
_start:
{
uint8_t v___x_4514_; 
v___x_4514_ = lean_usize_dec_eq(v_i_4511_, v_stop_4512_);
if (v___x_4514_ == 0)
{
lean_object* v___x_4515_; lean_object* v___x_4516_; size_t v___x_4517_; size_t v___x_4518_; 
v___x_4515_ = lean_array_uget_borrowed(v_as_4510_, v_i_4511_);
lean_inc(v___x_4515_);
v___x_4516_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(v_b_4513_, v___x_4515_);
v___x_4517_ = ((size_t)1ULL);
v___x_4518_ = lean_usize_add(v_i_4511_, v___x_4517_);
v_i_4511_ = v___x_4518_;
v_b_4513_ = v___x_4516_;
goto _start;
}
else
{
return v_b_4513_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object* v_as_4520_, lean_object* v_i_4521_, lean_object* v_stop_4522_, lean_object* v_b_4523_){
_start:
{
size_t v_i_boxed_4524_; size_t v_stop_boxed_4525_; lean_object* v_res_4526_; 
v_i_boxed_4524_ = lean_unbox_usize(v_i_4521_);
lean_dec(v_i_4521_);
v_stop_boxed_4525_ = lean_unbox_usize(v_stop_4522_);
lean_dec(v_stop_4522_);
v_res_4526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_as_4520_, v_i_boxed_4524_, v_stop_boxed_4525_, v_b_4523_);
lean_dec_ref(v_as_4520_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object* v_env_4527_){
_start:
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___y_4534_; lean_object* v_toEnvExtension_4537_; lean_object* v_asyncMode_4538_; lean_object* v_buckets_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; uint8_t v___x_4544_; 
v___x_4529_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4530_ = l_Lean_attributeMapRef;
v___x_4531_ = lean_st_ref_get(v___x_4530_);
v___x_4532_ = l_Lean_attributeExtension;
v_toEnvExtension_4537_ = lean_ctor_get(v___x_4532_, 0);
v_asyncMode_4538_ = lean_ctor_get(v_toEnvExtension_4537_, 2);
v_buckets_4539_ = lean_ctor_get(v___x_4531_, 1);
lean_inc_ref(v_buckets_4539_);
lean_dec(v___x_4531_);
v___x_4540_ = lean_obj_once(&l_Lean_instInhabitedAttributeImplCore_default___closed__3, &l_Lean_instInhabitedAttributeImplCore_default___closed__3_once, _init_l_Lean_instInhabitedAttributeImplCore_default___closed__3);
lean_inc_ref(v_env_4527_);
v___x_4541_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4529_, v___x_4532_, v_env_4527_, v_asyncMode_4538_, v___x_4540_);
v___x_4542_ = lean_unsigned_to_nat(0u);
v___x_4543_ = lean_array_get_size(v_buckets_4539_);
v___x_4544_ = lean_nat_dec_lt(v___x_4542_, v___x_4543_);
if (v___x_4544_ == 0)
{
lean_dec_ref(v_buckets_4539_);
v___y_4534_ = v___x_4541_;
goto v___jp_4533_;
}
else
{
size_t v___x_4545_; size_t v___x_4546_; lean_object* v___x_4547_; 
v___x_4545_ = ((size_t)0ULL);
v___x_4546_ = lean_usize_of_nat(v___x_4543_);
v___x_4547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_buckets_4539_, v___x_4545_, v___x_4546_, v___x_4541_);
lean_dec_ref(v_buckets_4539_);
v___y_4534_ = v___x_4547_;
goto v___jp_4533_;
}
v___jp_4533_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4535_ = l_Lean_PersistentEnvExtension_setState___redArg(v___x_4532_, v_env_4527_, v___y_4534_);
v___x_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4535_);
return v___x_4536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object* v_env_4548_, lean_object* v_a_4549_){
_start:
{
lean_object* v_res_4550_; 
v_res_4550_ = lean_update_env_attributes(v_env_4548_);
return v_res_4550_;
}
}
LEAN_EXPORT lean_object* lean_get_num_attributes(){
_start:
{
lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v_size_4554_; lean_object* v___x_4555_; 
v___x_4552_ = l_Lean_attributeMapRef;
v___x_4553_ = lean_st_ref_get(v___x_4552_);
v_size_4554_ = lean_ctor_get(v___x_4553_, 0);
lean_inc(v_size_4554_);
lean_dec(v___x_4553_);
v___x_4555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4555_, 0, v_size_4554_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object* v_a_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = lean_get_num_attributes();
return v_res_4557_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedAttributeApplicationTime_default = _init_l_Lean_instInhabitedAttributeApplicationTime_default();
l_Lean_instInhabitedAttributeApplicationTime = _init_l_Lean_instInhabitedAttributeApplicationTime();
l_Lean_instInhabitedAttributeImplCore_default = _init_l_Lean_instInhabitedAttributeImplCore_default();
lean_mark_persistent(l_Lean_instInhabitedAttributeImplCore_default);
l_Lean_instInhabitedAttributeImplCore = _init_l_Lean_instInhabitedAttributeImplCore();
lean_mark_persistent(l_Lean_instInhabitedAttributeImplCore);
l_Lean_instInhabitedAttributeKind_default = _init_l_Lean_instInhabitedAttributeKind_default();
l_Lean_instInhabitedAttributeKind = _init_l_Lean_instInhabitedAttributeKind();
l_Lean_instInhabitedAttributeImpl_default = _init_l_Lean_instInhabitedAttributeImpl_default();
lean_mark_persistent(l_Lean_instInhabitedAttributeImpl_default);
l_Lean_instInhabitedAttributeImpl = _init_l_Lean_instInhabitedAttributeImpl();
lean_mark_persistent(l_Lean_instInhabitedAttributeImpl);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeMapRef);
lean_dec_ref(res);
l_Lean_instInhabitedTagAttribute_default = _init_l_Lean_instInhabitedTagAttribute_default();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute_default);
l_Lean_instInhabitedTagAttribute = _init_l_Lean_instInhabitedTagAttribute();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeImplBuilderTableRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeImplBuilderTableRef);
lean_dec_ref(res);
l_Lean_instInhabitedAttributeExtensionState_default = _init_l_Lean_instInhabitedAttributeExtensionState_default();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState_default);
l_Lean_instInhabitedAttributeExtensionState = _init_l_Lean_instInhabitedAttributeExtensionState();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_AttributeImplCore_ref___autoParam = _init_l_Lean_AttributeImplCore_ref___autoParam();
lean_mark_persistent(l_Lean_AttributeImplCore_ref___autoParam);
l_Lean_registerTagAttribute___auto__1 = _init_l_Lean_registerTagAttribute___auto__1();
lean_mark_persistent(l_Lean_registerTagAttribute___auto__1);
l_Lean_registerEnumAttributes___auto__1 = _init_l_Lean_registerEnumAttributes___auto__1();
lean_mark_persistent(l_Lean_registerEnumAttributes___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Attributes(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lake.Toml.Elab.Expression
// Imports: public import Lake.Toml.Elab.Value meta import all Lake.Toml.Grammar
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_findIdx_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_empty___redArg();
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_Toml_RBDict_appendArray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_elabSimpleKey(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Toml_elabVal(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_instInhabitedKeyTy_default;
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "array"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dotted"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instToStringKeyTy___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix___boxed(lean_object*);
static lean_once_cell_t l_Lake_Toml_instInhabitedElabState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_instInhabitedElabState_default___closed__0;
static const lean_array_object l_Lake_Toml_instInhabitedElabState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Toml_instInhabitedElabState_default___closed__1 = (const lean_object*)&l_Lake_Toml_instInhabitedElabState_default___closed__1_value;
static lean_once_cell_t l_Lake_Toml_instInhabitedElabState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_instInhabitedElabState_default___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_instInhabitedElabState_default;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cannot redefine "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " key `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Toml"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpleKey"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 51, 117, 190, 121, 223, 170, 220)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "keyval"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 46, 78, 232, 161, 211, 209, 25)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "ill-formed key-value pair syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 24, 166, 18, 184, 133, 165, 53)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ill-formed key syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7;
static const lean_array_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(internal) bad array key `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdTable"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__1_value),LEAN_SCALAR_PTR_LITERAL(204, 45, 156, 80, 41, 178, 181, 196)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ill-formed table syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arrayTable"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 220, 56, 86, 146, 203, 81, 19)}};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ill-formed array table syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ill-formed expression syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0 = (const lean_object*)&l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0_value;
static lean_once_cell_t l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(uint8_t, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_elabToml___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "toml"};
static const lean_object* l_Lake_Toml_elabToml___closed__0 = (const lean_object*)&l_Lake_Toml_elabToml___closed__0_value;
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_elabToml___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 110, 132, 157, 201, 185, 149, 61)}};
static const lean_object* l_Lake_Toml_elabToml___closed__1 = (const lean_object*)&l_Lake_Toml_elabToml___closed__1_value;
static const lean_string_object l_Lake_Toml_elabToml___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ill-formed TOML syntax"};
static const lean_object* l_Lake_Toml_elabToml___closed__2 = (const lean_object*)&l_Lake_Toml_elabToml___closed__2_value;
static lean_once_cell_t l_Lake_Toml_elabToml___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_elabToml___closed__3;
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_elabToml___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabToml___closed__4_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4_value),LEAN_SCALAR_PTR_LITERAL(169, 19, 11, 35, 86, 242, 57, 11)}};
static const lean_object* l_Lake_Toml_elabToml___closed__4 = (const lean_object*)&l_Lake_Toml_elabToml___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(uint8_t v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
uint8_t v_x_boxed_8_; lean_object* v_res_9_; 
v_x_boxed_8_ = lean_unbox(v_x_7_);
v_res_9_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorIdx(v_x_boxed_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(lean_object* v_k_10_){
_start:
{
lean_inc(v_k_10_);
return v_k_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg___boxed(lean_object* v_k_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___redArg(v_k_11_);
lean_dec(v_k_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, uint8_t v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_inc(v_k_17_);
return v_k_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
uint8_t v_t_boxed_23_; lean_object* v_res_24_; 
v_t_boxed_23_ = lean_unbox(v_t_20_);
v_res_24_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_boxed_23_, v_h_21_, v_k_22_);
lean_dec(v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(lean_object* v_value_25_){
_start:
{
lean_inc(v_value_25_);
return v_value_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg___boxed(lean_object* v_value_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___redArg(v_value_26_);
lean_dec(v_value_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(lean_object* v_motive_28_, uint8_t v_t_29_, lean_object* v_h_30_, lean_object* v_value_31_){
_start:
{
lean_inc(v_value_31_);
return v_value_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim___boxed(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_value_35_){
_start:
{
uint8_t v_t_boxed_36_; lean_object* v_res_37_; 
v_t_boxed_36_ = lean_unbox(v_t_33_);
v_res_37_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_value_elim(v_motive_32_, v_t_boxed_36_, v_h_34_, v_value_35_);
lean_dec(v_value_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(lean_object* v_stdTable_38_){
_start:
{
lean_inc(v_stdTable_38_);
return v_stdTable_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg___boxed(lean_object* v_stdTable_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___redArg(v_stdTable_39_);
lean_dec(v_stdTable_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(lean_object* v_motive_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_stdTable_44_){
_start:
{
lean_inc(v_stdTable_44_);
return v_stdTable_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim___boxed(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_stdTable_48_){
_start:
{
uint8_t v_t_boxed_49_; lean_object* v_res_50_; 
v_t_boxed_49_ = lean_unbox(v_t_46_);
v_res_50_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_stdTable_elim(v_motive_45_, v_t_boxed_49_, v_h_47_, v_stdTable_48_);
lean_dec(v_stdTable_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(lean_object* v_array_51_){
_start:
{
lean_inc(v_array_51_);
return v_array_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg___boxed(lean_object* v_array_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___redArg(v_array_52_);
lean_dec(v_array_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(lean_object* v_motive_54_, uint8_t v_t_55_, lean_object* v_h_56_, lean_object* v_array_57_){
_start:
{
lean_inc(v_array_57_);
return v_array_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim___boxed(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_array_61_){
_start:
{
uint8_t v_t_boxed_62_; lean_object* v_res_63_; 
v_t_boxed_62_ = lean_unbox(v_t_59_);
v_res_63_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_array_elim(v_motive_58_, v_t_boxed_62_, v_h_60_, v_array_61_);
lean_dec(v_array_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(lean_object* v_dottedPrefix_64_){
_start:
{
lean_inc(v_dottedPrefix_64_);
return v_dottedPrefix_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg___boxed(lean_object* v_dottedPrefix_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___redArg(v_dottedPrefix_65_);
lean_dec(v_dottedPrefix_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(lean_object* v_motive_67_, uint8_t v_t_68_, lean_object* v_h_69_, lean_object* v_dottedPrefix_70_){
_start:
{
lean_inc(v_dottedPrefix_70_);
return v_dottedPrefix_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim___boxed(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_dottedPrefix_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_dottedPrefix_elim(v_motive_71_, v_t_boxed_75_, v_h_73_, v_dottedPrefix_74_);
lean_dec(v_dottedPrefix_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(lean_object* v_headerPrefix_77_){
_start:
{
lean_inc(v_headerPrefix_77_);
return v_headerPrefix_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg___boxed(lean_object* v_headerPrefix_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___redArg(v_headerPrefix_78_);
lean_dec(v_headerPrefix_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(lean_object* v_motive_80_, uint8_t v_t_81_, lean_object* v_h_82_, lean_object* v_headerPrefix_83_){
_start:
{
lean_inc(v_headerPrefix_83_);
return v_headerPrefix_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim___boxed(lean_object* v_motive_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_headerPrefix_87_){
_start:
{
uint8_t v_t_boxed_88_; lean_object* v_res_89_; 
v_t_boxed_88_ = lean_unbox(v_t_85_);
v_res_89_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_headerPrefix_elim(v_motive_84_, v_t_boxed_88_, v_h_86_, v_headerPrefix_87_);
lean_dec(v_headerPrefix_87_);
return v_res_89_;
}
}
static uint8_t _init_l_Lake_Toml_instInhabitedKeyTy_default(void){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
}
static uint8_t _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy(void){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(uint8_t v_ty_97_){
_start:
{
switch(v_ty_97_)
{
case 0:
{
lean_object* v___x_98_; 
v___x_98_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__0));
return v___x_98_;
}
case 1:
{
lean_object* v___x_99_; 
v___x_99_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__1));
return v___x_99_;
}
case 2:
{
lean_object* v___x_100_; 
v___x_100_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__2));
return v___x_100_;
}
case 3:
{
lean_object* v___x_101_; 
v___x_101_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__3));
return v___x_101_;
}
default: 
{
lean_object* v___x_102_; 
v___x_102_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___closed__4));
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString___boxed(lean_object* v_ty_103_){
_start:
{
uint8_t v_ty_boxed_104_; lean_object* v_res_105_; 
v_ty_boxed_104_ = lean_unbox(v_ty_103_);
v_res_105_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v_ty_boxed_104_);
return v_res_105_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(uint8_t v_ty_108_){
_start:
{
switch(v_ty_108_)
{
case 1:
{
uint8_t v___x_109_; 
v___x_109_ = 1;
return v___x_109_;
}
case 4:
{
uint8_t v___x_110_; 
v___x_110_ = 1;
return v___x_110_;
}
case 3:
{
uint8_t v___x_111_; 
v___x_111_ = 1;
return v___x_111_;
}
default: 
{
uint8_t v___x_112_; 
v___x_112_ = 0;
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix___boxed(lean_object* v_ty_113_){
_start:
{
uint8_t v_ty_boxed_114_; uint8_t v_res_115_; lean_object* v_r_116_; 
v_ty_boxed_114_ = lean_unbox(v_ty_113_);
v_res_115_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_isValidPrefix(v_ty_boxed_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
static lean_object* _init_l_Lake_Toml_instInhabitedElabState_default___closed__0(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_box(0);
v___x_118_ = l_unsafeCast___redArg(v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Lake_Toml_instInhabitedElabState_default___closed__2(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = ((lean_object*)(l_Lake_Toml_instInhabitedElabState_default___closed__1));
v___x_122_ = lean_obj_once(&l_Lake_Toml_instInhabitedElabState_default___closed__0, &l_Lake_Toml_instInhabitedElabState_default___closed__0_once, _init_l_Lake_Toml_instInhabitedElabState_default___closed__0);
v___x_123_ = lean_box(1);
v___x_124_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
lean_ctor_set(v___x_124_, 2, v___x_123_);
lean_ctor_set(v___x_124_, 3, v___x_122_);
lean_ctor_set(v___x_124_, 4, v___x_122_);
lean_ctor_set(v___x_124_, 5, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lake_Toml_instInhabitedElabState_default(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lake_Toml_instInhabitedElabState_default___closed__2, &l_Lake_Toml_instInhabitedElabState_default___closed__2_once, _init_l_Lake_Toml_instInhabitedElabState_default___closed__2);
return v___x_125_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lake_Toml_instInhabitedElabState_default;
return v___x_126_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_127_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__0);
v___x_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
lean_ctor_set(v___x_132_, 2, v___x_131_);
lean_ctor_set(v___x_132_, 3, v___x_131_);
lean_ctor_set(v___x_132_, 4, v___x_130_);
lean_ctor_set(v___x_132_, 5, v___x_130_);
lean_ctor_set(v___x_132_, 6, v___x_130_);
lean_ctor_set(v___x_132_, 7, v___x_130_);
lean_ctor_set(v___x_132_, 8, v___x_130_);
lean_ctor_set(v___x_132_, 9, v___x_130_);
lean_ctor_set(v___x_132_, 10, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_unsigned_to_nat(32u);
v___x_134_ = lean_mk_empty_array_with_capacity(v___x_133_);
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_136_ = ((size_t)5ULL);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_unsigned_to_nat(32u);
v___x_139_ = lean_mk_empty_array_with_capacity(v___x_138_);
v___x_140_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__3);
v___x_141_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
lean_ctor_set(v___x_141_, 2, v___x_137_);
lean_ctor_set(v___x_141_, 3, v___x_137_);
lean_ctor_set_usize(v___x_141_, 4, v___x_136_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_142_ = lean_box(1);
v___x_143_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__4);
v___x_144_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__1);
v___x_145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___x_143_);
lean_ctor_set(v___x_145_, 2, v___x_142_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(lean_object* v_msgData_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; lean_object* v_toCold_151_; lean_object* v_env_152_; lean_object* v_options_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_150_ = lean_st_ref_get(v___y_148_);
v_toCold_151_ = lean_ctor_get(v___y_147_, 0);
v_env_152_ = lean_ctor_get(v___x_150_, 0);
lean_inc_ref(v_env_152_);
lean_dec(v___x_150_);
v_options_153_ = lean_ctor_get(v_toCold_151_, 2);
v___x_154_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__2);
v___x_155_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_153_);
v___x_156_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_156_, 0, v_env_152_);
lean_ctor_set(v___x_156_, 1, v___x_154_);
lean_ctor_set(v___x_156_, 2, v___x_155_);
lean_ctor_set(v___x_156_, 3, v_options_153_);
v___x_157_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v_msgData_146_);
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msgData_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(lean_object* v_msg_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_ref_168_; lean_object* v___x_169_; lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_178_; 
v_ref_168_ = lean_ctor_get(v___y_165_, 2);
v___x_169_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msg_164_, v___y_165_, v___y_166_);
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_178_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
lean_inc(v_ref_168_);
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v_ref_168_);
lean_ctor_set(v___x_174_, 1, v_a_170_);
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 1);
lean_ctor_set(v___x_172_, 0, v___x_174_);
v___x_176_ = v___x_172_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg___boxed(lean_object* v_msg_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(lean_object* v_ref_184_, lean_object* v_msg_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_toCold_190_; lean_object* v_currRecDepth_191_; lean_object* v_ref_192_; uint8_t v_diag_193_; uint8_t v_suppressElabErrors_194_; lean_object* v_ref_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v_toCold_190_ = lean_ctor_get(v___y_187_, 0);
v_currRecDepth_191_ = lean_ctor_get(v___y_187_, 1);
v_ref_192_ = lean_ctor_get(v___y_187_, 2);
v_diag_193_ = lean_ctor_get_uint8(v___y_187_, sizeof(void*)*3);
v_suppressElabErrors_194_ = lean_ctor_get_uint8(v___y_187_, sizeof(void*)*3 + 1);
v_ref_195_ = l_Lean_replaceRef(v_ref_184_, v_ref_192_);
lean_inc(v_currRecDepth_191_);
lean_inc_ref(v_toCold_190_);
v___x_196_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_196_, 0, v_toCold_190_);
lean_ctor_set(v___x_196_, 1, v_currRecDepth_191_);
lean_ctor_set(v___x_196_, 2, v_ref_195_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*3, v_diag_193_);
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*3 + 1, v_suppressElabErrors_194_);
v___x_197_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_185_, v___x_196_, v___y_188_);
lean_dec_ref_known(v___x_196_, 3);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg___boxed(lean_object* v_ref_198_, lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_ref_198_, v_msg_199_, v___y_200_, v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v_ref_198_);
return v_res_204_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0));
v___x_207_ = l_Lean_stringToMessageData(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2));
v___x_210_ = l_Lean_stringToMessageData(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4));
v___x_213_ = l_Lean_stringToMessageData(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(lean_object* v_as_214_, size_t v_i_215_, size_t v_stop_216_, lean_object* v_b_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v_fst_223_; lean_object* v_snd_224_; uint8_t v___x_228_; 
v___x_228_ = lean_usize_dec_eq(v_i_215_, v_stop_216_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_array_uget_borrowed(v_as_214_, v_i_215_);
lean_inc(v___x_229_);
v___x_230_ = l_Lake_Toml_elabSimpleKey(v___x_229_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v_keyTys_232_; lean_object* v_arrKeyTys_233_; lean_object* v_arrParents_234_; lean_object* v_currArrKey_235_; lean_object* v_currKey_236_; lean_object* v_items_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref_known(v___x_230_, 1);
v_keyTys_232_ = lean_ctor_get(v___y_218_, 0);
v_arrKeyTys_233_ = lean_ctor_get(v___y_218_, 1);
v_arrParents_234_ = lean_ctor_get(v___y_218_, 2);
v_currArrKey_235_ = lean_ctor_get(v___y_218_, 3);
v_currKey_236_ = lean_ctor_get(v___y_218_, 4);
v_items_237_ = lean_ctor_get(v___y_218_, 5);
v___x_238_ = l_Lean_Name_str___override(v_b_217_, v_a_231_);
v___x_239_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_232_, v___x_238_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_270_; 
v_val_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_270_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_270_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_val_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_270_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
uint8_t v___x_244_; 
v___x_244_ = lean_unbox(v_val_240_);
if (v___x_244_ == 3)
{
lean_del_object(v___x_242_);
lean_dec(v_val_240_);
v_fst_223_ = v___x_238_;
v_snd_224_ = v___y_218_;
goto v___jp_222_;
}
else
{
lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_245_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_246_ = lean_unbox(v_val_240_);
lean_dec(v_val_240_);
v___x_247_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_246_);
if (v_isShared_243_ == 0)
{
lean_ctor_set_tag(v___x_242_, 3);
lean_ctor_set(v___x_242_, 0, v___x_247_);
v___x_249_ = v___x_242_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_269_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_250_ = l_Lean_MessageData_ofFormat(v___x_249_);
v___x_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_245_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_inc(v___x_238_);
v___x_254_ = l_Lean_MessageData_ofName(v___x_238_);
v___x_255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_229_, v___x_257_, v___y_218_, v___y_219_, v___y_220_);
lean_dec_ref(v___y_218_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v_snd_260_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v___x_258_, 1);
v_snd_260_ = lean_ctor_get(v_a_259_, 1);
lean_inc(v_snd_260_);
lean_dec(v_a_259_);
v_fst_223_ = v___x_238_;
v_snd_224_ = v_snd_260_;
goto v___jp_222_;
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec(v___x_238_);
v_a_261_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_258_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_258_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_280_; 
lean_inc_ref(v_items_237_);
lean_inc(v_currKey_236_);
lean_inc(v_currArrKey_235_);
lean_inc(v_arrParents_234_);
lean_inc(v_arrKeyTys_233_);
lean_inc(v_keyTys_232_);
lean_dec(v___x_239_);
v_isSharedCheck_280_ = !lean_is_exclusive(v___y_218_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; lean_object* v_unused_282_; lean_object* v_unused_283_; lean_object* v_unused_284_; lean_object* v_unused_285_; lean_object* v_unused_286_; 
v_unused_281_ = lean_ctor_get(v___y_218_, 5);
lean_dec(v_unused_281_);
v_unused_282_ = lean_ctor_get(v___y_218_, 4);
lean_dec(v_unused_282_);
v_unused_283_ = lean_ctor_get(v___y_218_, 3);
lean_dec(v_unused_283_);
v_unused_284_ = lean_ctor_get(v___y_218_, 2);
lean_dec(v_unused_284_);
v_unused_285_ = lean_ctor_get(v___y_218_, 1);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v___y_218_, 0);
lean_dec(v_unused_286_);
v___x_272_ = v___y_218_;
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
else
{
lean_dec(v___y_218_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
uint8_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_274_ = 3;
v___x_275_ = lean_box(v___x_274_);
lean_inc(v___x_238_);
v___x_276_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_238_, v___x_275_, v_keyTys_232_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_276_);
v___x_278_ = v___x_272_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_arrKeyTys_233_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_arrParents_234_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v_currArrKey_235_);
lean_ctor_set(v_reuseFailAlloc_279_, 4, v_currKey_236_);
lean_ctor_set(v_reuseFailAlloc_279_, 5, v_items_237_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
v_fst_223_ = v___x_238_;
v_snd_224_ = v___x_278_;
goto v___jp_222_;
}
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v___y_218_);
lean_dec(v_b_217_);
v_a_287_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_230_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_230_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v_b_217_);
lean_ctor_set(v___x_295_, 1, v___y_218_);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
v___jp_222_:
{
size_t v___x_225_; size_t v___x_226_; 
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_215_, v___x_225_);
v_i_215_ = v___x_226_;
v_b_217_ = v_fst_223_;
v___y_218_ = v_snd_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___boxed(lean_object* v_as_297_, lean_object* v_i_298_, lean_object* v_stop_299_, lean_object* v_b_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
size_t v_i_boxed_305_; size_t v_stop_boxed_306_; lean_object* v_res_307_; 
v_i_boxed_305_ = lean_unbox_usize(v_i_298_);
lean_dec(v_i_298_);
v_stop_boxed_306_ = lean_unbox_usize(v_stop_299_);
lean_dec(v_stop_299_);
v_res_307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_as_297_, v_i_boxed_305_, v_stop_boxed_306_, v_b_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec_ref(v_as_297_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(lean_object* v_ks_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_currKey_313_; lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v_currKey_313_ = lean_ctor_get(v_a_309_, 4);
lean_inc(v_currKey_313_);
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_array_get_size(v_ks_308_);
v___x_316_ = lean_nat_dec_lt(v___x_314_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v_currKey_313_);
lean_ctor_set(v___x_317_, 1, v_a_309_);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
else
{
uint8_t v___x_319_; 
v___x_319_ = lean_nat_dec_le(v___x_315_, v___x_315_);
if (v___x_319_ == 0)
{
if (v___x_316_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_currKey_313_);
lean_ctor_set(v___x_320_, 1, v_a_309_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
else
{
size_t v___x_322_; size_t v___x_323_; lean_object* v___x_324_; 
v___x_322_ = ((size_t)0ULL);
v___x_323_ = lean_usize_of_nat(v___x_315_);
v___x_324_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_ks_308_, v___x_322_, v___x_323_, v_currKey_313_, v_a_309_, v_a_310_, v_a_311_);
return v___x_324_;
}
}
else
{
size_t v___x_325_; size_t v___x_326_; lean_object* v___x_327_; 
v___x_325_ = ((size_t)0ULL);
v___x_326_ = lean_usize_of_nat(v___x_315_);
v___x_327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1(v_ks_308_, v___x_325_, v___x_326_, v_currKey_313_, v_a_309_, v_a_310_, v_a_311_);
return v___x_327_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys___boxed(lean_object* v_ks_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(v_ks_328_, v_a_329_, v_a_330_, v_a_331_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec_ref(v_ks_328_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(lean_object* v_00_u03b1_334_, lean_object* v_ref_335_, lean_object* v_msg_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_ref_335_, v_msg_336_, v___y_337_, v___y_338_, v___y_339_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___boxed(lean_object* v_00_u03b1_342_, lean_object* v_ref_343_, lean_object* v_msg_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0(v_00_u03b1_342_, v_ref_343_, v_msg_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v_ref_343_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(lean_object* v_00_u03b1_350_, lean_object* v_msg_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v_msg_351_, v___y_353_, v___y_354_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_357_, lean_object* v_msg_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0(v_00_u03b1_357_, v_msg_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec_ref(v___y_359_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(uint8_t v___x_364_, lean_object* v_as_365_, size_t v_i_366_, size_t v_stop_367_, lean_object* v_b_368_){
_start:
{
lean_object* v___y_370_; uint8_t v___x_374_; 
v___x_374_ = lean_usize_dec_eq(v_i_366_, v_stop_367_);
if (v___x_374_ == 0)
{
lean_object* v_fst_375_; uint8_t v___x_376_; 
v_fst_375_ = lean_ctor_get(v_b_368_, 0);
v___x_376_ = lean_unbox(v_fst_375_);
if (v___x_376_ == 0)
{
lean_object* v_snd_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_385_; 
v_snd_377_ = lean_ctor_get(v_b_368_, 1);
v_isSharedCheck_385_ = !lean_is_exclusive(v_b_368_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_b_368_, 0);
lean_dec(v_unused_386_);
v___x_379_ = v_b_368_;
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_snd_377_);
lean_dec(v_b_368_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = lean_box(v___x_364_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_381_);
v___x_383_ = v___x_379_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_snd_377_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
v___y_370_ = v___x_383_;
goto v___jp_369_;
}
}
}
else
{
lean_object* v_snd_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_397_; 
v_snd_387_ = lean_ctor_get(v_b_368_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v_b_368_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v_b_368_, 0);
lean_dec(v_unused_398_);
v___x_389_ = v_b_368_;
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_snd_387_);
lean_dec(v_b_368_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_391_ = lean_array_uget_borrowed(v_as_365_, v_i_366_);
lean_inc(v___x_391_);
v___x_392_ = lean_array_push(v_snd_387_, v___x_391_);
v___x_393_ = lean_box(v___x_374_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v___x_392_);
lean_ctor_set(v___x_389_, 0, v___x_393_);
v___x_395_ = v___x_389_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_392_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
v___y_370_ = v___x_395_;
goto v___jp_369_;
}
}
}
}
else
{
return v_b_368_;
}
v___jp_369_:
{
size_t v___x_371_; size_t v___x_372_; 
v___x_371_ = ((size_t)1ULL);
v___x_372_ = lean_usize_add(v_i_366_, v___x_371_);
v_i_366_ = v___x_372_;
v_b_368_ = v___y_370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1___boxed(lean_object* v___x_399_, lean_object* v_as_400_, lean_object* v_i_401_, lean_object* v_stop_402_, lean_object* v_b_403_){
_start:
{
uint8_t v___x_2952__boxed_404_; size_t v_i_boxed_405_; size_t v_stop_boxed_406_; lean_object* v_res_407_; 
v___x_2952__boxed_404_ = lean_unbox(v___x_399_);
v_i_boxed_405_ = lean_unbox_usize(v_i_401_);
lean_dec(v_i_401_);
v_stop_boxed_406_ = lean_unbox_usize(v_stop_402_);
lean_dec(v_stop_402_);
v_res_407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_2952__boxed_404_, v_as_400_, v_i_boxed_405_, v_stop_boxed_406_, v_b_403_);
lean_dec_ref(v_as_400_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(size_t v_sz_415_, size_t v_i_416_, lean_object* v_bs_417_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_usize_dec_lt(v_i_416_, v_sz_415_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = l_unsafeCast___redArg(v_bs_417_);
lean_dec_ref(v_bs_417_);
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
else
{
lean_object* v_v_421_; lean_object* v_ks_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v_v_421_ = lean_array_uget_borrowed(v_bs_417_, v_i_416_);
v_ks_422_ = l_unsafeCast___redArg(v_v_421_);
v___x_423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___closed__3));
lean_inc(v_ks_422_);
v___x_424_ = l_Lean_Syntax_isOfKind(v_ks_422_, v___x_423_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; 
lean_dec(v_ks_422_);
lean_dec_ref(v_bs_417_);
v___x_425_ = lean_box(0);
return v___x_425_;
}
else
{
lean_object* v___x_426_; lean_object* v_bs_x27_427_; size_t v___x_428_; size_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_426_ = lean_unsigned_to_nat(0u);
v_bs_x27_427_ = lean_array_uset(v_bs_417_, v_i_416_, v___x_426_);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_add(v_i_416_, v___x_428_);
v___x_430_ = l_unsafeCast___redArg(v_ks_422_);
lean_dec(v_ks_422_);
v___x_431_ = lean_array_uset(v_bs_x27_427_, v_i_416_, v___x_430_);
v_i_416_ = v___x_429_;
v_bs_417_ = v___x_431_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0___boxed(lean_object* v_sz_433_, lean_object* v_i_434_, lean_object* v_bs_435_){
_start:
{
size_t v_sz_boxed_436_; size_t v_i_boxed_437_; lean_object* v_res_438_; 
v_sz_boxed_436_ = lean_unbox_usize(v_sz_433_);
lean_dec(v_sz_433_);
v_i_boxed_437_ = lean_unbox_usize(v_i_434_);
lean_dec(v_i_434_);
v_res_438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_boxed_436_, v_i_boxed_437_, v_bs_435_);
return v_res_438_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__2));
v___x_446_ = l_Lean_stringToMessageData(v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__6));
v___x_454_ = l_Lean_stringToMessageData(v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(lean_object* v_kv_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_kv_457_);
v___x_463_ = l_Lean_Syntax_isOfKind(v_kv_457_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__3);
v___x_465_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_kv_457_, v___x_464_, v_a_458_, v_a_459_, v_a_460_);
lean_dec_ref(v_a_458_);
lean_dec(v_kv_457_);
return v___x_465_;
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_466_ = lean_unsigned_to_nat(0u);
v___x_467_ = l_Lean_Syntax_getArg(v_kv_457_, v___x_466_);
v___x_468_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_467_);
v___x_469_ = l_Lean_Syntax_isOfKind(v___x_467_, v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; 
lean_dec(v_kv_457_);
v___x_470_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_471_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_467_, v___x_470_, v_a_458_, v_a_459_, v_a_460_);
lean_dec_ref(v_a_458_);
lean_dec(v___x_467_);
return v___x_471_;
}
else
{
lean_object* v___x_472_; lean_object* v_v_473_; lean_object* v___y_475_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_472_ = lean_unsigned_to_nat(2u);
v_v_473_ = l_Lean_Syntax_getArg(v_kv_457_, v___x_472_);
lean_dec(v_kv_457_);
v___x_583_ = l_Lean_Syntax_getArg(v___x_467_, v___x_466_);
v___x_584_ = l_Lean_Syntax_getArgs(v___x_583_);
lean_dec(v___x_583_);
v___x_585_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_586_ = lean_array_get_size(v___x_584_);
v___x_587_ = lean_nat_dec_lt(v___x_466_, v___x_586_);
if (v___x_587_ == 0)
{
lean_dec_ref(v___x_584_);
v___y_475_ = v___x_585_;
goto v___jp_474_;
}
else
{
lean_object* v___x_588_; lean_object* v___x_589_; size_t v___x_590_; size_t v___x_591_; lean_object* v___x_592_; lean_object* v_snd_593_; 
v___x_588_ = lean_box(v___x_587_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_585_);
v___x_590_ = ((size_t)0ULL);
v___x_591_ = lean_usize_of_nat(v___x_586_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_469_, v___x_584_, v___x_590_, v___x_591_, v___x_589_);
lean_dec_ref(v___x_584_);
v_snd_593_ = lean_ctor_get(v___x_592_, 1);
lean_inc(v_snd_593_);
lean_dec_ref(v___x_592_);
v___y_475_ = v_snd_593_;
goto v___jp_474_;
}
v___jp_474_:
{
size_t v_sz_476_; size_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_sz_476_ = lean_array_size(v___y_475_);
v___x_477_ = ((size_t)0ULL);
v___x_478_ = l_unsafeCast___redArg(v___y_475_);
lean_dec_ref(v___y_475_);
v___x_479_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_476_, v___x_477_, v___x_478_);
v___x_480_ = l_unsafeCast___redArg(v___x_479_);
lean_dec(v___x_479_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec(v_v_473_);
v___x_481_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_482_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_467_, v___x_481_, v_a_458_, v_a_459_, v_a_460_);
lean_dec_ref(v_a_458_);
lean_dec(v___x_467_);
return v___x_482_;
}
else
{
lean_object* v_val_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v_tailKeyStx_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_val_483_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_val_483_);
lean_dec_ref_known(v___x_480_, 1);
v___x_484_ = lean_box(0);
v___x_485_ = lean_array_get_size(v_val_483_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_sub(v___x_485_, v___x_486_);
v_tailKeyStx_488_ = lean_array_get(v___x_484_, v_val_483_, v___x_487_);
lean_dec(v___x_487_);
v___x_489_ = lean_array_pop(v_val_483_);
v___x_490_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys(v___x_489_, v_a_458_, v_a_459_, v_a_460_);
lean_dec_ref(v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v_fst_492_; lean_object* v_snd_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_574_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v_fst_492_ = lean_ctor_get(v_a_491_, 0);
v_snd_493_ = lean_ctor_get(v_a_491_, 1);
v_isSharedCheck_574_ = !lean_is_exclusive(v_a_491_);
if (v_isSharedCheck_574_ == 0)
{
v___x_495_ = v_a_491_;
v_isShared_496_ = v_isSharedCheck_574_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_snd_493_);
lean_inc(v_fst_492_);
lean_dec(v_a_491_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_574_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; 
lean_inc(v_tailKeyStx_488_);
v___x_497_ = l_Lake_Toml_elabSimpleKey(v_tailKeyStx_488_, v_a_459_, v_a_460_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v_keyTys_499_; lean_object* v_arrKeyTys_500_; lean_object* v_arrParents_501_; lean_object* v_currArrKey_502_; lean_object* v_currKey_503_; lean_object* v_items_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
v_keyTys_499_ = lean_ctor_get(v_snd_493_, 0);
v_arrKeyTys_500_ = lean_ctor_get(v_snd_493_, 1);
v_arrParents_501_ = lean_ctor_get(v_snd_493_, 2);
v_currArrKey_502_ = lean_ctor_get(v_snd_493_, 3);
v_currKey_503_ = lean_ctor_get(v_snd_493_, 4);
v_items_504_ = lean_ctor_get(v_snd_493_, 5);
v___x_505_ = l_Lean_Name_str___override(v_fst_492_, v_a_498_);
v___x_506_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_499_, v___x_505_);
if (lean_obj_tag(v___x_506_) == 1)
{
lean_object* v_val_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_526_; 
lean_del_object(v___x_495_);
lean_dec(v_v_473_);
lean_dec(v___x_467_);
v_val_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_526_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_526_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_val_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_526_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_511_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_512_ = lean_unbox(v_val_507_);
lean_dec(v_val_507_);
v___x_513_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_512_);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 3);
lean_ctor_set(v___x_509_, 0, v___x_513_);
v___x_515_ = v___x_509_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_525_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_516_ = l_Lean_MessageData_ofFormat(v___x_515_);
v___x_517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_511_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = l_Lean_MessageData_ofName(v___x_505_);
v___x_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKeyStx_488_, v___x_523_, v_snd_493_, v_a_459_, v_a_460_);
lean_dec(v_snd_493_);
lean_dec(v_tailKeyStx_488_);
return v___x_524_;
}
}
}
else
{
lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_559_; 
lean_inc_ref(v_items_504_);
lean_inc(v_currKey_503_);
lean_inc(v_currArrKey_502_);
lean_inc(v_arrParents_501_);
lean_inc(v_arrKeyTys_500_);
lean_inc(v_keyTys_499_);
lean_dec(v___x_506_);
lean_dec(v_tailKeyStx_488_);
v_isSharedCheck_559_ = !lean_is_exclusive(v_snd_493_);
if (v_isSharedCheck_559_ == 0)
{
lean_object* v_unused_560_; lean_object* v_unused_561_; lean_object* v_unused_562_; lean_object* v_unused_563_; lean_object* v_unused_564_; lean_object* v_unused_565_; 
v_unused_560_ = lean_ctor_get(v_snd_493_, 5);
lean_dec(v_unused_560_);
v_unused_561_ = lean_ctor_get(v_snd_493_, 4);
lean_dec(v_unused_561_);
v_unused_562_ = lean_ctor_get(v_snd_493_, 3);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_snd_493_, 2);
lean_dec(v_unused_563_);
v_unused_564_ = lean_ctor_get(v_snd_493_, 1);
lean_dec(v_unused_564_);
v_unused_565_ = lean_ctor_get(v_snd_493_, 0);
lean_dec(v_unused_565_);
v___x_528_ = v_snd_493_;
v_isShared_529_ = v_isSharedCheck_559_;
goto v_resetjp_527_;
}
else
{
lean_dec(v_snd_493_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_559_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lake_Toml_elabVal(v_v_473_, v_a_459_, v_a_460_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_550_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_550_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_550_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_550_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_535_ = lean_box(0);
v___x_536_ = 0;
v___x_537_ = lean_box(v___x_536_);
lean_inc(v___x_505_);
v___x_538_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_505_, v___x_537_, v_keyTys_499_);
v___x_539_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_539_, 0, v___x_467_);
lean_ctor_set(v___x_539_, 1, v___x_505_);
lean_ctor_set(v___x_539_, 2, v_a_531_);
v___x_540_ = lean_array_push(v_items_504_, v___x_539_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 5, v___x_540_);
lean_ctor_set(v___x_528_, 0, v___x_538_);
v___x_542_ = v___x_528_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_538_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_arrKeyTys_500_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v_arrParents_501_);
lean_ctor_set(v_reuseFailAlloc_549_, 3, v_currArrKey_502_);
lean_ctor_set(v_reuseFailAlloc_549_, 4, v_currKey_503_);
lean_ctor_set(v_reuseFailAlloc_549_, 5, v___x_540_);
v___x_542_ = v_reuseFailAlloc_549_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_544_; 
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 1, v___x_542_);
lean_ctor_set(v___x_495_, 0, v___x_535_);
v___x_544_ = v___x_495_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_548_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_546_; 
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_544_);
v___x_546_ = v___x_533_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_del_object(v___x_528_);
lean_dec(v___x_505_);
lean_dec_ref(v_items_504_);
lean_dec(v_currKey_503_);
lean_dec(v_currArrKey_502_);
lean_dec(v_arrParents_501_);
lean_dec(v_arrKeyTys_500_);
lean_dec(v_keyTys_499_);
lean_del_object(v___x_495_);
lean_dec(v___x_467_);
v_a_551_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_530_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_530_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_del_object(v___x_495_);
lean_dec(v_snd_493_);
lean_dec(v_fst_492_);
lean_dec(v_tailKeyStx_488_);
lean_dec(v_v_473_);
lean_dec(v___x_467_);
v_a_566_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_497_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_497_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
else
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
lean_dec(v_tailKeyStx_488_);
lean_dec(v_v_473_);
lean_dec(v___x_467_);
v_a_575_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_490_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_490_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___boxed(lean_object* v_kv_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_kv_594_, v_a_595_, v_a_596_, v_a_597_);
lean_dec(v_a_597_);
lean_dec_ref(v_a_596_);
return v_res_599_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__0));
v___x_602_ = l_Lean_stringToMessageData(v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(lean_object* v_as_603_, size_t v_i_604_, size_t v_stop_605_, lean_object* v_b_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_fst_612_; lean_object* v_snd_613_; uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_eq(v_i_604_, v_stop_605_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_array_uget_borrowed(v_as_603_, v_i_604_);
lean_inc(v___x_618_);
v___x_619_ = l_Lake_Toml_elabSimpleKey(v___x_618_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v_keyTys_621_; lean_object* v_arrKeyTys_622_; lean_object* v_arrParents_623_; lean_object* v_currArrKey_624_; lean_object* v_currKey_625_; lean_object* v_items_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_619_, 1);
v_keyTys_621_ = lean_ctor_get(v___y_607_, 0);
v_arrKeyTys_622_ = lean_ctor_get(v___y_607_, 1);
v_arrParents_623_ = lean_ctor_get(v___y_607_, 2);
v_currArrKey_624_ = lean_ctor_get(v___y_607_, 3);
v_currKey_625_ = lean_ctor_get(v___y_607_, 4);
v_items_626_ = lean_ctor_get(v___y_607_, 5);
v___x_627_ = l_Lean_Name_str___override(v_b_606_, v_a_620_);
v___x_628_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_621_, v___x_627_);
if (lean_obj_tag(v___x_628_) == 1)
{
lean_object* v_val_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_690_; 
v_val_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_690_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_690_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_val_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_690_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
uint8_t v___x_633_; 
v___x_633_ = lean_unbox(v_val_629_);
switch(v___x_633_)
{
case 2:
{
lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_658_; 
lean_inc_ref(v_items_626_);
lean_inc(v_currKey_625_);
lean_inc(v_arrParents_623_);
lean_inc(v_arrKeyTys_622_);
lean_del_object(v___x_631_);
lean_dec(v_val_629_);
v_isSharedCheck_658_ = !lean_is_exclusive(v___y_607_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; lean_object* v_unused_660_; lean_object* v_unused_661_; lean_object* v_unused_662_; lean_object* v_unused_663_; lean_object* v_unused_664_; 
v_unused_659_ = lean_ctor_get(v___y_607_, 5);
lean_dec(v_unused_659_);
v_unused_660_ = lean_ctor_get(v___y_607_, 4);
lean_dec(v_unused_660_);
v_unused_661_ = lean_ctor_get(v___y_607_, 3);
lean_dec(v_unused_661_);
v_unused_662_ = lean_ctor_get(v___y_607_, 2);
lean_dec(v_unused_662_);
v_unused_663_ = lean_ctor_get(v___y_607_, 1);
lean_dec(v_unused_663_);
v_unused_664_ = lean_ctor_get(v___y_607_, 0);
lean_dec(v_unused_664_);
v___x_635_ = v___y_607_;
v_isShared_636_ = v_isSharedCheck_658_;
goto v_resetjp_634_;
}
else
{
lean_dec(v___y_607_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_658_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; 
v___x_637_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrKeyTys_622_, v___x_627_);
if (lean_obj_tag(v___x_637_) == 1)
{
lean_object* v_val_638_; lean_object* v___x_640_; 
v_val_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___x_637_, 1);
lean_inc(v___x_627_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 3, v___x_627_);
lean_ctor_set(v___x_635_, 0, v_val_638_);
v___x_640_ = v___x_635_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_val_638_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_arrKeyTys_622_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_arrParents_623_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_currKey_625_);
lean_ctor_set(v_reuseFailAlloc_641_, 5, v_items_626_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
v_fst_612_ = v___x_627_;
v_snd_613_ = v___x_640_;
goto v___jp_611_;
}
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec(v___x_637_);
lean_del_object(v___x_635_);
lean_dec_ref(v_items_626_);
lean_dec(v_currKey_625_);
lean_dec(v_arrParents_623_);
lean_dec(v_arrKeyTys_622_);
v___x_642_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1);
lean_inc(v___x_627_);
v___x_643_ = l_Lean_MessageData_ofName(v___x_627_);
v___x_644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v___x_646_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v_snd_649_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_647_, 1);
v_snd_649_ = lean_ctor_get(v_a_648_, 1);
lean_inc(v_snd_649_);
lean_dec(v_a_648_);
v_fst_612_ = v___x_627_;
v_snd_613_ = v_snd_649_;
goto v___jp_611_;
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec(v___x_627_);
v_a_650_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_647_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_647_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
case 1:
{
lean_del_object(v___x_631_);
lean_dec(v_val_629_);
v_fst_612_ = v___x_627_;
v_snd_613_ = v___y_607_;
goto v___jp_611_;
}
case 4:
{
lean_del_object(v___x_631_);
lean_dec(v_val_629_);
v_fst_612_ = v___x_627_;
v_snd_613_ = v___y_607_;
goto v___jp_611_;
}
case 3:
{
lean_del_object(v___x_631_);
lean_dec(v_val_629_);
v_fst_612_ = v___x_627_;
v_snd_613_ = v___y_607_;
goto v___jp_611_;
}
default: 
{
lean_object* v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_669_; 
v___x_665_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_666_ = lean_unbox(v_val_629_);
lean_dec(v_val_629_);
v___x_667_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_666_);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 3);
lean_ctor_set(v___x_631_, 0, v___x_667_);
v___x_669_ = v___x_631_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_667_);
v___x_669_ = v_reuseFailAlloc_689_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_670_ = l_Lean_MessageData_ofFormat(v___x_669_);
v___x_671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_665_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
lean_inc(v___x_627_);
v___x_674_ = l_Lean_MessageData_ofName(v___x_627_);
v___x_675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_675_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_618_, v___x_677_, v___y_607_, v___y_608_, v___y_609_);
lean_dec_ref(v___y_607_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; lean_object* v_snd_680_; 
v_a_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_a_679_);
lean_dec_ref_known(v___x_678_, 1);
v_snd_680_ = lean_ctor_get(v_a_679_, 1);
lean_inc(v_snd_680_);
lean_dec(v_a_679_);
v_fst_612_ = v___x_627_;
v_snd_613_ = v_snd_680_;
goto v___jp_611_;
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v___x_627_);
v_a_681_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_678_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_678_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
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
lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_700_; 
lean_inc_ref(v_items_626_);
lean_inc(v_currKey_625_);
lean_inc(v_currArrKey_624_);
lean_inc(v_arrParents_623_);
lean_inc(v_arrKeyTys_622_);
lean_inc(v_keyTys_621_);
lean_dec(v___x_628_);
v_isSharedCheck_700_ = !lean_is_exclusive(v___y_607_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; lean_object* v_unused_702_; lean_object* v_unused_703_; lean_object* v_unused_704_; lean_object* v_unused_705_; lean_object* v_unused_706_; 
v_unused_701_ = lean_ctor_get(v___y_607_, 5);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v___y_607_, 4);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v___y_607_, 3);
lean_dec(v_unused_703_);
v_unused_704_ = lean_ctor_get(v___y_607_, 2);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v___y_607_, 1);
lean_dec(v_unused_705_);
v_unused_706_ = lean_ctor_get(v___y_607_, 0);
lean_dec(v_unused_706_);
v___x_692_ = v___y_607_;
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
else
{
lean_dec(v___y_607_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
uint8_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_694_ = 4;
v___x_695_ = lean_box(v___x_694_);
lean_inc(v___x_627_);
v___x_696_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_627_, v___x_695_, v_keyTys_621_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_696_);
v___x_698_ = v___x_692_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_arrKeyTys_622_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_arrParents_623_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_currArrKey_624_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_currKey_625_);
lean_ctor_set(v_reuseFailAlloc_699_, 5, v_items_626_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
v_fst_612_ = v___x_627_;
v_snd_613_ = v___x_698_;
goto v___jp_611_;
}
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec_ref(v___y_607_);
lean_dec(v_b_606_);
v_a_707_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_619_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_619_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v_b_606_);
lean_ctor_set(v___x_715_, 1, v___y_607_);
v___x_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
return v___x_716_;
}
v___jp_611_:
{
size_t v___x_614_; size_t v___x_615_; 
v___x_614_ = ((size_t)1ULL);
v___x_615_ = lean_usize_add(v_i_604_, v___x_614_);
v_i_604_ = v___x_615_;
v_b_606_ = v_fst_612_;
v___y_607_ = v_snd_613_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___boxed(lean_object* v_as_717_, lean_object* v_i_718_, lean_object* v_stop_719_, lean_object* v_b_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
size_t v_i_boxed_725_; size_t v_stop_boxed_726_; lean_object* v_res_727_; 
v_i_boxed_725_ = lean_unbox_usize(v_i_718_);
lean_dec(v_i_718_);
v_stop_boxed_726_ = lean_unbox_usize(v_stop_719_);
lean_dec(v_stop_719_);
v_res_727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_as_717_, v_i_boxed_725_, v_stop_boxed_726_, v_b_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v_as_717_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg(lean_object* v_t_728_, lean_object* v_k_729_){
_start:
{
if (lean_obj_tag(v_t_728_) == 0)
{
lean_object* v_k_730_; lean_object* v_v_731_; lean_object* v_l_732_; lean_object* v_r_733_; uint8_t v___x_734_; 
v_k_730_ = lean_ctor_get(v_t_728_, 1);
v_v_731_ = lean_ctor_get(v_t_728_, 2);
v_l_732_ = lean_ctor_get(v_t_728_, 3);
v_r_733_ = lean_ctor_get(v_t_728_, 4);
v___x_734_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_729_, v_k_730_);
switch(v___x_734_)
{
case 0:
{
v_t_728_ = v_l_732_;
goto _start;
}
case 1:
{
lean_object* v___x_736_; 
lean_inc(v_v_731_);
v___x_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_736_, 0, v_v_731_);
return v___x_736_;
}
default: 
{
v_t_728_ = v_r_733_;
goto _start;
}
}
}
else
{
lean_object* v___x_738_; 
v___x_738_ = lean_box(0);
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg___boxed(lean_object* v_t_739_, lean_object* v_k_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg(v_t_739_, v_k_740_);
lean_dec(v_k_740_);
lean_dec(v_t_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(lean_object* v_ks_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_keyTys_747_; lean_object* v_arrKeyTys_748_; lean_object* v_arrParents_749_; lean_object* v_currArrKey_750_; lean_object* v_currKey_751_; lean_object* v_items_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_780_; 
v_keyTys_747_ = lean_ctor_get(v_a_743_, 0);
v_arrKeyTys_748_ = lean_ctor_get(v_a_743_, 1);
v_arrParents_749_ = lean_ctor_get(v_a_743_, 2);
v_currArrKey_750_ = lean_ctor_get(v_a_743_, 3);
v_currKey_751_ = lean_ctor_get(v_a_743_, 4);
v_items_752_ = lean_ctor_get(v_a_743_, 5);
v_isSharedCheck_780_ = !lean_is_exclusive(v_a_743_);
if (v_isSharedCheck_780_ == 0)
{
v___x_754_ = v_a_743_;
v_isShared_755_ = v_isSharedCheck_780_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_items_752_);
lean_inc(v_currKey_751_);
lean_inc(v_currArrKey_750_);
lean_inc(v_arrParents_749_);
lean_inc(v_arrKeyTys_748_);
lean_inc(v_keyTys_747_);
lean_dec(v_a_743_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_780_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v_arrKeyTys_756_; lean_object* v___x_757_; lean_object* v___y_759_; lean_object* v___x_777_; 
v_arrKeyTys_756_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_currArrKey_750_, v_keyTys_747_, v_arrKeyTys_748_);
v___x_757_ = lean_obj_once(&l_Lake_Toml_instInhabitedElabState_default___closed__0, &l_Lake_Toml_instInhabitedElabState_default___closed__0_once, _init_l_Lake_Toml_instInhabitedElabState_default___closed__0);
v___x_777_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg(v_arrKeyTys_756_, v___x_757_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_778_; 
v___x_778_ = lean_box(1);
v___y_759_ = v___x_778_;
goto v___jp_758_;
}
else
{
lean_object* v_val_779_; 
v_val_779_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_val_779_);
lean_dec_ref_known(v___x_777_, 1);
v___y_759_ = v_val_779_;
goto v___jp_758_;
}
v___jp_758_:
{
lean_object* v___x_761_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 3, v___x_757_);
lean_ctor_set(v___x_754_, 1, v_arrKeyTys_756_);
lean_ctor_set(v___x_754_, 0, v___y_759_);
v___x_761_ = v___x_754_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___y_759_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_arrKeyTys_756_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_arrParents_749_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v_currKey_751_);
lean_ctor_set(v_reuseFailAlloc_776_, 5, v_items_752_);
v___x_761_ = v_reuseFailAlloc_776_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = lean_array_get_size(v_ks_742_);
v___x_764_ = lean_nat_dec_lt(v___x_762_, v___x_763_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_757_);
lean_ctor_set(v___x_765_, 1, v___x_761_);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = lean_nat_dec_le(v___x_763_, v___x_763_);
if (v___x_767_ == 0)
{
if (v___x_764_ == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_757_);
lean_ctor_set(v___x_768_, 1, v___x_761_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
else
{
size_t v___x_770_; size_t v___x_771_; lean_object* v___x_772_; 
v___x_770_ = ((size_t)0ULL);
v___x_771_ = lean_usize_of_nat(v___x_763_);
v___x_772_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_ks_742_, v___x_770_, v___x_771_, v___x_757_, v___x_761_, v_a_744_, v_a_745_);
return v___x_772_;
}
}
else
{
size_t v___x_773_; size_t v___x_774_; lean_object* v___x_775_; 
v___x_773_ = ((size_t)0ULL);
v___x_774_ = lean_usize_of_nat(v___x_763_);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0(v_ks_742_, v___x_773_, v___x_774_, v___x_757_, v___x_761_, v_a_744_, v_a_745_);
return v___x_775_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys___boxed(lean_object* v_ks_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v_ks_781_, v_a_782_, v_a_783_, v_a_784_);
lean_dec(v_a_784_);
lean_dec_ref(v_a_783_);
lean_dec_ref(v_ks_781_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1(lean_object* v_00_u03b4_787_, lean_object* v_t_788_, lean_object* v_k_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___redArg(v_t_788_, v_k_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1___boxed(lean_object* v_00_u03b4_791_, lean_object* v_t_792_, lean_object* v_k_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__1(v_00_u03b4_791_, v_t_792_, v_k_793_);
lean_dec(v_k_793_);
lean_dec(v_t_792_);
return v_res_794_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0(void){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_795_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__3));
v___x_803_ = l_Lean_stringToMessageData(v___x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(lean_object* v_x_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
lean_object* v___y_810_; lean_object* v_keyTys_811_; lean_object* v_arrKeyTys_812_; lean_object* v_arrParents_813_; lean_object* v_currArrKey_814_; lean_object* v_items_815_; lean_object* v_toCold_827_; lean_object* v_currRecDepth_828_; lean_object* v_ref_829_; uint8_t v_diag_830_; uint8_t v_suppressElabErrors_831_; lean_object* v___x_832_; uint8_t v___x_833_; lean_object* v_ref_834_; lean_object* v___x_835_; 
v_toCold_827_ = lean_ctor_get(v_a_806_, 0);
v_currRecDepth_828_ = lean_ctor_get(v_a_806_, 1);
v_ref_829_ = lean_ctor_get(v_a_806_, 2);
v_diag_830_ = lean_ctor_get_uint8(v_a_806_, sizeof(void*)*3);
v_suppressElabErrors_831_ = lean_ctor_get_uint8(v_a_806_, sizeof(void*)*3 + 1);
v___x_832_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_x_804_);
v___x_833_ = l_Lean_Syntax_isOfKind(v_x_804_, v___x_832_);
v_ref_834_ = l_Lean_replaceRef(v_x_804_, v_ref_829_);
lean_inc(v_currRecDepth_828_);
lean_inc_ref(v_toCold_827_);
v___x_835_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_835_, 0, v_toCold_827_);
lean_ctor_set(v___x_835_, 1, v_currRecDepth_828_);
lean_ctor_set(v___x_835_, 2, v_ref_834_);
lean_ctor_set_uint8(v___x_835_, sizeof(void*)*3, v_diag_830_);
lean_ctor_set_uint8(v___x_835_, sizeof(void*)*3 + 1, v_suppressElabErrors_831_);
if (v___x_833_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__4);
v___x_837_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_804_, v___x_836_, v_a_805_, v___x_835_, v_a_807_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec_ref(v_a_805_);
lean_dec(v_x_804_);
return v___x_837_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___y_841_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = l_Lean_Syntax_getArg(v_x_804_, v___x_838_);
v___x_911_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_839_);
v___x_912_ = l_Lean_Syntax_isOfKind(v___x_839_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v_x_804_);
v___x_913_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_914_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_839_, v___x_913_, v_a_805_, v___x_835_, v_a_807_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec_ref(v_a_805_);
lean_dec(v___x_839_);
return v___x_914_;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_915_ = lean_unsigned_to_nat(0u);
v___x_916_ = l_Lean_Syntax_getArg(v___x_839_, v___x_915_);
v___x_917_ = l_Lean_Syntax_getArgs(v___x_916_);
lean_dec(v___x_916_);
v___x_918_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_919_ = lean_array_get_size(v___x_917_);
v___x_920_ = lean_nat_dec_lt(v___x_915_, v___x_919_);
if (v___x_920_ == 0)
{
lean_dec_ref(v___x_917_);
v___y_841_ = v___x_918_;
goto v___jp_840_;
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; size_t v___x_923_; size_t v___x_924_; lean_object* v___x_925_; lean_object* v_snd_926_; 
v___x_921_ = lean_box(v___x_920_);
v___x_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___x_918_);
v___x_923_ = ((size_t)0ULL);
v___x_924_ = lean_usize_of_nat(v___x_919_);
v___x_925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_912_, v___x_917_, v___x_923_, v___x_924_, v___x_922_);
lean_dec_ref(v___x_917_);
v_snd_926_ = lean_ctor_get(v___x_925_, 1);
lean_inc(v_snd_926_);
lean_dec_ref(v___x_925_);
v___y_841_ = v_snd_926_;
goto v___jp_840_;
}
}
v___jp_840_:
{
size_t v_sz_842_; size_t v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_sz_842_ = lean_array_size(v___y_841_);
v___x_843_ = ((size_t)0ULL);
v___x_844_ = l_unsafeCast___redArg(v___y_841_);
lean_dec_ref(v___y_841_);
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_842_, v___x_843_, v___x_844_);
v___x_846_ = l_unsafeCast___redArg(v___x_845_);
lean_dec(v___x_845_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v_x_804_);
v___x_847_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_848_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v___x_839_, v___x_847_, v_a_805_, v___x_835_, v_a_807_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec_ref(v_a_805_);
lean_dec(v___x_839_);
return v___x_848_;
}
else
{
lean_object* v_val_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v_tailKey_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec(v___x_839_);
v_val_849_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_val_849_);
lean_dec_ref_known(v___x_846_, 1);
v___x_850_ = lean_box(0);
v___x_851_ = lean_array_get_size(v_val_849_);
v___x_852_ = lean_nat_sub(v___x_851_, v___x_838_);
v_tailKey_853_ = lean_array_get(v___x_850_, v_val_849_, v___x_852_);
lean_dec(v___x_852_);
v___x_854_ = lean_array_pop(v_val_849_);
v___x_855_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v___x_854_, v_a_805_, v___x_835_, v_a_807_);
lean_dec_ref(v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v_fst_857_; lean_object* v_snd_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_902_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v_fst_857_ = lean_ctor_get(v_a_856_, 0);
v_snd_858_ = lean_ctor_get(v_a_856_, 1);
v_isSharedCheck_902_ = !lean_is_exclusive(v_a_856_);
if (v_isSharedCheck_902_ == 0)
{
v___x_860_ = v_a_856_;
v_isShared_861_ = v_isSharedCheck_902_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_snd_858_);
lean_inc(v_fst_857_);
lean_dec(v_a_856_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_902_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; 
lean_inc(v_tailKey_853_);
v___x_862_ = l_Lake_Toml_elabSimpleKey(v_tailKey_853_, v___x_835_, v_a_807_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v_keyTys_864_; lean_object* v_arrKeyTys_865_; lean_object* v_arrParents_866_; lean_object* v_currArrKey_867_; lean_object* v_items_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v_keyTys_864_ = lean_ctor_get(v_snd_858_, 0);
v_arrKeyTys_865_ = lean_ctor_get(v_snd_858_, 1);
v_arrParents_866_ = lean_ctor_get(v_snd_858_, 2);
v_currArrKey_867_ = lean_ctor_get(v_snd_858_, 3);
v_items_868_ = lean_ctor_get(v_snd_858_, 5);
v___x_869_ = l_Lean_Name_str___override(v_fst_857_, v_a_863_);
v___x_870_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_864_, v___x_869_);
if (lean_obj_tag(v___x_870_) == 1)
{
lean_object* v_val_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_893_; 
v_val_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_893_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_893_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_val_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_893_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
uint8_t v___x_875_; 
v___x_875_ = lean_unbox(v_val_871_);
if (v___x_875_ == 4)
{
lean_inc_ref(v_items_868_);
lean_inc(v_currArrKey_867_);
lean_inc(v_arrParents_866_);
lean_inc(v_arrKeyTys_865_);
lean_inc(v_keyTys_864_);
lean_del_object(v___x_873_);
lean_dec(v_val_871_);
lean_del_object(v___x_860_);
lean_dec(v_snd_858_);
lean_dec(v_tailKey_853_);
lean_dec_ref_known(v___x_835_, 3);
v___y_810_ = v___x_869_;
v_keyTys_811_ = v_keyTys_864_;
v_arrKeyTys_812_ = v_arrKeyTys_865_;
v_arrParents_813_ = v_arrParents_866_;
v_currArrKey_814_ = v_currArrKey_867_;
v_items_815_ = v_items_868_;
goto v___jp_809_;
}
else
{
lean_object* v___x_876_; uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
lean_dec(v_x_804_);
v___x_876_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__1);
v___x_877_ = lean_unbox(v_val_871_);
lean_dec(v_val_871_);
v___x_878_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_877_);
if (v_isShared_874_ == 0)
{
lean_ctor_set_tag(v___x_873_, 3);
lean_ctor_set(v___x_873_, 0, v___x_878_);
v___x_880_ = v___x_873_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_892_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_881_ = l_Lean_MessageData_ofFormat(v___x_880_);
if (v_isShared_861_ == 0)
{
lean_ctor_set_tag(v___x_860_, 7);
lean_ctor_set(v___x_860_, 1, v___x_881_);
lean_ctor_set(v___x_860_, 0, v___x_876_);
v___x_883_ = v___x_860_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_876_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_891_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_884_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__3);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Lean_MessageData_ofName(v___x_869_);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKey_853_, v___x_889_, v_snd_858_, v___x_835_, v_a_807_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec(v_snd_858_);
lean_dec(v_tailKey_853_);
return v___x_890_;
}
}
}
}
}
else
{
lean_inc_ref(v_items_868_);
lean_inc(v_currArrKey_867_);
lean_inc(v_arrParents_866_);
lean_inc(v_arrKeyTys_865_);
lean_inc(v_keyTys_864_);
lean_dec(v___x_870_);
lean_del_object(v___x_860_);
lean_dec(v_snd_858_);
lean_dec(v_tailKey_853_);
lean_dec_ref_known(v___x_835_, 3);
v___y_810_ = v___x_869_;
v_keyTys_811_ = v_keyTys_864_;
v_arrKeyTys_812_ = v_arrKeyTys_865_;
v_arrParents_813_ = v_arrParents_866_;
v_currArrKey_814_ = v_currArrKey_867_;
v_items_815_ = v_items_868_;
goto v___jp_809_;
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_del_object(v___x_860_);
lean_dec(v_snd_858_);
lean_dec(v_fst_857_);
lean_dec(v_tailKey_853_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec(v_x_804_);
v_a_894_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_862_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_862_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_tailKey_853_);
lean_dec_ref_known(v___x_835_, 3);
lean_dec(v_x_804_);
v_a_903_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_855_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_855_);
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
}
}
v___jp_809_:
{
lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_816_ = lean_box(0);
v___x_817_ = 1;
v___x_818_ = lean_box(v___x_817_);
lean_inc_n(v___y_810_, 2);
v___x_819_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___y_810_, v___x_818_, v_keyTys_811_);
v___x_820_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_x_804_);
v___x_821_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_821_, 0, v_x_804_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_822_, 0, v_x_804_);
lean_ctor_set(v___x_822_, 1, v___y_810_);
lean_ctor_set(v___x_822_, 2, v___x_821_);
v___x_823_ = lean_array_push(v_items_815_, v___x_822_);
v___x_824_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_824_, 0, v___x_819_);
lean_ctor_set(v___x_824_, 1, v_arrKeyTys_812_);
lean_ctor_set(v___x_824_, 2, v_arrParents_813_);
lean_ctor_set(v___x_824_, 3, v_currArrKey_814_);
lean_ctor_set(v___x_824_, 4, v___y_810_);
lean_ctor_set(v___x_824_, 5, v___x_823_);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_816_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___boxed(lean_object* v_x_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_x_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
return v_res_932_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__2));
v___x_940_ = l_Lean_stringToMessageData(v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(lean_object* v_x_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
lean_object* v_toCold_946_; lean_object* v_currRecDepth_947_; lean_object* v_ref_948_; uint8_t v_diag_949_; uint8_t v_suppressElabErrors_950_; lean_object* v___x_951_; uint8_t v___x_952_; lean_object* v_ref_953_; lean_object* v___x_954_; lean_object* v___y_956_; 
v_toCold_946_ = lean_ctor_get(v_a_943_, 0);
v_currRecDepth_947_ = lean_ctor_get(v_a_943_, 1);
v_ref_948_ = lean_ctor_get(v_a_943_, 2);
v_diag_949_ = lean_ctor_get_uint8(v_a_943_, sizeof(void*)*3);
v_suppressElabErrors_950_ = lean_ctor_get_uint8(v_a_943_, sizeof(void*)*3 + 1);
v___x_951_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_x_941_);
v___x_952_ = l_Lean_Syntax_isOfKind(v_x_941_, v___x_951_);
v_ref_953_ = l_Lean_replaceRef(v_x_941_, v_ref_948_);
lean_inc(v_currRecDepth_947_);
lean_inc_ref(v_toCold_946_);
v___x_954_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_954_, 0, v_toCold_946_);
lean_ctor_set(v___x_954_, 1, v_currRecDepth_947_);
lean_ctor_set(v___x_954_, 2, v_ref_953_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*3, v_diag_949_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*3 + 1, v_suppressElabErrors_950_);
if (v___x_952_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__3);
v___x_964_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_941_, v___x_963_, v_a_942_, v___x_954_, v_a_944_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec_ref(v_a_942_);
lean_dec(v_x_941_);
return v___x_964_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___y_970_; 
v___x_965_ = lean_unsigned_to_nat(2u);
v___x_966_ = l_Lean_Syntax_getArg(v_x_941_, v___x_965_);
v___x_967_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__5));
lean_inc(v___x_966_);
v___x_968_ = l_Lean_Syntax_isOfKind(v___x_966_, v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec(v___x_966_);
v___x_1106_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_1107_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_941_, v___x_1106_, v_a_942_, v___x_954_, v_a_944_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec_ref(v_a_942_);
lean_dec(v_x_941_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = l_Lean_Syntax_getArg(v___x_966_, v___x_1108_);
lean_dec(v___x_966_);
v___x_1110_ = l_Lean_Syntax_getArgs(v___x_1109_);
lean_dec(v___x_1109_);
v___x_1111_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__8));
v___x_1112_ = lean_array_get_size(v___x_1110_);
v___x_1113_ = lean_nat_dec_lt(v___x_1108_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_dec_ref(v___x_1110_);
v___y_970_ = v___x_1111_;
goto v___jp_969_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; lean_object* v___x_1118_; lean_object* v_snd_1119_; 
v___x_1114_ = lean_box(v___x_1113_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
lean_ctor_set(v___x_1115_, 1, v___x_1111_);
v___x_1116_ = ((size_t)0ULL);
v___x_1117_ = lean_usize_of_nat(v___x_1112_);
v___x_1118_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__1(v___x_968_, v___x_1110_, v___x_1116_, v___x_1117_, v___x_1115_);
lean_dec_ref(v___x_1110_);
v_snd_1119_ = lean_ctor_get(v___x_1118_, 1);
lean_inc(v_snd_1119_);
lean_dec_ref(v___x_1118_);
v___y_970_ = v_snd_1119_;
goto v___jp_969_;
}
}
v___jp_969_:
{
size_t v_sz_971_; size_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v_sz_971_ = lean_array_size(v___y_970_);
v___x_972_ = ((size_t)0ULL);
v___x_973_ = l_unsafeCast___redArg(v___y_970_);
lean_dec_ref(v___y_970_);
v___x_974_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval_spec__0(v_sz_971_, v___x_972_, v___x_973_);
v___x_975_ = l_unsafeCast___redArg(v___x_974_);
lean_dec(v___x_974_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__7);
v___x_977_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_941_, v___x_976_, v_a_942_, v___x_954_, v_a_944_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec_ref(v_a_942_);
lean_dec(v_x_941_);
return v___x_977_;
}
else
{
lean_object* v_val_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_tailKey_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_val_978_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_val_978_);
lean_dec_ref_known(v___x_975_, 1);
v___x_979_ = lean_box(0);
v___x_980_ = lean_array_get_size(v_val_978_);
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_982_ = lean_nat_sub(v___x_980_, v___x_981_);
v_tailKey_983_ = lean_array_get(v___x_979_, v_val_978_, v___x_982_);
lean_dec(v___x_982_);
v___x_984_ = lean_array_pop(v_val_978_);
v___x_985_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys(v___x_984_, v_a_942_, v___x_954_, v_a_944_);
lean_dec_ref(v___x_984_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v_fst_987_; lean_object* v_snd_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1097_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
v_fst_987_ = lean_ctor_get(v_a_986_, 0);
v_snd_988_ = lean_ctor_get(v_a_986_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_a_986_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_990_ = v_a_986_;
v_isShared_991_ = v_isSharedCheck_1097_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_snd_988_);
lean_inc(v_fst_987_);
lean_dec(v_a_986_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1097_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; 
lean_inc(v_tailKey_983_);
v___x_992_ = l_Lake_Toml_elabSimpleKey(v_tailKey_983_, v___x_954_, v_a_944_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1088_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_995_ = v___x_992_;
v_isShared_996_ = v_isSharedCheck_1088_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_992_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1088_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v_keyTys_997_; lean_object* v_arrKeyTys_998_; lean_object* v_arrParents_999_; lean_object* v_currArrKey_1000_; lean_object* v_items_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_keyTys_997_ = lean_ctor_get(v_snd_988_, 0);
v_arrKeyTys_998_ = lean_ctor_get(v_snd_988_, 1);
v_arrParents_999_ = lean_ctor_get(v_snd_988_, 2);
v_currArrKey_1000_ = lean_ctor_get(v_snd_988_, 3);
v_items_1001_ = lean_ctor_get(v_snd_988_, 5);
v___x_1002_ = l_Lean_Name_str___override(v_fst_987_, v_a_993_);
v___x_1003_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_keyTys_997_, v___x_1002_);
if (lean_obj_tag(v___x_1003_) == 1)
{
lean_object* v_val_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1055_; 
v_val_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1055_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_val_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1055_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
uint8_t v___x_1008_; 
v___x_1008_ = lean_unbox(v_val_1004_);
if (v___x_1008_ == 2)
{
lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1033_; 
lean_inc_ref(v_items_1001_);
lean_inc(v_arrParents_999_);
lean_inc(v_arrKeyTys_998_);
lean_del_object(v___x_1006_);
lean_dec(v_val_1004_);
lean_dec(v_tailKey_983_);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_snd_988_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; lean_object* v_unused_1035_; lean_object* v_unused_1036_; lean_object* v_unused_1037_; lean_object* v_unused_1038_; lean_object* v_unused_1039_; 
v_unused_1034_ = lean_ctor_get(v_snd_988_, 5);
lean_dec(v_unused_1034_);
v_unused_1035_ = lean_ctor_get(v_snd_988_, 4);
lean_dec(v_unused_1035_);
v_unused_1036_ = lean_ctor_get(v_snd_988_, 3);
lean_dec(v_unused_1036_);
v_unused_1037_ = lean_ctor_get(v_snd_988_, 2);
lean_dec(v_unused_1037_);
v_unused_1038_ = lean_ctor_get(v_snd_988_, 1);
lean_dec(v_unused_1038_);
v_unused_1039_ = lean_ctor_get(v_snd_988_, 0);
lean_dec(v_unused_1039_);
v___x_1010_ = v_snd_988_;
v_isShared_1011_ = v_isSharedCheck_1033_;
goto v_resetjp_1009_;
}
else
{
lean_dec(v_snd_988_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1033_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrParents_999_, v___x_1002_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_del_object(v___x_1010_);
lean_dec_ref(v_items_1001_);
lean_dec(v_arrParents_999_);
lean_dec(v_arrKeyTys_998_);
lean_del_object(v___x_995_);
lean_del_object(v___x_990_);
lean_dec(v_x_941_);
v___y_956_ = v___x_1002_;
goto v___jp_955_;
}
else
{
lean_object* v_val_1013_; lean_object* v___x_1014_; 
v_val_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_val_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_arrKeyTys_998_, v_val_1013_);
lean_dec(v_val_1013_);
if (lean_obj_tag(v___x_1014_) == 1)
{
lean_object* v_val_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
lean_dec_ref_known(v___x_954_, 3);
v_val_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_val_1015_);
lean_dec_ref_known(v___x_1014_, 1);
v___x_1016_ = lean_box(0);
v___x_1017_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc_n(v_x_941_, 2);
v___x_1018_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_x_941_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_mk_empty_array_with_capacity(v___x_981_);
v___x_1020_ = lean_array_push(v___x_1019_, v___x_1018_);
v___x_1021_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1021_, 0, v_x_941_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
lean_inc_n(v___x_1002_, 2);
v___x_1022_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1022_, 0, v_x_941_);
lean_ctor_set(v___x_1022_, 1, v___x_1002_);
lean_ctor_set(v___x_1022_, 2, v___x_1021_);
v___x_1023_ = lean_array_push(v_items_1001_, v___x_1022_);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 5, v___x_1023_);
lean_ctor_set(v___x_1010_, 4, v___x_1002_);
lean_ctor_set(v___x_1010_, 3, v___x_1002_);
lean_ctor_set(v___x_1010_, 0, v_val_1015_);
v___x_1025_ = v___x_1010_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_val_1015_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v_arrKeyTys_998_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v_arrParents_999_);
lean_ctor_set(v_reuseFailAlloc_1032_, 3, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1032_, 4, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1032_, 5, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1027_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v___x_1025_);
lean_ctor_set(v___x_990_, 0, v___x_1016_);
v___x_1027_ = v___x_990_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1029_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_1027_);
v___x_1029_ = v___x_995_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_dec(v___x_1014_);
lean_del_object(v___x_1010_);
lean_dec_ref(v_items_1001_);
lean_dec(v_arrParents_999_);
lean_dec(v_arrKeyTys_998_);
lean_del_object(v___x_995_);
lean_del_object(v___x_990_);
lean_dec(v_x_941_);
v___y_956_ = v___x_1002_;
goto v___jp_955_;
}
}
}
}
else
{
lean_object* v___x_1040_; uint8_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1051_; 
lean_del_object(v___x_995_);
lean_del_object(v___x_990_);
lean_dec(v_x_941_);
v___x_1040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__0));
v___x_1041_ = lean_unbox(v_val_1004_);
lean_dec(v_val_1004_);
v___x_1042_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_KeyTy_toString(v___x_1041_);
v___x_1043_ = lean_string_append(v___x_1040_, v___x_1042_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__2));
v___x_1045_ = lean_string_append(v___x_1043_, v___x_1044_);
v___x_1046_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1002_, v___x_968_);
v___x_1047_ = lean_string_append(v___x_1045_, v___x_1046_);
lean_dec_ref(v___x_1046_);
v___x_1048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__4));
v___x_1049_ = lean_string_append(v___x_1047_, v___x_1048_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 3);
lean_ctor_set(v___x_1006_, 0, v___x_1049_);
v___x_1051_ = v___x_1006_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1049_);
v___x_1051_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = l_Lean_MessageData_ofFormat(v___x_1051_);
v___x_1053_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_tailKey_983_, v___x_1052_, v_snd_988_, v___x_954_, v_a_944_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_snd_988_);
lean_dec(v_tailKey_983_);
return v___x_1053_;
}
}
}
}
else
{
lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1081_; 
lean_inc_ref(v_items_1001_);
lean_inc(v_currArrKey_1000_);
lean_inc(v_arrParents_999_);
lean_inc(v_arrKeyTys_998_);
lean_inc(v_keyTys_997_);
lean_dec(v___x_1003_);
lean_dec(v_tailKey_983_);
lean_dec_ref_known(v___x_954_, 3);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_snd_988_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; lean_object* v_unused_1083_; lean_object* v_unused_1084_; lean_object* v_unused_1085_; lean_object* v_unused_1086_; lean_object* v_unused_1087_; 
v_unused_1082_ = lean_ctor_get(v_snd_988_, 5);
lean_dec(v_unused_1082_);
v_unused_1083_ = lean_ctor_get(v_snd_988_, 4);
lean_dec(v_unused_1083_);
v_unused_1084_ = lean_ctor_get(v_snd_988_, 3);
lean_dec(v_unused_1084_);
v_unused_1085_ = lean_ctor_get(v_snd_988_, 2);
lean_dec(v_unused_1085_);
v_unused_1086_ = lean_ctor_get(v_snd_988_, 1);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_snd_988_, 0);
lean_dec(v_unused_1087_);
v___x_1057_ = v_snd_988_;
v_isShared_1058_ = v_isSharedCheck_1081_;
goto v_resetjp_1056_;
}
else
{
lean_dec(v_snd_988_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1081_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1059_ = lean_box(0);
v___x_1060_ = 2;
v___x_1061_ = lean_box(v___x_1060_);
lean_inc_n(v___x_1002_, 4);
v___x_1062_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_1002_, v___x_1061_, v_keyTys_997_);
lean_inc(v___x_1062_);
lean_inc(v_currArrKey_1000_);
v___x_1063_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_currArrKey_1000_, v___x_1062_, v_arrKeyTys_998_);
v___x_1064_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_1002_, v_currArrKey_1000_, v_arrParents_999_);
v___x_1065_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc_n(v_x_941_, 2);
v___x_1066_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1066_, 0, v_x_941_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = lean_mk_empty_array_with_capacity(v___x_981_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_1066_);
v___x_1069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1069_, 0, v_x_941_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1070_, 0, v_x_941_);
lean_ctor_set(v___x_1070_, 1, v___x_1002_);
lean_ctor_set(v___x_1070_, 2, v___x_1069_);
v___x_1071_ = lean_array_push(v_items_1001_, v___x_1070_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 5, v___x_1071_);
lean_ctor_set(v___x_1057_, 4, v___x_1002_);
lean_ctor_set(v___x_1057_, 3, v___x_1002_);
lean_ctor_set(v___x_1057_, 2, v___x_1064_);
lean_ctor_set(v___x_1057_, 1, v___x_1063_);
lean_ctor_set(v___x_1057_, 0, v___x_1062_);
v___x_1073_ = v___x_1057_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1080_, 2, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1080_, 3, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1080_, 4, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1080_, 5, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1075_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v___x_1073_);
lean_ctor_set(v___x_990_, 0, v___x_1059_);
v___x_1075_ = v___x_990_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1077_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_1075_);
v___x_1077_ = v___x_995_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_del_object(v___x_990_);
lean_dec(v_snd_988_);
lean_dec(v_fst_987_);
lean_dec(v_tailKey_983_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_x_941_);
v_a_1089_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_992_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_992_);
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
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec(v_tailKey_983_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_x_941_);
v_a_1098_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_985_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_985_);
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
}
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_957_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabHeaderKeys_spec__0___closed__1);
v___x_958_ = l_Lean_MessageData_ofName(v___y_956_);
v___x_959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__1___closed__5);
v___x_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0___redArg(v___x_961_, v___x_954_, v_a_944_);
lean_dec_ref_known(v___x_954_, 3);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___boxed(lean_object* v_x_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_x_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
return v_res_1125_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__0));
v___x_1128_ = l_Lean_stringToMessageData(v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(lean_object* v_x_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; uint8_t v___x_1135_; 
v___x_1134_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_x_1129_);
v___x_1135_ = l_Lean_Syntax_isOfKind(v_x_1129_, v___x_1134_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1136_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_x_1129_);
v___x_1137_ = l_Lean_Syntax_isOfKind(v_x_1129_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_x_1129_);
v___x_1139_ = l_Lean_Syntax_isOfKind(v_x_1129_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___closed__1);
v___x_1141_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0___redArg(v_x_1129_, v___x_1140_, v_a_1130_, v_a_1131_, v_a_1132_);
lean_dec_ref(v_a_1130_);
lean_dec(v_x_1129_);
return v___x_1141_;
}
else
{
lean_object* v___x_1142_; 
v___x_1142_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_x_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
return v___x_1142_;
}
}
else
{
lean_object* v___x_1143_; 
v___x_1143_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_x_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
return v___x_1143_;
}
}
else
{
lean_object* v___x_1144_; 
v___x_1144_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_x_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression___boxed(lean_object* v_x_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabExpression(v_x_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
return v_res_1150_;
}
}
static lean_object* _init_l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = l_unsafeCast___redArg(v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(lean_object* v_ref_1154_, lean_object* v_as_1155_, size_t v_i_1156_, size_t v_stop_1157_, lean_object* v_b_1158_){
_start:
{
lean_object* v___y_1160_; uint8_t v___x_1164_; 
v___x_1164_ = lean_usize_dec_eq(v_i_1156_, v_stop_1157_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v_fst_1166_; lean_object* v_snd_1167_; lean_object* v___x_1168_; 
v___x_1165_ = lean_array_uget_borrowed(v_as_1155_, v_i_1156_);
v_fst_1166_ = lean_ctor_get(v___x_1165_, 0);
v_snd_1167_ = lean_ctor_get(v___x_1165_, 1);
lean_inc(v_fst_1166_);
v___x_1168_ = l_Lean_Name_components(v_fst_1166_);
if (lean_obj_tag(v___x_1168_) == 0)
{
v___y_1160_ = v_b_1158_;
goto v___jp_1159_;
}
else
{
lean_object* v_head_1169_; lean_object* v_tail_1170_; lean_object* v___x_1171_; 
v_head_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_head_1169_);
v_tail_1170_ = lean_ctor_get(v___x_1168_, 1);
lean_inc(v_tail_1170_);
lean_dec_ref_known(v___x_1168_, 2);
lean_inc(v_snd_1167_);
lean_inc(v_ref_1154_);
v___x_1171_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_b_1158_, v_ref_1154_, v_head_1169_, v_tail_1170_, v_snd_1167_);
v___y_1160_ = v___x_1171_;
goto v___jp_1159_;
}
}
else
{
lean_dec(v_ref_1154_);
return v_b_1158_;
}
v___jp_1159_:
{
size_t v___x_1161_; size_t v___x_1162_; 
v___x_1161_ = ((size_t)1ULL);
v___x_1162_ = lean_usize_add(v_i_1156_, v___x_1161_);
v_i_1156_ = v___x_1162_;
v_b_1158_ = v___y_1160_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(size_t v_sz_1172_, size_t v_i_1173_, lean_object* v_bs_1174_){
_start:
{
uint8_t v___x_1175_; 
v___x_1175_ = lean_usize_dec_lt(v_i_1173_, v_sz_1172_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = l_unsafeCast___redArg(v_bs_1174_);
lean_dec_ref(v_bs_1174_);
return v___x_1176_;
}
else
{
lean_object* v_v_1177_; lean_object* v___x_1178_; lean_object* v_bs_x27_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; size_t v___x_1182_; size_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_v_1177_ = lean_array_uget(v_bs_1174_, v_i_1173_);
v___x_1178_ = lean_unsigned_to_nat(0u);
v_bs_x27_1179_ = lean_array_uset(v_bs_1174_, v_i_1173_, v___x_1178_);
v___x_1180_ = l_unsafeCast___redArg(v_v_1177_);
lean_dec(v_v_1177_);
v___x_1181_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v___x_1180_);
v___x_1182_ = ((size_t)1ULL);
v___x_1183_ = lean_usize_add(v_i_1173_, v___x_1182_);
v___x_1184_ = l_unsafeCast___redArg(v___x_1181_);
lean_dec_ref(v___x_1181_);
v___x_1185_ = lean_array_uset(v_bs_x27_1179_, v_i_1173_, v___x_1184_);
v_i_1173_ = v___x_1183_;
v_bs_1174_ = v___x_1185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(lean_object* v_a_1187_){
_start:
{
switch(lean_obj_tag(v_a_1187_))
{
case 6:
{
lean_object* v_xs_1188_; lean_object* v_ref_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1217_; 
v_xs_1188_ = lean_ctor_get(v_a_1187_, 1);
v_ref_1189_ = lean_ctor_get(v_a_1187_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_a_1187_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1191_ = v_a_1187_;
v_isShared_1192_ = v_isSharedCheck_1217_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_xs_1188_);
lean_inc(v_ref_1189_);
lean_dec(v_a_1187_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1217_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_items_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; 
v_items_1193_ = lean_ctor_get(v_xs_1188_, 0);
lean_inc_ref(v_items_1193_);
lean_dec_ref(v_xs_1188_);
v___x_1194_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = lean_array_get_size(v_items_1193_);
v___x_1197_ = lean_nat_dec_lt(v___x_1195_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v_items_1193_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1194_);
v___x_1199_ = v___x_1191_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_ref_1189_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
else
{
uint8_t v___x_1201_; 
v___x_1201_ = lean_nat_dec_le(v___x_1196_, v___x_1196_);
if (v___x_1201_ == 0)
{
if (v___x_1197_ == 0)
{
lean_object* v___x_1203_; 
lean_dec_ref(v_items_1193_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1194_);
v___x_1203_ = v___x_1191_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_ref_1189_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___x_1194_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
else
{
size_t v___x_1205_; size_t v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1205_ = ((size_t)0ULL);
v___x_1206_ = lean_usize_of_nat(v___x_1196_);
lean_inc(v_ref_1189_);
v___x_1207_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1189_, v_items_1193_, v___x_1205_, v___x_1206_, v___x_1194_);
lean_dec_ref(v_items_1193_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1207_);
v___x_1209_ = v___x_1191_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_ref_1189_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
else
{
size_t v___x_1211_; size_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1211_ = ((size_t)0ULL);
v___x_1212_ = lean_usize_of_nat(v___x_1196_);
lean_inc(v_ref_1189_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1189_, v_items_1193_, v___x_1211_, v___x_1212_, v___x_1194_);
lean_dec_ref(v_items_1193_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1213_);
v___x_1215_ = v___x_1191_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_ref_1189_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___x_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
case 5:
{
lean_object* v_ref_1218_; lean_object* v_xs_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1231_; 
v_ref_1218_ = lean_ctor_get(v_a_1187_, 0);
v_xs_1219_ = lean_ctor_get(v_a_1187_, 1);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_a_1187_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1221_ = v_a_1187_;
v_isShared_1222_ = v_isSharedCheck_1231_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_xs_1219_);
lean_inc(v_ref_1218_);
lean_dec(v_a_1187_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1231_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
size_t v_sz_1223_; size_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1229_; 
v_sz_1223_ = lean_array_size(v_xs_1219_);
v___x_1224_ = ((size_t)0ULL);
v___x_1225_ = l_unsafeCast___redArg(v_xs_1219_);
lean_dec_ref(v_xs_1219_);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(v_sz_1223_, v___x_1224_, v___x_1225_);
v___x_1227_ = l_unsafeCast___redArg(v___x_1226_);
lean_dec_ref(v___x_1226_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___x_1227_);
v___x_1229_ = v___x_1221_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_ref_1218_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
default: 
{
return v_a_1187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(lean_object* v_newV_1232_, lean_object* v___x_1233_, lean_object* v_v_x3f_1234_){
_start:
{
if (lean_obj_tag(v_v_x3f_1234_) == 1)
{
lean_object* v_val_1235_; 
v_val_1235_ = lean_ctor_get(v_v_x3f_1234_, 0);
lean_inc(v_val_1235_);
lean_dec_ref_known(v_v_x3f_1234_, 1);
switch(lean_obj_tag(v_val_1235_))
{
case 6:
{
lean_object* v_ref_1236_; lean_object* v_xs_1237_; lean_object* v___x_1238_; 
v_ref_1236_ = lean_ctor_get(v_val_1235_, 0);
lean_inc(v_ref_1236_);
v_xs_1237_ = lean_ctor_get(v_val_1235_, 1);
lean_inc_ref(v_xs_1237_);
lean_dec_ref_known(v_val_1235_, 2);
v___x_1238_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1232_);
if (lean_obj_tag(v___x_1238_) == 6)
{
lean_object* v_xs_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1248_; 
v_xs_1239_ = lean_ctor_get(v___x_1238_, 1);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v___x_1238_, 0);
lean_dec(v_unused_1249_);
v___x_1241_ = v___x_1238_;
v_isShared_1242_ = v_isSharedCheck_1248_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_xs_1239_);
lean_dec(v___x_1238_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1248_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_items_1243_; lean_object* v___x_1244_; lean_object* v___x_1246_; 
v_items_1243_ = lean_ctor_get(v_xs_1239_, 0);
lean_inc_ref(v_items_1243_);
lean_dec_ref(v_xs_1239_);
v___x_1244_ = l_Lake_Toml_RBDict_appendArray___redArg(v___x_1233_, v_xs_1237_, v_items_1243_);
lean_dec_ref(v_items_1243_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v___x_1244_);
lean_ctor_set(v___x_1241_, 0, v_ref_1236_);
v___x_1246_ = v___x_1241_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_ref_1236_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
else
{
lean_dec_ref(v_xs_1237_);
lean_dec(v_ref_1236_);
lean_dec_ref(v___x_1233_);
return v___x_1238_;
}
}
case 5:
{
lean_object* v_ref_1250_; lean_object* v_xs_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1270_; 
lean_dec_ref(v___x_1233_);
v_ref_1250_ = lean_ctor_get(v_val_1235_, 0);
v_xs_1251_ = lean_ctor_get(v_val_1235_, 1);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_val_1235_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1253_ = v_val_1235_;
v_isShared_1254_ = v_isSharedCheck_1270_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_xs_1251_);
lean_inc(v_ref_1250_);
lean_dec(v_val_1235_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1270_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; 
v___x_1255_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1232_);
if (lean_obj_tag(v___x_1255_) == 5)
{
lean_object* v_xs_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1264_; 
lean_del_object(v___x_1253_);
v_xs_1256_ = lean_ctor_get(v___x_1255_, 1);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1264_ == 0)
{
lean_object* v_unused_1265_; 
v_unused_1265_ = lean_ctor_get(v___x_1255_, 0);
lean_dec(v_unused_1265_);
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_xs_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1264_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1260_; lean_object* v___x_1262_; 
v___x_1260_ = l_Array_append___redArg(v_xs_1251_, v_xs_1256_);
lean_dec_ref(v_xs_1256_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v___x_1260_);
lean_ctor_set(v___x_1258_, 0, v_ref_1250_);
v___x_1262_ = v___x_1258_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_ref_1250_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v___x_1260_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1266_ = lean_array_push(v_xs_1251_, v___x_1255_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 1, v___x_1266_);
v___x_1268_ = v___x_1253_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_ref_1250_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
default: 
{
lean_object* v___x_1271_; 
lean_dec(v_val_1235_);
lean_dec_ref(v___x_1233_);
v___x_1271_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1232_);
return v___x_1271_;
}
}
}
else
{
lean_object* v___x_1272_; 
lean_dec(v_v_x3f_1234_);
lean_dec_ref(v___x_1233_);
v___x_1272_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal(v_newV_1232_);
return v___x_1272_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(lean_object* v_newV_1273_, lean_object* v_k_1274_, lean_object* v_t_1275_){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0));
lean_inc_ref(v_t_1275_);
lean_inc(v_k_1274_);
v___x_1277_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v___x_1276_, v_k_1274_, v_t_1275_);
if (lean_obj_tag(v___x_1277_) == 1)
{
lean_object* v_val_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1313_; 
lean_dec(v_k_1274_);
v_val_1278_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1280_ = v___x_1277_;
v_isShared_1281_ = v_isSharedCheck_1313_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_val_1278_);
lean_dec(v___x_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1313_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v_items_1282_; lean_object* v_indices_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1312_; 
v_items_1282_ = lean_ctor_get(v_t_1275_, 0);
v_indices_1283_ = lean_ctor_get(v_t_1275_, 1);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_t_1275_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1285_ = v_t_1275_;
v_isShared_1286_ = v_isSharedCheck_1312_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_indices_1283_);
lean_inc(v_items_1282_);
lean_dec(v_t_1275_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1312_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = lean_array_get_size(v_items_1282_);
v___x_1288_ = lean_nat_dec_lt(v_val_1278_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1290_; 
lean_del_object(v___x_1280_);
lean_dec(v_val_1278_);
lean_dec_ref(v_newV_1273_);
if (v_isShared_1286_ == 0)
{
v___x_1290_ = v___x_1285_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_items_1282_);
lean_ctor_set(v_reuseFailAlloc_1291_, 1, v_indices_1283_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
else
{
lean_object* v_v_1292_; lean_object* v_fst_1293_; lean_object* v_snd_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1311_; 
v_v_1292_ = lean_array_fget(v_items_1282_, v_val_1278_);
v_fst_1293_ = lean_ctor_get(v_v_1292_, 0);
v_snd_1294_ = lean_ctor_get(v_v_1292_, 1);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_v_1292_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1296_ = v_v_1292_;
v_isShared_1297_ = v_isSharedCheck_1311_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_snd_1294_);
lean_inc(v_fst_1293_);
lean_dec(v_v_1292_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1311_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; lean_object* v_xs_x27_1299_; lean_object* v___x_1301_; 
v___x_1298_ = lean_obj_once(&l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1, &l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1_once, _init_l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1);
v_xs_x27_1299_ = lean_array_fset(v_items_1282_, v_val_1278_, v___x_1298_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v_snd_1294_);
v___x_1301_ = v___x_1280_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_snd_1294_);
v___x_1301_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v___x_1302_; lean_object* v___x_1304_; 
v___x_1302_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(v_newV_1273_, v___x_1276_, v___x_1301_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 1, v___x_1302_);
v___x_1304_ = v___x_1296_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_fst_1293_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v___x_1302_);
v___x_1304_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1305_ = lean_array_fset(v_xs_x27_1299_, v_val_1278_, v___x_1304_);
lean_dec(v_val_1278_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1305_);
v___x_1307_ = v___x_1285_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_indices_1283_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
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
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec(v___x_1277_);
v___x_1314_ = lean_box(0);
v___x_1315_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___lam__0(v_newV_1273_, v___x_1276_, v___x_1314_);
v___x_1316_ = l_Lake_Toml_RBDict_push___redArg(v___x_1276_, v_k_1274_, v___x_1315_, v_t_1275_);
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(lean_object* v_kRef_1317_, lean_object* v_head_1318_, lean_object* v_tail_1319_, lean_object* v_newV_1320_, lean_object* v_v_x3f_1321_){
_start:
{
if (lean_obj_tag(v_v_x3f_1321_) == 1)
{
lean_object* v_val_1322_; 
v_val_1322_ = lean_ctor_get(v_v_x3f_1321_, 0);
lean_inc(v_val_1322_);
lean_dec_ref_known(v_v_x3f_1321_, 1);
switch(lean_obj_tag(v_val_1322_))
{
case 5:
{
lean_object* v_ref_1323_; lean_object* v_xs_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v_ref_1323_ = lean_ctor_get(v_val_1322_, 0);
v_xs_1324_ = lean_ctor_get(v_val_1322_, 1);
v___x_1325_ = lean_array_get_size(v_xs_1324_);
v___x_1326_ = lean_unsigned_to_nat(1u);
v___x_1327_ = lean_nat_sub(v___x_1325_, v___x_1326_);
v___x_1328_ = lean_nat_dec_lt(v___x_1327_, v___x_1325_);
if (v___x_1328_ == 0)
{
lean_dec(v___x_1327_);
lean_dec_ref(v_newV_1320_);
lean_dec(v_tail_1319_);
lean_dec(v_head_1318_);
lean_dec(v_kRef_1317_);
return v_val_1322_;
}
else
{
lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1353_; 
lean_inc_ref(v_xs_1324_);
lean_inc(v_ref_1323_);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_val_1322_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; lean_object* v_unused_1355_; 
v_unused_1354_ = lean_ctor_get(v_val_1322_, 1);
lean_dec(v_unused_1354_);
v_unused_1355_ = lean_ctor_get(v_val_1322_, 0);
lean_dec(v_unused_1355_);
v___x_1330_ = v_val_1322_;
v_isShared_1331_ = v_isSharedCheck_1353_;
goto v_resetjp_1329_;
}
else
{
lean_dec(v_val_1322_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1353_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v_v_1332_; lean_object* v___x_1333_; lean_object* v_xs_x27_1334_; lean_object* v___y_1336_; 
v_v_1332_ = lean_array_fget(v_xs_1324_, v___x_1327_);
v___x_1333_ = lean_obj_once(&l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1, &l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1_once, _init_l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1);
v_xs_x27_1334_ = lean_array_fset(v_xs_1324_, v___x_1327_, v___x_1333_);
if (lean_obj_tag(v_v_1332_) == 6)
{
lean_object* v_ref_1341_; lean_object* v_xs_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1350_; 
v_ref_1341_ = lean_ctor_get(v_v_1332_, 0);
v_xs_1342_ = lean_ctor_get(v_v_1332_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_v_1332_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1344_ = v_v_1332_;
v_isShared_1345_ = v_isSharedCheck_1350_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_xs_1342_);
lean_inc(v_ref_1341_);
lean_dec(v_v_1332_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1350_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; lean_object* v___x_1348_; 
v___x_1346_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_xs_1342_, v_kRef_1317_, v_head_1318_, v_tail_1319_, v_newV_1320_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v___x_1346_);
v___x_1348_ = v___x_1344_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_ref_1341_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
v___y_1336_ = v___x_1348_;
goto v___jp_1335_;
}
}
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_v_1332_);
lean_dec_ref(v_newV_1320_);
lean_dec(v_tail_1319_);
lean_dec(v_head_1318_);
v___x_1351_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1352_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1352_, 0, v_kRef_1317_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___y_1336_ = v___x_1352_;
goto v___jp_1335_;
}
v___jp_1335_:
{
lean_object* v___x_1337_; lean_object* v___x_1339_; 
v___x_1337_ = lean_array_fset(v_xs_x27_1334_, v___x_1327_, v___y_1336_);
lean_dec(v___x_1327_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 1, v___x_1337_);
v___x_1339_ = v___x_1330_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_ref_1323_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
}
case 6:
{
lean_object* v_ref_1356_; lean_object* v_xs_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1365_; 
v_ref_1356_ = lean_ctor_get(v_val_1322_, 0);
v_xs_1357_ = lean_ctor_get(v_val_1322_, 1);
v_isSharedCheck_1365_ = !lean_is_exclusive(v_val_1322_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1359_ = v_val_1322_;
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_xs_1357_);
lean_inc(v_ref_1356_);
lean_dec(v_val_1322_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_xs_1357_, v_kRef_1317_, v_head_1318_, v_tail_1319_, v_newV_1320_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_ref_1356_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
default: 
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_dec(v_val_1322_);
v___x_1366_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_kRef_1317_);
v___x_1367_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v___x_1366_, v_kRef_1317_, v_head_1318_, v_tail_1319_, v_newV_1320_);
v___x_1368_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1368_, 0, v_kRef_1317_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
return v___x_1368_;
}
}
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
lean_dec(v_v_x3f_1321_);
v___x_1369_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
lean_inc(v_kRef_1317_);
v___x_1370_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v___x_1369_, v_kRef_1317_, v_head_1318_, v_tail_1319_, v_newV_1320_);
v___x_1371_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1371_, 0, v_kRef_1317_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(lean_object* v_kRef_1372_, lean_object* v_head_1373_, lean_object* v_tail_1374_, lean_object* v_newV_1375_, lean_object* v_k_1376_, lean_object* v_t_1377_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = ((lean_object*)(l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__0));
lean_inc_ref(v_t_1377_);
lean_inc(v_k_1376_);
v___x_1379_ = l_Lake_Toml_RBDict_findIdx_x3f___redArg(v___x_1378_, v_k_1376_, v_t_1377_);
if (lean_obj_tag(v___x_1379_) == 1)
{
lean_object* v_val_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v_k_1376_);
v_val_1380_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1382_ = v___x_1379_;
v_isShared_1383_ = v_isSharedCheck_1415_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_val_1380_);
lean_dec(v___x_1379_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1415_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v_items_1384_; lean_object* v_indices_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1414_; 
v_items_1384_ = lean_ctor_get(v_t_1377_, 0);
v_indices_1385_ = lean_ctor_get(v_t_1377_, 1);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_t_1377_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1387_ = v_t_1377_;
v_isShared_1388_ = v_isSharedCheck_1414_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_indices_1385_);
lean_inc(v_items_1384_);
lean_dec(v_t_1377_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1414_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = lean_array_get_size(v_items_1384_);
v___x_1390_ = lean_nat_dec_lt(v_val_1380_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1392_; 
lean_del_object(v___x_1382_);
lean_dec(v_val_1380_);
lean_dec_ref(v_newV_1375_);
lean_dec(v_tail_1374_);
lean_dec(v_head_1373_);
lean_dec(v_kRef_1372_);
if (v_isShared_1388_ == 0)
{
v___x_1392_ = v___x_1387_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_items_1384_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v_indices_1385_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
lean_object* v_v_1394_; lean_object* v_fst_1395_; lean_object* v_snd_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1413_; 
v_v_1394_ = lean_array_fget(v_items_1384_, v_val_1380_);
v_fst_1395_ = lean_ctor_get(v_v_1394_, 0);
v_snd_1396_ = lean_ctor_get(v_v_1394_, 1);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_v_1394_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1398_ = v_v_1394_;
v_isShared_1399_ = v_isSharedCheck_1413_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_snd_1396_);
lean_inc(v_fst_1395_);
lean_dec(v_v_1394_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1413_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1400_; lean_object* v_xs_x27_1401_; lean_object* v___x_1403_; 
v___x_1400_ = lean_obj_once(&l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1, &l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1_once, _init_l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3___closed__1);
v_xs_x27_1401_ = lean_array_fset(v_items_1384_, v_val_1380_, v___x_1400_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v_snd_1396_);
v___x_1403_ = v___x_1382_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_snd_1396_);
v___x_1403_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1404_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(v_kRef_1372_, v_head_1373_, v_tail_1374_, v_newV_1375_, v___x_1403_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 1, v___x_1404_);
v___x_1406_ = v___x_1398_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_fst_1395_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = lean_array_fset(v_xs_x27_1401_, v_val_1380_, v___x_1406_);
lean_dec(v_val_1380_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 0, v___x_1407_);
v___x_1409_ = v___x_1387_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_indices_1385_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
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
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec(v___x_1379_);
v___x_1416_ = lean_box(0);
v___x_1417_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4___lam__0(v_kRef_1372_, v_head_1373_, v_tail_1374_, v_newV_1375_, v___x_1416_);
v___x_1418_ = l_Lake_Toml_RBDict_push___redArg(v___x_1378_, v_k_1376_, v___x_1417_, v_t_1377_);
return v___x_1418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(lean_object* v_t_1419_, lean_object* v_kRef_1420_, lean_object* v_k_1421_, lean_object* v_ks_1422_, lean_object* v_newV_1423_){
_start:
{
if (lean_obj_tag(v_ks_1422_) == 0)
{
lean_object* v___x_1424_; 
lean_dec(v_kRef_1420_);
v___x_1424_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__3(v_newV_1423_, v_k_1421_, v_t_1419_);
return v___x_1424_;
}
else
{
lean_object* v_head_1425_; lean_object* v_tail_1426_; lean_object* v___x_1427_; 
v_head_1425_ = lean_ctor_get(v_ks_1422_, 0);
lean_inc(v_head_1425_);
v_tail_1426_ = lean_ctor_get(v_ks_1422_, 1);
lean_inc(v_tail_1426_);
lean_dec_ref_known(v_ks_1422_, 2);
v___x_1427_ = l_Lake_Toml_RBDict_alter___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert_spec__4(v_kRef_1420_, v_head_1425_, v_tail_1426_, v_newV_1423_, v_k_1421_, v_t_1419_);
return v___x_1427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1___boxed(lean_object* v_sz_1428_, lean_object* v_i_1429_, lean_object* v_bs_1430_){
_start:
{
size_t v_sz_boxed_1431_; size_t v_i_boxed_1432_; lean_object* v_res_1433_; 
v_sz_boxed_1431_ = lean_unbox_usize(v_sz_1428_);
lean_dec(v_sz_1428_);
v_i_boxed_1432_ = lean_unbox_usize(v_i_1429_);
lean_dec(v_i_1429_);
v_res_1433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__1(v_sz_boxed_1431_, v_i_boxed_1432_, v_bs_1430_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0___boxed(lean_object* v_ref_1434_, lean_object* v_as_1435_, lean_object* v_i_1436_, lean_object* v_stop_1437_, lean_object* v_b_1438_){
_start:
{
size_t v_i_boxed_1439_; size_t v_stop_boxed_1440_; lean_object* v_res_1441_; 
v_i_boxed_1439_ = lean_unbox_usize(v_i_1436_);
lean_dec(v_i_1436_);
v_stop_boxed_1440_ = lean_unbox_usize(v_stop_1437_);
lean_dec(v_stop_1437_);
v_res_1441_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_simpVal_spec__0(v_ref_1434_, v_as_1435_, v_i_boxed_1439_, v_stop_boxed_1440_, v_b_1438_);
lean_dec_ref(v_as_1435_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(lean_object* v_as_1442_, size_t v_i_1443_, size_t v_stop_1444_, lean_object* v_b_1445_){
_start:
{
lean_object* v___y_1447_; uint8_t v___x_1451_; 
v___x_1451_ = lean_usize_dec_eq(v_i_1443_, v_stop_1444_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v_ref_1453_; lean_object* v_key_1454_; lean_object* v_val_1455_; lean_object* v___x_1456_; 
v___x_1452_ = lean_array_uget_borrowed(v_as_1442_, v_i_1443_);
v_ref_1453_ = lean_ctor_get(v___x_1452_, 0);
v_key_1454_ = lean_ctor_get(v___x_1452_, 1);
v_val_1455_ = lean_ctor_get(v___x_1452_, 2);
lean_inc(v_key_1454_);
v___x_1456_ = l_Lean_Name_components(v_key_1454_);
if (lean_obj_tag(v___x_1456_) == 0)
{
v___y_1447_ = v_b_1445_;
goto v___jp_1446_;
}
else
{
lean_object* v_head_1457_; lean_object* v_tail_1458_; lean_object* v___x_1459_; 
v_head_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_head_1457_);
v_tail_1458_ = lean_ctor_get(v___x_1456_, 1);
lean_inc(v_tail_1458_);
lean_dec_ref_known(v___x_1456_, 2);
lean_inc_ref(v_val_1455_);
lean_inc(v_ref_1453_);
v___x_1459_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_insert(v_b_1445_, v_ref_1453_, v_head_1457_, v_tail_1458_, v_val_1455_);
v___y_1447_ = v___x_1459_;
goto v___jp_1446_;
}
}
else
{
return v_b_1445_;
}
v___jp_1446_:
{
size_t v___x_1448_; size_t v___x_1449_; 
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1443_, v___x_1448_);
v_i_1443_ = v___x_1449_;
v_b_1445_ = v___y_1447_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0___boxed(lean_object* v_as_1460_, lean_object* v_i_1461_, lean_object* v_stop_1462_, lean_object* v_b_1463_){
_start:
{
size_t v_i_boxed_1464_; size_t v_stop_boxed_1465_; lean_object* v_res_1466_; 
v_i_boxed_1464_ = lean_unbox_usize(v_i_1461_);
lean_dec(v_i_1461_);
v_stop_boxed_1465_ = lean_unbox_usize(v_stop_1462_);
lean_dec(v_stop_1462_);
v_res_1466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_as_1460_, v_i_boxed_1464_, v_stop_boxed_1465_, v_b_1463_);
lean_dec_ref(v_as_1460_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(lean_object* v_items_1467_){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1468_ = lean_obj_once(&l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0, &l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0_once, _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__0);
v___x_1469_ = lean_unsigned_to_nat(0u);
v___x_1470_ = lean_array_get_size(v_items_1467_);
v___x_1471_ = lean_nat_dec_lt(v___x_1469_, v___x_1470_);
if (v___x_1471_ == 0)
{
return v___x_1468_;
}
else
{
uint8_t v___x_1472_; 
v___x_1472_ = lean_nat_dec_le(v___x_1470_, v___x_1470_);
if (v___x_1472_ == 0)
{
if (v___x_1471_ == 0)
{
return v___x_1468_;
}
else
{
size_t v___x_1473_; size_t v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = ((size_t)0ULL);
v___x_1474_ = lean_usize_of_nat(v___x_1470_);
v___x_1475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_items_1467_, v___x_1473_, v___x_1474_, v___x_1468_);
return v___x_1475_;
}
}
else
{
size_t v___x_1476_; size_t v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = ((size_t)0ULL);
v___x_1477_ = lean_usize_of_nat(v___x_1470_);
v___x_1478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable_spec__0(v_items_1467_, v___x_1476_, v___x_1477_, v___x_1468_);
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable___boxed(lean_object* v_items_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1479_);
lean_dec_ref(v_items_1479_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(lean_object* v_x_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = lean_obj_once(&l_Lake_Toml_instInhabitedElabState_default___closed__2, &l_Lake_Toml_instInhabitedElabState_default___closed__2_once, _init_l_Lake_Toml_instInhabitedElabState_default___closed__2);
lean_inc(v_a_1483_);
lean_inc_ref(v_a_1482_);
v___x_1486_ = lean_apply_4(v_x_1481_, v___x_1485_, v_a_1482_, v_a_1483_, lean_box(0));
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1497_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1497_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1497_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v_snd_1491_; lean_object* v_items_1492_; lean_object* v___x_1493_; lean_object* v___x_1495_; 
v_snd_1491_ = lean_ctor_get(v_a_1487_, 1);
lean_inc(v_snd_1491_);
lean_dec(v_a_1487_);
v_items_1492_ = lean_ctor_get(v_snd_1491_, 5);
lean_inc_ref(v_items_1492_);
lean_dec(v_snd_1491_);
v___x_1493_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1492_);
lean_dec_ref(v_items_1492_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1493_);
v___x_1495_ = v___x_1489_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
v_a_1498_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1486_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1486_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run___boxed(lean_object* v_x_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_TomlElabM_run(v_x_1506_, v_a_1507_, v_a_1508_);
lean_dec(v_a_1508_);
lean_dec_ref(v_a_1507_);
return v_res_1510_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(uint8_t v_suppressElabErrors_1519_, uint8_t v___y_1520_, lean_object* v_x_1521_){
_start:
{
if (lean_obj_tag(v_x_1521_) == 1)
{
lean_object* v_pre_1522_; 
v_pre_1522_ = lean_ctor_get(v_x_1521_, 0);
switch(lean_obj_tag(v_pre_1522_))
{
case 1:
{
lean_object* v_pre_1523_; 
v_pre_1523_ = lean_ctor_get(v_pre_1522_, 0);
switch(lean_obj_tag(v_pre_1523_))
{
case 0:
{
lean_object* v_str_1524_; lean_object* v_str_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_str_1524_ = lean_ctor_get(v_x_1521_, 1);
v_str_1525_ = lean_ctor_get(v_pre_1522_, 1);
v___x_1526_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__0));
v___x_1527_ = lean_string_dec_eq(v_str_1525_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1528_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__1));
v___x_1529_ = lean_string_dec_eq(v_str_1525_, v___x_1528_);
if (v___x_1529_ == 0)
{
return v___x_1529_;
}
else
{
lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__2));
v___x_1531_ = lean_string_dec_eq(v_str_1524_, v___x_1530_);
if (v___x_1531_ == 0)
{
return v___x_1531_;
}
else
{
return v_suppressElabErrors_1519_;
}
}
}
else
{
lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1532_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__3));
v___x_1533_ = lean_string_dec_eq(v_str_1524_, v___x_1532_);
if (v___x_1533_ == 0)
{
return v___x_1533_;
}
else
{
return v_suppressElabErrors_1519_;
}
}
}
case 1:
{
lean_object* v_pre_1534_; 
v_pre_1534_ = lean_ctor_get(v_pre_1523_, 0);
if (lean_obj_tag(v_pre_1534_) == 0)
{
lean_object* v_str_1535_; lean_object* v_str_1536_; lean_object* v_str_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v_str_1535_ = lean_ctor_get(v_x_1521_, 1);
v_str_1536_ = lean_ctor_get(v_pre_1522_, 1);
v_str_1537_ = lean_ctor_get(v_pre_1523_, 1);
v___x_1538_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__4));
v___x_1539_ = lean_string_dec_eq(v_str_1537_, v___x_1538_);
if (v___x_1539_ == 0)
{
return v___x_1539_;
}
else
{
lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__5));
v___x_1541_ = lean_string_dec_eq(v_str_1536_, v___x_1540_);
if (v___x_1541_ == 0)
{
return v___x_1541_;
}
else
{
lean_object* v___x_1542_; uint8_t v___x_1543_; 
v___x_1542_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__6));
v___x_1543_ = lean_string_dec_eq(v_str_1535_, v___x_1542_);
if (v___x_1543_ == 0)
{
return v___x_1543_;
}
else
{
return v_suppressElabErrors_1519_;
}
}
}
}
else
{
return v___y_1520_;
}
}
default: 
{
return v___y_1520_;
}
}
}
case 0:
{
lean_object* v_str_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v_str_1544_ = lean_ctor_get(v_x_1521_, 1);
v___x_1545_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___closed__7));
v___x_1546_ = lean_string_dec_eq(v_str_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
return v___x_1546_;
}
else
{
return v_suppressElabErrors_1519_;
}
}
default: 
{
return v___y_1520_;
}
}
}
else
{
return v___y_1520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed(lean_object* v_suppressElabErrors_1547_, lean_object* v___y_1548_, lean_object* v_x_1549_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1550_; uint8_t v___y_10665__boxed_1551_; uint8_t v_res_1552_; lean_object* v_r_1553_; 
v_suppressElabErrors_boxed_1550_ = lean_unbox(v_suppressElabErrors_1547_);
v___y_10665__boxed_1551_ = lean_unbox(v___y_1548_);
v_res_1552_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0(v_suppressElabErrors_boxed_1550_, v___y_10665__boxed_1551_, v_x_1549_);
lean_dec(v_x_1549_);
v_r_1553_ = lean_box(v_res_1552_);
return v_r_1553_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(lean_object* v_opts_1554_, lean_object* v_opt_1555_){
_start:
{
lean_object* v_name_1556_; lean_object* v_defValue_1557_; lean_object* v_map_1558_; lean_object* v___x_1559_; 
v_name_1556_ = lean_ctor_get(v_opt_1555_, 0);
v_defValue_1557_ = lean_ctor_get(v_opt_1555_, 1);
v_map_1558_ = lean_ctor_get(v_opts_1554_, 0);
v___x_1559_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1558_, v_name_1556_);
if (lean_obj_tag(v___x_1559_) == 0)
{
uint8_t v___x_1560_; 
v___x_1560_ = lean_unbox(v_defValue_1557_);
return v___x_1560_;
}
else
{
lean_object* v_val_1561_; 
v_val_1561_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_val_1561_);
lean_dec_ref_known(v___x_1559_, 1);
if (lean_obj_tag(v_val_1561_) == 1)
{
uint8_t v_v_1562_; 
v_v_1562_ = lean_ctor_get_uint8(v_val_1561_, 0);
lean_dec_ref_known(v_val_1561_, 0);
return v_v_1562_;
}
else
{
uint8_t v___x_1563_; 
lean_dec(v_val_1561_);
v___x_1563_ = lean_unbox(v_defValue_1557_);
return v___x_1563_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_1564_, lean_object* v_opt_1565_){
_start:
{
uint8_t v_res_1566_; lean_object* v_r_1567_; 
v_res_1566_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(v_opts_1564_, v_opt_1565_);
lean_dec_ref(v_opt_1565_);
lean_dec_ref(v_opts_1564_);
v_r_1567_ = lean_box(v_res_1566_);
return v_r_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(lean_object* v_ref_1569_, lean_object* v_msgData_1570_, uint8_t v_severity_1571_, uint8_t v_isSilent_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_a_1578_; uint8_t v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; uint8_t v___y_1587_; lean_object* v___y_1588_; lean_object* v_currNamespace_1589_; lean_object* v_openDecls_1590_; lean_object* v___y_1591_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; uint8_t v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; uint8_t v___y_1622_; lean_object* v___y_1623_; uint8_t v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; uint8_t v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; uint8_t v___y_1648_; lean_object* v___y_1649_; uint8_t v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; uint8_t v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; uint8_t v___y_1662_; uint8_t v___y_1663_; uint8_t v___x_1668_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; uint8_t v___y_1675_; lean_object* v___y_1676_; uint8_t v___y_1677_; uint8_t v___y_1678_; uint8_t v___y_1680_; uint8_t v___x_1699_; 
v___x_1668_ = 2;
v___x_1699_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1571_, v___x_1668_);
if (v___x_1699_ == 0)
{
v___y_1680_ = v___x_1699_;
goto v___jp_1679_;
}
else
{
uint8_t v___x_1700_; 
lean_inc_ref(v_msgData_1570_);
v___x_1700_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1570_);
v___y_1680_ = v___x_1700_;
goto v___jp_1679_;
}
v___jp_1577_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v_a_1578_);
lean_ctor_set(v___x_1579_, 1, v___y_1573_);
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
return v___x_1580_;
}
v___jp_1581_:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v_env_1596_; lean_object* v_nextMacroScope_1597_; lean_object* v_ngen_1598_; lean_object* v_auxDeclNGen_1599_; lean_object* v_traceState_1600_; lean_object* v_cache_1601_; lean_object* v_messages_1602_; lean_object* v_infoState_1603_; lean_object* v_snapshotTasks_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1614_; 
lean_inc(v_openDecls_1590_);
lean_inc(v_currNamespace_1589_);
v___x_1592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1592_, 0, v_currNamespace_1589_);
lean_ctor_set(v___x_1592_, 1, v_openDecls_1590_);
v___x_1593_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
lean_ctor_set(v___x_1593_, 1, v___y_1583_);
lean_inc_ref(v___y_1585_);
lean_inc_ref(v___y_1584_);
v___x_1594_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1594_, 0, v___y_1584_);
lean_ctor_set(v___x_1594_, 1, v___y_1586_);
lean_ctor_set(v___x_1594_, 2, v___y_1588_);
lean_ctor_set(v___x_1594_, 3, v___y_1585_);
lean_ctor_set(v___x_1594_, 4, v___x_1593_);
lean_ctor_set_uint8(v___x_1594_, sizeof(void*)*5, v___y_1582_);
lean_ctor_set_uint8(v___x_1594_, sizeof(void*)*5 + 1, v___y_1587_);
lean_ctor_set_uint8(v___x_1594_, sizeof(void*)*5 + 2, v_isSilent_1572_);
v___x_1595_ = lean_st_ref_take(v___y_1591_);
v_env_1596_ = lean_ctor_get(v___x_1595_, 0);
v_nextMacroScope_1597_ = lean_ctor_get(v___x_1595_, 1);
v_ngen_1598_ = lean_ctor_get(v___x_1595_, 2);
v_auxDeclNGen_1599_ = lean_ctor_get(v___x_1595_, 3);
v_traceState_1600_ = lean_ctor_get(v___x_1595_, 4);
v_cache_1601_ = lean_ctor_get(v___x_1595_, 5);
v_messages_1602_ = lean_ctor_get(v___x_1595_, 6);
v_infoState_1603_ = lean_ctor_get(v___x_1595_, 7);
v_snapshotTasks_1604_ = lean_ctor_get(v___x_1595_, 8);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1606_ = v___x_1595_;
v_isShared_1607_ = v_isSharedCheck_1614_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_snapshotTasks_1604_);
lean_inc(v_infoState_1603_);
lean_inc(v_messages_1602_);
lean_inc(v_cache_1601_);
lean_inc(v_traceState_1600_);
lean_inc(v_auxDeclNGen_1599_);
lean_inc(v_ngen_1598_);
lean_inc(v_nextMacroScope_1597_);
lean_inc(v_env_1596_);
lean_dec(v___x_1595_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1614_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1611_; 
v___x_1608_ = lean_box(0);
v___x_1609_ = l_Lean_MessageLog_add(v___x_1594_, v_messages_1602_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 6, v___x_1609_);
v___x_1611_ = v___x_1606_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_env_1596_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_nextMacroScope_1597_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_ngen_1598_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v_auxDeclNGen_1599_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v_traceState_1600_);
lean_ctor_set(v_reuseFailAlloc_1613_, 5, v_cache_1601_);
lean_ctor_set(v_reuseFailAlloc_1613_, 6, v___x_1609_);
lean_ctor_set(v_reuseFailAlloc_1613_, 7, v_infoState_1603_);
lean_ctor_set(v_reuseFailAlloc_1613_, 8, v_snapshotTasks_1604_);
v___x_1611_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_st_ref_put(v___y_1591_, v___x_1611_);
v_a_1578_ = v___x_1608_;
goto v___jp_1577_;
}
}
}
v___jp_1615_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1640_; 
v___x_1626_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1570_);
v___x_1627_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v___x_1626_, v___y_1574_, v___y_1575_);
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1640_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1640_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
lean_inc_ref_n(v___y_1623_, 2);
v___x_1632_ = l_Lean_FileMap_toPosition(v___y_1623_, v___y_1621_);
lean_dec(v___y_1621_);
v___x_1633_ = l_Lean_FileMap_toPosition(v___y_1623_, v___y_1625_);
lean_dec(v___y_1625_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set_tag(v___x_1630_, 1);
lean_ctor_set(v___x_1630_, 0, v___x_1633_);
v___x_1635_ = v___x_1630_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
lean_object* v___x_1636_; 
v___x_1636_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___closed__0));
if (v___y_1624_ == 0)
{
lean_dec_ref(v___y_1617_);
v___y_1582_ = v___y_1619_;
v___y_1583_ = v_a_1628_;
v___y_1584_ = v___y_1620_;
v___y_1585_ = v___x_1636_;
v___y_1586_ = v___x_1632_;
v___y_1587_ = v___y_1622_;
v___y_1588_ = v___x_1635_;
v_currNamespace_1589_ = v___y_1616_;
v_openDecls_1590_ = v___y_1618_;
v___y_1591_ = v___y_1575_;
goto v___jp_1581_;
}
else
{
uint8_t v___x_1637_; 
lean_inc(v_a_1628_);
v___x_1637_ = l_Lean_MessageData_hasTag(v___y_1617_, v_a_1628_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; 
lean_dec_ref(v___x_1635_);
lean_dec_ref(v___x_1632_);
lean_dec(v_a_1628_);
v___x_1638_ = lean_box(0);
v_a_1578_ = v___x_1638_;
goto v___jp_1577_;
}
else
{
v___y_1582_ = v___y_1619_;
v___y_1583_ = v_a_1628_;
v___y_1584_ = v___y_1620_;
v___y_1585_ = v___x_1636_;
v___y_1586_ = v___x_1632_;
v___y_1587_ = v___y_1622_;
v___y_1588_ = v___x_1635_;
v_currNamespace_1589_ = v___y_1616_;
v_openDecls_1590_ = v___y_1618_;
v___y_1591_ = v___y_1575_;
goto v___jp_1581_;
}
}
}
}
}
v___jp_1641_:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lean_Syntax_getTailPos_x3f(v___y_1647_, v___y_1645_);
lean_dec(v___y_1647_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_inc(v___y_1651_);
v___y_1616_ = v___y_1642_;
v___y_1617_ = v___y_1644_;
v___y_1618_ = v___y_1643_;
v___y_1619_ = v___y_1645_;
v___y_1620_ = v___y_1646_;
v___y_1621_ = v___y_1651_;
v___y_1622_ = v___y_1648_;
v___y_1623_ = v___y_1649_;
v___y_1624_ = v___y_1650_;
v___y_1625_ = v___y_1651_;
goto v___jp_1615_;
}
else
{
lean_object* v_val_1653_; 
v_val_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_val_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v___y_1616_ = v___y_1642_;
v___y_1617_ = v___y_1644_;
v___y_1618_ = v___y_1643_;
v___y_1619_ = v___y_1645_;
v___y_1620_ = v___y_1646_;
v___y_1621_ = v___y_1651_;
v___y_1622_ = v___y_1648_;
v___y_1623_ = v___y_1649_;
v___y_1624_ = v___y_1650_;
v___y_1625_ = v_val_1653_;
goto v___jp_1615_;
}
}
v___jp_1654_:
{
lean_object* v_ref_1664_; lean_object* v___x_1665_; 
v_ref_1664_ = l_Lean_replaceRef(v_ref_1569_, v___y_1660_);
v___x_1665_ = l_Lean_Syntax_getPos_x3f(v_ref_1664_, v___y_1658_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_unsigned_to_nat(0u);
v___y_1642_ = v___y_1655_;
v___y_1643_ = v___y_1657_;
v___y_1644_ = v___y_1656_;
v___y_1645_ = v___y_1658_;
v___y_1646_ = v___y_1659_;
v___y_1647_ = v_ref_1664_;
v___y_1648_ = v___y_1663_;
v___y_1649_ = v___y_1661_;
v___y_1650_ = v___y_1662_;
v___y_1651_ = v___x_1666_;
goto v___jp_1641_;
}
else
{
lean_object* v_val_1667_; 
v_val_1667_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_val_1667_);
lean_dec_ref_known(v___x_1665_, 1);
v___y_1642_ = v___y_1655_;
v___y_1643_ = v___y_1657_;
v___y_1644_ = v___y_1656_;
v___y_1645_ = v___y_1658_;
v___y_1646_ = v___y_1659_;
v___y_1647_ = v_ref_1664_;
v___y_1648_ = v___y_1663_;
v___y_1649_ = v___y_1661_;
v___y_1650_ = v___y_1662_;
v___y_1651_ = v_val_1667_;
goto v___jp_1641_;
}
}
v___jp_1669_:
{
if (v___y_1678_ == 0)
{
v___y_1655_ = v___y_1671_;
v___y_1656_ = v___y_1674_;
v___y_1657_ = v___y_1673_;
v___y_1658_ = v___y_1675_;
v___y_1659_ = v___y_1670_;
v___y_1660_ = v___y_1676_;
v___y_1661_ = v___y_1672_;
v___y_1662_ = v___y_1677_;
v___y_1663_ = v_severity_1571_;
goto v___jp_1654_;
}
else
{
v___y_1655_ = v___y_1671_;
v___y_1656_ = v___y_1674_;
v___y_1657_ = v___y_1673_;
v___y_1658_ = v___y_1675_;
v___y_1659_ = v___y_1670_;
v___y_1660_ = v___y_1676_;
v___y_1661_ = v___y_1672_;
v___y_1662_ = v___y_1677_;
v___y_1663_ = v___x_1668_;
goto v___jp_1654_;
}
}
v___jp_1679_:
{
if (v___y_1680_ == 0)
{
lean_object* v_toCold_1681_; lean_object* v_ref_1682_; uint8_t v_suppressElabErrors_1683_; lean_object* v_fileName_1684_; lean_object* v_fileMap_1685_; lean_object* v_options_1686_; lean_object* v_currNamespace_1687_; lean_object* v_openDecls_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___f_1691_; uint8_t v___x_1692_; uint8_t v___x_1693_; 
v_toCold_1681_ = lean_ctor_get(v___y_1574_, 0);
v_ref_1682_ = lean_ctor_get(v___y_1574_, 2);
v_suppressElabErrors_1683_ = lean_ctor_get_uint8(v___y_1574_, sizeof(void*)*3 + 1);
v_fileName_1684_ = lean_ctor_get(v_toCold_1681_, 0);
v_fileMap_1685_ = lean_ctor_get(v_toCold_1681_, 1);
v_options_1686_ = lean_ctor_get(v_toCold_1681_, 2);
v_currNamespace_1687_ = lean_ctor_get(v_toCold_1681_, 4);
v_openDecls_1688_ = lean_ctor_get(v_toCold_1681_, 5);
v___x_1689_ = lean_box(v_suppressElabErrors_1683_);
v___x_1690_ = lean_box(v___y_1680_);
v___f_1691_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1691_, 0, v___x_1689_);
lean_closure_set(v___f_1691_, 1, v___x_1690_);
v___x_1692_ = 1;
v___x_1693_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1571_, v___x_1692_);
if (v___x_1693_ == 0)
{
v___y_1670_ = v_fileName_1684_;
v___y_1671_ = v_currNamespace_1687_;
v___y_1672_ = v_fileMap_1685_;
v___y_1673_ = v_openDecls_1688_;
v___y_1674_ = v___f_1691_;
v___y_1675_ = v___y_1680_;
v___y_1676_ = v_ref_1682_;
v___y_1677_ = v_suppressElabErrors_1683_;
v___y_1678_ = v___x_1693_;
goto v___jp_1669_;
}
else
{
lean_object* v___x_1694_; uint8_t v___x_1695_; 
v___x_1694_ = l_Lean_warningAsError;
v___x_1695_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2_spec__3(v_options_1686_, v___x_1694_);
v___y_1670_ = v_fileName_1684_;
v___y_1671_ = v_currNamespace_1687_;
v___y_1672_ = v_fileMap_1685_;
v___y_1673_ = v_openDecls_1688_;
v___y_1674_ = v___f_1691_;
v___y_1675_ = v___y_1680_;
v___y_1676_ = v_ref_1682_;
v___y_1677_ = v_suppressElabErrors_1683_;
v___y_1678_ = v___x_1695_;
goto v___jp_1669_;
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec_ref(v_msgData_1570_);
v___x_1696_ = lean_box(0);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v___y_1573_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2___boxed(lean_object* v_ref_1701_, lean_object* v_msgData_1702_, lean_object* v_severity_1703_, lean_object* v_isSilent_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v_severity_boxed_1709_; uint8_t v_isSilent_boxed_1710_; lean_object* v_res_1711_; 
v_severity_boxed_1709_ = lean_unbox(v_severity_1703_);
v_isSilent_boxed_1710_ = lean_unbox(v_isSilent_1704_);
v_res_1711_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(v_ref_1701_, v_msgData_1702_, v_severity_boxed_1709_, v_isSilent_boxed_1710_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v_ref_1701_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(lean_object* v_ref_1712_, lean_object* v_msgData_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
uint8_t v___x_1718_; uint8_t v___x_1719_; lean_object* v___x_1720_; 
v___x_1718_ = 2;
v___x_1719_ = 0;
v___x_1720_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1_spec__2(v_ref_1712_, v_msgData_1713_, v___x_1718_, v___x_1719_, v___y_1714_, v___y_1715_, v___y_1716_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1___boxed(lean_object* v_ref_1721_, lean_object* v_msgData_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v_ref_1721_, v_msgData_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v_ref_1721_);
return v_res_1727_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__0));
v___x_1731_ = l_Lean_MessageData_ofFormat(v___x_1730_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(uint8_t v_recovering_1732_, lean_object* v_as_1733_, size_t v_sz_1734_, size_t v_i_1735_, uint8_t v_b_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_snd_1742_; lean_object* v_snd_1743_; lean_object* v___y_1749_; uint8_t v___y_1750_; lean_object* v_a_1767_; uint8_t v___x_1770_; 
v___x_1770_ = lean_usize_dec_lt(v_i_1735_, v_sz_1734_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_box(v_b_1736_);
v___x_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
lean_ctor_set(v___x_1772_, 1, v___y_1737_);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
return v___x_1773_;
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1775_; uint8_t v_recovering_1776_; 
v_a_1774_ = lean_array_uget_borrowed(v_as_1733_, v_i_1735_);
v___x_1775_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval___closed__1));
lean_inc(v_a_1774_);
v_recovering_1776_ = l_Lean_Syntax_isOfKind(v_a_1774_, v___x_1775_);
if (v_recovering_1776_ == 0)
{
lean_object* v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable___closed__2));
lean_inc(v_a_1774_);
v___x_1778_ = l_Lean_Syntax_isOfKind(v_a_1774_, v___x_1777_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = ((lean_object*)(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable___closed__1));
lean_inc(v_a_1774_);
v___x_1780_ = l_Lean_Syntax_isOfKind(v_a_1774_, v___x_1779_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___closed__1);
lean_inc_ref(v___y_1737_);
v___x_1782_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v_a_1774_, v___x_1781_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v_snd_1784_; lean_object* v___x_1785_; 
lean_dec_ref(v___y_1737_);
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1782_, 1);
v_snd_1784_ = lean_ctor_get(v_a_1783_, 1);
lean_inc(v_snd_1784_);
lean_dec(v_a_1783_);
v___x_1785_ = lean_box(v_b_1736_);
v_snd_1742_ = v___x_1785_;
v_snd_1743_ = v_snd_1784_;
goto v___jp_1741_;
}
else
{
lean_object* v_a_1786_; 
v_a_1786_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1782_, 1);
v_a_1767_ = v_a_1786_;
goto v___jp_1766_;
}
}
else
{
lean_object* v___x_1787_; 
lean_inc_ref(v___y_1737_);
lean_inc(v_a_1774_);
v___x_1787_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabArrayTable(v_a_1774_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v_snd_1789_; lean_object* v___x_1790_; 
lean_dec_ref(v___y_1737_);
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v_snd_1789_ = lean_ctor_get(v_a_1788_, 1);
lean_inc(v_snd_1789_);
lean_dec(v_a_1788_);
v___x_1790_ = lean_box(v_recovering_1776_);
v_snd_1742_ = v___x_1790_;
v_snd_1743_ = v_snd_1789_;
goto v___jp_1741_;
}
else
{
lean_object* v_a_1791_; 
v_a_1791_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1787_, 1);
v_a_1767_ = v_a_1791_;
goto v___jp_1766_;
}
}
}
else
{
lean_object* v___x_1792_; 
lean_inc_ref(v___y_1737_);
lean_inc(v_a_1774_);
v___x_1792_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabStdTable(v_a_1774_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v_snd_1794_; lean_object* v___x_1795_; 
lean_dec_ref(v___y_1737_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v_snd_1794_ = lean_ctor_get(v_a_1793_, 1);
lean_inc(v_snd_1794_);
lean_dec(v_a_1793_);
v___x_1795_ = lean_box(v_recovering_1776_);
v_snd_1742_ = v___x_1795_;
v_snd_1743_ = v_snd_1794_;
goto v___jp_1741_;
}
else
{
lean_object* v_a_1796_; 
v_a_1796_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1792_, 1);
v_a_1767_ = v_a_1796_;
goto v___jp_1766_;
}
}
}
else
{
if (v_b_1736_ == 0)
{
lean_object* v___x_1797_; 
lean_inc_ref(v___y_1737_);
lean_inc(v_a_1774_);
v___x_1797_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabKeyval(v_a_1774_, v___y_1737_, v___y_1738_, v___y_1739_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v_a_1798_; lean_object* v_snd_1799_; lean_object* v___x_1800_; 
lean_dec_ref(v___y_1737_);
v_a_1798_ = lean_ctor_get(v___x_1797_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v___x_1797_, 1);
v_snd_1799_ = lean_ctor_get(v_a_1798_, 1);
lean_inc(v_snd_1799_);
lean_dec(v_a_1798_);
v___x_1800_ = lean_box(v_b_1736_);
v_snd_1742_ = v___x_1800_;
v_snd_1743_ = v_snd_1799_;
goto v___jp_1741_;
}
else
{
lean_object* v_a_1801_; 
v_a_1801_ = lean_ctor_get(v___x_1797_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1797_, 1);
v_a_1767_ = v_a_1801_;
goto v___jp_1766_;
}
}
else
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_box(v_b_1736_);
v_snd_1742_ = v___x_1802_;
v_snd_1743_ = v___y_1737_;
goto v___jp_1741_;
}
}
}
v___jp_1741_:
{
size_t v___x_1744_; size_t v___x_1745_; uint8_t v___x_1746_; 
v___x_1744_ = ((size_t)1ULL);
v___x_1745_ = lean_usize_add(v_i_1735_, v___x_1744_);
v___x_1746_ = lean_unbox(v_snd_1742_);
lean_dec(v_snd_1742_);
v_i_1735_ = v___x_1745_;
v_b_1736_ = v___x_1746_;
v___y_1737_ = v_snd_1743_;
goto _start;
}
v___jp_1748_:
{
if (v___y_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1751_ = l_Lean_Exception_getRef(v___y_1749_);
v___x_1752_ = l_Lean_Exception_toMessageData(v___y_1749_);
v___x_1753_ = l_Lean_logErrorAt___at___00Lake_Toml_elabToml_spec__1(v___x_1751_, v___x_1752_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec(v___x_1751_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v_snd_1755_; lean_object* v___x_1756_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v_snd_1755_ = lean_ctor_get(v_a_1754_, 1);
lean_inc(v_snd_1755_);
lean_dec(v_a_1754_);
v___x_1756_ = lean_box(v_recovering_1732_);
v_snd_1742_ = v___x_1756_;
v_snd_1743_ = v_snd_1755_;
goto v___jp_1741_;
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
v_a_1757_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1753_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1753_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
else
{
lean_object* v___x_1765_; 
lean_dec_ref(v___y_1737_);
v___x_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___y_1749_);
return v___x_1765_;
}
}
v___jp_1766_:
{
uint8_t v___x_1768_; 
v___x_1768_ = l_Lean_Exception_isInterrupt(v_a_1767_);
if (v___x_1768_ == 0)
{
uint8_t v___x_1769_; 
lean_inc_ref(v_a_1767_);
v___x_1769_ = l_Lean_Exception_isRuntime(v_a_1767_);
v___y_1749_ = v_a_1767_;
v___y_1750_ = v___x_1769_;
goto v___jp_1748_;
}
else
{
v___y_1749_ = v_a_1767_;
v___y_1750_ = v___x_1768_;
goto v___jp_1748_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2___boxed(lean_object* v_recovering_1803_, lean_object* v_as_1804_, lean_object* v_sz_1805_, lean_object* v_i_1806_, lean_object* v_b_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v_recovering_boxed_1812_; size_t v_sz_boxed_1813_; size_t v_i_boxed_1814_; uint8_t v_b_boxed_1815_; lean_object* v_res_1816_; 
v_recovering_boxed_1812_ = lean_unbox(v_recovering_1803_);
v_sz_boxed_1813_ = lean_unbox_usize(v_sz_1805_);
lean_dec(v_sz_1805_);
v_i_boxed_1814_ = lean_unbox_usize(v_i_1806_);
lean_dec(v_i_1806_);
v_b_boxed_1815_ = lean_unbox(v_b_1807_);
v_res_1816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(v_recovering_boxed_1812_, v_as_1804_, v_sz_boxed_1813_, v_i_boxed_1814_, v_b_boxed_1815_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec_ref(v_as_1804_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(lean_object* v_msg_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_ref_1821_; lean_object* v___x_1822_; lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1831_; 
v_ref_1821_ = lean_ctor_get(v___y_1818_, 2);
v___x_1822_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Expression_0__Lake_Toml_elabSubKeys_spec__0_spec__0_spec__1(v_msg_1817_, v___y_1818_, v___y_1819_);
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1825_ = v___x_1822_;
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1822_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; lean_object* v___x_1829_; 
lean_inc(v_ref_1821_);
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v_ref_1821_);
lean_ctor_set(v___x_1827_, 1, v_a_1823_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set_tag(v___x_1825_, 1);
lean_ctor_set(v___x_1825_, 0, v___x_1827_);
v___x_1829_ = v___x_1825_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(lean_object* v_ref_1837_, lean_object* v_msg_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_toCold_1842_; lean_object* v_currRecDepth_1843_; lean_object* v_ref_1844_; uint8_t v_diag_1845_; uint8_t v_suppressElabErrors_1846_; lean_object* v_ref_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v_toCold_1842_ = lean_ctor_get(v___y_1839_, 0);
v_currRecDepth_1843_ = lean_ctor_get(v___y_1839_, 1);
v_ref_1844_ = lean_ctor_get(v___y_1839_, 2);
v_diag_1845_ = lean_ctor_get_uint8(v___y_1839_, sizeof(void*)*3);
v_suppressElabErrors_1846_ = lean_ctor_get_uint8(v___y_1839_, sizeof(void*)*3 + 1);
v_ref_1847_ = l_Lean_replaceRef(v_ref_1837_, v_ref_1844_);
lean_inc(v_currRecDepth_1843_);
lean_inc_ref(v_toCold_1842_);
v___x_1848_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1848_, 0, v_toCold_1842_);
lean_ctor_set(v___x_1848_, 1, v_currRecDepth_1843_);
lean_ctor_set(v___x_1848_, 2, v_ref_1847_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*3, v_diag_1845_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*3 + 1, v_suppressElabErrors_1846_);
v___x_1849_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1838_, v___x_1848_, v___y_1840_);
lean_dec_ref_known(v___x_1848_, 3);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg___boxed(lean_object* v_ref_1850_, lean_object* v_msg_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_ref_1850_, v_msg_1851_, v___y_1852_, v___y_1853_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v_ref_1850_);
return v_res_1855_;
}
}
static lean_object* _init_l_Lake_Toml_elabToml___closed__3(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__2));
v___x_1863_ = l_Lean_stringToMessageData(v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml(lean_object* v_x_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__1));
lean_inc(v_x_1868_);
v___x_1873_ = l_Lean_Syntax_isOfKind(v_x_1868_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_obj_once(&l_Lake_Toml_elabToml___closed__3, &l_Lake_Toml_elabToml___closed__3_once, _init_l_Lake_Toml_elabToml___closed__3);
v___x_1875_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_x_1868_, v___x_1874_, v_a_1869_, v_a_1870_);
lean_dec(v_x_1868_);
return v___x_1875_;
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v_recovering_1879_; 
v___x_1876_ = lean_unsigned_to_nat(0u);
v___x_1877_ = l_Lean_Syntax_getArg(v_x_1868_, v___x_1876_);
v___x_1878_ = ((lean_object*)(l_Lake_Toml_elabToml___closed__4));
v_recovering_1879_ = l_Lean_Syntax_isOfKind(v___x_1877_, v___x_1878_);
if (v_recovering_1879_ == 0)
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_obj_once(&l_Lake_Toml_elabToml___closed__3, &l_Lake_Toml_elabToml___closed__3_once, _init_l_Lake_Toml_elabToml___closed__3);
v___x_1881_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_x_1868_, v___x_1880_, v_a_1869_, v_a_1870_);
lean_dec(v_x_1868_);
return v___x_1881_;
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v_xs_1884_; uint8_t v_recovering_1885_; lean_object* v___x_1886_; size_t v_sz_1887_; size_t v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = l_Lean_Syntax_getArg(v_x_1868_, v___x_1882_);
lean_dec(v_x_1868_);
v_xs_1884_ = l_Lean_Syntax_getArgs(v___x_1883_);
lean_dec(v___x_1883_);
v_recovering_1885_ = 0;
v___x_1886_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_xs_1884_);
lean_dec_ref(v_xs_1884_);
v_sz_1887_ = lean_array_size(v___x_1886_);
v___x_1888_ = ((size_t)0ULL);
v___x_1889_ = lean_obj_once(&l_Lake_Toml_instInhabitedElabState_default___closed__2, &l_Lake_Toml_instInhabitedElabState_default___closed__2_once, _init_l_Lake_Toml_instInhabitedElabState_default___closed__2);
v___x_1890_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Toml_elabToml_spec__2(v_recovering_1879_, v___x_1886_, v_sz_1887_, v___x_1888_, v_recovering_1885_, v___x_1889_, v_a_1869_, v_a_1870_);
lean_dec_ref(v___x_1886_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1901_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1901_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1901_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v_snd_1895_; lean_object* v_items_1896_; lean_object* v___x_1897_; lean_object* v___x_1899_; 
v_snd_1895_ = lean_ctor_get(v_a_1891_, 1);
lean_inc(v_snd_1895_);
lean_dec(v_a_1891_);
v_items_1896_ = lean_ctor_get(v_snd_1895_, 5);
lean_inc_ref(v_items_1896_);
lean_dec(v_snd_1895_);
v___x_1897_ = l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_mkSimpleTable(v_items_1896_);
lean_dec_ref(v_items_1896_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v___x_1897_);
v___x_1899_ = v___x_1893_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1890_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1890_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabToml___boxed(lean_object* v_x_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lake_Toml_elabToml(v_x_1910_, v_a_1911_, v_a_1912_);
lean_dec(v_a_1912_);
lean_dec_ref(v_a_1911_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(lean_object* v_00_u03b1_1915_, lean_object* v_ref_1916_, lean_object* v_msg_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___redArg(v_ref_1916_, v_msg_1917_, v___y_1918_, v___y_1919_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0___boxed(lean_object* v_00_u03b1_1922_, lean_object* v_ref_1923_, lean_object* v_msg_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0(v_00_u03b1_1922_, v_ref_1923_, v_msg_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v_ref_1923_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(lean_object* v_00_u03b1_1929_, lean_object* v_msg_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___redArg(v_msg_1930_, v___y_1931_, v___y_1932_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1935_, lean_object* v_msg_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lake_Toml_elabToml_spec__0_spec__0(v_00_u03b1_1935_, v_msg_1936_, v___y_1937_, v___y_1938_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
return v_res_1940_;
}
}
lean_object* runtime_initialize_Lake_Toml_Elab_Value(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_instInhabitedKeyTy_default = _init_l_Lake_Toml_instInhabitedKeyTy_default();
l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy = _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedKeyTy();
l_Lake_Toml_instInhabitedElabState_default = _init_l_Lake_Toml_instInhabitedElabState_default();
lean_mark_persistent(l_Lake_Toml_instInhabitedElabState_default);
l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState = _init_l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState();
lean_mark_persistent(l___private_Lake_Toml_Elab_Expression_0__Lake_Toml_instInhabitedElabState);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Toml_Elab_Value(uint8_t builtin);
lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Elab_Expression(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Elab_Expression(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Elab_Expression(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Elab_Expression(builtin);
}
#ifdef __cplusplus
}
#endif

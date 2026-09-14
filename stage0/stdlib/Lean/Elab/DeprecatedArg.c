// Lean compiler output
// Module: Lean.Elab.DeprecatedArg
// Imports: public import Lean.EnvExtension public import Lean.Message import Lean.Elab.Term
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
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
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(34, 76, 221, 236, 220, 4, 80, 27)}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "if true, generate deprecation warnings and errors for deprecated parameters"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 137, 139, 132, 156, 105, 17, 87)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(124, 255, 51, 83, 51, 207, 102, 168)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(105, 17, 141, 46, 239, 35, 224, 220)}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_linter_deprecated_arg;
static lean_once_cell_t l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDeprecatedArgEntry_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDeprecatedArgEntry;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_addDeprecatedArgEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deprecatedArgExt"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 157, 100, 72, 87, 251, 253, 102)}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_addDeprecatedArgEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_deprecatedArgExt;
LEAN_EXPORT lean_object* l_Lean_Elab_findDeprecatedArg_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_findDeprecatedArg_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__0 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__1;
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parameter `"};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__2 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__3;
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` of `"};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__4 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__5;
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` has been deprecated"};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__6 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__7;
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` has been deprecated, use `"};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__8 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__8_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__9;
static const lean_string_object l_Lean_Elab_formatDeprecatedArgMsg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` instead"};
static const lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__10 = (const lean_object*)&l_Lean_Elab_formatDeprecatedArgMsg___closed__10_value;
static lean_once_cell_t l_Lean_Elab_formatDeprecatedArgMsg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_formatDeprecatedArgMsg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_formatDeprecatedArgMsg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0___boxed__const__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0___boxed__const__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0___boxed__const__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 138, .m_capacity = 138, .m_length = 137, .m_data = "`[deprecated_arg]` attribute should specify the date or library version at which the deprecation was introduced, using `(since := \"...\")`"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` is still a parameter of `"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`; rename it to `"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "` before adding `@[deprecated_arg]`"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "` is not a parameter of `"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "`; remove it before adding `@[deprecated_arg]`"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Invalid `[deprecated_arg]` attribute syntax"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "DeprecatedArg"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "deprecated_arg"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(45, 182, 86, 230, 168, 246, 164, 173)}};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "mark a parameter as deprecated"};
static const lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_58_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_59_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4__spec__0(v___x_56_, v___x_57_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4____boxed(lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_();
return v_res_61_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_box(0);
v___x_63_ = l_unsafeCast___redArg(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_box(0);
v___x_65_ = lean_obj_once(&l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0, &l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0_once, _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0);
v___x_66_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
lean_ctor_set(v___x_66_, 2, v___x_64_);
lean_ctor_set(v___x_66_, 3, v___x_64_);
lean_ctor_set(v___x_66_, 4, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1, &l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1_once, _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__1);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Elab_instInhabitedDeprecatedArgEntry_default;
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_addDeprecatedArgEntry(lean_object* v_s_69_, lean_object* v_e_70_){
_start:
{
lean_object* v_declName_71_; lean_object* v_oldArg_72_; lean_object* v___y_74_; lean_object* v___x_77_; 
v_declName_71_ = lean_ctor_get(v_e_70_, 0);
lean_inc(v_declName_71_);
v_oldArg_72_ = lean_ctor_get(v_e_70_, 1);
lean_inc(v_oldArg_72_);
v___x_77_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_s_69_, v_declName_71_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v___x_78_; 
v___x_78_ = lean_box(1);
v___y_74_ = v___x_78_;
goto v___jp_73_;
}
else
{
lean_object* v_val_79_; 
v_val_79_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_val_79_);
lean_dec_ref_known(v___x_77_, 1);
v___y_74_ = v_val_79_;
goto v___jp_73_;
}
v___jp_73_:
{
lean_object* v_inner_75_; lean_object* v___x_76_; 
v_inner_75_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_oldArg_72_, v_e_70_, v___y_74_);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_71_, v_inner_75_, v_s_69_);
return v___x_76_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_(lean_object* v_es_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_array_mk(v_es_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_82_, size_t v_i_83_, size_t v_stop_84_, lean_object* v_b_85_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = lean_usize_dec_eq(v_i_83_, v_stop_84_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; size_t v___x_89_; size_t v___x_90_; 
v___x_87_ = lean_array_uget_borrowed(v_as_82_, v_i_83_);
lean_inc(v___x_87_);
v___x_88_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_addDeprecatedArgEntry(v_b_85_, v___x_87_);
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_add(v_i_83_, v___x_89_);
v_i_83_ = v___x_90_;
v_b_85_ = v___x_88_;
goto _start;
}
else
{
return v_b_85_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_92_, lean_object* v_i_93_, lean_object* v_stop_94_, lean_object* v_b_95_){
_start:
{
size_t v_i_boxed_96_; size_t v_stop_boxed_97_; lean_object* v_res_98_; 
v_i_boxed_96_ = lean_unbox_usize(v_i_93_);
lean_dec(v_i_93_);
v_stop_boxed_97_ = lean_unbox_usize(v_stop_94_);
lean_dec(v_stop_94_);
v_res_98_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0(v_as_92_, v_i_boxed_96_, v_stop_boxed_97_, v_b_95_);
lean_dec_ref(v_as_92_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_99_, size_t v_i_100_, size_t v_stop_101_, lean_object* v_b_102_){
_start:
{
lean_object* v___y_104_; uint8_t v___x_108_; 
v___x_108_ = lean_usize_dec_eq(v_i_100_, v_stop_101_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_109_ = lean_array_uget_borrowed(v_as_99_, v_i_100_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_array_get_size(v___x_109_);
v___x_112_ = lean_nat_dec_lt(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
v___y_104_ = v_b_102_;
goto v___jp_103_;
}
else
{
size_t v___x_113_; size_t v___x_114_; lean_object* v___x_115_; 
v___x_113_ = ((size_t)0ULL);
v___x_114_ = lean_usize_of_nat(v___x_111_);
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__0(v___x_109_, v___x_113_, v___x_114_, v_b_102_);
v___y_104_ = v___x_115_;
goto v___jp_103_;
}
}
else
{
return v_b_102_;
}
v___jp_103_:
{
size_t v___x_105_; size_t v___x_106_; 
v___x_105_ = ((size_t)1ULL);
v___x_106_ = lean_usize_add(v_i_100_, v___x_105_);
v_i_100_ = v___x_106_;
v_b_102_ = v___y_104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_stop_118_, lean_object* v_b_119_){
_start:
{
size_t v_i_boxed_120_; size_t v_stop_boxed_121_; lean_object* v_res_122_; 
v_i_boxed_120_ = lean_unbox_usize(v_i_117_);
lean_dec(v_i_117_);
v_stop_boxed_121_ = lean_unbox_usize(v_stop_118_);
lean_dec(v_stop_118_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1(v_as_116_, v_i_boxed_120_, v_stop_boxed_121_, v_b_119_);
lean_dec_ref(v_as_116_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0(lean_object* v_initState_123_, lean_object* v_as_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_array_get_size(v_as_124_);
v___x_127_ = lean_nat_dec_lt(v___x_125_, v___x_126_);
if (v___x_127_ == 0)
{
return v_initState_123_;
}
else
{
size_t v___x_128_; size_t v___x_129_; lean_object* v___x_130_; 
v___x_128_ = ((size_t)0ULL);
v___x_129_ = lean_usize_of_nat(v___x_126_);
v___x_130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0_spec__1(v_as_124_, v___x_128_, v___x_129_, v_initState_123_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_131_, lean_object* v_as_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2__spec__0(v_initState_131_, v_as_132_);
lean_dec_ref(v_as_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_));
v___x_152_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2____boxed(lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_();
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_findDeprecatedArg_x3f(lean_object* v_env_155_, lean_object* v_declName_156_, lean_object* v_argName_157_){
_start:
{
lean_object* v___x_158_; lean_object* v_toEnvExtension_159_; lean_object* v_asyncMode_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_158_ = l_Lean_Elab_deprecatedArgExt;
v_toEnvExtension_159_ = lean_ctor_get(v___x_158_, 0);
v_asyncMode_160_ = lean_ctor_get(v_toEnvExtension_159_, 2);
v___x_161_ = lean_box(1);
v___x_162_ = lean_obj_once(&l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0, &l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0_once, _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0);
v___x_163_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_161_, v___x_158_, v_env_155_, v_asyncMode_160_, v___x_162_);
v___x_164_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_163_, v_declName_156_);
lean_dec(v___x_163_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_box(0);
return v___x_165_;
}
else
{
lean_object* v_val_166_; lean_object* v___x_167_; 
v_val_166_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_val_166_);
lean_dec_ref_known(v___x_164_, 1);
v___x_167_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_val_166_, v_argName_157_);
lean_dec(v_val_166_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_findDeprecatedArg_x3f___boxed(lean_object* v_env_168_, lean_object* v_declName_169_, lean_object* v_argName_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Elab_findDeprecatedArg_x3f(v_env_168_, v_declName_169_, v_argName_170_);
lean_dec(v_argName_170_);
lean_dec(v_declName_169_);
return v_res_171_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__1(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__0));
v___x_174_ = l_Lean_stringToMessageData(v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__3(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__2));
v___x_177_ = l_Lean_stringToMessageData(v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__5(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__4));
v___x_180_ = l_Lean_stringToMessageData(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__7(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__6));
v___x_183_ = l_Lean_stringToMessageData(v___x_182_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__9(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__8));
v___x_186_ = l_Lean_stringToMessageData(v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__11(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l_Lean_Elab_formatDeprecatedArgMsg___closed__10));
v___x_189_ = l_Lean_stringToMessageData(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_formatDeprecatedArgMsg(lean_object* v_entry_190_){
_start:
{
lean_object* v_declName_191_; lean_object* v_oldArg_192_; lean_object* v_newArg_x3f_193_; lean_object* v_text_x3f_194_; lean_object* v___y_196_; 
v_declName_191_ = lean_ctor_get(v_entry_190_, 0);
lean_inc(v_declName_191_);
v_oldArg_192_ = lean_ctor_get(v_entry_190_, 1);
lean_inc(v_oldArg_192_);
v_newArg_x3f_193_ = lean_ctor_get(v_entry_190_, 2);
lean_inc(v_newArg_x3f_193_);
v_text_x3f_194_ = lean_ctor_get(v_entry_190_, 3);
lean_inc(v_text_x3f_194_);
lean_dec_ref(v_entry_190_);
if (lean_obj_tag(v_newArg_x3f_193_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_202_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__3, &l_Lean_Elab_formatDeprecatedArgMsg___closed__3_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__3);
v___x_203_ = l_Lean_MessageData_ofName(v_oldArg_192_);
v___x_204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_202_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__5, &l_Lean_Elab_formatDeprecatedArgMsg___closed__5_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__5);
v___x_206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = 0;
v___x_208_ = l_Lean_MessageData_ofConstName(v_declName_191_, v___x_207_);
v___x_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_206_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__7, &l_Lean_Elab_formatDeprecatedArgMsg___closed__7_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__7);
v___x_211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___y_196_ = v___x_211_;
goto v___jp_195_;
}
else
{
lean_object* v_val_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_val_212_ = lean_ctor_get(v_newArg_x3f_193_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v_newArg_x3f_193_, 1);
v___x_213_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__3, &l_Lean_Elab_formatDeprecatedArgMsg___closed__3_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__3);
v___x_214_ = l_Lean_MessageData_ofName(v_oldArg_192_);
v___x_215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__5, &l_Lean_Elab_formatDeprecatedArgMsg___closed__5_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__5);
v___x_217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = l_Lean_MessageData_ofConstName(v_declName_191_, v___x_218_);
v___x_220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_217_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__9, &l_Lean_Elab_formatDeprecatedArgMsg___closed__9_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__9);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = l_Lean_MessageData_ofName(v_val_212_);
v___x_224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__11, &l_Lean_Elab_formatDeprecatedArgMsg___closed__11_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__11);
v___x_226_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___y_196_ = v___x_226_;
goto v___jp_195_;
}
v___jp_195_:
{
if (lean_obj_tag(v_text_x3f_194_) == 0)
{
return v___y_196_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_val_197_ = lean_ctor_get(v_text_x3f_194_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_text_x3f_194_, 1);
v___x_198_ = lean_obj_once(&l_Lean_Elab_formatDeprecatedArgMsg___closed__1, &l_Lean_Elab_formatDeprecatedArgMsg___closed__1_once, _init_l_Lean_Elab_formatDeprecatedArgMsg___closed__1);
v___x_199_ = l_Lean_stringToMessageData(v_val_197_);
v___x_200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_201_, 0, v___y_196_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
return v___x_201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0(lean_object* v_k_227_, lean_object* v_b_228_, lean_object* v_c_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; 
lean_inc(v___y_233_);
lean_inc_ref(v___y_232_);
lean_inc(v___y_231_);
lean_inc_ref(v___y_230_);
v___x_235_ = lean_apply_7(v_k_227_, v_b_228_, v_c_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, lean_box(0));
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0___boxed(lean_object* v_k_236_, lean_object* v_b_237_, lean_object* v_c_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0(v_k_236_, v_b_237_, v_c_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg(lean_object* v_type_245_, lean_object* v_k_246_, uint8_t v_cleanupAnnotations_247_, uint8_t v_whnfType_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___f_254_; lean_object* v___x_255_; 
v___f_254_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_254_, 0, v_k_246_);
v___x_255_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_245_, v___f_254_, v_cleanupAnnotations_247_, v_whnfType_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_a_264_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_255_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_255_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object* v_type_272_, lean_object* v_k_273_, lean_object* v_cleanupAnnotations_274_, lean_object* v_whnfType_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_281_; uint8_t v_whnfType_boxed_282_; lean_object* v_res_283_; 
v_cleanupAnnotations_boxed_281_ = lean_unbox(v_cleanupAnnotations_274_);
v_whnfType_boxed_282_ = lean_unbox(v_whnfType_275_);
v_res_283_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg(v_type_272_, v_k_273_, v_cleanupAnnotations_boxed_281_, v_whnfType_boxed_282_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5(lean_object* v_00_u03b1_284_, lean_object* v_type_285_, lean_object* v_k_286_, uint8_t v_cleanupAnnotations_287_, uint8_t v_whnfType_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg(v_type_285_, v_k_286_, v_cleanupAnnotations_287_, v_whnfType_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___boxed(lean_object* v_00_u03b1_295_, lean_object* v_type_296_, lean_object* v_k_297_, lean_object* v_cleanupAnnotations_298_, lean_object* v_whnfType_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_305_; uint8_t v_whnfType_boxed_306_; lean_object* v_res_307_; 
v_cleanupAnnotations_boxed_305_ = lean_unbox(v_cleanupAnnotations_298_);
v_whnfType_boxed_306_ = lean_unbox(v_whnfType_299_);
v_res_307_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5(v_00_u03b1_295_, v_type_296_, v_k_297_, v_cleanupAnnotations_boxed_305_, v_whnfType_boxed_306_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg(size_t v_sz_308_, size_t v_i_309_, lean_object* v_bs_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
uint8_t v___x_315_; 
v___x_315_ = lean_usize_dec_lt(v_i_309_, v_sz_308_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = l_unsafeCast___redArg(v_bs_310_);
lean_dec_ref(v_bs_310_);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
else
{
lean_object* v_v_318_; lean_object* v___x_319_; lean_object* v_bs_x27_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_v_318_ = lean_array_uget(v_bs_310_, v_i_309_);
v___x_319_ = lean_unsigned_to_nat(0u);
v_bs_x27_320_ = lean_array_uset(v_bs_310_, v_i_309_, v___x_319_);
v___x_321_ = l_unsafeCast___redArg(v_v_318_);
lean_dec(v_v_318_);
v___x_322_ = l_Lean_Expr_fvarId_x21(v___x_321_);
lean_dec(v___x_321_);
v___x_323_ = l_Lean_FVarId_getDecl___redArg(v___x_322_, v___y_311_, v___y_312_, v___y_313_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_325_; size_t v___x_326_; size_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v___x_323_, 1);
v___x_325_ = l_Lean_LocalDecl_userName(v_a_324_);
lean_dec(v_a_324_);
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_add(v_i_309_, v___x_326_);
v___x_328_ = l_unsafeCast___redArg(v___x_325_);
lean_dec(v___x_325_);
v___x_329_ = lean_array_uset(v_bs_x27_320_, v_i_309_, v___x_328_);
v_i_309_ = v___x_327_;
v_bs_310_ = v___x_329_;
goto _start;
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec_ref(v_bs_x27_320_);
v_a_331_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_323_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_323_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_sz_339_, lean_object* v_i_340_, lean_object* v_bs_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
size_t v_sz_boxed_346_; size_t v_i_boxed_347_; lean_object* v_res_348_; 
v_sz_boxed_346_ = lean_unbox_usize(v_sz_339_);
lean_dec(v_sz_339_);
v_i_boxed_347_ = lean_unbox_usize(v_i_340_);
lean_dec(v_i_340_);
v_res_348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg(v_sz_boxed_346_, v_i_boxed_347_, v_bs_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec_ref(v___y_342_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0(size_t v_sz_349_, size_t v_i_350_, lean_object* v_bs_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___redArg(v_sz_349_, v_i_350_, v_bs_351_, v___y_352_, v___y_354_, v___y_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___boxed(lean_object* v_sz_358_, lean_object* v_i_359_, lean_object* v_bs_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
size_t v_sz_boxed_366_; size_t v_i_boxed_367_; lean_object* v_res_368_; 
v_sz_boxed_366_ = lean_unbox_usize(v_sz_358_);
lean_dec(v_sz_358_);
v_i_boxed_367_ = lean_unbox_usize(v_i_359_);
lean_dec(v_i_359_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0(v_sz_boxed_366_, v_i_boxed_367_, v_bs_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object* v_xs_371_, lean_object* v_x_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
size_t v_sz_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_8136__overap_383_; lean_object* v___x_384_; 
v_sz_378_ = lean_array_size(v_xs_371_);
v___x_379_ = l_unsafeCast___redArg(v_xs_371_);
v___x_380_ = lean_box_usize(v_sz_378_);
v___x_381_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0___boxed__const__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_382_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__0___boxed), 8, 3);
lean_closure_set(v___x_382_, 0, v___x_380_);
lean_closure_set(v___x_382_, 1, v___x_381_);
lean_closure_set(v___x_382_, 2, v___x_379_);
v___x_8136__overap_383_ = l_unsafeCast___redArg(v___x_382_);
lean_dec_ref(v___x_382_);
lean_inc(v___y_376_);
lean_inc_ref(v___y_375_);
lean_inc(v___y_374_);
lean_inc_ref(v___y_373_);
v___x_384_ = lean_apply_5(v___x_8136__overap_383_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, lean_box(0));
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object* v_xs_385_, lean_object* v_x_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(v_xs_385_, v_x_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v_x_386_);
lean_dec_ref(v_xs_385_);
return v_res_392_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(lean_object* v_oldArg_393_, lean_object* v_as_394_, size_t v_i_395_, size_t v_stop_396_){
_start:
{
uint8_t v___x_397_; 
v___x_397_ = lean_usize_dec_eq(v_i_395_, v_stop_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = lean_array_uget_borrowed(v_as_394_, v_i_395_);
v___x_399_ = lean_name_eq(v___x_398_, v_oldArg_393_);
if (v___x_399_ == 0)
{
size_t v___x_400_; size_t v___x_401_; 
v___x_400_ = ((size_t)1ULL);
v___x_401_ = lean_usize_add(v_i_395_, v___x_400_);
v_i_395_ = v___x_401_;
goto _start;
}
else
{
return v___x_399_;
}
}
else
{
uint8_t v___x_403_; 
v___x_403_ = 0;
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3___boxed(lean_object* v_oldArg_404_, lean_object* v_as_405_, lean_object* v_i_406_, lean_object* v_stop_407_){
_start:
{
size_t v_i_boxed_408_; size_t v_stop_boxed_409_; uint8_t v_res_410_; lean_object* v_r_411_; 
v_i_boxed_408_ = lean_unbox_usize(v_i_406_);
lean_dec(v_i_406_);
v_stop_boxed_409_ = lean_unbox_usize(v_stop_407_);
lean_dec(v_stop_407_);
v_res_410_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(v_oldArg_404_, v_as_405_, v_i_boxed_408_, v_stop_boxed_409_);
lean_dec_ref(v_as_405_);
lean_dec(v_oldArg_404_);
v_r_411_ = lean_box(v_res_410_);
return v_r_411_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_412_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1);
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
lean_ctor_set(v___x_417_, 2, v___x_416_);
lean_ctor_set(v___x_417_, 3, v___x_416_);
lean_ctor_set(v___x_417_, 4, v___x_415_);
lean_ctor_set(v___x_417_, 5, v___x_415_);
lean_ctor_set(v___x_417_, 6, v___x_415_);
lean_ctor_set(v___x_417_, 7, v___x_415_);
lean_ctor_set(v___x_417_, 8, v___x_415_);
lean_ctor_set(v___x_417_, 9, v___x_415_);
lean_ctor_set(v___x_417_, 10, v___x_415_);
return v___x_417_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_418_ = lean_unsigned_to_nat(32u);
v___x_419_ = lean_mk_empty_array_with_capacity(v___x_418_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4(void){
_start:
{
size_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_421_ = ((size_t)5ULL);
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = lean_unsigned_to_nat(32u);
v___x_424_ = lean_mk_empty_array_with_capacity(v___x_423_);
v___x_425_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3);
v___x_426_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
lean_ctor_set(v___x_426_, 2, v___x_422_);
lean_ctor_set(v___x_426_, 3, v___x_422_);
lean_ctor_set_usize(v___x_426_, 4, v___x_421_);
return v___x_426_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_427_ = lean_box(1);
v___x_428_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__4);
v___x_429_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__1);
v___x_430_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_428_);
lean_ctor_set(v___x_430_, 2, v___x_427_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_msgData_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; lean_object* v_toCold_436_; lean_object* v_env_437_; lean_object* v_options_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_435_ = lean_st_ref_get(v___y_433_);
v_toCold_436_ = lean_ctor_get(v___y_432_, 0);
v_env_437_ = lean_ctor_get(v___x_435_, 0);
lean_inc_ref(v_env_437_);
lean_dec(v___x_435_);
v_options_438_ = lean_ctor_get(v_toCold_436_, 2);
v___x_439_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2);
v___x_440_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5);
lean_inc_ref(v_options_438_);
v___x_441_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_441_, 0, v_env_437_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_440_);
lean_ctor_set(v___x_441_, 3, v_options_438_);
v___x_442_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v_msgData_431_);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_msgData_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1(v_msgData_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_448_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8(lean_object* v_opts_449_, lean_object* v_opt_450_){
_start:
{
lean_object* v_name_451_; lean_object* v_defValue_452_; lean_object* v_map_453_; lean_object* v___x_454_; 
v_name_451_ = lean_ctor_get(v_opt_450_, 0);
v_defValue_452_ = lean_ctor_get(v_opt_450_, 1);
v_map_453_ = lean_ctor_get(v_opts_449_, 0);
v___x_454_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_453_, v_name_451_);
if (lean_obj_tag(v___x_454_) == 0)
{
uint8_t v___x_455_; 
v___x_455_ = lean_unbox(v_defValue_452_);
return v___x_455_;
}
else
{
lean_object* v_val_456_; 
v_val_456_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v___x_454_, 1);
if (lean_obj_tag(v_val_456_) == 1)
{
uint8_t v_v_457_; 
v_v_457_ = lean_ctor_get_uint8(v_val_456_, 0);
lean_dec_ref_known(v_val_456_, 0);
return v_v_457_;
}
else
{
uint8_t v___x_458_; 
lean_dec(v_val_456_);
v___x_458_ = lean_unbox(v_defValue_452_);
return v___x_458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_opts_459_, lean_object* v_opt_460_){
_start:
{
uint8_t v_res_461_; lean_object* v_r_462_; 
v_res_461_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8(v_opts_459_, v_opt_460_);
lean_dec_ref(v_opt_460_);
lean_dec_ref(v_opts_459_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0(uint8_t v_suppressElabErrors_470_, uint8_t v___y_471_, lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 1)
{
lean_object* v_pre_473_; 
v_pre_473_ = lean_ctor_get(v_x_472_, 0);
switch(lean_obj_tag(v_pre_473_))
{
case 1:
{
lean_object* v_pre_474_; 
v_pre_474_ = lean_ctor_get(v_pre_473_, 0);
switch(lean_obj_tag(v_pre_474_))
{
case 0:
{
lean_object* v_str_475_; lean_object* v_str_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_str_475_ = lean_ctor_get(v_x_472_, 1);
v_str_476_ = lean_ctor_get(v_pre_473_, 1);
v___x_477_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_478_ = lean_string_dec_eq(v_str_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__0));
v___x_480_ = lean_string_dec_eq(v_str_476_, v___x_479_);
if (v___x_480_ == 0)
{
return v___x_480_;
}
else
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__1));
v___x_482_ = lean_string_dec_eq(v_str_475_, v___x_481_);
if (v___x_482_ == 0)
{
return v___x_482_;
}
else
{
return v_suppressElabErrors_470_;
}
}
}
else
{
lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__2));
v___x_484_ = lean_string_dec_eq(v_str_475_, v___x_483_);
if (v___x_484_ == 0)
{
return v___x_484_;
}
else
{
return v_suppressElabErrors_470_;
}
}
}
case 1:
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_pre_474_, 0);
if (lean_obj_tag(v_pre_485_) == 0)
{
lean_object* v_str_486_; lean_object* v_str_487_; lean_object* v_str_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v_str_486_ = lean_ctor_get(v_x_472_, 1);
v_str_487_ = lean_ctor_get(v_pre_473_, 1);
v_str_488_ = lean_ctor_get(v_pre_474_, 1);
v___x_489_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__3));
v___x_490_ = lean_string_dec_eq(v_str_488_, v___x_489_);
if (v___x_490_ == 0)
{
return v___x_490_;
}
else
{
lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_491_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__4));
v___x_492_ = lean_string_dec_eq(v_str_487_, v___x_491_);
if (v___x_492_ == 0)
{
return v___x_492_;
}
else
{
lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_493_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__5));
v___x_494_ = lean_string_dec_eq(v_str_486_, v___x_493_);
if (v___x_494_ == 0)
{
return v___x_494_;
}
else
{
return v_suppressElabErrors_470_;
}
}
}
}
else
{
return v___y_471_;
}
}
default: 
{
return v___y_471_;
}
}
}
case 0:
{
lean_object* v_str_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v_str_495_ = lean_ctor_get(v_x_472_, 1);
v___x_496_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___closed__6));
v___x_497_ = lean_string_dec_eq(v_str_495_, v___x_496_);
if (v___x_497_ == 0)
{
return v___x_497_;
}
else
{
return v_suppressElabErrors_470_;
}
}
default: 
{
return v___y_471_;
}
}
}
else
{
return v___y_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___boxed(lean_object* v_suppressElabErrors_498_, lean_object* v___y_499_, lean_object* v_x_500_){
_start:
{
uint8_t v_suppressElabErrors_boxed_501_; uint8_t v___y_8825__boxed_502_; uint8_t v_res_503_; lean_object* v_r_504_; 
v_suppressElabErrors_boxed_501_ = lean_unbox(v_suppressElabErrors_498_);
v___y_8825__boxed_502_ = lean_unbox(v___y_499_);
v_res_503_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0(v_suppressElabErrors_boxed_501_, v___y_8825__boxed_502_, v_x_500_);
lean_dec(v_x_500_);
v_r_504_ = lean_box(v_res_503_);
return v_r_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object* v_ref_506_, lean_object* v_msgData_507_, uint8_t v_severity_508_, uint8_t v_isSilent_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; uint8_t v___y_517_; lean_object* v___y_518_; uint8_t v___y_519_; lean_object* v___y_520_; lean_object* v_currNamespace_521_; lean_object* v_openDecls_522_; lean_object* v___y_523_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; uint8_t v___y_552_; lean_object* v___y_553_; uint8_t v___y_554_; uint8_t v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; uint8_t v___y_579_; uint8_t v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; uint8_t v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_591_; uint8_t v___y_592_; lean_object* v___y_593_; uint8_t v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; uint8_t v___y_597_; uint8_t v___x_602_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; uint8_t v___y_609_; lean_object* v___y_610_; uint8_t v___y_611_; uint8_t v___y_612_; uint8_t v___y_614_; uint8_t v___x_632_; 
v___x_602_ = 2;
v___x_632_ = l_Lean_instBEqMessageSeverity_beq(v_severity_508_, v___x_602_);
if (v___x_632_ == 0)
{
v___y_614_ = v___x_632_;
goto v___jp_613_;
}
else
{
uint8_t v___x_633_; 
lean_inc_ref(v_msgData_507_);
v___x_633_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_507_);
v___y_614_ = v___x_633_;
goto v___jp_613_;
}
v___jp_513_:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v_env_528_; lean_object* v_nextMacroScope_529_; lean_object* v_ngen_530_; lean_object* v_auxDeclNGen_531_; lean_object* v_traceState_532_; lean_object* v_cache_533_; lean_object* v_messages_534_; lean_object* v_infoState_535_; lean_object* v_snapshotTasks_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_547_; 
lean_inc(v_openDecls_522_);
lean_inc(v_currNamespace_521_);
v___x_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_524_, 0, v_currNamespace_521_);
lean_ctor_set(v___x_524_, 1, v_openDecls_522_);
v___x_525_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___y_514_);
lean_inc_ref(v___y_515_);
lean_inc_ref(v___y_520_);
v___x_526_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_526_, 0, v___y_520_);
lean_ctor_set(v___x_526_, 1, v___y_516_);
lean_ctor_set(v___x_526_, 2, v___y_518_);
lean_ctor_set(v___x_526_, 3, v___y_515_);
lean_ctor_set(v___x_526_, 4, v___x_525_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*5, v___y_519_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*5 + 1, v___y_517_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*5 + 2, v_isSilent_509_);
v___x_527_ = lean_st_ref_take(v___y_523_);
v_env_528_ = lean_ctor_get(v___x_527_, 0);
v_nextMacroScope_529_ = lean_ctor_get(v___x_527_, 1);
v_ngen_530_ = lean_ctor_get(v___x_527_, 2);
v_auxDeclNGen_531_ = lean_ctor_get(v___x_527_, 3);
v_traceState_532_ = lean_ctor_get(v___x_527_, 4);
v_cache_533_ = lean_ctor_get(v___x_527_, 5);
v_messages_534_ = lean_ctor_get(v___x_527_, 6);
v_infoState_535_ = lean_ctor_get(v___x_527_, 7);
v_snapshotTasks_536_ = lean_ctor_get(v___x_527_, 8);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_547_ == 0)
{
v___x_538_ = v___x_527_;
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snapshotTasks_536_);
lean_inc(v_infoState_535_);
lean_inc(v_messages_534_);
lean_inc(v_cache_533_);
lean_inc(v_traceState_532_);
lean_inc(v_auxDeclNGen_531_);
lean_inc(v_ngen_530_);
lean_inc(v_nextMacroScope_529_);
lean_inc(v_env_528_);
lean_dec(v___x_527_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_547_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = lean_box(0);
v___x_541_ = l_Lean_MessageLog_add(v___x_526_, v_messages_534_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 6, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_env_528_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_nextMacroScope_529_);
lean_ctor_set(v_reuseFailAlloc_546_, 2, v_ngen_530_);
lean_ctor_set(v_reuseFailAlloc_546_, 3, v_auxDeclNGen_531_);
lean_ctor_set(v_reuseFailAlloc_546_, 4, v_traceState_532_);
lean_ctor_set(v_reuseFailAlloc_546_, 5, v_cache_533_);
lean_ctor_set(v_reuseFailAlloc_546_, 6, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_546_, 7, v_infoState_535_);
lean_ctor_set(v_reuseFailAlloc_546_, 8, v_snapshotTasks_536_);
v___x_543_ = v_reuseFailAlloc_546_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_st_ref_put(v___y_523_, v___x_543_);
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_540_);
return v___x_545_;
}
}
}
v___jp_548_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_574_; 
v___x_559_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_507_);
v___x_560_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1(v___x_559_, v___y_510_, v___y_511_);
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_574_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_574_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_574_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_inc_ref_n(v___y_556_, 2);
v___x_565_ = l_Lean_FileMap_toPosition(v___y_556_, v___y_553_);
lean_dec(v___y_553_);
v___x_566_ = l_Lean_FileMap_toPosition(v___y_556_, v___y_558_);
lean_dec(v___y_558_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
v___x_568_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___closed__0));
if (v___y_552_ == 0)
{
lean_del_object(v___x_563_);
lean_dec_ref(v___y_551_);
v___y_514_ = v_a_561_;
v___y_515_ = v___x_568_;
v___y_516_ = v___x_565_;
v___y_517_ = v___y_554_;
v___y_518_ = v___x_567_;
v___y_519_ = v___y_555_;
v___y_520_ = v___y_557_;
v_currNamespace_521_ = v___y_550_;
v_openDecls_522_ = v___y_549_;
v___y_523_ = v___y_511_;
goto v___jp_513_;
}
else
{
uint8_t v___x_569_; 
lean_inc(v_a_561_);
v___x_569_ = l_Lean_MessageData_hasTag(v___y_551_, v_a_561_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_572_; 
lean_dec_ref_known(v___x_567_, 1);
lean_dec_ref(v___x_565_);
lean_dec(v_a_561_);
v___x_570_ = lean_box(0);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_570_);
v___x_572_ = v___x_563_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_570_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
else
{
lean_del_object(v___x_563_);
v___y_514_ = v_a_561_;
v___y_515_ = v___x_568_;
v___y_516_ = v___x_565_;
v___y_517_ = v___y_554_;
v___y_518_ = v___x_567_;
v___y_519_ = v___y_555_;
v___y_520_ = v___y_557_;
v_currNamespace_521_ = v___y_550_;
v_openDecls_522_ = v___y_549_;
v___y_523_ = v___y_511_;
goto v___jp_513_;
}
}
}
}
v___jp_575_:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Syntax_getTailPos_x3f(v___y_581_, v___y_583_);
lean_dec(v___y_581_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_inc(v___y_585_);
v___y_549_ = v___y_576_;
v___y_550_ = v___y_577_;
v___y_551_ = v___y_578_;
v___y_552_ = v___y_579_;
v___y_553_ = v___y_585_;
v___y_554_ = v___y_580_;
v___y_555_ = v___y_583_;
v___y_556_ = v___y_582_;
v___y_557_ = v___y_584_;
v___y_558_ = v___y_585_;
goto v___jp_548_;
}
else
{
lean_object* v_val_587_; 
v_val_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_val_587_);
lean_dec_ref_known(v___x_586_, 1);
v___y_549_ = v___y_576_;
v___y_550_ = v___y_577_;
v___y_551_ = v___y_578_;
v___y_552_ = v___y_579_;
v___y_553_ = v___y_585_;
v___y_554_ = v___y_580_;
v___y_555_ = v___y_583_;
v___y_556_ = v___y_582_;
v___y_557_ = v___y_584_;
v___y_558_ = v_val_587_;
goto v___jp_548_;
}
}
v___jp_588_:
{
lean_object* v_ref_598_; lean_object* v___x_599_; 
v_ref_598_ = l_Lean_replaceRef(v_ref_506_, v___y_593_);
v___x_599_ = l_Lean_Syntax_getPos_x3f(v_ref_598_, v___y_594_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v___x_600_; 
v___x_600_ = lean_unsigned_to_nat(0u);
v___y_576_ = v___y_589_;
v___y_577_ = v___y_590_;
v___y_578_ = v___y_591_;
v___y_579_ = v___y_592_;
v___y_580_ = v___y_597_;
v___y_581_ = v_ref_598_;
v___y_582_ = v___y_595_;
v___y_583_ = v___y_594_;
v___y_584_ = v___y_596_;
v___y_585_ = v___x_600_;
goto v___jp_575_;
}
else
{
lean_object* v_val_601_; 
v_val_601_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_val_601_);
lean_dec_ref_known(v___x_599_, 1);
v___y_576_ = v___y_589_;
v___y_577_ = v___y_590_;
v___y_578_ = v___y_591_;
v___y_579_ = v___y_592_;
v___y_580_ = v___y_597_;
v___y_581_ = v_ref_598_;
v___y_582_ = v___y_595_;
v___y_583_ = v___y_594_;
v___y_584_ = v___y_596_;
v___y_585_ = v_val_601_;
goto v___jp_575_;
}
}
v___jp_603_:
{
if (v___y_612_ == 0)
{
v___y_589_ = v___y_604_;
v___y_590_ = v___y_605_;
v___y_591_ = v___y_607_;
v___y_592_ = v___y_609_;
v___y_593_ = v___y_610_;
v___y_594_ = v___y_611_;
v___y_595_ = v___y_606_;
v___y_596_ = v___y_608_;
v___y_597_ = v_severity_508_;
goto v___jp_588_;
}
else
{
v___y_589_ = v___y_604_;
v___y_590_ = v___y_605_;
v___y_591_ = v___y_607_;
v___y_592_ = v___y_609_;
v___y_593_ = v___y_610_;
v___y_594_ = v___y_611_;
v___y_595_ = v___y_606_;
v___y_596_ = v___y_608_;
v___y_597_ = v___x_602_;
goto v___jp_588_;
}
}
v___jp_613_:
{
if (v___y_614_ == 0)
{
lean_object* v_toCold_615_; lean_object* v_ref_616_; uint8_t v_suppressElabErrors_617_; lean_object* v_fileName_618_; lean_object* v_fileMap_619_; lean_object* v_options_620_; lean_object* v_currNamespace_621_; lean_object* v_openDecls_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___f_625_; uint8_t v___x_626_; uint8_t v___x_627_; 
v_toCold_615_ = lean_ctor_get(v___y_510_, 0);
v_ref_616_ = lean_ctor_get(v___y_510_, 2);
v_suppressElabErrors_617_ = lean_ctor_get_uint8(v___y_510_, sizeof(void*)*3 + 1);
v_fileName_618_ = lean_ctor_get(v_toCold_615_, 0);
v_fileMap_619_ = lean_ctor_get(v_toCold_615_, 1);
v_options_620_ = lean_ctor_get(v_toCold_615_, 2);
v_currNamespace_621_ = lean_ctor_get(v_toCold_615_, 4);
v_openDecls_622_ = lean_ctor_get(v_toCold_615_, 5);
v___x_623_ = lean_box(v_suppressElabErrors_617_);
v___x_624_ = lean_box(v___y_614_);
v___f_625_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___lam__0___boxed), 3, 2);
lean_closure_set(v___f_625_, 0, v___x_623_);
lean_closure_set(v___f_625_, 1, v___x_624_);
v___x_626_ = 1;
v___x_627_ = l_Lean_instBEqMessageSeverity_beq(v_severity_508_, v___x_626_);
if (v___x_627_ == 0)
{
v___y_604_ = v_openDecls_622_;
v___y_605_ = v_currNamespace_621_;
v___y_606_ = v_fileMap_619_;
v___y_607_ = v___f_625_;
v___y_608_ = v_fileName_618_;
v___y_609_ = v_suppressElabErrors_617_;
v___y_610_ = v_ref_616_;
v___y_611_ = v___y_614_;
v___y_612_ = v___x_627_;
goto v___jp_603_;
}
else
{
lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_628_ = l_Lean_warningAsError;
v___x_629_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__8(v_options_620_, v___x_628_);
v___y_604_ = v_openDecls_622_;
v___y_605_ = v_currNamespace_621_;
v___y_606_ = v_fileMap_619_;
v___y_607_ = v___f_625_;
v___y_608_ = v_fileName_618_;
v___y_609_ = v_suppressElabErrors_617_;
v___y_610_ = v_ref_616_;
v___y_611_ = v___y_614_;
v___y_612_ = v___x_629_;
goto v___jp_603_;
}
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec_ref(v_msgData_507_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5___boxed(lean_object* v_ref_634_, lean_object* v_msgData_635_, lean_object* v_severity_636_, lean_object* v_isSilent_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
uint8_t v_severity_boxed_641_; uint8_t v_isSilent_boxed_642_; lean_object* v_res_643_; 
v_severity_boxed_641_ = lean_unbox(v_severity_636_);
v_isSilent_boxed_642_ = lean_unbox(v_isSilent_637_);
v_res_643_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5(v_ref_634_, v_msgData_635_, v_severity_boxed_641_, v_isSilent_boxed_642_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v_ref_634_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_msgData_644_, uint8_t v_severity_645_, uint8_t v_isSilent_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_ref_650_; lean_object* v___x_651_; 
v_ref_650_ = lean_ctor_get(v___y_647_, 2);
v___x_651_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3_spec__5(v_ref_650_, v_msgData_644_, v_severity_645_, v_isSilent_646_, v___y_647_, v___y_648_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_msgData_652_, lean_object* v_severity_653_, lean_object* v_isSilent_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
uint8_t v_severity_boxed_658_; uint8_t v_isSilent_boxed_659_; lean_object* v_res_660_; 
v_severity_boxed_658_ = lean_unbox(v_severity_653_);
v_isSilent_boxed_659_ = lean_unbox(v_isSilent_654_);
v_res_660_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3(v_msgData_652_, v_severity_boxed_658_, v_isSilent_boxed_659_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2(lean_object* v_msgData_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
uint8_t v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; 
v___x_665_ = 1;
v___x_666_ = 0;
v___x_667_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2_spec__3(v_msgData_661_, v___x_665_, v___x_666_, v___y_662_, v___y_663_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2___boxed(lean_object* v_msgData_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2(v_msgData_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(lean_object* v_msg_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_ref_677_; lean_object* v___x_678_; lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_687_; 
v_ref_677_ = lean_ctor_get(v___y_674_, 2);
v___x_678_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1(v_msg_673_, v___y_674_, v___y_675_);
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_687_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_687_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v___x_685_; 
lean_inc(v_ref_677_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_ref_677_);
lean_ctor_set(v___x_683_, 1, v_a_679_);
if (v_isShared_682_ == 0)
{
lean_ctor_set_tag(v___x_681_, 1);
lean_ctor_set(v___x_681_, 0, v___x_683_);
v___x_685_ = v___x_681_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_msg_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v_msg_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg(lean_object* v_ref_693_, lean_object* v_msg_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_toCold_698_; lean_object* v_currRecDepth_699_; lean_object* v_ref_700_; uint8_t v_diag_701_; uint8_t v_suppressElabErrors_702_; lean_object* v_ref_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v_toCold_698_ = lean_ctor_get(v___y_695_, 0);
v_currRecDepth_699_ = lean_ctor_get(v___y_695_, 1);
v_ref_700_ = lean_ctor_get(v___y_695_, 2);
v_diag_701_ = lean_ctor_get_uint8(v___y_695_, sizeof(void*)*3);
v_suppressElabErrors_702_ = lean_ctor_get_uint8(v___y_695_, sizeof(void*)*3 + 1);
v_ref_703_ = l_Lean_replaceRef(v_ref_693_, v_ref_700_);
lean_inc(v_currRecDepth_699_);
lean_inc_ref(v_toCold_698_);
v___x_704_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_704_, 0, v_toCold_698_);
lean_ctor_set(v___x_704_, 1, v_currRecDepth_699_);
lean_ctor_set(v___x_704_, 2, v_ref_703_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*3, v_diag_701_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*3 + 1, v_suppressElabErrors_702_);
v___x_705_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v_msg_694_, v___x_704_, v___y_696_);
lean_dec_ref_known(v___x_704_, 3);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg___boxed(lean_object* v_ref_706_, lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg(v_ref_706_, v_msg_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v_ref_706_);
return v_res_711_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__0));
v___x_714_ = l_Lean_stringToMessageData(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__2));
v___x_717_ = l_Lean_stringToMessageData(v___x_716_);
return v___x_717_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__4));
v___x_720_ = l_Lean_stringToMessageData(v___x_719_);
return v___x_720_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__6));
v___x_723_ = l_Lean_stringToMessageData(v___x_722_);
return v___x_723_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__8));
v___x_726_ = l_Lean_stringToMessageData(v___x_725_);
return v___x_726_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__10));
v___x_729_ = l_Lean_stringToMessageData(v___x_728_);
return v___x_729_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13(void){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__12));
v___x_732_ = l_Lean_stringToMessageData(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg(lean_object* v_msg_733_, lean_object* v_declHint_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v_env_739_; uint8_t v___x_740_; 
v___x_737_ = l_Lean_instInhabitedName;
v___x_738_ = lean_st_ref_get(v___y_735_);
v_env_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc_ref(v_env_739_);
lean_dec(v___x_738_);
v___x_740_ = l_Lean_Name_isAnonymous(v_declHint_734_);
if (v___x_740_ == 0)
{
uint8_t v_isExporting_741_; 
v_isExporting_741_ = lean_ctor_get_uint8(v_env_739_, sizeof(void*)*8);
if (v_isExporting_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec_ref(v_env_739_);
lean_dec(v_declHint_734_);
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v_msg_733_);
return v___x_742_;
}
else
{
lean_object* v___x_743_; uint8_t v___x_744_; 
lean_inc_ref(v_env_739_);
v___x_743_ = l_Lean_Environment_setExporting(v_env_739_, v___x_740_);
lean_inc(v_declHint_734_);
lean_inc_ref(v___x_743_);
v___x_744_ = l_Lean_Environment_contains(v___x_743_, v_declHint_734_, v_isExporting_741_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
lean_dec_ref(v___x_743_);
lean_dec_ref(v_env_739_);
lean_dec(v_declHint_734_);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v_msg_733_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_c_751_; lean_object* v___x_752_; 
v___x_746_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__2);
v___x_747_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__5);
v___x_748_ = l_Lean_Options_empty;
v___x_749_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_749_, 0, v___x_743_);
lean_ctor_set(v___x_749_, 1, v___x_746_);
lean_ctor_set(v___x_749_, 2, v___x_747_);
lean_ctor_set(v___x_749_, 3, v___x_748_);
lean_inc(v_declHint_734_);
v___x_750_ = l_Lean_MessageData_ofConstName(v_declHint_734_, v___x_740_);
v_c_751_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_751_, 0, v___x_749_);
lean_ctor_set(v_c_751_, 1, v___x_750_);
v___x_752_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_739_, v_declHint_734_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
lean_dec_ref(v_env_739_);
lean_dec(v_declHint_734_);
v___x_753_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v_c_751_);
v___x_755_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__3);
v___x_756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = l_Lean_MessageData_note(v___x_756_);
v___x_758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_758_, 0, v_msg_733_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
else
{
lean_object* v_val_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_794_; 
v_val_760_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_794_ == 0)
{
v___x_762_ = v___x_752_;
v_isShared_763_ = v_isSharedCheck_794_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_val_760_);
lean_dec(v___x_752_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_794_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v_mod_766_; uint8_t v___x_767_; 
v___x_764_ = l_Lean_Environment_header(v_env_739_);
lean_dec_ref(v_env_739_);
v___x_765_ = l_Lean_EnvironmentHeader_moduleNames(v___x_764_);
lean_dec_ref(v___x_764_);
v_mod_766_ = lean_array_get(v___x_737_, v___x_765_, v_val_760_);
lean_dec(v_val_760_);
lean_dec_ref(v___x_765_);
v___x_767_ = l_Lean_isPrivateName(v_declHint_734_);
lean_dec(v_declHint_734_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_768_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__5);
v___x_769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v_c_751_);
v___x_770_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__7);
v___x_771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___x_772_ = l_Lean_MessageData_ofName(v_mod_766_);
v___x_773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_771_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__9);
v___x_775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = l_Lean_MessageData_note(v___x_775_);
v___x_777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_777_, 0, v_msg_733_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
if (v_isShared_763_ == 0)
{
lean_ctor_set_tag(v___x_762_, 0);
lean_ctor_set(v___x_762_, 0, v___x_777_);
v___x_779_ = v___x_762_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_781_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
lean_ctor_set(v___x_782_, 1, v_c_751_);
v___x_783_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__11);
v___x_784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = l_Lean_MessageData_ofName(v_mod_766_);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___closed__13);
v___x_788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = l_Lean_MessageData_note(v___x_788_);
v___x_790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_790_, 0, v_msg_733_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
if (v_isShared_763_ == 0)
{
lean_ctor_set_tag(v___x_762_, 0);
lean_ctor_set(v___x_762_, 0, v___x_790_);
v___x_792_ = v___x_762_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_795_; 
lean_dec_ref(v_env_739_);
lean_dec(v_declHint_734_);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v_msg_733_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg___boxed(lean_object* v_msg_796_, lean_object* v_declHint_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_796_, v_declHint_797_, v___y_798_);
lean_dec(v___y_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12(lean_object* v_msg_801_, lean_object* v_declHint_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___x_806_; lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_816_; 
v___x_806_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_801_, v_declHint_802_, v___y_804_);
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_816_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_811_ = l_Lean_unknownIdentifierMessageTag;
v___x_812_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
lean_ctor_set(v___x_812_, 1, v_a_807_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_812_);
v___x_814_ = v___x_809_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12___boxed(lean_object* v_msg_817_, lean_object* v_declHint_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12(v_msg_817_, v_declHint_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg(lean_object* v_ref_823_, lean_object* v_msg_824_, lean_object* v_declHint_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; lean_object* v_a_830_; lean_object* v___x_831_; 
v___x_829_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12(v_msg_824_, v_declHint_825_, v___y_826_, v___y_827_);
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref(v___x_829_);
v___x_831_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg(v_ref_823_, v_a_830_, v___y_826_, v___y_827_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg___boxed(lean_object* v_ref_832_, lean_object* v_msg_833_, lean_object* v_declHint_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg(v_ref_832_, v_msg_833_, v_declHint_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v_ref_832_);
return v_res_838_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__0));
v___x_841_ = l_Lean_stringToMessageData(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__2));
v___x_844_ = l_Lean_stringToMessageData(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(lean_object* v_ref_845_, lean_object* v_constName_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_850_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__1);
v___x_851_ = 0;
lean_inc(v_constName_846_);
v___x_852_ = l_Lean_MessageData_ofConstName(v_constName_846_, v___x_851_);
v___x_853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_850_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3);
v___x_855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_853_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
v___x_856_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg(v_ref_845_, v___x_855_, v_constName_846_, v___y_847_, v___y_848_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___boxed(lean_object* v_ref_857_, lean_object* v_constName_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(v_ref_857_, v_constName_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v_ref_857_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg(lean_object* v_constName_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_ref_867_; lean_object* v___x_868_; 
v_ref_867_ = lean_ctor_get(v___y_864_, 2);
v___x_868_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(v_ref_867_, v_constName_863_, v___y_864_, v___y_865_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg___boxed(lean_object* v_constName_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg(v_constName_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(lean_object* v_constName_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; lean_object* v_env_879_; uint8_t v___x_880_; lean_object* v___x_881_; 
v___x_878_ = lean_st_ref_get(v___y_876_);
v_env_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc_ref(v_env_879_);
lean_dec(v___x_878_);
v___x_880_ = 0;
lean_inc(v_constName_874_);
v___x_881_ = l_Lean_Environment_find_x3f(v_env_879_, v_constName_874_, v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg(v_constName_874_, v___y_875_, v___y_876_);
return v___x_882_;
}
else
{
lean_object* v_val_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec(v_constName_874_);
v_val_883_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_881_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_val_883_);
lean_dec(v___x_881_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set_tag(v___x_885_, 0);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_val_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4___boxed(lean_object* v_constName_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(v_constName_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
return v_res_895_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0);
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
return v___x_897_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
return v___x_899_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_904_ = l_Lean_MessageData_ofFormat(v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_907_ = l_Lean_stringToMessageData(v___x_906_);
return v___x_907_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_910_ = l_Lean_stringToMessageData(v___x_909_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_916_ = l_Lean_stringToMessageData(v___x_915_);
return v___x_916_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__0);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_923_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
lean_ctor_set(v___x_923_, 2, v___x_922_);
lean_ctor_set(v___x_923_, 3, v___x_922_);
lean_ctor_set(v___x_923_, 4, v___x_922_);
lean_ctor_set(v___x_923_, 5, v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
lean_ctor_set(v___x_925_, 2, v___x_924_);
lean_ctor_set(v___x_925_, 3, v___x_924_);
lean_ctor_set(v___x_925_, 4, v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_928_ = l_Lean_stringToMessageData(v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object* v___x_929_, lean_object* v___x_930_, lean_object* v___x_931_, lean_object* v___x_932_, lean_object* v___x_933_, lean_object* v___f_934_, lean_object* v___x_935_, lean_object* v_declName_936_, lean_object* v_stx_937_, uint8_t v___kind_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v_a_1038_; lean_object* v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; 
v___x_974_ = l_Lean_Name_mkStr2(v___x_929_, v___x_930_);
lean_inc(v_stx_937_);
v___x_975_ = l_Lean_Syntax_isOfKind(v_stx_937_, v___x_974_);
lean_dec(v___x_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
lean_dec(v_stx_937_);
lean_dec(v_declName_936_);
lean_dec_ref(v___f_934_);
lean_dec(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___x_1156_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1157_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1156_, v___y_939_, v___y_940_);
return v___x_1157_;
}
else
{
lean_object* v___x_1158_; lean_object* v_oldId_1159_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v_since_x3f_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v_text_x3f_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v_newId_x3f_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1158_ = lean_unsigned_to_nat(1u);
v_oldId_1159_ = l_Lean_Syntax_getArg(v_stx_937_, v___x_1158_);
v___x_1206_ = l_Lean_Syntax_getArg(v_stx_937_, v___x_935_);
v___x_1207_ = l_Lean_Syntax_isNone(v___x_1206_);
if (v___x_1207_ == 0)
{
uint8_t v___x_1208_; 
lean_inc(v___x_1206_);
v___x_1208_ = l_Lean_Syntax_matchesNull(v___x_1206_, v___x_1158_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
lean_dec(v___x_1206_);
lean_dec(v_oldId_1159_);
lean_dec(v_stx_937_);
lean_dec(v_declName_936_);
lean_dec_ref(v___f_934_);
lean_dec(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___x_1209_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1210_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1209_, v___y_939_, v___y_940_);
return v___x_1210_;
}
else
{
lean_object* v_newId_x3f_1211_; lean_object* v___x_1212_; 
v_newId_x3f_1211_ = l_Lean_Syntax_getArg(v___x_1206_, v___x_932_);
lean_dec(v___x_1206_);
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v_newId_x3f_1211_);
v_newId_x3f_1194_ = v___x_1212_;
v___y_1195_ = v___y_939_;
v___y_1196_ = v___y_940_;
goto v___jp_1193_;
}
}
else
{
lean_object* v___x_1213_; 
lean_dec(v___x_1206_);
v___x_1213_ = lean_box(0);
v_newId_x3f_1194_ = v___x_1213_;
v___y_1195_ = v___y_939_;
v___y_1196_ = v___y_940_;
goto v___jp_1193_;
}
v___jp_1160_:
{
lean_object* v_oldArg_1166_; 
v_oldArg_1166_ = l_Lean_TSyntax_getId(v_oldId_1159_);
lean_dec(v_oldId_1159_);
if (lean_obj_tag(v___y_1162_) == 0)
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_box(0);
v___y_1138_ = v___y_1161_;
v___y_1139_ = v___y_1164_;
v___y_1140_ = v_since_x3f_1163_;
v___y_1141_ = v_oldArg_1166_;
v___y_1142_ = v___y_1165_;
v___y_1143_ = v___x_1167_;
goto v___jp_1137_;
}
else
{
lean_object* v_val_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1176_; 
v_val_1168_ = lean_ctor_get(v___y_1162_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___y_1162_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1170_ = v___y_1162_;
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_val_1168_);
lean_dec(v___y_1162_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1176_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1174_; 
v___x_1172_ = l_Lean_TSyntax_getId(v_val_1168_);
lean_dec(v_val_1168_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1172_);
v___x_1174_ = v___x_1170_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
v___y_1138_ = v___y_1161_;
v___y_1139_ = v___y_1164_;
v___y_1140_ = v_since_x3f_1163_;
v___y_1141_ = v_oldArg_1166_;
v___y_1142_ = v___y_1165_;
v___y_1143_ = v___x_1174_;
goto v___jp_1137_;
}
}
}
}
v___jp_1177_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = lean_unsigned_to_nat(4u);
v___x_1184_ = l_Lean_Syntax_getArg(v_stx_937_, v___x_1183_);
lean_dec(v_stx_937_);
v___x_1185_ = l_Lean_Syntax_isNone(v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1186_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_1184_);
v___x_1187_ = l_Lean_Syntax_matchesNull(v___x_1184_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_dec(v___x_1184_);
lean_dec(v_text_x3f_1180_);
lean_dec(v___y_1178_);
lean_dec(v_oldId_1159_);
lean_dec(v_declName_936_);
lean_dec_ref(v___f_934_);
lean_dec(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___x_1188_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1189_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1188_, v___y_1181_, v___y_1182_);
return v___x_1189_;
}
else
{
lean_object* v_since_x3f_1190_; lean_object* v___x_1191_; 
v_since_x3f_1190_ = l_Lean_Syntax_getArg(v___x_1184_, v___y_1179_);
lean_dec(v___x_1184_);
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_since_x3f_1190_);
v___y_1161_ = v_text_x3f_1180_;
v___y_1162_ = v___y_1178_;
v_since_x3f_1163_ = v___x_1191_;
v___y_1164_ = v___y_1181_;
v___y_1165_ = v___y_1182_;
goto v___jp_1160_;
}
}
else
{
lean_object* v___x_1192_; 
lean_dec(v___x_1184_);
v___x_1192_ = lean_box(0);
v___y_1161_ = v_text_x3f_1180_;
v___y_1162_ = v___y_1178_;
v_since_x3f_1163_ = v___x_1192_;
v___y_1164_ = v___y_1181_;
v___y_1165_ = v___y_1182_;
goto v___jp_1160_;
}
}
v___jp_1193_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; 
v___x_1197_ = lean_unsigned_to_nat(3u);
v___x_1198_ = l_Lean_Syntax_getArg(v_stx_937_, v___x_1197_);
v___x_1199_ = l_Lean_Syntax_isNone(v___x_1198_);
if (v___x_1199_ == 0)
{
uint8_t v___x_1200_; 
lean_inc(v___x_1198_);
v___x_1200_ = l_Lean_Syntax_matchesNull(v___x_1198_, v___x_1158_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
lean_dec(v___x_1198_);
lean_dec(v_newId_x3f_1194_);
lean_dec(v_oldId_1159_);
lean_dec(v_stx_937_);
lean_dec(v_declName_936_);
lean_dec_ref(v___f_934_);
lean_dec(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___x_1201_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1202_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1201_, v___y_1195_, v___y_1196_);
return v___x_1202_;
}
else
{
lean_object* v_text_x3f_1203_; lean_object* v___x_1204_; 
v_text_x3f_1203_ = l_Lean_Syntax_getArg(v___x_1198_, v___x_932_);
lean_dec(v___x_1198_);
v___x_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_text_x3f_1203_);
v___y_1178_ = v_newId_x3f_1194_;
v___y_1179_ = v___x_1197_;
v_text_x3f_1180_ = v___x_1204_;
v___y_1181_ = v___y_1195_;
v___y_1182_ = v___y_1196_;
goto v___jp_1177_;
}
}
else
{
lean_object* v___x_1205_; 
lean_dec(v___x_1198_);
v___x_1205_ = lean_box(0);
v___y_1178_ = v_newId_x3f_1194_;
v___y_1179_ = v___x_1197_;
v_text_x3f_1180_ = v___x_1205_;
v___y_1181_ = v___y_1195_;
v___y_1182_ = v___y_1196_;
goto v___jp_1177_;
}
}
}
v___jp_942_:
{
lean_object* v___x_948_; lean_object* v_env_949_; lean_object* v_nextMacroScope_950_; lean_object* v_ngen_951_; lean_object* v_auxDeclNGen_952_; lean_object* v_traceState_953_; lean_object* v_messages_954_; lean_object* v_infoState_955_; lean_object* v_snapshotTasks_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_972_; 
v___x_948_ = lean_st_ref_take(v___y_947_);
v_env_949_ = lean_ctor_get(v___x_948_, 0);
v_nextMacroScope_950_ = lean_ctor_get(v___x_948_, 1);
v_ngen_951_ = lean_ctor_get(v___x_948_, 2);
v_auxDeclNGen_952_ = lean_ctor_get(v___x_948_, 3);
v_traceState_953_ = lean_ctor_get(v___x_948_, 4);
v_messages_954_ = lean_ctor_get(v___x_948_, 6);
v_infoState_955_ = lean_ctor_get(v___x_948_, 7);
v_snapshotTasks_956_ = lean_ctor_get(v___x_948_, 8);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; 
v_unused_973_ = lean_ctor_get(v___x_948_, 5);
lean_dec(v_unused_973_);
v___x_958_ = v___x_948_;
v_isShared_959_ = v_isSharedCheck_972_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_snapshotTasks_956_);
lean_inc(v_infoState_955_);
lean_inc(v_messages_954_);
lean_inc(v_traceState_953_);
lean_inc(v_auxDeclNGen_952_);
lean_inc(v_ngen_951_);
lean_inc(v_nextMacroScope_950_);
lean_inc(v_env_949_);
lean_dec(v___x_948_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_972_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v_toEnvExtension_961_; lean_object* v_asyncMode_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_960_ = l_Lean_Elab_deprecatedArgExt;
v_toEnvExtension_961_ = lean_ctor_get(v___x_960_, 0);
v_asyncMode_962_ = lean_ctor_get(v_toEnvExtension_961_, 2);
v___x_963_ = lean_box(0);
v___x_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_964_, 0, v_declName_936_);
lean_ctor_set(v___x_964_, 1, v___y_946_);
lean_ctor_set(v___x_964_, 2, v___y_943_);
lean_ctor_set(v___x_964_, 3, v___y_944_);
lean_ctor_set(v___x_964_, 4, v___y_945_);
v___x_965_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_960_, v_env_949_, v___x_964_, v_asyncMode_962_, v___x_931_);
v___x_966_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 5, v___x_966_);
lean_ctor_set(v___x_958_, 0, v___x_965_);
v___x_968_ = v___x_958_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_965_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_nextMacroScope_950_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_ngen_951_);
lean_ctor_set(v_reuseFailAlloc_971_, 3, v_auxDeclNGen_952_);
lean_ctor_set(v_reuseFailAlloc_971_, 4, v_traceState_953_);
lean_ctor_set(v_reuseFailAlloc_971_, 5, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_971_, 6, v_messages_954_);
lean_ctor_set(v_reuseFailAlloc_971_, 7, v_infoState_955_);
lean_ctor_set(v_reuseFailAlloc_971_, 8, v_snapshotTasks_956_);
v___x_968_ = v_reuseFailAlloc_971_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = lean_st_ref_put(v___y_947_, v___x_968_);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_963_);
return v___x_970_;
}
}
}
v___jp_976_:
{
if (lean_obj_tag(v___y_979_) == 0)
{
if (v___x_975_ == 0)
{
v___y_943_ = v___y_977_;
v___y_944_ = v___y_978_;
v___y_945_ = v___y_979_;
v___y_946_ = v___y_980_;
v___y_947_ = v___y_982_;
goto v___jp_942_;
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_984_ = l_Lean_logWarning___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__2(v___x_983_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_dec_ref_known(v___x_984_, 1);
v___y_943_ = v___y_977_;
v___y_944_ = v___y_978_;
v___y_945_ = v___y_979_;
v___y_946_ = v___y_980_;
v___y_947_ = v___y_982_;
goto v___jp_942_;
}
else
{
lean_dec(v___y_980_);
lean_dec(v___y_978_);
lean_dec(v___y_977_);
lean_dec(v_declName_936_);
lean_dec(v___x_931_);
return v___x_984_;
}
}
}
else
{
v___y_943_ = v___y_977_;
v___y_944_ = v___y_978_;
v___y_945_ = v___y_979_;
v___y_946_ = v___y_980_;
v___y_947_ = v___y_982_;
goto v___jp_942_;
}
}
v___jp_985_:
{
lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_994_ = lean_array_get_size(v___y_991_);
v___x_995_ = lean_nat_dec_lt(v___x_932_, v___x_994_);
lean_dec(v___x_932_);
if (v___x_995_ == 0)
{
lean_dec_ref(v___y_991_);
lean_dec(v___y_987_);
v___y_977_ = v___y_986_;
v___y_978_ = v___y_988_;
v___y_979_ = v___y_989_;
v___y_980_ = v___y_990_;
v___y_981_ = v___y_992_;
v___y_982_ = v___y_993_;
goto v___jp_976_;
}
else
{
if (v___x_995_ == 0)
{
lean_dec_ref(v___y_991_);
lean_dec(v___y_987_);
v___y_977_ = v___y_986_;
v___y_978_ = v___y_988_;
v___y_979_ = v___y_989_;
v___y_980_ = v___y_990_;
v___y_981_ = v___y_992_;
v___y_982_ = v___y_993_;
goto v___jp_976_;
}
else
{
size_t v___x_996_; size_t v___x_997_; uint8_t v___x_998_; 
v___x_996_ = ((size_t)0ULL);
v___x_997_ = lean_usize_of_nat(v___x_994_);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(v___y_990_, v___y_991_, v___x_996_, v___x_997_);
lean_dec_ref(v___y_991_);
if (v___x_998_ == 0)
{
lean_dec(v___y_987_);
v___y_977_ = v___y_986_;
v___y_978_ = v___y_988_;
v___y_979_ = v___y_989_;
v___y_980_ = v___y_990_;
v___y_981_ = v___y_992_;
v___y_982_ = v___y_993_;
goto v___jp_976_;
}
else
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_dec(v___y_989_);
lean_dec(v___y_988_);
lean_dec(v___y_986_);
lean_dec(v___x_931_);
v___x_999_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3);
v___x_1000_ = l_Lean_MessageData_ofName(v___y_990_);
v___x_1001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_999_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = l_Lean_MessageData_ofName(v_declName_936_);
v___x_1005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1007_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = l_Lean_MessageData_ofName(v___y_987_);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1011_, v___y_992_, v___y_993_);
return v___x_1012_;
}
}
}
}
v___jp_1013_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec_ref(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec(v___y_1016_);
lean_dec(v___y_1015_);
v___x_1022_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3);
v___x_1023_ = l_Lean_MessageData_ofName(v___y_1017_);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_Lean_MessageData_ofName(v_declName_936_);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1022_);
v___x_1030_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1029_, v___y_1014_, v___y_1021_);
return v___x_1030_;
}
v___jp_1031_:
{
if (lean_obj_tag(v___y_1033_) == 1)
{
lean_object* v_val_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
v_val_1039_ = lean_ctor_get(v___y_1033_, 0);
lean_inc(v_val_1039_);
v___x_1040_ = lean_array_get_size(v_a_1038_);
v___x_1041_ = lean_nat_dec_lt(v___x_932_, v___x_1040_);
if (v___x_1041_ == 0)
{
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___y_1014_ = v___y_1032_;
v___y_1015_ = v___y_1033_;
v___y_1016_ = v___y_1034_;
v___y_1017_ = v_val_1039_;
v___y_1018_ = v___y_1035_;
v___y_1019_ = v___y_1036_;
v___y_1020_ = v_a_1038_;
v___y_1021_ = v___y_1037_;
goto v___jp_1013_;
}
else
{
if (v___x_1041_ == 0)
{
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___y_1014_ = v___y_1032_;
v___y_1015_ = v___y_1033_;
v___y_1016_ = v___y_1034_;
v___y_1017_ = v_val_1039_;
v___y_1018_ = v___y_1035_;
v___y_1019_ = v___y_1036_;
v___y_1020_ = v_a_1038_;
v___y_1021_ = v___y_1037_;
goto v___jp_1013_;
}
else
{
size_t v___x_1042_; size_t v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = ((size_t)0ULL);
v___x_1043_ = lean_usize_of_nat(v___x_1040_);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(v_val_1039_, v_a_1038_, v___x_1042_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v___y_1014_ = v___y_1032_;
v___y_1015_ = v___y_1033_;
v___y_1016_ = v___y_1034_;
v___y_1017_ = v_val_1039_;
v___y_1018_ = v___y_1035_;
v___y_1019_ = v___y_1036_;
v___y_1020_ = v_a_1038_;
v___y_1021_ = v___y_1037_;
goto v___jp_1013_;
}
else
{
v___y_986_ = v___y_1033_;
v___y_987_ = v_val_1039_;
v___y_988_ = v___y_1034_;
v___y_989_ = v___y_1035_;
v___y_990_ = v___y_1036_;
v___y_991_ = v_a_1038_;
v___y_992_ = v___y_1032_;
v___y_993_ = v___y_1037_;
goto v___jp_985_;
}
}
}
}
else
{
lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1045_ = lean_array_get_size(v_a_1038_);
v___x_1046_ = lean_nat_dec_lt(v___x_932_, v___x_1045_);
lean_dec(v___x_932_);
if (v___x_1046_ == 0)
{
lean_dec_ref(v_a_1038_);
v___y_977_ = v___y_1033_;
v___y_978_ = v___y_1034_;
v___y_979_ = v___y_1035_;
v___y_980_ = v___y_1036_;
v___y_981_ = v___y_1032_;
v___y_982_ = v___y_1037_;
goto v___jp_976_;
}
else
{
if (v___x_1046_ == 0)
{
lean_dec_ref(v_a_1038_);
v___y_977_ = v___y_1033_;
v___y_978_ = v___y_1034_;
v___y_979_ = v___y_1035_;
v___y_980_ = v___y_1036_;
v___y_981_ = v___y_1032_;
v___y_982_ = v___y_1037_;
goto v___jp_976_;
}
else
{
size_t v___x_1047_; size_t v___x_1048_; uint8_t v___x_1049_; 
v___x_1047_ = ((size_t)0ULL);
v___x_1048_ = lean_usize_of_nat(v___x_1045_);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__3(v___y_1036_, v_a_1038_, v___x_1047_, v___x_1048_);
lean_dec_ref(v_a_1038_);
if (v___x_1049_ == 0)
{
v___y_977_ = v___y_1033_;
v___y_978_ = v___y_1034_;
v___y_979_ = v___y_1035_;
v___y_980_ = v___y_1036_;
v___y_981_ = v___y_1032_;
v___y_982_ = v___y_1037_;
goto v___jp_976_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
lean_dec(v___y_1035_);
lean_dec(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec(v___x_931_);
v___x_1050_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg___closed__3);
v___x_1051_ = l_Lean_MessageData_ofName(v___y_1036_);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = l_Lean_MessageData_ofName(v_declName_936_);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1058_, v___y_1032_, v___y_1037_);
return v___x_1059_;
}
}
}
}
}
v___jp_1060_:
{
lean_object* v___x_1067_; 
lean_inc(v_declName_936_);
v___x_1067_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(v_declName_936_, v___y_1061_, v___y_1065_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; uint8_t v___x_1071_; uint8_t v___x_1072_; uint8_t v___x_1073_; lean_object* v___x_1074_; uint64_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; size_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1069_ = l_Lean_ConstantInfo_type(v_a_1068_);
lean_dec(v_a_1068_);
v___x_1070_ = 0;
v___x_1071_ = 1;
v___x_1072_ = 0;
v___x_1073_ = 2;
v___x_1074_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1074_, 0, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 1, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 2, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 3, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 4, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 5, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 6, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 7, v___x_1070_);
lean_ctor_set_uint8(v___x_1074_, 8, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 9, v___x_1071_);
lean_ctor_set_uint8(v___x_1074_, 10, v___x_1072_);
lean_ctor_set_uint8(v___x_1074_, 11, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 12, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 13, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 14, v___x_1073_);
lean_ctor_set_uint8(v___x_1074_, 15, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 16, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 17, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 18, v___x_975_);
lean_ctor_set_uint8(v___x_1074_, 19, v___x_1070_);
v___x_1075_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1074_);
v___x_1076_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set_uint64(v___x_1076_, sizeof(void*)*1, v___x_1075_);
v___x_1077_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1078_ = lean_unsigned_to_nat(32u);
v___x_1079_ = lean_mk_empty_array_with_capacity(v___x_1078_);
v___x_1080_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1_spec__1___closed__3);
v___x_1081_ = ((size_t)5ULL);
lean_inc_n(v___x_932_, 7);
v___x_1082_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1079_);
lean_ctor_set(v___x_1082_, 2, v___x_932_);
lean_ctor_set(v___x_1082_, 3, v___x_932_);
lean_ctor_set_usize(v___x_1082_, 4, v___x_1081_);
v___x_1083_ = lean_box(1);
lean_inc_ref(v___x_1082_);
v___x_1084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1077_);
lean_ctor_set(v___x_1084_, 1, v___x_1082_);
lean_ctor_set(v___x_1084_, 2, v___x_1083_);
v___x_1085_ = lean_mk_empty_array_with_capacity(v___x_932_);
v___x_1086_ = lean_box(0);
lean_inc(v___x_933_);
v___x_1087_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1087_, 0, v___x_1076_);
lean_ctor_set(v___x_1087_, 1, v___x_933_);
lean_ctor_set(v___x_1087_, 2, v___x_1084_);
lean_ctor_set(v___x_1087_, 3, v___x_1085_);
lean_ctor_set(v___x_1087_, 4, v___x_1086_);
lean_ctor_set(v___x_1087_, 5, v___x_932_);
lean_ctor_set(v___x_1087_, 6, v___x_1086_);
lean_ctor_set_uint8(v___x_1087_, sizeof(void*)*7, v___x_1070_);
lean_ctor_set_uint8(v___x_1087_, sizeof(void*)*7 + 1, v___x_1070_);
lean_ctor_set_uint8(v___x_1087_, sizeof(void*)*7 + 2, v___x_1070_);
lean_ctor_set_uint8(v___x_1087_, sizeof(void*)*7 + 3, v___x_975_);
v___x_1088_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1088_, 0, v___x_932_);
lean_ctor_set(v___x_1088_, 1, v___x_932_);
lean_ctor_set(v___x_1088_, 2, v___x_932_);
lean_ctor_set(v___x_1088_, 3, v___x_932_);
lean_ctor_set(v___x_1088_, 4, v___x_1077_);
lean_ctor_set(v___x_1088_, 5, v___x_1077_);
lean_ctor_set(v___x_1088_, 6, v___x_1077_);
lean_ctor_set(v___x_1088_, 7, v___x_1077_);
lean_ctor_set(v___x_1088_, 8, v___x_1077_);
lean_ctor_set(v___x_1088_, 9, v___x_1077_);
lean_ctor_set(v___x_1088_, 10, v___x_1077_);
v___x_1089_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1090_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1088_);
lean_ctor_set(v___x_1091_, 1, v___x_1089_);
lean_ctor_set(v___x_1091_, 2, v___x_933_);
lean_ctor_set(v___x_1091_, 3, v___x_1082_);
lean_ctor_set(v___x_1091_, 4, v___x_1090_);
v___x_1092_ = lean_st_mk_ref(v___x_1091_);
v___x_1093_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__5___redArg(v___x_1069_, v___f_934_, v___x_1070_, v___x_1070_, v___x_1087_, v___x_1092_, v___y_1061_, v___y_1065_);
lean_dec_ref_known(v___x_1087_, 7);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = lean_st_ref_get(v___x_1092_);
lean_dec(v___x_1092_);
lean_dec(v___x_1095_);
v___y_1032_ = v___y_1061_;
v___y_1033_ = v___y_1062_;
v___y_1034_ = v___y_1063_;
v___y_1035_ = v___y_1066_;
v___y_1036_ = v___y_1064_;
v___y_1037_ = v___y_1065_;
v_a_1038_ = v_a_1094_;
goto v___jp_1031_;
}
else
{
lean_dec(v___x_1092_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1096_; 
v_a_1096_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1093_, 1);
v___y_1032_ = v___y_1061_;
v___y_1033_ = v___y_1062_;
v___y_1034_ = v___y_1063_;
v___y_1035_ = v___y_1066_;
v___y_1036_ = v___y_1064_;
v___y_1037_ = v___y_1065_;
v_a_1038_ = v_a_1096_;
goto v___jp_1031_;
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
lean_dec(v___y_1066_);
lean_dec(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec(v_declName_936_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v_a_1097_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1093_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1093_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v___y_1066_);
lean_dec(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec(v_declName_936_);
lean_dec_ref(v___f_934_);
lean_dec(v___x_933_);
lean_dec(v___x_932_);
lean_dec(v___x_931_);
v_a_1105_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1067_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1067_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
v___jp_1113_:
{
if (lean_obj_tag(v___y_1114_) == 0)
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_box(0);
v___y_1061_ = v___y_1115_;
v___y_1062_ = v___y_1116_;
v___y_1063_ = v___y_1119_;
v___y_1064_ = v___y_1117_;
v___y_1065_ = v___y_1118_;
v___y_1066_ = v___x_1120_;
goto v___jp_1060_;
}
else
{
lean_object* v_val_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1129_; 
v_val_1121_ = lean_ctor_get(v___y_1114_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___y_1114_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1123_ = v___y_1114_;
v_isShared_1124_ = v_isSharedCheck_1129_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_val_1121_);
lean_dec(v___y_1114_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1129_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1125_ = l_Lean_TSyntax_getString(v_val_1121_);
lean_dec(v_val_1121_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1125_);
v___x_1127_ = v___x_1123_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1125_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
v___y_1061_ = v___y_1115_;
v___y_1062_ = v___y_1116_;
v___y_1063_ = v___y_1119_;
v___y_1064_ = v___y_1117_;
v___y_1065_ = v___y_1118_;
v___y_1066_ = v___x_1127_;
goto v___jp_1060_;
}
}
}
}
v___jp_1130_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_box(0);
v___y_1114_ = v___y_1132_;
v___y_1115_ = v___y_1131_;
v___y_1116_ = v___y_1133_;
v___y_1117_ = v___y_1134_;
v___y_1118_ = v___y_1135_;
v___y_1119_ = v___x_1136_;
goto v___jp_1113_;
}
v___jp_1137_:
{
if (lean_obj_tag(v___y_1138_) == 0)
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_box(0);
v___y_1114_ = v___y_1140_;
v___y_1115_ = v___y_1139_;
v___y_1116_ = v___y_1143_;
v___y_1117_ = v___y_1141_;
v___y_1118_ = v___y_1142_;
v___y_1119_ = v___x_1144_;
goto v___jp_1113_;
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1155_; 
v_val_1145_ = lean_ctor_get(v___y_1138_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___y_1138_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1147_ = v___y_1138_;
v_isShared_1148_ = v_isSharedCheck_1155_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_val_1145_);
lean_dec(v___y_1138_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1155_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1149_ = l_Lean_TSyntax_getString(v_val_1145_);
lean_dec(v_val_1145_);
v___x_1150_ = lean_string_utf8_byte_size(v___x_1149_);
v___x_1151_ = lean_nat_dec_eq(v___x_1150_, v___x_932_);
if (v___x_1151_ == 0)
{
if (v___x_975_ == 0)
{
lean_dec_ref(v___x_1149_);
lean_del_object(v___x_1147_);
v___y_1131_ = v___y_1139_;
v___y_1132_ = v___y_1140_;
v___y_1133_ = v___y_1143_;
v___y_1134_ = v___y_1141_;
v___y_1135_ = v___y_1142_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1153_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1149_);
v___x_1153_ = v___x_1147_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1149_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
v___y_1114_ = v___y_1140_;
v___y_1115_ = v___y_1139_;
v___y_1116_ = v___y_1143_;
v___y_1117_ = v___y_1141_;
v___y_1118_ = v___y_1142_;
v___y_1119_ = v___x_1153_;
goto v___jp_1113_;
}
}
}
else
{
lean_dec_ref(v___x_1149_);
lean_del_object(v___x_1147_);
v___y_1131_ = v___y_1139_;
v___y_1132_ = v___y_1140_;
v___y_1133_ = v___y_1143_;
v___y_1134_ = v___y_1141_;
v___y_1135_ = v___y_1142_;
goto v___jp_1130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object* v___x_1214_, lean_object* v___x_1215_, lean_object* v___x_1216_, lean_object* v___x_1217_, lean_object* v___x_1218_, lean_object* v___f_1219_, lean_object* v___x_1220_, lean_object* v_declName_1221_, lean_object* v_stx_1222_, lean_object* v___kind_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
uint8_t v___kind_boxed_1227_; lean_object* v_res_1228_; 
v___kind_boxed_1227_ = lean_unbox(v___kind_1223_);
v_res_1228_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(v___x_1214_, v___x_1215_, v___x_1216_, v___x_1217_, v___x_1218_, v___f_1219_, v___x_1220_, v_declName_1221_, v_stx_1222_, v___kind_boxed_1227_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___x_1220_);
return v_res_1228_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1231_ = l_Lean_stringToMessageData(v___x_1230_);
return v___x_1231_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1234_ = l_Lean_stringToMessageData(v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(lean_object* v___x_1235_, lean_object* v_decl_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1240_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1241_ = l_Lean_MessageData_ofName(v___x_1235_);
v___x_1242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1242_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v___x_1244_, v___y_1237_, v___y_1238_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object* v___x_1246_, lean_object* v_decl_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(v___x_1246_, v_decl_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v_decl_1247_);
return v_res_1251_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1254_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1255_ = lean_obj_once(&l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0, &l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0_once, _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0);
v___x_1256_ = l_Lean_Name_str___override(v___x_1255_, v___x_1254_);
return v___x_1256_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1258_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1259_ = l_Lean_Name_str___override(v___x_1258_, v___x_1257_);
return v___x_1259_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1261_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1262_ = l_Lean_Name_str___override(v___x_1261_, v___x_1260_);
return v___x_1262_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1265_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1266_ = l_Lean_Name_str___override(v___x_1265_, v___x_1264_);
return v___x_1266_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1269_ = l_Lean_Name_num___override(v___x_1268_, v___x_1267_);
return v___x_1269_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1271_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1272_ = l_Lean_Name_str___override(v___x_1271_, v___x_1270_);
return v___x_1272_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1274_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1275_ = l_Lean_Name_str___override(v___x_1274_, v___x_1273_);
return v___x_1275_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1278_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1279_ = l_Lean_Name_str___override(v___x_1278_, v___x_1277_);
return v___x_1279_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1282_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1283_ = l_Lean_Name_str___override(v___x_1282_, v___x_1281_);
return v___x_1283_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1285_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1286_ = l_Lean_Name_str___override(v___x_1285_, v___x_1284_);
return v___x_1286_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___x_1288_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1289_ = l_Lean_Name_str___override(v___x_1288_, v___x_1287_);
return v___x_1289_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1291_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1292_ = l_Lean_Name_str___override(v___x_1291_, v___x_1290_);
return v___x_1292_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1293_ = lean_unsigned_to_nat(3249530483u);
v___x_1294_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1295_ = l_Lean_Name_num___override(v___x_1294_, v___x_1293_);
return v___x_1295_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1298_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1299_ = l_Lean_Name_str___override(v___x_1298_, v___x_1297_);
return v___x_1299_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1302_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1303_ = l_Lean_Name_str___override(v___x_1302_, v___x_1301_);
return v___x_1303_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1304_ = lean_unsigned_to_nat(2u);
v___x_1305_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1306_ = l_Lean_Name_num___override(v___x_1305_, v___x_1304_);
return v___x_1306_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___f_1315_; 
v___x_1308_ = lean_unsigned_to_nat(2u);
v___f_1309_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1310_ = lean_box(1);
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_obj_once(&l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0, &l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0_once, _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default___closed__0);
v___x_1313_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1314_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_));
v___f_1315_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___lam__1_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed), 13, 7);
lean_closure_set(v___f_1315_, 0, v___x_1314_);
lean_closure_set(v___f_1315_, 1, v___x_1313_);
lean_closure_set(v___f_1315_, 2, v___x_1312_);
lean_closure_set(v___f_1315_, 3, v___x_1311_);
lean_closure_set(v___f_1315_, 4, v___x_1310_);
lean_closure_set(v___f_1315_, 5, v___f_1309_);
lean_closure_set(v___f_1315_, 6, v___x_1308_);
return v___f_1315_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1321_ = 0;
v___x_1322_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1323_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___x_1324_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1325_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1323_);
lean_ctor_set(v___x_1325_, 2, v___x_1322_);
lean_ctor_set_uint8(v___x_1325_, sizeof(void*)*3, v___x_1321_);
return v___x_1325_;
}
}
static lean_object* _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1326_; lean_object* v___f_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___f_1326_ = ((lean_object*)(l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_));
v___f_1327_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1328_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1329_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
lean_ctor_set(v___x_1329_, 1, v___f_1327_);
lean_ctor_set(v___x_1329_, 2, v___f_1326_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_obj_once(&l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_, &l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_);
v___x_1332_ = l_Lean_registerBuiltinAttribute(v___x_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2____boxed(lean_object* v_a_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_();
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_1335_, lean_object* v_msg_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___redArg(v_msg_1336_, v___y_1337_, v___y_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_msg_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_throwError___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__1(v_00_u03b1_1341_, v_msg_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6(lean_object* v_00_u03b1_1347_, lean_object* v_constName_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1352_; 
v___x_1352_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___redArg(v_constName_1348_, v___y_1349_, v___y_1350_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object* v_00_u03b1_1353_, lean_object* v_constName_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6(v_00_u03b1_1353_, v_constName_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9(lean_object* v_00_u03b1_1359_, lean_object* v_ref_1360_, lean_object* v_constName_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(v_ref_1360_, v_constName_1361_, v___y_1362_, v___y_1363_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9___boxed(lean_object* v_00_u03b1_1366_, lean_object* v_ref_1367_, lean_object* v_constName_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9(v_00_u03b1_1366_, v_ref_1367_, v_constName_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v_ref_1367_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11(lean_object* v_00_u03b1_1373_, lean_object* v_ref_1374_, lean_object* v_msg_1375_, lean_object* v_declHint_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___redArg(v_ref_1374_, v_msg_1375_, v_declHint_1376_, v___y_1377_, v___y_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11___boxed(lean_object* v_00_u03b1_1381_, lean_object* v_ref_1382_, lean_object* v_msg_1383_, lean_object* v_declHint_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11(v_00_u03b1_1381_, v_ref_1382_, v_msg_1383_, v_declHint_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v_ref_1382_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13(lean_object* v_msg_1389_, lean_object* v_declHint_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_1389_, v_declHint_1390_, v___y_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13___boxed(lean_object* v_msg_1395_, lean_object* v_declHint_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__12_spec__13(v_msg_1395_, v_declHint_1396_, v___y_1397_, v___y_1398_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13(lean_object* v_00_u03b1_1401_, lean_object* v_ref_1402_, lean_object* v_msg_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___redArg(v_ref_1402_, v_msg_1403_, v___y_1404_, v___y_1405_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13___boxed(lean_object* v_00_u03b1_1408_, lean_object* v_ref_1409_, lean_object* v_msg_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__11_spec__13(v_00_u03b1_1408_, v_ref_1409_, v_msg_1410_, v___y_1411_, v___y_1412_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v_ref_1409_);
return v_res_1414_;
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DeprecatedArg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_817751715____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_linter_deprecated_arg = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_linter_deprecated_arg);
lean_dec_ref(res);
l_Lean_Elab_instInhabitedDeprecatedArgEntry_default = _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedDeprecatedArgEntry_default);
l_Lean_Elab_instInhabitedDeprecatedArgEntry = _init_l_Lean_Elab_instInhabitedDeprecatedArgEntry();
lean_mark_persistent(l_Lean_Elab_instInhabitedDeprecatedArgEntry);
res = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_2070725456____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_deprecatedArgExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_deprecatedArgExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DeprecatedArg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DeprecatedArg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeprecatedArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DeprecatedArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DeprecatedArg(builtin);
}
#ifdef __cplusplus
}
#endif

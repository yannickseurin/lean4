// Lean compiler output
// Module: Lean.Elab.DeclModifiers
// Imports: public import Lean.DocString.Add public import Lean.Linter.Init meta import Lean.Parser.Command
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Linter_logLintIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "redundantVisibility"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 183, 142, 94, 198, 206, 172, 100)}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "warn on redundant `private`/`public` visibility modifiers"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__3_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__0_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(219, 182, 224, 198, 198, 122, 225, 30)}};
static const lean_ctor_object l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__1_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(255, 159, 36, 111, 164, 106, 106, 218)}};
static const lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_linter_redundantVisibility;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a non-private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is a reserved name"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringVisibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringVisibility___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringVisibility___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringVisibility = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "; the modifier has no effect"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`public` is the default visibility"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " inside a `public section`"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9_value;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected visibility modifier"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11;
static const lean_string_object l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "`private` has no effect in a `module` file outside `public section`; declarations are already `private` by default"};
static const lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12 = (const lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind;
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instBEqComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instBEqComputeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instBEqComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instBEqComputeKind = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Elab.ComputeKind.regular"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__1 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__1_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.ComputeKind.meta"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__2 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__3 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.ComputeKind.noncomputable"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__4 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__5 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__5_value;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__6;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprComputeKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprComputeKind = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
static const lean_array_object l_Lean_Elab_instInhabitedModifiers_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedModifiers_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 2, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers_default = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__3;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "local "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scoped "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__6;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nonrec"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__20 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "noncomputable"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__22 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "protected"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__24 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__25 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__26 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__27 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__28 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__29 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__30 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/--"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__31 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__32 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-/"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__33 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__34 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value)} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatModifiers = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value)} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringModifiers = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
static const lean_string_object l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__5_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid declaration name `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`, structure `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "` has field `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "protected declarations must be in a namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_root_"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkDeclName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 175, 53, 50, 212, 152, 178, 8)}};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "invalid declaration name `_root_`, `_root_` is a prefix used to refer to the 'root' namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_expandDeclIdCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__0 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value;
static const lean_string_object l_Lean_Elab_expandDeclIdCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__1 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__2 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__3 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "a universe level named `"};
static const lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 182, 79, 155, 204, 118, 39, 140)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1(lean_object*);
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__0_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__7_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__8_value),((lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__6_value)}};
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10_value;
static const lean_closure_object l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__2_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__4_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_DeclModifiers_0__Lean_initFn___closed__6_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
return v_res_56_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_box(0);
v___x_58_ = l_unsafeCast___redArg(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_unsigned_to_nat(32u);
v___x_63_ = lean_mk_empty_array_with_capacity(v___x_62_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4(void){
_start:
{
size_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_65_ = ((size_t)5ULL);
v___x_66_ = lean_unsigned_to_nat(0u);
v___x_67_ = lean_unsigned_to_nat(32u);
v___x_68_ = lean_mk_empty_array_with_capacity(v___x_67_);
v___x_69_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3);
v___x_70_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
lean_ctor_set(v___x_70_, 2, v___x_66_);
lean_ctor_set(v___x_70_, 3, v___x_66_);
lean_ctor_set_usize(v___x_70_, 4, v___x_65_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_box(1);
v___x_72_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_73_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2);
v___x_74_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object* v_____do__lift_75_, uint8_t v___x_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_____do__lift_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_80_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v_____do__lift_75_);
v___x_82_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5);
v___x_83_ = lean_box(0);
v___x_84_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_84_, 0, v___x_81_);
lean_ctor_set(v___x_84_, 1, v___x_82_);
lean_ctor_set(v___x_84_, 2, v___x_83_);
lean_ctor_set(v___x_84_, 3, v_____do__lift_79_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*4, v___x_76_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*4 + 1, v___x_76_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
v___x_86_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_77_, v_inst_78_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object* v_____do__lift_87_, lean_object* v___x_88_, lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_____do__lift_91_){
_start:
{
uint8_t v___x_694__boxed_92_; lean_object* v_res_93_; 
v___x_694__boxed_92_ = lean_unbox(v___x_88_);
v_res_93_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(v_____do__lift_87_, v___x_694__boxed_92_, v_inst_89_, v_inst_90_, v_____do__lift_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t v___x_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_inst_98_, lean_object* v_declName_99_, lean_object* v_toBind_100_, lean_object* v_____do__lift_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_102_ = lean_box(v___x_94_);
lean_inc_ref(v_inst_95_);
v___f_103_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_103_, 0, v_____do__lift_101_);
lean_closure_set(v___f_103_, 1, v___x_102_);
lean_closure_set(v___f_103_, 2, v_inst_95_);
lean_closure_set(v___f_103_, 3, v_inst_96_);
v___x_104_ = l_Lean_mkConstWithLevelParams___redArg(v_inst_95_, v_inst_97_, v_inst_98_, v_declName_99_);
v___x_105_ = lean_apply_4(v_toBind_100_, lean_box(0), lean_box(0), v___x_104_, v___f_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object* v___x_106_, lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_declName_111_, lean_object* v_toBind_112_, lean_object* v_____do__lift_113_){
_start:
{
uint8_t v___x_740__boxed_114_; lean_object* v_res_115_; 
v___x_740__boxed_114_ = lean_unbox(v___x_106_);
v_res_115_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(v___x_740__boxed_114_, v_inst_107_, v_inst_108_, v_inst_109_, v_inst_110_, v_declName_111_, v_toBind_112_, v_____do__lift_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object* v_toMonadRef_116_, uint8_t v___x_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_toBind_122_, lean_object* v_declName_123_){
_start:
{
lean_object* v_getRef_124_; lean_object* v___x_125_; lean_object* v___f_126_; lean_object* v___x_127_; 
v_getRef_124_ = lean_ctor_get(v_toMonadRef_116_, 0);
lean_inc(v_getRef_124_);
lean_dec_ref(v_toMonadRef_116_);
v___x_125_ = lean_box(v___x_117_);
lean_inc(v_toBind_122_);
v___f_126_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_126_, 0, v___x_125_);
lean_closure_set(v___f_126_, 1, v_inst_118_);
lean_closure_set(v___f_126_, 2, v_inst_119_);
lean_closure_set(v___f_126_, 3, v_inst_120_);
lean_closure_set(v___f_126_, 4, v_inst_121_);
lean_closure_set(v___f_126_, 5, v_declName_123_);
lean_closure_set(v___f_126_, 6, v_toBind_122_);
v___x_127_ = lean_apply_4(v_toBind_122_, lean_box(0), lean_box(0), v_getRef_124_, v___f_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object* v_toMonadRef_128_, lean_object* v___x_129_, lean_object* v_inst_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_inst_133_, lean_object* v_toBind_134_, lean_object* v_declName_135_){
_start:
{
uint8_t v___x_766__boxed_136_; lean_object* v_res_137_; 
v___x_766__boxed_136_ = lean_unbox(v___x_129_);
v_res_137_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_128_, v___x_766__boxed_136_, v_inst_130_, v_inst_131_, v_inst_132_, v_inst_133_, v_toBind_134_, v_declName_135_);
return v_res_137_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0));
v___x_140_ = l_Lean_stringToMessageData(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2));
v___x_143_ = l_Lean_stringToMessageData(v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object* v_val_144_, uint8_t v___x_145_, lean_object* v_inst_146_, lean_object* v_inst_147_, lean_object* v_____r_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_149_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_150_ = l_Lean_MessageData_ofConstName(v_val_144_, v___x_145_);
v___x_151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
v___x_152_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = l_Lean_throwError___redArg(v_inst_146_, v_inst_147_, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object* v_val_155_, lean_object* v___x_156_, lean_object* v_inst_157_, lean_object* v_inst_158_, lean_object* v_____r_159_){
_start:
{
uint8_t v___x_800__boxed_160_; lean_object* v_res_161_; 
v___x_800__boxed_160_ = lean_unbox(v___x_156_);
v_res_161_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(v_val_155_, v___x_800__boxed_160_, v_inst_157_, v_inst_158_, v_____r_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object* v_declName_162_, lean_object* v_toPure_163_, lean_object* v_env_164_, lean_object* v_inst_165_, lean_object* v_inst_166_, lean_object* v_addInfo_167_, lean_object* v_toBind_168_, lean_object* v_____r_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_privateToUserName_x3f(v_declName_162_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_dec(v_toBind_168_);
lean_dec(v_addInfo_167_);
lean_dec_ref(v_inst_166_);
lean_dec_ref(v_inst_165_);
lean_dec_ref(v_env_164_);
v___x_171_ = lean_box(0);
v___x_172_ = lean_apply_2(v_toPure_163_, lean_box(0), v___x_171_);
return v___x_172_;
}
else
{
lean_object* v_val_173_; uint8_t v___x_174_; uint8_t v___x_175_; 
v_val_173_ = lean_ctor_get(v___x_170_, 0);
lean_inc_n(v_val_173_, 2);
lean_dec_ref_known(v___x_170_, 1);
v___x_174_ = 1;
v___x_175_ = l_Lean_Environment_contains(v_env_164_, v_val_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec(v_val_173_);
lean_dec(v_toBind_168_);
lean_dec(v_addInfo_167_);
lean_dec_ref(v_inst_166_);
lean_dec_ref(v_inst_165_);
v___x_176_ = lean_box(0);
v___x_177_ = lean_apply_2(v_toPure_163_, lean_box(0), v___x_176_);
return v___x_177_;
}
else
{
lean_object* v___x_178_; lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_toPure_163_);
v___x_178_ = lean_box(v___x_174_);
lean_inc(v_val_173_);
v___f_179_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_179_, 0, v_val_173_);
lean_closure_set(v___f_179_, 1, v___x_178_);
lean_closure_set(v___f_179_, 2, v_inst_165_);
lean_closure_set(v___f_179_, 3, v_inst_166_);
v___x_180_ = lean_apply_1(v_addInfo_167_, v_val_173_);
v___x_181_ = lean_apply_4(v_toBind_168_, lean_box(0), lean_box(0), v___x_180_, v___f_179_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object* v___f_182_, lean_object* v_____r_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_apply_1(v___f_182_, v_____r_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0));
v___x_187_ = l_Lean_stringToMessageData(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object* v_declName_188_, uint8_t v___x_189_, lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_toBind_192_, lean_object* v___f_193_, lean_object* v_____r_194_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_195_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_196_ = l_Lean_MessageData_ofConstName(v_declName_188_, v___x_189_);
v___x_197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_197_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = l_Lean_throwError___redArg(v_inst_190_, v_inst_191_, v___x_199_);
v___x_201_ = lean_apply_4(v_toBind_192_, lean_box(0), lean_box(0), v___x_200_, v___f_193_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object* v_declName_202_, lean_object* v___x_203_, lean_object* v_inst_204_, lean_object* v_inst_205_, lean_object* v_toBind_206_, lean_object* v___f_207_, lean_object* v_____r_208_){
_start:
{
uint8_t v___x_877__boxed_209_; lean_object* v_res_210_; 
v___x_877__boxed_209_ = lean_unbox(v___x_203_);
v_res_210_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(v_declName_202_, v___x_877__boxed_209_, v_inst_204_, v_inst_205_, v_toBind_206_, v___f_207_, v_____r_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object* v_env_211_, lean_object* v_declName_212_, lean_object* v___f_213_, lean_object* v_inst_214_, lean_object* v_inst_215_, lean_object* v_toBind_216_, lean_object* v___f_217_, lean_object* v_addInfo_218_, lean_object* v_____r_219_){
_start:
{
lean_object* v___x_220_; uint8_t v___x_221_; uint8_t v___x_222_; 
lean_inc(v_declName_212_);
v___x_220_ = l_Lean_mkPrivateName(v_env_211_, v_declName_212_);
v___x_221_ = 1;
lean_inc(v___x_220_);
v___x_222_ = l_Lean_Environment_contains(v_env_211_, v___x_220_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; 
lean_dec(v___x_220_);
lean_dec(v_addInfo_218_);
lean_dec(v___f_217_);
lean_dec(v_toBind_216_);
lean_dec_ref(v_inst_215_);
lean_dec_ref(v_inst_214_);
lean_dec(v_declName_212_);
v___x_223_ = lean_box(0);
v___x_224_ = lean_apply_1(v___f_213_, v___x_223_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; lean_object* v___f_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v___f_213_);
v___x_225_ = lean_box(v___x_221_);
lean_inc(v_toBind_216_);
v___f_226_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed), 7, 6);
lean_closure_set(v___f_226_, 0, v_declName_212_);
lean_closure_set(v___f_226_, 1, v___x_225_);
lean_closure_set(v___f_226_, 2, v_inst_214_);
lean_closure_set(v___f_226_, 3, v_inst_215_);
lean_closure_set(v___f_226_, 4, v_toBind_216_);
lean_closure_set(v___f_226_, 5, v___f_217_);
v___x_227_ = lean_apply_1(v_addInfo_218_, v___x_220_);
v___x_228_ = lean_apply_4(v_toBind_216_, lean_box(0), lean_box(0), v___x_227_, v___f_226_);
return v___x_228_;
}
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0));
v___x_231_ = l_Lean_stringToMessageData(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object* v___f_235_, lean_object* v_declName_236_, uint8_t v___x_237_, lean_object* v_inst_238_, lean_object* v_inst_239_, lean_object* v_toBind_240_, lean_object* v___f_241_, lean_object* v_env_242_, lean_object* v_____do__lift_243_){
_start:
{
uint8_t v___y_245_; lean_object* v___x_255_; uint8_t v___x_256_; 
lean_inc(v_declName_236_);
v___x_255_ = l_Lean_privateToUserName(v_declName_236_);
lean_inc_ref(v_env_242_);
v___x_256_ = lean_is_reserved_name(v_env_242_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; uint8_t v___x_258_; 
lean_inc(v_declName_236_);
v___x_257_ = l_Lean_mkPrivateName(v_____do__lift_243_, v_declName_236_);
v___x_258_ = lean_is_reserved_name(v_env_242_, v___x_257_);
v___y_245_ = v___x_258_;
goto v___jp_244_;
}
else
{
lean_dec_ref(v_env_242_);
v___y_245_ = v___x_256_;
goto v___jp_244_;
}
v___jp_244_:
{
if (v___y_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v___f_241_);
lean_dec(v_toBind_240_);
lean_dec_ref(v_inst_239_);
lean_dec_ref(v_inst_238_);
lean_dec(v_declName_236_);
v___x_246_ = lean_box(0);
v___x_247_ = lean_apply_1(v___f_235_, v___x_246_);
return v___x_247_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v___f_235_);
v___x_248_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_249_ = l_Lean_MessageData_ofConstName(v_declName_236_, v___x_237_);
v___x_250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = l_Lean_throwError___redArg(v_inst_238_, v_inst_239_, v___x_252_);
v___x_254_ = lean_apply_4(v_toBind_240_, lean_box(0), lean_box(0), v___x_253_, v___f_241_);
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object* v___f_259_, lean_object* v_declName_260_, lean_object* v___x_261_, lean_object* v_inst_262_, lean_object* v_inst_263_, lean_object* v_toBind_264_, lean_object* v___f_265_, lean_object* v_env_266_, lean_object* v_____do__lift_267_){
_start:
{
uint8_t v___x_950__boxed_268_; lean_object* v_res_269_; 
v___x_950__boxed_268_ = lean_unbox(v___x_261_);
v_res_269_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(v___f_259_, v_declName_260_, v___x_950__boxed_268_, v_inst_262_, v_inst_263_, v_toBind_264_, v___f_265_, v_env_266_, v_____do__lift_267_);
lean_dec_ref(v_____do__lift_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object* v_toBind_270_, lean_object* v_getEnv_271_, lean_object* v___f_272_, lean_object* v_____r_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = lean_apply_4(v_toBind_270_, lean_box(0), lean_box(0), v_getEnv_271_, v___f_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0));
v___x_277_ = l_Lean_stringToMessageData(v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object* v_declName_278_, uint8_t v___x_279_, lean_object* v_inst_280_, lean_object* v_inst_281_, lean_object* v_toBind_282_, lean_object* v___f_283_, lean_object* v___f_284_, lean_object* v_____r_285_){
_start:
{
lean_object* v___x_286_; 
lean_inc(v_declName_278_);
v___x_286_ = l_Lean_privateToUserName_x3f(v_declName_278_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_dec(v___f_284_);
v___x_287_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_288_ = l_Lean_MessageData_ofConstName(v_declName_278_, v___x_279_);
v___x_289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_throwError___redArg(v_inst_280_, v_inst_281_, v___x_291_);
v___x_293_ = lean_apply_4(v_toBind_282_, lean_box(0), lean_box(0), v___x_292_, v___f_283_);
return v___x_293_;
}
else
{
lean_object* v_val_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec(v___f_283_);
lean_dec(v_declName_278_);
v_val_294_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_val_294_);
lean_dec_ref_known(v___x_286_, 1);
v___x_295_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_296_ = l_Lean_MessageData_ofConstName(v_val_294_, v___x_279_);
v___x_297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = l_Lean_throwError___redArg(v_inst_280_, v_inst_281_, v___x_299_);
v___x_301_ = lean_apply_4(v_toBind_282_, lean_box(0), lean_box(0), v___x_300_, v___f_284_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object* v_declName_302_, lean_object* v___x_303_, lean_object* v_inst_304_, lean_object* v_inst_305_, lean_object* v_toBind_306_, lean_object* v___f_307_, lean_object* v___f_308_, lean_object* v_____r_309_){
_start:
{
uint8_t v___x_1024__boxed_310_; lean_object* v_res_311_; 
v___x_1024__boxed_310_ = lean_unbox(v___x_303_);
v_res_311_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(v_declName_302_, v___x_1024__boxed_310_, v_inst_304_, v_inst_305_, v_toBind_306_, v___f_307_, v___f_308_, v_____r_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object* v_toMonadRef_312_, lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_inst_315_, lean_object* v_inst_316_, lean_object* v_toBind_317_, lean_object* v_declName_318_, lean_object* v_toPure_319_, lean_object* v_getEnv_320_, lean_object* v_inst_321_, lean_object* v_env_322_){
_start:
{
uint8_t v___x_323_; lean_object* v___x_324_; lean_object* v_addInfo_325_; lean_object* v_env_326_; lean_object* v___f_327_; lean_object* v___f_328_; lean_object* v___f_329_; lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v___f_332_; uint8_t v___x_333_; uint8_t v___x_334_; 
v___x_323_ = 0;
v___x_324_ = lean_box(v___x_323_);
lean_inc_n(v_toBind_317_, 4);
lean_inc_ref_n(v_inst_316_, 4);
lean_inc_ref(v_inst_315_);
lean_inc_ref(v_inst_314_);
lean_inc_ref_n(v_inst_313_, 4);
lean_inc_ref(v_toMonadRef_312_);
v_addInfo_325_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v_addInfo_325_, 0, v_toMonadRef_312_);
lean_closure_set(v_addInfo_325_, 1, v___x_324_);
lean_closure_set(v_addInfo_325_, 2, v_inst_313_);
lean_closure_set(v_addInfo_325_, 3, v_inst_314_);
lean_closure_set(v_addInfo_325_, 4, v_inst_315_);
lean_closure_set(v_addInfo_325_, 5, v_inst_316_);
lean_closure_set(v_addInfo_325_, 6, v_toBind_317_);
v_env_326_ = l_Lean_Environment_setExporting(v_env_322_, v___x_323_);
lean_inc_ref(v_addInfo_325_);
lean_inc_ref_n(v_env_326_, 4);
lean_inc_n(v_declName_318_, 4);
v___f_327_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4), 8, 7);
lean_closure_set(v___f_327_, 0, v_declName_318_);
lean_closure_set(v___f_327_, 1, v_toPure_319_);
lean_closure_set(v___f_327_, 2, v_env_326_);
lean_closure_set(v___f_327_, 3, v_inst_313_);
lean_closure_set(v___f_327_, 4, v_inst_316_);
lean_closure_set(v___f_327_, 5, v_addInfo_325_);
lean_closure_set(v___f_327_, 6, v_toBind_317_);
lean_inc_ref(v___f_327_);
v___f_328_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_328_, 0, v___f_327_);
v___f_329_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7), 9, 8);
lean_closure_set(v___f_329_, 0, v_env_326_);
lean_closure_set(v___f_329_, 1, v_declName_318_);
lean_closure_set(v___f_329_, 2, v___f_327_);
lean_closure_set(v___f_329_, 3, v_inst_313_);
lean_closure_set(v___f_329_, 4, v_inst_316_);
lean_closure_set(v___f_329_, 5, v_toBind_317_);
lean_closure_set(v___f_329_, 6, v___f_328_);
lean_closure_set(v___f_329_, 7, v_addInfo_325_);
lean_inc_ref(v___f_329_);
v___f_330_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_330_, 0, v___f_329_);
v___x_331_ = lean_box(v___x_323_);
v___f_332_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_332_, 0, v___f_329_);
lean_closure_set(v___f_332_, 1, v_declName_318_);
lean_closure_set(v___f_332_, 2, v___x_331_);
lean_closure_set(v___f_332_, 3, v_inst_313_);
lean_closure_set(v___f_332_, 4, v_inst_316_);
lean_closure_set(v___f_332_, 5, v_toBind_317_);
lean_closure_set(v___f_332_, 6, v___f_330_);
lean_closure_set(v___f_332_, 7, v_env_326_);
v___x_333_ = 1;
v___x_334_ = l_Lean_Environment_contains(v_env_326_, v_declName_318_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v_declName_318_);
lean_dec_ref(v_inst_316_);
lean_dec_ref(v_inst_314_);
lean_dec_ref(v_toMonadRef_312_);
v___x_335_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v_getEnv_320_, v___f_332_);
v___x_336_ = l_Lean_withEnv___redArg(v_inst_313_, v_inst_321_, v_inst_315_, v_env_326_, v___x_335_);
return v___x_336_;
}
else
{
lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___f_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
lean_inc_n(v_toBind_317_, 3);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8), 4, 3);
lean_closure_set(v___f_337_, 0, v_toBind_317_);
lean_closure_set(v___f_337_, 1, v_getEnv_320_);
lean_closure_set(v___f_337_, 2, v___f_332_);
v___x_338_ = lean_box(v___x_333_);
lean_inc_ref(v___f_337_);
lean_inc_ref(v_inst_316_);
lean_inc_ref_n(v_inst_313_, 2);
lean_inc(v_declName_318_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_339_, 0, v_declName_318_);
lean_closure_set(v___f_339_, 1, v___x_338_);
lean_closure_set(v___f_339_, 2, v_inst_313_);
lean_closure_set(v___f_339_, 3, v_inst_316_);
lean_closure_set(v___f_339_, 4, v_toBind_317_);
lean_closure_set(v___f_339_, 5, v___f_337_);
lean_closure_set(v___f_339_, 6, v___f_337_);
lean_inc_ref(v_inst_315_);
v___x_340_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_312_, v___x_323_, v_inst_313_, v_inst_314_, v_inst_315_, v_inst_316_, v_toBind_317_, v_declName_318_);
v___x_341_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v___x_340_, v___f_339_);
v___x_342_ = l_Lean_withEnv___redArg(v_inst_313_, v_inst_321_, v_inst_315_, v_env_326_, v___x_341_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_inst_346_, lean_object* v_inst_347_, lean_object* v_declName_348_){
_start:
{
lean_object* v_toApplicative_349_; lean_object* v_toBind_350_; lean_object* v_getEnv_351_; lean_object* v_toMonadRef_352_; lean_object* v_toPure_353_; lean_object* v___f_354_; lean_object* v___x_355_; 
v_toApplicative_349_ = lean_ctor_get(v_inst_343_, 0);
v_toBind_350_ = lean_ctor_get(v_inst_343_, 1);
lean_inc_n(v_toBind_350_, 2);
v_getEnv_351_ = lean_ctor_get(v_inst_344_, 0);
lean_inc_n(v_getEnv_351_, 2);
v_toMonadRef_352_ = lean_ctor_get(v_inst_345_, 1);
lean_inc_ref(v_toMonadRef_352_);
v_toPure_353_ = lean_ctor_get(v_toApplicative_349_, 1);
lean_inc(v_toPure_353_);
v___f_354_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10), 11, 10);
lean_closure_set(v___f_354_, 0, v_toMonadRef_352_);
lean_closure_set(v___f_354_, 1, v_inst_343_);
lean_closure_set(v___f_354_, 2, v_inst_347_);
lean_closure_set(v___f_354_, 3, v_inst_344_);
lean_closure_set(v___f_354_, 4, v_inst_345_);
lean_closure_set(v___f_354_, 5, v_toBind_350_);
lean_closure_set(v___f_354_, 6, v_declName_348_);
lean_closure_set(v___f_354_, 7, v_toPure_353_);
lean_closure_set(v___f_354_, 8, v_getEnv_351_);
lean_closure_set(v___f_354_, 9, v_inst_346_);
v___x_355_ = lean_apply_4(v_toBind_350_, lean_box(0), lean_box(0), v_getEnv_351_, v___f_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object* v_m_356_, lean_object* v_inst_357_, lean_object* v_inst_358_, lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_inst_361_, lean_object* v_declName_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_357_, v_inst_358_, v_inst_359_, v_inst_360_, v_inst_361_, v_declName_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx(uint8_t v_x_364_){
_start:
{
switch(v_x_364_)
{
case 0:
{
lean_object* v___x_365_; 
v___x_365_ = lean_unsigned_to_nat(0u);
return v___x_365_;
}
case 1:
{
lean_object* v___x_366_; 
v___x_366_ = lean_unsigned_to_nat(1u);
return v___x_366_;
}
default: 
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(2u);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___boxed(lean_object* v_x_368_){
_start:
{
uint8_t v_x_boxed_369_; lean_object* v_res_370_; 
v_x_boxed_369_ = lean_unbox(v_x_368_);
v_res_370_ = l_Lean_Elab_Visibility_ctorIdx(v_x_boxed_369_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object* v_k_371_){
_start:
{
lean_inc(v_k_371_);
return v_k_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object* v_k_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Elab_Visibility_ctorElim___redArg(v_k_372_);
lean_dec(v_k_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object* v_motive_374_, lean_object* v_ctorIdx_375_, uint8_t v_t_376_, lean_object* v_h_377_, lean_object* v_k_378_){
_start:
{
lean_inc(v_k_378_);
return v_k_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object* v_motive_379_, lean_object* v_ctorIdx_380_, lean_object* v_t_381_, lean_object* v_h_382_, lean_object* v_k_383_){
_start:
{
uint8_t v_t_boxed_384_; lean_object* v_res_385_; 
v_t_boxed_384_ = lean_unbox(v_t_381_);
v_res_385_ = l_Lean_Elab_Visibility_ctorElim(v_motive_379_, v_ctorIdx_380_, v_t_boxed_384_, v_h_382_, v_k_383_);
lean_dec(v_k_383_);
lean_dec(v_ctorIdx_380_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object* v_regular_386_){
_start:
{
lean_inc(v_regular_386_);
return v_regular_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object* v_regular_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Elab_Visibility_regular_elim___redArg(v_regular_387_);
lean_dec(v_regular_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object* v_motive_389_, uint8_t v_t_390_, lean_object* v_h_391_, lean_object* v_regular_392_){
_start:
{
lean_inc(v_regular_392_);
return v_regular_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_regular_396_){
_start:
{
uint8_t v_t_boxed_397_; lean_object* v_res_398_; 
v_t_boxed_397_ = lean_unbox(v_t_394_);
v_res_398_ = l_Lean_Elab_Visibility_regular_elim(v_motive_393_, v_t_boxed_397_, v_h_395_, v_regular_396_);
lean_dec(v_regular_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object* v_private_399_){
_start:
{
lean_inc(v_private_399_);
return v_private_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object* v_private_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Elab_Visibility_private_elim___redArg(v_private_400_);
lean_dec(v_private_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object* v_motive_402_, uint8_t v_t_403_, lean_object* v_h_404_, lean_object* v_private_405_){
_start:
{
lean_inc(v_private_405_);
return v_private_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_private_409_){
_start:
{
uint8_t v_t_boxed_410_; lean_object* v_res_411_; 
v_t_boxed_410_ = lean_unbox(v_t_407_);
v_res_411_ = l_Lean_Elab_Visibility_private_elim(v_motive_406_, v_t_boxed_410_, v_h_408_, v_private_409_);
lean_dec(v_private_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object* v_public_412_){
_start:
{
lean_inc(v_public_412_);
return v_public_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object* v_public_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Elab_Visibility_public_elim___redArg(v_public_413_);
lean_dec(v_public_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object* v_motive_415_, uint8_t v_t_416_, lean_object* v_h_417_, lean_object* v_public_418_){
_start:
{
lean_inc(v_public_418_);
return v_public_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object* v_motive_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_public_422_){
_start:
{
uint8_t v_t_boxed_423_; lean_object* v_res_424_; 
v_t_boxed_423_ = lean_unbox(v_t_420_);
v_res_424_ = l_Lean_Elab_Visibility_public_elim(v_motive_419_, v_t_boxed_423_, v_h_421_, v_public_422_);
lean_dec(v_public_422_);
return v_res_424_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility_default(void){
_start:
{
uint8_t v___x_425_; 
v___x_425_ = 0;
return v___x_425_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility(void){
_start:
{
uint8_t v___x_426_; 
v___x_426_ = 0;
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t v_x_430_){
_start:
{
switch(v_x_430_)
{
case 0:
{
lean_object* v___x_431_; 
v___x_431_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__0));
return v___x_431_;
}
case 1:
{
lean_object* v___x_432_; 
v___x_432_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__1));
return v___x_432_;
}
default: 
{
lean_object* v___x_433_; 
v___x_433_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__2));
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object* v_x_434_){
_start:
{
uint8_t v_x_36__boxed_435_; lean_object* v_res_436_; 
v_x_36__boxed_435_ = lean_unbox(v_x_434_);
v_res_436_ = l_Lean_Elab_instToStringVisibility___lam__0(v_x_36__boxed_435_);
return v_res_436_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t v_x_439_){
_start:
{
if (v_x_439_ == 1)
{
uint8_t v___x_440_; 
v___x_440_ = 1;
return v___x_440_;
}
else
{
uint8_t v___x_441_; 
v___x_441_ = 0;
return v___x_441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object* v_x_442_){
_start:
{
uint8_t v_x_17__boxed_443_; uint8_t v_res_444_; lean_object* v_r_445_; 
v_x_17__boxed_443_ = lean_unbox(v_x_442_);
v_res_444_ = l_Lean_Elab_Visibility_isPrivate(v_x_17__boxed_443_);
v_r_445_ = lean_box(v_res_444_);
return v_r_445_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t v_x_446_){
_start:
{
if (v_x_446_ == 2)
{
uint8_t v___x_447_; 
v___x_447_ = 1;
return v___x_447_;
}
else
{
uint8_t v___x_448_; 
v___x_448_ = 0;
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object* v_x_449_){
_start:
{
uint8_t v_x_17__boxed_450_; uint8_t v_res_451_; lean_object* v_r_452_; 
v_x_17__boxed_450_ = lean_unbox(v_x_449_);
v_res_451_ = l_Lean_Elab_Visibility_isPublic(v_x_17__boxed_450_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object* v_env_453_, uint8_t v_v_454_){
_start:
{
uint8_t v___y_456_; uint8_t v_isExporting_459_; 
v_isExporting_459_ = lean_ctor_get_uint8(v_env_453_, sizeof(void*)*8);
if (v_isExporting_459_ == 0)
{
lean_object* v___x_460_; uint8_t v_isModule_461_; 
v___x_460_ = l_Lean_Environment_header(v_env_453_);
v_isModule_461_ = lean_ctor_get_uint8(v___x_460_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_460_);
if (v_isModule_461_ == 0)
{
uint8_t v___x_462_; 
v___x_462_ = 1;
v___y_456_ = v___x_462_;
goto v___jp_455_;
}
else
{
uint8_t v___x_463_; 
v___x_463_ = l_Lean_Elab_Visibility_isPublic(v_v_454_);
return v___x_463_;
}
}
else
{
v___y_456_ = v_isExporting_459_;
goto v___jp_455_;
}
v___jp_455_:
{
uint8_t v___x_457_; 
v___x_457_ = l_Lean_Elab_Visibility_isPrivate(v_v_454_);
if (v___x_457_ == 0)
{
return v___y_456_;
}
else
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object* v_env_464_, lean_object* v_v_465_){
_start:
{
uint8_t v_v_boxed_466_; uint8_t v_res_467_; lean_object* v_r_468_; 
v_v_boxed_466_ = lean_unbox(v_v_465_);
v_res_467_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_464_, v_v_boxed_466_);
lean_dec_ref(v_env_464_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__0(lean_object* v_toPure_469_, lean_object* v_____r_470_){
_start:
{
uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = 2;
v___x_472_ = lean_box(v___x_471_);
v___x_473_ = lean_apply_2(v_toPure_469_, lean_box(0), v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__2(lean_object* v_toPure_474_, lean_object* v_____r_475_){
_start:
{
uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = 1;
v___x_477_ = lean_box(v___x_476_);
v___x_478_ = lean_apply_2(v_toPure_474_, lean_box(0), v___x_477_);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__0));
v___x_481_ = l_Lean_stringToMessageData(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__2));
v___x_484_ = l_Lean_stringToMessageData(v___x_483_);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__10));
v___x_501_ = l_Lean_stringToMessageData(v___x_500_);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__12));
v___x_504_ = l_Lean_stringToMessageData(v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3(lean_object* v_vis_x3f_505_, lean_object* v_toPure_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_inst_510_, lean_object* v_inst_511_, lean_object* v_inst_512_, lean_object* v_toBind_513_, lean_object* v___f_514_, lean_object* v___f_515_, lean_object* v___f_516_, lean_object* v___f_517_, lean_object* v_env_518_){
_start:
{
if (lean_obj_tag(v_vis_x3f_505_) == 0)
{
uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec(v___f_517_);
lean_dec(v___f_516_);
lean_dec(v___f_515_);
lean_dec(v___f_514_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_508_);
lean_dec_ref(v_inst_507_);
v___x_522_ = 0;
v___x_523_ = lean_box(v___x_522_);
v___x_524_ = lean_apply_2(v_toPure_506_, lean_box(0), v___x_523_);
return v___x_524_;
}
else
{
lean_object* v_val_525_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; uint8_t v___y_544_; lean_object* v___x_547_; uint8_t v___x_548_; uint8_t v___y_550_; 
lean_dec(v_toPure_506_);
v_val_525_ = lean_ctor_get(v_vis_x3f_505_, 0);
lean_inc_n(v_val_525_, 2);
lean_dec_ref_known(v_vis_x3f_505_, 1);
v___x_547_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__8));
v___x_548_ = l_Lean_Syntax_isOfKind(v_val_525_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_554_; uint8_t v___x_555_; 
lean_dec(v___f_517_);
lean_dec(v___f_516_);
v___x_554_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__9));
lean_inc(v_val_525_);
v___x_555_ = l_Lean_Syntax_isOfKind(v_val_525_, v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec(v___f_515_);
lean_dec(v___f_514_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
v___x_556_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__11);
v___x_557_ = l_Lean_throwErrorAt___redArg(v_inst_507_, v_inst_508_, v_val_525_, v___x_556_);
return v___x_557_;
}
else
{
lean_object* v___x_558_; 
lean_dec_ref(v_inst_508_);
v___x_558_ = l_Lean_Syntax_getHeadInfo(v_val_525_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_dec_ref_known(v___x_558_, 4);
v___y_550_ = v___x_555_;
goto v___jp_549_;
}
else
{
lean_dec(v___x_558_);
if (v___x_548_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v_val_525_);
lean_dec(v___f_514_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_507_);
v___x_559_ = lean_box(0);
v___x_560_ = lean_apply_1(v___f_515_, v___x_559_);
return v___x_560_;
}
else
{
v___y_550_ = v___x_548_;
goto v___jp_549_;
}
}
}
}
else
{
lean_object* v___x_561_; 
lean_dec(v___f_515_);
lean_dec(v___f_514_);
lean_dec_ref(v_inst_508_);
v___x_561_ = l_Lean_Syntax_getHeadInfo(v_val_525_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v___x_562_; uint8_t v_isModule_563_; 
lean_dec_ref_known(v___x_561_, 4);
v___x_562_ = l_Lean_Environment_header(v_env_518_);
v_isModule_563_ = lean_ctor_get_uint8(v___x_562_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_562_);
if (v_isModule_563_ == 0)
{
lean_dec(v_val_525_);
lean_dec(v___f_517_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_507_);
goto v___jp_519_;
}
else
{
uint8_t v_isExporting_564_; 
v_isExporting_564_ = lean_ctor_get_uint8(v_env_518_, sizeof(void*)*8);
if (v_isExporting_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec(v___f_516_);
v___x_565_ = l_Lean_linter_redundantVisibility;
v___x_566_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__13);
v___x_567_ = l_Lean_Linter_logLintIf___redArg(v_inst_507_, v_inst_509_, v_inst_510_, v_inst_511_, v_inst_512_, v___x_565_, v_val_525_, v___x_566_);
v___x_568_ = lean_apply_4(v_toBind_513_, lean_box(0), lean_box(0), v___x_567_, v___f_517_);
return v___x_568_;
}
else
{
lean_dec(v_val_525_);
lean_dec(v___f_517_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_507_);
goto v___jp_519_;
}
}
}
else
{
lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec(v___x_561_);
lean_dec(v_val_525_);
lean_dec(v___f_517_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_507_);
v___x_569_ = lean_box(0);
v___x_570_ = lean_apply_1(v___f_516_, v___x_569_);
return v___x_570_;
}
}
v___jp_526_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_inc_ref(v___y_529_);
v___x_530_ = l_Lean_stringToMessageData(v___y_529_);
lean_inc_ref(v___y_528_);
v___x_531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_531_, 0, v___y_528_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__1);
v___x_533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
lean_inc_ref(v___y_527_);
v___x_534_ = l_Lean_Linter_logLintIf___redArg(v_inst_507_, v_inst_509_, v_inst_510_, v_inst_511_, v_inst_512_, v___y_527_, v_val_525_, v___x_533_);
v___x_535_ = lean_apply_4(v_toBind_513_, lean_box(0), lean_box(0), v___x_534_, v___f_514_);
return v___x_535_;
}
v___jp_536_:
{
lean_object* v___x_537_; uint8_t v_isModule_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_537_ = l_Lean_Environment_header(v_env_518_);
v_isModule_538_ = lean_ctor_get_uint8(v___x_537_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_537_);
v___x_539_ = l_Lean_linter_redundantVisibility;
v___x_540_ = lean_obj_once(&l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3, &l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_elabVisibility___redArg___lam__3___closed__3);
if (v_isModule_538_ == 0)
{
lean_object* v___x_541_; 
v___x_541_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4));
v___y_527_ = v___x_539_;
v___y_528_ = v___x_540_;
v___y_529_ = v___x_541_;
goto v___jp_526_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__5));
v___y_527_ = v___x_539_;
v___y_528_ = v___x_540_;
v___y_529_ = v___x_542_;
goto v___jp_526_;
}
}
v___jp_543_:
{
if (v___y_544_ == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; 
lean_dec(v_val_525_);
lean_dec(v___f_514_);
lean_dec(v_toBind_513_);
lean_dec_ref(v_inst_512_);
lean_dec(v_inst_511_);
lean_dec(v_inst_510_);
lean_dec_ref(v_inst_509_);
lean_dec_ref(v_inst_507_);
v___x_545_ = lean_box(0);
v___x_546_ = lean_apply_1(v___f_515_, v___x_545_);
return v___x_546_;
}
else
{
lean_dec(v___f_515_);
goto v___jp_536_;
}
}
v___jp_549_:
{
uint8_t v_isExporting_551_; 
v_isExporting_551_ = lean_ctor_get_uint8(v_env_518_, sizeof(void*)*8);
if (v_isExporting_551_ == 0)
{
lean_object* v___x_552_; uint8_t v_isModule_553_; 
v___x_552_ = l_Lean_Environment_header(v_env_518_);
v_isModule_553_ = lean_ctor_get_uint8(v___x_552_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_552_);
if (v_isModule_553_ == 0)
{
v___y_544_ = v___y_550_;
goto v___jp_543_;
}
else
{
v___y_544_ = v___x_548_;
goto v___jp_543_;
}
}
else
{
lean_dec(v___f_515_);
goto v___jp_536_;
}
}
}
v___jp_519_:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_box(0);
v___x_521_ = lean_apply_1(v___f_516_, v___x_520_);
return v___x_521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg___lam__3___boxed(lean_object* v_vis_x3f_571_, lean_object* v_toPure_572_, lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_inst_577_, lean_object* v_inst_578_, lean_object* v_toBind_579_, lean_object* v___f_580_, lean_object* v___f_581_, lean_object* v___f_582_, lean_object* v___f_583_, lean_object* v_env_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Elab_elabVisibility___redArg___lam__3(v_vis_x3f_571_, v_toPure_572_, v_inst_573_, v_inst_574_, v_inst_575_, v_inst_576_, v_inst_577_, v_inst_578_, v_toBind_579_, v___f_580_, v___f_581_, v___f_582_, v___f_583_, v_env_584_);
lean_dec_ref(v_env_584_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___redArg(lean_object* v_inst_586_, lean_object* v_inst_587_, lean_object* v_inst_588_, lean_object* v_inst_589_, lean_object* v_inst_590_, lean_object* v_inst_591_, lean_object* v_vis_x3f_592_){
_start:
{
lean_object* v_toApplicative_593_; lean_object* v_toBind_594_; lean_object* v_getEnv_595_; lean_object* v_toPure_596_; lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___f_600_; lean_object* v___f_601_; lean_object* v___x_602_; 
v_toApplicative_593_ = lean_ctor_get(v_inst_586_, 0);
v_toBind_594_ = lean_ctor_get(v_inst_586_, 1);
lean_inc_n(v_toBind_594_, 2);
v_getEnv_595_ = lean_ctor_get(v_inst_588_, 0);
lean_inc(v_getEnv_595_);
v_toPure_596_ = lean_ctor_get(v_toApplicative_593_, 1);
lean_inc_n(v_toPure_596_, 3);
v___f_597_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__0), 2, 1);
lean_closure_set(v___f_597_, 0, v_toPure_596_);
lean_inc_ref(v___f_597_);
v___f_598_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_598_, 0, v___f_597_);
v___f_599_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__2), 2, 1);
lean_closure_set(v___f_599_, 0, v_toPure_596_);
lean_inc_ref(v___f_599_);
v___f_600_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_600_, 0, v___f_599_);
v___f_601_ = lean_alloc_closure((void*)(l_Lean_Elab_elabVisibility___redArg___lam__3___boxed), 14, 13);
lean_closure_set(v___f_601_, 0, v_vis_x3f_592_);
lean_closure_set(v___f_601_, 1, v_toPure_596_);
lean_closure_set(v___f_601_, 2, v_inst_586_);
lean_closure_set(v___f_601_, 3, v_inst_587_);
lean_closure_set(v___f_601_, 4, v_inst_590_);
lean_closure_set(v___f_601_, 5, v_inst_591_);
lean_closure_set(v___f_601_, 6, v_inst_589_);
lean_closure_set(v___f_601_, 7, v_inst_588_);
lean_closure_set(v___f_601_, 8, v_toBind_594_);
lean_closure_set(v___f_601_, 9, v___f_598_);
lean_closure_set(v___f_601_, 10, v___f_597_);
lean_closure_set(v___f_601_, 11, v___f_599_);
lean_closure_set(v___f_601_, 12, v___f_600_);
v___x_602_ = lean_apply_4(v_toBind_594_, lean_box(0), lean_box(0), v_getEnv_595_, v___f_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility(lean_object* v_m_603_, lean_object* v_inst_604_, lean_object* v_inst_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_vis_x3f_610_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lean_Elab_elabVisibility___redArg(v_inst_604_, v_inst_605_, v_inst_606_, v_inst_607_, v_inst_608_, v_inst_609_, v_vis_x3f_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx(uint8_t v_x_612_){
_start:
{
switch(v_x_612_)
{
case 0:
{
lean_object* v___x_613_; 
v___x_613_ = lean_unsigned_to_nat(0u);
return v___x_613_;
}
case 1:
{
lean_object* v___x_614_; 
v___x_614_ = lean_unsigned_to_nat(1u);
return v___x_614_;
}
default: 
{
lean_object* v___x_615_; 
v___x_615_ = lean_unsigned_to_nat(2u);
return v___x_615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___boxed(lean_object* v_x_616_){
_start:
{
uint8_t v_x_boxed_617_; lean_object* v_res_618_; 
v_x_boxed_617_ = lean_unbox(v_x_616_);
v_res_618_ = l_Lean_Elab_RecKind_ctorIdx(v_x_boxed_617_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object* v_k_619_){
_start:
{
lean_inc(v_k_619_);
return v_k_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object* v_k_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_Elab_RecKind_ctorElim___redArg(v_k_620_);
lean_dec(v_k_620_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object* v_motive_622_, lean_object* v_ctorIdx_623_, uint8_t v_t_624_, lean_object* v_h_625_, lean_object* v_k_626_){
_start:
{
lean_inc(v_k_626_);
return v_k_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object* v_motive_627_, lean_object* v_ctorIdx_628_, lean_object* v_t_629_, lean_object* v_h_630_, lean_object* v_k_631_){
_start:
{
uint8_t v_t_boxed_632_; lean_object* v_res_633_; 
v_t_boxed_632_ = lean_unbox(v_t_629_);
v_res_633_ = l_Lean_Elab_RecKind_ctorElim(v_motive_627_, v_ctorIdx_628_, v_t_boxed_632_, v_h_630_, v_k_631_);
lean_dec(v_k_631_);
lean_dec(v_ctorIdx_628_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object* v_partial_634_){
_start:
{
lean_inc(v_partial_634_);
return v_partial_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object* v_partial_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lean_Elab_RecKind_partial_elim___redArg(v_partial_635_);
lean_dec(v_partial_635_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object* v_motive_637_, uint8_t v_t_638_, lean_object* v_h_639_, lean_object* v_partial_640_){
_start:
{
lean_inc(v_partial_640_);
return v_partial_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object* v_motive_641_, lean_object* v_t_642_, lean_object* v_h_643_, lean_object* v_partial_644_){
_start:
{
uint8_t v_t_boxed_645_; lean_object* v_res_646_; 
v_t_boxed_645_ = lean_unbox(v_t_642_);
v_res_646_ = l_Lean_Elab_RecKind_partial_elim(v_motive_641_, v_t_boxed_645_, v_h_643_, v_partial_644_);
lean_dec(v_partial_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object* v_nonrec_647_){
_start:
{
lean_inc(v_nonrec_647_);
return v_nonrec_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object* v_nonrec_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_Elab_RecKind_nonrec_elim___redArg(v_nonrec_648_);
lean_dec(v_nonrec_648_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object* v_motive_650_, uint8_t v_t_651_, lean_object* v_h_652_, lean_object* v_nonrec_653_){
_start:
{
lean_inc(v_nonrec_653_);
return v_nonrec_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object* v_motive_654_, lean_object* v_t_655_, lean_object* v_h_656_, lean_object* v_nonrec_657_){
_start:
{
uint8_t v_t_boxed_658_; lean_object* v_res_659_; 
v_t_boxed_658_ = lean_unbox(v_t_655_);
v_res_659_ = l_Lean_Elab_RecKind_nonrec_elim(v_motive_654_, v_t_boxed_658_, v_h_656_, v_nonrec_657_);
lean_dec(v_nonrec_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object* v_default_660_){
_start:
{
lean_inc(v_default_660_);
return v_default_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object* v_default_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_Elab_RecKind_default_elim___redArg(v_default_661_);
lean_dec(v_default_661_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object* v_motive_663_, uint8_t v_t_664_, lean_object* v_h_665_, lean_object* v_default_666_){
_start:
{
lean_inc(v_default_666_);
return v_default_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object* v_motive_667_, lean_object* v_t_668_, lean_object* v_h_669_, lean_object* v_default_670_){
_start:
{
uint8_t v_t_boxed_671_; lean_object* v_res_672_; 
v_t_boxed_671_ = lean_unbox(v_t_668_);
v_res_672_ = l_Lean_Elab_RecKind_default_elim(v_motive_667_, v_t_boxed_671_, v_h_669_, v_default_670_);
lean_dec(v_default_670_);
return v_res_672_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind_default(void){
_start:
{
uint8_t v___x_673_; 
v___x_673_ = 0;
return v___x_673_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind(void){
_start:
{
uint8_t v___x_674_; 
v___x_674_ = 0;
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx(uint8_t v_x_675_){
_start:
{
switch(v_x_675_)
{
case 0:
{
lean_object* v___x_676_; 
v___x_676_ = lean_unsigned_to_nat(0u);
return v___x_676_;
}
case 1:
{
lean_object* v___x_677_; 
v___x_677_ = lean_unsigned_to_nat(1u);
return v___x_677_;
}
default: 
{
lean_object* v___x_678_; 
v___x_678_ = lean_unsigned_to_nat(2u);
return v___x_678_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___boxed(lean_object* v_x_679_){
_start:
{
uint8_t v_x_boxed_680_; lean_object* v_res_681_; 
v_x_boxed_680_ = lean_unbox(v_x_679_);
v_res_681_ = l_Lean_Elab_ComputeKind_ctorIdx(v_x_boxed_680_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object* v_k_682_){
_start:
{
lean_inc(v_k_682_);
return v_k_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object* v_k_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Elab_ComputeKind_ctorElim___redArg(v_k_683_);
lean_dec(v_k_683_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object* v_motive_685_, lean_object* v_ctorIdx_686_, uint8_t v_t_687_, lean_object* v_h_688_, lean_object* v_k_689_){
_start:
{
lean_inc(v_k_689_);
return v_k_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object* v_motive_690_, lean_object* v_ctorIdx_691_, lean_object* v_t_692_, lean_object* v_h_693_, lean_object* v_k_694_){
_start:
{
uint8_t v_t_boxed_695_; lean_object* v_res_696_; 
v_t_boxed_695_ = lean_unbox(v_t_692_);
v_res_696_ = l_Lean_Elab_ComputeKind_ctorElim(v_motive_690_, v_ctorIdx_691_, v_t_boxed_695_, v_h_693_, v_k_694_);
lean_dec(v_k_694_);
lean_dec(v_ctorIdx_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object* v_regular_697_){
_start:
{
lean_inc(v_regular_697_);
return v_regular_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object* v_regular_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Elab_ComputeKind_regular_elim___redArg(v_regular_698_);
lean_dec(v_regular_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object* v_motive_700_, uint8_t v_t_701_, lean_object* v_h_702_, lean_object* v_regular_703_){
_start:
{
lean_inc(v_regular_703_);
return v_regular_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object* v_motive_704_, lean_object* v_t_705_, lean_object* v_h_706_, lean_object* v_regular_707_){
_start:
{
uint8_t v_t_boxed_708_; lean_object* v_res_709_; 
v_t_boxed_708_ = lean_unbox(v_t_705_);
v_res_709_ = l_Lean_Elab_ComputeKind_regular_elim(v_motive_704_, v_t_boxed_708_, v_h_706_, v_regular_707_);
lean_dec(v_regular_707_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object* v_meta_710_){
_start:
{
lean_inc(v_meta_710_);
return v_meta_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object* v_meta_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Elab_ComputeKind_meta_elim___redArg(v_meta_711_);
lean_dec(v_meta_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object* v_motive_713_, uint8_t v_t_714_, lean_object* v_h_715_, lean_object* v_meta_716_){
_start:
{
lean_inc(v_meta_716_);
return v_meta_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object* v_motive_717_, lean_object* v_t_718_, lean_object* v_h_719_, lean_object* v_meta_720_){
_start:
{
uint8_t v_t_boxed_721_; lean_object* v_res_722_; 
v_t_boxed_721_ = lean_unbox(v_t_718_);
v_res_722_ = l_Lean_Elab_ComputeKind_meta_elim(v_motive_717_, v_t_boxed_721_, v_h_719_, v_meta_720_);
lean_dec(v_meta_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object* v_noncomputable_723_){
_start:
{
lean_inc(v_noncomputable_723_);
return v_noncomputable_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object* v_noncomputable_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(v_noncomputable_724_);
lean_dec(v_noncomputable_724_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object* v_motive_726_, uint8_t v_t_727_, lean_object* v_h_728_, lean_object* v_noncomputable_729_){
_start:
{
lean_inc(v_noncomputable_729_);
return v_noncomputable_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object* v_motive_730_, lean_object* v_t_731_, lean_object* v_h_732_, lean_object* v_noncomputable_733_){
_start:
{
uint8_t v_t_boxed_734_; lean_object* v_res_735_; 
v_t_boxed_734_ = lean_unbox(v_t_731_);
v_res_735_ = l_Lean_Elab_ComputeKind_noncomputable_elim(v_motive_730_, v_t_boxed_734_, v_h_732_, v_noncomputable_733_);
lean_dec(v_noncomputable_733_);
return v_res_735_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind_default(void){
_start:
{
uint8_t v___x_736_; 
v___x_736_ = 0;
return v___x_736_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind(void){
_start:
{
uint8_t v___x_737_; 
v___x_737_ = 0;
return v___x_737_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t v_x_738_, uint8_t v_y_739_){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_740_ = l_Lean_Elab_ComputeKind_ctorIdx(v_x_738_);
v___x_741_ = l_Lean_Elab_ComputeKind_ctorIdx(v_y_739_);
v___x_742_ = lean_nat_dec_eq(v___x_740_, v___x_741_);
lean_dec(v___x_741_);
lean_dec(v___x_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object* v_x_743_, lean_object* v_y_744_){
_start:
{
uint8_t v_x_21__boxed_745_; uint8_t v_y_22__boxed_746_; uint8_t v_res_747_; lean_object* v_r_748_; 
v_x_21__boxed_745_ = lean_unbox(v_x_743_);
v_y_22__boxed_746_ = lean_unbox(v_y_744_);
v_res_747_ = l_Lean_Elab_instBEqComputeKind_beq(v_x_21__boxed_745_, v_y_22__boxed_746_);
v_r_748_ = lean_box(v_res_747_);
return v_r_748_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__6(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = lean_unsigned_to_nat(2u);
v___x_761_ = lean_nat_to_int(v___x_760_);
return v___x_761_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__7(void){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_nat_to_int(v___x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t v_x_764_, lean_object* v_prec_765_){
_start:
{
lean_object* v___y_767_; lean_object* v___y_774_; lean_object* v___y_781_; 
switch(v_x_764_)
{
case 0:
{
lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_787_ = lean_unsigned_to_nat(1024u);
v___x_788_ = lean_nat_dec_le(v___x_787_, v_prec_765_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_767_ = v___x_789_;
goto v___jp_766_;
}
else
{
lean_object* v___x_790_; 
v___x_790_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_767_ = v___x_790_;
goto v___jp_766_;
}
}
case 1:
{
lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_791_ = lean_unsigned_to_nat(1024u);
v___x_792_ = lean_nat_dec_le(v___x_791_, v_prec_765_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; 
v___x_793_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_774_ = v___x_793_;
goto v___jp_773_;
}
else
{
lean_object* v___x_794_; 
v___x_794_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_774_ = v___x_794_;
goto v___jp_773_;
}
}
default: 
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = lean_unsigned_to_nat(1024u);
v___x_796_ = lean_nat_dec_le(v___x_795_, v_prec_765_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; 
v___x_797_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_781_ = v___x_797_;
goto v___jp_780_;
}
else
{
lean_object* v___x_798_; 
v___x_798_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_781_ = v___x_798_;
goto v___jp_780_;
}
}
}
v___jp_766_:
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_768_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__1));
lean_inc(v___y_767_);
v___x_769_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_769_, 0, v___y_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = 0;
v___x_771_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*1, v___x_770_);
v___x_772_ = l_Repr_addAppParen(v___x_771_, v_prec_765_);
return v___x_772_;
}
v___jp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_775_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__3));
lean_inc(v___y_774_);
v___x_776_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_776_, 0, v___y_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = 0;
v___x_778_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*1, v___x_777_);
v___x_779_ = l_Repr_addAppParen(v___x_778_, v_prec_765_);
return v___x_779_;
}
v___jp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_782_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__5));
lean_inc(v___y_781_);
v___x_783_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_783_, 0, v___y_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = 0;
v___x_785_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set_uint8(v___x_785_, sizeof(void*)*1, v___x_784_);
v___x_786_ = l_Repr_addAppParen(v___x_785_, v_prec_765_);
return v___x_786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object* v_x_799_, lean_object* v_prec_800_){
_start:
{
uint8_t v_x_171__boxed_801_; lean_object* v_res_802_; 
v_x_171__boxed_801_ = lean_unbox(v_x_799_);
v_res_802_ = l_Lean_Elab_instReprComputeKind_repr(v_x_171__boxed_801_, v_prec_800_);
lean_dec(v_prec_800_);
return v_res_802_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object* v_m_817_){
_start:
{
uint8_t v_visibility_818_; uint8_t v___x_819_; 
v_visibility_818_ = lean_ctor_get_uint8(v_m_817_, sizeof(void*)*3);
v___x_819_ = l_Lean_Elab_Visibility_isPrivate(v_visibility_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object* v_m_820_){
_start:
{
uint8_t v_res_821_; lean_object* v_r_822_; 
v_res_821_ = l_Lean_Elab_Modifiers_isPrivate(v_m_820_);
lean_dec_ref(v_m_820_);
v_r_822_ = lean_box(v_res_821_);
return v_r_822_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object* v_m_823_){
_start:
{
uint8_t v_visibility_824_; uint8_t v___x_825_; 
v_visibility_824_ = lean_ctor_get_uint8(v_m_823_, sizeof(void*)*3);
v___x_825_ = l_Lean_Elab_Visibility_isPublic(v_visibility_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object* v_m_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = l_Lean_Elab_Modifiers_isPublic(v_m_826_);
lean_dec_ref(v_m_826_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object* v_env_829_, lean_object* v_m_830_){
_start:
{
uint8_t v_visibility_831_; uint8_t v___x_832_; 
v_visibility_831_ = lean_ctor_get_uint8(v_m_830_, sizeof(void*)*3);
v___x_832_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_829_, v_visibility_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object* v_env_833_, lean_object* v_m_834_){
_start:
{
uint8_t v_res_835_; lean_object* v_r_836_; 
v_res_835_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_833_, v_m_834_);
lean_dec_ref(v_m_834_);
lean_dec_ref(v_env_833_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object* v_x_837_){
_start:
{
uint8_t v_recKind_838_; 
v_recKind_838_ = lean_ctor_get_uint8(v_x_837_, sizeof(void*)*3 + 3);
if (v_recKind_838_ == 0)
{
uint8_t v___x_839_; 
v___x_839_ = 1;
return v___x_839_;
}
else
{
uint8_t v___x_840_; 
v___x_840_ = 0;
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object* v_x_841_){
_start:
{
uint8_t v_res_842_; lean_object* v_r_843_; 
v_res_842_ = l_Lean_Elab_Modifiers_isPartial(v_x_841_);
lean_dec_ref(v_x_841_);
v_r_843_ = lean_box(v_res_842_);
return v_r_843_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object* v_x_844_){
_start:
{
uint8_t v_recKind_845_; 
v_recKind_845_ = lean_ctor_get_uint8(v_x_844_, sizeof(void*)*3 + 3);
if (v_recKind_845_ == 1)
{
uint8_t v___x_846_; 
v___x_846_ = 1;
return v___x_846_;
}
else
{
uint8_t v___x_847_; 
v___x_847_ = 0;
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object* v_x_848_){
_start:
{
uint8_t v_res_849_; lean_object* v_r_850_; 
v_res_849_ = l_Lean_Elab_Modifiers_isNonrec(v_x_848_);
lean_dec_ref(v_x_848_);
v_r_850_ = lean_box(v_res_849_);
return v_r_850_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object* v_m_851_){
_start:
{
uint8_t v_computeKind_852_; 
v_computeKind_852_ = lean_ctor_get_uint8(v_m_851_, sizeof(void*)*3 + 2);
if (v_computeKind_852_ == 1)
{
uint8_t v___x_853_; 
v___x_853_ = 1;
return v___x_853_;
}
else
{
uint8_t v___x_854_; 
v___x_854_ = 0;
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object* v_m_855_){
_start:
{
uint8_t v_res_856_; lean_object* v_r_857_; 
v_res_856_ = l_Lean_Elab_Modifiers_isMeta(v_m_855_);
lean_dec_ref(v_m_855_);
v_r_857_ = lean_box(v_res_856_);
return v_r_857_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object* v_m_858_){
_start:
{
uint8_t v_computeKind_859_; 
v_computeKind_859_ = lean_ctor_get_uint8(v_m_858_, sizeof(void*)*3 + 2);
if (v_computeKind_859_ == 2)
{
uint8_t v___x_860_; 
v___x_860_ = 1;
return v___x_860_;
}
else
{
uint8_t v___x_861_; 
v___x_861_ = 0;
return v___x_861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object* v_m_862_){
_start:
{
uint8_t v_res_863_; lean_object* v_r_864_; 
v_res_863_ = l_Lean_Elab_Modifiers_isNoncomputable(v_m_862_);
lean_dec_ref(v_m_862_);
v_r_864_ = lean_box(v_res_863_);
return v_r_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object* v_modifiers_865_, lean_object* v_attr_866_){
_start:
{
lean_object* v_stx_867_; lean_object* v_docString_x3f_868_; uint8_t v_visibility_869_; uint8_t v_isProtected_870_; uint8_t v_computeKind_871_; uint8_t v_recKind_872_; uint8_t v_isUnsafe_873_; lean_object* v_attrs_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_882_; 
v_stx_867_ = lean_ctor_get(v_modifiers_865_, 0);
v_docString_x3f_868_ = lean_ctor_get(v_modifiers_865_, 1);
v_visibility_869_ = lean_ctor_get_uint8(v_modifiers_865_, sizeof(void*)*3);
v_isProtected_870_ = lean_ctor_get_uint8(v_modifiers_865_, sizeof(void*)*3 + 1);
v_computeKind_871_ = lean_ctor_get_uint8(v_modifiers_865_, sizeof(void*)*3 + 2);
v_recKind_872_ = lean_ctor_get_uint8(v_modifiers_865_, sizeof(void*)*3 + 3);
v_isUnsafe_873_ = lean_ctor_get_uint8(v_modifiers_865_, sizeof(void*)*3 + 4);
v_attrs_874_ = lean_ctor_get(v_modifiers_865_, 2);
v_isSharedCheck_882_ = !lean_is_exclusive(v_modifiers_865_);
if (v_isSharedCheck_882_ == 0)
{
v___x_876_ = v_modifiers_865_;
v_isShared_877_ = v_isSharedCheck_882_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_attrs_874_);
lean_inc(v_docString_x3f_868_);
lean_inc(v_stx_867_);
lean_dec(v_modifiers_865_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_882_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_880_; 
v___x_878_ = lean_array_push(v_attrs_874_, v_attr_866_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 2, v___x_878_);
v___x_880_ = v___x_876_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_stx_867_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_docString_x3f_868_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v___x_878_);
lean_ctor_set_uint8(v_reuseFailAlloc_881_, sizeof(void*)*3, v_visibility_869_);
lean_ctor_set_uint8(v_reuseFailAlloc_881_, sizeof(void*)*3 + 1, v_isProtected_870_);
lean_ctor_set_uint8(v_reuseFailAlloc_881_, sizeof(void*)*3 + 2, v_computeKind_871_);
lean_ctor_set_uint8(v_reuseFailAlloc_881_, sizeof(void*)*3 + 3, v_recKind_872_);
lean_ctor_set_uint8(v_reuseFailAlloc_881_, sizeof(void*)*3 + 4, v_isUnsafe_873_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object* v_modifiers_883_, lean_object* v_attr_884_){
_start:
{
lean_object* v_stx_885_; lean_object* v_docString_x3f_886_; uint8_t v_visibility_887_; uint8_t v_isProtected_888_; uint8_t v_computeKind_889_; uint8_t v_recKind_890_; uint8_t v_isUnsafe_891_; lean_object* v_attrs_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_903_; 
v_stx_885_ = lean_ctor_get(v_modifiers_883_, 0);
v_docString_x3f_886_ = lean_ctor_get(v_modifiers_883_, 1);
v_visibility_887_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3);
v_isProtected_888_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 1);
v_computeKind_889_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 2);
v_recKind_890_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 3);
v_isUnsafe_891_ = lean_ctor_get_uint8(v_modifiers_883_, sizeof(void*)*3 + 4);
v_attrs_892_ = lean_ctor_get(v_modifiers_883_, 2);
v_isSharedCheck_903_ = !lean_is_exclusive(v_modifiers_883_);
if (v_isSharedCheck_903_ == 0)
{
v___x_894_ = v_modifiers_883_;
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_attrs_892_);
lean_inc(v_docString_x3f_886_);
lean_inc(v_stx_885_);
lean_dec(v_modifiers_883_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_896_ = lean_unsigned_to_nat(1u);
v___x_897_ = lean_mk_empty_array_with_capacity(v___x_896_);
v___x_898_ = lean_array_push(v___x_897_, v_attr_884_);
v___x_899_ = l_Array_append___redArg(v___x_898_, v_attrs_892_);
lean_dec_ref(v_attrs_892_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 2, v___x_899_);
v___x_901_ = v___x_894_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_stx_885_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_docString_x3f_886_);
lean_ctor_set(v_reuseFailAlloc_902_, 2, v___x_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_902_, sizeof(void*)*3, v_visibility_887_);
lean_ctor_set_uint8(v_reuseFailAlloc_902_, sizeof(void*)*3 + 1, v_isProtected_888_);
lean_ctor_set_uint8(v_reuseFailAlloc_902_, sizeof(void*)*3 + 2, v_computeKind_889_);
lean_ctor_set_uint8(v_reuseFailAlloc_902_, sizeof(void*)*3 + 3, v_recKind_890_);
lean_ctor_set_uint8(v_reuseFailAlloc_902_, sizeof(void*)*3 + 4, v_isUnsafe_891_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object* v_p_904_, lean_object* v_as_905_, size_t v_i_906_, size_t v_stop_907_, lean_object* v_b_908_){
_start:
{
lean_object* v___y_910_; uint8_t v___x_914_; 
v___x_914_ = lean_usize_dec_eq(v_i_906_, v_stop_907_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_915_ = lean_array_uget_borrowed(v_as_905_, v_i_906_);
lean_inc_ref(v_p_904_);
lean_inc(v___x_915_);
v___x_916_ = lean_apply_1(v_p_904_, v___x_915_);
v___x_917_ = lean_unbox(v___x_916_);
if (v___x_917_ == 0)
{
v___y_910_ = v_b_908_;
goto v___jp_909_;
}
else
{
lean_object* v___x_918_; 
lean_inc(v___x_915_);
v___x_918_ = lean_array_push(v_b_908_, v___x_915_);
v___y_910_ = v___x_918_;
goto v___jp_909_;
}
}
else
{
lean_dec_ref(v_p_904_);
return v_b_908_;
}
v___jp_909_:
{
size_t v___x_911_; size_t v___x_912_; 
v___x_911_ = ((size_t)1ULL);
v___x_912_ = lean_usize_add(v_i_906_, v___x_911_);
v_i_906_ = v___x_912_;
v_b_908_ = v___y_910_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object* v_p_919_, lean_object* v_as_920_, lean_object* v_i_921_, lean_object* v_stop_922_, lean_object* v_b_923_){
_start:
{
size_t v_i_boxed_924_; size_t v_stop_boxed_925_; lean_object* v_res_926_; 
v_i_boxed_924_ = lean_unbox_usize(v_i_921_);
lean_dec(v_i_921_);
v_stop_boxed_925_ = lean_unbox_usize(v_stop_922_);
lean_dec(v_stop_922_);
v_res_926_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_919_, v_as_920_, v_i_boxed_924_, v_stop_boxed_925_, v_b_923_);
lean_dec_ref(v_as_920_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object* v_modifiers_927_, lean_object* v_p_928_){
_start:
{
lean_object* v_stx_929_; lean_object* v_docString_x3f_930_; uint8_t v_visibility_931_; uint8_t v_isProtected_932_; uint8_t v_computeKind_933_; uint8_t v_recKind_934_; uint8_t v_isUnsafe_935_; lean_object* v_attrs_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_963_; 
v_stx_929_ = lean_ctor_get(v_modifiers_927_, 0);
v_docString_x3f_930_ = lean_ctor_get(v_modifiers_927_, 1);
v_visibility_931_ = lean_ctor_get_uint8(v_modifiers_927_, sizeof(void*)*3);
v_isProtected_932_ = lean_ctor_get_uint8(v_modifiers_927_, sizeof(void*)*3 + 1);
v_computeKind_933_ = lean_ctor_get_uint8(v_modifiers_927_, sizeof(void*)*3 + 2);
v_recKind_934_ = lean_ctor_get_uint8(v_modifiers_927_, sizeof(void*)*3 + 3);
v_isUnsafe_935_ = lean_ctor_get_uint8(v_modifiers_927_, sizeof(void*)*3 + 4);
v_attrs_936_ = lean_ctor_get(v_modifiers_927_, 2);
v_isSharedCheck_963_ = !lean_is_exclusive(v_modifiers_927_);
if (v_isSharedCheck_963_ == 0)
{
v___x_938_ = v_modifiers_927_;
v_isShared_939_ = v_isSharedCheck_963_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_attrs_936_);
lean_inc(v_docString_x3f_930_);
lean_inc(v_stx_929_);
lean_dec(v_modifiers_927_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_963_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = lean_array_get_size(v_attrs_936_);
v___x_942_ = ((lean_object*)(l_Lean_Elab_instInhabitedModifiers_default___closed__0));
v___x_943_ = lean_nat_dec_lt(v___x_940_, v___x_941_);
if (v___x_943_ == 0)
{
lean_object* v___x_945_; 
lean_dec_ref(v_attrs_936_);
lean_dec_ref(v_p_928_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 2, v___x_942_);
v___x_945_ = v___x_938_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_stx_929_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_docString_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v___x_942_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*3, v_visibility_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*3 + 1, v_isProtected_932_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*3 + 2, v_computeKind_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*3 + 3, v_recKind_934_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*3 + 4, v_isUnsafe_935_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
else
{
uint8_t v___x_947_; 
v___x_947_ = lean_nat_dec_le(v___x_941_, v___x_941_);
if (v___x_947_ == 0)
{
if (v___x_943_ == 0)
{
lean_object* v___x_949_; 
lean_dec_ref(v_attrs_936_);
lean_dec_ref(v_p_928_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 2, v___x_942_);
v___x_949_ = v___x_938_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_stx_929_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_docString_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_950_, 2, v___x_942_);
lean_ctor_set_uint8(v_reuseFailAlloc_950_, sizeof(void*)*3, v_visibility_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_950_, sizeof(void*)*3 + 1, v_isProtected_932_);
lean_ctor_set_uint8(v_reuseFailAlloc_950_, sizeof(void*)*3 + 2, v_computeKind_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_950_, sizeof(void*)*3 + 3, v_recKind_934_);
lean_ctor_set_uint8(v_reuseFailAlloc_950_, sizeof(void*)*3 + 4, v_isUnsafe_935_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
else
{
size_t v___x_951_; size_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_951_ = ((size_t)0ULL);
v___x_952_ = lean_usize_of_nat(v___x_941_);
v___x_953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_928_, v_attrs_936_, v___x_951_, v___x_952_, v___x_942_);
lean_dec_ref(v_attrs_936_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 2, v___x_953_);
v___x_955_ = v___x_938_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_stx_929_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_docString_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v___x_953_);
lean_ctor_set_uint8(v_reuseFailAlloc_956_, sizeof(void*)*3, v_visibility_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_956_, sizeof(void*)*3 + 1, v_isProtected_932_);
lean_ctor_set_uint8(v_reuseFailAlloc_956_, sizeof(void*)*3 + 2, v_computeKind_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_956_, sizeof(void*)*3 + 3, v_recKind_934_);
lean_ctor_set_uint8(v_reuseFailAlloc_956_, sizeof(void*)*3 + 4, v_isUnsafe_935_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
size_t v___x_957_; size_t v___x_958_; lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_957_ = ((size_t)0ULL);
v___x_958_ = lean_usize_of_nat(v___x_941_);
v___x_959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_928_, v_attrs_936_, v___x_957_, v___x_958_, v___x_942_);
lean_dec_ref(v_attrs_936_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 2, v___x_959_);
v___x_961_ = v___x_938_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_stx_929_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_docString_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v___x_959_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3, v_visibility_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3 + 1, v_isProtected_932_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3 + 2, v_computeKind_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3 + 3, v_recKind_934_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3 + 4, v_isUnsafe_935_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object* v_p_964_, lean_object* v_as_965_, size_t v_i_966_, size_t v_stop_967_){
_start:
{
uint8_t v___x_968_; 
v___x_968_ = lean_usize_dec_eq(v_i_966_, v_stop_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_969_ = lean_array_uget_borrowed(v_as_965_, v_i_966_);
lean_inc_ref(v_p_964_);
lean_inc(v___x_969_);
v___x_970_ = lean_apply_1(v_p_964_, v___x_969_);
v___x_971_ = lean_unbox(v___x_970_);
if (v___x_971_ == 0)
{
size_t v___x_972_; size_t v___x_973_; 
v___x_972_ = ((size_t)1ULL);
v___x_973_ = lean_usize_add(v_i_966_, v___x_972_);
v_i_966_ = v___x_973_;
goto _start;
}
else
{
uint8_t v___x_975_; 
lean_dec_ref(v_p_964_);
v___x_975_ = lean_unbox(v___x_970_);
return v___x_975_;
}
}
else
{
uint8_t v___x_976_; 
lean_dec_ref(v_p_964_);
v___x_976_ = 0;
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object* v_p_977_, lean_object* v_as_978_, lean_object* v_i_979_, lean_object* v_stop_980_){
_start:
{
size_t v_i_boxed_981_; size_t v_stop_boxed_982_; uint8_t v_res_983_; lean_object* v_r_984_; 
v_i_boxed_981_ = lean_unbox_usize(v_i_979_);
lean_dec(v_i_979_);
v_stop_boxed_982_ = lean_unbox_usize(v_stop_980_);
lean_dec(v_stop_980_);
v_res_983_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_977_, v_as_978_, v_i_boxed_981_, v_stop_boxed_982_);
lean_dec_ref(v_as_978_);
v_r_984_ = lean_box(v_res_983_);
return v_r_984_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object* v_modifiers_985_, lean_object* v_p_986_){
_start:
{
lean_object* v_attrs_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
v_attrs_987_ = lean_ctor_get(v_modifiers_985_, 2);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_array_get_size(v_attrs_987_);
v___x_990_ = lean_nat_dec_lt(v___x_988_, v___x_989_);
if (v___x_990_ == 0)
{
lean_dec_ref(v_p_986_);
return v___x_990_;
}
else
{
if (v___x_990_ == 0)
{
lean_dec_ref(v_p_986_);
return v___x_990_;
}
else
{
size_t v___x_991_; size_t v___x_992_; uint8_t v___x_993_; 
v___x_991_ = ((size_t)0ULL);
v___x_992_ = lean_usize_of_nat(v___x_989_);
v___x_993_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_986_, v_attrs_987_, v___x_991_, v___x_992_);
return v___x_993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object* v_modifiers_994_, lean_object* v_p_995_){
_start:
{
uint8_t v_res_996_; lean_object* v_r_997_; 
v_res_996_ = l_Lean_Elab_Modifiers_anyAttr(v_modifiers_994_, v_p_995_);
lean_dec_ref(v_modifiers_994_);
v_r_997_ = lean_box(v_res_996_);
return v_r_997_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__0));
v___x_1001_ = lean_string_length(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__2, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2);
v___x_1003_ = lean_nat_to_int(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object* v_attr_1010_){
_start:
{
uint8_t v_kind_1011_; lean_object* v_name_1012_; lean_object* v_stx_1013_; lean_object* v___y_1015_; 
v_kind_1011_ = lean_ctor_get_uint8(v_attr_1010_, sizeof(void*)*2);
v_name_1012_ = lean_ctor_get(v_attr_1010_, 0);
lean_inc(v_name_1012_);
v_stx_1013_ = lean_ctor_get(v_attr_1010_, 1);
lean_inc(v_stx_1013_);
lean_dec_ref(v_attr_1010_);
switch(v_kind_1011_)
{
case 0:
{
lean_object* v___x_1037_; 
v___x_1037_ = ((lean_object*)(l_Lean_Elab_elabVisibility___redArg___lam__3___closed__4));
v___y_1015_ = v___x_1037_;
goto v___jp_1014_;
}
case 1:
{
lean_object* v___x_1038_; 
v___x_1038_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__6));
v___y_1015_ = v___x_1038_;
goto v___jp_1014_;
}
default: 
{
lean_object* v___x_1039_; 
v___x_1039_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__7));
v___y_1015_ = v___x_1039_;
goto v___jp_1014_;
}
}
v___jp_1014_:
{
lean_object* v___x_1016_; uint8_t v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; uint8_t v___x_1035_; lean_object* v___x_1036_; 
lean_inc_ref(v___y_1015_);
v___x_1016_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___y_1015_);
v___x_1017_ = 1;
v___x_1018_ = l_Lean_Name_toString(v_name_1012_, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
v___x_1020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1016_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_box(0);
v___x_1022_ = 0;
v___x_1023_ = l_Lean_Syntax_formatStx(v_stx_1013_, v___x_1021_, v___x_1022_);
v___x_1024_ = l_Std_Format_defWidth;
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = l_Std_Format_pretty(v___x_1023_, v___x_1024_, v___x_1025_, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1020_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__3, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3);
v___x_1030_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__4));
v___x_1031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v___x_1028_);
v___x_1032_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__5));
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1031_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1029_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = 0;
v___x_1036_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set_uint8(v___x_1036_, sizeof(void*)*1, v___x_1035_);
return v___x_1036_;
}
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__0));
v___x_1049_ = lean_string_length(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__5, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5);
v___x_1051_ = lean_nat_to_int(v___x_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object* v___f_1108_, lean_object* v___f_1109_, lean_object* v_m_1110_){
_start:
{
lean_object* v_docString_x3f_1111_; uint8_t v_visibility_1112_; uint8_t v_isProtected_1113_; uint8_t v_computeKind_1114_; uint8_t v_recKind_1115_; uint8_t v_isUnsafe_1116_; lean_object* v_attrs_1117_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1163_; 
v_docString_x3f_1111_ = lean_ctor_get(v_m_1110_, 1);
lean_inc(v_docString_x3f_1111_);
v_visibility_1112_ = lean_ctor_get_uint8(v_m_1110_, sizeof(void*)*3);
v_isProtected_1113_ = lean_ctor_get_uint8(v_m_1110_, sizeof(void*)*3 + 1);
v_computeKind_1114_ = lean_ctor_get_uint8(v_m_1110_, sizeof(void*)*3 + 2);
v_recKind_1115_ = lean_ctor_get_uint8(v_m_1110_, sizeof(void*)*3 + 3);
v_isUnsafe_1116_ = lean_ctor_get_uint8(v_m_1110_, sizeof(void*)*3 + 4);
v_attrs_1117_ = lean_ctor_get(v_m_1110_, 2);
lean_inc_ref(v_attrs_1117_);
lean_dec_ref(v_m_1110_);
if (lean_obj_tag(v_docString_x3f_1111_) == 0)
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_box(0);
v___y_1163_ = v___x_1167_;
goto v___jp_1162_;
}
else
{
lean_object* v_val_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_val_1168_ = lean_ctor_get(v_docString_x3f_1111_, 0);
lean_inc(v_val_1168_);
lean_dec_ref_known(v_docString_x3f_1111_, 1);
v___x_1169_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__32));
v___x_1170_ = lean_box(0);
v___x_1171_ = 0;
v___x_1172_ = l_Lean_Syntax_formatStx(v_val_1168_, v___x_1170_, v___x_1171_);
v___x_1173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1169_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__34));
v___x_1175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___y_1163_ = v___x_1177_;
goto v___jp_1162_;
}
v___jp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v_components_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; lean_object* v___x_1135_; 
lean_inc(v___y_1120_);
v___x_1121_ = l_List_appendTR___redArg(v___y_1119_, v___y_1120_);
v___x_1122_ = lean_array_to_list(v_attrs_1117_);
v___x_1123_ = lean_box(0);
v___x_1124_ = l_List_mapTR_loop___redArg(v___f_1108_, v___x_1122_, v___x_1123_);
v_components_1125_ = l_List_appendTR___redArg(v___x_1121_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__3));
v___x_1127_ = l_Std_Format_joinSep___redArg(v___f_1109_, v_components_1125_, v___x_1126_);
v___x_1128_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__6, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6);
v___x_1129_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__7));
v___x_1130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v___x_1127_);
v___x_1131_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__8));
v___x_1132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1128_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = 0;
v___x_1135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*1, v___x_1134_);
return v___x_1135_;
}
v___jp_1136_:
{
lean_object* v___x_1139_; 
lean_inc(v___y_1138_);
v___x_1139_ = l_List_appendTR___redArg(v___y_1137_, v___y_1138_);
if (v_isUnsafe_1116_ == 0)
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_box(0);
v___y_1119_ = v___x_1139_;
v___y_1120_ = v___x_1140_;
goto v___jp_1118_;
}
else
{
lean_object* v___x_1141_; 
v___x_1141_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__11));
v___y_1119_ = v___x_1139_;
v___y_1120_ = v___x_1141_;
goto v___jp_1118_;
}
}
v___jp_1142_:
{
lean_object* v___x_1145_; 
lean_inc(v___y_1144_);
v___x_1145_ = l_List_appendTR___redArg(v___y_1143_, v___y_1144_);
switch(v_recKind_1115_)
{
case 0:
{
lean_object* v___x_1146_; 
v___x_1146_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__14));
v___y_1137_ = v___x_1145_;
v___y_1138_ = v___x_1146_;
goto v___jp_1136_;
}
case 1:
{
lean_object* v___x_1147_; 
v___x_1147_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__17));
v___y_1137_ = v___x_1145_;
v___y_1138_ = v___x_1147_;
goto v___jp_1136_;
}
default: 
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_box(0);
v___y_1137_ = v___x_1145_;
v___y_1138_ = v___x_1148_;
goto v___jp_1136_;
}
}
}
v___jp_1149_:
{
lean_object* v___x_1152_; 
lean_inc(v___y_1151_);
v___x_1152_ = l_List_appendTR___redArg(v___y_1150_, v___y_1151_);
switch(v_computeKind_1114_)
{
case 0:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_box(0);
v___y_1143_ = v___x_1152_;
v___y_1144_ = v___x_1153_;
goto v___jp_1142_;
}
case 1:
{
lean_object* v___x_1154_; 
v___x_1154_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__20));
v___y_1143_ = v___x_1152_;
v___y_1144_ = v___x_1154_;
goto v___jp_1142_;
}
default: 
{
lean_object* v___x_1155_; 
v___x_1155_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__23));
v___y_1143_ = v___x_1152_;
v___y_1144_ = v___x_1155_;
goto v___jp_1142_;
}
}
}
v___jp_1156_:
{
lean_object* v___x_1159_; 
lean_inc(v___y_1158_);
v___x_1159_ = l_List_appendTR___redArg(v___y_1157_, v___y_1158_);
if (v_isProtected_1113_ == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_box(0);
v___y_1150_ = v___x_1159_;
v___y_1151_ = v___x_1160_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__26));
v___y_1150_ = v___x_1159_;
v___y_1151_ = v___x_1161_;
goto v___jp_1149_;
}
}
v___jp_1162_:
{
switch(v_visibility_1112_)
{
case 0:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_box(0);
v___y_1157_ = v___y_1163_;
v___y_1158_ = v___x_1164_;
goto v___jp_1156_;
}
case 1:
{
lean_object* v___x_1165_; 
v___x_1165_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__28));
v___y_1157_ = v___y_1163_;
v___y_1158_ = v___x_1165_;
goto v___jp_1156_;
}
default: 
{
lean_object* v___x_1166_; 
v___x_1166_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__30));
v___y_1157_ = v___y_1163_;
v___y_1158_ = v___x_1166_;
goto v___jp_1156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object* v_f_1184_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = l_Std_Format_defWidth;
v___x_1186_ = lean_unsigned_to_nat(0u);
v___x_1187_ = l_Std_Format_pretty(v_f_1184_, v___x_1185_, v___x_1186_, v___x_1186_);
return v___x_1187_;
}
}
static lean_object* _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object* v_inst_1196_, lean_object* v_inst_1197_, lean_object* v_optDocComment_1198_){
_start:
{
lean_object* v_toApplicative_1199_; lean_object* v_toPure_1200_; lean_object* v___x_1201_; 
v_toApplicative_1199_ = lean_ctor_get(v_inst_1196_, 0);
v_toPure_1200_ = lean_ctor_get(v_toApplicative_1199_, 1);
v___x_1201_ = l_Lean_Syntax_getOptional_x3f(v_optDocComment_1198_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_inc(v_toPure_1200_);
lean_dec_ref(v_inst_1197_);
lean_dec_ref(v_inst_1196_);
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_apply_2(v_toPure_1200_, lean_box(0), v___x_1202_);
return v___x_1203_;
}
else
{
lean_object* v_val_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1225_; 
v_val_1204_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1206_ = v___x_1201_;
v_isShared_1207_ = v_isSharedCheck_1225_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_val_1204_);
lean_dec(v___x_1201_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1225_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_unsigned_to_nat(1u);
v___x_1209_ = l_Lean_Syntax_getArg(v_val_1204_, v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 2)
{
lean_object* v_val_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_inc(v_toPure_1200_);
lean_dec(v_val_1204_);
lean_dec_ref(v_inst_1197_);
lean_dec_ref(v_inst_1196_);
v_val_1210_ = lean_ctor_get(v___x_1209_, 1);
lean_inc_ref(v_val_1210_);
lean_dec_ref_known(v___x_1209_, 2);
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lean_string_utf8_byte_size(v_val_1210_);
v___x_1213_ = lean_unsigned_to_nat(2u);
v___x_1214_ = lean_nat_sub(v___x_1212_, v___x_1213_);
v___x_1215_ = lean_string_utf8_extract(v_val_1210_, v___x_1211_, v___x_1214_);
lean_dec(v___x_1214_);
lean_dec_ref(v_val_1210_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1215_);
v___x_1217_ = v___x_1206_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_apply_2(v_toPure_1200_, lean_box(0), v___x_1217_);
return v___x_1218_;
}
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
lean_del_object(v___x_1206_);
v___x_1220_ = lean_obj_once(&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1, &l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once, _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1);
v___x_1221_ = l_Lean_MessageData_ofSyntax(v___x_1209_);
v___x_1222_ = l_Lean_indentD(v___x_1221_);
v___x_1223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1220_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = l_Lean_throwErrorAt___redArg(v_inst_1196_, v_inst_1197_, v_val_1204_, v___x_1223_);
return v___x_1224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_optDocComment_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1226_, v_inst_1227_, v_optDocComment_1228_);
lean_dec(v_optDocComment_1228_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object* v_m_1230_, lean_object* v_inst_1231_, lean_object* v_inst_1232_, lean_object* v_optDocComment_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1231_, v_inst_1232_, v_optDocComment_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object* v_m_1235_, lean_object* v_inst_1236_, lean_object* v_inst_1237_, lean_object* v_optDocComment_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_Elab_expandOptDocComment_x3f(v_m_1235_, v_inst_1236_, v_inst_1237_, v_optDocComment_1238_);
lean_dec(v_optDocComment_1238_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object* v_stx_1240_, lean_object* v___y_1241_, uint8_t v_visibility_1242_, uint8_t v___y_1243_, uint8_t v___y_1244_, uint8_t v___y_1245_, lean_object* v_toPure_1246_, lean_object* v_unsafeStx_1247_, lean_object* v_attrs_1248_){
_start:
{
uint8_t v___y_1250_; uint8_t v___x_1253_; 
v___x_1253_ = l_Lean_Syntax_isNone(v_unsafeStx_1247_);
if (v___x_1253_ == 0)
{
uint8_t v___x_1254_; 
v___x_1254_ = 1;
v___y_1250_ = v___x_1254_;
goto v___jp_1249_;
}
else
{
uint8_t v___x_1255_; 
v___x_1255_ = 0;
v___y_1250_ = v___x_1255_;
goto v___jp_1249_;
}
v___jp_1249_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1251_, 0, v_stx_1240_);
lean_ctor_set(v___x_1251_, 1, v___y_1241_);
lean_ctor_set(v___x_1251_, 2, v_attrs_1248_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*3, v_visibility_1242_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*3 + 1, v___y_1243_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*3 + 2, v___y_1244_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*3 + 3, v___y_1245_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*3 + 4, v___y_1250_);
v___x_1252_ = lean_apply_2(v_toPure_1246_, lean_box(0), v___x_1251_);
return v___x_1252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object* v_stx_1256_, lean_object* v___y_1257_, lean_object* v_visibility_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v_toPure_1262_, lean_object* v_unsafeStx_1263_, lean_object* v_attrs_1264_){
_start:
{
uint8_t v_visibility_boxed_1265_; uint8_t v___y_305__boxed_1266_; uint8_t v___y_306__boxed_1267_; uint8_t v___y_307__boxed_1268_; lean_object* v_res_1269_; 
v_visibility_boxed_1265_ = lean_unbox(v_visibility_1258_);
v___y_305__boxed_1266_ = lean_unbox(v___y_1259_);
v___y_306__boxed_1267_ = lean_unbox(v___y_1260_);
v___y_307__boxed_1268_ = lean_unbox(v___y_1261_);
v_res_1269_ = l_Lean_Elab_elabModifiers___redArg___lam__0(v_stx_1256_, v___y_1257_, v_visibility_boxed_1265_, v___y_305__boxed_1266_, v___y_306__boxed_1267_, v___y_307__boxed_1268_, v_toPure_1262_, v_unsafeStx_1263_, v_attrs_1264_);
lean_dec(v_unsafeStx_1263_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object* v___f_1270_, lean_object* v_attrs_1271_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_apply_1(v___f_1270_, v_attrs_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object* v_stx_1273_, lean_object* v___y_1274_, uint8_t v___y_1275_, uint8_t v___y_1276_, lean_object* v_toPure_1277_, lean_object* v_unsafeStx_1278_, lean_object* v_attrsStx_1279_, lean_object* v___x_1280_, lean_object* v_toBind_1281_, lean_object* v_inst_1282_, lean_object* v_inst_1283_, lean_object* v_inst_1284_, lean_object* v_inst_1285_, lean_object* v_inst_1286_, lean_object* v_inst_1287_, lean_object* v_inst_1288_, lean_object* v_inst_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v_inst_1293_, lean_object* v_protectedStx_1294_, uint8_t v_visibility_1295_){
_start:
{
uint8_t v___y_1297_; uint8_t v___x_1312_; 
v___x_1312_ = l_Lean_Syntax_isNone(v_protectedStx_1294_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; 
v___x_1313_ = 1;
v___y_1297_ = v___x_1313_;
goto v___jp_1296_;
}
else
{
uint8_t v___x_1314_; 
v___x_1314_ = 0;
v___y_1297_ = v___x_1314_;
goto v___jp_1296_;
}
v___jp_1296_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___f_1302_; lean_object* v___x_1303_; 
v___x_1298_ = lean_box(v_visibility_1295_);
v___x_1299_ = lean_box(v___y_1297_);
v___x_1300_ = lean_box(v___y_1275_);
v___x_1301_ = lean_box(v___y_1276_);
lean_inc(v_toPure_1277_);
v___f_1302_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1302_, 0, v_stx_1273_);
lean_closure_set(v___f_1302_, 1, v___y_1274_);
lean_closure_set(v___f_1302_, 2, v___x_1298_);
lean_closure_set(v___f_1302_, 3, v___x_1299_);
lean_closure_set(v___f_1302_, 4, v___x_1300_);
lean_closure_set(v___f_1302_, 5, v___x_1301_);
lean_closure_set(v___f_1302_, 6, v_toPure_1277_);
lean_closure_set(v___f_1302_, 7, v_unsafeStx_1278_);
v___x_1303_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_1279_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_inst_1293_);
lean_dec(v_inst_1292_);
lean_dec_ref(v_inst_1291_);
lean_dec(v_inst_1290_);
lean_dec(v_inst_1289_);
lean_dec_ref(v_inst_1288_);
lean_dec_ref(v_inst_1287_);
lean_dec_ref(v_inst_1286_);
lean_dec_ref(v_inst_1285_);
lean_dec_ref(v_inst_1284_);
lean_dec_ref(v_inst_1283_);
lean_dec_ref(v_inst_1282_);
v___f_1304_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1304_, 0, v___f_1302_);
v___x_1305_ = lean_mk_empty_array_with_capacity(v___x_1280_);
v___x_1306_ = lean_apply_2(v_toPure_1277_, lean_box(0), v___x_1305_);
v___x_1307_ = lean_apply_4(v_toBind_1281_, lean_box(0), lean_box(0), v___x_1306_, v___f_1304_);
return v___x_1307_;
}
else
{
lean_object* v_val_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_toPure_1277_);
v_val_1308_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_val_1308_);
lean_dec_ref_known(v___x_1303_, 1);
v___f_1309_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1309_, 0, v___f_1302_);
v___x_1310_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_1282_, v_inst_1283_, v_inst_1284_, v_inst_1285_, v_inst_1286_, v_inst_1287_, v_inst_1288_, v_inst_1289_, v_inst_1290_, v_inst_1291_, v_inst_1292_, v_inst_1293_, v_val_1308_);
lean_dec(v_val_1308_);
v___x_1311_ = lean_apply_4(v_toBind_1281_, lean_box(0), lean_box(0), v___x_1310_, v___f_1309_);
return v___x_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_stx_1315_ = _args[0];
lean_object* v___y_1316_ = _args[1];
lean_object* v___y_1317_ = _args[2];
lean_object* v___y_1318_ = _args[3];
lean_object* v_toPure_1319_ = _args[4];
lean_object* v_unsafeStx_1320_ = _args[5];
lean_object* v_attrsStx_1321_ = _args[6];
lean_object* v___x_1322_ = _args[7];
lean_object* v_toBind_1323_ = _args[8];
lean_object* v_inst_1324_ = _args[9];
lean_object* v_inst_1325_ = _args[10];
lean_object* v_inst_1326_ = _args[11];
lean_object* v_inst_1327_ = _args[12];
lean_object* v_inst_1328_ = _args[13];
lean_object* v_inst_1329_ = _args[14];
lean_object* v_inst_1330_ = _args[15];
lean_object* v_inst_1331_ = _args[16];
lean_object* v_inst_1332_ = _args[17];
lean_object* v_inst_1333_ = _args[18];
lean_object* v_inst_1334_ = _args[19];
lean_object* v_inst_1335_ = _args[20];
lean_object* v_protectedStx_1336_ = _args[21];
lean_object* v_visibility_1337_ = _args[22];
_start:
{
uint8_t v___y_335__boxed_1338_; uint8_t v___y_336__boxed_1339_; uint8_t v_visibility_boxed_1340_; lean_object* v_res_1341_; 
v___y_335__boxed_1338_ = lean_unbox(v___y_1317_);
v___y_336__boxed_1339_ = lean_unbox(v___y_1318_);
v_visibility_boxed_1340_ = lean_unbox(v_visibility_1337_);
v_res_1341_ = l_Lean_Elab_elabModifiers___redArg___lam__3(v_stx_1315_, v___y_1316_, v___y_335__boxed_1338_, v___y_336__boxed_1339_, v_toPure_1319_, v_unsafeStx_1320_, v_attrsStx_1321_, v___x_1322_, v_toBind_1323_, v_inst_1324_, v_inst_1325_, v_inst_1326_, v_inst_1327_, v_inst_1328_, v_inst_1329_, v_inst_1330_, v_inst_1331_, v_inst_1332_, v_inst_1333_, v_inst_1334_, v_inst_1335_, v_protectedStx_1336_, v_visibility_boxed_1340_);
lean_dec(v_protectedStx_1336_);
lean_dec(v___x_1322_);
lean_dec(v_attrsStx_1321_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object* v_inst_1352_, lean_object* v_inst_1353_, lean_object* v_inst_1354_, lean_object* v_inst_1355_, lean_object* v_inst_1356_, lean_object* v_inst_1357_, lean_object* v_inst_1358_, lean_object* v_inst_1359_, lean_object* v_inst_1360_, lean_object* v_inst_1361_, lean_object* v_inst_1362_, lean_object* v_inst_1363_, lean_object* v_stx_1364_){
_start:
{
lean_object* v_toApplicative_1365_; lean_object* v_toBind_1366_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v_toPure_1372_; lean_object* v___x_1373_; lean_object* v_docCommentStx_1374_; lean_object* v___x_1375_; lean_object* v_attrsStx_1376_; lean_object* v___x_1377_; lean_object* v_visibilityStx_1378_; lean_object* v___x_1379_; lean_object* v_protectedStx_1380_; uint8_t v___y_1382_; lean_object* v___y_1383_; uint8_t v___y_1384_; lean_object* v___y_1385_; uint8_t v___y_1400_; lean_object* v___y_1401_; uint8_t v___y_1402_; uint8_t v___y_1414_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_toApplicative_1365_ = lean_ctor_get(v_inst_1352_, 0);
v_toBind_1366_ = lean_ctor_get(v_inst_1352_, 1);
lean_inc(v_toBind_1366_);
v_toPure_1372_ = lean_ctor_get(v_toApplicative_1365_, 1);
v___x_1373_ = lean_unsigned_to_nat(0u);
v_docCommentStx_1374_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1373_);
v___x_1375_ = lean_unsigned_to_nat(1u);
v_attrsStx_1376_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1375_);
v___x_1377_ = lean_unsigned_to_nat(2u);
v_visibilityStx_1378_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1377_);
v___x_1379_ = lean_unsigned_to_nat(3u);
v_protectedStx_1380_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1379_);
v___x_1427_ = lean_unsigned_to_nat(4u);
v___x_1428_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1427_);
v___x_1429_ = l_Lean_Syntax_isNone(v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
v___x_1430_ = l_Lean_Syntax_getArg(v___x_1428_, v___x_1373_);
lean_dec(v___x_1428_);
v___x_1431_ = l_Lean_Syntax_getKind(v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__1));
v___x_1433_ = lean_name_eq(v___x_1431_, v___x_1432_);
lean_dec(v___x_1431_);
if (v___x_1433_ == 0)
{
uint8_t v___x_1434_; 
v___x_1434_ = 2;
v___y_1414_ = v___x_1434_;
goto v___jp_1413_;
}
else
{
uint8_t v___x_1435_; 
v___x_1435_ = 1;
v___y_1414_ = v___x_1435_;
goto v___jp_1413_;
}
}
else
{
uint8_t v___x_1436_; 
lean_dec(v___x_1428_);
v___x_1436_ = 0;
v___y_1414_ = v___x_1436_;
goto v___jp_1413_;
}
v___jp_1367_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = l_Lean_Elab_elabVisibility___redArg(v_inst_1352_, v_inst_1355_, v_inst_1353_, v_inst_1360_, v_inst_1362_, v_inst_1361_, v___y_1369_);
v___x_1371_ = lean_apply_4(v_toBind_1366_, lean_box(0), lean_box(0), v___x_1370_, v___y_1368_);
return v___x_1371_;
}
v___jp_1381_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___f_1388_; lean_object* v___x_1389_; 
v___x_1386_ = lean_box(v___y_1384_);
v___x_1387_ = lean_box(v___y_1382_);
lean_inc_ref(v_inst_1362_);
lean_inc(v_inst_1361_);
lean_inc(v_inst_1360_);
lean_inc_ref(v_inst_1355_);
lean_inc_ref(v_inst_1353_);
lean_inc_ref(v_inst_1352_);
lean_inc(v_toBind_1366_);
lean_inc(v_toPure_1372_);
v___f_1388_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__3___boxed), 23, 22);
lean_closure_set(v___f_1388_, 0, v_stx_1364_);
lean_closure_set(v___f_1388_, 1, v___y_1385_);
lean_closure_set(v___f_1388_, 2, v___x_1386_);
lean_closure_set(v___f_1388_, 3, v___x_1387_);
lean_closure_set(v___f_1388_, 4, v_toPure_1372_);
lean_closure_set(v___f_1388_, 5, v___y_1383_);
lean_closure_set(v___f_1388_, 6, v_attrsStx_1376_);
lean_closure_set(v___f_1388_, 7, v___x_1373_);
lean_closure_set(v___f_1388_, 8, v_toBind_1366_);
lean_closure_set(v___f_1388_, 9, v_inst_1352_);
lean_closure_set(v___f_1388_, 10, v_inst_1353_);
lean_closure_set(v___f_1388_, 11, v_inst_1354_);
lean_closure_set(v___f_1388_, 12, v_inst_1355_);
lean_closure_set(v___f_1388_, 13, v_inst_1357_);
lean_closure_set(v___f_1388_, 14, v_inst_1358_);
lean_closure_set(v___f_1388_, 15, v_inst_1359_);
lean_closure_set(v___f_1388_, 16, v_inst_1360_);
lean_closure_set(v___f_1388_, 17, v_inst_1361_);
lean_closure_set(v___f_1388_, 18, v_inst_1362_);
lean_closure_set(v___f_1388_, 19, v_inst_1363_);
lean_closure_set(v___f_1388_, 20, v_inst_1356_);
lean_closure_set(v___f_1388_, 21, v_protectedStx_1380_);
v___x_1389_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_1378_);
lean_dec(v_visibilityStx_1378_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_box(0);
v___y_1368_ = v___f_1388_;
v___y_1369_ = v___x_1390_;
goto v___jp_1367_;
}
else
{
lean_object* v_val_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_val_1391_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1389_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_val_1391_);
lean_dec(v___x_1389_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_val_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
v___y_1368_ = v___f_1388_;
v___y_1369_ = v___x_1396_;
goto v___jp_1367_;
}
}
}
}
v___jp_1399_:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_1374_);
lean_dec(v_docCommentStx_1374_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_box(0);
v___y_1382_ = v___y_1402_;
v___y_1383_ = v___y_1401_;
v___y_1384_ = v___y_1400_;
v___y_1385_ = v___x_1404_;
goto v___jp_1381_;
}
else
{
lean_object* v_val_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
v_val_1405_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1403_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_val_1405_);
lean_dec(v___x_1403_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_val_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
v___y_1382_ = v___y_1402_;
v___y_1383_ = v___y_1401_;
v___y_1384_ = v___y_1400_;
v___y_1385_ = v___x_1410_;
goto v___jp_1381_;
}
}
}
}
v___jp_1413_:
{
lean_object* v___x_1415_; lean_object* v_unsafeStx_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1415_ = lean_unsigned_to_nat(5u);
v_unsafeStx_1416_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1415_);
v___x_1417_ = lean_unsigned_to_nat(6u);
v___x_1418_ = l_Lean_Syntax_getArg(v_stx_1364_, v___x_1417_);
v___x_1419_ = l_Lean_Syntax_isNone(v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1420_ = l_Lean_Syntax_getArg(v___x_1418_, v___x_1373_);
lean_dec(v___x_1418_);
v___x_1421_ = l_Lean_Syntax_getKind(v___x_1420_);
v___x_1422_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__0));
v___x_1423_ = lean_name_eq(v___x_1421_, v___x_1422_);
lean_dec(v___x_1421_);
if (v___x_1423_ == 0)
{
uint8_t v___x_1424_; 
v___x_1424_ = 1;
v___y_1400_ = v___y_1414_;
v___y_1401_ = v_unsafeStx_1416_;
v___y_1402_ = v___x_1424_;
goto v___jp_1399_;
}
else
{
uint8_t v___x_1425_; 
v___x_1425_ = 0;
v___y_1400_ = v___y_1414_;
v___y_1401_ = v_unsafeStx_1416_;
v___y_1402_ = v___x_1425_;
goto v___jp_1399_;
}
}
else
{
uint8_t v___x_1426_; 
lean_dec(v___x_1418_);
v___x_1426_ = 2;
v___y_1400_ = v___y_1414_;
v___y_1401_ = v_unsafeStx_1416_;
v___y_1402_ = v___x_1426_;
goto v___jp_1399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object* v_m_1437_, lean_object* v_inst_1438_, lean_object* v_inst_1439_, lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_inst_1442_, lean_object* v_inst_1443_, lean_object* v_inst_1444_, lean_object* v_inst_1445_, lean_object* v_inst_1446_, lean_object* v_inst_1447_, lean_object* v_inst_1448_, lean_object* v_inst_1449_, lean_object* v_stx_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Lean_Elab_elabModifiers___redArg(v_inst_1438_, v_inst_1439_, v_inst_1440_, v_inst_1441_, v_inst_1442_, v_inst_1443_, v_inst_1444_, v_inst_1445_, v_inst_1446_, v_inst_1447_, v_inst_1448_, v_inst_1449_, v_stx_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object* v_toPure_1452_, lean_object* v_declName_1453_, lean_object* v_____r_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_apply_2(v_toPure_1452_, lean_box(0), v_declName_1453_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object* v_declName_1456_, lean_object* v_env_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_addProtected(v_env_1457_, v_declName_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object* v_modifiers_1459_, lean_object* v_toPure_1460_, lean_object* v_declName_1461_, lean_object* v_modifyEnv_1462_, lean_object* v___f_1463_, lean_object* v_toBind_1464_, lean_object* v___f_1465_, lean_object* v_____r_1466_){
_start:
{
uint8_t v_isProtected_1467_; 
v_isProtected_1467_ = lean_ctor_get_uint8(v_modifiers_1459_, sizeof(void*)*3 + 1);
if (v_isProtected_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_dec(v___f_1465_);
lean_dec(v_toBind_1464_);
lean_dec_ref(v___f_1463_);
lean_dec(v_modifyEnv_1462_);
v___x_1468_ = lean_apply_2(v_toPure_1460_, lean_box(0), v_declName_1461_);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_dec(v_declName_1461_);
lean_dec(v_toPure_1460_);
v___x_1469_ = lean_apply_1(v_modifyEnv_1462_, v___f_1463_);
v___x_1470_ = lean_apply_4(v_toBind_1464_, lean_box(0), lean_box(0), v___x_1469_, v___f_1465_);
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object* v_modifiers_1471_, lean_object* v_toPure_1472_, lean_object* v_declName_1473_, lean_object* v_modifyEnv_1474_, lean_object* v___f_1475_, lean_object* v_toBind_1476_, lean_object* v___f_1477_, lean_object* v_____r_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Lean_Elab_applyVisibility___redArg___lam__2(v_modifiers_1471_, v_toPure_1472_, v_declName_1473_, v_modifyEnv_1474_, v___f_1475_, v_toBind_1476_, v___f_1477_, v_____r_1478_);
lean_dec_ref(v_modifiers_1471_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object* v_toPure_1480_, lean_object* v_modifiers_1481_, lean_object* v_modifyEnv_1482_, lean_object* v_toBind_1483_, lean_object* v_inst_1484_, lean_object* v_inst_1485_, lean_object* v_inst_1486_, lean_object* v_inst_1487_, lean_object* v_inst_1488_, lean_object* v_____r_1489_, lean_object* v_declName_1490_){
_start:
{
lean_object* v___f_1491_; lean_object* v___f_1492_; lean_object* v___f_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_inc_n(v_declName_1490_, 3);
lean_inc(v_toPure_1480_);
v___f_1491_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1491_, 0, v_toPure_1480_);
lean_closure_set(v___f_1491_, 1, v_declName_1490_);
v___f_1492_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1492_, 0, v_declName_1490_);
lean_inc(v_toBind_1483_);
v___f_1493_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1493_, 0, v_modifiers_1481_);
lean_closure_set(v___f_1493_, 1, v_toPure_1480_);
lean_closure_set(v___f_1493_, 2, v_declName_1490_);
lean_closure_set(v___f_1493_, 3, v_modifyEnv_1482_);
lean_closure_set(v___f_1493_, 4, v___f_1492_);
lean_closure_set(v___f_1493_, 5, v_toBind_1483_);
lean_closure_set(v___f_1493_, 6, v___f_1491_);
v___x_1494_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_1484_, v_inst_1485_, v_inst_1486_, v_inst_1487_, v_inst_1488_, v_declName_1490_);
v___x_1495_ = lean_apply_4(v_toBind_1483_, lean_box(0), lean_box(0), v___x_1494_, v___f_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object* v_declName_1496_, lean_object* v___f_1497_, lean_object* v_____do__lift_1498_){
_start:
{
lean_object* v_declName_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v_declName_1499_ = l_Lean_mkPrivateName(v_____do__lift_1498_, v_declName_1496_);
v___x_1500_ = lean_box(0);
v___x_1501_ = lean_apply_2(v___f_1497_, v___x_1500_, v_declName_1499_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object* v_declName_1502_, lean_object* v___f_1503_, lean_object* v_____do__lift_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Elab_applyVisibility___redArg___lam__4(v_declName_1502_, v___f_1503_, v_____do__lift_1504_);
lean_dec_ref(v_____do__lift_1504_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object* v_modifiers_1506_, lean_object* v_toBind_1507_, lean_object* v_getEnv_1508_, lean_object* v___f_1509_, lean_object* v___f_1510_, lean_object* v_declName_1511_, lean_object* v_____do__lift_1512_){
_start:
{
uint8_t v_visibility_1513_; uint8_t v___x_1514_; 
v_visibility_1513_ = lean_ctor_get_uint8(v_modifiers_1506_, sizeof(void*)*3);
v___x_1514_ = l_Lean_Elab_Visibility_isInferredPublic(v_____do__lift_1512_, v_visibility_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
lean_dec(v_declName_1511_);
lean_dec(v___f_1510_);
v___x_1515_ = lean_apply_4(v_toBind_1507_, lean_box(0), lean_box(0), v_getEnv_1508_, v___f_1509_);
return v___x_1515_;
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
lean_dec(v___f_1509_);
lean_dec(v_getEnv_1508_);
lean_dec(v_toBind_1507_);
v___x_1516_ = lean_box(0);
v___x_1517_ = lean_apply_2(v___f_1510_, v___x_1516_, v_declName_1511_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object* v_modifiers_1518_, lean_object* v_toBind_1519_, lean_object* v_getEnv_1520_, lean_object* v___f_1521_, lean_object* v___f_1522_, lean_object* v_declName_1523_, lean_object* v_____do__lift_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_Elab_applyVisibility___redArg___lam__5(v_modifiers_1518_, v_toBind_1519_, v_getEnv_1520_, v___f_1521_, v___f_1522_, v_declName_1523_, v_____do__lift_1524_);
lean_dec_ref(v_____do__lift_1524_);
lean_dec_ref(v_modifiers_1518_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object* v_inst_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_inst_1530_, lean_object* v_modifiers_1531_, lean_object* v_declName_1532_){
_start:
{
lean_object* v_toApplicative_1533_; lean_object* v_toBind_1534_; lean_object* v_getEnv_1535_; lean_object* v_modifyEnv_1536_; lean_object* v_toPure_1537_; lean_object* v___f_1538_; lean_object* v___f_1539_; lean_object* v___f_1540_; lean_object* v___x_1541_; 
v_toApplicative_1533_ = lean_ctor_get(v_inst_1526_, 0);
v_toBind_1534_ = lean_ctor_get(v_inst_1526_, 1);
lean_inc_n(v_toBind_1534_, 3);
v_getEnv_1535_ = lean_ctor_get(v_inst_1527_, 0);
lean_inc_n(v_getEnv_1535_, 2);
v_modifyEnv_1536_ = lean_ctor_get(v_inst_1527_, 1);
lean_inc(v_modifyEnv_1536_);
v_toPure_1537_ = lean_ctor_get(v_toApplicative_1533_, 1);
lean_inc(v_toPure_1537_);
lean_inc_ref(v_modifiers_1531_);
v___f_1538_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__3), 11, 9);
lean_closure_set(v___f_1538_, 0, v_toPure_1537_);
lean_closure_set(v___f_1538_, 1, v_modifiers_1531_);
lean_closure_set(v___f_1538_, 2, v_modifyEnv_1536_);
lean_closure_set(v___f_1538_, 3, v_toBind_1534_);
lean_closure_set(v___f_1538_, 4, v_inst_1526_);
lean_closure_set(v___f_1538_, 5, v_inst_1527_);
lean_closure_set(v___f_1538_, 6, v_inst_1528_);
lean_closure_set(v___f_1538_, 7, v_inst_1529_);
lean_closure_set(v___f_1538_, 8, v_inst_1530_);
lean_inc_ref(v___f_1538_);
lean_inc(v_declName_1532_);
v___f_1539_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_1539_, 0, v_declName_1532_);
lean_closure_set(v___f_1539_, 1, v___f_1538_);
v___f_1540_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1540_, 0, v_modifiers_1531_);
lean_closure_set(v___f_1540_, 1, v_toBind_1534_);
lean_closure_set(v___f_1540_, 2, v_getEnv_1535_);
lean_closure_set(v___f_1540_, 3, v___f_1539_);
lean_closure_set(v___f_1540_, 4, v___f_1538_);
lean_closure_set(v___f_1540_, 5, v_declName_1532_);
v___x_1541_ = lean_apply_4(v_toBind_1534_, lean_box(0), lean_box(0), v_getEnv_1535_, v___f_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object* v_m_1542_, lean_object* v_inst_1543_, lean_object* v_inst_1544_, lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v_inst_1547_, lean_object* v_modifiers_1548_, lean_object* v_declName_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1543_, v_inst_1544_, v_inst_1545_, v_inst_1546_, v_inst_1547_, v_modifiers_1548_, v_declName_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object* v_toPure_1551_, lean_object* v_____s_1552_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = lean_box(0);
v___x_1554_ = lean_apply_2(v_toPure_1551_, lean_box(0), v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object* v___x_1555_, lean_object* v_toPure_1556_, lean_object* v_r_1557_){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1555_);
v___x_1559_ = lean_apply_2(v_toPure_1556_, lean_box(0), v___x_1558_);
return v___x_1559_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0));
v___x_1562_ = l_Lean_stringToMessageData(v___x_1561_);
return v___x_1562_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2));
v___x_1565_ = l_Lean_stringToMessageData(v___x_1564_);
return v___x_1565_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4));
v___x_1568_ = l_Lean_stringToMessageData(v___x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object* v_pre_1569_, lean_object* v_declName_1570_, lean_object* v___x_1571_, lean_object* v_toPure_1572_, lean_object* v_inst_1573_, lean_object* v_inst_1574_, lean_object* v_toBind_1575_, lean_object* v___f_1576_, lean_object* v_a_1577_, lean_object* v_x_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1580_; uint8_t v___x_1581_; 
lean_inc(v_a_1577_);
lean_inc(v_pre_1569_);
v___x_1580_ = l_Lean_Name_append(v_pre_1569_, v_a_1577_);
v___x_1581_ = lean_name_eq(v___x_1580_, v_declName_1570_);
lean_dec(v___x_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_a_1577_);
lean_dec(v___f_1576_);
lean_dec(v_toBind_1575_);
lean_dec_ref(v_inst_1574_);
lean_dec_ref(v_inst_1573_);
lean_dec(v_declName_1570_);
lean_dec(v_pre_1569_);
v___x_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1571_);
v___x_1583_ = lean_apply_2(v_toPure_1572_, lean_box(0), v___x_1582_);
return v___x_1583_;
}
else
{
lean_object* v___x_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
lean_dec(v_toPure_1572_);
v___x_1584_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1585_ = 0;
v___x_1586_ = l_Lean_MessageData_ofConstName(v_declName_1570_, v___x_1585_);
v___x_1587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1584_);
lean_ctor_set(v___x_1587_, 1, v___x_1586_);
v___x_1588_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_1589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = l_Lean_MessageData_ofName(v_pre_1569_);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = l_Lean_MessageData_ofName(v_a_1577_);
v___x_1595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1593_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = l_Lean_throwError___redArg(v_inst_1573_, v_inst_1574_, v___x_1597_);
v___x_1599_ = lean_apply_4(v_toBind_1575_, lean_box(0), lean_box(0), v___x_1598_, v___f_1576_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object* v_pre_1600_, uint8_t v___x_1601_, lean_object* v_toPure_1602_, lean_object* v_declName_1603_, lean_object* v_inst_1604_, lean_object* v_inst_1605_, lean_object* v_toBind_1606_, lean_object* v___f_1607_, lean_object* v_____do__lift_1608_){
_start:
{
lean_object* v_fieldNames_1609_; lean_object* v___x_1610_; lean_object* v___f_1611_; lean_object* v___f_1612_; size_t v_sz_1613_; size_t v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
lean_inc(v_pre_1600_);
v_fieldNames_1609_ = l_Lean_getStructureFieldsFlattened(v_____do__lift_1608_, v_pre_1600_, v___x_1601_);
v___x_1610_ = lean_box(0);
lean_inc(v_toPure_1602_);
v___f_1611_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1611_, 0, v___x_1610_);
lean_closure_set(v___f_1611_, 1, v_toPure_1602_);
lean_inc(v_toBind_1606_);
lean_inc_ref(v_inst_1604_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2), 11, 8);
lean_closure_set(v___f_1612_, 0, v_pre_1600_);
lean_closure_set(v___f_1612_, 1, v_declName_1603_);
lean_closure_set(v___f_1612_, 2, v___x_1610_);
lean_closure_set(v___f_1612_, 3, v_toPure_1602_);
lean_closure_set(v___f_1612_, 4, v_inst_1604_);
lean_closure_set(v___f_1612_, 5, v_inst_1605_);
lean_closure_set(v___f_1612_, 6, v_toBind_1606_);
lean_closure_set(v___f_1612_, 7, v___f_1611_);
v_sz_1613_ = lean_array_size(v_fieldNames_1609_);
v___x_1614_ = ((size_t)0ULL);
v___x_1615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1604_, v_fieldNames_1609_, v___f_1612_, v_sz_1613_, v___x_1614_, v___x_1610_);
v___x_1616_ = lean_apply_4(v_toBind_1606_, lean_box(0), lean_box(0), v___x_1615_, v___f_1607_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object* v_pre_1617_, lean_object* v___x_1618_, lean_object* v_toPure_1619_, lean_object* v_declName_1620_, lean_object* v_inst_1621_, lean_object* v_inst_1622_, lean_object* v_toBind_1623_, lean_object* v___f_1624_, lean_object* v_____do__lift_1625_){
_start:
{
uint8_t v___x_469__boxed_1626_; lean_object* v_res_1627_; 
v___x_469__boxed_1626_ = lean_unbox(v___x_1618_);
v_res_1627_ = l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(v_pre_1617_, v___x_469__boxed_1626_, v_toPure_1619_, v_declName_1620_, v_inst_1621_, v_inst_1622_, v_toBind_1623_, v___f_1624_, v_____do__lift_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object* v_pre_1628_, lean_object* v_toPure_1629_, lean_object* v_declName_1630_, lean_object* v_inst_1631_, lean_object* v_inst_1632_, lean_object* v_toBind_1633_, lean_object* v___f_1634_, lean_object* v_getEnv_1635_, lean_object* v_____do__lift_1636_){
_start:
{
uint8_t v___x_1637_; 
lean_inc(v_pre_1628_);
v___x_1637_ = l_Lean_isStructure(v_____do__lift_1636_, v_pre_1628_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec(v_getEnv_1635_);
lean_dec(v___f_1634_);
lean_dec(v_toBind_1633_);
lean_dec_ref(v_inst_1632_);
lean_dec_ref(v_inst_1631_);
lean_dec(v_declName_1630_);
lean_dec(v_pre_1628_);
v___x_1638_ = lean_box(0);
v___x_1639_ = lean_apply_2(v_toPure_1629_, lean_box(0), v___x_1638_);
return v___x_1639_;
}
else
{
lean_object* v___x_1640_; lean_object* v___f_1641_; lean_object* v___x_1642_; 
v___x_1640_ = lean_box(v___x_1637_);
lean_inc(v_toBind_1633_);
v___f_1641_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_1641_, 0, v_pre_1628_);
lean_closure_set(v___f_1641_, 1, v___x_1640_);
lean_closure_set(v___f_1641_, 2, v_toPure_1629_);
lean_closure_set(v___f_1641_, 3, v_declName_1630_);
lean_closure_set(v___f_1641_, 4, v_inst_1631_);
lean_closure_set(v___f_1641_, 5, v_inst_1632_);
lean_closure_set(v___f_1641_, 6, v_toBind_1633_);
lean_closure_set(v___f_1641_, 7, v___f_1634_);
v___x_1642_ = lean_apply_4(v_toBind_1633_, lean_box(0), lean_box(0), v_getEnv_1635_, v___f_1641_);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_declName_1646_){
_start:
{
if (lean_obj_tag(v_declName_1646_) == 1)
{
lean_object* v_toApplicative_1647_; lean_object* v_toBind_1648_; lean_object* v_toPure_1649_; lean_object* v_pre_1650_; lean_object* v_getEnv_1651_; lean_object* v___f_1652_; lean_object* v___f_1653_; lean_object* v___x_1654_; 
v_toApplicative_1647_ = lean_ctor_get(v_inst_1643_, 0);
v_toBind_1648_ = lean_ctor_get(v_inst_1643_, 1);
lean_inc_n(v_toBind_1648_, 2);
v_toPure_1649_ = lean_ctor_get(v_toApplicative_1647_, 1);
lean_inc_n(v_toPure_1649_, 2);
v_pre_1650_ = lean_ctor_get(v_declName_1646_, 0);
lean_inc(v_pre_1650_);
v_getEnv_1651_ = lean_ctor_get(v_inst_1644_, 0);
lean_inc_n(v_getEnv_1651_, 2);
lean_dec_ref(v_inst_1644_);
v___f_1652_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1652_, 0, v_toPure_1649_);
v___f_1653_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4), 9, 8);
lean_closure_set(v___f_1653_, 0, v_pre_1650_);
lean_closure_set(v___f_1653_, 1, v_toPure_1649_);
lean_closure_set(v___f_1653_, 2, v_declName_1646_);
lean_closure_set(v___f_1653_, 3, v_inst_1643_);
lean_closure_set(v___f_1653_, 4, v_inst_1645_);
lean_closure_set(v___f_1653_, 5, v_toBind_1648_);
lean_closure_set(v___f_1653_, 6, v___f_1652_);
lean_closure_set(v___f_1653_, 7, v_getEnv_1651_);
v___x_1654_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v_getEnv_1651_, v___f_1653_);
return v___x_1654_;
}
else
{
lean_object* v_toApplicative_1655_; lean_object* v_toPure_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_toApplicative_1655_ = lean_ctor_get(v_inst_1643_, 0);
lean_inc_ref(v_toApplicative_1655_);
lean_dec(v_declName_1646_);
lean_dec_ref(v_inst_1645_);
lean_dec_ref(v_inst_1644_);
lean_dec_ref(v_inst_1643_);
v_toPure_1656_ = lean_ctor_get(v_toApplicative_1655_, 1);
lean_inc(v_toPure_1656_);
lean_dec_ref(v_toApplicative_1655_);
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_apply_2(v_toPure_1656_, lean_box(0), v___x_1657_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object* v_m_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_declName_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1660_, v_inst_1661_, v_inst_1662_, v_declName_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object* v_declName_1665_, lean_object* v_shortName_1666_, lean_object* v_toPure_1667_, lean_object* v_____r_1668_){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1669_, 0, v_declName_1665_);
lean_ctor_set(v___x_1669_, 1, v_shortName_1666_);
v___x_1670_ = lean_apply_2(v_toPure_1667_, lean_box(0), v___x_1669_);
return v___x_1670_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0));
v___x_1673_ = l_Lean_stringToMessageData(v___x_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object* v_modifiers_1674_, lean_object* v_shortName_1675_, lean_object* v_toPure_1676_, lean_object* v_currNamespace_1677_, lean_object* v_inst_1678_, lean_object* v_inst_1679_, lean_object* v_toBind_1680_, lean_object* v_declName_1681_){
_start:
{
uint8_t v_isProtected_1682_; 
v_isProtected_1682_ = lean_ctor_get_uint8(v_modifiers_1674_, sizeof(void*)*3 + 1);
if (v_isProtected_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec(v_toBind_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
lean_dec(v_currNamespace_1677_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_declName_1681_);
lean_ctor_set(v___x_1683_, 1, v_shortName_1675_);
v___x_1684_ = lean_apply_2(v_toPure_1676_, lean_box(0), v___x_1683_);
return v___x_1684_;
}
else
{
if (lean_obj_tag(v_currNamespace_1677_) == 1)
{
lean_object* v_str_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec(v_toBind_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
v_str_1685_ = lean_ctor_get(v_currNamespace_1677_, 1);
lean_inc_ref(v_str_1685_);
lean_dec_ref_known(v_currNamespace_1677_, 2);
v___x_1686_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_1687_ = l_Lean_Name_str___override(v___x_1686_, v_str_1685_);
v___x_1688_ = l_Lean_Name_append(v___x_1687_, v_shortName_1675_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v_declName_1681_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = lean_apply_2(v_toPure_1676_, lean_box(0), v___x_1689_);
return v___x_1690_;
}
else
{
lean_object* v___f_1691_; uint8_t v___x_1692_; 
lean_dec(v_currNamespace_1677_);
lean_inc(v_toPure_1676_);
lean_inc(v_shortName_1675_);
lean_inc(v_declName_1681_);
v___f_1691_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1691_, 0, v_declName_1681_);
lean_closure_set(v___f_1691_, 1, v_shortName_1675_);
lean_closure_set(v___f_1691_, 2, v_toPure_1676_);
v___x_1692_ = l_Lean_Name_isAtomic(v_shortName_1675_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_dec_ref(v___f_1691_);
lean_dec(v_toBind_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
v___x_1693_ = lean_box(0);
v___x_1694_ = l_Lean_Elab_mkDeclName___redArg___lam__0(v_declName_1681_, v_shortName_1675_, v_toPure_1676_, v___x_1693_);
return v___x_1694_;
}
else
{
lean_object* v___f_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec(v_declName_1681_);
lean_dec(v_toPure_1676_);
lean_dec(v_shortName_1675_);
v___f_1695_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1695_, 0, v___f_1691_);
v___x_1696_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_1697_ = l_Lean_throwError___redArg(v_inst_1678_, v_inst_1679_, v___x_1696_);
v___x_1698_ = lean_apply_4(v_toBind_1680_, lean_box(0), lean_box(0), v___x_1697_, v___f_1695_);
return v___x_1698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object* v_modifiers_1699_, lean_object* v_shortName_1700_, lean_object* v_toPure_1701_, lean_object* v_currNamespace_1702_, lean_object* v_inst_1703_, lean_object* v_inst_1704_, lean_object* v_toBind_1705_, lean_object* v_declName_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Elab_mkDeclName___redArg___lam__2(v_modifiers_1699_, v_shortName_1700_, v_toPure_1701_, v_currNamespace_1702_, v_inst_1703_, v_inst_1704_, v_toBind_1705_, v_declName_1706_);
lean_dec_ref(v_modifiers_1699_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_inst_1710_, lean_object* v_inst_1711_, lean_object* v_inst_1712_, lean_object* v_modifiers_1713_, lean_object* v___y_1714_, lean_object* v_toBind_1715_, lean_object* v___f_1716_, lean_object* v_____r_1717_){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1708_, v_inst_1709_, v_inst_1710_, v_inst_1711_, v_inst_1712_, v_modifiers_1713_, v___y_1714_);
v___x_1719_ = lean_apply_4(v_toBind_1715_, lean_box(0), lean_box(0), v___x_1718_, v___f_1716_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object* v_modifiers_1720_, lean_object* v_toPure_1721_, lean_object* v_inst_1722_, lean_object* v_inst_1723_, lean_object* v_toBind_1724_, lean_object* v_inst_1725_, lean_object* v_inst_1726_, lean_object* v_inst_1727_, lean_object* v___y_1728_, lean_object* v_____r_1729_, lean_object* v_shortName_1730_, lean_object* v_currNamespace_1731_){
_start:
{
lean_object* v___f_1732_; lean_object* v___f_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_inc_n(v_toBind_1724_, 2);
lean_inc_ref_n(v_inst_1723_, 2);
lean_inc_ref_n(v_inst_1722_, 2);
lean_inc_ref(v_modifiers_1720_);
v___f_1732_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1732_, 0, v_modifiers_1720_);
lean_closure_set(v___f_1732_, 1, v_shortName_1730_);
lean_closure_set(v___f_1732_, 2, v_toPure_1721_);
lean_closure_set(v___f_1732_, 3, v_currNamespace_1731_);
lean_closure_set(v___f_1732_, 4, v_inst_1722_);
lean_closure_set(v___f_1732_, 5, v_inst_1723_);
lean_closure_set(v___f_1732_, 6, v_toBind_1724_);
lean_inc(v___y_1728_);
lean_inc_ref(v_inst_1725_);
v___f_1733_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1733_, 0, v_inst_1722_);
lean_closure_set(v___f_1733_, 1, v_inst_1725_);
lean_closure_set(v___f_1733_, 2, v_inst_1723_);
lean_closure_set(v___f_1733_, 3, v_inst_1726_);
lean_closure_set(v___f_1733_, 4, v_inst_1727_);
lean_closure_set(v___f_1733_, 5, v_modifiers_1720_);
lean_closure_set(v___f_1733_, 6, v___y_1728_);
lean_closure_set(v___f_1733_, 7, v_toBind_1724_);
lean_closure_set(v___f_1733_, 8, v___f_1732_);
v___x_1734_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1722_, v_inst_1725_, v_inst_1723_, v___y_1728_);
v___x_1735_ = lean_apply_4(v_toBind_1724_, lean_box(0), lean_box(0), v___x_1734_, v___f_1733_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object* v___f_1736_, lean_object* v_shortName_1737_, lean_object* v_currNamespace_1738_, lean_object* v_____r_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_apply_3(v___f_1736_, v_____r_1739_, v_shortName_1737_, v_currNamespace_1738_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object* v_modifiers_1741_, lean_object* v_toPure_1742_, lean_object* v_inst_1743_, lean_object* v_inst_1744_, lean_object* v_toBind_1745_, lean_object* v_inst_1746_, lean_object* v_inst_1747_, lean_object* v_inst_1748_, uint8_t v_isRootName_1749_, lean_object* v_shortName_1750_, lean_object* v_currNamespace_1751_, lean_object* v_name_1752_, lean_object* v___x_1753_, lean_object* v_imported_1754_, lean_object* v_ctx_1755_, lean_object* v_scopes_1756_, lean_object* v_____r_1757_){
_start:
{
lean_object* v___y_1759_; 
if (v_isRootName_1749_ == 0)
{
lean_object* v___x_1778_; 
lean_dec(v_scopes_1756_);
lean_dec(v_ctx_1755_);
lean_dec(v_imported_1754_);
lean_inc(v_shortName_1750_);
lean_inc(v_currNamespace_1751_);
v___x_1778_ = l_Lean_Name_append(v_currNamespace_1751_, v_shortName_1750_);
v___y_1759_ = v___x_1778_;
goto v___jp_1758_;
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1779_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
lean_inc(v_name_1752_);
v___x_1780_ = l_Lean_Name_replacePrefix(v_name_1752_, v___x_1753_, v___x_1779_);
v___x_1781_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
lean_ctor_set(v___x_1781_, 1, v_imported_1754_);
lean_ctor_set(v___x_1781_, 2, v_ctx_1755_);
lean_ctor_set(v___x_1781_, 3, v_scopes_1756_);
v___x_1782_ = l_Lean_MacroScopesView_review(v___x_1781_);
v___y_1759_ = v___x_1782_;
goto v___jp_1758_;
}
v___jp_1758_:
{
lean_object* v___f_1760_; 
lean_inc(v___y_1759_);
lean_inc_ref(v_inst_1748_);
lean_inc(v_inst_1747_);
lean_inc_ref(v_inst_1746_);
lean_inc(v_toBind_1745_);
lean_inc_ref(v_inst_1744_);
lean_inc_ref(v_inst_1743_);
lean_inc(v_toPure_1742_);
lean_inc_ref(v_modifiers_1741_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__3), 12, 9);
lean_closure_set(v___f_1760_, 0, v_modifiers_1741_);
lean_closure_set(v___f_1760_, 1, v_toPure_1742_);
lean_closure_set(v___f_1760_, 2, v_inst_1743_);
lean_closure_set(v___f_1760_, 3, v_inst_1744_);
lean_closure_set(v___f_1760_, 4, v_toBind_1745_);
lean_closure_set(v___f_1760_, 5, v_inst_1746_);
lean_closure_set(v___f_1760_, 6, v_inst_1747_);
lean_closure_set(v___f_1760_, 7, v_inst_1748_);
lean_closure_set(v___f_1760_, 8, v___y_1759_);
if (v_isRootName_1749_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
lean_dec_ref(v___f_1760_);
lean_dec(v_name_1752_);
v___x_1761_ = lean_box(0);
v___x_1762_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1741_, v_toPure_1742_, v_inst_1743_, v_inst_1744_, v_toBind_1745_, v_inst_1746_, v_inst_1747_, v_inst_1748_, v___y_1759_, v___x_1761_, v_shortName_1750_, v_currNamespace_1751_);
return v___x_1762_;
}
else
{
if (lean_obj_tag(v_name_1752_) == 1)
{
lean_object* v_pre_1763_; lean_object* v_str_1764_; lean_object* v___x_1765_; lean_object* v_shortName_1766_; lean_object* v_currNamespace_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec_ref(v___f_1760_);
lean_dec(v_currNamespace_1751_);
lean_dec(v_shortName_1750_);
v_pre_1763_ = lean_ctor_get(v_name_1752_, 0);
lean_inc(v_pre_1763_);
v_str_1764_ = lean_ctor_get(v_name_1752_, 1);
lean_inc_ref(v_str_1764_);
lean_dec_ref_known(v_name_1752_, 2);
v___x_1765_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v_shortName_1766_ = l_Lean_Name_str___override(v___x_1765_, v_str_1764_);
v_currNamespace_1767_ = l_Lean_Name_replacePrefix(v_pre_1763_, v___x_1753_, v___x_1765_);
v___x_1768_ = lean_box(0);
v___x_1769_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1741_, v_toPure_1742_, v_inst_1743_, v_inst_1744_, v_toBind_1745_, v_inst_1746_, v_inst_1747_, v_inst_1748_, v___y_1759_, v___x_1768_, v_shortName_1766_, v_currNamespace_1767_);
return v___x_1769_;
}
else
{
lean_object* v___f_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
lean_dec(v___y_1759_);
lean_dec_ref(v_inst_1748_);
lean_dec(v_inst_1747_);
lean_dec_ref(v_inst_1746_);
lean_dec(v_toPure_1742_);
lean_dec_ref(v_modifiers_1741_);
v___f_1770_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__4), 4, 3);
lean_closure_set(v___f_1770_, 0, v___f_1760_);
lean_closure_set(v___f_1770_, 1, v_shortName_1750_);
lean_closure_set(v___f_1770_, 2, v_currNamespace_1751_);
v___x_1771_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1772_ = l_Lean_MessageData_ofName(v_name_1752_);
v___x_1773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1771_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1773_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = l_Lean_throwError___redArg(v_inst_1743_, v_inst_1744_, v___x_1775_);
v___x_1777_ = lean_apply_4(v_toBind_1745_, lean_box(0), lean_box(0), v___x_1776_, v___f_1770_);
return v___x_1777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_modifiers_1783_ = _args[0];
lean_object* v_toPure_1784_ = _args[1];
lean_object* v_inst_1785_ = _args[2];
lean_object* v_inst_1786_ = _args[3];
lean_object* v_toBind_1787_ = _args[4];
lean_object* v_inst_1788_ = _args[5];
lean_object* v_inst_1789_ = _args[6];
lean_object* v_inst_1790_ = _args[7];
lean_object* v_isRootName_1791_ = _args[8];
lean_object* v_shortName_1792_ = _args[9];
lean_object* v_currNamespace_1793_ = _args[10];
lean_object* v_name_1794_ = _args[11];
lean_object* v___x_1795_ = _args[12];
lean_object* v_imported_1796_ = _args[13];
lean_object* v_ctx_1797_ = _args[14];
lean_object* v_scopes_1798_ = _args[15];
lean_object* v_____r_1799_ = _args[16];
_start:
{
uint8_t v_isRootName_boxed_1800_; lean_object* v_res_1801_; 
v_isRootName_boxed_1800_ = lean_unbox(v_isRootName_1791_);
v_res_1801_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1783_, v_toPure_1784_, v_inst_1785_, v_inst_1786_, v_toBind_1787_, v_inst_1788_, v_inst_1789_, v_inst_1790_, v_isRootName_boxed_1800_, v_shortName_1792_, v_currNamespace_1793_, v_name_1794_, v___x_1795_, v_imported_1796_, v_ctx_1797_, v_scopes_1798_, v_____r_1799_);
lean_dec(v___x_1795_);
return v_res_1801_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___closed__3(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__2));
v___x_1807_ = l_Lean_stringToMessageData(v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object* v_inst_1808_, lean_object* v_inst_1809_, lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_inst_1812_, lean_object* v_currNamespace_1813_, lean_object* v_modifiers_1814_, lean_object* v_shortName_1815_){
_start:
{
lean_object* v_view_1816_; lean_object* v_toApplicative_1817_; lean_object* v_name_1818_; lean_object* v_imported_1819_; lean_object* v_ctx_1820_; lean_object* v_scopes_1821_; lean_object* v_toBind_1822_; lean_object* v_toPure_1823_; lean_object* v___x_1824_; uint8_t v_isRootName_1825_; lean_object* v___x_1826_; lean_object* v___f_1827_; uint8_t v___x_1828_; 
lean_inc_n(v_shortName_1815_, 2);
v_view_1816_ = l_Lean_extractMacroScopes(v_shortName_1815_);
v_toApplicative_1817_ = lean_ctor_get(v_inst_1808_, 0);
v_name_1818_ = lean_ctor_get(v_view_1816_, 0);
lean_inc_n(v_name_1818_, 2);
v_imported_1819_ = lean_ctor_get(v_view_1816_, 1);
lean_inc_n(v_imported_1819_, 2);
v_ctx_1820_ = lean_ctor_get(v_view_1816_, 2);
lean_inc_n(v_ctx_1820_, 2);
v_scopes_1821_ = lean_ctor_get(v_view_1816_, 3);
lean_inc_n(v_scopes_1821_, 2);
lean_dec_ref(v_view_1816_);
v_toBind_1822_ = lean_ctor_get(v_inst_1808_, 1);
lean_inc_n(v_toBind_1822_, 2);
v_toPure_1823_ = lean_ctor_get(v_toApplicative_1817_, 1);
v___x_1824_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_1825_ = l_Lean_Name_isPrefixOf(v___x_1824_, v_name_1818_);
v___x_1826_ = lean_box(v_isRootName_1825_);
lean_inc(v_currNamespace_1813_);
lean_inc_ref(v_inst_1812_);
lean_inc(v_inst_1811_);
lean_inc_ref(v_inst_1809_);
lean_inc_ref(v_inst_1810_);
lean_inc_ref(v_inst_1808_);
lean_inc(v_toPure_1823_);
lean_inc_ref(v_modifiers_1814_);
v___f_1827_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_1827_, 0, v_modifiers_1814_);
lean_closure_set(v___f_1827_, 1, v_toPure_1823_);
lean_closure_set(v___f_1827_, 2, v_inst_1808_);
lean_closure_set(v___f_1827_, 3, v_inst_1810_);
lean_closure_set(v___f_1827_, 4, v_toBind_1822_);
lean_closure_set(v___f_1827_, 5, v_inst_1809_);
lean_closure_set(v___f_1827_, 6, v_inst_1811_);
lean_closure_set(v___f_1827_, 7, v_inst_1812_);
lean_closure_set(v___f_1827_, 8, v___x_1826_);
lean_closure_set(v___f_1827_, 9, v_shortName_1815_);
lean_closure_set(v___f_1827_, 10, v_currNamespace_1813_);
lean_closure_set(v___f_1827_, 11, v_name_1818_);
lean_closure_set(v___f_1827_, 12, v___x_1824_);
lean_closure_set(v___f_1827_, 13, v_imported_1819_);
lean_closure_set(v___f_1827_, 14, v_ctx_1820_);
lean_closure_set(v___f_1827_, 15, v_scopes_1821_);
v___x_1828_ = lean_name_eq(v_name_1818_, v___x_1824_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_inc(v_toPure_1823_);
lean_dec_ref(v___f_1827_);
v___x_1829_ = lean_box(0);
v___x_1830_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1814_, v_toPure_1823_, v_inst_1808_, v_inst_1810_, v_toBind_1822_, v_inst_1809_, v_inst_1811_, v_inst_1812_, v_isRootName_1825_, v_shortName_1815_, v_currNamespace_1813_, v_name_1818_, v___x_1824_, v_imported_1819_, v_ctx_1820_, v_scopes_1821_, v___x_1829_);
return v___x_1830_;
}
else
{
lean_object* v___f_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec(v_scopes_1821_);
lean_dec(v_ctx_1820_);
lean_dec(v_imported_1819_);
lean_dec(v_name_1818_);
lean_dec(v_shortName_1815_);
lean_dec_ref(v_modifiers_1814_);
lean_dec(v_currNamespace_1813_);
lean_dec_ref(v_inst_1812_);
lean_dec(v_inst_1811_);
lean_dec_ref(v_inst_1809_);
v___f_1831_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1831_, 0, v___f_1827_);
v___x_1832_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_1833_ = l_Lean_throwError___redArg(v_inst_1808_, v_inst_1810_, v___x_1832_);
v___x_1834_ = lean_apply_4(v_toBind_1822_, lean_box(0), lean_box(0), v___x_1833_, v___f_1831_);
return v___x_1834_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object* v_m_1835_, lean_object* v_inst_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_inst_1840_, lean_object* v_currNamespace_1841_, lean_object* v_modifiers_1842_, lean_object* v_shortName_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_Elab_mkDeclName___redArg(v_inst_1836_, v_inst_1837_, v_inst_1838_, v_inst_1839_, v_inst_1840_, v_currNamespace_1841_, v_modifiers_1842_, v_shortName_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object* v_declId_1854_){
_start:
{
uint8_t v___x_1855_; 
v___x_1855_ = l_Lean_Syntax_isIdent(v_declId_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v_id_1858_; lean_object* v___x_1859_; lean_object* v_optUnivDeclStx_1860_; lean_object* v___x_1861_; 
v___x_1856_ = lean_unsigned_to_nat(0u);
v___x_1857_ = l_Lean_Syntax_getArg(v_declId_1854_, v___x_1856_);
v_id_1858_ = l_Lean_Syntax_getId(v___x_1857_);
lean_dec(v___x_1857_);
v___x_1859_ = lean_unsigned_to_nat(1u);
v_optUnivDeclStx_1860_ = l_Lean_Syntax_getArg(v_declId_1854_, v___x_1859_);
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v_id_1858_);
lean_ctor_set(v___x_1861_, 1, v_optUnivDeclStx_1860_);
return v___x_1861_;
}
else
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = l_Lean_Syntax_getId(v_declId_1854_);
v___x_1863_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__3));
v___x_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
return v___x_1864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object* v_declId_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_Elab_expandDeclIdCore(v_declId_1865_);
lean_dec(v_declId_1865_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object* v_msgData_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v_env_1874_; lean_object* v___x_1875_; lean_object* v_toCold_1876_; lean_object* v_mctx_1877_; lean_object* v_lctx_1878_; lean_object* v_options_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1873_ = lean_st_ref_get(v___y_1871_);
v_env_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc_ref(v_env_1874_);
lean_dec(v___x_1873_);
v___x_1875_ = lean_st_ref_get(v___y_1869_);
v_toCold_1876_ = lean_ctor_get(v___y_1870_, 0);
v_mctx_1877_ = lean_ctor_get(v___x_1875_, 0);
lean_inc_ref(v_mctx_1877_);
lean_dec(v___x_1875_);
v_lctx_1878_ = lean_ctor_get(v___y_1868_, 2);
v_options_1879_ = lean_ctor_get(v_toCold_1876_, 2);
lean_inc_ref(v_options_1879_);
lean_inc_ref(v_lctx_1878_);
v___x_1880_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1880_, 0, v_env_1874_);
lean_ctor_set(v___x_1880_, 1, v_mctx_1877_);
lean_ctor_set(v___x_1880_, 2, v_lctx_1878_);
lean_ctor_set(v___x_1880_, 3, v_options_1879_);
v___x_1881_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
lean_ctor_set(v___x_1881_, 1, v_msgData_1867_);
v___x_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msgData_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
return v_res_1889_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object* v_opts_1890_, lean_object* v_opt_1891_){
_start:
{
lean_object* v_name_1892_; lean_object* v_defValue_1893_; lean_object* v_map_1894_; lean_object* v___x_1895_; 
v_name_1892_ = lean_ctor_get(v_opt_1891_, 0);
v_defValue_1893_ = lean_ctor_get(v_opt_1891_, 1);
v_map_1894_ = lean_ctor_get(v_opts_1890_, 0);
v___x_1895_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1894_, v_name_1892_);
if (lean_obj_tag(v___x_1895_) == 0)
{
uint8_t v___x_1896_; 
v___x_1896_ = lean_unbox(v_defValue_1893_);
return v___x_1896_;
}
else
{
lean_object* v_val_1897_; 
v_val_1897_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_val_1897_);
lean_dec_ref_known(v___x_1895_, 1);
if (lean_obj_tag(v_val_1897_) == 1)
{
uint8_t v_v_1898_; 
v_v_1898_ = lean_ctor_get_uint8(v_val_1897_, 0);
lean_dec_ref_known(v_val_1897_, 0);
return v_v_1898_;
}
else
{
uint8_t v___x_1899_; 
lean_dec(v_val_1897_);
v___x_1899_ = lean_unbox(v_defValue_1893_);
return v___x_1899_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_opts_1900_, lean_object* v_opt_1901_){
_start:
{
uint8_t v_res_1902_; lean_object* v_r_1903_; 
v_res_1902_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v_opts_1900_, v_opt_1901_);
lean_dec_ref(v_opt_1901_);
lean_dec_ref(v_opts_1900_);
v_r_1903_ = lean_box(v_res_1902_);
return v_r_1903_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_box(1);
v___x_1905_ = l_Lean_MessageData_ofFormat(v___x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2));
v___x_1910_ = l_Lean_MessageData_ofFormat(v___x_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object* v_x_1911_, lean_object* v_x_1912_){
_start:
{
if (lean_obj_tag(v_x_1912_) == 0)
{
return v_x_1911_;
}
else
{
lean_object* v_head_1913_; lean_object* v_tail_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1936_; 
v_head_1913_ = lean_ctor_get(v_x_1912_, 0);
v_tail_1914_ = lean_ctor_get(v_x_1912_, 1);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_x_1912_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1916_ = v_x_1912_;
v_isShared_1917_ = v_isSharedCheck_1936_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_tail_1914_);
lean_inc(v_head_1913_);
lean_dec(v_x_1912_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1936_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v_before_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1934_; 
v_before_1918_ = lean_ctor_get(v_head_1913_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_head_1913_);
if (v_isSharedCheck_1934_ == 0)
{
lean_object* v_unused_1935_; 
v_unused_1935_ = lean_ctor_get(v_head_1913_, 1);
lean_dec(v_unused_1935_);
v___x_1920_ = v_head_1913_;
v_isShared_1921_ = v_isSharedCheck_1934_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_before_1918_);
lean_dec(v_head_1913_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1934_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1922_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_1921_ == 0)
{
lean_ctor_set_tag(v___x_1920_, 7);
lean_ctor_set(v___x_1920_, 1, v___x_1922_);
lean_ctor_set(v___x_1920_, 0, v_x_1911_);
v___x_1924_ = v___x_1920_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_x_1911_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3);
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 7);
lean_ctor_set(v___x_1916_, 1, v___x_1925_);
lean_ctor_set(v___x_1916_, 0, v___x_1924_);
v___x_1927_ = v___x_1916_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1928_ = l_Lean_MessageData_ofSyntax(v_before_1918_);
v___x_1929_ = l_Lean_indentD(v___x_1928_);
v___x_1930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1927_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
v_x_1911_ = v___x_1930_;
v_x_1912_ = v_tail_1914_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1));
v___x_1941_ = l_Lean_MessageData_ofFormat(v___x_1940_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_1942_, lean_object* v_macroStack_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_toCold_1946_; lean_object* v_options_1947_; lean_object* v___x_1948_; uint8_t v___x_1949_; 
v_toCold_1946_ = lean_ctor_get(v___y_1944_, 0);
v_options_1947_ = lean_ctor_get(v_toCold_1946_, 2);
v___x_1948_ = l_Lean_Elab_pp_macroStack;
v___x_1949_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v_options_1947_, v___x_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
lean_dec(v_macroStack_1943_);
v___x_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1950_, 0, v_msgData_1942_);
return v___x_1950_;
}
else
{
if (lean_obj_tag(v_macroStack_1943_) == 0)
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_msgData_1942_);
return v___x_1951_;
}
else
{
lean_object* v_head_1952_; lean_object* v_after_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1968_; 
v_head_1952_ = lean_ctor_get(v_macroStack_1943_, 0);
lean_inc(v_head_1952_);
v_after_1953_ = lean_ctor_get(v_head_1952_, 1);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_head_1952_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v_head_1952_, 0);
lean_dec(v_unused_1969_);
v___x_1955_ = v_head_1952_;
v_isShared_1956_ = v_isSharedCheck_1968_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_after_1953_);
lean_dec(v_head_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1968_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1957_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_1956_ == 0)
{
lean_ctor_set_tag(v___x_1955_, 7);
lean_ctor_set(v___x_1955_, 1, v___x_1957_);
lean_ctor_set(v___x_1955_, 0, v_msgData_1942_);
v___x_1959_ = v___x_1955_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_msgData_1942_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v_msgData_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1960_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_1961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1959_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = l_Lean_MessageData_ofSyntax(v_after_1953_);
v___x_1963_ = l_Lean_indentD(v___x_1962_);
v_msgData_1964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1964_, 0, v___x_1961_);
lean_ctor_set(v_msgData_1964_, 1, v___x_1963_);
v___x_1965_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(v_msgData_1964_, v_macroStack_1943_);
v___x_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
return v___x_1966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_1970_, lean_object* v_macroStack_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_1970_, v_macroStack_1971_, v___y_1972_);
lean_dec_ref(v___y_1972_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object* v_msg_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_){
_start:
{
lean_object* v_ref_1983_; lean_object* v_macroStack_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v_a_1987_; lean_object* v___x_1988_; lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1997_; 
v_ref_1983_ = lean_ctor_get(v___y_1980_, 2);
v_macroStack_1984_ = lean_ctor_get(v___y_1976_, 1);
v___x_1985_ = l_Lean_Elab_getBetterRef(v_ref_1983_, v_macroStack_1984_);
v___x_1986_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msg_1975_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref(v___x_1986_);
lean_inc(v_macroStack_1984_);
v___x_1988_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_a_1987_, v_macroStack_1984_, v___y_1980_);
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1991_ = v___x_1988_;
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1988_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; lean_object* v___x_1995_; 
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1985_);
lean_ctor_set(v___x_1993_, 1, v_a_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set_tag(v___x_1991_, 1);
lean_ctor_set(v___x_1991_, 0, v___x_1993_);
v___x_1995_ = v___x_1991_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object* v_msg_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object* v_env_2007_, lean_object* v_declName_2008_, lean_object* v___f_2009_, lean_object* v_addInfo_2010_, lean_object* v_____r_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v___x_2019_; uint8_t v___x_2020_; uint8_t v___x_2021_; 
lean_inc(v_declName_2008_);
v___x_2019_ = l_Lean_mkPrivateName(v_env_2007_, v_declName_2008_);
v___x_2020_ = 1;
lean_inc(v___x_2019_);
v___x_2021_ = l_Lean_Environment_contains(v_env_2007_, v___x_2019_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec(v___x_2019_);
lean_dec_ref(v_addInfo_2010_);
lean_dec(v_declName_2008_);
v___x_2022_ = lean_box(0);
lean_inc(v___y_2017_);
lean_inc_ref(v___y_2016_);
lean_inc(v___y_2015_);
lean_inc_ref(v___y_2014_);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2012_);
v___x_2023_ = lean_apply_8(v___f_2009_, v___x_2022_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, lean_box(0));
return v___x_2023_;
}
else
{
lean_object* v___x_2024_; 
lean_dec_ref(v___f_2009_);
lean_inc(v___y_2017_);
lean_inc_ref(v___y_2016_);
lean_inc(v___y_2015_);
lean_inc_ref(v___y_2014_);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2012_);
v___x_2024_ = lean_apply_8(v_addInfo_2010_, v___x_2019_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, lean_box(0));
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_dec_ref_known(v___x_2024_, 1);
v___x_2025_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_2026_ = l_Lean_MessageData_ofConstName(v_declName_2008_, v___x_2020_);
v___x_2027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2027_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
v___x_2030_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2029_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2030_;
}
else
{
lean_dec(v_declName_2008_);
return v___x_2024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object* v_env_2031_, lean_object* v_declName_2032_, lean_object* v___f_2033_, lean_object* v_addInfo_2034_, lean_object* v_____r_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(v_env_2031_, v_declName_2032_, v___f_2033_, v_addInfo_2034_, v_____r_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object* v___f_2044_, lean_object* v_declName_2045_, uint8_t v___x_2046_, lean_object* v_env_2047_, lean_object* v_____do__lift_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
uint8_t v___y_2057_; lean_object* v___x_2066_; uint8_t v___x_2067_; 
lean_inc(v_declName_2045_);
v___x_2066_ = l_Lean_privateToUserName(v_declName_2045_);
lean_inc_ref(v_env_2047_);
v___x_2067_ = lean_is_reserved_name(v_env_2047_, v___x_2066_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2068_; uint8_t v___x_2069_; 
lean_inc(v_declName_2045_);
v___x_2068_ = l_Lean_mkPrivateName(v_____do__lift_2048_, v_declName_2045_);
v___x_2069_ = lean_is_reserved_name(v_env_2047_, v___x_2068_);
v___y_2057_ = v___x_2069_;
goto v___jp_2056_;
}
else
{
lean_dec_ref(v_env_2047_);
v___y_2057_ = v___x_2067_;
goto v___jp_2056_;
}
v___jp_2056_:
{
if (v___y_2057_ == 0)
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
lean_dec(v_declName_2045_);
v___x_2058_ = lean_box(0);
lean_inc(v___y_2054_);
lean_inc_ref(v___y_2053_);
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
v___x_2059_ = lean_apply_8(v___f_2044_, v___x_2058_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, lean_box(0));
return v___x_2059_;
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
lean_dec_ref(v___f_2044_);
v___x_2060_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2061_ = l_Lean_MessageData_ofConstName(v_declName_2045_, v___x_2046_);
v___x_2062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_2064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2064_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
return v___x_2065_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object* v___f_2070_, lean_object* v_declName_2071_, lean_object* v___x_2072_, lean_object* v_env_2073_, lean_object* v_____do__lift_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
uint8_t v___x_16298__boxed_2082_; lean_object* v_res_2083_; 
v___x_16298__boxed_2082_ = lean_unbox(v___x_2072_);
v_res_2083_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(v___f_2070_, v_declName_2071_, v___x_16298__boxed_2082_, v_env_2073_, v_____do__lift_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec_ref(v_____do__lift_2074_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object* v_t_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v___x_2087_; lean_object* v_infoState_2088_; uint8_t v_enabled_2089_; 
v___x_2087_ = lean_st_ref_get(v___y_2085_);
v_infoState_2088_ = lean_ctor_get(v___x_2087_, 7);
lean_inc_ref(v_infoState_2088_);
lean_dec(v___x_2087_);
v_enabled_2089_ = lean_ctor_get_uint8(v_infoState_2088_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2088_);
if (v_enabled_2089_ == 0)
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
lean_dec_ref(v_t_2084_);
v___x_2090_ = lean_box(0);
v___x_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
return v___x_2091_;
}
else
{
lean_object* v___x_2092_; lean_object* v_infoState_2093_; lean_object* v_env_2094_; lean_object* v_nextMacroScope_2095_; lean_object* v_ngen_2096_; lean_object* v_auxDeclNGen_2097_; lean_object* v_traceState_2098_; lean_object* v_cache_2099_; lean_object* v_messages_2100_; lean_object* v_snapshotTasks_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2123_; 
v___x_2092_ = lean_st_ref_take(v___y_2085_);
v_infoState_2093_ = lean_ctor_get(v___x_2092_, 7);
v_env_2094_ = lean_ctor_get(v___x_2092_, 0);
v_nextMacroScope_2095_ = lean_ctor_get(v___x_2092_, 1);
v_ngen_2096_ = lean_ctor_get(v___x_2092_, 2);
v_auxDeclNGen_2097_ = lean_ctor_get(v___x_2092_, 3);
v_traceState_2098_ = lean_ctor_get(v___x_2092_, 4);
v_cache_2099_ = lean_ctor_get(v___x_2092_, 5);
v_messages_2100_ = lean_ctor_get(v___x_2092_, 6);
v_snapshotTasks_2101_ = lean_ctor_get(v___x_2092_, 8);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2103_ = v___x_2092_;
v_isShared_2104_ = v_isSharedCheck_2123_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_snapshotTasks_2101_);
lean_inc(v_infoState_2093_);
lean_inc(v_messages_2100_);
lean_inc(v_cache_2099_);
lean_inc(v_traceState_2098_);
lean_inc(v_auxDeclNGen_2097_);
lean_inc(v_ngen_2096_);
lean_inc(v_nextMacroScope_2095_);
lean_inc(v_env_2094_);
lean_dec(v___x_2092_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2123_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
uint8_t v_enabled_2105_; lean_object* v_assignment_2106_; lean_object* v_lazyAssignment_2107_; lean_object* v_trees_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2122_; 
v_enabled_2105_ = lean_ctor_get_uint8(v_infoState_2093_, sizeof(void*)*3);
v_assignment_2106_ = lean_ctor_get(v_infoState_2093_, 0);
v_lazyAssignment_2107_ = lean_ctor_get(v_infoState_2093_, 1);
v_trees_2108_ = lean_ctor_get(v_infoState_2093_, 2);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_infoState_2093_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2110_ = v_infoState_2093_;
v_isShared_2111_ = v_isSharedCheck_2122_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_trees_2108_);
lean_inc(v_lazyAssignment_2107_);
lean_inc(v_assignment_2106_);
lean_dec(v_infoState_2093_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2122_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2112_ = lean_box(0);
v___x_2113_ = l_Lean_PersistentArray_push___redArg(v_trees_2108_, v_t_2084_);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 2, v___x_2113_);
v___x_2115_ = v___x_2110_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_assignment_2106_);
lean_ctor_set(v_reuseFailAlloc_2121_, 1, v_lazyAssignment_2107_);
lean_ctor_set(v_reuseFailAlloc_2121_, 2, v___x_2113_);
lean_ctor_set_uint8(v_reuseFailAlloc_2121_, sizeof(void*)*3, v_enabled_2105_);
v___x_2115_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2117_; 
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 7, v___x_2115_);
v___x_2117_ = v___x_2103_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_env_2094_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_nextMacroScope_2095_);
lean_ctor_set(v_reuseFailAlloc_2120_, 2, v_ngen_2096_);
lean_ctor_set(v_reuseFailAlloc_2120_, 3, v_auxDeclNGen_2097_);
lean_ctor_set(v_reuseFailAlloc_2120_, 4, v_traceState_2098_);
lean_ctor_set(v_reuseFailAlloc_2120_, 5, v_cache_2099_);
lean_ctor_set(v_reuseFailAlloc_2120_, 6, v_messages_2100_);
lean_ctor_set(v_reuseFailAlloc_2120_, 7, v___x_2115_);
lean_ctor_set(v_reuseFailAlloc_2120_, 8, v_snapshotTasks_2101_);
v___x_2117_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = lean_st_ref_put(v___y_2085_, v___x_2117_);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2112_);
return v___x_2119_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object* v_t_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_2124_, v___y_2125_);
lean_dec(v___y_2125_);
return v_res_2127_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0(void){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2128_ = lean_unsigned_to_nat(32u);
v___x_2129_ = lean_mk_empty_array_with_capacity(v___x_2128_);
v___x_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1(void){
_start:
{
size_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2131_ = ((size_t)5ULL);
v___x_2132_ = lean_unsigned_to_nat(0u);
v___x_2133_ = lean_unsigned_to_nat(32u);
v___x_2134_ = lean_mk_empty_array_with_capacity(v___x_2133_);
v___x_2135_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0);
v___x_2136_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
lean_ctor_set(v___x_2136_, 1, v___x_2134_);
lean_ctor_set(v___x_2136_, 2, v___x_2132_);
lean_ctor_set(v___x_2136_, 3, v___x_2132_);
lean_ctor_set_usize(v___x_2136_, 4, v___x_2131_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object* v_t_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; lean_object* v_infoState_2146_; uint8_t v_enabled_2147_; 
v___x_2145_ = lean_st_ref_get(v___y_2143_);
v_infoState_2146_ = lean_ctor_get(v___x_2145_, 7);
lean_inc_ref(v_infoState_2146_);
lean_dec(v___x_2145_);
v_enabled_2147_ = lean_ctor_get_uint8(v_infoState_2146_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2146_);
if (v_enabled_2147_ == 0)
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
lean_dec_ref(v_t_2137_);
v___x_2148_ = lean_box(0);
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2150_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1);
v___x_2151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2151_, 0, v_t_2137_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v___x_2151_, v___y_2143_);
return v___x_2152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object* v_t_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v_t_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object* v_a_2162_, lean_object* v_a_2163_){
_start:
{
if (lean_obj_tag(v_a_2162_) == 0)
{
lean_object* v___x_2164_; 
v___x_2164_ = l_List_reverse___redArg(v_a_2163_);
return v___x_2164_;
}
else
{
lean_object* v_head_2165_; lean_object* v_tail_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2175_; 
v_head_2165_ = lean_ctor_get(v_a_2162_, 0);
v_tail_2166_ = lean_ctor_get(v_a_2162_, 1);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_a_2162_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2168_ = v_a_2162_;
v_isShared_2169_ = v_isSharedCheck_2175_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_tail_2166_);
lean_inc(v_head_2165_);
lean_dec(v_a_2162_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2175_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2170_ = l_Lean_mkLevelParam(v_head_2165_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 1, v_a_2163_);
lean_ctor_set(v___x_2168_, 0, v___x_2170_);
v___x_2172_ = v___x_2168_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2170_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_a_2163_);
v___x_2172_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
v_a_2162_ = v_tail_2166_;
v_a_2163_ = v___x_2172_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0(void){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1);
v___x_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
return v___x_2177_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1(void){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0);
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v___x_2179_);
lean_ctor_set(v___x_2180_, 2, v___x_2179_);
lean_ctor_set(v___x_2180_, 3, v___x_2179_);
lean_ctor_set(v___x_2180_, 4, v___x_2178_);
lean_ctor_set(v___x_2180_, 5, v___x_2178_);
lean_ctor_set(v___x_2180_, 6, v___x_2178_);
lean_ctor_set(v___x_2180_, 7, v___x_2178_);
lean_ctor_set(v___x_2180_, 8, v___x_2178_);
lean_ctor_set(v___x_2180_, 9, v___x_2178_);
lean_ctor_set(v___x_2180_, 10, v___x_2178_);
return v___x_2180_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2181_ = lean_box(1);
v___x_2182_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_2183_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0);
v___x_2184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v___x_2182_);
lean_ctor_set(v___x_2184_, 2, v___x_2181_);
return v___x_2184_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3));
v___x_2187_ = l_Lean_stringToMessageData(v___x_2186_);
return v___x_2187_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6(void){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5));
v___x_2190_ = l_Lean_stringToMessageData(v___x_2189_);
return v___x_2190_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8(void){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7));
v___x_2193_ = l_Lean_stringToMessageData(v___x_2192_);
return v___x_2193_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2195_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9));
v___x_2196_ = l_Lean_stringToMessageData(v___x_2195_);
return v___x_2196_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11));
v___x_2199_ = l_Lean_stringToMessageData(v___x_2198_);
return v___x_2199_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13));
v___x_2202_ = l_Lean_stringToMessageData(v___x_2201_);
return v___x_2202_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16(void){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15));
v___x_2205_ = l_Lean_stringToMessageData(v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(lean_object* v_msg_2206_, lean_object* v_declHint_2207_, lean_object* v___y_2208_){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v_env_2212_; uint8_t v___x_2213_; 
v___x_2210_ = l_Lean_instInhabitedName;
v___x_2211_ = lean_st_ref_get(v___y_2208_);
v_env_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc_ref(v_env_2212_);
lean_dec(v___x_2211_);
v___x_2213_ = l_Lean_Name_isAnonymous(v_declHint_2207_);
if (v___x_2213_ == 0)
{
uint8_t v_isExporting_2214_; 
v_isExporting_2214_ = lean_ctor_get_uint8(v_env_2212_, sizeof(void*)*8);
if (v_isExporting_2214_ == 0)
{
lean_object* v___x_2215_; 
lean_dec_ref(v_env_2212_);
lean_dec(v_declHint_2207_);
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_msg_2206_);
return v___x_2215_;
}
else
{
lean_object* v___x_2216_; uint8_t v___x_2217_; 
lean_inc_ref(v_env_2212_);
v___x_2216_ = l_Lean_Environment_setExporting(v_env_2212_, v___x_2213_);
lean_inc(v_declHint_2207_);
lean_inc_ref(v___x_2216_);
v___x_2217_ = l_Lean_Environment_contains(v___x_2216_, v_declHint_2207_, v_isExporting_2214_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; 
lean_dec_ref(v___x_2216_);
lean_dec_ref(v_env_2212_);
lean_dec(v_declHint_2207_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_msg_2206_);
return v___x_2218_;
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v_c_2224_; lean_object* v___x_2225_; 
v___x_2219_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1);
v___x_2220_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2);
v___x_2221_ = l_Lean_Options_empty;
v___x_2222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2216_);
lean_ctor_set(v___x_2222_, 1, v___x_2219_);
lean_ctor_set(v___x_2222_, 2, v___x_2220_);
lean_ctor_set(v___x_2222_, 3, v___x_2221_);
lean_inc(v_declHint_2207_);
v___x_2223_ = l_Lean_MessageData_ofConstName(v_declHint_2207_, v___x_2213_);
v_c_2224_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2224_, 0, v___x_2222_);
lean_ctor_set(v_c_2224_, 1, v___x_2223_);
v___x_2225_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2212_, v_declHint_2207_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
lean_dec_ref(v_env_2212_);
lean_dec(v_declHint_2207_);
v___x_2226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4);
v___x_2227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set(v___x_2227_, 1, v_c_2224_);
v___x_2228_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6);
v___x_2229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2227_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = l_Lean_MessageData_note(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2231_, 0, v_msg_2206_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2231_);
return v___x_2232_;
}
else
{
lean_object* v_val_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2267_; 
v_val_2233_ = lean_ctor_get(v___x_2225_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2235_ = v___x_2225_;
v_isShared_2236_ = v_isSharedCheck_2267_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_val_2233_);
lean_dec(v___x_2225_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2267_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v_mod_2239_; uint8_t v___x_2240_; 
v___x_2237_ = l_Lean_Environment_header(v_env_2212_);
lean_dec_ref(v_env_2212_);
v___x_2238_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2237_);
lean_dec_ref(v___x_2237_);
v_mod_2239_ = lean_array_get(v___x_2210_, v___x_2238_, v_val_2233_);
lean_dec(v_val_2233_);
lean_dec_ref(v___x_2238_);
v___x_2240_ = l_Lean_isPrivateName(v_declHint_2207_);
lean_dec(v_declHint_2207_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2252_; 
v___x_2241_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8);
v___x_2242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
lean_ctor_set(v___x_2242_, 1, v_c_2224_);
v___x_2243_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10);
v___x_2244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = l_Lean_MessageData_ofName(v_mod_2239_);
v___x_2246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2244_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
v___x_2247_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12);
v___x_2248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = l_Lean_MessageData_note(v___x_2248_);
v___x_2250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2250_, 0, v_msg_2206_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set_tag(v___x_2235_, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2250_);
v___x_2252_ = v___x_2235_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2250_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
else
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2254_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4);
v___x_2255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
lean_ctor_set(v___x_2255_, 1, v_c_2224_);
v___x_2256_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14);
v___x_2257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = l_Lean_MessageData_ofName(v_mod_2239_);
v___x_2259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2257_);
lean_ctor_set(v___x_2259_, 1, v___x_2258_);
v___x_2260_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16);
v___x_2261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2259_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
v___x_2262_ = l_Lean_MessageData_note(v___x_2261_);
v___x_2263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2263_, 0, v_msg_2206_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set_tag(v___x_2235_, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2263_);
v___x_2265_ = v___x_2235_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2268_; 
lean_dec_ref(v_env_2212_);
lean_dec(v_declHint_2207_);
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_msg_2206_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___boxed(lean_object* v_msg_2269_, lean_object* v_declHint_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_2269_, v_declHint_2270_, v___y_2271_);
lean_dec(v___y_2271_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(lean_object* v_msg_2274_, lean_object* v_declHint_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2283_; lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2293_; 
v___x_2283_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_2274_, v_declHint_2275_, v___y_2281_);
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2286_ = v___x_2283_;
v_isShared_2287_ = v_isSharedCheck_2293_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2293_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2291_; 
v___x_2288_ = l_Lean_unknownIdentifierMessageTag;
v___x_2289_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
lean_ctor_set(v___x_2289_, 1, v_a_2284_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2289_);
v___x_2291_ = v___x_2286_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23___boxed(lean_object* v_msg_2294_, lean_object* v_declHint_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(v_msg_2294_, v_declHint_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(lean_object* v_ref_2304_, lean_object* v_msg_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v_toCold_2313_; lean_object* v_currRecDepth_2314_; lean_object* v_ref_2315_; uint8_t v_diag_2316_; uint8_t v_suppressElabErrors_2317_; lean_object* v_ref_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v_toCold_2313_ = lean_ctor_get(v___y_2310_, 0);
v_currRecDepth_2314_ = lean_ctor_get(v___y_2310_, 1);
v_ref_2315_ = lean_ctor_get(v___y_2310_, 2);
v_diag_2316_ = lean_ctor_get_uint8(v___y_2310_, sizeof(void*)*3);
v_suppressElabErrors_2317_ = lean_ctor_get_uint8(v___y_2310_, sizeof(void*)*3 + 1);
v_ref_2318_ = l_Lean_replaceRef(v_ref_2304_, v_ref_2315_);
lean_inc(v_currRecDepth_2314_);
lean_inc_ref(v_toCold_2313_);
v___x_2319_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2319_, 0, v_toCold_2313_);
lean_ctor_set(v___x_2319_, 1, v_currRecDepth_2314_);
lean_ctor_set(v___x_2319_, 2, v_ref_2318_);
lean_ctor_set_uint8(v___x_2319_, sizeof(void*)*3, v_diag_2316_);
lean_ctor_set_uint8(v___x_2319_, sizeof(void*)*3 + 1, v_suppressElabErrors_2317_);
v___x_2320_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___x_2319_, v___y_2311_);
lean_dec_ref_known(v___x_2319_, 3);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg___boxed(lean_object* v_ref_2321_, lean_object* v_msg_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_2321_, v_msg_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v_ref_2321_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(lean_object* v_ref_2331_, lean_object* v_msg_2332_, lean_object* v_declHint_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v___x_2341_; lean_object* v_a_2342_; lean_object* v___x_2343_; 
v___x_2341_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(v_msg_2332_, v_declHint_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref(v___x_2341_);
v___x_2343_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_2331_, v_a_2342_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg___boxed(lean_object* v_ref_2344_, lean_object* v_msg_2345_, lean_object* v_declHint_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_2344_, v_msg_2345_, v_declHint_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v_ref_2344_);
return v_res_2354_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0));
v___x_2357_ = l_Lean_stringToMessageData(v___x_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(lean_object* v_ref_2358_, lean_object* v_constName_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v___x_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2367_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1);
v___x_2368_ = 0;
lean_inc(v_constName_2359_);
v___x_2369_ = l_Lean_MessageData_ofConstName(v_constName_2359_, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2367_);
lean_ctor_set(v___x_2370_, 1, v___x_2369_);
v___x_2371_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2370_);
lean_ctor_set(v___x_2372_, 1, v___x_2371_);
v___x_2373_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_2358_, v___x_2372_, v_constName_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___boxed(lean_object* v_ref_2374_, lean_object* v_constName_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_2374_, v_constName_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
lean_dec(v_ref_2374_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(lean_object* v_constName_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_ref_2392_; lean_object* v___x_2393_; 
v_ref_2392_ = lean_ctor_get(v___y_2389_, 2);
v___x_2393_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_2392_, v_constName_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg___boxed(lean_object* v_constName_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object* v_constName_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___x_2411_; lean_object* v_env_2412_; uint8_t v___x_2413_; lean_object* v___x_2414_; 
v___x_2411_ = lean_st_ref_get(v___y_2409_);
v_env_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc_ref(v_env_2412_);
lean_dec(v___x_2411_);
v___x_2413_ = 0;
lean_inc(v_constName_2403_);
v___x_2414_ = l_Lean_Environment_findConstVal_x3f(v_env_2412_, v_constName_2403_, v___x_2413_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
return v___x_2415_;
}
else
{
lean_object* v_val_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
lean_dec(v_constName_2403_);
v_val_2416_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2418_ = v___x_2414_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_val_2416_);
lean_dec(v___x_2414_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
lean_ctor_set_tag(v___x_2418_, 0);
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_val_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object* v_constName_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object* v_constName_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; 
lean_inc(v_constName_2433_);
v___x_2441_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2453_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2444_ = v___x_2441_;
v_isShared_2445_ = v_isSharedCheck_2453_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2441_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2453_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v_levelParams_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2451_; 
v_levelParams_2446_ = lean_ctor_get(v_a_2442_, 1);
lean_inc(v_levelParams_2446_);
lean_dec(v_a_2442_);
v___x_2447_ = lean_box(0);
v___x_2448_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(v_levelParams_2446_, v___x_2447_);
v___x_2449_ = l_Lean_mkConst(v_constName_2433_, v___x_2448_);
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 0, v___x_2449_);
v___x_2451_ = v___x_2444_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec(v_constName_2433_);
v_a_2454_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___x_2441_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2441_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object* v_constName_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_constName_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t v___x_2471_, lean_object* v_declName_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_ref_2480_; lean_object* v___x_2481_; 
v_ref_2480_ = lean_ctor_get(v___y_2477_, 2);
v___x_2481_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_declName_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v_a_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v_a_2482_ = lean_ctor_get(v___x_2481_, 0);
lean_inc(v_a_2482_);
lean_dec_ref_known(v___x_2481_, 1);
v___x_2483_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
lean_inc(v_ref_2480_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
lean_ctor_set(v___x_2484_, 1, v_ref_2480_);
v___x_2485_ = lean_unsigned_to_nat(32u);
v___x_2486_ = lean_mk_empty_array_with_capacity(v___x_2485_);
lean_dec_ref(v___x_2486_);
v___x_2487_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__5);
v___x_2488_ = lean_box(0);
v___x_2489_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2489_, 0, v___x_2484_);
lean_ctor_set(v___x_2489_, 1, v___x_2487_);
lean_ctor_set(v___x_2489_, 2, v___x_2488_);
lean_ctor_set(v___x_2489_, 3, v_a_2482_);
lean_ctor_set_uint8(v___x_2489_, sizeof(void*)*4, v___x_2471_);
lean_ctor_set_uint8(v___x_2489_, sizeof(void*)*4 + 1, v___x_2471_);
v___x_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
v___x_2491_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v___x_2490_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_);
return v___x_2491_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
v_a_2492_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2481_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2481_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v___x_2500_, lean_object* v_declName_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
uint8_t v___x_17029__boxed_2509_; lean_object* v_res_2510_; 
v___x_17029__boxed_2509_ = lean_unbox(v___x_2500_);
v_res_2510_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(v___x_17029__boxed_2509_, v_declName_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object* v___f_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; lean_object* v_env_2520_; lean_object* v___x_2521_; 
v___x_2519_ = lean_st_ref_get(v___y_2517_);
v_env_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc_ref(v_env_2520_);
lean_dec(v___x_2519_);
v___x_2521_ = lean_apply_8(v___f_2511_, v_env_2520_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, lean_box(0));
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object* v___f_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(v___f_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
return v_res_2530_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1);
v___x_2532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
return v___x_2532_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2536_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
lean_ctor_set(v___x_2536_, 2, v___x_2535_);
lean_ctor_set(v___x_2536_, 3, v___x_2535_);
lean_ctor_set(v___x_2536_, 4, v___x_2535_);
lean_ctor_set(v___x_2536_, 5, v___x_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object* v_env_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___x_2541_; lean_object* v_nextMacroScope_2542_; lean_object* v_ngen_2543_; lean_object* v_auxDeclNGen_2544_; lean_object* v_traceState_2545_; lean_object* v_messages_2546_; lean_object* v_infoState_2547_; lean_object* v_snapshotTasks_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2574_; 
v___x_2541_ = lean_st_ref_take(v___y_2539_);
v_nextMacroScope_2542_ = lean_ctor_get(v___x_2541_, 1);
v_ngen_2543_ = lean_ctor_get(v___x_2541_, 2);
v_auxDeclNGen_2544_ = lean_ctor_get(v___x_2541_, 3);
v_traceState_2545_ = lean_ctor_get(v___x_2541_, 4);
v_messages_2546_ = lean_ctor_get(v___x_2541_, 6);
v_infoState_2547_ = lean_ctor_get(v___x_2541_, 7);
v_snapshotTasks_2548_ = lean_ctor_get(v___x_2541_, 8);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2574_ == 0)
{
lean_object* v_unused_2575_; lean_object* v_unused_2576_; 
v_unused_2575_ = lean_ctor_get(v___x_2541_, 5);
lean_dec(v_unused_2575_);
v_unused_2576_ = lean_ctor_get(v___x_2541_, 0);
lean_dec(v_unused_2576_);
v___x_2550_ = v___x_2541_;
v_isShared_2551_ = v_isSharedCheck_2574_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_snapshotTasks_2548_);
lean_inc(v_infoState_2547_);
lean_inc(v_messages_2546_);
lean_inc(v_traceState_2545_);
lean_inc(v_auxDeclNGen_2544_);
lean_inc(v_ngen_2543_);
lean_inc(v_nextMacroScope_2542_);
lean_dec(v___x_2541_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2574_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2552_; lean_object* v___x_2554_; 
v___x_2552_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 5, v___x_2552_);
lean_ctor_set(v___x_2550_, 0, v_env_2537_);
v___x_2554_ = v___x_2550_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_env_2537_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_nextMacroScope_2542_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_ngen_2543_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v_auxDeclNGen_2544_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_traceState_2545_);
lean_ctor_set(v_reuseFailAlloc_2573_, 5, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2573_, 6, v_messages_2546_);
lean_ctor_set(v_reuseFailAlloc_2573_, 7, v_infoState_2547_);
lean_ctor_set(v_reuseFailAlloc_2573_, 8, v_snapshotTasks_2548_);
v___x_2554_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v_mctx_2557_; lean_object* v_zetaDeltaFVarIds_2558_; lean_object* v_postponed_2559_; lean_object* v_diag_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2571_; 
v___x_2555_ = lean_st_ref_put(v___y_2539_, v___x_2554_);
v___x_2556_ = lean_st_ref_take(v___y_2538_);
v_mctx_2557_ = lean_ctor_get(v___x_2556_, 0);
v_zetaDeltaFVarIds_2558_ = lean_ctor_get(v___x_2556_, 2);
v_postponed_2559_ = lean_ctor_get(v___x_2556_, 3);
v_diag_2560_ = lean_ctor_get(v___x_2556_, 4);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2571_ == 0)
{
lean_object* v_unused_2572_; 
v_unused_2572_ = lean_ctor_get(v___x_2556_, 1);
lean_dec(v_unused_2572_);
v___x_2562_ = v___x_2556_;
v_isShared_2563_ = v_isSharedCheck_2571_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_diag_2560_);
lean_inc(v_postponed_2559_);
lean_inc(v_zetaDeltaFVarIds_2558_);
lean_inc(v_mctx_2557_);
lean_dec(v___x_2556_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2571_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2567_; 
v___x_2564_ = lean_box(0);
v___x_2565_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 1, v___x_2565_);
v___x_2567_ = v___x_2562_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_mctx_2557_);
lean_ctor_set(v_reuseFailAlloc_2570_, 1, v___x_2565_);
lean_ctor_set(v_reuseFailAlloc_2570_, 2, v_zetaDeltaFVarIds_2558_);
lean_ctor_set(v_reuseFailAlloc_2570_, 3, v_postponed_2559_);
lean_ctor_set(v_reuseFailAlloc_2570_, 4, v_diag_2560_);
v___x_2567_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = lean_st_ref_put(v___y_2538_, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2564_);
return v___x_2569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object* v_env_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2577_, v___y_2578_, v___y_2579_);
lean_dec(v___y_2579_);
lean_dec(v___y_2578_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object* v_env_2582_, lean_object* v_x_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v___x_2591_; lean_object* v_env_2592_; lean_object* v_a_2594_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2591_ = lean_st_ref_get(v___y_2589_);
v_env_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc_ref(v_env_2592_);
lean_dec(v___x_2591_);
v___x_2604_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2582_, v___y_2587_, v___y_2589_);
lean_dec_ref(v___x_2604_);
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v___y_2585_);
lean_inc_ref(v___y_2584_);
v___x_2605_ = lean_apply_7(v_x_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, lean_box(0));
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2605_, 1);
v___x_2607_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2592_, v___y_2587_, v___y_2589_);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2614_ == 0)
{
lean_object* v_unused_2615_; 
v_unused_2615_ = lean_ctor_get(v___x_2607_, 0);
lean_dec(v_unused_2615_);
v___x_2609_ = v___x_2607_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_dec(v___x_2607_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v_a_2606_);
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2606_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
else
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2605_, 1);
v_a_2594_ = v_a_2616_;
goto v___jp_2593_;
}
v___jp_2593_:
{
lean_object* v___x_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
v___x_2595_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2592_, v___y_2587_, v___y_2589_);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2602_ == 0)
{
lean_object* v_unused_2603_; 
v_unused_2603_ = lean_ctor_get(v___x_2595_, 0);
lean_dec(v_unused_2603_);
v___x_2597_ = v___x_2595_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_dec(v___x_2595_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
lean_ctor_set_tag(v___x_2597_, 1);
lean_ctor_set(v___x_2597_, 0, v_a_2594_);
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2594_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object* v_env_2617_, lean_object* v_x_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2617_, v_x_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object* v_declName_2627_, lean_object* v_env_2628_, lean_object* v_addInfo_2629_, lean_object* v_____r_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_privateToUserName_x3f(v_declName_2627_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
lean_dec_ref(v_addInfo_2629_);
lean_dec_ref(v_env_2628_);
v___x_2639_ = lean_box(0);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
return v___x_2640_;
}
else
{
lean_object* v_val_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2658_; 
v_val_2641_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2643_ = v___x_2638_;
v_isShared_2644_ = v_isSharedCheck_2658_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_val_2641_);
lean_dec(v___x_2638_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2658_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
uint8_t v___x_2645_; uint8_t v___x_2646_; 
v___x_2645_ = 1;
lean_inc(v_val_2641_);
v___x_2646_ = l_Lean_Environment_contains(v_env_2628_, v_val_2641_, v___x_2645_);
if (v___x_2646_ == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2649_; 
lean_dec(v_val_2641_);
lean_dec_ref(v_addInfo_2629_);
v___x_2647_ = lean_box(0);
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2647_);
v___x_2649_ = v___x_2643_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
else
{
lean_object* v___x_2651_; 
lean_del_object(v___x_2643_);
lean_inc(v___y_2636_);
lean_inc_ref(v___y_2635_);
lean_inc(v___y_2634_);
lean_inc_ref(v___y_2633_);
lean_inc(v___y_2632_);
lean_inc_ref(v___y_2631_);
lean_inc(v_val_2641_);
v___x_2651_ = lean_apply_8(v_addInfo_2629_, v_val_2641_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, lean_box(0));
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
lean_dec_ref_known(v___x_2651_, 1);
v___x_2652_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_2653_ = l_Lean_MessageData_ofConstName(v_val_2641_, v___x_2645_);
v___x_2654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2656_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
return v___x_2657_;
}
else
{
lean_dec(v_val_2641_);
return v___x_2651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object* v_declName_2659_, lean_object* v_env_2660_, lean_object* v_addInfo_2661_, lean_object* v_____r_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(v_declName_2659_, v_env_2660_, v_addInfo_2661_, v_____r_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object* v_addInfo_2671_, lean_object* v_declName_2672_, uint8_t v___x_2673_, lean_object* v___f_2674_, uint8_t v___x_2675_, lean_object* v_env_2676_, lean_object* v___f_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_){
_start:
{
lean_object* v___x_2685_; 
lean_inc(v___y_2683_);
lean_inc_ref(v___y_2682_);
lean_inc(v___y_2681_);
lean_inc_ref(v___y_2680_);
lean_inc(v___y_2679_);
lean_inc_ref(v___y_2678_);
lean_inc(v_declName_2672_);
v___x_2685_ = lean_apply_8(v_addInfo_2671_, v_declName_2672_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, lean_box(0));
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v___x_2686_; 
lean_dec_ref_known(v___x_2685_, 1);
lean_inc(v_declName_2672_);
v___x_2686_ = l_Lean_privateToUserName_x3f(v_declName_2672_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2687_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2688_ = l_Lean_MessageData_ofConstName(v_declName_2672_, v___x_2673_);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2691_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
return v___x_2692_;
}
else
{
lean_object* v_val_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec(v_declName_2672_);
v_val_2693_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_val_2693_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2694_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_2695_ = l_Lean_MessageData_ofConstName(v_val_2693_, v___x_2673_);
v___x_2696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2694_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
v___x_2697_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2696_);
lean_ctor_set(v___x_2698_, 1, v___x_2697_);
v___x_2699_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2698_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
return v___x_2699_;
}
}
else
{
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v_declName_2672_);
return v___x_2685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object* v_addInfo_2700_, lean_object* v_declName_2701_, lean_object* v___x_2702_, lean_object* v___f_2703_, lean_object* v___x_2704_, lean_object* v_env_2705_, lean_object* v___f_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
uint8_t v___x_17382__boxed_2714_; uint8_t v___x_17384__boxed_2715_; lean_object* v_res_2716_; 
v___x_17382__boxed_2714_ = lean_unbox(v___x_2702_);
v___x_17384__boxed_2715_ = lean_unbox(v___x_2704_);
v_res_2716_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(v_addInfo_2700_, v_declName_2701_, v___x_17382__boxed_2714_, v___f_2703_, v___x_17384__boxed_2715_, v_env_2705_, v___f_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
lean_dec_ref(v___f_2706_);
lean_dec_ref(v_env_2705_);
lean_dec_ref(v___f_2703_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object* v_declName_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v___x_2728_; lean_object* v_env_2729_; uint8_t v___x_2730_; lean_object* v_addInfo_2731_; lean_object* v_env_2732_; lean_object* v___f_2733_; lean_object* v___f_2734_; lean_object* v___x_2735_; lean_object* v___f_2736_; uint8_t v___x_2737_; uint8_t v___x_2738_; 
v___x_2728_ = lean_st_ref_get(v___y_2726_);
v_env_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc_ref(v_env_2729_);
lean_dec(v___x_2728_);
v___x_2730_ = 0;
v_addInfo_2731_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0));
v_env_2732_ = l_Lean_Environment_setExporting(v_env_2729_, v___x_2730_);
lean_inc_ref_n(v_env_2732_, 4);
lean_inc_n(v_declName_2720_, 4);
v___f_2733_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed), 11, 3);
lean_closure_set(v___f_2733_, 0, v_declName_2720_);
lean_closure_set(v___f_2733_, 1, v_env_2732_);
lean_closure_set(v___f_2733_, 2, v_addInfo_2731_);
v___f_2734_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed), 12, 4);
lean_closure_set(v___f_2734_, 0, v_env_2732_);
lean_closure_set(v___f_2734_, 1, v_declName_2720_);
lean_closure_set(v___f_2734_, 2, v___f_2733_);
lean_closure_set(v___f_2734_, 3, v_addInfo_2731_);
v___x_2735_ = lean_box(v___x_2730_);
lean_inc_ref(v___f_2734_);
v___f_2736_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed), 12, 4);
lean_closure_set(v___f_2736_, 0, v___f_2734_);
lean_closure_set(v___f_2736_, 1, v_declName_2720_);
lean_closure_set(v___f_2736_, 2, v___x_2735_);
lean_closure_set(v___f_2736_, 3, v_env_2732_);
v___x_2737_ = 1;
v___x_2738_ = l_Lean_Environment_contains(v_env_2732_, v_declName_2720_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___f_2739_; lean_object* v___x_2740_; 
lean_dec_ref(v___f_2734_);
lean_dec(v_declName_2720_);
v___f_2739_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed), 8, 1);
lean_closure_set(v___f_2739_, 0, v___f_2736_);
v___x_2740_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2732_, v___f_2739_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
return v___x_2740_;
}
else
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___f_2743_; lean_object* v___x_2744_; 
v___x_2741_ = lean_box(v___x_2737_);
v___x_2742_ = lean_box(v___x_2730_);
lean_inc_ref(v_env_2732_);
v___f_2743_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed), 14, 7);
lean_closure_set(v___f_2743_, 0, v_addInfo_2731_);
lean_closure_set(v___f_2743_, 1, v_declName_2720_);
lean_closure_set(v___f_2743_, 2, v___x_2741_);
lean_closure_set(v___f_2743_, 3, v___f_2734_);
lean_closure_set(v___f_2743_, 4, v___x_2742_);
lean_closure_set(v___f_2743_, 5, v_env_2732_);
lean_closure_set(v___f_2743_, 6, v___f_2736_);
v___x_2744_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2732_, v___f_2743_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
return v___x_2744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object* v_declName_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object* v_modifiers_2754_, lean_object* v_declName_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_declName_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___x_2827_; lean_object* v_env_2828_; uint8_t v_visibility_2829_; uint8_t v___x_2830_; 
v___x_2827_ = lean_st_ref_get(v___y_2761_);
v_env_2828_ = lean_ctor_get(v___x_2827_, 0);
lean_inc_ref(v_env_2828_);
lean_dec(v___x_2827_);
v_visibility_2829_ = lean_ctor_get_uint8(v_modifiers_2754_, sizeof(void*)*3);
v___x_2830_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_2828_, v_visibility_2829_);
lean_dec_ref(v_env_2828_);
if (v___x_2830_ == 0)
{
lean_object* v___x_2831_; lean_object* v_env_2832_; lean_object* v_declName_2833_; 
v___x_2831_ = lean_st_ref_get(v___y_2761_);
v_env_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc_ref(v_env_2832_);
lean_dec(v___x_2831_);
v_declName_2833_ = l_Lean_mkPrivateName(v_env_2832_, v_declName_2755_);
lean_dec_ref(v_env_2832_);
v_declName_2764_ = v_declName_2833_;
v___y_2765_ = v___y_2756_;
v___y_2766_ = v___y_2757_;
v___y_2767_ = v___y_2758_;
v___y_2768_ = v___y_2759_;
v___y_2769_ = v___y_2760_;
v___y_2770_ = v___y_2761_;
goto v___jp_2763_;
}
else
{
v_declName_2764_ = v_declName_2755_;
v___y_2765_ = v___y_2756_;
v___y_2766_ = v___y_2757_;
v___y_2767_ = v___y_2758_;
v___y_2768_ = v___y_2759_;
v___y_2769_ = v___y_2760_;
v___y_2770_ = v___y_2761_;
goto v___jp_2763_;
}
v___jp_2763_:
{
lean_object* v___x_2771_; 
lean_inc(v_declName_2764_);
v___x_2771_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2817_; 
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2817_ == 0)
{
lean_object* v_unused_2818_; 
v_unused_2818_ = lean_ctor_get(v___x_2771_, 0);
lean_dec(v_unused_2818_);
v___x_2773_ = v___x_2771_;
v_isShared_2774_ = v_isSharedCheck_2817_;
goto v_resetjp_2772_;
}
else
{
lean_dec(v___x_2771_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2817_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
uint8_t v_isProtected_2775_; 
v_isProtected_2775_ = lean_ctor_get_uint8(v_modifiers_2754_, sizeof(void*)*3 + 1);
if (v_isProtected_2775_ == 0)
{
lean_object* v___x_2777_; 
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v_declName_2764_);
v___x_2777_ = v___x_2773_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_declName_2764_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
else
{
lean_object* v___x_2779_; lean_object* v_env_2780_; lean_object* v_nextMacroScope_2781_; lean_object* v_ngen_2782_; lean_object* v_auxDeclNGen_2783_; lean_object* v_traceState_2784_; lean_object* v_messages_2785_; lean_object* v_infoState_2786_; lean_object* v_snapshotTasks_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2815_; 
v___x_2779_ = lean_st_ref_take(v___y_2770_);
v_env_2780_ = lean_ctor_get(v___x_2779_, 0);
v_nextMacroScope_2781_ = lean_ctor_get(v___x_2779_, 1);
v_ngen_2782_ = lean_ctor_get(v___x_2779_, 2);
v_auxDeclNGen_2783_ = lean_ctor_get(v___x_2779_, 3);
v_traceState_2784_ = lean_ctor_get(v___x_2779_, 4);
v_messages_2785_ = lean_ctor_get(v___x_2779_, 6);
v_infoState_2786_ = lean_ctor_get(v___x_2779_, 7);
v_snapshotTasks_2787_ = lean_ctor_get(v___x_2779_, 8);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2815_ == 0)
{
lean_object* v_unused_2816_; 
v_unused_2816_ = lean_ctor_get(v___x_2779_, 5);
lean_dec(v_unused_2816_);
v___x_2789_ = v___x_2779_;
v_isShared_2790_ = v_isSharedCheck_2815_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_snapshotTasks_2787_);
lean_inc(v_infoState_2786_);
lean_inc(v_messages_2785_);
lean_inc(v_traceState_2784_);
lean_inc(v_auxDeclNGen_2783_);
lean_inc(v_ngen_2782_);
lean_inc(v_nextMacroScope_2781_);
lean_inc(v_env_2780_);
lean_dec(v___x_2779_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2815_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2794_; 
lean_inc(v_declName_2764_);
v___x_2791_ = l_Lean_addProtected(v_env_2780_, v_declName_2764_);
v___x_2792_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 5, v___x_2792_);
lean_ctor_set(v___x_2789_, 0, v___x_2791_);
v___x_2794_ = v___x_2789_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2791_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_nextMacroScope_2781_);
lean_ctor_set(v_reuseFailAlloc_2814_, 2, v_ngen_2782_);
lean_ctor_set(v_reuseFailAlloc_2814_, 3, v_auxDeclNGen_2783_);
lean_ctor_set(v_reuseFailAlloc_2814_, 4, v_traceState_2784_);
lean_ctor_set(v_reuseFailAlloc_2814_, 5, v___x_2792_);
lean_ctor_set(v_reuseFailAlloc_2814_, 6, v_messages_2785_);
lean_ctor_set(v_reuseFailAlloc_2814_, 7, v_infoState_2786_);
lean_ctor_set(v_reuseFailAlloc_2814_, 8, v_snapshotTasks_2787_);
v___x_2794_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v_mctx_2797_; lean_object* v_zetaDeltaFVarIds_2798_; lean_object* v_postponed_2799_; lean_object* v_diag_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2812_; 
v___x_2795_ = lean_st_ref_put(v___y_2770_, v___x_2794_);
v___x_2796_ = lean_st_ref_take(v___y_2768_);
v_mctx_2797_ = lean_ctor_get(v___x_2796_, 0);
v_zetaDeltaFVarIds_2798_ = lean_ctor_get(v___x_2796_, 2);
v_postponed_2799_ = lean_ctor_get(v___x_2796_, 3);
v_diag_2800_ = lean_ctor_get(v___x_2796_, 4);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2812_ == 0)
{
lean_object* v_unused_2813_; 
v_unused_2813_ = lean_ctor_get(v___x_2796_, 1);
lean_dec(v_unused_2813_);
v___x_2802_ = v___x_2796_;
v_isShared_2803_ = v_isSharedCheck_2812_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_diag_2800_);
lean_inc(v_postponed_2799_);
lean_inc(v_zetaDeltaFVarIds_2798_);
lean_inc(v_mctx_2797_);
lean_dec(v___x_2796_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2812_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2804_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v___x_2804_);
v___x_2806_ = v___x_2802_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_mctx_2797_);
lean_ctor_set(v_reuseFailAlloc_2811_, 1, v___x_2804_);
lean_ctor_set(v_reuseFailAlloc_2811_, 2, v_zetaDeltaFVarIds_2798_);
lean_ctor_set(v_reuseFailAlloc_2811_, 3, v_postponed_2799_);
lean_ctor_set(v_reuseFailAlloc_2811_, 4, v_diag_2800_);
v___x_2806_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_st_ref_put(v___y_2768_, v___x_2806_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v_declName_2764_);
v___x_2809_ = v___x_2773_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_declName_2764_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
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
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v_declName_2764_);
v_a_2819_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2771_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2771_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object* v_modifiers_2834_, lean_object* v_declName_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_2834_, v_declName_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_);
lean_dec(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec_ref(v_modifiers_2834_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object* v_pre_2844_, lean_object* v_declName_2845_, lean_object* v_as_2846_, size_t v_sz_2847_, size_t v_i_2848_, lean_object* v_b_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_a_2858_; uint8_t v___x_2862_; 
v___x_2862_ = lean_usize_dec_lt(v_i_2848_, v_sz_2847_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; 
lean_dec(v_declName_2845_);
lean_dec(v_pre_2844_);
v___x_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2863_, 0, v_b_2849_);
return v___x_2863_;
}
else
{
lean_object* v___x_2864_; lean_object* v_a_2865_; lean_object* v___x_2866_; uint8_t v___x_2867_; 
v___x_2864_ = lean_box(0);
v_a_2865_ = lean_array_uget_borrowed(v_as_2846_, v_i_2848_);
lean_inc(v_a_2865_);
lean_inc(v_pre_2844_);
v___x_2866_ = l_Lean_Name_append(v_pre_2844_, v_a_2865_);
v___x_2867_ = lean_name_eq(v___x_2866_, v_declName_2845_);
lean_dec(v___x_2866_);
if (v___x_2867_ == 0)
{
v_a_2858_ = v___x_2864_;
goto v___jp_2857_;
}
else
{
lean_object* v___x_2868_; uint8_t v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2868_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_2869_ = 0;
lean_inc(v_declName_2845_);
v___x_2870_ = l_Lean_MessageData_ofConstName(v_declName_2845_, v___x_2869_);
v___x_2871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2868_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_2873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2871_);
lean_ctor_set(v___x_2873_, 1, v___x_2872_);
lean_inc(v_pre_2844_);
v___x_2874_ = l_Lean_MessageData_ofName(v_pre_2844_);
v___x_2875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2873_);
lean_ctor_set(v___x_2875_, 1, v___x_2874_);
v___x_2876_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_2877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2875_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
lean_inc(v_a_2865_);
v___x_2878_ = l_Lean_MessageData_ofName(v_a_2865_);
v___x_2879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2879_);
lean_ctor_set(v___x_2881_, 1, v___x_2880_);
v___x_2882_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2881_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_dec_ref_known(v___x_2882_, 1);
v_a_2858_ = v___x_2864_;
goto v___jp_2857_;
}
else
{
lean_dec(v_declName_2845_);
lean_dec(v_pre_2844_);
return v___x_2882_;
}
}
}
v___jp_2857_:
{
size_t v___x_2859_; size_t v___x_2860_; 
v___x_2859_ = ((size_t)1ULL);
v___x_2860_ = lean_usize_add(v_i_2848_, v___x_2859_);
v_i_2848_ = v___x_2860_;
v_b_2849_ = v_a_2858_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object* v_pre_2883_, lean_object* v_declName_2884_, lean_object* v_as_2885_, lean_object* v_sz_2886_, lean_object* v_i_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_){
_start:
{
size_t v_sz_boxed_2896_; size_t v_i_boxed_2897_; lean_object* v_res_2898_; 
v_sz_boxed_2896_ = lean_unbox_usize(v_sz_2886_);
lean_dec(v_sz_2886_);
v_i_boxed_2897_ = lean_unbox_usize(v_i_2887_);
lean_dec(v_i_2887_);
v_res_2898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2883_, v_declName_2884_, v_as_2885_, v_sz_boxed_2896_, v_i_boxed_2897_, v_b_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec_ref(v_as_2885_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object* v_declName_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
if (lean_obj_tag(v_declName_2899_) == 1)
{
lean_object* v_pre_2907_; lean_object* v___x_2908_; lean_object* v_env_2909_; uint8_t v___x_2910_; 
v_pre_2907_ = lean_ctor_get(v_declName_2899_, 0);
lean_inc_n(v_pre_2907_, 2);
v___x_2908_ = lean_st_ref_get(v___y_2905_);
v_env_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc_ref(v_env_2909_);
lean_dec(v___x_2908_);
v___x_2910_ = l_Lean_isStructure(v_env_2909_, v_pre_2907_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
lean_dec(v_pre_2907_);
lean_dec_ref_known(v_declName_2899_, 2);
v___x_2911_ = lean_box(0);
v___x_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
return v___x_2912_;
}
else
{
lean_object* v___x_2913_; lean_object* v_env_2914_; lean_object* v_fieldNames_2915_; lean_object* v___x_2916_; size_t v_sz_2917_; size_t v___x_2918_; lean_object* v___x_2919_; 
v___x_2913_ = lean_st_ref_get(v___y_2905_);
v_env_2914_ = lean_ctor_get(v___x_2913_, 0);
lean_inc_ref(v_env_2914_);
lean_dec(v___x_2913_);
lean_inc(v_pre_2907_);
v_fieldNames_2915_ = l_Lean_getStructureFieldsFlattened(v_env_2914_, v_pre_2907_, v___x_2910_);
v___x_2916_ = lean_box(0);
v_sz_2917_ = lean_array_size(v_fieldNames_2915_);
v___x_2918_ = ((size_t)0ULL);
v___x_2919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2907_, v_declName_2899_, v_fieldNames_2915_, v_sz_2917_, v___x_2918_, v___x_2916_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec_ref(v_fieldNames_2915_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; 
v_unused_2927_ = lean_ctor_get(v___x_2919_, 0);
lean_dec(v_unused_2927_);
v___x_2921_ = v___x_2919_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_dec(v___x_2919_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_2916_);
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2916_);
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
return v___x_2919_;
}
}
}
else
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
lean_dec(v_declName_2899_);
v___x_2928_ = lean_box(0);
v___x_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object* v_declName_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v_declName_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object* v_currNamespace_2939_, lean_object* v_modifiers_2940_, lean_object* v_shortName_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2955_; lean_object* v_shortName_2956_; lean_object* v_currNamespace_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2960_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v_view_3017_; lean_object* v_name_3018_; lean_object* v_imported_3019_; lean_object* v_ctx_3020_; lean_object* v_scopes_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3079_; 
lean_inc(v_shortName_2941_);
v_view_3017_ = l_Lean_extractMacroScopes(v_shortName_2941_);
v_name_3018_ = lean_ctor_get(v_view_3017_, 0);
v_imported_3019_ = lean_ctor_get(v_view_3017_, 1);
v_ctx_3020_ = lean_ctor_get(v_view_3017_, 2);
v_scopes_3021_ = lean_ctor_get(v_view_3017_, 3);
v_isSharedCheck_3079_ = !lean_is_exclusive(v_view_3017_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3023_ = v_view_3017_;
v_isShared_3024_ = v_isSharedCheck_3079_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_scopes_3021_);
lean_inc(v_ctx_3020_);
lean_inc(v_imported_3019_);
lean_inc(v_name_3018_);
lean_dec(v_view_3017_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3079_;
goto v_resetjp_3022_;
}
v___jp_2949_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___y_2950_);
lean_ctor_set(v___x_2952_, 1, v___y_2951_);
v___x_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
return v___x_2953_;
}
v___jp_2954_:
{
lean_object* v___x_2964_; 
lean_inc(v___y_2955_);
v___x_2964_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v___y_2955_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_2964_) == 0)
{
lean_object* v___x_2965_; 
lean_dec_ref_known(v___x_2964_, 1);
v___x_2965_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_2940_, v___y_2955_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_2965_) == 0)
{
uint8_t v_isProtected_2966_; 
v_isProtected_2966_ = lean_ctor_get_uint8(v_modifiers_2940_, sizeof(void*)*3 + 1);
if (v_isProtected_2966_ == 0)
{
lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2975_; 
lean_dec(v_currNamespace_2957_);
v_a_2967_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2969_ = v___x_2965_;
v_isShared_2970_ = v_isSharedCheck_2975_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2965_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2975_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2971_, 0, v_a_2967_);
lean_ctor_set(v___x_2971_, 1, v_shortName_2956_);
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 0, v___x_2971_);
v___x_2973_ = v___x_2969_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
else
{
if (lean_obj_tag(v_currNamespace_2957_) == 1)
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2988_; 
v_a_2976_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2978_ = v___x_2965_;
v_isShared_2979_ = v_isSharedCheck_2988_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2965_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2988_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v_str_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2986_; 
v_str_2980_ = lean_ctor_get(v_currNamespace_2957_, 1);
lean_inc_ref(v_str_2980_);
lean_dec_ref_known(v_currNamespace_2957_, 2);
v___x_2981_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_2982_ = l_Lean_Name_str___override(v___x_2981_, v_str_2980_);
v___x_2983_ = l_Lean_Name_append(v___x_2982_, v_shortName_2956_);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v_a_2976_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v___x_2984_);
v___x_2986_ = v___x_2978_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
else
{
lean_object* v_a_2989_; uint8_t v___x_2990_; 
lean_dec(v_currNamespace_2957_);
v_a_2989_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2990_ = l_Lean_Name_isAtomic(v_shortName_2956_);
if (v___x_2990_ == 0)
{
v___y_2950_ = v_a_2989_;
v___y_2951_ = v_shortName_2956_;
goto v___jp_2949_;
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec(v_a_2989_);
lean_dec(v_shortName_2956_);
v___x_2991_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_2992_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2991_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2992_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2992_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec(v_currNamespace_2957_);
lean_dec(v_shortName_2956_);
v_a_3001_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2965_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2965_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec(v_currNamespace_2957_);
lean_dec(v_shortName_2956_);
lean_dec(v___y_2955_);
v_a_3009_ = lean_ctor_get(v___x_2964_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_2964_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_2964_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
v_resetjp_3022_:
{
lean_object* v___x_3025_; uint8_t v_isRootName_3026_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; uint8_t v___x_3068_; 
v___x_3025_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_3026_ = l_Lean_Name_isPrefixOf(v___x_3025_, v_name_3018_);
v___x_3068_ = lean_name_eq(v_name_3018_, v___x_3025_);
if (v___x_3068_ == 0)
{
v___y_3055_ = v___y_2942_;
v___y_3056_ = v___y_2943_;
v___y_3057_ = v___y_2944_;
v___y_3058_ = v___y_2945_;
v___y_3059_ = v___y_2946_;
v___y_3060_ = v___y_2947_;
goto v___jp_3054_;
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
lean_del_object(v___x_3023_);
lean_dec(v_scopes_3021_);
lean_dec(v_ctx_3020_);
lean_dec(v_imported_3019_);
lean_dec(v_name_3018_);
lean_dec(v_shortName_2941_);
lean_dec(v_currNamespace_2939_);
v___x_3069_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_3070_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3069_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_3070_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_3070_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
v___jp_3027_:
{
if (v_isRootName_3026_ == 0)
{
lean_dec(v_name_3018_);
v___y_2955_ = v___y_3034_;
v_shortName_2956_ = v_shortName_2941_;
v_currNamespace_2957_ = v_currNamespace_2939_;
v___y_2958_ = v___y_3028_;
v___y_2959_ = v___y_3029_;
v___y_2960_ = v___y_3033_;
v___y_2961_ = v___y_3032_;
v___y_2962_ = v___y_3031_;
v___y_2963_ = v___y_3030_;
goto v___jp_2954_;
}
else
{
lean_dec(v_shortName_2941_);
lean_dec(v_currNamespace_2939_);
if (lean_obj_tag(v_name_3018_) == 1)
{
lean_object* v_pre_3035_; lean_object* v_str_3036_; lean_object* v___x_3037_; lean_object* v_shortName_3038_; lean_object* v_currNamespace_3039_; 
v_pre_3035_ = lean_ctor_get(v_name_3018_, 0);
lean_inc(v_pre_3035_);
v_str_3036_ = lean_ctor_get(v_name_3018_, 1);
lean_inc_ref(v_str_3036_);
lean_dec_ref_known(v_name_3018_, 2);
v___x_3037_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v_shortName_3038_ = l_Lean_Name_str___override(v___x_3037_, v_str_3036_);
v_currNamespace_3039_ = l_Lean_Name_replacePrefix(v_pre_3035_, v___x_3025_, v___x_3037_);
v___y_2955_ = v___y_3034_;
v_shortName_2956_ = v_shortName_3038_;
v_currNamespace_2957_ = v_currNamespace_3039_;
v___y_2958_ = v___y_3028_;
v___y_2959_ = v___y_3029_;
v___y_2960_ = v___y_3033_;
v___y_2961_ = v___y_3032_;
v___y_2962_ = v___y_3031_;
v___y_2963_ = v___y_3030_;
goto v___jp_2954_;
}
else
{
lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec(v___y_3034_);
v___x_3040_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_3041_ = l_Lean_MessageData_ofName(v_name_3018_);
v___x_3042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3040_);
lean_ctor_set(v___x_3042_, 1, v___x_3041_);
v___x_3043_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_3044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3042_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3044_, v___y_3028_, v___y_3029_, v___y_3033_, v___y_3032_, v___y_3031_, v___y_3030_);
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3045_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3045_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
v___jp_3054_:
{
if (v_isRootName_3026_ == 0)
{
lean_object* v___x_3061_; 
lean_del_object(v___x_3023_);
lean_dec(v_scopes_3021_);
lean_dec(v_ctx_3020_);
lean_dec(v_imported_3019_);
lean_inc(v_shortName_2941_);
lean_inc(v_currNamespace_2939_);
v___x_3061_ = l_Lean_Name_append(v_currNamespace_2939_, v_shortName_2941_);
v___y_3028_ = v___y_3055_;
v___y_3029_ = v___y_3056_;
v___y_3030_ = v___y_3060_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3058_;
v___y_3033_ = v___y_3057_;
v___y_3034_ = v___x_3061_;
goto v___jp_3027_;
}
else
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v___x_3062_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
lean_inc(v_name_3018_);
v___x_3063_ = l_Lean_Name_replacePrefix(v_name_3018_, v___x_3025_, v___x_3062_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v___x_3063_);
v___x_3065_ = v___x_3023_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v___x_3063_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v_imported_3019_);
lean_ctor_set(v_reuseFailAlloc_3067_, 2, v_ctx_3020_);
lean_ctor_set(v_reuseFailAlloc_3067_, 3, v_scopes_3021_);
v___x_3065_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lean_MacroScopesView_review(v___x_3065_);
v___y_3028_ = v___y_3055_;
v___y_3029_ = v___y_3056_;
v___y_3030_ = v___y_3060_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3058_;
v___y_3033_ = v___y_3057_;
v___y_3034_ = v___x_3066_;
goto v___jp_3027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object* v_currNamespace_3080_, lean_object* v_modifiers_3081_, lean_object* v_shortName_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
lean_object* v_res_3090_; 
v_res_3090_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3080_, v_modifiers_3081_, v_shortName_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec_ref(v_modifiers_3081_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t v___x_3091_, lean_object* v_as_3092_, size_t v_i_3093_, size_t v_stop_3094_, lean_object* v_b_3095_){
_start:
{
lean_object* v___y_3097_; uint8_t v___x_3101_; 
v___x_3101_ = lean_usize_dec_eq(v_i_3093_, v_stop_3094_);
if (v___x_3101_ == 0)
{
lean_object* v_fst_3102_; uint8_t v___x_3103_; 
v_fst_3102_ = lean_ctor_get(v_b_3095_, 0);
v___x_3103_ = lean_unbox(v_fst_3102_);
if (v___x_3103_ == 0)
{
lean_object* v_snd_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3113_; 
v_snd_3104_ = lean_ctor_get(v_b_3095_, 1);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_b_3095_);
if (v_isSharedCheck_3113_ == 0)
{
lean_object* v_unused_3114_; 
v_unused_3114_ = lean_ctor_get(v_b_3095_, 0);
lean_dec(v_unused_3114_);
v___x_3106_ = v_b_3095_;
v_isShared_3107_ = v_isSharedCheck_3113_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_snd_3104_);
lean_dec(v_b_3095_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3113_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
uint8_t v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3108_ = 1;
v___x_3109_ = lean_box(v___x_3108_);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 0, v___x_3109_);
v___x_3111_ = v___x_3106_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3109_);
lean_ctor_set(v_reuseFailAlloc_3112_, 1, v_snd_3104_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
v___y_3097_ = v___x_3111_;
goto v___jp_3096_;
}
}
}
else
{
lean_object* v_snd_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3125_; 
v_snd_3115_ = lean_ctor_get(v_b_3095_, 1);
v_isSharedCheck_3125_ = !lean_is_exclusive(v_b_3095_);
if (v_isSharedCheck_3125_ == 0)
{
lean_object* v_unused_3126_; 
v_unused_3126_ = lean_ctor_get(v_b_3095_, 0);
lean_dec(v_unused_3126_);
v___x_3117_ = v_b_3095_;
v_isShared_3118_ = v_isSharedCheck_3125_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_snd_3115_);
lean_dec(v_b_3095_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3125_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3119_ = lean_array_uget_borrowed(v_as_3092_, v_i_3093_);
lean_inc(v___x_3119_);
v___x_3120_ = lean_array_push(v_snd_3115_, v___x_3119_);
v___x_3121_ = lean_box(v___x_3091_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 1, v___x_3120_);
lean_ctor_set(v___x_3117_, 0, v___x_3121_);
v___x_3123_ = v___x_3117_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v___x_3120_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
v___y_3097_ = v___x_3123_;
goto v___jp_3096_;
}
}
}
}
else
{
return v_b_3095_;
}
v___jp_3096_:
{
size_t v___x_3098_; size_t v___x_3099_; 
v___x_3098_ = ((size_t)1ULL);
v___x_3099_ = lean_usize_add(v_i_3093_, v___x_3098_);
v_i_3093_ = v___x_3099_;
v_b_3095_ = v___y_3097_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object* v___x_3127_, lean_object* v_as_3128_, lean_object* v_i_3129_, lean_object* v_stop_3130_, lean_object* v_b_3131_){
_start:
{
uint8_t v___x_18100__boxed_3132_; size_t v_i_boxed_3133_; size_t v_stop_boxed_3134_; lean_object* v_res_3135_; 
v___x_18100__boxed_3132_ = lean_unbox(v___x_3127_);
v_i_boxed_3133_ = lean_unbox_usize(v_i_3129_);
lean_dec(v_i_3129_);
v_stop_boxed_3134_ = lean_unbox_usize(v_stop_3130_);
lean_dec(v_stop_3130_);
v_res_3135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_18100__boxed_3132_, v_as_3128_, v_i_boxed_3133_, v_stop_boxed_3134_, v_b_3131_);
lean_dec_ref(v_as_3128_);
return v_res_3135_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object* v_a_3136_, lean_object* v_x_3137_){
_start:
{
if (lean_obj_tag(v_x_3137_) == 0)
{
uint8_t v___x_3138_; 
v___x_3138_ = 0;
return v___x_3138_;
}
else
{
lean_object* v_head_3139_; lean_object* v_tail_3140_; uint8_t v___x_3141_; 
v_head_3139_ = lean_ctor_get(v_x_3137_, 0);
v_tail_3140_ = lean_ctor_get(v_x_3137_, 1);
v___x_3141_ = lean_name_eq(v_a_3136_, v_head_3139_);
if (v___x_3141_ == 0)
{
v_x_3137_ = v_tail_3140_;
goto _start;
}
else
{
return v___x_3141_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object* v_a_3143_, lean_object* v_x_3144_){
_start:
{
uint8_t v_res_3145_; lean_object* v_r_3146_; 
v_res_3145_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_a_3143_, v_x_3144_);
lean_dec(v_x_3144_);
lean_dec(v_a_3143_);
v_r_3146_ = lean_box(v_res_3145_);
return v_r_3146_;
}
}
static lean_object* _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = ((lean_object*)(l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0));
v___x_3149_ = l_Lean_stringToMessageData(v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object* v_u_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3158_ = lean_obj_once(&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1, &l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1);
v___x_3159_ = l_Lean_MessageData_ofName(v_u_3150_);
v___x_3160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3158_);
lean_ctor_set(v___x_3160_, 1, v___x_3159_);
v___x_3161_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_3162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3162_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object* v_u_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object* v_as_3173_, size_t v_i_3174_, size_t v_stop_3175_, lean_object* v_b_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
lean_object* v_a_3185_; uint8_t v___x_3189_; 
v___x_3189_ = lean_usize_dec_eq(v_i_3174_, v_stop_3175_);
if (v___x_3189_ == 0)
{
lean_object* v___x_3190_; lean_object* v_id_3191_; uint8_t v___x_3192_; 
v___x_3190_ = lean_array_uget_borrowed(v_as_3173_, v_i_3174_);
v_id_3191_ = l_Lean_Syntax_getId(v___x_3190_);
v___x_3192_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_id_3191_, v_b_3176_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3193_, 0, v_id_3191_);
lean_ctor_set(v___x_3193_, 1, v_b_3176_);
v_a_3185_ = v___x_3193_;
goto v___jp_3184_;
}
else
{
lean_object* v_toCold_3194_; lean_object* v_currRecDepth_3195_; lean_object* v_ref_3196_; uint8_t v_diag_3197_; uint8_t v_suppressElabErrors_3198_; lean_object* v_ref_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
lean_dec(v_b_3176_);
v_toCold_3194_ = lean_ctor_get(v___y_3181_, 0);
v_currRecDepth_3195_ = lean_ctor_get(v___y_3181_, 1);
v_ref_3196_ = lean_ctor_get(v___y_3181_, 2);
v_diag_3197_ = lean_ctor_get_uint8(v___y_3181_, sizeof(void*)*3);
v_suppressElabErrors_3198_ = lean_ctor_get_uint8(v___y_3181_, sizeof(void*)*3 + 1);
v_ref_3199_ = l_Lean_replaceRef(v___x_3190_, v_ref_3196_);
lean_inc(v_currRecDepth_3195_);
lean_inc_ref(v_toCold_3194_);
v___x_3200_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3200_, 0, v_toCold_3194_);
lean_ctor_set(v___x_3200_, 1, v_currRecDepth_3195_);
lean_ctor_set(v___x_3200_, 2, v_ref_3199_);
lean_ctor_set_uint8(v___x_3200_, sizeof(void*)*3, v_diag_3197_);
lean_ctor_set_uint8(v___x_3200_, sizeof(void*)*3 + 1, v_suppressElabErrors_3198_);
v___x_3201_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_id_3191_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___x_3200_, v___y_3182_);
lean_dec_ref_known(v___x_3200_, 3);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
v_a_3185_ = v_a_3202_;
goto v___jp_3184_;
}
else
{
return v___x_3201_;
}
}
}
else
{
lean_object* v___x_3203_; 
v___x_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3203_, 0, v_b_3176_);
return v___x_3203_;
}
v___jp_3184_:
{
size_t v___x_3186_; size_t v___x_3187_; 
v___x_3186_ = ((size_t)1ULL);
v___x_3187_ = lean_usize_add(v_i_3174_, v___x_3186_);
v_i_3174_ = v___x_3187_;
v_b_3176_ = v_a_3185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object* v_as_3204_, lean_object* v_i_3205_, lean_object* v_stop_3206_, lean_object* v_b_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_){
_start:
{
size_t v_i_boxed_3215_; size_t v_stop_boxed_3216_; lean_object* v_res_3217_; 
v_i_boxed_3215_ = lean_unbox_usize(v_i_3205_);
lean_dec(v_i_3205_);
v_stop_boxed_3216_ = lean_unbox_usize(v_stop_3206_);
lean_dec(v_stop_3206_);
v_res_3217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v_as_3204_, v_i_boxed_3215_, v_stop_boxed_3216_, v_b_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
lean_dec_ref(v_as_3204_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object* v_currNamespace_3218_, lean_object* v_currLevelNames_3219_, lean_object* v_declId_3220_, lean_object* v_modifiers_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v___x_3229_; lean_object* v_fst_3230_; lean_object* v_snd_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3310_; 
v___x_3229_ = l_Lean_Elab_expandDeclIdCore(v_declId_3220_);
v_fst_3230_ = lean_ctor_get(v___x_3229_, 0);
v_snd_3231_ = lean_ctor_get(v___x_3229_, 1);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3233_ = v___x_3229_;
v_isShared_3234_ = v_isSharedCheck_3310_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_snd_3231_);
lean_inc(v_fst_3230_);
lean_dec(v___x_3229_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3310_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v_levelNames_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3272_; lean_object* v___y_3283_; uint8_t v___x_3294_; 
v___x_3294_ = l_Lean_Syntax_isNone(v_snd_3231_);
if (v___x_3294_ == 0)
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; 
v___x_3295_ = lean_unsigned_to_nat(1u);
v___x_3296_ = l_Lean_Syntax_getArg(v_snd_3231_, v___x_3295_);
lean_dec(v_snd_3231_);
v___x_3297_ = l_Lean_Syntax_getArgs(v___x_3296_);
lean_dec(v___x_3296_);
v___x_3298_ = lean_unsigned_to_nat(0u);
v___x_3299_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__0));
v___x_3300_ = lean_array_get_size(v___x_3297_);
v___x_3301_ = lean_nat_dec_lt(v___x_3298_, v___x_3300_);
if (v___x_3301_ == 0)
{
lean_dec_ref(v___x_3297_);
lean_del_object(v___x_3233_);
v___y_3283_ = v___x_3299_;
goto v___jp_3282_;
}
else
{
lean_object* v___x_3302_; lean_object* v___x_3304_; 
v___x_3302_ = lean_box(v___x_3301_);
if (v_isShared_3234_ == 0)
{
lean_ctor_set(v___x_3233_, 1, v___x_3299_);
lean_ctor_set(v___x_3233_, 0, v___x_3302_);
v___x_3304_ = v___x_3233_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3302_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v___x_3299_);
v___x_3304_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
size_t v___x_3305_; size_t v___x_3306_; lean_object* v___x_3307_; lean_object* v_snd_3308_; 
v___x_3305_ = ((size_t)0ULL);
v___x_3306_ = lean_usize_of_nat(v___x_3300_);
v___x_3307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_3294_, v___x_3297_, v___x_3305_, v___x_3306_, v___x_3304_);
lean_dec_ref(v___x_3297_);
v_snd_3308_ = lean_ctor_get(v___x_3307_, 1);
lean_inc(v_snd_3308_);
lean_dec_ref(v___x_3307_);
v___y_3283_ = v_snd_3308_;
goto v___jp_3282_;
}
}
}
else
{
lean_del_object(v___x_3233_);
lean_dec(v_snd_3231_);
v_levelNames_3236_ = v_currLevelNames_3219_;
v___y_3237_ = v_a_3222_;
v___y_3238_ = v_a_3223_;
v___y_3239_ = v_a_3224_;
v___y_3240_ = v_a_3225_;
v___y_3241_ = v_a_3226_;
v___y_3242_ = v_a_3227_;
goto v___jp_3235_;
}
v___jp_3235_:
{
lean_object* v_toCold_3243_; lean_object* v_currRecDepth_3244_; lean_object* v_ref_3245_; uint8_t v_diag_3246_; uint8_t v_suppressElabErrors_3247_; lean_object* v_ref_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v_toCold_3243_ = lean_ctor_get(v___y_3241_, 0);
v_currRecDepth_3244_ = lean_ctor_get(v___y_3241_, 1);
v_ref_3245_ = lean_ctor_get(v___y_3241_, 2);
v_diag_3246_ = lean_ctor_get_uint8(v___y_3241_, sizeof(void*)*3);
v_suppressElabErrors_3247_ = lean_ctor_get_uint8(v___y_3241_, sizeof(void*)*3 + 1);
v_ref_3248_ = l_Lean_replaceRef(v_declId_3220_, v_ref_3245_);
lean_inc(v_currRecDepth_3244_);
lean_inc_ref(v_toCold_3243_);
v___x_3249_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3249_, 0, v_toCold_3243_);
lean_ctor_set(v___x_3249_, 1, v_currRecDepth_3244_);
lean_ctor_set(v___x_3249_, 2, v_ref_3248_);
lean_ctor_set_uint8(v___x_3249_, sizeof(void*)*3, v_diag_3246_);
lean_ctor_set_uint8(v___x_3249_, sizeof(void*)*3 + 1, v_suppressElabErrors_3247_);
v___x_3250_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3218_, v_modifiers_3221_, v_fst_3230_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___x_3249_, v___y_3242_);
lean_dec_ref_known(v___x_3249_, 3);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3262_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3253_ = v___x_3250_;
v_isShared_3254_ = v_isSharedCheck_3262_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3250_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3262_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v_fst_3255_; lean_object* v_snd_3256_; lean_object* v_docString_x3f_3257_; lean_object* v___x_3258_; lean_object* v___x_3260_; 
v_fst_3255_ = lean_ctor_get(v_a_3251_, 0);
lean_inc(v_fst_3255_);
v_snd_3256_ = lean_ctor_get(v_a_3251_, 1);
lean_inc(v_snd_3256_);
lean_dec(v_a_3251_);
v_docString_x3f_3257_ = lean_ctor_get(v_modifiers_3221_, 1);
lean_inc(v_docString_x3f_3257_);
v___x_3258_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3258_, 0, v_snd_3256_);
lean_ctor_set(v___x_3258_, 1, v_fst_3255_);
lean_ctor_set(v___x_3258_, 2, v_levelNames_3236_);
lean_ctor_set(v___x_3258_, 3, v_docString_x3f_3257_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set(v___x_3253_, 0, v___x_3258_);
v___x_3260_ = v___x_3253_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3258_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec(v_levelNames_3236_);
v_a_3263_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3250_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3250_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
v___jp_3271_:
{
if (lean_obj_tag(v___y_3272_) == 0)
{
lean_object* v_a_3273_; 
v_a_3273_ = lean_ctor_get(v___y_3272_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v___y_3272_, 1);
v_levelNames_3236_ = v_a_3273_;
v___y_3237_ = v_a_3222_;
v___y_3238_ = v_a_3223_;
v___y_3239_ = v_a_3224_;
v___y_3240_ = v_a_3225_;
v___y_3241_ = v_a_3226_;
v___y_3242_ = v_a_3227_;
goto v___jp_3235_;
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec(v_fst_3230_);
lean_dec(v_currNamespace_3218_);
v_a_3274_ = lean_ctor_get(v___y_3272_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___y_3272_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___y_3272_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___y_3272_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
v___jp_3282_:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; uint8_t v___x_3286_; 
v___x_3284_ = lean_unsigned_to_nat(0u);
v___x_3285_ = lean_array_get_size(v___y_3283_);
v___x_3286_ = lean_nat_dec_lt(v___x_3284_, v___x_3285_);
if (v___x_3286_ == 0)
{
lean_dec_ref(v___y_3283_);
v_levelNames_3236_ = v_currLevelNames_3219_;
v___y_3237_ = v_a_3222_;
v___y_3238_ = v_a_3223_;
v___y_3239_ = v_a_3224_;
v___y_3240_ = v_a_3225_;
v___y_3241_ = v_a_3226_;
v___y_3242_ = v_a_3227_;
goto v___jp_3235_;
}
else
{
uint8_t v___x_3287_; 
v___x_3287_ = lean_nat_dec_le(v___x_3285_, v___x_3285_);
if (v___x_3287_ == 0)
{
if (v___x_3286_ == 0)
{
lean_dec_ref(v___y_3283_);
v_levelNames_3236_ = v_currLevelNames_3219_;
v___y_3237_ = v_a_3222_;
v___y_3238_ = v_a_3223_;
v___y_3239_ = v_a_3224_;
v___y_3240_ = v_a_3225_;
v___y_3241_ = v_a_3226_;
v___y_3242_ = v_a_3227_;
goto v___jp_3235_;
}
else
{
size_t v___x_3288_; size_t v___x_3289_; lean_object* v___x_3290_; 
v___x_3288_ = ((size_t)0ULL);
v___x_3289_ = lean_usize_of_nat(v___x_3285_);
v___x_3290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v___y_3283_, v___x_3288_, v___x_3289_, v_currLevelNames_3219_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v___y_3283_);
v___y_3272_ = v___x_3290_;
goto v___jp_3271_;
}
}
else
{
size_t v___x_3291_; size_t v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = ((size_t)0ULL);
v___x_3292_ = lean_usize_of_nat(v___x_3285_);
v___x_3293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v___y_3283_, v___x_3291_, v___x_3292_, v_currLevelNames_3219_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v___y_3283_);
v___y_3272_ = v___x_3293_;
goto v___jp_3271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object* v_currNamespace_3311_, lean_object* v_currLevelNames_3312_, lean_object* v_declId_3313_, lean_object* v_modifiers_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Lean_Elab_expandDeclId(v_currNamespace_3311_, v_currLevelNames_3312_, v_declId_3313_, v_modifiers_3314_, v_a_3315_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_);
lean_dec(v_a_3320_);
lean_dec_ref(v_a_3319_);
lean_dec(v_a_3318_);
lean_dec_ref(v_a_3317_);
lean_dec(v_a_3316_);
lean_dec_ref(v_a_3315_);
lean_dec_ref(v_modifiers_3314_);
lean_dec(v_declId_3313_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object* v_00_u03b1_3323_, lean_object* v_u_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_){
_start:
{
lean_object* v___x_3332_; 
v___x_3332_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object* v_00_u03b1_3333_, lean_object* v_u_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(v_00_u03b1_3333_, v_u_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object* v_00_u03b1_3343_, lean_object* v_msg_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_){
_start:
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_);
return v___x_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3353_, lean_object* v_msg_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(v_00_u03b1_3353_, v_msg_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object* v_msgData_3363_, lean_object* v_macroStack_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v___x_3372_; 
v___x_3372_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_3363_, v_macroStack_3364_, v___y_3369_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_3373_, lean_object* v_macroStack_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(v_msgData_3373_, v_macroStack_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object* v_t_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v___x_3391_; 
v___x_3391_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_3383_, v___y_3389_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object* v_t_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(v_t_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object* v_env_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_3401_, v___y_3405_, v___y_3407_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object* v_env_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(v_env_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
lean_dec(v___y_3416_);
lean_dec_ref(v___y_3415_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object* v_00_u03b1_3419_, lean_object* v_env_3420_, lean_object* v_x_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_3420_, v_x_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object* v_00_u03b1_3430_, lean_object* v_env_3431_, lean_object* v_x_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(v_00_u03b1_3430_, v_env_3431_, v_x_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(lean_object* v_00_u03b1_3441_, lean_object* v_constName_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v___x_3450_; 
v___x_3450_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
return v___x_3450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___boxed(lean_object* v_00_u03b1_3451_, lean_object* v_constName_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(v_00_u03b1_3451_, v_constName_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
lean_dec(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(lean_object* v_00_u03b1_3461_, lean_object* v_ref_3462_, lean_object* v_constName_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_3462_, v_constName_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___boxed(lean_object* v_00_u03b1_3472_, lean_object* v_ref_3473_, lean_object* v_constName_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(v_00_u03b1_3472_, v_ref_3473_, v_constName_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v_ref_3473_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(lean_object* v_00_u03b1_3483_, lean_object* v_ref_3484_, lean_object* v_msg_3485_, lean_object* v_declHint_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_3484_, v_msg_3485_, v_declHint_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___boxed(lean_object* v_00_u03b1_3495_, lean_object* v_ref_3496_, lean_object* v_msg_3497_, lean_object* v_declHint_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v_res_3506_; 
v_res_3506_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(v_00_u03b1_3495_, v_ref_3496_, v_msg_3497_, v_declHint_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
lean_dec(v___y_3504_);
lean_dec_ref(v___y_3503_);
lean_dec(v___y_3502_);
lean_dec_ref(v___y_3501_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
lean_dec(v_ref_3496_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(lean_object* v_msg_3507_, lean_object* v_declHint_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_3507_, v_declHint_3508_, v___y_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___boxed(lean_object* v_msg_3517_, lean_object* v_declHint_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(v_msg_3517_, v_declHint_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(lean_object* v_00_u03b1_3527_, lean_object* v_ref_3528_, lean_object* v_msg_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v___x_3537_; 
v___x_3537_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_3528_, v_msg_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___boxed(lean_object* v_00_u03b1_3538_, lean_object* v_ref_3539_, lean_object* v_msg_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(v_00_u03b1_3538_, v_ref_3539_, v_msg_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_);
lean_dec(v___y_3546_);
lean_dec_ref(v___y_3545_);
lean_dec(v___y_3544_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec(v_ref_3539_);
return v_res_3548_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(lean_object* v_x_3552_){
_start:
{
lean_object* v_name_3553_; lean_object* v___x_3554_; uint8_t v___x_3555_; 
v_name_3553_ = lean_ctor_get(v_x_3552_, 0);
v___x_3554_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___closed__1));
v___x_3555_ = lean_name_eq(v_name_3553_, v___x_3554_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0___boxed(lean_object* v_x_3556_){
_start:
{
uint8_t v_res_3557_; lean_object* v_r_3558_; 
v_res_3557_ = l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__0(v_x_3556_);
lean_dec_ref(v_x_3556_);
v_r_3558_ = lean_box(v_res_3557_);
return v_r_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___lam__1(lean_object* v_ctx_3559_){
_start:
{
lean_object* v_declName_x3f_3560_; lean_object* v_macroStack_3561_; uint8_t v_mayPostpone_3562_; uint8_t v_errToSorry_3563_; lean_object* v_autoBoundImplicitContext_3564_; lean_object* v_autoBoundImplicitForbidden_3565_; lean_object* v_sectionVars_3566_; lean_object* v_sectionFVars_3567_; uint8_t v_implicitLambda_3568_; uint8_t v_heedElabAsElim_3569_; uint8_t v_isNoncomputableSection_3570_; uint8_t v_isMetaSection_3571_; uint8_t v_ignoreTCFailures_3572_; uint8_t v_inPattern_3573_; lean_object* v_tacSnap_x3f_3574_; uint8_t v_saveRecAppSyntax_3575_; uint8_t v_holesAsSyntheticOpaque_3576_; lean_object* v_fixedTermElabs_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3585_; 
v_declName_x3f_3560_ = lean_ctor_get(v_ctx_3559_, 0);
v_macroStack_3561_ = lean_ctor_get(v_ctx_3559_, 1);
v_mayPostpone_3562_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8);
v_errToSorry_3563_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_3564_ = lean_ctor_get(v_ctx_3559_, 2);
v_autoBoundImplicitForbidden_3565_ = lean_ctor_get(v_ctx_3559_, 3);
v_sectionVars_3566_ = lean_ctor_get(v_ctx_3559_, 4);
v_sectionFVars_3567_ = lean_ctor_get(v_ctx_3559_, 5);
v_implicitLambda_3568_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 2);
v_heedElabAsElim_3569_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_3570_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 4);
v_isMetaSection_3571_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_3572_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 6);
v_inPattern_3573_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_3574_ = lean_ctor_get(v_ctx_3559_, 6);
v_saveRecAppSyntax_3575_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_3576_ = lean_ctor_get_uint8(v_ctx_3559_, sizeof(void*)*8 + 9);
v_fixedTermElabs_3577_ = lean_ctor_get(v_ctx_3559_, 7);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_ctx_3559_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3579_ = v_ctx_3559_;
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_fixedTermElabs_3577_);
lean_inc(v_tacSnap_x3f_3574_);
lean_inc(v_sectionFVars_3567_);
lean_inc(v_sectionVars_3566_);
lean_inc(v_autoBoundImplicitForbidden_3565_);
lean_inc(v_autoBoundImplicitContext_3564_);
lean_inc(v_macroStack_3561_);
lean_inc(v_declName_x3f_3560_);
lean_dec(v_ctx_3559_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
uint8_t v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = 0;
if (v_isShared_3580_ == 0)
{
v___x_3583_ = v___x_3579_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_declName_x3f_3560_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_macroStack_3561_);
lean_ctor_set(v_reuseFailAlloc_3584_, 2, v_autoBoundImplicitContext_3564_);
lean_ctor_set(v_reuseFailAlloc_3584_, 3, v_autoBoundImplicitForbidden_3565_);
lean_ctor_set(v_reuseFailAlloc_3584_, 4, v_sectionVars_3566_);
lean_ctor_set(v_reuseFailAlloc_3584_, 5, v_sectionFVars_3567_);
lean_ctor_set(v_reuseFailAlloc_3584_, 6, v_tacSnap_x3f_3574_);
lean_ctor_set(v_reuseFailAlloc_3584_, 7, v_fixedTermElabs_3577_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8, v_mayPostpone_3562_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 1, v_errToSorry_3563_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 2, v_implicitLambda_3568_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 3, v_heedElabAsElim_3569_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 4, v_isNoncomputableSection_3570_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 5, v_isMetaSection_3571_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 6, v_ignoreTCFailures_3572_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 7, v_inPattern_3573_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_3575_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_3576_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_ctor_set_uint8(v___x_3583_, sizeof(void*)*8 + 10, v___x_3581_);
return v___x_3583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg(lean_object* v_inst_3607_, lean_object* v_attrs_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3610_ = lean_unsigned_to_nat(0u);
v___x_3611_ = lean_array_get_size(v_attrs_3608_);
v___x_3612_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9));
v___x_3613_ = lean_nat_dec_lt(v___x_3610_, v___x_3611_);
if (v___x_3613_ == 0)
{
lean_dec_ref(v_attrs_3608_);
lean_dec(v_inst_3607_);
return v_a_3609_;
}
else
{
if (v___x_3613_ == 0)
{
lean_dec_ref(v_attrs_3608_);
lean_dec(v_inst_3607_);
return v_a_3609_;
}
else
{
lean_object* v___f_3614_; size_t v___x_3615_; size_t v___x_3616_; lean_object* v___x_3617_; uint8_t v___x_3618_; 
v___f_3614_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10));
v___x_3615_ = ((size_t)0ULL);
v___x_3616_ = lean_usize_of_nat(v___x_3611_);
v___x_3617_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_3612_, v___f_3614_, v_attrs_3608_, v___x_3615_, v___x_3616_);
v___x_3618_ = lean_unbox(v___x_3617_);
lean_dec(v___x_3617_);
if (v___x_3618_ == 0)
{
lean_dec(v_inst_3607_);
return v_a_3609_;
}
else
{
lean_object* v___f_3619_; lean_object* v___x_3620_; 
v___f_3619_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11));
v___x_3620_ = lean_apply_3(v_inst_3607_, lean_box(0), v___f_3619_, v_a_3609_);
return v___x_3620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withDeprecationContextFromAttrs(lean_object* v_m_3621_, lean_object* v_00_u03b1_3622_, lean_object* v_inst_3623_, lean_object* v_attrs_3624_, lean_object* v_a_3625_){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; uint8_t v___x_3629_; 
v___x_3626_ = lean_unsigned_to_nat(0u);
v___x_3627_ = lean_array_get_size(v_attrs_3624_);
v___x_3628_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__9));
v___x_3629_ = lean_nat_dec_lt(v___x_3626_, v___x_3627_);
if (v___x_3629_ == 0)
{
lean_dec_ref(v_attrs_3624_);
lean_dec(v_inst_3623_);
return v_a_3625_;
}
else
{
if (v___x_3629_ == 0)
{
lean_dec_ref(v_attrs_3624_);
lean_dec(v_inst_3623_);
return v_a_3625_;
}
else
{
lean_object* v___f_3630_; size_t v___x_3631_; size_t v___x_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; 
v___f_3630_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__10));
v___x_3631_ = ((size_t)0ULL);
v___x_3632_ = lean_usize_of_nat(v___x_3627_);
v___x_3633_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_3628_, v___f_3630_, v_attrs_3624_, v___x_3631_, v___x_3632_);
v___x_3634_ = lean_unbox(v___x_3633_);
lean_dec(v___x_3633_);
if (v___x_3634_ == 0)
{
lean_dec(v_inst_3623_);
return v_a_3625_;
}
else
{
lean_object* v___f_3635_; lean_object* v___x_3636_; 
v___f_3635_ = ((lean_object*)(l_Lean_Elab_Term_withDeprecationContextFromAttrs___redArg___closed__11));
v___x_3636_ = lean_apply_3(v_inst_3623_, lean_box(0), v___f_3635_, v_a_3625_);
return v___x_3636_;
}
}
}
}
}
lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DeclModifiers_0__Lean_initFn_00___x40_Lean_Elab_DeclModifiers_1403674367____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_linter_redundantVisibility = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_linter_redundantVisibility);
lean_dec_ref(res);
l_Lean_Elab_instInhabitedVisibility_default = _init_l_Lean_Elab_instInhabitedVisibility_default();
l_Lean_Elab_instInhabitedVisibility = _init_l_Lean_Elab_instInhabitedVisibility();
l_Lean_Elab_instInhabitedRecKind_default = _init_l_Lean_Elab_instInhabitedRecKind_default();
l_Lean_Elab_instInhabitedRecKind = _init_l_Lean_Elab_instInhabitedRecKind();
l_Lean_Elab_instInhabitedComputeKind_default = _init_l_Lean_Elab_instInhabitedComputeKind_default();
l_Lean_Elab_instInhabitedComputeKind = _init_l_Lean_Elab_instInhabitedComputeKind();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DeclModifiers(builtin);
}
#ifdef __cplusplus
}
#endif

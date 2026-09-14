// Lean compiler output
// Module: Init.Meta.Defs
// Imports: import all Init.Prelude public import Init.Data.Array.Basic public import Init.MetaTypes import Init.Data.Array.GetLit import Init.Data.Char.Basic meta import Init.MetaTypes import Init.WFTactics
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_string_any(lean_object*, lean_object*);
lean_object* lean_substring_drop(lean_object*, lean_object*);
uint8_t lean_substring_all(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_string_contains(lean_object*, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t lean_string_isprefixof(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_string_isempty(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_nextwhile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprSourceInfo_repr(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
uint32_t lean_substring_front(lean_object*);
uint8_t lean_substring_isempty(lean_object*);
lean_object* lean_substring_takewhile(lean_object*, lean_object*);
lean_object* lean_substring_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_pos_min(lean_object*, lean_object*);
lean_object* lean_substring_prev(lean_object*, lean_object*);
uint32_t lean_substring_get(lean_object*, lean_object*);
uint32_t lean_string_front(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(lean_object*);
lean_object* lean_string_drop(lean_object*, lean_object*);
lean_object* lean_string_dropright(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_string_pos_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_substring_beq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_nat_pred(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_unsafeCast___redArg___boxed(lean_object*);
lean_object* l_Char_quote(uint32_t);
lean_object* lean_string_trim(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailing_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntaxArray_mkImpl___boxed(lean_object*, lean_object*);
lean_object* lean_string_capitalize(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_version_get_major(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_major___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_major___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_major;
lean_object* lean_version_get_minor(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_minor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_minor___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_minor;
lean_object* lean_version_get_patch(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_patch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_patch___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_patch;
lean_object* lean_get_githash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object*);
static lean_once_cell_t l_Lean_githash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_githash___closed__0;
LEAN_EXPORT lean_object* l_Lean_githash;
uint8_t lean_version_get_is_release(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_isRelease___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_version_isRelease___closed__0;
LEAN_EXPORT uint8_t l_Lean_version_isRelease;
lean_object* lean_version_get_special_desc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_specialDesc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_specialDesc___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_specialDesc;
static lean_once_cell_t l_Lean_versionStringCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__0;
static const lean_string_object l_Lean_versionStringCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_versionStringCore___closed__1 = (const lean_object*)&l_Lean_versionStringCore___closed__1_value;
static lean_once_cell_t l_Lean_versionStringCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__2;
static lean_once_cell_t l_Lean_versionStringCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__3;
static lean_once_cell_t l_Lean_versionStringCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__4;
static lean_once_cell_t l_Lean_versionStringCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__5;
static lean_once_cell_t l_Lean_versionStringCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__6;
static lean_once_cell_t l_Lean_versionStringCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionStringCore;
static const lean_string_object l_Lean_versionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_versionString___closed__0 = (const lean_object*)&l_Lean_versionString___closed__0_value;
static lean_once_cell_t l_Lean_versionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_versionString___closed__1;
static const lean_string_object l_Lean_versionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_versionString___closed__2 = (const lean_object*)&l_Lean_versionString___closed__2_value;
static lean_once_cell_t l_Lean_versionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__3;
static lean_once_cell_t l_Lean_versionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__4;
static const lean_string_object l_Lean_versionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l_Lean_versionString___closed__5 = (const lean_object*)&l_Lean_versionString___closed__5_value;
static lean_once_cell_t l_Lean_versionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__6;
static lean_once_cell_t l_Lean_versionString___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionString;
static const lean_string_object l_Lean_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "leanprover/lean4"};
static const lean_object* l_Lean_origin___closed__0 = (const lean_object*)&l_Lean_origin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_origin = (const lean_object*)&l_Lean_origin___closed__0_value;
static const lean_string_object l_Lean_toolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_toolchain___closed__0 = (const lean_object*)&l_Lean_toolchain___closed__0_value;
static lean_once_cell_t l_Lean_toolchain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__1;
static lean_once_cell_t l_Lean_toolchain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__2;
static lean_once_cell_t l_Lean_toolchain___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__3;
static lean_once_cell_t l_Lean_toolchain___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__4;
static lean_once_cell_t l_Lean_toolchain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__5;
LEAN_EXPORT lean_object* l_Lean_toolchain;
uint8_t lean_internal_is_stage0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object*);
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object*);
static lean_once_cell_t l_Lean_isIdFirstAscii___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_isIdFirstAscii___closed__0;
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object*);
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object*);
static lean_once_cell_t l_Lean_isIdRestAscii___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_isIdRestAscii___closed__0;
static lean_once_cell_t l_Lean_isIdRestAscii___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_isIdRestAscii___closed__1;
static lean_once_cell_t l_Lean_isIdRestAscii___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_isIdRestAscii___closed__2;
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_idBeginEscape;
LEAN_EXPORT uint32_t l_Lean_idEndEscape;
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object*);
static const lean_string_object l_Lean_Name_isInaccessibleUserName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_inaccessible"};
static const lean_object* l_Lean_Name_isInaccessibleUserName___closed__0 = (const lean_object*)&l_Lean_Name_isInaccessibleUserName___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdRest___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdEndEscape___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_hasNum(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_hasNum___boxed(lean_object*);
static const lean_string_object l_Lean_Name_reprPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Name.anonymous"};
static const lean_object* l_Lean_Name_reprPrec___closed__0 = (const lean_object*)&l_Lean_Name_reprPrec___closed__0_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__0_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__1 = (const lean_object*)&l_Lean_Name_reprPrec___closed__1_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Name_reprPrec___closed__2 = (const lean_object*)&l_Lean_Name_reprPrec___closed__2_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__2_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__3 = (const lean_object*)&l_Lean_Name_reprPrec___closed__3_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkStr "};
static const lean_object* l_Lean_Name_reprPrec___closed__4 = (const lean_object*)&l_Lean_Name_reprPrec___closed__4_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__4_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__5 = (const lean_object*)&l_Lean_Name_reprPrec___closed__5_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Name_reprPrec___closed__6 = (const lean_object*)&l_Lean_Name_reprPrec___closed__6_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__6_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__7 = (const lean_object*)&l_Lean_Name_reprPrec___closed__7_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkNum "};
static const lean_object* l_Lean_Name_reprPrec___closed__8 = (const lean_object*)&l_Lean_Name_reprPrec___closed__8_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__8_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__9 = (const lean_object*)&l_Lean_Name_reprPrec___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Name_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Name_instRepr___closed__0 = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Name_instRepr = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_before(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Syntax.Preresolved.namespace"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__3;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__4;
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.Preresolved.decl"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprPreresolved_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprPreresolved = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Syntax.missing"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__1_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.node"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__3 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__4 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__4_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.atom"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__7_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Syntax.ident"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__8 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__9 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__10 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__10_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ".toRawSubstring"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__11 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instRepr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instRepr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instRepr = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "raw"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeIdentTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeIdentTerm___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeStrLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNameLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeScientificLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeCharLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentLevel = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrio = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrec = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqPreresolved_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqPreresolved = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEq___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEq = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
static const lean_closure_object l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__0 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__1 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__2 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__3 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_expandMacros___lam__0___closed__4 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_expandMacros___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_expandMacros___boxed__const__1 = (const lean_object*)&l_Lean_expandMacros___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_expandMacros___closed__0 = (const lean_object*)&l_Lean_expandMacros___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCIdentFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_internal"};
static const lean_object* l_Lean_mkCIdentFrom___closed__0 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__0_value;
static const lean_ctor_object l_Lean_mkCIdentFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCIdentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 131, 204, 40, 20, 233, 244, 88)}};
static const lean_object* l_Lean_mkCIdentFrom___closed__1 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object*);
static const lean_string_object l_Lean_mkGroupNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_mkGroupNode___closed__0 = (const lean_object*)&l_Lean_mkGroupNode___closed__0_value;
static const lean_ctor_object l_Lean_mkGroupNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkGroupNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_mkGroupNode___closed__1 = (const lean_object*)&l_Lean_mkGroupNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_mkSepArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_mkSepArray___closed__0 = (const lean_object*)&l_Lean_mkSepArray___closed__0_value;
static const lean_ctor_object l_Lean_mkSepArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkSepArray___closed__1 = (const lean_object*)&l_Lean_mkSepArray___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkOptionalNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_mkOptionalNode___closed__0 = (const lean_object*)&l_Lean_mkOptionalNode___closed__0_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_mkOptionalNode___closed__1 = (const lean_object*)&l_Lean_mkOptionalNode___closed__1_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkOptionalNode___closed__2 = (const lean_object*)&l_Lean_mkOptionalNode___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object*);
static const lean_string_object l_Lean_mkHole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_mkHole___closed__0 = (const lean_object*)&l_Lean_mkHole___closed__0_value;
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_2),((lean_object*)&l_Lean_mkHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_mkHole___closed__1 = (const lean_object*)&l_Lean_mkHole___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_SepArray_ofElems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__0 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_SepArray_ofElems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value)}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__1 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeArraySepArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Syntax_mkApp___closed__0 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_2),((lean_object*)&l_Lean_Syntax_mkApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Syntax_mkApp___closed__1 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkCharLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkCharLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkStrLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkStrLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNumLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNumLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkScientificLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkScientificLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNameLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNameLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_isFieldIdx_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isFieldIdx_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_decodeStringGap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_decodeStringGap___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_decodeStringGap___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeStringGap___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t, uint8_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Init.Meta.Defs"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Substring.Raw.toName"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value;
static lean_once_cell_t l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Substring_Raw_toName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Substring_Raw_toName___closed__0;
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object*);
LEAN_EXPORT lean_object* l_String_toName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__0 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value)}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__1 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instQuoteTermMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instQuoteTermMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteTermMkStr1 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__3;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__4 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__5 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteBoolMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteBoolMkStr1___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteBoolMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteBoolMkStr1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteCharCharLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteCharCharLitKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteCharCharLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteCharCharLitKind = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteStringStrLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteStringStrLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteStringStrLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteStringStrLitKind = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNatNumLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNatNumLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNatNumLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNatNumLitKind = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toRawSubstring'"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 31, 121, 163, 121, 213, 247, 150)}};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteRawMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteRawMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteRawMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteRawMkStr1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static const lean_string_object l_Lean_quoteNameMk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_quoteNameMk___closed__0 = (const lean_object*)&l_Lean_quoteNameMk___closed__0_value;
static const lean_string_object l_Lean_quoteNameMk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "anonymous"};
static const lean_object* l_Lean_quoteNameMk___closed__1 = (const lean_object*)&l_Lean_quoteNameMk___closed__1_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 163, 3, 148, 15, 163, 84, 121)}};
static const lean_object* l_Lean_quoteNameMk___closed__2 = (const lean_object*)&l_Lean_quoteNameMk___closed__2_value;
static lean_once_cell_t l_Lean_quoteNameMk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_quoteNameMk___closed__3;
static const lean_string_object l_Lean_quoteNameMk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkStr"};
static const lean_object* l_Lean_quoteNameMk___closed__4 = (const lean_object*)&l_Lean_quoteNameMk___closed__4_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__4_value),LEAN_SCALAR_PTR_LITERAL(66, 239, 13, 154, 0, 241, 98, 75)}};
static const lean_object* l_Lean_quoteNameMk___closed__5 = (const lean_object*)&l_Lean_quoteNameMk___closed__5_value;
static const lean_string_object l_Lean_quoteNameMk___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkNum"};
static const lean_object* l_Lean_quoteNameMk___closed__6 = (const lean_object*)&l_Lean_quoteNameMk___closed__6_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__6_value),LEAN_SCALAR_PTR_LITERAL(247, 141, 7, 17, 149, 107, 178, 15)}};
static const lean_object* l_Lean_quoteNameMk___closed__7 = (const lean_object*)&l_Lean_quoteNameMk___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object*);
static const lean_string_object l_Lean_instQuoteNameMkStr1___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value;
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2),((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNameMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNameMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNameMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNameMkStr1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__3;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_evalPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected precedence"};
static const lean_object* l_Lean_evalPrec___closed__0 = (const lean_object*)&l_Lean_evalPrec___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_evalPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unexpected priority"};
static const lean_object* l_Lean_evalPrio___closed__0 = (const lean_object*)&l_Lean_evalPrio___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_getSepElems___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_getSepElems___redArg___closed__0 = (const lean_object*)&l_Array_getSepElems___redArg___closed__0_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__1 = (const lean_object*)&l_Array_getSepElems___redArg___closed__1_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__2 = (const lean_object*)&l_Array_getSepElems___redArg___closed__2_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__3 = (const lean_object*)&l_Array_getSepElems___redArg___closed__3_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__4 = (const lean_object*)&l_Array_getSepElems___redArg___closed__4_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__5 = (const lean_object*)&l_Array_getSepElems___redArg___closed__5_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__6 = (const lean_object*)&l_Array_getSepElems___redArg___closed__6_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__7 = (const lean_object*)&l_Array_getSepElems___redArg___closed__7_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__1_value),((lean_object*)&l_Array_getSepElems___redArg___closed__2_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__8 = (const lean_object*)&l_Array_getSepElems___redArg___closed__8_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__8_value),((lean_object*)&l_Array_getSepElems___redArg___closed__3_value),((lean_object*)&l_Array_getSepElems___redArg___closed__4_value),((lean_object*)&l_Array_getSepElems___redArg___closed__5_value),((lean_object*)&l_Array_getSepElems___redArg___closed__6_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__9 = (const lean_object*)&l_Array_getSepElems___redArg___closed__9_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__9_value),((lean_object*)&l_Array_getSepElems___redArg___closed__7_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__10 = (const lean_object*)&l_Array_getSepElems___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Syntax_TSepArray_getElems___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutSepArrayArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_unsafeCast___redArg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value;
static const lean_string_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeTermTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object*);
static const lean_string_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "interpolatedStrLitKind"};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 181, 130, 246, 88, 58, 26, 43)}};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_TSyntax_expandInterpolatedStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__0_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__3 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__4 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__5 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__5_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__6 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__7 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__7_value;
static lean_once_cell_t l_Lean_TSyntax_expandInterpolatedStr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__8;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TSyntax"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__9 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__10 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__11 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Compat"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__12 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 134, 124, 217, 96, 118, 79, 86)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__13 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__14 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__15 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__16 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__16_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__17 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.TransparencyMode.all"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.TransparencyMode.default"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.reducible"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.instances"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__6 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__7 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.TransparencyMode.none"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__8 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__9 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.TransparencyMode.implicit"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__10 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__11 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprTransparencyMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprTransparencyMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprTransparencyMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprTransparencyMode = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.EtaStructMode.all"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.EtaStructMode.notClasses"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.EtaStructMode.none"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprEtaStructMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprEtaStructMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprEtaStructMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprEtaStructMode = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__4;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "etaStruct"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iota"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__18;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "autoUnfold"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__21;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "failIfUnchanged"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__24;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__25 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__27;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "zetaDelta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__32;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "zetaUnused"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "zetaHave"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__35 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__37;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "locals"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instances"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__41 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "maxSteps"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "maxDischargeDepth"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "contextual"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "memoize"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "singlePass"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arith"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ground"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "implicitDefEqProofs"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "catchRuntime"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "congrConsts"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "bitVecOfNat"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "warnExponents"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "suggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "maxSuggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig__1_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 254, 59, 95, 54, 234, 162, 220)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object* v_u_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_version_get_major(v_u_2_);
return v_res_3_;
}
}
static lean_object* _init_l_Lean_version_major___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_version_get_major(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_version_major(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_version_major___closed__0, &l_Lean_version_major___closed__0_once, _init_l_Lean_version_major___closed__0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object* v_u_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lean_version_get_minor(v_u_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Lean_version_minor___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_box(0);
v___x_11_ = lean_version_get_minor(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_version_minor(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_version_minor___closed__0, &l_Lean_version_minor___closed__0_once, _init_l_Lean_version_minor___closed__0);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object* v_u_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lean_version_get_patch(v_u_14_);
return v_res_15_;
}
}
static lean_object* _init_l_Lean_version_patch___closed__0(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_version_get_patch(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_version_patch(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_version_patch___closed__0, &l_Lean_version_patch___closed__0_once, _init_l_Lean_version_patch___closed__0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object* v_u_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lean_get_githash(v_u_20_);
return v_res_21_;
}
}
static lean_object* _init_l_Lean_githash___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_get_githash(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_githash(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Lean_githash___closed__0, &l_Lean_githash___closed__0_once, _init_l_Lean_githash___closed__0);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object* v_u_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = lean_version_get_is_release(v_u_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
static uint8_t _init_l_Lean_version_isRelease___closed__0(void){
_start:
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_version_get_is_release(v___x_29_);
return v___x_30_;
}
}
static uint8_t _init_l_Lean_version_isRelease(void){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_uint8_once(&l_Lean_version_isRelease___closed__0, &l_Lean_version_isRelease___closed__0_once, _init_l_Lean_version_isRelease___closed__0);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object* v_u_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lean_version_get_special_desc(v_u_33_);
return v_res_34_;
}
}
static lean_object* _init_l_Lean_version_specialDesc___closed__0(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_version_get_special_desc(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_version_specialDesc(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l_Lean_version_specialDesc___closed__0, &l_Lean_version_specialDesc___closed__0_once, _init_l_Lean_version_specialDesc___closed__0);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__0(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = l_Lean_version_major;
v___x_39_ = l_Nat_reprFast(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_42_ = lean_obj_once(&l_Lean_versionStringCore___closed__0, &l_Lean_versionStringCore___closed__0_once, _init_l_Lean_versionStringCore___closed__0);
v___x_43_ = lean_string_append(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__3(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = l_Lean_version_minor;
v___x_45_ = l_Nat_reprFast(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__4(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Lean_versionStringCore___closed__3, &l_Lean_versionStringCore___closed__3_once, _init_l_Lean_versionStringCore___closed__3);
v___x_47_ = lean_obj_once(&l_Lean_versionStringCore___closed__2, &l_Lean_versionStringCore___closed__2_once, _init_l_Lean_versionStringCore___closed__2);
v___x_48_ = lean_string_append(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__5(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_50_ = lean_obj_once(&l_Lean_versionStringCore___closed__4, &l_Lean_versionStringCore___closed__4_once, _init_l_Lean_versionStringCore___closed__4);
v___x_51_ = lean_string_append(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__6(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = l_Lean_version_patch;
v___x_53_ = l_Nat_reprFast(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__7(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_versionStringCore___closed__6, &l_Lean_versionStringCore___closed__6_once, _init_l_Lean_versionStringCore___closed__6);
v___x_55_ = lean_obj_once(&l_Lean_versionStringCore___closed__5, &l_Lean_versionStringCore___closed__5_once, _init_l_Lean_versionStringCore___closed__5);
v___x_56_ = lean_string_append(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_versionStringCore(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_versionStringCore___closed__7, &l_Lean_versionStringCore___closed__7_once, _init_l_Lean_versionStringCore___closed__7);
return v___x_57_;
}
}
static uint8_t _init_l_Lean_versionString___closed__1(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_59_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_60_ = l_Lean_version_specialDesc;
v___x_61_ = lean_string_dec_eq(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_versionString___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_64_ = l_Lean_versionStringCore;
v___x_65_ = lean_string_append(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_versionString___closed__4(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = l_Lean_version_specialDesc;
v___x_67_ = lean_obj_once(&l_Lean_versionString___closed__3, &l_Lean_versionString___closed__3_once, _init_l_Lean_versionString___closed__3);
v___x_68_ = lean_string_append(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_versionString___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l_Lean_versionString___closed__5));
v___x_71_ = l_Lean_versionStringCore;
v___x_72_ = lean_string_append(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_versionString___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = l_Lean_githash;
v___x_74_ = lean_obj_once(&l_Lean_versionString___closed__6, &l_Lean_versionString___closed__6_once, _init_l_Lean_versionString___closed__6);
v___x_75_ = lean_string_append(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_versionString(void){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_versionString___closed__4, &l_Lean_versionString___closed__4_once, _init_l_Lean_versionString___closed__4);
return v___x_77_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = l_Lean_version_isRelease;
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Lean_versionString___closed__7, &l_Lean_versionString___closed__7_once, _init_l_Lean_versionString___closed__7);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_versionStringCore;
return v___x_80_;
}
}
}
}
static lean_object* _init_l_Lean_toolchain___closed__1(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_85_ = ((lean_object*)(l_Lean_origin___closed__0));
v___x_86_ = lean_string_append(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__2(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = l_Lean_version_specialDesc;
v___x_88_ = lean_obj_once(&l_Lean_toolchain___closed__1, &l_Lean_toolchain___closed__1_once, _init_l_Lean_toolchain___closed__1);
v___x_89_ = lean_string_append(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__3(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = l_Lean_versionStringCore;
v___x_91_ = lean_obj_once(&l_Lean_toolchain___closed__1, &l_Lean_toolchain___closed__1_once, _init_l_Lean_toolchain___closed__1);
v___x_92_ = lean_string_append(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__4(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_94_ = lean_obj_once(&l_Lean_toolchain___closed__3, &l_Lean_toolchain___closed__3_once, _init_l_Lean_toolchain___closed__3);
v___x_95_ = lean_string_append(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__5(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = l_Lean_version_specialDesc;
v___x_97_ = lean_obj_once(&l_Lean_toolchain___closed__4, &l_Lean_toolchain___closed__4_once, _init_l_Lean_toolchain___closed__4);
v___x_98_ = lean_string_append(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_toolchain(void){
_start:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_100_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_100_ == 0)
{
uint8_t v___x_101_; 
v___x_101_ = l_Lean_version_isRelease;
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_toolchain___closed__2, &l_Lean_toolchain___closed__2_once, _init_l_Lean_toolchain___closed__2);
return v___x_102_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Lean_toolchain___closed__5, &l_Lean_toolchain___closed__5_once, _init_l_Lean_toolchain___closed__5);
return v___x_103_;
}
}
else
{
uint8_t v___x_104_; 
v___x_104_ = l_Lean_version_isRelease;
if (v___x_104_ == 0)
{
return v___x_99_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lean_toolchain___closed__3, &l_Lean_toolchain___closed__3_once, _init_l_Lean_toolchain___closed__3);
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object* v_u_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = lean_internal_is_stage0(v_u_107_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object* v_u_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = lean_internal_has_llvm_backend(v_u_111_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t v_c_114_){
_start:
{
uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_115_ = 913;
v___x_116_ = lean_uint32_dec_le(v___x_115_, v_c_114_);
if (v___x_116_ == 0)
{
return v___x_116_;
}
else
{
uint32_t v___x_117_; uint8_t v___x_118_; 
v___x_117_ = 989;
v___x_118_ = lean_uint32_dec_le(v_c_114_, v___x_117_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object* v_c_119_){
_start:
{
uint32_t v_c_boxed_120_; uint8_t v_res_121_; lean_object* v_r_122_; 
v_c_boxed_120_ = lean_unbox_uint32(v_c_119_);
lean_dec(v_c_119_);
v_res_121_ = l_Lean_isGreek(v_c_boxed_120_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t v_c_123_){
_start:
{
uint32_t v___x_167_; uint8_t v___x_168_; 
v___x_167_ = 945;
v___x_168_ = lean_uint32_dec_le(v___x_167_, v_c_123_);
if (v___x_168_ == 0)
{
goto v___jp_158_;
}
else
{
uint32_t v___x_169_; uint8_t v___x_170_; 
v___x_169_ = 969;
v___x_170_ = lean_uint32_dec_le(v_c_123_, v___x_169_);
if (v___x_170_ == 0)
{
goto v___jp_158_;
}
else
{
uint32_t v___x_171_; uint8_t v___x_172_; 
v___x_171_ = 955;
v___x_172_ = lean_uint32_dec_eq(v_c_123_, v___x_171_);
if (v___x_172_ == 0)
{
if (v___x_170_ == 0)
{
goto v___jp_158_;
}
else
{
return v___x_170_;
}
}
else
{
goto v___jp_158_;
}
}
}
v___jp_124_:
{
uint32_t v___x_125_; uint8_t v___x_126_; 
v___x_125_ = 256;
v___x_126_ = lean_uint32_dec_le(v___x_125_, v_c_123_);
if (v___x_126_ == 0)
{
return v___x_126_;
}
else
{
uint32_t v___x_127_; uint8_t v___x_128_; 
v___x_127_ = 383;
v___x_128_ = lean_uint32_dec_le(v_c_123_, v___x_127_);
return v___x_128_;
}
}
v___jp_129_:
{
uint32_t v___x_130_; uint8_t v___x_131_; 
v___x_130_ = 192;
v___x_131_ = lean_uint32_dec_le(v___x_130_, v_c_123_);
if (v___x_131_ == 0)
{
goto v___jp_124_;
}
else
{
uint32_t v___x_132_; uint8_t v___x_133_; 
v___x_132_ = 255;
v___x_133_ = lean_uint32_dec_le(v_c_123_, v___x_132_);
if (v___x_133_ == 0)
{
goto v___jp_124_;
}
else
{
uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_134_ = 215;
v___x_135_ = lean_uint32_dec_eq(v_c_123_, v___x_134_);
if (v___x_135_ == 0)
{
if (v___x_133_ == 0)
{
goto v___jp_124_;
}
else
{
uint32_t v___x_136_; uint8_t v___x_137_; 
v___x_136_ = 247;
v___x_137_ = lean_uint32_dec_eq(v_c_123_, v___x_136_);
if (v___x_137_ == 0)
{
return v___x_133_;
}
else
{
goto v___jp_124_;
}
}
}
else
{
goto v___jp_124_;
}
}
}
}
v___jp_138_:
{
uint32_t v___x_139_; uint8_t v___x_140_; 
v___x_139_ = 119964;
v___x_140_ = lean_uint32_dec_le(v___x_139_, v_c_123_);
if (v___x_140_ == 0)
{
goto v___jp_129_;
}
else
{
uint32_t v___x_141_; uint8_t v___x_142_; 
v___x_141_ = 120223;
v___x_142_ = lean_uint32_dec_le(v_c_123_, v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_129_;
}
else
{
return v___x_142_;
}
}
}
v___jp_143_:
{
uint32_t v___x_144_; uint8_t v___x_145_; 
v___x_144_ = 8448;
v___x_145_ = lean_uint32_dec_le(v___x_144_, v_c_123_);
if (v___x_145_ == 0)
{
goto v___jp_138_;
}
else
{
uint32_t v___x_146_; uint8_t v___x_147_; 
v___x_146_ = 8527;
v___x_147_ = lean_uint32_dec_le(v_c_123_, v___x_146_);
if (v___x_147_ == 0)
{
goto v___jp_138_;
}
else
{
return v___x_147_;
}
}
}
v___jp_148_:
{
uint32_t v___x_149_; uint8_t v___x_150_; 
v___x_149_ = 7936;
v___x_150_ = lean_uint32_dec_le(v___x_149_, v_c_123_);
if (v___x_150_ == 0)
{
goto v___jp_143_;
}
else
{
uint32_t v___x_151_; uint8_t v___x_152_; 
v___x_151_ = 8190;
v___x_152_ = lean_uint32_dec_le(v_c_123_, v___x_151_);
if (v___x_152_ == 0)
{
goto v___jp_143_;
}
else
{
return v___x_152_;
}
}
}
v___jp_153_:
{
uint32_t v___x_154_; uint8_t v___x_155_; 
v___x_154_ = 970;
v___x_155_ = lean_uint32_dec_le(v___x_154_, v_c_123_);
if (v___x_155_ == 0)
{
goto v___jp_148_;
}
else
{
uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 1019;
v___x_157_ = lean_uint32_dec_le(v_c_123_, v___x_156_);
if (v___x_157_ == 0)
{
goto v___jp_148_;
}
else
{
return v___x_157_;
}
}
}
v___jp_158_:
{
uint32_t v___x_159_; uint8_t v___x_160_; 
v___x_159_ = 913;
v___x_160_ = lean_uint32_dec_le(v___x_159_, v_c_123_);
if (v___x_160_ == 0)
{
goto v___jp_153_;
}
else
{
uint32_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = 937;
v___x_162_ = lean_uint32_dec_le(v_c_123_, v___x_161_);
if (v___x_162_ == 0)
{
goto v___jp_153_;
}
else
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 928;
v___x_164_ = lean_uint32_dec_eq(v_c_123_, v___x_163_);
if (v___x_164_ == 0)
{
if (v___x_162_ == 0)
{
goto v___jp_153_;
}
else
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 931;
v___x_166_ = lean_uint32_dec_eq(v_c_123_, v___x_165_);
if (v___x_166_ == 0)
{
return v___x_162_;
}
else
{
goto v___jp_153_;
}
}
}
else
{
goto v___jp_153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object* v_c_173_){
_start:
{
uint32_t v_c_boxed_174_; uint8_t v_res_175_; lean_object* v_r_176_; 
v_c_boxed_174_ = lean_unbox_uint32(v_c_173_);
lean_dec(v_c_173_);
v_res_175_ = l_Lean_isLetterLike(v_c_boxed_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t v_c_177_){
_start:
{
uint32_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 8320;
v___x_179_ = lean_uint32_dec_le(v___x_178_, v_c_177_);
if (v___x_179_ == 0)
{
return v___x_179_;
}
else
{
uint32_t v___x_180_; uint8_t v___x_181_; 
v___x_180_ = 8329;
v___x_181_ = lean_uint32_dec_le(v_c_177_, v___x_180_);
return v___x_181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object* v_c_182_){
_start:
{
uint32_t v_c_boxed_183_; uint8_t v_res_184_; lean_object* v_r_185_; 
v_c_boxed_183_ = lean_unbox_uint32(v_c_182_);
lean_dec(v_c_182_);
v_res_184_ = l_Lean_isNumericSubscript(v_c_boxed_183_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t v_c_186_){
_start:
{
uint32_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 8320;
v___x_201_ = lean_uint32_dec_le(v___x_200_, v_c_186_);
if (v___x_201_ == 0)
{
goto v___jp_195_;
}
else
{
uint32_t v___x_202_; uint8_t v___x_203_; 
v___x_202_ = 8329;
v___x_203_ = lean_uint32_dec_le(v_c_186_, v___x_202_);
if (v___x_203_ == 0)
{
goto v___jp_195_;
}
else
{
return v___x_203_;
}
}
v___jp_187_:
{
uint32_t v___x_188_; uint8_t v___x_189_; 
v___x_188_ = 11388;
v___x_189_ = lean_uint32_dec_eq(v_c_186_, v___x_188_);
return v___x_189_;
}
v___jp_190_:
{
uint32_t v___x_191_; uint8_t v___x_192_; 
v___x_191_ = 7522;
v___x_192_ = lean_uint32_dec_le(v___x_191_, v_c_186_);
if (v___x_192_ == 0)
{
goto v___jp_187_;
}
else
{
uint32_t v___x_193_; uint8_t v___x_194_; 
v___x_193_ = 7530;
v___x_194_ = lean_uint32_dec_le(v_c_186_, v___x_193_);
if (v___x_194_ == 0)
{
goto v___jp_187_;
}
else
{
return v___x_194_;
}
}
}
v___jp_195_:
{
uint32_t v___x_196_; uint8_t v___x_197_; 
v___x_196_ = 8336;
v___x_197_ = lean_uint32_dec_le(v___x_196_, v_c_186_);
if (v___x_197_ == 0)
{
goto v___jp_190_;
}
else
{
uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_198_ = 8348;
v___x_199_ = lean_uint32_dec_le(v_c_186_, v___x_198_);
if (v___x_199_ == 0)
{
goto v___jp_190_;
}
else
{
return v___x_199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object* v_c_204_){
_start:
{
uint32_t v_c_boxed_205_; uint8_t v_res_206_; lean_object* v_r_207_; 
v_c_boxed_205_ = lean_unbox_uint32(v_c_204_);
lean_dec(v_c_204_);
v_res_206_ = l_Lean_isSubScriptAlnum(v_c_boxed_205_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t v_c_208_){
_start:
{
uint8_t v___y_214_; uint32_t v___x_219_; uint8_t v___x_220_; 
v___x_219_ = 65;
v___x_220_ = lean_uint32_dec_le(v___x_219_, v_c_208_);
if (v___x_220_ == 0)
{
v___y_214_ = v___x_220_;
goto v___jp_213_;
}
else
{
uint32_t v___x_221_; uint8_t v___x_222_; 
v___x_221_ = 90;
v___x_222_ = lean_uint32_dec_le(v_c_208_, v___x_221_);
v___y_214_ = v___x_222_;
goto v___jp_213_;
}
v___jp_209_:
{
uint32_t v___x_210_; uint8_t v___x_211_; 
v___x_210_ = 95;
v___x_211_ = lean_uint32_dec_eq(v_c_208_, v___x_210_);
if (v___x_211_ == 0)
{
uint8_t v___x_212_; 
v___x_212_ = l_Lean_isLetterLike(v_c_208_);
return v___x_212_;
}
else
{
return v___x_211_;
}
}
v___jp_213_:
{
if (v___y_214_ == 0)
{
uint32_t v___x_215_; uint8_t v___x_216_; 
v___x_215_ = 97;
v___x_216_ = lean_uint32_dec_le(v___x_215_, v_c_208_);
if (v___x_216_ == 0)
{
goto v___jp_209_;
}
else
{
uint32_t v___x_217_; uint8_t v___x_218_; 
v___x_217_ = 122;
v___x_218_ = lean_uint32_dec_le(v_c_208_, v___x_217_);
if (v___x_218_ == 0)
{
goto v___jp_209_;
}
else
{
return v___x_218_;
}
}
}
else
{
return v___y_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object* v_c_223_){
_start:
{
uint32_t v_c_boxed_224_; uint8_t v_res_225_; lean_object* v_r_226_; 
v_c_boxed_224_ = lean_unbox_uint32(v_c_223_);
lean_dec(v_c_223_);
v_res_225_ = l_Lean_isIdFirst(v_c_boxed_224_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0(void){
_start:
{
uint32_t v___x_227_; uint8_t v___x_228_; 
v___x_227_ = 65;
v___x_228_ = lean_uint32_to_uint8(v___x_227_);
return v___x_228_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1(void){
_start:
{
uint32_t v___x_229_; uint8_t v___x_230_; 
v___x_229_ = 90;
v___x_230_ = lean_uint32_to_uint8(v___x_229_);
return v___x_230_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2(void){
_start:
{
uint32_t v___x_231_; uint8_t v___x_232_; 
v___x_231_ = 97;
v___x_232_ = lean_uint32_to_uint8(v___x_231_);
return v___x_232_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3(void){
_start:
{
uint32_t v___x_233_; uint8_t v___x_234_; 
v___x_233_ = 122;
v___x_234_ = lean_uint32_to_uint8(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t v_c_235_){
_start:
{
uint8_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_242_ = lean_uint8_dec_le(v___x_241_, v_c_235_);
if (v___x_242_ == 0)
{
goto v___jp_236_;
}
else
{
uint8_t v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_244_ = lean_uint8_dec_le(v_c_235_, v___x_243_);
if (v___x_244_ == 0)
{
goto v___jp_236_;
}
else
{
return v___x_244_;
}
}
v___jp_236_:
{
uint8_t v___x_237_; uint8_t v___x_238_; 
v___x_237_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_238_ = lean_uint8_dec_le(v___x_237_, v_c_235_);
if (v___x_238_ == 0)
{
return v___x_238_;
}
else
{
uint8_t v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_240_ = lean_uint8_dec_le(v_c_235_, v___x_239_);
return v___x_240_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object* v_c_245_){
_start:
{
uint8_t v_c_boxed_246_; uint8_t v_res_247_; lean_object* v_r_248_; 
v_c_boxed_246_ = lean_unbox(v_c_245_);
v_res_247_ = l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(v_c_boxed_246_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
static uint8_t _init_l_Lean_isIdFirstAscii___closed__0(void){
_start:
{
uint32_t v___x_249_; uint8_t v___x_250_; 
v___x_249_ = 95;
v___x_250_ = lean_uint32_to_uint8(v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t v_c_251_){
_start:
{
uint8_t v___x_260_; uint8_t v___x_261_; 
v___x_260_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_261_ = lean_uint8_dec_le(v___x_260_, v_c_251_);
if (v___x_261_ == 0)
{
goto v___jp_255_;
}
else
{
uint8_t v___x_262_; uint8_t v___x_263_; 
v___x_262_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_263_ = lean_uint8_dec_le(v_c_251_, v___x_262_);
if (v___x_263_ == 0)
{
goto v___jp_255_;
}
else
{
return v___x_263_;
}
}
v___jp_252_:
{
uint8_t v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_254_ = lean_uint8_dec_eq(v_c_251_, v___x_253_);
return v___x_254_;
}
v___jp_255_:
{
uint8_t v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_257_ = lean_uint8_dec_le(v___x_256_, v_c_251_);
if (v___x_257_ == 0)
{
goto v___jp_252_;
}
else
{
uint8_t v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_259_ = lean_uint8_dec_le(v_c_251_, v___x_258_);
if (v___x_259_ == 0)
{
goto v___jp_252_;
}
else
{
return v___x_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object* v_c_264_){
_start:
{
uint8_t v_c_boxed_265_; uint8_t v_res_266_; lean_object* v_r_267_; 
v_c_boxed_265_ = lean_unbox(v_c_264_);
v_res_266_ = l_Lean_isIdFirstAscii(v_c_boxed_265_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0(void){
_start:
{
uint32_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 48;
v___x_269_ = lean_uint32_to_uint8(v___x_268_);
return v___x_269_;
}
}
static uint8_t _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1(void){
_start:
{
uint32_t v___x_270_; uint8_t v___x_271_; 
v___x_270_ = 57;
v___x_271_ = lean_uint32_to_uint8(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t v_c_272_){
_start:
{
uint8_t v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_284_ = lean_uint8_dec_le(v___x_283_, v_c_272_);
if (v___x_284_ == 0)
{
goto v___jp_278_;
}
else
{
uint8_t v___x_285_; uint8_t v___x_286_; 
v___x_285_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_286_ = lean_uint8_dec_le(v_c_272_, v___x_285_);
if (v___x_286_ == 0)
{
goto v___jp_278_;
}
else
{
return v___x_286_;
}
}
v___jp_273_:
{
uint8_t v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0);
v___x_275_ = lean_uint8_dec_le(v___x_274_, v_c_272_);
if (v___x_275_ == 0)
{
return v___x_275_;
}
else
{
uint8_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1);
v___x_277_ = lean_uint8_dec_le(v_c_272_, v___x_276_);
return v___x_277_;
}
}
v___jp_278_:
{
uint8_t v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_280_ = lean_uint8_dec_le(v___x_279_, v_c_272_);
if (v___x_280_ == 0)
{
goto v___jp_273_;
}
else
{
uint8_t v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_282_ = lean_uint8_dec_le(v_c_272_, v___x_281_);
if (v___x_282_ == 0)
{
goto v___jp_273_;
}
else
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object* v_c_287_){
_start:
{
uint8_t v_c_boxed_288_; uint8_t v_res_289_; lean_object* v_r_290_; 
v_c_boxed_288_ = lean_unbox(v_c_287_);
v_res_289_ = l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(v_c_boxed_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t v_c_291_){
_start:
{
uint8_t v___y_309_; uint32_t v___x_314_; uint8_t v___x_315_; 
v___x_314_ = 65;
v___x_315_ = lean_uint32_dec_le(v___x_314_, v_c_291_);
if (v___x_315_ == 0)
{
v___y_309_ = v___x_315_;
goto v___jp_308_;
}
else
{
uint32_t v___x_316_; uint8_t v___x_317_; 
v___x_316_ = 90;
v___x_317_ = lean_uint32_dec_le(v_c_291_, v___x_316_);
v___y_309_ = v___x_317_;
goto v___jp_308_;
}
v___jp_292_:
{
uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_293_ = 95;
v___x_294_ = lean_uint32_dec_eq(v_c_291_, v___x_293_);
if (v___x_294_ == 0)
{
uint32_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 39;
v___x_296_ = lean_uint32_dec_eq(v_c_291_, v___x_295_);
if (v___x_296_ == 0)
{
uint32_t v___x_297_; uint8_t v___x_298_; 
v___x_297_ = 33;
v___x_298_ = lean_uint32_dec_eq(v_c_291_, v___x_297_);
if (v___x_298_ == 0)
{
uint32_t v___x_299_; uint8_t v___x_300_; 
v___x_299_ = 63;
v___x_300_ = lean_uint32_dec_eq(v_c_291_, v___x_299_);
if (v___x_300_ == 0)
{
uint8_t v___x_301_; 
v___x_301_ = l_Lean_isLetterLike(v_c_291_);
if (v___x_301_ == 0)
{
uint8_t v___x_302_; 
v___x_302_ = l_Lean_isSubScriptAlnum(v_c_291_);
return v___x_302_;
}
else
{
return v___x_301_;
}
}
else
{
return v___x_300_;
}
}
else
{
return v___x_298_;
}
}
else
{
return v___x_296_;
}
}
else
{
return v___x_294_;
}
}
v___jp_303_:
{
uint32_t v___x_304_; uint8_t v___x_305_; 
v___x_304_ = 48;
v___x_305_ = lean_uint32_dec_le(v___x_304_, v_c_291_);
if (v___x_305_ == 0)
{
goto v___jp_292_;
}
else
{
uint32_t v___x_306_; uint8_t v___x_307_; 
v___x_306_ = 57;
v___x_307_ = lean_uint32_dec_le(v_c_291_, v___x_306_);
if (v___x_307_ == 0)
{
goto v___jp_292_;
}
else
{
return v___x_307_;
}
}
}
v___jp_308_:
{
if (v___y_309_ == 0)
{
uint32_t v___x_310_; uint8_t v___x_311_; 
v___x_310_ = 97;
v___x_311_ = lean_uint32_dec_le(v___x_310_, v_c_291_);
if (v___x_311_ == 0)
{
goto v___jp_303_;
}
else
{
uint32_t v___x_312_; uint8_t v___x_313_; 
v___x_312_ = 122;
v___x_313_ = lean_uint32_dec_le(v_c_291_, v___x_312_);
if (v___x_313_ == 0)
{
goto v___jp_303_;
}
else
{
return v___x_313_;
}
}
}
else
{
return v___y_309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object* v_c_318_){
_start:
{
uint32_t v_c_boxed_319_; uint8_t v_res_320_; lean_object* v_r_321_; 
v_c_boxed_319_ = lean_unbox_uint32(v_c_318_);
lean_dec(v_c_318_);
v_res_320_ = l_Lean_isIdRest(v_c_boxed_319_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
static uint8_t _init_l_Lean_isIdRestAscii___closed__0(void){
_start:
{
uint32_t v___x_322_; uint8_t v___x_323_; 
v___x_322_ = 39;
v___x_323_ = lean_uint32_to_uint8(v___x_322_);
return v___x_323_;
}
}
static uint8_t _init_l_Lean_isIdRestAscii___closed__1(void){
_start:
{
uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_324_ = 33;
v___x_325_ = lean_uint32_to_uint8(v___x_324_);
return v___x_325_;
}
}
static uint8_t _init_l_Lean_isIdRestAscii___closed__2(void){
_start:
{
uint32_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = 63;
v___x_327_ = lean_uint32_to_uint8(v___x_326_);
return v___x_327_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t v_c_328_){
_start:
{
uint8_t v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_349_ = lean_uint8_dec_le(v___x_348_, v_c_328_);
if (v___x_349_ == 0)
{
goto v___jp_343_;
}
else
{
uint8_t v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_351_ = lean_uint8_dec_le(v_c_328_, v___x_350_);
if (v___x_351_ == 0)
{
goto v___jp_343_;
}
else
{
return v___x_351_;
}
}
v___jp_329_:
{
uint8_t v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_331_ = lean_uint8_dec_eq(v_c_328_, v___x_330_);
if (v___x_331_ == 0)
{
uint8_t v___x_332_; uint8_t v___x_333_; 
v___x_332_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__0, &l_Lean_isIdRestAscii___closed__0_once, _init_l_Lean_isIdRestAscii___closed__0);
v___x_333_ = lean_uint8_dec_eq(v_c_328_, v___x_332_);
if (v___x_333_ == 0)
{
uint8_t v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__1, &l_Lean_isIdRestAscii___closed__1_once, _init_l_Lean_isIdRestAscii___closed__1);
v___x_335_ = lean_uint8_dec_eq(v_c_328_, v___x_334_);
if (v___x_335_ == 0)
{
uint8_t v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__2, &l_Lean_isIdRestAscii___closed__2_once, _init_l_Lean_isIdRestAscii___closed__2);
v___x_337_ = lean_uint8_dec_eq(v_c_328_, v___x_336_);
return v___x_337_;
}
else
{
return v___x_335_;
}
}
else
{
return v___x_333_;
}
}
else
{
return v___x_331_;
}
}
v___jp_338_:
{
uint8_t v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0);
v___x_340_ = lean_uint8_dec_le(v___x_339_, v_c_328_);
if (v___x_340_ == 0)
{
goto v___jp_329_;
}
else
{
uint8_t v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1);
v___x_342_ = lean_uint8_dec_le(v_c_328_, v___x_341_);
if (v___x_342_ == 0)
{
goto v___jp_329_;
}
else
{
return v___x_342_;
}
}
}
v___jp_343_:
{
uint8_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_345_ = lean_uint8_dec_le(v___x_344_, v_c_328_);
if (v___x_345_ == 0)
{
goto v___jp_338_;
}
else
{
uint8_t v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_347_ = lean_uint8_dec_le(v_c_328_, v___x_346_);
if (v___x_347_ == 0)
{
goto v___jp_338_;
}
else
{
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object* v_c_352_){
_start:
{
uint8_t v_c_boxed_353_; uint8_t v_res_354_; lean_object* v_r_355_; 
v_c_boxed_353_ = lean_unbox(v_c_352_);
v_res_354_ = l_Lean_isIdRestAscii(v_c_boxed_353_);
v_r_355_ = lean_box(v_res_354_);
return v_r_355_;
}
}
static uint32_t _init_l_Lean_idBeginEscape(void){
_start:
{
uint32_t v___x_356_; 
v___x_356_ = 171;
return v___x_356_;
}
}
static uint32_t _init_l_Lean_idEndEscape(void){
_start:
{
uint32_t v___x_357_; 
v___x_357_ = 187;
return v___x_357_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t v_c_358_){
_start:
{
uint32_t v___x_359_; uint8_t v___x_360_; 
v___x_359_ = 171;
v___x_360_ = lean_uint32_dec_eq(v_c_358_, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object* v_c_361_){
_start:
{
uint32_t v_c_boxed_362_; uint8_t v_res_363_; lean_object* v_r_364_; 
v_c_boxed_362_ = lean_unbox_uint32(v_c_361_);
lean_dec(v_c_361_);
v_res_363_ = l_Lean_isIdBeginEscape(v_c_boxed_362_);
v_r_364_ = lean_box(v_res_363_);
return v_r_364_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t v_c_365_){
_start:
{
uint32_t v___x_366_; uint8_t v___x_367_; 
v___x_366_ = 187;
v___x_367_ = lean_uint32_dec_eq(v_c_365_, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object* v_c_368_){
_start:
{
uint32_t v_c_boxed_369_; uint8_t v_res_370_; lean_object* v_r_371_; 
v_c_boxed_369_ = lean_unbox_uint32(v_c_368_);
lean_dec(v_c_368_);
v_res_370_ = l_Lean_isIdEndEscape(v_c_boxed_369_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 0)
{
return v_x_372_;
}
else
{
lean_object* v_pre_373_; 
v_pre_373_ = lean_ctor_get(v_x_372_, 0);
if (lean_obj_tag(v_pre_373_) == 0)
{
lean_inc(v_x_372_);
return v_x_372_;
}
else
{
v_x_372_ = v_pre_373_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object* v_x_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Name_getRoot(v_x_375_);
lean_dec(v_x_375_);
return v_res_376_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object* v_x_378_){
_start:
{
switch(lean_obj_tag(v_x_378_))
{
case 1:
{
lean_object* v_str_379_; uint32_t v___x_380_; uint8_t v___x_381_; 
v_str_379_ = lean_ctor_get(v_x_378_, 1);
lean_inc_ref_n(v_str_379_, 2);
lean_dec_ref_known(v_x_378_, 2);
v___x_380_ = 10013;
v___x_381_ = lean_string_contains(v_str_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = ((lean_object*)(l_Lean_Name_isInaccessibleUserName___closed__0));
v___x_383_ = lean_string_dec_eq(v_str_379_, v___x_382_);
lean_dec_ref(v_str_379_);
return v___x_383_;
}
else
{
lean_dec_ref(v_str_379_);
return v___x_381_;
}
}
case 2:
{
lean_object* v_pre_384_; 
v_pre_384_ = lean_ctor_get(v_x_378_, 0);
lean_inc(v_pre_384_);
lean_dec_ref_known(v_x_378_, 2);
v_x_378_ = v_pre_384_;
goto _start;
}
default: 
{
uint8_t v___x_386_; 
lean_dec(v_x_378_);
v___x_386_ = 0;
return v___x_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object* v_x_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_Lean_Name_isInaccessibleUserName(v_x_387_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object* v_s_390_, lean_object* v_i_391_){
_start:
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = lean_string_utf8_byte_size(v_s_390_);
v___x_397_ = lean_nat_dec_lt(v_i_391_, v___x_396_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; 
lean_dec(v_i_391_);
v___x_398_ = 1;
return v___x_398_;
}
else
{
uint8_t v_c_399_; uint8_t v___x_419_; uint8_t v___x_420_; 
lean_inc(v_i_391_);
v_c_399_ = lean_string_get_byte_fast(v_s_390_, v_i_391_);
v___x_419_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_420_ = lean_uint8_dec_le(v___x_419_, v_c_399_);
if (v___x_420_ == 0)
{
goto v___jp_414_;
}
else
{
uint8_t v___x_421_; uint8_t v___x_422_; 
v___x_421_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_422_ = lean_uint8_dec_le(v_c_399_, v___x_421_);
if (v___x_422_ == 0)
{
goto v___jp_414_;
}
else
{
goto v___jp_392_;
}
}
v___jp_400_:
{
uint8_t v___x_401_; uint8_t v___x_402_; 
v___x_401_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_402_ = lean_uint8_dec_eq(v_c_399_, v___x_401_);
if (v___x_402_ == 0)
{
uint8_t v___x_403_; uint8_t v___x_404_; 
v___x_403_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__0, &l_Lean_isIdRestAscii___closed__0_once, _init_l_Lean_isIdRestAscii___closed__0);
v___x_404_ = lean_uint8_dec_eq(v_c_399_, v___x_403_);
if (v___x_404_ == 0)
{
uint8_t v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__1, &l_Lean_isIdRestAscii___closed__1_once, _init_l_Lean_isIdRestAscii___closed__1);
v___x_406_ = lean_uint8_dec_eq(v_c_399_, v___x_405_);
if (v___x_406_ == 0)
{
uint8_t v___x_407_; uint8_t v___x_408_; 
v___x_407_ = lean_uint8_once(&l_Lean_isIdRestAscii___closed__2, &l_Lean_isIdRestAscii___closed__2_once, _init_l_Lean_isIdRestAscii___closed__2);
v___x_408_ = lean_uint8_dec_eq(v_c_399_, v___x_407_);
if (v___x_408_ == 0)
{
lean_dec(v_i_391_);
return v___x_408_;
}
else
{
goto v___jp_392_;
}
}
else
{
goto v___jp_392_;
}
}
else
{
goto v___jp_392_;
}
}
else
{
goto v___jp_392_;
}
}
v___jp_409_:
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__0);
v___x_411_ = lean_uint8_dec_le(v___x_410_, v_c_399_);
if (v___x_411_ == 0)
{
goto v___jp_400_;
}
else
{
uint8_t v___x_412_; uint8_t v___x_413_; 
v___x_412_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___closed__1);
v___x_413_ = lean_uint8_dec_le(v_c_399_, v___x_412_);
if (v___x_413_ == 0)
{
goto v___jp_400_;
}
else
{
goto v___jp_392_;
}
}
}
v___jp_414_:
{
uint8_t v___x_415_; uint8_t v___x_416_; 
v___x_415_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_416_ = lean_uint8_dec_le(v___x_415_, v_c_399_);
if (v___x_416_ == 0)
{
goto v___jp_409_;
}
else
{
uint8_t v___x_417_; uint8_t v___x_418_; 
v___x_417_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_418_ = lean_uint8_dec_le(v_c_399_, v___x_417_);
if (v___x_418_ == 0)
{
goto v___jp_409_;
}
else
{
goto v___jp_392_;
}
}
}
}
v___jp_392_:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_nat_add(v_i_391_, v___x_393_);
lean_dec(v_i_391_);
v_i_391_ = v___x_394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object* v_s_423_, lean_object* v_i_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_423_, v_i_424_);
lean_dec_ref(v_s_423_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object* v_s_427_){
_start:
{
lean_object* v___x_431_; uint8_t v_c_432_; uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_431_ = lean_unsigned_to_nat(0u);
v_c_432_ = lean_string_get_byte_fast(v_s_427_, v___x_431_);
v___x_441_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_442_ = lean_uint8_dec_le(v___x_441_, v_c_432_);
if (v___x_442_ == 0)
{
goto v___jp_436_;
}
else
{
uint8_t v___x_443_; uint8_t v___x_444_; 
v___x_443_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_444_ = lean_uint8_dec_le(v_c_432_, v___x_443_);
if (v___x_444_ == 0)
{
goto v___jp_436_;
}
else
{
goto v___jp_428_;
}
}
v___jp_428_:
{
lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_429_ = lean_unsigned_to_nat(1u);
v___x_430_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_427_, v___x_429_);
return v___x_430_;
}
v___jp_433_:
{
uint8_t v___x_434_; uint8_t v___x_435_; 
v___x_434_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_435_ = lean_uint8_dec_eq(v_c_432_, v___x_434_);
if (v___x_435_ == 0)
{
return v___x_435_;
}
else
{
goto v___jp_428_;
}
}
v___jp_436_:
{
uint8_t v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_438_ = lean_uint8_dec_le(v___x_437_, v_c_432_);
if (v___x_438_ == 0)
{
goto v___jp_433_;
}
else
{
uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_440_ = lean_uint8_dec_le(v_c_432_, v___x_439_);
if (v___x_440_ == 0)
{
goto v___jp_433_;
}
else
{
goto v___jp_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object* v_s_445_){
_start:
{
uint8_t v_res_446_; lean_object* v_r_447_; 
v_res_446_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(v_s_445_);
lean_dec_ref(v_s_445_);
v_r_447_ = lean_box(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object* v_s_448_, lean_object* v_h_449_){
_start:
{
lean_object* v___x_453_; uint8_t v_c_454_; uint8_t v___x_463_; uint8_t v___x_464_; 
v___x_453_ = lean_unsigned_to_nat(0u);
v_c_454_ = lean_string_get_byte_fast(v_s_448_, v___x_453_);
v___x_463_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_464_ = lean_uint8_dec_le(v___x_463_, v_c_454_);
if (v___x_464_ == 0)
{
goto v___jp_458_;
}
else
{
uint8_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_466_ = lean_uint8_dec_le(v_c_454_, v___x_465_);
if (v___x_466_ == 0)
{
goto v___jp_458_;
}
else
{
goto v___jp_450_;
}
}
v___jp_450_:
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_448_, v___x_451_);
return v___x_452_;
}
v___jp_455_:
{
uint8_t v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_457_ = lean_uint8_dec_eq(v_c_454_, v___x_456_);
if (v___x_457_ == 0)
{
return v___x_457_;
}
else
{
goto v___jp_450_;
}
}
v___jp_458_:
{
uint8_t v___x_459_; uint8_t v___x_460_; 
v___x_459_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_460_ = lean_uint8_dec_le(v___x_459_, v_c_454_);
if (v___x_460_ == 0)
{
goto v___jp_455_;
}
else
{
uint8_t v___x_461_; uint8_t v___x_462_; 
v___x_461_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_462_ = lean_uint8_dec_le(v_c_454_, v___x_461_);
if (v___x_462_ == 0)
{
goto v___jp_455_;
}
else
{
goto v___jp_450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object* v_s_467_, lean_object* v_h_468_){
_start:
{
uint8_t v_res_469_; lean_object* v_r_470_; 
v_res_469_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(v_s_467_, v_h_468_);
lean_dec_ref(v_s_467_);
v_r_470_ = lean_box(v_res_469_);
return v_r_470_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object* v_s_472_){
_start:
{
uint32_t v___y_482_; uint32_t v___y_487_; uint8_t v___y_488_; lean_object* v___x_503_; uint8_t v_c_504_; uint8_t v___x_513_; uint8_t v___x_514_; 
v___x_503_ = lean_unsigned_to_nat(0u);
v_c_504_ = lean_string_get_byte_fast(v_s_472_, v___x_503_);
v___x_513_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_514_ = lean_uint8_dec_le(v___x_513_, v_c_504_);
if (v___x_514_ == 0)
{
goto v___jp_508_;
}
else
{
uint8_t v___x_515_; uint8_t v___x_516_; 
v___x_515_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_516_ = lean_uint8_dec_le(v_c_504_, v___x_515_);
if (v___x_516_ == 0)
{
goto v___jp_508_;
}
else
{
goto v___jp_500_;
}
}
v___jp_473_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_string_utf8_byte_size(v_s_472_);
v___x_476_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_476_, 0, v_s_472_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
lean_ctor_set(v___x_476_, 2, v___x_475_);
v___x_477_ = lean_unsigned_to_nat(1u);
v___x_478_ = lean_substring_drop(v___x_476_, v___x_477_);
v___x_479_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_480_ = lean_substring_all(v___x_478_, v___x_479_);
return v___x_480_;
}
v___jp_481_:
{
uint32_t v___x_483_; uint8_t v___x_484_; 
v___x_483_ = 95;
v___x_484_ = lean_uint32_dec_eq(v___y_482_, v___x_483_);
if (v___x_484_ == 0)
{
uint8_t v___x_485_; 
v___x_485_ = l_Lean_isLetterLike(v___y_482_);
if (v___x_485_ == 0)
{
lean_dec_ref(v_s_472_);
return v___x_485_;
}
else
{
goto v___jp_473_;
}
}
else
{
goto v___jp_473_;
}
}
v___jp_486_:
{
if (v___y_488_ == 0)
{
uint32_t v___x_489_; uint8_t v___x_490_; 
v___x_489_ = 97;
v___x_490_ = lean_uint32_dec_le(v___x_489_, v___y_487_);
if (v___x_490_ == 0)
{
v___y_482_ = v___y_487_;
goto v___jp_481_;
}
else
{
uint32_t v___x_491_; uint8_t v___x_492_; 
v___x_491_ = 122;
v___x_492_ = lean_uint32_dec_le(v___y_487_, v___x_491_);
if (v___x_492_ == 0)
{
v___y_482_ = v___y_487_;
goto v___jp_481_;
}
else
{
goto v___jp_473_;
}
}
}
else
{
goto v___jp_473_;
}
}
v___jp_493_:
{
lean_object* v___x_494_; uint32_t v___x_495_; uint32_t v___x_496_; uint8_t v___x_497_; 
v___x_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = lean_string_utf8_get(v_s_472_, v___x_494_);
v___x_496_ = 65;
v___x_497_ = lean_uint32_dec_le(v___x_496_, v___x_495_);
if (v___x_497_ == 0)
{
v___y_487_ = v___x_495_;
v___y_488_ = v___x_497_;
goto v___jp_486_;
}
else
{
uint32_t v___x_498_; uint8_t v___x_499_; 
v___x_498_ = 90;
v___x_499_ = lean_uint32_dec_le(v___x_495_, v___x_498_);
v___y_487_ = v___x_495_;
v___y_488_ = v___x_499_;
goto v___jp_486_;
}
}
v___jp_500_:
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_472_, v___x_501_);
if (v___x_502_ == 0)
{
goto v___jp_493_;
}
else
{
lean_dec_ref(v_s_472_);
return v___x_502_;
}
}
v___jp_505_:
{
uint8_t v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_507_ = lean_uint8_dec_eq(v_c_504_, v___x_506_);
if (v___x_507_ == 0)
{
goto v___jp_493_;
}
else
{
goto v___jp_500_;
}
}
v___jp_508_:
{
uint8_t v___x_509_; uint8_t v___x_510_; 
v___x_509_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_510_ = lean_uint8_dec_le(v___x_509_, v_c_504_);
if (v___x_510_ == 0)
{
goto v___jp_505_;
}
else
{
uint8_t v___x_511_; uint8_t v___x_512_; 
v___x_511_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_512_ = lean_uint8_dec_le(v_c_504_, v___x_511_);
if (v___x_512_ == 0)
{
goto v___jp_505_;
}
else
{
goto v___jp_500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object* v_s_517_){
_start:
{
uint8_t v_res_518_; lean_object* v_r_519_; 
v_res_518_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(v_s_517_);
v_r_519_ = lean_box(v_res_518_);
return v_r_519_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object* v_s_520_, lean_object* v_h_521_){
_start:
{
uint32_t v___y_531_; uint32_t v___y_536_; uint8_t v___y_537_; lean_object* v___x_552_; uint8_t v_c_553_; uint8_t v___x_562_; uint8_t v___x_563_; 
v___x_552_ = lean_unsigned_to_nat(0u);
v_c_553_ = lean_string_get_byte_fast(v_s_520_, v___x_552_);
v___x_562_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_563_ = lean_uint8_dec_le(v___x_562_, v_c_553_);
if (v___x_563_ == 0)
{
goto v___jp_557_;
}
else
{
uint8_t v___x_564_; uint8_t v___x_565_; 
v___x_564_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_565_ = lean_uint8_dec_le(v_c_553_, v___x_564_);
if (v___x_565_ == 0)
{
goto v___jp_557_;
}
else
{
goto v___jp_549_;
}
}
v___jp_522_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v___x_524_ = lean_string_utf8_byte_size(v_s_520_);
v___x_525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_525_, 0, v_s_520_);
lean_ctor_set(v___x_525_, 1, v___x_523_);
lean_ctor_set(v___x_525_, 2, v___x_524_);
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_substring_drop(v___x_525_, v___x_526_);
v___x_528_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_529_ = lean_substring_all(v___x_527_, v___x_528_);
return v___x_529_;
}
v___jp_530_:
{
uint32_t v___x_532_; uint8_t v___x_533_; 
v___x_532_ = 95;
v___x_533_ = lean_uint32_dec_eq(v___y_531_, v___x_532_);
if (v___x_533_ == 0)
{
uint8_t v___x_534_; 
v___x_534_ = l_Lean_isLetterLike(v___y_531_);
if (v___x_534_ == 0)
{
lean_dec_ref(v_s_520_);
return v___x_534_;
}
else
{
goto v___jp_522_;
}
}
else
{
goto v___jp_522_;
}
}
v___jp_535_:
{
if (v___y_537_ == 0)
{
uint32_t v___x_538_; uint8_t v___x_539_; 
v___x_538_ = 97;
v___x_539_ = lean_uint32_dec_le(v___x_538_, v___y_536_);
if (v___x_539_ == 0)
{
v___y_531_ = v___y_536_;
goto v___jp_530_;
}
else
{
uint32_t v___x_540_; uint8_t v___x_541_; 
v___x_540_ = 122;
v___x_541_ = lean_uint32_dec_le(v___y_536_, v___x_540_);
if (v___x_541_ == 0)
{
v___y_531_ = v___y_536_;
goto v___jp_530_;
}
else
{
goto v___jp_522_;
}
}
}
else
{
goto v___jp_522_;
}
}
v___jp_542_:
{
lean_object* v___x_543_; uint32_t v___x_544_; uint32_t v___x_545_; uint8_t v___x_546_; 
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_string_utf8_get(v_s_520_, v___x_543_);
v___x_545_ = 65;
v___x_546_ = lean_uint32_dec_le(v___x_545_, v___x_544_);
if (v___x_546_ == 0)
{
v___y_536_ = v___x_544_;
v___y_537_ = v___x_546_;
goto v___jp_535_;
}
else
{
uint32_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 90;
v___x_548_ = lean_uint32_dec_le(v___x_544_, v___x_547_);
v___y_536_ = v___x_544_;
v___y_537_ = v___x_548_;
goto v___jp_535_;
}
}
v___jp_549_:
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = lean_unsigned_to_nat(1u);
v___x_551_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_520_, v___x_550_);
if (v___x_551_ == 0)
{
goto v___jp_542_;
}
else
{
lean_dec_ref(v_s_520_);
return v___x_551_;
}
}
v___jp_554_:
{
uint8_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_556_ = lean_uint8_dec_eq(v_c_553_, v___x_555_);
if (v___x_556_ == 0)
{
goto v___jp_542_;
}
else
{
goto v___jp_549_;
}
}
v___jp_557_:
{
uint8_t v___x_558_; uint8_t v___x_559_; 
v___x_558_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_559_ = lean_uint8_dec_le(v___x_558_, v_c_553_);
if (v___x_559_ == 0)
{
goto v___jp_554_;
}
else
{
uint8_t v___x_560_; uint8_t v___x_561_; 
v___x_560_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_561_ = lean_uint8_dec_le(v_c_553_, v___x_560_);
if (v___x_561_ == 0)
{
goto v___jp_554_;
}
else
{
goto v___jp_549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object* v_s_566_, lean_object* v_h_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(v_s_566_, v_h_567_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0(void){
_start:
{
uint32_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = 171;
v___x_571_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_572_ = lean_string_push(v___x_571_, v___x_570_);
return v___x_572_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1(void){
_start:
{
uint32_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_573_ = 187;
v___x_574_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_575_ = lean_string_push(v___x_574_, v___x_573_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object* v_s_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_577_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_578_ = lean_string_append(v___x_577_, v_s_576_);
v___x_579_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object* v_s_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Init_Meta_Defs_0__Lean_Name_escape(v_s_581_);
lean_dec_ref(v_s_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object* v_s_584_, uint8_t v_force_585_){
_start:
{
uint8_t v___y_596_; uint32_t v___y_607_; uint32_t v___y_612_; uint8_t v___y_613_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_628_ = lean_unsigned_to_nat(0u);
v___x_629_ = lean_string_utf8_byte_size(v_s_584_);
v___x_630_ = lean_nat_dec_lt(v___x_628_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_631_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_632_ = lean_string_append(v___x_631_, v_s_584_);
lean_dec_ref(v_s_584_);
v___x_633_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
return v___x_635_;
}
else
{
if (v_force_585_ == 0)
{
uint8_t v_c_636_; uint8_t v___x_645_; uint8_t v___x_646_; 
v_c_636_ = lean_string_get_byte_fast(v_s_584_, v___x_628_);
v___x_645_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_646_ = lean_uint8_dec_le(v___x_645_, v_c_636_);
if (v___x_646_ == 0)
{
goto v___jp_640_;
}
else
{
uint8_t v___x_647_; uint8_t v___x_648_; 
v___x_647_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_648_ = lean_uint8_dec_le(v_c_636_, v___x_647_);
if (v___x_648_ == 0)
{
goto v___jp_640_;
}
else
{
goto v___jp_625_;
}
}
v___jp_637_:
{
uint8_t v___x_638_; uint8_t v___x_639_; 
v___x_638_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_639_ = lean_uint8_dec_eq(v_c_636_, v___x_638_);
if (v___x_639_ == 0)
{
goto v___jp_618_;
}
else
{
goto v___jp_625_;
}
}
v___jp_640_:
{
uint8_t v___x_641_; uint8_t v___x_642_; 
v___x_641_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_642_ = lean_uint8_dec_le(v___x_641_, v_c_636_);
if (v___x_642_ == 0)
{
goto v___jp_637_;
}
else
{
uint8_t v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_644_ = lean_uint8_dec_le(v_c_636_, v___x_643_);
if (v___x_644_ == 0)
{
goto v___jp_637_;
}
else
{
goto v___jp_625_;
}
}
}
}
else
{
goto v___jp_586_;
}
}
v___jp_586_:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0));
lean_inc_ref(v_s_584_);
v___x_588_ = lean_string_any(v_s_584_, v___x_587_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_589_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_590_ = lean_string_append(v___x_589_, v_s_584_);
lean_dec_ref(v_s_584_);
v___x_591_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
else
{
lean_object* v___x_594_; 
lean_dec_ref(v_s_584_);
v___x_594_ = lean_box(0);
return v___x_594_;
}
}
v___jp_595_:
{
if (v___y_596_ == 0)
{
goto v___jp_586_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v_s_584_);
return v___x_597_;
}
}
v___jp_598_:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_599_ = lean_unsigned_to_nat(0u);
v___x_600_ = lean_string_utf8_byte_size(v_s_584_);
lean_inc_ref(v_s_584_);
v___x_601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_601_, 0, v_s_584_);
lean_ctor_set(v___x_601_, 1, v___x_599_);
lean_ctor_set(v___x_601_, 2, v___x_600_);
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = lean_substring_drop(v___x_601_, v___x_602_);
v___x_604_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_605_ = lean_substring_all(v___x_603_, v___x_604_);
v___y_596_ = v___x_605_;
goto v___jp_595_;
}
v___jp_606_:
{
uint32_t v___x_608_; uint8_t v___x_609_; 
v___x_608_ = 95;
v___x_609_ = lean_uint32_dec_eq(v___y_607_, v___x_608_);
if (v___x_609_ == 0)
{
uint8_t v___x_610_; 
v___x_610_ = l_Lean_isLetterLike(v___y_607_);
if (v___x_610_ == 0)
{
v___y_596_ = v___x_610_;
goto v___jp_595_;
}
else
{
goto v___jp_598_;
}
}
else
{
goto v___jp_598_;
}
}
v___jp_611_:
{
if (v___y_613_ == 0)
{
uint32_t v___x_614_; uint8_t v___x_615_; 
v___x_614_ = 97;
v___x_615_ = lean_uint32_dec_le(v___x_614_, v___y_612_);
if (v___x_615_ == 0)
{
v___y_607_ = v___y_612_;
goto v___jp_606_;
}
else
{
uint32_t v___x_616_; uint8_t v___x_617_; 
v___x_616_ = 122;
v___x_617_ = lean_uint32_dec_le(v___y_612_, v___x_616_);
if (v___x_617_ == 0)
{
v___y_607_ = v___y_612_;
goto v___jp_606_;
}
else
{
goto v___jp_598_;
}
}
}
else
{
goto v___jp_598_;
}
}
v___jp_618_:
{
lean_object* v___x_619_; uint32_t v___x_620_; uint32_t v___x_621_; uint8_t v___x_622_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_string_utf8_get(v_s_584_, v___x_619_);
v___x_621_ = 65;
v___x_622_ = lean_uint32_dec_le(v___x_621_, v___x_620_);
if (v___x_622_ == 0)
{
v___y_612_ = v___x_620_;
v___y_613_ = v___x_622_;
goto v___jp_611_;
}
else
{
uint32_t v___x_623_; uint8_t v___x_624_; 
v___x_623_ = 90;
v___x_624_ = lean_uint32_dec_le(v___x_620_, v___x_623_);
v___y_612_ = v___x_620_;
v___y_613_ = v___x_624_;
goto v___jp_611_;
}
}
v___jp_625_:
{
lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_584_, v___x_626_);
if (v___x_627_ == 0)
{
goto v___jp_618_;
}
else
{
v___y_596_ = v___x_627_;
goto v___jp_595_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object* v_s_649_, lean_object* v_force_650_){
_start:
{
uint8_t v_force_boxed_651_; lean_object* v_res_652_; 
v_force_boxed_651_ = lean_unbox(v_force_650_);
v_res_652_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(v_s_649_, v_force_boxed_651_);
return v_res_652_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t v___y_653_){
_start:
{
uint32_t v___x_654_; uint8_t v___x_655_; 
v___x_654_ = 187;
v___x_655_ = lean_uint32_dec_eq(v___y_653_, v___x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object* v___y_656_){
_start:
{
uint32_t v___y_284__boxed_657_; uint8_t v_res_658_; lean_object* v_r_659_; 
v___y_284__boxed_657_ = lean_unbox_uint32(v___y_656_);
lean_dec(v___y_656_);
v_res_658_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(v___y_284__boxed_657_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t v___y_660_){
_start:
{
uint8_t v___y_678_; uint32_t v___x_683_; uint8_t v___x_684_; 
v___x_683_ = 65;
v___x_684_ = lean_uint32_dec_le(v___x_683_, v___y_660_);
if (v___x_684_ == 0)
{
v___y_678_ = v___x_684_;
goto v___jp_677_;
}
else
{
uint32_t v___x_685_; uint8_t v___x_686_; 
v___x_685_ = 90;
v___x_686_ = lean_uint32_dec_le(v___y_660_, v___x_685_);
v___y_678_ = v___x_686_;
goto v___jp_677_;
}
v___jp_661_:
{
uint32_t v___x_662_; uint8_t v___x_663_; 
v___x_662_ = 95;
v___x_663_ = lean_uint32_dec_eq(v___y_660_, v___x_662_);
if (v___x_663_ == 0)
{
uint32_t v___x_664_; uint8_t v___x_665_; 
v___x_664_ = 39;
v___x_665_ = lean_uint32_dec_eq(v___y_660_, v___x_664_);
if (v___x_665_ == 0)
{
uint32_t v___x_666_; uint8_t v___x_667_; 
v___x_666_ = 33;
v___x_667_ = lean_uint32_dec_eq(v___y_660_, v___x_666_);
if (v___x_667_ == 0)
{
uint32_t v___x_668_; uint8_t v___x_669_; 
v___x_668_ = 63;
v___x_669_ = lean_uint32_dec_eq(v___y_660_, v___x_668_);
if (v___x_669_ == 0)
{
uint8_t v___x_670_; 
v___x_670_ = l_Lean_isLetterLike(v___y_660_);
if (v___x_670_ == 0)
{
uint8_t v___x_671_; 
v___x_671_ = l_Lean_isSubScriptAlnum(v___y_660_);
return v___x_671_;
}
else
{
return v___x_670_;
}
}
else
{
return v___x_669_;
}
}
else
{
return v___x_667_;
}
}
else
{
return v___x_665_;
}
}
else
{
return v___x_663_;
}
}
v___jp_672_:
{
uint32_t v___x_673_; uint8_t v___x_674_; 
v___x_673_ = 48;
v___x_674_ = lean_uint32_dec_le(v___x_673_, v___y_660_);
if (v___x_674_ == 0)
{
goto v___jp_661_;
}
else
{
uint32_t v___x_675_; uint8_t v___x_676_; 
v___x_675_ = 57;
v___x_676_ = lean_uint32_dec_le(v___y_660_, v___x_675_);
if (v___x_676_ == 0)
{
goto v___jp_661_;
}
else
{
return v___x_676_;
}
}
}
v___jp_677_:
{
if (v___y_678_ == 0)
{
uint32_t v___x_679_; uint8_t v___x_680_; 
v___x_679_ = 97;
v___x_680_ = lean_uint32_dec_le(v___x_679_, v___y_660_);
if (v___x_680_ == 0)
{
goto v___jp_672_;
}
else
{
uint32_t v___x_681_; uint8_t v___x_682_; 
v___x_681_ = 122;
v___x_682_ = lean_uint32_dec_le(v___y_660_, v___x_681_);
if (v___x_682_ == 0)
{
goto v___jp_672_;
}
else
{
return v___x_682_;
}
}
}
else
{
return v___y_678_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object* v___y_687_){
_start:
{
uint32_t v___y_291__boxed_688_; uint8_t v_res_689_; lean_object* v_r_690_; 
v___y_291__boxed_688_ = lean_unbox_uint32(v___y_687_);
lean_dec(v___y_687_);
v_res_689_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(v___y_291__boxed_688_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t v_escape_693_, lean_object* v_s_694_, uint8_t v_force_695_){
_start:
{
if (v_escape_693_ == 0)
{
return v_s_694_;
}
else
{
lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_string_utf8_byte_size(v_s_694_);
v___x_698_ = lean_nat_dec_lt(v___x_696_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_699_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_700_ = lean_string_append(v___x_699_, v_s_694_);
lean_dec_ref(v_s_694_);
v___x_701_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
return v___x_702_;
}
else
{
lean_object* v___f_703_; uint8_t v___y_711_; 
v___f_703_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
if (v_force_695_ == 0)
{
lean_object* v___f_712_; uint32_t v___y_719_; uint32_t v___y_724_; uint8_t v___y_725_; uint8_t v_c_739_; uint8_t v___x_748_; uint8_t v___x_749_; 
v___f_712_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_739_ = lean_string_get_byte_fast(v_s_694_, v___x_696_);
v___x_748_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_749_ = lean_uint8_dec_le(v___x_748_, v_c_739_);
if (v___x_749_ == 0)
{
goto v___jp_743_;
}
else
{
uint8_t v___x_750_; uint8_t v___x_751_; 
v___x_750_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_751_ = lean_uint8_dec_le(v_c_739_, v___x_750_);
if (v___x_751_ == 0)
{
goto v___jp_743_;
}
else
{
goto v___jp_736_;
}
}
v___jp_713_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
lean_inc_ref(v_s_694_);
v___x_714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_714_, 0, v_s_694_);
lean_ctor_set(v___x_714_, 1, v___x_696_);
lean_ctor_set(v___x_714_, 2, v___x_697_);
v___x_715_ = lean_unsigned_to_nat(1u);
v___x_716_ = lean_substring_drop(v___x_714_, v___x_715_);
v___x_717_ = lean_substring_all(v___x_716_, v___f_712_);
v___y_711_ = v___x_717_;
goto v___jp_710_;
}
v___jp_718_:
{
uint32_t v___x_720_; uint8_t v___x_721_; 
v___x_720_ = 95;
v___x_721_ = lean_uint32_dec_eq(v___y_719_, v___x_720_);
if (v___x_721_ == 0)
{
uint8_t v___x_722_; 
v___x_722_ = l_Lean_isLetterLike(v___y_719_);
if (v___x_722_ == 0)
{
v___y_711_ = v___x_722_;
goto v___jp_710_;
}
else
{
goto v___jp_713_;
}
}
else
{
goto v___jp_713_;
}
}
v___jp_723_:
{
if (v___y_725_ == 0)
{
uint32_t v___x_726_; uint8_t v___x_727_; 
v___x_726_ = 97;
v___x_727_ = lean_uint32_dec_le(v___x_726_, v___y_724_);
if (v___x_727_ == 0)
{
v___y_719_ = v___y_724_;
goto v___jp_718_;
}
else
{
uint32_t v___x_728_; uint8_t v___x_729_; 
v___x_728_ = 122;
v___x_729_ = lean_uint32_dec_le(v___y_724_, v___x_728_);
if (v___x_729_ == 0)
{
v___y_719_ = v___y_724_;
goto v___jp_718_;
}
else
{
goto v___jp_713_;
}
}
}
else
{
goto v___jp_713_;
}
}
v___jp_730_:
{
uint32_t v___x_731_; uint32_t v___x_732_; uint8_t v___x_733_; 
v___x_731_ = lean_string_utf8_get(v_s_694_, v___x_696_);
v___x_732_ = 65;
v___x_733_ = lean_uint32_dec_le(v___x_732_, v___x_731_);
if (v___x_733_ == 0)
{
v___y_724_ = v___x_731_;
v___y_725_ = v___x_733_;
goto v___jp_723_;
}
else
{
uint32_t v___x_734_; uint8_t v___x_735_; 
v___x_734_ = 90;
v___x_735_ = lean_uint32_dec_le(v___x_731_, v___x_734_);
v___y_724_ = v___x_731_;
v___y_725_ = v___x_735_;
goto v___jp_723_;
}
}
v___jp_736_:
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_694_, v___x_737_);
if (v___x_738_ == 0)
{
goto v___jp_730_;
}
else
{
v___y_711_ = v___x_738_;
goto v___jp_710_;
}
}
v___jp_740_:
{
uint8_t v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_742_ = lean_uint8_dec_eq(v_c_739_, v___x_741_);
if (v___x_742_ == 0)
{
goto v___jp_730_;
}
else
{
goto v___jp_736_;
}
}
v___jp_743_:
{
uint8_t v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_745_ = lean_uint8_dec_le(v___x_744_, v_c_739_);
if (v___x_745_ == 0)
{
goto v___jp_740_;
}
else
{
uint8_t v___x_746_; uint8_t v___x_747_; 
v___x_746_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_747_ = lean_uint8_dec_le(v_c_739_, v___x_746_);
if (v___x_747_ == 0)
{
goto v___jp_740_;
}
else
{
goto v___jp_736_;
}
}
}
}
else
{
goto v___jp_704_;
}
v___jp_704_:
{
uint8_t v___x_705_; 
lean_inc_ref(v_s_694_);
v___x_705_ = lean_string_any(v_s_694_, v___f_703_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_706_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_707_ = lean_string_append(v___x_706_, v_s_694_);
lean_dec_ref(v_s_694_);
v___x_708_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_709_ = lean_string_append(v___x_707_, v___x_708_);
return v___x_709_;
}
else
{
return v_s_694_;
}
}
v___jp_710_:
{
if (v___y_711_ == 0)
{
goto v___jp_704_;
}
else
{
return v_s_694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object* v_escape_752_, lean_object* v_s_753_, lean_object* v_force_754_){
_start:
{
uint8_t v_escape_boxed_755_; uint8_t v_force_boxed_756_; lean_object* v_res_757_; 
v_escape_boxed_755_ = lean_unbox(v_escape_752_);
v_force_boxed_756_ = lean_unbox(v_force_754_);
v_res_757_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_boxed_755_, v_s_753_, v_force_boxed_756_);
return v_res_757_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object* v_x_758_){
_start:
{
uint8_t v___x_759_; 
v___x_759_ = 0;
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object* v_x_760_){
_start:
{
uint8_t v_res_761_; lean_object* v_r_762_; 
v_res_761_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(v_x_760_);
lean_dec_ref(v_x_760_);
v_r_762_ = lean_box(v_res_761_);
return v_r_762_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object* v_sep_765_, uint8_t v_escape_766_, lean_object* v_n_767_, lean_object* v_isToken_768_){
_start:
{
switch(lean_obj_tag(v_n_767_))
{
case 0:
{
lean_object* v___x_769_; 
lean_dec_ref(v_isToken_768_);
v___x_769_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_769_;
}
case 1:
{
lean_object* v_pre_770_; 
v_pre_770_ = lean_ctor_get(v_n_767_, 0);
if (lean_obj_tag(v_pre_770_) == 0)
{
lean_object* v_str_771_; lean_object* v___x_772_; uint8_t v___x_773_; lean_object* v___x_774_; 
v_str_771_ = lean_ctor_get(v_n_767_, 1);
lean_inc_ref_n(v_str_771_, 2);
lean_dec_ref_known(v_n_767_, 2);
v___x_772_ = lean_apply_1(v_isToken_768_, v_str_771_);
v___x_773_ = lean_unbox(v___x_772_);
v___x_774_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_766_, v_str_771_, v___x_773_);
return v___x_774_;
}
else
{
lean_object* v_str_775_; lean_object* v_r_776_; lean_object* v___x_777_; uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v_r_x27_780_; 
lean_inc(v_pre_770_);
v_str_775_ = lean_ctor_get(v_n_767_, 1);
lean_inc_ref_n(v_str_775_, 2);
lean_dec_ref_known(v_n_767_, 2);
lean_inc_ref(v_isToken_768_);
v_r_776_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_765_, v_escape_766_, v_pre_770_, v_isToken_768_);
v___x_777_ = lean_string_append(v_r_776_, v_sep_765_);
v___x_778_ = 0;
v___x_779_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_766_, v_str_775_, v___x_778_);
lean_inc_ref(v___x_777_);
v_r_x27_780_ = lean_string_append(v___x_777_, v___x_779_);
lean_dec_ref(v___x_779_);
if (v_escape_766_ == 0)
{
lean_dec_ref(v___x_777_);
lean_dec_ref(v_str_775_);
lean_dec_ref(v_isToken_768_);
return v_r_x27_780_;
}
else
{
lean_object* v___x_781_; uint8_t v___x_782_; 
lean_inc_ref(v_r_x27_780_);
v___x_781_ = lean_apply_1(v_isToken_768_, v_r_x27_780_);
v___x_782_ = lean_unbox(v___x_781_);
if (v___x_782_ == 0)
{
lean_dec_ref(v___x_777_);
lean_dec_ref(v_str_775_);
return v_r_x27_780_;
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec_ref(v_r_x27_780_);
v___x_783_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_766_, v_str_775_, v_escape_766_);
v___x_784_ = lean_string_append(v___x_777_, v___x_783_);
lean_dec_ref(v___x_783_);
return v___x_784_;
}
}
}
}
default: 
{
lean_object* v_pre_785_; 
lean_dec_ref(v_isToken_768_);
v_pre_785_ = lean_ctor_get(v_n_767_, 0);
if (lean_obj_tag(v_pre_785_) == 0)
{
lean_object* v_i_786_; lean_object* v___x_787_; 
v_i_786_ = lean_ctor_get(v_n_767_, 1);
lean_inc(v_i_786_);
lean_dec_ref_known(v_n_767_, 2);
v___x_787_ = l_Nat_reprFast(v_i_786_);
return v___x_787_;
}
else
{
lean_object* v_i_788_; lean_object* v___f_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
lean_inc(v_pre_785_);
v_i_788_ = lean_ctor_get(v_n_767_, 1);
lean_inc(v_i_788_);
lean_dec_ref_known(v_n_767_, 2);
v___f_789_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1));
v___x_790_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_765_, v_escape_766_, v_pre_785_, v___f_789_);
v___x_791_ = lean_string_append(v___x_790_, v_sep_765_);
v___x_792_ = l_Nat_reprFast(v_i_788_);
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
lean_dec_ref(v___x_792_);
return v___x_793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object* v_sep_794_, lean_object* v_escape_795_, lean_object* v_n_796_, lean_object* v_isToken_797_){
_start:
{
uint8_t v_escape_boxed_798_; lean_object* v_res_799_; 
v_escape_boxed_798_ = lean_unbox(v_escape_795_);
v_res_799_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_794_, v_escape_boxed_798_, v_n_796_, v_isToken_797_);
lean_dec_ref(v_sep_794_);
return v_res_799_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object* v_n_805_){
_start:
{
lean_object* v___x_806_; uint8_t v___x_807_; uint8_t v___x_808_; 
v___x_806_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1));
v___x_807_ = lean_name_eq(v_n_805_, v___x_806_);
v___x_808_ = 1;
if (v___x_807_ == 0)
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_Name_getRoot(v_n_805_);
if (lean_obj_tag(v___x_809_) == 1)
{
lean_object* v_str_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_str_810_ = lean_ctor_get(v___x_809_, 1);
lean_inc_ref_n(v_str_810_, 2);
lean_dec_ref_known(v___x_809_, 2);
v___x_811_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2));
v___x_812_ = lean_string_isprefixof(v___x_811_, v_str_810_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3));
v___x_814_ = lean_string_isprefixof(v___x_813_, v_str_810_);
return v___x_814_;
}
else
{
lean_dec_ref(v_str_810_);
return v___x_808_;
}
}
else
{
lean_dec(v___x_809_);
return v___x_807_;
}
}
else
{
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object* v_n_815_){
_start:
{
uint8_t v_res_816_; lean_object* v_r_817_; 
v_res_816_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_815_);
lean_dec(v_n_815_);
v_r_817_ = lean_box(v_res_816_);
return v_r_817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object* v_n_818_, uint8_t v_escape_819_, lean_object* v_isToken_820_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_819_ == 0)
{
lean_object* v___x_822_; 
v___x_822_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_821_, v_escape_819_, v_n_818_, v_isToken_820_);
return v___x_822_;
}
else
{
uint8_t v___x_823_; 
lean_inc(v_n_818_);
v___x_823_ = l_Lean_Name_isInaccessibleUserName(v_n_818_);
if (v___x_823_ == 0)
{
uint8_t v___x_824_; 
v___x_824_ = l_Lean_Name_hasMacroScopes(v_n_818_);
if (v___x_824_ == 0)
{
uint8_t v___x_825_; 
v___x_825_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_818_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_821_, v_escape_819_, v_n_818_, v_isToken_820_);
return v___x_826_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_821_, v___x_824_, v_n_818_, v_isToken_820_);
return v___x_827_;
}
}
else
{
lean_object* v___x_828_; 
v___x_828_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_821_, v___x_823_, v_n_818_, v_isToken_820_);
return v___x_828_;
}
}
else
{
uint8_t v___x_829_; lean_object* v___x_830_; 
v___x_829_ = 0;
v___x_830_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_821_, v___x_829_, v_n_818_, v_isToken_820_);
return v___x_830_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object* v_n_831_, lean_object* v_escape_832_, lean_object* v_isToken_833_){
_start:
{
uint8_t v_escape_boxed_834_; lean_object* v_res_835_; 
v_escape_boxed_834_ = lean_unbox(v_escape_832_);
v_res_835_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(v_n_831_, v_escape_boxed_834_, v_isToken_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object* v_sep_836_, uint8_t v_escape_837_, lean_object* v_n_838_){
_start:
{
switch(lean_obj_tag(v_n_838_))
{
case 0:
{
lean_object* v___x_839_; 
v___x_839_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_839_;
}
case 1:
{
lean_object* v_pre_840_; 
v_pre_840_ = lean_ctor_get(v_n_838_, 0);
if (lean_obj_tag(v_pre_840_) == 0)
{
lean_object* v_str_841_; uint8_t v___x_842_; lean_object* v___x_843_; 
v_str_841_ = lean_ctor_get(v_n_838_, 1);
lean_inc_ref(v_str_841_);
lean_dec_ref_known(v_n_838_, 2);
v___x_842_ = 0;
v___x_843_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_837_, v_str_841_, v___x_842_);
return v___x_843_;
}
else
{
lean_object* v_str_844_; lean_object* v_r_845_; lean_object* v___x_846_; uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v_r_x27_849_; 
lean_inc(v_pre_840_);
v_str_844_ = lean_ctor_get(v_n_838_, 1);
lean_inc_ref(v_str_844_);
lean_dec_ref_known(v_n_838_, 2);
v_r_845_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_836_, v_escape_837_, v_pre_840_);
v___x_846_ = lean_string_append(v_r_845_, v_sep_836_);
v___x_847_ = 0;
v___x_848_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_837_, v_str_844_, v___x_847_);
v_r_x27_849_ = lean_string_append(v___x_846_, v___x_848_);
lean_dec_ref(v___x_848_);
return v_r_x27_849_;
}
}
default: 
{
lean_object* v_pre_850_; 
v_pre_850_ = lean_ctor_get(v_n_838_, 0);
if (lean_obj_tag(v_pre_850_) == 0)
{
lean_object* v_i_851_; lean_object* v___x_852_; 
v_i_851_ = lean_ctor_get(v_n_838_, 1);
lean_inc(v_i_851_);
lean_dec_ref_known(v_n_838_, 2);
v___x_852_ = l_Nat_reprFast(v_i_851_);
return v___x_852_;
}
else
{
lean_object* v_i_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_inc(v_pre_850_);
v_i_853_ = lean_ctor_get(v_n_838_, 1);
lean_inc(v_i_853_);
lean_dec_ref_known(v_n_838_, 2);
v___x_854_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_836_, v_escape_837_, v_pre_850_);
v___x_855_ = lean_string_append(v___x_854_, v_sep_836_);
v___x_856_ = l_Nat_reprFast(v_i_853_);
v___x_857_ = lean_string_append(v___x_855_, v___x_856_);
lean_dec_ref(v___x_856_);
return v___x_857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object* v_sep_858_, lean_object* v_escape_859_, lean_object* v_n_860_){
_start:
{
uint8_t v_escape_boxed_861_; lean_object* v_res_862_; 
v_escape_boxed_861_ = lean_unbox(v_escape_859_);
v_res_862_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_858_, v_escape_boxed_861_, v_n_860_);
lean_dec_ref(v_sep_858_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object* v_n_863_, uint8_t v_escape_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_864_ == 0)
{
lean_object* v___x_866_; 
v___x_866_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_865_, v_escape_864_, v_n_863_);
return v___x_866_;
}
else
{
uint8_t v___x_867_; 
lean_inc(v_n_863_);
v___x_867_ = l_Lean_Name_isInaccessibleUserName(v_n_863_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = l_Lean_Name_hasMacroScopes(v_n_863_);
if (v___x_868_ == 0)
{
uint8_t v___x_869_; 
v___x_869_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_863_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
v___x_870_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_865_, v_escape_864_, v_n_863_);
return v___x_870_;
}
else
{
lean_object* v___x_871_; 
v___x_871_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_865_, v___x_868_, v_n_863_);
return v___x_871_;
}
}
else
{
lean_object* v___x_872_; 
v___x_872_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_865_, v___x_867_, v_n_863_);
return v___x_872_;
}
}
else
{
uint8_t v___x_873_; lean_object* v___x_874_; 
v___x_873_ = 0;
v___x_874_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_865_, v___x_873_, v_n_863_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object* v_n_875_, lean_object* v_escape_876_){
_start:
{
uint8_t v_escape_boxed_877_; lean_object* v_res_878_; 
v_escape_boxed_877_ = lean_unbox(v_escape_876_);
v_res_878_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_875_, v_escape_boxed_877_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object* v_n_879_, uint8_t v_escape_880_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_879_, v_escape_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object* v_n_882_, lean_object* v_escape_883_){
_start:
{
uint8_t v_escape_boxed_884_; lean_object* v_res_885_; 
v_escape_boxed_884_ = lean_unbox(v_escape_883_);
v_res_885_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(v_n_882_, v_escape_boxed_884_);
return v_res_885_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_hasNum(lean_object* v_x_886_){
_start:
{
switch(lean_obj_tag(v_x_886_))
{
case 0:
{
uint8_t v___x_887_; 
v___x_887_ = 0;
return v___x_887_;
}
case 1:
{
lean_object* v_pre_888_; 
v_pre_888_ = lean_ctor_get(v_x_886_, 0);
v_x_886_ = v_pre_888_;
goto _start;
}
default: 
{
uint8_t v___x_890_; 
v___x_890_ = 1;
return v___x_890_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_hasNum___boxed(lean_object* v_x_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l___private_Init_Meta_Defs_0__Lean_Name_hasNum(v_x_891_);
lean_dec(v_x_891_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object* v_n_909_, lean_object* v_prec_910_){
_start:
{
switch(lean_obj_tag(v_n_909_))
{
case 0:
{
lean_object* v___x_911_; 
v___x_911_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__1));
return v___x_911_;
}
case 1:
{
lean_object* v_pre_912_; lean_object* v_str_913_; uint8_t v___x_914_; 
v_pre_912_ = lean_ctor_get(v_n_909_, 0);
v_str_913_ = lean_ctor_get(v_n_909_, 1);
v___x_914_ = l___private_Init_Meta_Defs_0__Lean_Name_hasNum(v_pre_912_);
if (v___x_914_ == 0)
{
uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_915_ = 1;
v___x_916_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__3));
v___x_917_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_909_, v___x_915_);
v___x_918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_916_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
return v___x_919_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_inc_ref(v_str_913_);
lean_inc(v_pre_912_);
lean_dec_ref_known(v_n_909_, 2);
v___x_920_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__5));
v___x_921_ = lean_unsigned_to_nat(1024u);
v___x_922_ = l_Lean_Name_reprPrec(v_pre_912_, v___x_921_);
v___x_923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_920_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_925_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = l_String_quote(v_str_913_);
v___x_927_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
v___x_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_925_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = l_Repr_addAppParen(v___x_928_, v_prec_910_);
return v___x_929_;
}
}
default: 
{
lean_object* v_pre_930_; lean_object* v_i_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_pre_930_ = lean_ctor_get(v_n_909_, 0);
lean_inc(v_pre_930_);
v_i_931_ = lean_ctor_get(v_n_909_, 1);
lean_inc(v_i_931_);
lean_dec_ref_known(v_n_909_, 2);
v___x_932_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__9));
v___x_933_ = lean_unsigned_to_nat(1024u);
v___x_934_ = l_Lean_Name_reprPrec(v_pre_930_, v___x_933_);
v___x_935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_932_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_935_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = l_Nat_reprFast(v_i_931_);
v___x_939_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
v___x_940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_937_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = l_Repr_addAppParen(v___x_940_, v_prec_910_);
return v___x_941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object* v_n_942_, lean_object* v_prec_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Name_reprPrec(v_n_942_, v_prec_943_);
lean_dec(v_prec_943_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 1)
{
lean_object* v_pre_948_; lean_object* v_str_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_pre_948_ = lean_ctor_get(v_x_947_, 0);
lean_inc(v_pre_948_);
v_str_949_ = lean_ctor_get(v_x_947_, 1);
lean_inc_ref(v_str_949_);
lean_dec_ref_known(v_x_947_, 2);
v___x_950_ = lean_string_capitalize(v_str_949_);
v___x_951_ = l_Lean_Name_str___override(v_pre_948_, v___x_950_);
return v___x_951_;
}
else
{
return v_x_947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object* v_x_952_, lean_object* v_x_953_, lean_object* v_x_954_){
_start:
{
switch(lean_obj_tag(v_x_952_))
{
case 0:
{
if (lean_obj_tag(v_x_953_) == 0)
{
lean_inc(v_x_954_);
return v_x_954_;
}
else
{
return v_x_952_;
}
}
case 1:
{
lean_object* v_pre_955_; lean_object* v_str_956_; uint8_t v___x_957_; 
v_pre_955_ = lean_ctor_get(v_x_952_, 0);
lean_inc(v_pre_955_);
v_str_956_ = lean_ctor_get(v_x_952_, 1);
lean_inc_ref(v_str_956_);
v___x_957_ = lean_name_eq(v_x_952_, v_x_953_);
lean_dec_ref_known(v_x_952_, 2);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = l_Lean_Name_replacePrefix(v_pre_955_, v_x_953_, v_x_954_);
v___x_959_ = l_Lean_Name_str___override(v___x_958_, v_str_956_);
return v___x_959_;
}
else
{
lean_dec_ref(v_str_956_);
lean_dec(v_pre_955_);
lean_inc(v_x_954_);
return v_x_954_;
}
}
default: 
{
lean_object* v_pre_960_; lean_object* v_i_961_; uint8_t v___x_962_; 
v_pre_960_ = lean_ctor_get(v_x_952_, 0);
lean_inc(v_pre_960_);
v_i_961_ = lean_ctor_get(v_x_952_, 1);
lean_inc(v_i_961_);
v___x_962_ = lean_name_eq(v_x_952_, v_x_953_);
lean_dec_ref_known(v_x_952_, 2);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = l_Lean_Name_replacePrefix(v_pre_960_, v_x_953_, v_x_954_);
v___x_964_ = l_Lean_Name_num___override(v___x_963_, v_i_961_);
return v___x_964_;
}
else
{
lean_dec(v_i_961_);
lean_dec(v_pre_960_);
lean_inc(v_x_954_);
return v_x_954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object* v_x_965_, lean_object* v_x_966_, lean_object* v_x_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Name_replacePrefix(v_x_965_, v_x_966_, v_x_967_);
lean_dec(v_x_967_);
lean_dec(v_x_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object* v_x_969_, lean_object* v_x_970_){
_start:
{
switch(lean_obj_tag(v_x_970_))
{
case 0:
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v_x_969_);
return v___x_971_;
}
case 1:
{
if (lean_obj_tag(v_x_969_) == 1)
{
lean_object* v_pre_972_; lean_object* v_str_973_; lean_object* v_pre_974_; lean_object* v_str_975_; uint8_t v___x_976_; 
v_pre_972_ = lean_ctor_get(v_x_970_, 0);
v_str_973_ = lean_ctor_get(v_x_970_, 1);
v_pre_974_ = lean_ctor_get(v_x_969_, 0);
lean_inc(v_pre_974_);
v_str_975_ = lean_ctor_get(v_x_969_, 1);
lean_inc_ref(v_str_975_);
lean_dec_ref_known(v_x_969_, 2);
v___x_976_ = lean_string_dec_eq(v_str_975_, v_str_973_);
lean_dec_ref(v_str_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
lean_dec(v_pre_974_);
v___x_977_ = lean_box(0);
return v___x_977_;
}
else
{
v_x_969_ = v_pre_974_;
v_x_970_ = v_pre_972_;
goto _start;
}
}
else
{
lean_object* v___x_979_; 
lean_dec(v_x_969_);
v___x_979_ = lean_box(0);
return v___x_979_;
}
}
default: 
{
if (lean_obj_tag(v_x_969_) == 2)
{
lean_object* v_pre_980_; lean_object* v_i_981_; lean_object* v_pre_982_; lean_object* v_i_983_; uint8_t v___x_984_; 
v_pre_980_ = lean_ctor_get(v_x_970_, 0);
v_i_981_ = lean_ctor_get(v_x_970_, 1);
v_pre_982_ = lean_ctor_get(v_x_969_, 0);
lean_inc(v_pre_982_);
v_i_983_ = lean_ctor_get(v_x_969_, 1);
lean_inc(v_i_983_);
lean_dec_ref_known(v_x_969_, 2);
v___x_984_ = lean_nat_dec_eq(v_i_983_, v_i_981_);
lean_dec(v_i_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_dec(v_pre_982_);
v___x_985_ = lean_box(0);
return v___x_985_;
}
else
{
v_x_969_ = v_pre_982_;
v_x_970_ = v_pre_980_;
goto _start;
}
}
else
{
lean_object* v___x_987_; 
lean_dec(v_x_969_);
v___x_987_ = lean_box(0);
return v___x_987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object* v_x_988_, lean_object* v_x_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_Name_eraseSuffix_x3f(v_x_988_, v_x_989_);
lean_dec(v_x_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object* v_n_991_, lean_object* v_f_992_){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = l_Lean_Name_hasMacroScopes(v_n_991_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; 
v___x_994_ = lean_apply_1(v_f_992_, v_n_991_);
return v___x_994_;
}
else
{
lean_object* v_view_995_; lean_object* v_name_996_; lean_object* v_imported_997_; lean_object* v_ctx_998_; lean_object* v_scopes_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1008_; 
v_view_995_ = l_Lean_extractMacroScopes(v_n_991_);
v_name_996_ = lean_ctor_get(v_view_995_, 0);
v_imported_997_ = lean_ctor_get(v_view_995_, 1);
v_ctx_998_ = lean_ctor_get(v_view_995_, 2);
v_scopes_999_ = lean_ctor_get(v_view_995_, 3);
v_isSharedCheck_1008_ = !lean_is_exclusive(v_view_995_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1001_ = v_view_995_;
v_isShared_1002_ = v_isSharedCheck_1008_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_scopes_999_);
lean_inc(v_ctx_998_);
lean_inc(v_imported_997_);
lean_inc(v_name_996_);
lean_dec(v_view_995_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1008_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1003_ = lean_apply_1(v_f_992_, v_name_996_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1003_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1003_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_imported_997_);
lean_ctor_set(v_reuseFailAlloc_1007_, 2, v_ctx_998_);
lean_ctor_set(v_reuseFailAlloc_1007_, 3, v_scopes_999_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_MacroScopesView_review(v___x_1005_);
return v___x_1006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object* v_suffix_1009_, lean_object* v_x_1010_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 1)
{
lean_object* v_pre_1011_; lean_object* v_str_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_pre_1011_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_pre_1011_);
v_str_1012_ = lean_ctor_get(v_x_1010_, 1);
lean_inc_ref(v_str_1012_);
lean_dec_ref_known(v_x_1010_, 2);
v___x_1013_ = lean_string_append(v_str_1012_, v_suffix_1009_);
lean_dec_ref(v_suffix_1009_);
v___x_1014_ = l_Lean_Name_str___override(v_pre_1011_, v___x_1013_);
return v___x_1014_;
}
else
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Lean_Name_str___override(v_x_1010_, v_suffix_1009_);
return v___x_1015_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_after(lean_object* v_n_1016_, lean_object* v_suffix_1017_){
_start:
{
uint8_t v___x_1018_; 
v___x_1018_ = l_Lean_Name_hasMacroScopes(v_n_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Name_appendAfter___lam__0(v_suffix_1017_, v_n_1016_);
return v___x_1019_;
}
else
{
lean_object* v_view_1020_; lean_object* v_name_1021_; lean_object* v_imported_1022_; lean_object* v_ctx_1023_; lean_object* v_scopes_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1033_; 
v_view_1020_ = l_Lean_extractMacroScopes(v_n_1016_);
v_name_1021_ = lean_ctor_get(v_view_1020_, 0);
v_imported_1022_ = lean_ctor_get(v_view_1020_, 1);
v_ctx_1023_ = lean_ctor_get(v_view_1020_, 2);
v_scopes_1024_ = lean_ctor_get(v_view_1020_, 3);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_view_1020_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1026_ = v_view_1020_;
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_scopes_1024_);
lean_inc(v_ctx_1023_);
lean_inc(v_imported_1022_);
lean_inc(v_name_1021_);
lean_dec(v_view_1020_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1028_ = l_Lean_Name_appendAfter___lam__0(v_suffix_1017_, v_name_1021_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1028_);
v___x_1030_ = v___x_1026_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1028_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v_imported_1022_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v_ctx_1023_);
lean_ctor_set(v_reuseFailAlloc_1032_, 3, v_scopes_1024_);
v___x_1030_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_MacroScopesView_review(v___x_1030_);
return v___x_1031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object* v_idx_1034_, lean_object* v_x_1035_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 1)
{
lean_object* v_pre_1036_; lean_object* v_str_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v_pre_1036_ = lean_ctor_get(v_x_1035_, 0);
lean_inc(v_pre_1036_);
v_str_1037_ = lean_ctor_get(v_x_1035_, 1);
lean_inc_ref(v_str_1037_);
lean_dec_ref_known(v_x_1035_, 2);
v___x_1038_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1039_ = lean_string_append(v_str_1037_, v___x_1038_);
v___x_1040_ = l_Nat_reprFast(v_idx_1034_);
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
lean_dec_ref(v___x_1040_);
v___x_1042_ = l_Lean_Name_str___override(v_pre_1036_, v___x_1041_);
return v___x_1042_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1043_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1044_ = l_Nat_reprFast(v_idx_1034_);
v___x_1045_ = lean_string_append(v___x_1043_, v___x_1044_);
lean_dec_ref(v___x_1044_);
v___x_1046_ = l_Lean_Name_str___override(v_x_1035_, v___x_1045_);
return v___x_1046_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object* v_n_1047_, lean_object* v_idx_1048_){
_start:
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Lean_Name_hasMacroScopes(v_n_1047_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1048_, v_n_1047_);
return v___x_1050_;
}
else
{
lean_object* v_view_1051_; lean_object* v_name_1052_; lean_object* v_imported_1053_; lean_object* v_ctx_1054_; lean_object* v_scopes_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1064_; 
v_view_1051_ = l_Lean_extractMacroScopes(v_n_1047_);
v_name_1052_ = lean_ctor_get(v_view_1051_, 0);
v_imported_1053_ = lean_ctor_get(v_view_1051_, 1);
v_ctx_1054_ = lean_ctor_get(v_view_1051_, 2);
v_scopes_1055_ = lean_ctor_get(v_view_1051_, 3);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_view_1051_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1057_ = v_view_1051_;
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_scopes_1055_);
lean_inc(v_ctx_1054_);
lean_inc(v_imported_1053_);
lean_inc(v_name_1052_);
lean_dec(v_view_1051_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1048_, v_name_1052_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_imported_1053_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v_ctx_1054_);
lean_ctor_set(v_reuseFailAlloc_1063_, 3, v_scopes_1055_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_MacroScopesView_review(v___x_1061_);
return v___x_1062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object* v_pre_1065_, lean_object* v_x_1066_){
_start:
{
switch(lean_obj_tag(v_x_1066_))
{
case 0:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_Name_str___override(v_x_1066_, v_pre_1065_);
return v___x_1067_;
}
case 1:
{
lean_object* v_pre_1068_; lean_object* v_str_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_pre_1068_ = lean_ctor_get(v_x_1066_, 0);
lean_inc(v_pre_1068_);
v_str_1069_ = lean_ctor_get(v_x_1066_, 1);
lean_inc_ref(v_str_1069_);
lean_dec_ref_known(v_x_1066_, 2);
v___x_1070_ = lean_string_append(v_pre_1065_, v_str_1069_);
lean_dec_ref(v_str_1069_);
v___x_1071_ = l_Lean_Name_str___override(v_pre_1068_, v___x_1070_);
return v___x_1071_;
}
default: 
{
lean_object* v_pre_1072_; lean_object* v_i_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_pre_1072_ = lean_ctor_get(v_x_1066_, 0);
lean_inc(v_pre_1072_);
v_i_1073_ = lean_ctor_get(v_x_1066_, 1);
lean_inc(v_i_1073_);
lean_dec_ref_known(v_x_1066_, 2);
v___x_1074_ = l_Lean_Name_str___override(v_pre_1072_, v_pre_1065_);
v___x_1075_ = l_Lean_Name_num___override(v___x_1074_, v_i_1073_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* lean_name_append_before(lean_object* v_n_1076_, lean_object* v_pre_1077_){
_start:
{
uint8_t v___x_1078_; 
v___x_1078_ = l_Lean_Name_hasMacroScopes(v_n_1076_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Lean_Name_appendBefore___lam__0(v_pre_1077_, v_n_1076_);
return v___x_1079_;
}
else
{
lean_object* v_view_1080_; lean_object* v_name_1081_; lean_object* v_imported_1082_; lean_object* v_ctx_1083_; lean_object* v_scopes_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1093_; 
v_view_1080_ = l_Lean_extractMacroScopes(v_n_1076_);
v_name_1081_ = lean_ctor_get(v_view_1080_, 0);
v_imported_1082_ = lean_ctor_get(v_view_1080_, 1);
v_ctx_1083_ = lean_ctor_get(v_view_1080_, 2);
v_scopes_1084_ = lean_ctor_get(v_view_1080_, 3);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_view_1080_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1086_ = v_view_1080_;
v_isShared_1087_ = v_isSharedCheck_1093_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_scopes_1084_);
lean_inc(v_ctx_1083_);
lean_inc(v_imported_1082_);
lean_inc(v_name_1081_);
lean_dec(v_view_1080_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1093_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1088_ = l_Lean_Name_appendBefore___lam__0(v_pre_1077_, v_name_1081_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 0, v___x_1088_);
v___x_1090_ = v___x_1086_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_imported_1082_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_ctx_1083_);
lean_ctor_set(v_reuseFailAlloc_1092_, 3, v_scopes_1084_);
v___x_1090_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_MacroScopesView_review(v___x_1090_);
return v___x_1091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object* v_x_1094_, lean_object* v_x_1095_, lean_object* v_h__1_1096_, lean_object* v_h__2_1097_, lean_object* v_h__3_1098_, lean_object* v_h__4_1099_){
_start:
{
switch(lean_obj_tag(v_x_1094_))
{
case 0:
{
lean_dec(v_h__3_1098_);
lean_dec(v_h__2_1097_);
if (lean_obj_tag(v_x_1095_) == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec(v_h__4_1099_);
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_apply_1(v_h__1_1096_, v___x_1100_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_h__1_1096_);
v___x_1102_ = lean_apply_5(v_h__4_1099_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1102_;
}
}
case 1:
{
lean_dec(v_h__3_1098_);
lean_dec(v_h__1_1096_);
if (lean_obj_tag(v_x_1095_) == 1)
{
lean_object* v_pre_1103_; lean_object* v_str_1104_; lean_object* v_pre_1105_; lean_object* v_str_1106_; lean_object* v___x_1107_; 
lean_dec(v_h__4_1099_);
v_pre_1103_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_pre_1103_);
v_str_1104_ = lean_ctor_get(v_x_1094_, 1);
lean_inc_ref(v_str_1104_);
lean_dec_ref_known(v_x_1094_, 2);
v_pre_1105_ = lean_ctor_get(v_x_1095_, 0);
lean_inc(v_pre_1105_);
v_str_1106_ = lean_ctor_get(v_x_1095_, 1);
lean_inc_ref(v_str_1106_);
lean_dec_ref_known(v_x_1095_, 2);
v___x_1107_ = lean_apply_4(v_h__2_1097_, v_pre_1103_, v_str_1104_, v_pre_1105_, v_str_1106_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
lean_dec(v_h__2_1097_);
v___x_1108_ = lean_apply_5(v_h__4_1099_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1108_;
}
}
default: 
{
lean_dec(v_h__2_1097_);
lean_dec(v_h__1_1096_);
if (lean_obj_tag(v_x_1095_) == 2)
{
lean_object* v_pre_1109_; lean_object* v_i_1110_; lean_object* v_pre_1111_; lean_object* v_i_1112_; lean_object* v___x_1113_; 
lean_dec(v_h__4_1099_);
v_pre_1109_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_pre_1109_);
v_i_1110_ = lean_ctor_get(v_x_1094_, 1);
lean_inc(v_i_1110_);
lean_dec_ref_known(v_x_1094_, 2);
v_pre_1111_ = lean_ctor_get(v_x_1095_, 0);
lean_inc(v_pre_1111_);
v_i_1112_ = lean_ctor_get(v_x_1095_, 1);
lean_inc(v_i_1112_);
lean_dec_ref_known(v_x_1095_, 2);
v___x_1113_ = lean_apply_4(v_h__3_1098_, v_pre_1109_, v_i_1110_, v_pre_1111_, v_i_1112_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; 
lean_dec(v_h__3_1098_);
v___x_1114_ = lean_apply_5(v_h__4_1099_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object* v_motive_1115_, lean_object* v_x_1116_, lean_object* v_x_1117_, lean_object* v_h__1_1118_, lean_object* v_h__2_1119_, lean_object* v_h__3_1120_, lean_object* v_h__4_1121_){
_start:
{
switch(lean_obj_tag(v_x_1116_))
{
case 0:
{
lean_dec(v_h__3_1120_);
lean_dec(v_h__2_1119_);
if (lean_obj_tag(v_x_1117_) == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec(v_h__4_1121_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_apply_1(v_h__1_1118_, v___x_1122_);
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; 
lean_dec(v_h__1_1118_);
v___x_1124_ = lean_apply_5(v_h__4_1121_, v_x_1116_, v_x_1117_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1124_;
}
}
case 1:
{
lean_dec(v_h__3_1120_);
lean_dec(v_h__1_1118_);
if (lean_obj_tag(v_x_1117_) == 1)
{
lean_object* v_pre_1125_; lean_object* v_str_1126_; lean_object* v_pre_1127_; lean_object* v_str_1128_; lean_object* v___x_1129_; 
lean_dec(v_h__4_1121_);
v_pre_1125_ = lean_ctor_get(v_x_1116_, 0);
lean_inc(v_pre_1125_);
v_str_1126_ = lean_ctor_get(v_x_1116_, 1);
lean_inc_ref(v_str_1126_);
lean_dec_ref_known(v_x_1116_, 2);
v_pre_1127_ = lean_ctor_get(v_x_1117_, 0);
lean_inc(v_pre_1127_);
v_str_1128_ = lean_ctor_get(v_x_1117_, 1);
lean_inc_ref(v_str_1128_);
lean_dec_ref_known(v_x_1117_, 2);
v___x_1129_ = lean_apply_4(v_h__2_1119_, v_pre_1125_, v_str_1126_, v_pre_1127_, v_str_1128_);
return v___x_1129_;
}
else
{
lean_object* v___x_1130_; 
lean_dec(v_h__2_1119_);
v___x_1130_ = lean_apply_5(v_h__4_1121_, v_x_1116_, v_x_1117_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1130_;
}
}
default: 
{
lean_dec(v_h__2_1119_);
lean_dec(v_h__1_1118_);
if (lean_obj_tag(v_x_1117_) == 2)
{
lean_object* v_pre_1131_; lean_object* v_i_1132_; lean_object* v_pre_1133_; lean_object* v_i_1134_; lean_object* v___x_1135_; 
lean_dec(v_h__4_1121_);
v_pre_1131_ = lean_ctor_get(v_x_1116_, 0);
lean_inc(v_pre_1131_);
v_i_1132_ = lean_ctor_get(v_x_1116_, 1);
lean_inc(v_i_1132_);
lean_dec_ref_known(v_x_1116_, 2);
v_pre_1133_ = lean_ctor_get(v_x_1117_, 0);
lean_inc(v_pre_1133_);
v_i_1134_ = lean_ctor_get(v_x_1117_, 1);
lean_inc(v_i_1134_);
lean_dec_ref_known(v_x_1117_, 2);
v___x_1135_ = lean_apply_4(v_h__3_1120_, v_pre_1131_, v_i_1132_, v_pre_1133_, v_i_1134_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; 
lean_dec(v_h__3_1120_);
v___x_1136_ = lean_apply_5(v_h__4_1121_, v_x_1116_, v_x_1117_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1136_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object* v_a_1137_, lean_object* v_b_1138_){
_start:
{
uint8_t v___x_1139_; 
v___x_1139_ = lean_name_eq(v_a_1137_, v_b_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object* v_a_1140_, lean_object* v_b_1141_){
_start:
{
uint8_t v_res_1142_; lean_object* v_r_1143_; 
v_res_1142_ = l_Lean_Name_instDecidableEq(v_a_1140_, v_b_1141_);
lean_dec(v_b_1141_);
lean_dec(v_a_1140_);
v_r_1143_ = lean_box(v_res_1142_);
return v_r_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object* v_g_1144_){
_start:
{
lean_object* v_namePrefix_1145_; lean_object* v_idx_1146_; lean_object* v___x_1147_; 
v_namePrefix_1145_ = lean_ctor_get(v_g_1144_, 0);
lean_inc(v_namePrefix_1145_);
v_idx_1146_ = lean_ctor_get(v_g_1144_, 1);
lean_inc(v_idx_1146_);
lean_dec_ref(v_g_1144_);
v___x_1147_ = l_Lean_Name_num___override(v_namePrefix_1145_, v_idx_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object* v_g_1148_){
_start:
{
lean_object* v_namePrefix_1149_; lean_object* v_idx_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1159_; 
v_namePrefix_1149_ = lean_ctor_get(v_g_1148_, 0);
v_idx_1150_ = lean_ctor_get(v_g_1148_, 1);
v_isSharedCheck_1159_ = !lean_is_exclusive(v_g_1148_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1152_ = v_g_1148_;
v_isShared_1153_ = v_isSharedCheck_1159_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_idx_1150_);
lean_inc(v_namePrefix_1149_);
lean_dec(v_g_1148_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1159_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_nat_add(v_idx_1150_, v___x_1154_);
lean_dec(v_idx_1150_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 1, v___x_1155_);
v___x_1157_ = v___x_1152_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_namePrefix_1149_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object* v_g_1160_){
_start:
{
lean_object* v_namePrefix_1161_; lean_object* v_idx_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1174_; 
v_namePrefix_1161_ = lean_ctor_get(v_g_1160_, 0);
v_idx_1162_ = lean_ctor_get(v_g_1160_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v_g_1160_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1164_ = v_g_1160_;
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_idx_1162_);
lean_inc(v_namePrefix_1161_);
lean_dec(v_g_1160_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
lean_inc(v_idx_1162_);
lean_inc(v_namePrefix_1161_);
v___x_1166_ = l_Lean_Name_num___override(v_namePrefix_1161_, v_idx_1162_);
v___x_1167_ = lean_unsigned_to_nat(1u);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v___x_1167_);
lean_ctor_set(v___x_1164_, 0, v___x_1166_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = lean_nat_add(v_idx_1162_, v___x_1167_);
lean_dec(v_idx_1162_);
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v_namePrefix_1161_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1169_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object* v_toPure_1175_, lean_object* v_r_1176_, lean_object* v_____r_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_apply_2(v_toPure_1175_, lean_box(0), v_r_1176_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object* v_toPure_1179_, lean_object* v_setNGen_1180_, lean_object* v_toBind_1181_, lean_object* v_ngen_1182_){
_start:
{
lean_object* v_namePrefix_1183_; lean_object* v_idx_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1197_; 
v_namePrefix_1183_ = lean_ctor_get(v_ngen_1182_, 0);
v_idx_1184_ = lean_ctor_get(v_ngen_1182_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_ngen_1182_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1186_ = v_ngen_1182_;
v_isShared_1187_ = v_isSharedCheck_1197_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_idx_1184_);
lean_inc(v_namePrefix_1183_);
lean_dec(v_ngen_1182_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1197_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v_r_1188_; lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
lean_inc(v_idx_1184_);
lean_inc(v_namePrefix_1183_);
v_r_1188_ = l_Lean_Name_num___override(v_namePrefix_1183_, v_idx_1184_);
v___f_1189_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1189_, 0, v_toPure_1179_);
lean_closure_set(v___f_1189_, 1, v_r_1188_);
v___x_1190_ = lean_unsigned_to_nat(1u);
v___x_1191_ = lean_nat_add(v_idx_1184_, v___x_1190_);
lean_dec(v_idx_1184_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 1, v___x_1191_);
v___x_1193_ = v___x_1186_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_namePrefix_1183_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_apply_1(v_setNGen_1180_, v___x_1193_);
v___x_1195_ = lean_apply_4(v_toBind_1181_, lean_box(0), lean_box(0), v___x_1194_, v___f_1189_);
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object* v_inst_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v_toApplicative_1200_; lean_object* v_toBind_1201_; lean_object* v_getNGen_1202_; lean_object* v_setNGen_1203_; lean_object* v_toPure_1204_; lean_object* v___f_1205_; lean_object* v___x_1206_; 
v_toApplicative_1200_ = lean_ctor_get(v_inst_1198_, 0);
lean_inc_ref(v_toApplicative_1200_);
v_toBind_1201_ = lean_ctor_get(v_inst_1198_, 1);
lean_inc_n(v_toBind_1201_, 2);
lean_dec_ref(v_inst_1198_);
v_getNGen_1202_ = lean_ctor_get(v_inst_1199_, 0);
lean_inc(v_getNGen_1202_);
v_setNGen_1203_ = lean_ctor_get(v_inst_1199_, 1);
lean_inc(v_setNGen_1203_);
lean_dec_ref(v_inst_1199_);
v_toPure_1204_ = lean_ctor_get(v_toApplicative_1200_, 1);
lean_inc(v_toPure_1204_);
lean_dec_ref(v_toApplicative_1200_);
v___f_1205_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1205_, 0, v_toPure_1204_);
lean_closure_set(v___f_1205_, 1, v_setNGen_1203_);
lean_closure_set(v___f_1205_, 2, v_toBind_1201_);
v___x_1206_ = lean_apply_4(v_toBind_1201_, lean_box(0), lean_box(0), v_getNGen_1202_, v___f_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object* v_m_1207_, lean_object* v_inst_1208_, lean_object* v_inst_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_mkFreshId___redArg(v_inst_1208_, v_inst_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object* v_setNGen_1211_, lean_object* v_inst_1212_, lean_object* v_ngen_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_apply_1(v_setNGen_1211_, v_ngen_1213_);
v___x_1215_ = lean_apply_2(v_inst_1212_, lean_box(0), v___x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object* v_inst_1216_, lean_object* v_inst_1217_){
_start:
{
lean_object* v_getNGen_1218_; lean_object* v_setNGen_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1228_; 
v_getNGen_1218_ = lean_ctor_get(v_inst_1217_, 0);
v_setNGen_1219_ = lean_ctor_get(v_inst_1217_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_inst_1217_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1221_ = v_inst_1217_;
v_isShared_1222_ = v_isSharedCheck_1228_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_setNGen_1219_);
lean_inc(v_getNGen_1218_);
lean_dec(v_inst_1217_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1228_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___f_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
lean_inc(v_inst_1216_);
v___f_1223_ = lean_alloc_closure((void*)(l_Lean_monadNameGeneratorLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1223_, 0, v_setNGen_1219_);
lean_closure_set(v___f_1223_, 1, v_inst_1216_);
v___x_1224_ = lean_apply_2(v_inst_1216_, lean_box(0), v_getNGen_1218_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 1, v___f_1223_);
lean_ctor_set(v___x_1221_, 0, v___x_1224_);
v___x_1226_ = v___x_1221_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v___f_1223_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object* v_m_1229_, lean_object* v_n_1230_, lean_object* v_inst_1231_, lean_object* v_inst_1232_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lean_monadNameGeneratorLift___redArg(v_inst_1231_, v_inst_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1234_, lean_object* v_x_1235_, lean_object* v_x_1236_){
_start:
{
if (lean_obj_tag(v_x_1236_) == 0)
{
lean_dec(v_x_1234_);
return v_x_1235_;
}
else
{
lean_object* v_head_1237_; lean_object* v_tail_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1249_; 
v_head_1237_ = lean_ctor_get(v_x_1236_, 0);
v_tail_1238_ = lean_ctor_get(v_x_1236_, 1);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_x_1236_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1240_ = v_x_1236_;
v_isShared_1241_ = v_isSharedCheck_1249_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_tail_1238_);
lean_inc(v_head_1237_);
lean_dec(v_x_1236_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1249_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
lean_inc(v_x_1234_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 5);
lean_ctor_set(v___x_1240_, 1, v_x_1234_);
lean_ctor_set(v___x_1240_, 0, v_x_1235_);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_x_1235_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_x_1234_);
v___x_1243_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1244_ = l_String_quote(v_head_1237_);
v___x_1245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1243_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v_x_1235_ = v___x_1246_;
v_x_1236_ = v_tail_1238_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object* v_x_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_){
_start:
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_dec(v_x_1250_);
return v_x_1251_;
}
else
{
lean_object* v_head_1253_; lean_object* v_tail_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1265_; 
v_head_1253_ = lean_ctor_get(v_x_1252_, 0);
v_tail_1254_ = lean_ctor_get(v_x_1252_, 1);
v_isSharedCheck_1265_ = !lean_is_exclusive(v_x_1252_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1256_ = v_x_1252_;
v_isShared_1257_ = v_isSharedCheck_1265_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_tail_1254_);
lean_inc(v_head_1253_);
lean_dec(v_x_1252_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1265_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
lean_inc(v_x_1250_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set_tag(v___x_1256_, 5);
lean_ctor_set(v___x_1256_, 1, v_x_1250_);
lean_ctor_set(v___x_1256_, 0, v_x_1251_);
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_x_1251_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_x_1250_);
v___x_1259_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1260_ = l_String_quote(v_head_1253_);
v___x_1261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1259_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(v_x_1250_, v___x_1262_, v_tail_1254_);
return v___x_1263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = l_String_quote(v___y_1266_);
v___x_1268_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object* v_x_1269_, lean_object* v_x_1270_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
lean_object* v___x_1271_; 
lean_dec(v_x_1270_);
v___x_1271_ = lean_box(0);
return v___x_1271_;
}
else
{
lean_object* v_tail_1272_; 
v_tail_1272_ = lean_ctor_get(v_x_1269_, 1);
if (lean_obj_tag(v_tail_1272_) == 0)
{
lean_object* v_head_1273_; lean_object* v___x_1274_; 
lean_dec(v_x_1270_);
v_head_1273_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_head_1273_);
lean_dec_ref_known(v_x_1269_, 2);
v___x_1274_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1273_);
return v___x_1274_;
}
else
{
lean_object* v_head_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_inc(v_tail_1272_);
v_head_1275_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_head_1275_);
lean_dec_ref_known(v_x_1269_, 2);
v___x_1276_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1275_);
v___x_1277_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(v_x_1270_, v___x_1276_, v_tail_1272_);
return v___x_1277_;
}
}
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2));
v___x_1290_ = lean_string_length(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7);
v___x_1292_ = lean_nat_to_int(v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object* v_a_1297_){
_start:
{
if (lean_obj_tag(v_a_1297_) == 0)
{
lean_object* v___x_1298_; 
v___x_1298_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1299_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1300_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(v_a_1297_, v___x_1299_);
v___x_1301_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1302_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
lean_ctor_set(v___x_1303_, 1, v___x_1300_);
v___x_1304_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1301_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = l_Std_Format_fill(v___x_1306_);
return v___x_1307_;
}
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_unsigned_to_nat(2u);
v___x_1315_ = lean_nat_to_int(v___x_1314_);
return v___x_1315_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = lean_unsigned_to_nat(1u);
v___x_1317_ = lean_nat_to_int(v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object* v_x_1324_, lean_object* v_prec_1325_){
_start:
{
if (lean_obj_tag(v_x_1324_) == 0)
{
lean_object* v_ns_1326_; lean_object* v___y_1328_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v_ns_1326_ = lean_ctor_get(v_x_1324_, 0);
lean_inc(v_ns_1326_);
lean_dec_ref_known(v_x_1324_, 1);
v___x_1337_ = lean_unsigned_to_nat(1024u);
v___x_1338_ = lean_nat_dec_le(v___x_1337_, v_prec_1325_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1328_ = v___x_1339_;
goto v___jp_1327_;
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1328_ = v___x_1340_;
goto v___jp_1327_;
}
v___jp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1329_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__2));
v___x_1330_ = lean_unsigned_to_nat(1024u);
v___x_1331_ = l_Lean_Name_reprPrec(v_ns_1326_, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1329_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
lean_inc(v___y_1328_);
v___x_1333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___y_1328_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = 0;
v___x_1335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set_uint8(v___x_1335_, sizeof(void*)*1, v___x_1334_);
v___x_1336_ = l_Repr_addAppParen(v___x_1335_, v_prec_1325_);
return v___x_1336_;
}
}
else
{
lean_object* v_n_1341_; lean_object* v_fields_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1366_; 
v_n_1341_ = lean_ctor_get(v_x_1324_, 0);
v_fields_1342_ = lean_ctor_get(v_x_1324_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_x_1324_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1344_ = v_x_1324_;
v_isShared_1345_ = v_isSharedCheck_1366_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_fields_1342_);
lean_inc(v_n_1341_);
lean_dec(v_x_1324_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1366_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___y_1347_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1362_ = lean_unsigned_to_nat(1024u);
v___x_1363_ = lean_nat_dec_le(v___x_1362_, v_prec_1325_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1347_ = v___x_1364_;
goto v___jp_1346_;
}
else
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1347_ = v___x_1365_;
goto v___jp_1346_;
}
v___jp_1346_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1348_ = lean_box(1);
v___x_1349_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__7));
v___x_1350_ = lean_unsigned_to_nat(1024u);
v___x_1351_ = l_Lean_Name_reprPrec(v_n_1341_, v___x_1350_);
if (v_isShared_1345_ == 0)
{
lean_ctor_set_tag(v___x_1344_, 5);
lean_ctor_set(v___x_1344_, 1, v___x_1351_);
lean_ctor_set(v___x_1344_, 0, v___x_1349_);
v___x_1353_ = v___x_1344_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v___x_1348_);
v___x_1355_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_fields_1342_);
v___x_1356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
lean_inc(v___y_1347_);
v___x_1357_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___y_1347_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = 0;
v___x_1359_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1359_, 0, v___x_1357_);
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*1, v___x_1358_);
v___x_1360_ = l_Repr_addAppParen(v___x_1359_, v_prec_1325_);
return v___x_1360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object* v_x_1367_, lean_object* v_prec_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lean_Syntax_instReprPreresolved_repr(v_x_1367_, v_prec_1368_);
lean_dec(v_prec_1368_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object* v_a_1370_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_nat_to_int(v_a_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object* v_a_1372_, lean_object* v_n_1373_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_a_1372_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object* v_a_1375_, lean_object* v_n_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(v_a_1375_, v_n_1376_);
lean_dec(v_n_1376_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = l_Lean_Syntax_instReprPreresolved_repr(v___y_1380_, v___x_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_1383_, lean_object* v_x_1384_, lean_object* v_x_1385_){
_start:
{
if (lean_obj_tag(v_x_1385_) == 0)
{
lean_dec(v_x_1383_);
return v_x_1384_;
}
else
{
lean_object* v_head_1386_; lean_object* v_tail_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1398_; 
v_head_1386_ = lean_ctor_get(v_x_1385_, 0);
v_tail_1387_ = lean_ctor_get(v_x_1385_, 1);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_x_1385_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1389_ = v_x_1385_;
v_isShared_1390_ = v_isSharedCheck_1398_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_tail_1387_);
lean_inc(v_head_1386_);
lean_dec(v_x_1385_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1398_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
lean_inc(v_x_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set_tag(v___x_1389_, 5);
lean_ctor_set(v___x_1389_, 1, v_x_1383_);
lean_ctor_set(v___x_1389_, 0, v_x_1384_);
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_x_1384_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v_x_1383_);
v___x_1392_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1393_ = lean_unsigned_to_nat(0u);
v___x_1394_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1386_, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1392_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v_x_1384_ = v___x_1395_;
v_x_1385_ = v_tail_1387_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object* v_x_1399_, lean_object* v_x_1400_, lean_object* v_x_1401_){
_start:
{
if (lean_obj_tag(v_x_1401_) == 0)
{
lean_dec(v_x_1399_);
return v_x_1400_;
}
else
{
lean_object* v_head_1402_; lean_object* v_tail_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1414_; 
v_head_1402_ = lean_ctor_get(v_x_1401_, 0);
v_tail_1403_ = lean_ctor_get(v_x_1401_, 1);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_x_1401_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1405_ = v_x_1401_;
v_isShared_1406_ = v_isSharedCheck_1414_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_tail_1403_);
lean_inc(v_head_1402_);
lean_dec(v_x_1401_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1414_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
lean_inc(v_x_1399_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 5);
lean_ctor_set(v___x_1405_, 1, v_x_1399_);
lean_ctor_set(v___x_1405_, 0, v_x_1400_);
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_x_1400_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_x_1399_);
v___x_1408_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1402_, v___x_1409_);
v___x_1411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1408_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(v_x_1399_, v___x_1411_, v_tail_1403_);
return v___x_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object* v_x_1415_, lean_object* v_x_1416_){
_start:
{
if (lean_obj_tag(v_x_1415_) == 0)
{
lean_object* v___x_1417_; 
lean_dec(v_x_1416_);
v___x_1417_ = lean_box(0);
return v___x_1417_;
}
else
{
lean_object* v_tail_1418_; 
v_tail_1418_ = lean_ctor_get(v_x_1415_, 1);
if (lean_obj_tag(v_tail_1418_) == 0)
{
lean_object* v_head_1419_; lean_object* v___x_1420_; 
lean_dec(v_x_1416_);
v_head_1419_ = lean_ctor_get(v_x_1415_, 0);
lean_inc(v_head_1419_);
lean_dec_ref_known(v_x_1415_, 2);
v___x_1420_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1419_);
return v___x_1420_;
}
else
{
lean_object* v_head_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_inc(v_tail_1418_);
v_head_1421_ = lean_ctor_get(v_x_1415_, 0);
lean_inc(v_head_1421_);
lean_dec_ref_known(v_x_1415_, 2);
v___x_1422_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1421_);
v___x_1423_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(v_x_1416_, v___x_1422_, v_tail_1418_);
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object* v_a_1424_){
_start:
{
if (lean_obj_tag(v_a_1424_) == 0)
{
lean_object* v___x_1425_; 
v___x_1425_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1425_;
}
else
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; lean_object* v___x_1435_; 
v___x_1426_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1427_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(v_a_1424_, v___x_1426_);
v___x_1428_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1429_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
lean_ctor_set(v___x_1430_, 1, v___x_1427_);
v___x_1431_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1430_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
v___x_1433_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1428_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = 0;
v___x_1435_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*1, v___x_1434_);
return v___x_1435_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_){
_start:
{
if (lean_obj_tag(v_x_1447_) == 0)
{
lean_dec(v_x_1445_);
return v_x_1446_;
}
else
{
lean_object* v_head_1448_; lean_object* v_tail_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1460_; 
v_head_1448_ = lean_ctor_get(v_x_1447_, 0);
v_tail_1449_ = lean_ctor_get(v_x_1447_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_x_1447_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1451_ = v_x_1447_;
v_isShared_1452_ = v_isSharedCheck_1460_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_tail_1449_);
lean_inc(v_head_1448_);
lean_dec(v_x_1447_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1460_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
lean_inc(v_x_1445_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set_tag(v___x_1451_, 5);
lean_ctor_set(v___x_1451_, 1, v_x_1445_);
lean_ctor_set(v___x_1451_, 0, v_x_1446_);
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_x_1446_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_x_1445_);
v___x_1454_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = lean_unsigned_to_nat(0u);
v___x_1456_ = l_Lean_Syntax_instRepr_repr(v_head_1448_, v___x_1455_);
v___x_1457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1454_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
v_x_1446_ = v___x_1457_;
v_x_1447_ = v_tail_1449_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v_x_1463_){
_start:
{
if (lean_obj_tag(v_x_1463_) == 0)
{
lean_dec(v_x_1461_);
return v_x_1462_;
}
else
{
lean_object* v_head_1464_; lean_object* v_tail_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1476_; 
v_head_1464_ = lean_ctor_get(v_x_1463_, 0);
v_tail_1465_ = lean_ctor_get(v_x_1463_, 1);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_x_1463_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1467_ = v_x_1463_;
v_isShared_1468_ = v_isSharedCheck_1476_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_tail_1465_);
lean_inc(v_head_1464_);
lean_dec(v_x_1463_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1476_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
lean_inc(v_x_1461_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set_tag(v___x_1467_, 5);
lean_ctor_set(v___x_1467_, 1, v_x_1461_);
lean_ctor_set(v___x_1467_, 0, v_x_1462_);
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_x_1462_);
lean_ctor_set(v_reuseFailAlloc_1475_, 1, v_x_1461_);
v___x_1470_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1471_ = lean_unsigned_to_nat(0u);
v___x_1472_ = l_Lean_Syntax_instRepr_repr(v_head_1464_, v___x_1471_);
v___x_1473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1470_);
lean_ctor_set(v___x_1473_, 1, v___x_1472_);
v___x_1474_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(v_x_1461_, v___x_1473_, v_tail_1465_);
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object* v_x_1477_, lean_object* v_x_1478_){
_start:
{
if (lean_obj_tag(v_x_1477_) == 0)
{
lean_object* v___x_1479_; 
lean_dec(v_x_1478_);
v___x_1479_ = lean_box(0);
return v___x_1479_;
}
else
{
lean_object* v_tail_1480_; 
v_tail_1480_ = lean_ctor_get(v_x_1477_, 1);
if (lean_obj_tag(v_tail_1480_) == 0)
{
lean_object* v_head_1481_; lean_object* v___x_1482_; 
lean_dec(v_x_1478_);
v_head_1481_ = lean_ctor_get(v_x_1477_, 0);
lean_inc(v_head_1481_);
lean_dec_ref_known(v_x_1477_, 2);
v___x_1482_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1481_);
return v___x_1482_;
}
else
{
lean_object* v_head_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_inc(v_tail_1480_);
v_head_1483_ = lean_ctor_get(v_x_1477_, 0);
lean_inc(v_head_1483_);
lean_dec_ref_known(v_x_1477_, 2);
v___x_1484_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1483_);
v___x_1485_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(v_x_1478_, v___x_1484_, v_tail_1480_);
return v___x_1485_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0));
v___x_1488_ = lean_string_length(v___x_1487_);
return v___x_1488_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1);
v___x_1490_ = lean_nat_to_int(v___x_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object* v_xs_1496_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v___x_1497_ = lean_array_get_size(v_xs_1496_);
v___x_1498_ = lean_unsigned_to_nat(0u);
v___x_1499_ = lean_nat_dec_eq(v___x_1497_, v___x_1498_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1500_ = lean_array_to_list(v_xs_1496_);
v___x_1501_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1502_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(v___x_1500_, v___x_1501_);
v___x_1503_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2);
v___x_1504_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3));
v___x_1505_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
lean_ctor_set(v___x_1505_, 1, v___x_1502_);
v___x_1506_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1507_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1503_);
lean_ctor_set(v___x_1508_, 1, v___x_1507_);
v___x_1509_ = l_Std_Format_fill(v___x_1508_);
return v___x_1509_;
}
else
{
lean_object* v___x_1510_; 
lean_dec_ref(v_xs_1496_);
v___x_1510_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5));
return v___x_1510_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object* v_x_1524_, lean_object* v_prec_1525_){
_start:
{
lean_object* v___y_1527_; 
switch(lean_obj_tag(v_x_1524_))
{
case 0:
{
lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = lean_unsigned_to_nat(1024u);
v___x_1534_ = lean_nat_dec_le(v___x_1533_, v_prec_1525_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1527_ = v___x_1535_;
goto v___jp_1526_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1527_ = v___x_1536_;
goto v___jp_1526_;
}
}
case 1:
{
lean_object* v_info_1537_; lean_object* v_kind_1538_; lean_object* v_args_1539_; lean_object* v___y_1541_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v_info_1537_ = lean_ctor_get(v_x_1524_, 0);
lean_inc(v_info_1537_);
v_kind_1538_ = lean_ctor_get(v_x_1524_, 1);
lean_inc(v_kind_1538_);
v_args_1539_ = lean_ctor_get(v_x_1524_, 2);
lean_inc_ref(v_args_1539_);
lean_dec_ref_known(v_x_1524_, 3);
v___x_1557_ = lean_unsigned_to_nat(1024u);
v___x_1558_ = lean_nat_dec_le(v___x_1557_, v_prec_1525_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1541_ = v___x_1559_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1541_ = v___x_1560_;
goto v___jp_1540_;
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1542_ = lean_box(1);
v___x_1543_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__4));
v___x_1544_ = lean_unsigned_to_nat(1024u);
v___x_1545_ = l_instReprSourceInfo_repr(v_info_1537_, v___x_1544_);
v___x_1546_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1543_);
lean_ctor_set(v___x_1546_, 1, v___x_1545_);
v___x_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
lean_ctor_set(v___x_1547_, 1, v___x_1542_);
v___x_1548_ = l_Lean_Name_reprPrec(v_kind_1538_, v___x_1544_);
v___x_1549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
lean_ctor_set(v___x_1550_, 1, v___x_1542_);
v___x_1551_ = l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(v_args_1539_);
v___x_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
lean_inc(v___y_1541_);
v___x_1553_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___y_1541_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = 0;
v___x_1555_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set_uint8(v___x_1555_, sizeof(void*)*1, v___x_1554_);
v___x_1556_ = l_Repr_addAppParen(v___x_1555_, v_prec_1525_);
return v___x_1556_;
}
}
case 2:
{
lean_object* v_info_1561_; lean_object* v_val_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1587_; 
v_info_1561_ = lean_ctor_get(v_x_1524_, 0);
v_val_1562_ = lean_ctor_get(v_x_1524_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_x_1524_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1564_ = v_x_1524_;
v_isShared_1565_ = v_isSharedCheck_1587_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_val_1562_);
lean_inc(v_info_1561_);
lean_dec(v_x_1524_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1587_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___y_1567_; lean_object* v___x_1583_; uint8_t v___x_1584_; 
v___x_1583_ = lean_unsigned_to_nat(1024u);
v___x_1584_ = lean_nat_dec_le(v___x_1583_, v_prec_1525_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1567_ = v___x_1585_;
goto v___jp_1566_;
}
else
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1567_ = v___x_1586_;
goto v___jp_1566_;
}
v___jp_1566_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1573_; 
v___x_1568_ = lean_box(1);
v___x_1569_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__7));
v___x_1570_ = lean_unsigned_to_nat(1024u);
v___x_1571_ = l_instReprSourceInfo_repr(v_info_1561_, v___x_1570_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 5);
lean_ctor_set(v___x_1564_, 1, v___x_1571_);
lean_ctor_set(v___x_1564_, 0, v___x_1569_);
v___x_1573_ = v___x_1564_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v___x_1571_);
v___x_1573_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___x_1568_);
v___x_1575_ = l_String_quote(v_val_1562_);
v___x_1576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
v___x_1577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1574_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
lean_inc(v___y_1567_);
v___x_1578_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___y_1567_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = 0;
v___x_1580_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set_uint8(v___x_1580_, sizeof(void*)*1, v___x_1579_);
v___x_1581_ = l_Repr_addAppParen(v___x_1580_, v_prec_1525_);
return v___x_1581_;
}
}
}
}
default: 
{
lean_object* v_info_1588_; lean_object* v_rawVal_1589_; lean_object* v_val_1590_; lean_object* v_preresolved_1591_; lean_object* v___y_1593_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v_info_1588_ = lean_ctor_get(v_x_1524_, 0);
lean_inc(v_info_1588_);
v_rawVal_1589_ = lean_ctor_get(v_x_1524_, 1);
lean_inc_ref(v_rawVal_1589_);
v_val_1590_ = lean_ctor_get(v_x_1524_, 2);
lean_inc(v_val_1590_);
v_preresolved_1591_ = lean_ctor_get(v_x_1524_, 3);
lean_inc(v_preresolved_1591_);
lean_dec_ref_known(v_x_1524_, 4);
v___x_1616_ = lean_unsigned_to_nat(1024u);
v___x_1617_ = lean_nat_dec_le(v___x_1616_, v_prec_1525_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1593_ = v___x_1618_;
goto v___jp_1592_;
}
else
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1593_ = v___x_1619_;
goto v___jp_1592_;
}
v___jp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1594_ = lean_box(1);
v___x_1595_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__10));
v___x_1596_ = lean_unsigned_to_nat(1024u);
v___x_1597_ = l_instReprSourceInfo_repr(v_info_1588_, v___x_1596_);
v___x_1598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1595_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
lean_ctor_set(v___x_1599_, 1, v___x_1594_);
v___x_1600_ = lean_substring_tostring(v_rawVal_1589_);
v___x_1601_ = l_String_quote(v___x_1600_);
v___x_1602_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__11));
v___x_1603_ = lean_string_append(v___x_1601_, v___x_1602_);
v___x_1604_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
v___x_1605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1599_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v___x_1606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
lean_ctor_set(v___x_1606_, 1, v___x_1594_);
v___x_1607_ = l_Lean_Name_reprPrec(v_val_1590_, v___x_1596_);
v___x_1608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
lean_ctor_set(v___x_1609_, 1, v___x_1594_);
v___x_1610_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_preresolved_1591_);
v___x_1611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
lean_inc(v___y_1593_);
v___x_1612_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___y_1593_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = 0;
v___x_1614_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*1, v___x_1613_);
v___x_1615_ = l_Repr_addAppParen(v___x_1614_, v_prec_1525_);
return v___x_1615_;
}
}
}
v___jp_1526_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1528_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__1));
lean_inc(v___y_1527_);
v___x_1529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___y_1527_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = 0;
v___x_1531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set_uint8(v___x_1531_, sizeof(void*)*1, v___x_1530_);
v___x_1532_ = l_Repr_addAppParen(v___x_1531_, v_prec_1525_);
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object* v___y_1620_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = lean_unsigned_to_nat(0u);
v___x_1622_ = l_Lean_Syntax_instRepr_repr(v___y_1620_, v___x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object* v_x_1623_, lean_object* v_prec_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lean_Syntax_instRepr_repr(v_x_1623_, v_prec_1624_);
lean_dec(v_prec_1624_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object* v_a_1626_, lean_object* v_n_1627_){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_a_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object* v_a_1629_, lean_object* v_n_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(v_a_1629_, v_n_1630_);
lean_dec(v_n_1630_);
return v_res_1631_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_unsigned_to_nat(7u);
v___x_1648_ = lean_nat_to_int(v___x_1647_);
return v___x_1648_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0));
v___x_1651_ = lean_string_length(v___x_1650_);
return v___x_1651_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9);
v___x_1653_ = lean_nat_to_int(v___x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object* v_x_1658_){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1659_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6));
v___x_1660_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = l_Lean_Syntax_instRepr_repr(v_x_1658_, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1660_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = 0;
v___x_1665_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set_uint8(v___x_1665_, sizeof(void*)*1, v___x_1664_);
v___x_1666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1659_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_1668_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_1669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
lean_ctor_set(v___x_1669_, 1, v___x_1666_);
v___x_1670_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_1671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1667_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
lean_ctor_set_uint8(v___x_1673_, sizeof(void*)*1, v___x_1664_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object* v_ks_1674_, lean_object* v_x_1675_, lean_object* v_prec_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_x_1675_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object* v_ks_1678_, lean_object* v_x_1679_, lean_object* v_prec_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lean_Syntax_instReprTSyntax_repr(v_ks_1678_, v_x_1679_, v_prec_1680_);
lean_dec(v_prec_1680_);
lean_dec(v_ks_1678_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object* v_ks_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_alloc_closure((void*)(l_Lean_Syntax_instReprTSyntax_repr___boxed), 3, 1);
lean_closure_set(v___x_1683_, 0, v_ks_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_stx_1684_){
_start:
{
lean_inc(v_stx_1684_);
return v_stx_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object* v_stx_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(v_stx_1685_);
lean_dec(v_stx_1685_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg(){
_start:
{
lean_object* v___f_1689_; 
v___f_1689_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object* v___dummy_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object* v_k_1692_, lean_object* v_ks_1693_){
_start:
{
lean_object* v___f_1694_; 
v___f_1694_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object* v_k_1695_, lean_object* v_ks_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(v_k_1695_, v_ks_1696_);
lean_dec(v_ks_1696_);
lean_dec(v_k_1695_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg(){
_start:
{
lean_object* v___f_1699_; 
v___f_1699_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object* v___dummy_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object* v_ks_1702_, lean_object* v_k_x27_1703_){
_start:
{
lean_object* v___f_1704_; 
v___f_1704_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object* v_ks_1705_, lean_object* v_k_x27_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind(v_ks_1705_, v_k_x27_1706_);
lean_dec(v_k_x27_1706_);
lean_dec(v_ks_1705_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object* v_s_1708_){
_start:
{
lean_inc(v_s_1708_);
return v_s_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object* v_s_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_TSyntax_instCoeIdentTerm___lam__0(v_s_1709_);
lean_dec(v_s_1709_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object* v_info_1713_, lean_object* v_ss_1714_, lean_object* v_n_1715_, lean_object* v_res_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1717_, 0, v_info_1713_);
lean_ctor_set(v___x_1717_, 1, v_ss_1714_);
lean_ctor_set(v___x_1717_, 2, v_n_1715_);
lean_ctor_set(v___x_1717_, 3, v_res_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg(){
_start:
{
lean_object* v___f_1727_; 
v___f_1727_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object* v___dummy_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object* v_k_1730_){
_start:
{
lean_object* v___f_1731_; 
v___f_1731_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object* v_k_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lean_TSyntax_Compat_instCoeTailSyntax(v_k_1732_);
lean_dec(v_k_1732_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object* v_k_1734_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_closure((void*)(l_Lean_TSyntaxArray_mkImpl___boxed), 2, 1);
lean_closure_set(v___x_1735_, 0, v_k_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object* v_x_1736_, lean_object* v_x_1737_){
_start:
{
if (lean_obj_tag(v_x_1736_) == 0)
{
if (lean_obj_tag(v_x_1737_) == 0)
{
uint8_t v___x_1738_; 
v___x_1738_ = 1;
return v___x_1738_;
}
else
{
uint8_t v___x_1739_; 
v___x_1739_ = 0;
return v___x_1739_;
}
}
else
{
if (lean_obj_tag(v_x_1737_) == 0)
{
uint8_t v___x_1740_; 
v___x_1740_ = 0;
return v___x_1740_;
}
else
{
lean_object* v_head_1741_; lean_object* v_tail_1742_; lean_object* v_head_1743_; lean_object* v_tail_1744_; uint8_t v___x_1745_; 
v_head_1741_ = lean_ctor_get(v_x_1736_, 0);
v_tail_1742_ = lean_ctor_get(v_x_1736_, 1);
v_head_1743_ = lean_ctor_get(v_x_1737_, 0);
v_tail_1744_ = lean_ctor_get(v_x_1737_, 1);
v___x_1745_ = lean_string_dec_eq(v_head_1741_, v_head_1743_);
if (v___x_1745_ == 0)
{
return v___x_1745_;
}
else
{
v_x_1736_ = v_tail_1742_;
v_x_1737_ = v_tail_1744_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object* v_x_1747_, lean_object* v_x_1748_){
_start:
{
uint8_t v_res_1749_; lean_object* v_r_1750_; 
v_res_1749_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_x_1747_, v_x_1748_);
lean_dec(v_x_1748_);
lean_dec(v_x_1747_);
v_r_1750_ = lean_box(v_res_1749_);
return v_r_1750_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object* v_x_1751_, lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1751_) == 0)
{
if (lean_obj_tag(v_x_1752_) == 0)
{
lean_object* v_ns_1753_; lean_object* v_ns_1754_; uint8_t v___x_1755_; 
v_ns_1753_ = lean_ctor_get(v_x_1751_, 0);
v_ns_1754_ = lean_ctor_get(v_x_1752_, 0);
v___x_1755_ = lean_name_eq(v_ns_1753_, v_ns_1754_);
return v___x_1755_;
}
else
{
uint8_t v___x_1756_; 
v___x_1756_ = 0;
return v___x_1756_;
}
}
else
{
if (lean_obj_tag(v_x_1752_) == 1)
{
lean_object* v_n_1757_; lean_object* v_fields_1758_; lean_object* v_n_1759_; lean_object* v_fields_1760_; uint8_t v___x_1761_; 
v_n_1757_ = lean_ctor_get(v_x_1751_, 0);
v_fields_1758_ = lean_ctor_get(v_x_1751_, 1);
v_n_1759_ = lean_ctor_get(v_x_1752_, 0);
v_fields_1760_ = lean_ctor_get(v_x_1752_, 1);
v___x_1761_ = lean_name_eq(v_n_1757_, v_n_1759_);
if (v___x_1761_ == 0)
{
return v___x_1761_;
}
else
{
uint8_t v___x_1762_; 
v___x_1762_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_fields_1758_, v_fields_1760_);
return v___x_1762_;
}
}
else
{
uint8_t v___x_1763_; 
v___x_1763_ = 0;
return v___x_1763_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object* v_x_1764_, lean_object* v_x_1765_){
_start:
{
uint8_t v_res_1766_; lean_object* v_r_1767_; 
v_res_1766_ = l_Lean_Syntax_instBEqPreresolved_beq(v_x_1764_, v_x_1765_);
lean_dec_ref(v_x_1765_);
lean_dec_ref(v_x_1764_);
v_r_1767_ = lean_box(v_res_1766_);
return v_r_1767_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object* v_x_1770_, lean_object* v_x_1771_){
_start:
{
if (lean_obj_tag(v_x_1770_) == 0)
{
if (lean_obj_tag(v_x_1771_) == 0)
{
uint8_t v___x_1772_; 
v___x_1772_ = 1;
return v___x_1772_;
}
else
{
uint8_t v___x_1773_; 
v___x_1773_ = 0;
return v___x_1773_;
}
}
else
{
if (lean_obj_tag(v_x_1771_) == 0)
{
uint8_t v___x_1774_; 
v___x_1774_ = 0;
return v___x_1774_;
}
else
{
lean_object* v_head_1775_; lean_object* v_tail_1776_; lean_object* v_head_1777_; lean_object* v_tail_1778_; uint8_t v___x_1779_; 
v_head_1775_ = lean_ctor_get(v_x_1770_, 0);
v_tail_1776_ = lean_ctor_get(v_x_1770_, 1);
v_head_1777_ = lean_ctor_get(v_x_1771_, 0);
v_tail_1778_ = lean_ctor_get(v_x_1771_, 1);
v___x_1779_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_1775_, v_head_1777_);
if (v___x_1779_ == 0)
{
return v___x_1779_;
}
else
{
v_x_1770_ = v_tail_1776_;
v_x_1771_ = v_tail_1778_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object* v_x_1781_, lean_object* v_x_1782_){
_start:
{
uint8_t v_res_1783_; lean_object* v_r_1784_; 
v_res_1783_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_x_1781_, v_x_1782_);
lean_dec(v_x_1782_);
lean_dec(v_x_1781_);
v_r_1784_ = lean_box(v_res_1783_);
return v_r_1784_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object* v_x_1785_, lean_object* v_x_1786_){
_start:
{
switch(lean_obj_tag(v_x_1785_))
{
case 0:
{
if (lean_obj_tag(v_x_1786_) == 0)
{
uint8_t v___x_1787_; 
v___x_1787_ = 1;
return v___x_1787_;
}
else
{
uint8_t v___x_1788_; 
v___x_1788_ = 0;
return v___x_1788_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1786_) == 1)
{
lean_object* v_kind_1789_; lean_object* v_args_1790_; lean_object* v_kind_1791_; lean_object* v_args_1792_; uint8_t v___x_1793_; 
v_kind_1789_ = lean_ctor_get(v_x_1785_, 1);
v_args_1790_ = lean_ctor_get(v_x_1785_, 2);
v_kind_1791_ = lean_ctor_get(v_x_1786_, 1);
v_args_1792_ = lean_ctor_get(v_x_1786_, 2);
v___x_1793_ = lean_name_eq(v_kind_1789_, v_kind_1791_);
if (v___x_1793_ == 0)
{
return v___x_1793_;
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1794_ = lean_array_get_size(v_args_1790_);
v___x_1795_ = lean_array_get_size(v_args_1792_);
v___x_1796_ = lean_nat_dec_eq(v___x_1794_, v___x_1795_);
if (v___x_1796_ == 0)
{
return v___x_1796_;
}
else
{
uint8_t v___x_1797_; 
v___x_1797_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_args_1790_, v_args_1792_, v___x_1794_);
return v___x_1797_;
}
}
}
else
{
uint8_t v___x_1798_; 
v___x_1798_ = 0;
return v___x_1798_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1786_) == 2)
{
lean_object* v_val_1799_; lean_object* v_val_1800_; uint8_t v___x_1801_; 
v_val_1799_ = lean_ctor_get(v_x_1785_, 1);
v_val_1800_ = lean_ctor_get(v_x_1786_, 1);
v___x_1801_ = lean_string_dec_eq(v_val_1799_, v_val_1800_);
return v___x_1801_;
}
else
{
uint8_t v___x_1802_; 
v___x_1802_ = 0;
return v___x_1802_;
}
}
default: 
{
if (lean_obj_tag(v_x_1786_) == 3)
{
lean_object* v_rawVal_1803_; lean_object* v_val_1804_; lean_object* v_preresolved_1805_; lean_object* v_rawVal_1806_; lean_object* v_val_1807_; lean_object* v_preresolved_1808_; uint8_t v___y_1810_; uint8_t v___x_1812_; 
v_rawVal_1803_ = lean_ctor_get(v_x_1785_, 1);
v_val_1804_ = lean_ctor_get(v_x_1785_, 2);
v_preresolved_1805_ = lean_ctor_get(v_x_1785_, 3);
v_rawVal_1806_ = lean_ctor_get(v_x_1786_, 1);
v_val_1807_ = lean_ctor_get(v_x_1786_, 2);
v_preresolved_1808_ = lean_ctor_get(v_x_1786_, 3);
lean_inc_ref(v_rawVal_1806_);
lean_inc_ref(v_rawVal_1803_);
v___x_1812_ = lean_substring_beq(v_rawVal_1803_, v_rawVal_1806_);
if (v___x_1812_ == 0)
{
v___y_1810_ = v___x_1812_;
goto v___jp_1809_;
}
else
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_name_eq(v_val_1804_, v_val_1807_);
v___y_1810_ = v___x_1813_;
goto v___jp_1809_;
}
v___jp_1809_:
{
if (v___y_1810_ == 0)
{
return v___y_1810_;
}
else
{
uint8_t v___x_1811_; 
v___x_1811_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_preresolved_1805_, v_preresolved_1808_);
return v___x_1811_;
}
}
}
else
{
uint8_t v___x_1814_; 
v___x_1814_ = 0;
return v___x_1814_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object* v_xs_1815_, lean_object* v_ys_1816_, lean_object* v_x_1817_){
_start:
{
lean_object* v_zero_1818_; uint8_t v_isZero_1819_; 
v_zero_1818_ = lean_unsigned_to_nat(0u);
v_isZero_1819_ = lean_nat_dec_eq(v_x_1817_, v_zero_1818_);
if (v_isZero_1819_ == 1)
{
lean_dec(v_x_1817_);
return v_isZero_1819_;
}
else
{
lean_object* v_one_1820_; lean_object* v_n_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; 
v_one_1820_ = lean_unsigned_to_nat(1u);
v_n_1821_ = lean_nat_sub(v_x_1817_, v_one_1820_);
lean_dec(v_x_1817_);
v___x_1822_ = lean_array_fget_borrowed(v_xs_1815_, v_n_1821_);
v___x_1823_ = lean_array_fget_borrowed(v_ys_1816_, v_n_1821_);
v___x_1824_ = l_Lean_Syntax_structEq(v___x_1822_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_dec(v_n_1821_);
return v___x_1824_;
}
else
{
v_x_1817_ = v_n_1821_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object* v_xs_1826_, lean_object* v_ys_1827_, lean_object* v_x_1828_){
_start:
{
uint8_t v_res_1829_; lean_object* v_r_1830_; 
v_res_1829_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1826_, v_ys_1827_, v_x_1828_);
lean_dec_ref(v_ys_1827_);
lean_dec_ref(v_xs_1826_);
v_r_1830_ = lean_box(v_res_1829_);
return v_r_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object* v_x_1831_, lean_object* v_x_1832_){
_start:
{
uint8_t v_res_1833_; lean_object* v_r_1834_; 
v_res_1833_ = l_Lean_Syntax_structEq(v_x_1831_, v_x_1832_);
lean_dec(v_x_1832_);
lean_dec(v_x_1831_);
v_r_1834_ = lean_box(v_res_1833_);
return v_r_1834_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object* v_xs_1835_, lean_object* v_ys_1836_, lean_object* v_hsz_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_){
_start:
{
uint8_t v___x_1840_; 
v___x_1840_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1835_, v_ys_1836_, v_x_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object* v_xs_1841_, lean_object* v_ys_1842_, lean_object* v_hsz_1843_, lean_object* v_x_1844_, lean_object* v_x_1845_){
_start:
{
uint8_t v_res_1846_; lean_object* v_r_1847_; 
v_res_1846_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(v_xs_1841_, v_ys_1842_, v_hsz_1843_, v_x_1844_, v_x_1845_);
lean_dec_ref(v_ys_1842_);
lean_dec_ref(v_xs_1841_);
v_r_1847_ = lean_box(v_res_1846_);
return v_r_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg(){
_start:
{
lean_object* v___f_1852_; 
v___f_1852_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object* v___dummy_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lean_Syntax_instBEqTSyntax___redArg();
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object* v_k_1855_){
_start:
{
lean_object* v___f_1856_; 
v___f_1856_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object* v_k_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_Syntax_instBEqTSyntax(v_k_1857_);
lean_dec(v_k_1857_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object* v_as_1859_, lean_object* v_i_1860_){
_start:
{
lean_object* v_zero_1861_; uint8_t v_isZero_1862_; 
v_zero_1861_ = lean_unsigned_to_nat(0u);
v_isZero_1862_ = lean_nat_dec_eq(v_i_1860_, v_zero_1861_);
if (v_isZero_1862_ == 1)
{
lean_object* v___x_1863_; 
lean_dec(v_i_1860_);
v___x_1863_ = lean_box(0);
return v___x_1863_;
}
else
{
lean_object* v_one_1864_; lean_object* v_n_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_one_1864_ = lean_unsigned_to_nat(1u);
v_n_1865_ = lean_nat_sub(v_i_1860_, v_one_1864_);
lean_dec(v_i_1860_);
v___x_1866_ = lean_array_fget_borrowed(v_as_1859_, v_n_1865_);
v___x_1867_ = l_Lean_Syntax_getTailInfo_x3f(v___x_1866_);
if (lean_obj_tag(v___x_1867_) == 0)
{
v_i_1860_ = v_n_1865_;
goto _start;
}
else
{
lean_dec(v_n_1865_);
return v___x_1867_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object* v_x_1869_){
_start:
{
switch(lean_obj_tag(v_x_1869_))
{
case 2:
{
lean_object* v_info_1870_; lean_object* v___x_1871_; 
v_info_1870_ = lean_ctor_get(v_x_1869_, 0);
lean_inc(v_info_1870_);
v___x_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_info_1870_);
return v___x_1871_;
}
case 3:
{
lean_object* v_info_1872_; lean_object* v___x_1873_; 
v_info_1872_ = lean_ctor_get(v_x_1869_, 0);
lean_inc(v_info_1872_);
v___x_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1873_, 0, v_info_1872_);
return v___x_1873_;
}
case 1:
{
lean_object* v_info_1874_; 
v_info_1874_ = lean_ctor_get(v_x_1869_, 0);
if (lean_obj_tag(v_info_1874_) == 2)
{
lean_object* v_args_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v_args_1875_ = lean_ctor_get(v_x_1869_, 2);
v___x_1876_ = lean_array_get_size(v_args_1875_);
v___x_1877_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_args_1875_, v___x_1876_);
return v___x_1877_;
}
else
{
lean_object* v___x_1878_; 
lean_inc(v_info_1874_);
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v_info_1874_);
return v___x_1878_;
}
}
default: 
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_box(0);
return v___x_1879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object* v_x_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_Syntax_getTailInfo_x3f(v_x_1880_);
lean_dec(v_x_1880_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object* v_as_1882_, lean_object* v_i_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1882_, v_i_1883_);
lean_dec_ref(v_as_1882_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object* v_as_1885_, lean_object* v_i_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1885_, v_i_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object* v_as_1889_, lean_object* v_i_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(v_as_1889_, v_i_1890_, v_a_1891_);
lean_dec_ref(v_as_1889_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object* v_stx_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1893_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v___x_1895_; 
v___x_1895_ = lean_box(2);
return v___x_1895_;
}
else
{
lean_object* v_val_1896_; 
v_val_1896_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v___x_1894_, 1);
return v_val_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object* v_stx_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lean_Syntax_getTailInfo(v_stx_1897_);
lean_dec(v_stx_1897_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object* v_stx_1899_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1899_);
if (lean_obj_tag(v___x_1900_) == 1)
{
lean_object* v_val_1901_; 
v_val_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_val_1901_);
lean_dec_ref_known(v___x_1900_, 1);
if (lean_obj_tag(v_val_1901_) == 0)
{
lean_object* v_trailing_1902_; lean_object* v_startPos_1903_; lean_object* v_stopPos_1904_; lean_object* v___x_1905_; 
v_trailing_1902_ = lean_ctor_get(v_val_1901_, 2);
lean_inc_ref(v_trailing_1902_);
lean_dec_ref_known(v_val_1901_, 4);
v_startPos_1903_ = lean_ctor_get(v_trailing_1902_, 1);
lean_inc(v_startPos_1903_);
v_stopPos_1904_ = lean_ctor_get(v_trailing_1902_, 2);
lean_inc(v_stopPos_1904_);
lean_dec_ref(v_trailing_1902_);
v___x_1905_ = lean_nat_sub(v_stopPos_1904_, v_startPos_1903_);
lean_dec(v_startPos_1903_);
lean_dec(v_stopPos_1904_);
return v___x_1905_;
}
else
{
lean_object* v___x_1906_; 
lean_dec(v_val_1901_);
v___x_1906_ = lean_unsigned_to_nat(0u);
return v___x_1906_;
}
}
else
{
lean_object* v___x_1907_; 
lean_dec(v___x_1900_);
v___x_1907_ = lean_unsigned_to_nat(0u);
return v___x_1907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object* v_stx_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_Syntax_getTrailingSize(v_stx_1908_);
lean_dec(v_stx_1908_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object* v_stx_1910_){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = l_Lean_Syntax_getTailInfo(v_stx_1910_);
v___x_1912_ = l_Lean_SourceInfo_getTrailing_x3f(v___x_1911_);
lean_dec(v___x_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object* v_stx_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lean_Syntax_getTrailing_x3f(v_stx_1913_);
lean_dec(v_stx_1913_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object* v_stx_1915_, uint8_t v_canonicalOnly_1916_){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = l_Lean_Syntax_getTailInfo(v_stx_1915_);
v___x_1918_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v___x_1917_, v_canonicalOnly_1916_);
lean_dec(v___x_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object* v_stx_1919_, lean_object* v_canonicalOnly_1920_){
_start:
{
uint8_t v_canonicalOnly_boxed_1921_; lean_object* v_res_1922_; 
v_canonicalOnly_boxed_1921_ = lean_unbox(v_canonicalOnly_1920_);
v_res_1922_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_1919_, v_canonicalOnly_boxed_1921_);
lean_dec(v_stx_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object* v_stx_1923_, uint8_t v_withLeading_1924_, uint8_t v_withTrailing_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l_Lean_Syntax_getHeadInfo(v_stx_1923_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_leading_1927_; lean_object* v_pos_1928_; lean_object* v___x_1929_; 
v_leading_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc_ref(v_leading_1927_);
v_pos_1928_ = lean_ctor_get(v___x_1926_, 1);
lean_inc(v_pos_1928_);
lean_dec_ref_known(v___x_1926_, 4);
v___x_1929_ = l_Lean_Syntax_getTailInfo(v_stx_1923_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_trailing_1930_; lean_object* v_endPos_1931_; lean_object* v_str_1932_; lean_object* v_startPos_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1947_; 
v_trailing_1930_ = lean_ctor_get(v___x_1929_, 2);
lean_inc_ref(v_trailing_1930_);
v_endPos_1931_ = lean_ctor_get(v___x_1929_, 3);
lean_inc(v_endPos_1931_);
lean_dec_ref_known(v___x_1929_, 4);
v_str_1932_ = lean_ctor_get(v_leading_1927_, 0);
v_startPos_1933_ = lean_ctor_get(v_leading_1927_, 1);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_leading_1927_);
if (v_isSharedCheck_1947_ == 0)
{
lean_object* v_unused_1948_; 
v_unused_1948_ = lean_ctor_get(v_leading_1927_, 2);
lean_dec(v_unused_1948_);
v___x_1935_ = v_leading_1927_;
v_isShared_1936_ = v_isSharedCheck_1947_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_startPos_1933_);
lean_inc(v_str_1932_);
lean_dec(v_leading_1927_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1947_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1945_; 
if (v_withLeading_1924_ == 0)
{
lean_dec(v_startPos_1933_);
v___y_1945_ = v_pos_1928_;
goto v___jp_1944_;
}
else
{
lean_dec(v_pos_1928_);
v___y_1945_ = v_startPos_1933_;
goto v___jp_1944_;
}
v___jp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 2, v___y_1939_);
lean_ctor_set(v___x_1935_, 1, v___y_1938_);
v___x_1941_ = v___x_1935_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_str_1932_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v___y_1938_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v___y_1939_);
v___x_1941_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
return v___x_1942_;
}
}
v___jp_1944_:
{
if (v_withTrailing_1925_ == 0)
{
lean_dec_ref(v_trailing_1930_);
v___y_1938_ = v___y_1945_;
v___y_1939_ = v_endPos_1931_;
goto v___jp_1937_;
}
else
{
lean_object* v_stopPos_1946_; 
lean_dec(v_endPos_1931_);
v_stopPos_1946_ = lean_ctor_get(v_trailing_1930_, 2);
lean_inc(v_stopPos_1946_);
lean_dec_ref(v_trailing_1930_);
v___y_1938_ = v___y_1945_;
v___y_1939_ = v_stopPos_1946_;
goto v___jp_1937_;
}
}
}
}
else
{
lean_object* v___x_1949_; 
lean_dec(v___x_1929_);
lean_dec(v_pos_1928_);
lean_dec_ref(v_leading_1927_);
v___x_1949_ = lean_box(0);
return v___x_1949_;
}
}
else
{
lean_object* v___x_1950_; 
lean_dec(v___x_1926_);
v___x_1950_ = lean_box(0);
return v___x_1950_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object* v_stx_1951_, lean_object* v_withLeading_1952_, lean_object* v_withTrailing_1953_){
_start:
{
uint8_t v_withLeading_boxed_1954_; uint8_t v_withTrailing_boxed_1955_; lean_object* v_res_1956_; 
v_withLeading_boxed_1954_ = lean_unbox(v_withLeading_1952_);
v_withTrailing_boxed_1955_ = lean_unbox(v_withTrailing_1953_);
v_res_1956_ = l_Lean_Syntax_getSubstring_x3f(v_stx_1951_, v_withLeading_boxed_1954_, v_withTrailing_boxed_1955_);
lean_dec(v_stx_1951_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object* v_a_1957_, lean_object* v_f_1958_, lean_object* v_i_1959_){
_start:
{
lean_object* v_zero_1960_; uint8_t v_isZero_1961_; 
v_zero_1960_ = lean_unsigned_to_nat(0u);
v_isZero_1961_ = lean_nat_dec_eq(v_i_1959_, v_zero_1960_);
if (v_isZero_1961_ == 1)
{
lean_object* v___x_1962_; 
lean_dec(v_i_1959_);
lean_dec_ref(v_f_1958_);
lean_dec_ref(v_a_1957_);
v___x_1962_ = lean_box(0);
return v___x_1962_;
}
else
{
lean_object* v_one_1963_; lean_object* v_n_1964_; lean_object* v_v_1965_; lean_object* v___x_1966_; 
v_one_1963_ = lean_unsigned_to_nat(1u);
v_n_1964_ = lean_nat_sub(v_i_1959_, v_one_1963_);
lean_dec(v_i_1959_);
v_v_1965_ = lean_array_fget_borrowed(v_a_1957_, v_n_1964_);
lean_inc_ref(v_f_1958_);
lean_inc(v_v_1965_);
v___x_1966_ = lean_apply_1(v_f_1958_, v_v_1965_);
if (lean_obj_tag(v___x_1966_) == 0)
{
v_i_1959_ = v_n_1964_;
goto _start;
}
else
{
lean_object* v_val_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v_f_1958_);
v_val_1968_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1970_ = v___x_1966_;
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_val_1968_);
lean_dec(v___x_1966_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1972_; lean_object* v___x_1974_; 
v___x_1972_ = lean_array_fset(v_a_1957_, v_n_1964_, v_val_1968_);
lean_dec(v_n_1964_);
if (v_isShared_1971_ == 0)
{
lean_ctor_set(v___x_1970_, 0, v___x_1972_);
v___x_1974_ = v___x_1970_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v___x_1972_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object* v_00_u03b1_1977_, lean_object* v_a_1978_, lean_object* v_f_1979_, lean_object* v_i_1980_){
_start:
{
lean_object* v___x_1981_; 
v___x_1981_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(v_a_1978_, v_f_1979_, v_i_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object* v_info_1982_, lean_object* v_x_1983_){
_start:
{
switch(lean_obj_tag(v_x_1983_))
{
case 2:
{
lean_object* v_val_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1992_; 
v_val_1984_ = lean_ctor_get(v_x_1983_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_x_1983_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; 
v_unused_1993_ = lean_ctor_get(v_x_1983_, 0);
lean_dec(v_unused_1993_);
v___x_1986_ = v_x_1983_;
v_isShared_1987_ = v_isSharedCheck_1992_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_val_1984_);
lean_dec(v_x_1983_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1992_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v_info_1982_);
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_info_1982_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_val_1984_);
v___x_1989_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
return v___x_1990_;
}
}
}
case 3:
{
lean_object* v_rawVal_1994_; lean_object* v_val_1995_; lean_object* v_preresolved_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2004_; 
v_rawVal_1994_ = lean_ctor_get(v_x_1983_, 1);
v_val_1995_ = lean_ctor_get(v_x_1983_, 2);
v_preresolved_1996_ = lean_ctor_get(v_x_1983_, 3);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_x_1983_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; 
v_unused_2005_ = lean_ctor_get(v_x_1983_, 0);
lean_dec(v_unused_2005_);
v___x_1998_ = v_x_1983_;
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_preresolved_1996_);
lean_inc(v_val_1995_);
lean_inc(v_rawVal_1994_);
lean_dec(v_x_1983_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v_info_1982_);
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_info_1982_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v_rawVal_1994_);
lean_ctor_set(v_reuseFailAlloc_2003_, 2, v_val_1995_);
lean_ctor_set(v_reuseFailAlloc_2003_, 3, v_preresolved_1996_);
v___x_2001_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2002_; 
v___x_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
return v___x_2002_;
}
}
}
case 1:
{
lean_object* v_info_2006_; lean_object* v_kind_2007_; lean_object* v_args_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2026_; 
v_info_2006_ = lean_ctor_get(v_x_1983_, 0);
v_kind_2007_ = lean_ctor_get(v_x_1983_, 1);
v_args_2008_ = lean_ctor_get(v_x_1983_, 2);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_x_1983_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2010_ = v_x_1983_;
v_isShared_2011_ = v_isSharedCheck_2026_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_args_2008_);
lean_inc(v_kind_2007_);
lean_inc(v_info_2006_);
lean_dec(v_x_1983_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2026_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = lean_array_get_size(v_args_2008_);
v___x_2013_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(v_info_1982_, v_args_2008_, v___x_2012_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v___x_2014_; 
lean_del_object(v___x_2010_);
lean_dec(v_kind_2007_);
lean_dec(v_info_2006_);
v___x_2014_ = lean_box(0);
return v___x_2014_;
}
else
{
lean_object* v_val_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2025_; 
v_val_2015_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2017_ = v___x_2013_;
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_val_2015_);
lean_dec(v___x_2013_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 2, v_val_2015_);
v___x_2020_ = v___x_2010_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_info_2006_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v_kind_2007_);
lean_ctor_set(v_reuseFailAlloc_2024_, 2, v_val_2015_);
v___x_2020_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2022_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2020_);
v___x_2022_ = v___x_2017_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_2027_; 
lean_dec(v_x_1983_);
lean_dec(v_info_1982_);
v___x_2027_ = lean_box(0);
return v___x_2027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object* v_info_2028_, lean_object* v_a_2029_, lean_object* v_i_2030_){
_start:
{
lean_object* v_zero_2031_; uint8_t v_isZero_2032_; 
v_zero_2031_ = lean_unsigned_to_nat(0u);
v_isZero_2032_ = lean_nat_dec_eq(v_i_2030_, v_zero_2031_);
if (v_isZero_2032_ == 1)
{
lean_object* v___x_2033_; 
lean_dec(v_i_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_info_2028_);
v___x_2033_ = lean_box(0);
return v___x_2033_;
}
else
{
lean_object* v_one_2034_; lean_object* v_n_2035_; lean_object* v_v_2036_; lean_object* v___x_2037_; 
v_one_2034_ = lean_unsigned_to_nat(1u);
v_n_2035_ = lean_nat_sub(v_i_2030_, v_one_2034_);
lean_dec(v_i_2030_);
v_v_2036_ = lean_array_fget_borrowed(v_a_2029_, v_n_2035_);
lean_inc(v_v_2036_);
lean_inc(v_info_2028_);
v___x_2037_ = l_Lean_Syntax_setTailInfoAux(v_info_2028_, v_v_2036_);
if (lean_obj_tag(v___x_2037_) == 0)
{
v_i_2030_ = v_n_2035_;
goto _start;
}
else
{
lean_object* v_val_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2047_; 
lean_dec(v_info_2028_);
v_val_2039_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2041_ = v___x_2037_;
v_isShared_2042_ = v_isSharedCheck_2047_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_val_2039_);
lean_dec(v___x_2037_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2047_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2043_ = lean_array_fset(v_a_2029_, v_n_2035_, v_val_2039_);
lean_dec(v_n_2035_);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2043_);
v___x_2045_ = v___x_2041_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object* v_stx_2048_, lean_object* v_info_2049_){
_start:
{
lean_object* v___x_2050_; 
lean_inc(v_stx_2048_);
v___x_2050_ = l_Lean_Syntax_setTailInfoAux(v_info_2049_, v_stx_2048_);
if (lean_obj_tag(v___x_2050_) == 0)
{
return v_stx_2048_;
}
else
{
lean_object* v_val_2051_; 
lean_dec(v_stx_2048_);
v_val_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_val_2051_);
lean_dec_ref_known(v___x_2050_, 1);
return v_val_2051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object* v_stx_2052_){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = l_Lean_Syntax_getTailInfo(v_stx_2052_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_trailing_2054_; lean_object* v_leading_2055_; lean_object* v_pos_2056_; lean_object* v_endPos_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2075_; 
v_trailing_2054_ = lean_ctor_get(v___x_2053_, 2);
v_leading_2055_ = lean_ctor_get(v___x_2053_, 0);
v_pos_2056_ = lean_ctor_get(v___x_2053_, 1);
v_endPos_2057_ = lean_ctor_get(v___x_2053_, 3);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2059_ = v___x_2053_;
v_isShared_2060_ = v_isSharedCheck_2075_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_endPos_2057_);
lean_inc(v_trailing_2054_);
lean_inc(v_pos_2056_);
lean_inc(v_leading_2055_);
lean_dec(v___x_2053_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2075_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_str_2061_; lean_object* v_startPos_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2073_; 
v_str_2061_ = lean_ctor_get(v_trailing_2054_, 0);
v_startPos_2062_ = lean_ctor_get(v_trailing_2054_, 1);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_trailing_2054_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v_trailing_2054_, 2);
lean_dec(v_unused_2074_);
v___x_2064_ = v_trailing_2054_;
v_isShared_2065_ = v_isSharedCheck_2073_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_startPos_2062_);
lean_inc(v_str_2061_);
lean_dec(v_trailing_2054_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2073_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
lean_inc(v_startPos_2062_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 2, v_startPos_2062_);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_str_2061_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_startPos_2062_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v_startPos_2062_);
v___x_2067_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2069_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 2, v___x_2067_);
v___x_2069_ = v___x_2059_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_leading_2055_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_pos_2056_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 3, v_endPos_2057_);
v___x_2069_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_Syntax_setTailInfo(v_stx_2052_, v___x_2069_);
return v___x_2070_;
}
}
}
}
}
else
{
lean_dec(v___x_2053_);
return v_stx_2052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object* v_a_2076_, lean_object* v_f_2077_, lean_object* v_i_2078_){
_start:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; 
v___x_2079_ = lean_array_get_size(v_a_2076_);
v___x_2080_ = lean_nat_dec_lt(v_i_2078_, v___x_2079_);
if (v___x_2080_ == 0)
{
lean_object* v___x_2081_; 
lean_dec(v_i_2078_);
lean_dec_ref(v_f_2077_);
lean_dec_ref(v_a_2076_);
v___x_2081_ = lean_box(0);
return v___x_2081_;
}
else
{
lean_object* v_v_2082_; lean_object* v___x_2083_; 
v_v_2082_ = lean_array_fget_borrowed(v_a_2076_, v_i_2078_);
lean_inc_ref(v_f_2077_);
lean_inc(v_v_2082_);
v___x_2083_ = lean_apply_1(v_f_2077_, v_v_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = lean_unsigned_to_nat(1u);
v___x_2085_ = lean_nat_add(v_i_2078_, v___x_2084_);
lean_dec(v_i_2078_);
v_i_2078_ = v___x_2085_;
goto _start;
}
else
{
lean_object* v_val_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_f_2077_);
v_val_2087_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2089_ = v___x_2083_;
v_isShared_2090_ = v_isSharedCheck_2095_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_val_2087_);
lean_dec(v___x_2083_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2095_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2091_ = lean_array_fset(v_a_2076_, v_i_2078_, v_val_2087_);
lean_dec(v_i_2078_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___x_2091_);
v___x_2093_ = v___x_2089_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object* v_00_u03b1_2096_, lean_object* v_inst_2097_, lean_object* v_a_2098_, lean_object* v_f_2099_, lean_object* v_i_2100_){
_start:
{
lean_object* v___x_2101_; 
v___x_2101_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(v_a_2098_, v_f_2099_, v_i_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object* v_00_u03b1_2102_, lean_object* v_inst_2103_, lean_object* v_a_2104_, lean_object* v_f_2105_, lean_object* v_i_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(v_00_u03b1_2102_, v_inst_2103_, v_a_2104_, v_f_2105_, v_i_2106_);
lean_dec(v_inst_2103_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object* v_info_2108_, lean_object* v_x_2109_){
_start:
{
switch(lean_obj_tag(v_x_2109_))
{
case 2:
{
lean_object* v_val_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2118_; 
v_val_2110_ = lean_ctor_get(v_x_2109_, 1);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_x_2109_);
if (v_isSharedCheck_2118_ == 0)
{
lean_object* v_unused_2119_; 
v_unused_2119_ = lean_ctor_get(v_x_2109_, 0);
lean_dec(v_unused_2119_);
v___x_2112_ = v_x_2109_;
v_isShared_2113_ = v_isSharedCheck_2118_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_val_2110_);
lean_dec(v_x_2109_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2118_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v_info_2108_);
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_info_2108_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_val_2110_);
v___x_2115_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
return v___x_2116_;
}
}
}
case 3:
{
lean_object* v_rawVal_2120_; lean_object* v_val_2121_; lean_object* v_preresolved_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2130_; 
v_rawVal_2120_ = lean_ctor_get(v_x_2109_, 1);
v_val_2121_ = lean_ctor_get(v_x_2109_, 2);
v_preresolved_2122_ = lean_ctor_get(v_x_2109_, 3);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_x_2109_);
if (v_isSharedCheck_2130_ == 0)
{
lean_object* v_unused_2131_; 
v_unused_2131_ = lean_ctor_get(v_x_2109_, 0);
lean_dec(v_unused_2131_);
v___x_2124_ = v_x_2109_;
v_isShared_2125_ = v_isSharedCheck_2130_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_preresolved_2122_);
lean_inc(v_val_2121_);
lean_inc(v_rawVal_2120_);
lean_dec(v_x_2109_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2130_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v_info_2108_);
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_info_2108_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_rawVal_2120_);
lean_ctor_set(v_reuseFailAlloc_2129_, 2, v_val_2121_);
lean_ctor_set(v_reuseFailAlloc_2129_, 3, v_preresolved_2122_);
v___x_2127_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; 
v___x_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
return v___x_2128_;
}
}
}
case 1:
{
lean_object* v_info_2132_; lean_object* v_kind_2133_; lean_object* v_args_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2152_; 
v_info_2132_ = lean_ctor_get(v_x_2109_, 0);
v_kind_2133_ = lean_ctor_get(v_x_2109_, 1);
v_args_2134_ = lean_ctor_get(v_x_2109_, 2);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_x_2109_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2136_ = v_x_2109_;
v_isShared_2137_ = v_isSharedCheck_2152_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_args_2134_);
lean_inc(v_kind_2133_);
lean_inc(v_info_2132_);
lean_dec(v_x_2109_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2152_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_unsigned_to_nat(0u);
v___x_2139_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(v_info_2108_, v_args_2134_, v___x_2138_);
if (lean_obj_tag(v___x_2139_) == 1)
{
lean_object* v_val_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2150_; 
v_val_2140_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2142_ = v___x_2139_;
v_isShared_2143_ = v_isSharedCheck_2150_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_val_2140_);
lean_dec(v___x_2139_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2150_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 2, v_val_2140_);
v___x_2145_ = v___x_2136_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_info_2132_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_kind_2133_);
lean_ctor_set(v_reuseFailAlloc_2149_, 2, v_val_2140_);
v___x_2145_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2147_; 
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 0, v___x_2145_);
v___x_2147_ = v___x_2142_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
else
{
lean_object* v___x_2151_; 
lean_dec(v___x_2139_);
lean_del_object(v___x_2136_);
lean_dec(v_kind_2133_);
lean_dec(v_info_2132_);
v___x_2151_ = lean_box(0);
return v___x_2151_;
}
}
}
default: 
{
lean_object* v___x_2153_; 
lean_dec(v_x_2109_);
lean_dec(v_info_2108_);
v___x_2153_ = lean_box(0);
return v___x_2153_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object* v_info_2154_, lean_object* v_a_2155_, lean_object* v_i_2156_){
_start:
{
lean_object* v___x_2157_; uint8_t v___x_2158_; 
v___x_2157_ = lean_array_get_size(v_a_2155_);
v___x_2158_ = lean_nat_dec_lt(v_i_2156_, v___x_2157_);
if (v___x_2158_ == 0)
{
lean_object* v___x_2159_; 
lean_dec(v_i_2156_);
lean_dec_ref(v_a_2155_);
lean_dec(v_info_2154_);
v___x_2159_ = lean_box(0);
return v___x_2159_;
}
else
{
lean_object* v_v_2160_; lean_object* v___x_2161_; 
v_v_2160_ = lean_array_fget_borrowed(v_a_2155_, v_i_2156_);
lean_inc(v_v_2160_);
lean_inc(v_info_2154_);
v___x_2161_ = l_Lean_Syntax_setHeadInfoAux(v_info_2154_, v_v_2160_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = lean_unsigned_to_nat(1u);
v___x_2163_ = lean_nat_add(v_i_2156_, v___x_2162_);
lean_dec(v_i_2156_);
v_i_2156_ = v___x_2163_;
goto _start;
}
else
{
lean_object* v_val_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2173_; 
lean_dec(v_info_2154_);
v_val_2165_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2167_ = v___x_2161_;
v_isShared_2168_ = v_isSharedCheck_2173_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_val_2165_);
lean_dec(v___x_2161_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2173_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2169_ = lean_array_fset(v_a_2155_, v_i_2156_, v_val_2165_);
lean_dec(v_i_2156_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2169_);
v___x_2171_ = v___x_2167_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object* v_stx_2174_, lean_object* v_info_2175_){
_start:
{
lean_object* v___x_2176_; 
lean_inc(v_stx_2174_);
v___x_2176_ = l_Lean_Syntax_setHeadInfoAux(v_info_2175_, v_stx_2174_);
if (lean_obj_tag(v___x_2176_) == 0)
{
return v_stx_2174_;
}
else
{
lean_object* v_val_2177_; 
lean_dec(v_stx_2174_);
v_val_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_val_2177_);
lean_dec_ref_known(v___x_2176_, 1);
return v_val_2177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object* v_info_2178_, lean_object* v_x_2179_){
_start:
{
switch(lean_obj_tag(v_x_2179_))
{
case 0:
{
lean_dec(v_info_2178_);
return v_x_2179_;
}
case 1:
{
lean_object* v_kind_2180_; lean_object* v_args_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
v_kind_2180_ = lean_ctor_get(v_x_2179_, 1);
v_args_2181_ = lean_ctor_get(v_x_2179_, 2);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; 
v_unused_2189_ = lean_ctor_get(v_x_2179_, 0);
lean_dec(v_unused_2189_);
v___x_2183_ = v_x_2179_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_args_2181_);
lean_inc(v_kind_2180_);
lean_dec(v_x_2179_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 0, v_info_2178_);
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_info_2178_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_kind_2180_);
lean_ctor_set(v_reuseFailAlloc_2187_, 2, v_args_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
case 2:
{
lean_object* v_val_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
v_val_2190_ = lean_ctor_get(v_x_2179_, 1);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2197_ == 0)
{
lean_object* v_unused_2198_; 
v_unused_2198_ = lean_ctor_get(v_x_2179_, 0);
lean_dec(v_unused_2198_);
v___x_2192_ = v_x_2179_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_val_2190_);
lean_dec(v_x_2179_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 0, v_info_2178_);
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_info_2178_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v_val_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
default: 
{
lean_object* v_rawVal_2199_; lean_object* v_val_2200_; lean_object* v_preresolved_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_rawVal_2199_ = lean_ctor_get(v_x_2179_, 1);
v_val_2200_ = lean_ctor_get(v_x_2179_, 2);
v_preresolved_2201_ = lean_ctor_get(v_x_2179_, 3);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2208_ == 0)
{
lean_object* v_unused_2209_; 
v_unused_2209_ = lean_ctor_get(v_x_2179_, 0);
lean_dec(v_unused_2209_);
v___x_2203_ = v_x_2179_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_preresolved_2201_);
lean_inc(v_val_2200_);
lean_inc(v_rawVal_2199_);
lean_dec(v_x_2179_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v_info_2178_);
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_info_2178_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v_rawVal_2199_);
lean_ctor_set(v_reuseFailAlloc_2207_, 2, v_val_2200_);
lean_ctor_set(v_reuseFailAlloc_2207_, 3, v_preresolved_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object* v_x_2213_){
_start:
{
switch(lean_obj_tag(v_x_2213_))
{
case 2:
{
lean_object* v_info_2214_; uint8_t v___x_2215_; lean_object* v___x_2216_; 
v_info_2214_ = lean_ctor_get(v_x_2213_, 0);
v___x_2215_ = 0;
v___x_2216_ = l_Lean_SourceInfo_getPos_x3f(v_info_2214_, v___x_2215_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v___x_2217_; 
lean_dec_ref_known(v_x_2213_, 2);
v___x_2217_ = lean_box(0);
return v___x_2217_;
}
else
{
lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2224_ == 0)
{
lean_object* v_unused_2225_; 
v_unused_2225_ = lean_ctor_get(v___x_2216_, 0);
lean_dec(v_unused_2225_);
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v_x_2213_);
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_x_2213_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
case 3:
{
lean_object* v_info_2226_; uint8_t v___x_2227_; lean_object* v___x_2228_; 
v_info_2226_ = lean_ctor_get(v_x_2213_, 0);
v___x_2227_ = 0;
v___x_2228_ = l_Lean_SourceInfo_getPos_x3f(v_info_2226_, v___x_2227_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v___x_2229_; 
lean_dec_ref_known(v_x_2213_, 4);
v___x_2229_ = lean_box(0);
return v___x_2229_;
}
else
{
lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2236_ == 0)
{
lean_object* v_unused_2237_; 
v_unused_2237_ = lean_ctor_get(v___x_2228_, 0);
lean_dec(v_unused_2237_);
v___x_2231_ = v___x_2228_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_dec(v___x_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v_x_2213_);
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_x_2213_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
case 1:
{
lean_object* v_info_2238_; 
v_info_2238_ = lean_ctor_get(v_x_2213_, 0);
if (lean_obj_tag(v_info_2238_) == 2)
{
lean_object* v_args_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; size_t v_sz_2242_; size_t v___x_2243_; lean_object* v___x_2244_; lean_object* v_fst_2245_; 
v_args_2239_ = lean_ctor_get(v_x_2213_, 2);
lean_inc_ref(v_args_2239_);
lean_dec_ref_known(v_x_2213_, 3);
v___x_2240_ = lean_box(0);
v___x_2241_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_2242_ = lean_array_size(v_args_2239_);
v___x_2243_ = ((size_t)0ULL);
v___x_2244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_args_2239_, v_sz_2242_, v___x_2243_, v___x_2241_);
lean_dec_ref(v_args_2239_);
v_fst_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_fst_2245_);
lean_dec_ref(v___x_2244_);
if (lean_obj_tag(v_fst_2245_) == 0)
{
return v___x_2240_;
}
else
{
lean_object* v_val_2246_; 
v_val_2246_ = lean_ctor_get(v_fst_2245_, 0);
lean_inc(v_val_2246_);
lean_dec_ref_known(v_fst_2245_, 1);
return v_val_2246_;
}
}
else
{
lean_object* v___x_2247_; 
v___x_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2247_, 0, v_x_2213_);
return v___x_2247_;
}
}
default: 
{
lean_object* v___x_2248_; 
lean_dec(v_x_2213_);
v___x_2248_ = lean_box(0);
return v___x_2248_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object* v_as_2249_, size_t v_sz_2250_, size_t v_i_2251_, lean_object* v_b_2252_){
_start:
{
uint8_t v___x_2253_; 
v___x_2253_ = lean_usize_dec_lt(v_i_2251_, v_sz_2250_);
if (v___x_2253_ == 0)
{
lean_inc_ref(v_b_2252_);
return v_b_2252_;
}
else
{
lean_object* v___x_2254_; lean_object* v_a_2255_; lean_object* v___x_2256_; 
v___x_2254_ = lean_box(0);
v_a_2255_ = lean_array_uget_borrowed(v_as_2249_, v_i_2251_);
lean_inc(v_a_2255_);
v___x_2256_ = l_Lean_Syntax_getHead_x3f(v_a_2255_);
if (lean_obj_tag(v___x_2256_) == 1)
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v___x_2254_);
return v___x_2258_;
}
else
{
lean_object* v___x_2259_; size_t v___x_2260_; size_t v___x_2261_; 
lean_dec(v___x_2256_);
v___x_2259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_2260_ = ((size_t)1ULL);
v___x_2261_ = lean_usize_add(v_i_2251_, v___x_2260_);
v_i_2251_ = v___x_2261_;
v_b_2252_ = v___x_2259_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object* v_as_2263_, lean_object* v_sz_2264_, lean_object* v_i_2265_, lean_object* v_b_2266_){
_start:
{
size_t v_sz_boxed_2267_; size_t v_i_boxed_2268_; lean_object* v_res_2269_; 
v_sz_boxed_2267_ = lean_unbox_usize(v_sz_2264_);
lean_dec(v_sz_2264_);
v_i_boxed_2268_ = lean_unbox_usize(v_i_2265_);
lean_dec(v_i_2265_);
v_res_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_as_2263_, v_sz_boxed_2267_, v_i_boxed_2268_, v_b_2266_);
lean_dec_ref(v_b_2266_);
lean_dec_ref(v_as_2263_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object* v_target_2270_, lean_object* v_source_2271_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2272_ = l_Lean_Syntax_getHeadInfo(v_source_2271_);
v___x_2273_ = l_Lean_Syntax_setHeadInfo(v_target_2270_, v___x_2272_);
v___x_2274_ = l_Lean_Syntax_getTailInfo(v_source_2271_);
v___x_2275_ = l_Lean_Syntax_setTailInfo(v___x_2273_, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object* v_target_2276_, lean_object* v_source_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_target_2276_, v_source_2277_);
lean_dec(v_source_2277_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object* v_stx_2279_){
_start:
{
uint8_t v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = 0;
v___x_2281_ = l_Lean_SourceInfo_fromRef(v_stx_2279_, v___x_2280_);
v___x_2282_ = l_Lean_Syntax_setHeadInfo(v_stx_2279_, v___x_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object* v_val_2283_, lean_object* v_withRef_2284_, lean_object* v_x_2285_, lean_object* v_oldRef_2286_){
_start:
{
lean_object* v_ref_2287_; lean_object* v___x_2288_; 
v_ref_2287_ = l_Lean_replaceRef(v_val_2283_, v_oldRef_2286_);
v___x_2288_ = lean_apply_3(v_withRef_2284_, lean_box(0), v_ref_2287_, v_x_2285_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object* v_val_2289_, lean_object* v_withRef_2290_, lean_object* v_x_2291_, lean_object* v_oldRef_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_withHeadRefOnly___redArg___lam__0(v_val_2289_, v_withRef_2290_, v_x_2291_, v_oldRef_2292_);
lean_dec(v_oldRef_2292_);
lean_dec(v_val_2289_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object* v_x_2294_, lean_object* v_withRef_2295_, lean_object* v_toBind_2296_, lean_object* v_getRef_2297_, lean_object* v_____do__lift_2298_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lean_Syntax_getHead_x3f(v_____do__lift_2298_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_dec(v_getRef_2297_);
lean_dec(v_toBind_2296_);
lean_dec(v_withRef_2295_);
return v_x_2294_;
}
else
{
lean_object* v_val_2300_; lean_object* v___f_2301_; lean_object* v___x_2302_; 
v_val_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_val_2300_);
lean_dec_ref_known(v___x_2299_, 1);
v___f_2301_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2301_, 0, v_val_2300_);
lean_closure_set(v___f_2301_, 1, v_withRef_2295_);
lean_closure_set(v___f_2301_, 2, v_x_2294_);
v___x_2302_ = lean_apply_4(v_toBind_2296_, lean_box(0), lean_box(0), v_getRef_2297_, v___f_2301_);
return v___x_2302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object* v_inst_2303_, lean_object* v_inst_2304_, lean_object* v_x_2305_){
_start:
{
lean_object* v_toBind_2306_; lean_object* v_getRef_2307_; lean_object* v_withRef_2308_; lean_object* v___f_2309_; lean_object* v___x_2310_; 
v_toBind_2306_ = lean_ctor_get(v_inst_2303_, 1);
lean_inc_n(v_toBind_2306_, 2);
lean_dec_ref(v_inst_2303_);
v_getRef_2307_ = lean_ctor_get(v_inst_2304_, 0);
lean_inc_n(v_getRef_2307_, 2);
v_withRef_2308_ = lean_ctor_get(v_inst_2304_, 1);
lean_inc(v_withRef_2308_);
lean_dec_ref(v_inst_2304_);
v___f_2309_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2309_, 0, v_x_2305_);
lean_closure_set(v___f_2309_, 1, v_withRef_2308_);
lean_closure_set(v___f_2309_, 2, v_toBind_2306_);
lean_closure_set(v___f_2309_, 3, v_getRef_2307_);
v___x_2310_ = lean_apply_4(v_toBind_2306_, lean_box(0), lean_box(0), v_getRef_2307_, v___f_2309_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object* v_m_2311_, lean_object* v_inst_2312_, lean_object* v_inst_2313_, lean_object* v_00_u03b1_2314_, lean_object* v_x_2315_){
_start:
{
lean_object* v_toBind_2316_; lean_object* v_getRef_2317_; lean_object* v_withRef_2318_; lean_object* v___f_2319_; lean_object* v___x_2320_; 
v_toBind_2316_ = lean_ctor_get(v_inst_2312_, 1);
lean_inc_n(v_toBind_2316_, 2);
lean_dec_ref(v_inst_2312_);
v_getRef_2317_ = lean_ctor_get(v_inst_2313_, 0);
lean_inc_n(v_getRef_2317_, 2);
v_withRef_2318_ = lean_ctor_get(v_inst_2313_, 1);
lean_inc(v_withRef_2318_);
lean_dec_ref(v_inst_2313_);
v___f_2319_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2319_, 0, v_x_2315_);
lean_closure_set(v___f_2319_, 1, v_withRef_2318_);
lean_closure_set(v___f_2319_, 2, v_toBind_2316_);
lean_closure_set(v___f_2319_, 3, v_getRef_2317_);
v___x_2320_ = lean_apply_4(v_toBind_2316_, lean_box(0), lean_box(0), v_getRef_2317_, v___f_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t v___x_2330_, lean_object* v_k_2331_){
_start:
{
lean_object* v___x_2332_; uint8_t v___x_2333_; 
v___x_2332_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_2333_ = lean_name_eq(v_k_2331_, v___x_2332_);
if (v___x_2333_ == 0)
{
return v___x_2330_;
}
else
{
uint8_t v___x_2334_; 
v___x_2334_ = 0;
return v___x_2334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object* v___x_2335_, lean_object* v_k_2336_){
_start:
{
uint8_t v___x_1801__boxed_2337_; uint8_t v_res_2338_; lean_object* v_r_2339_; 
v___x_1801__boxed_2337_ = lean_unbox(v___x_2335_);
v_res_2338_ = l_Lean_expandMacros___lam__0(v___x_1801__boxed_2337_, v_k_2336_);
lean_dec(v_k_2336_);
v_r_2339_ = lean_box(v_res_2338_);
return v_r_2339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object* v___x_2342_, lean_object* v_sz_2343_, lean_object* v_i_2344_, lean_object* v_bs_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_){
_start:
{
uint8_t v___x_1820__boxed_2348_; size_t v_sz_boxed_2349_; size_t v_i_boxed_2350_; lean_object* v_res_2351_; 
v___x_1820__boxed_2348_ = lean_unbox(v___x_2342_);
v_sz_boxed_2349_ = lean_unbox_usize(v_sz_2343_);
lean_dec(v_sz_2343_);
v_i_boxed_2350_ = lean_unbox_usize(v_i_2344_);
lean_dec(v_i_2344_);
v_res_2351_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(v___x_1820__boxed_2348_, v_sz_boxed_2349_, v_i_boxed_2350_, v_bs_2345_, v___y_2346_, v___y_2347_);
lean_dec_ref(v___y_2346_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object* v_stx_2353_, lean_object* v_p_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
if (lean_obj_tag(v_stx_2353_) == 1)
{
lean_object* v_info_2357_; lean_object* v_kind_2358_; lean_object* v_args_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; 
v_info_2357_ = lean_ctor_get(v_stx_2353_, 0);
v_kind_2358_ = lean_ctor_get(v_stx_2353_, 1);
v_args_2359_ = lean_ctor_get(v_stx_2353_, 2);
lean_inc(v_kind_2358_);
v___x_2360_ = lean_apply_1(v_p_2354_, v_kind_2358_);
v___x_2361_ = lean_unbox(v___x_2360_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; 
lean_dec_ref(v_a_2355_);
v___x_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2362_, 0, v_stx_2353_);
lean_ctor_set(v___x_2362_, 1, v_a_2356_);
return v___x_2362_;
}
else
{
lean_object* v_methods_2363_; lean_object* v_quotContext_2364_; lean_object* v_currMacroScope_2365_; lean_object* v_currRecDepth_2366_; lean_object* v_maxRecDepth_2367_; lean_object* v_ref_2368_; lean_object* v_ref_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_methods_2363_ = lean_ctor_get(v_a_2355_, 0);
lean_inc_n(v_methods_2363_, 2);
v_quotContext_2364_ = lean_ctor_get(v_a_2355_, 1);
lean_inc_n(v_quotContext_2364_, 2);
v_currMacroScope_2365_ = lean_ctor_get(v_a_2355_, 2);
lean_inc_n(v_currMacroScope_2365_, 2);
v_currRecDepth_2366_ = lean_ctor_get(v_a_2355_, 3);
lean_inc_n(v_currRecDepth_2366_, 2);
v_maxRecDepth_2367_ = lean_ctor_get(v_a_2355_, 4);
lean_inc_n(v_maxRecDepth_2367_, 2);
v_ref_2368_ = lean_ctor_get(v_a_2355_, 5);
lean_inc(v_ref_2368_);
lean_dec_ref(v_a_2355_);
v_ref_2369_ = l_Lean_replaceRef(v_stx_2353_, v_ref_2368_);
lean_dec(v_ref_2368_);
lean_inc(v_ref_2369_);
v___x_2370_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2370_, 0, v_methods_2363_);
lean_ctor_set(v___x_2370_, 1, v_quotContext_2364_);
lean_ctor_set(v___x_2370_, 2, v_currMacroScope_2365_);
lean_ctor_set(v___x_2370_, 3, v_currRecDepth_2366_);
lean_ctor_set(v___x_2370_, 4, v_maxRecDepth_2367_);
lean_ctor_set(v___x_2370_, 5, v_ref_2369_);
lean_inc_ref(v_stx_2353_);
v___x_2371_ = l_Lean_Macro_expandMacro_x3f(v_stx_2353_, v___x_2370_, v_a_2356_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
if (lean_obj_tag(v_a_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref_known(v___x_2370_, 6);
v_a_2373_ = lean_ctor_get(v___x_2371_, 1);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2421_ == 0)
{
lean_object* v_unused_2422_; 
v_unused_2422_ = lean_ctor_get(v___x_2371_, 0);
lean_dec(v_unused_2422_);
v___x_2375_ = v___x_2371_;
v_isShared_2376_ = v_isSharedCheck_2421_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2371_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2421_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
uint8_t v___x_2377_; 
v___x_2377_ = lean_nat_dec_eq(v_currRecDepth_2366_, v_maxRecDepth_2367_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2412_; 
lean_inc_ref(v_args_2359_);
lean_inc(v_kind_2358_);
lean_inc(v_info_2357_);
lean_del_object(v___x_2375_);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_stx_2353_);
if (v_isSharedCheck_2412_ == 0)
{
lean_object* v_unused_2413_; lean_object* v_unused_2414_; lean_object* v_unused_2415_; 
v_unused_2413_ = lean_ctor_get(v_stx_2353_, 2);
lean_dec(v_unused_2413_);
v_unused_2414_ = lean_ctor_get(v_stx_2353_, 1);
lean_dec(v_unused_2414_);
v_unused_2415_ = lean_ctor_get(v_stx_2353_, 0);
lean_dec(v_unused_2415_);
v___x_2379_ = v_stx_2353_;
v_isShared_2380_ = v_isSharedCheck_2412_;
goto v_resetjp_2378_;
}
else
{
lean_dec(v_stx_2353_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2412_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; size_t v_sz_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_1762__overap_2389_; lean_object* v___x_2390_; 
v___x_2381_ = lean_unsigned_to_nat(1u);
v___x_2382_ = lean_nat_add(v_currRecDepth_2366_, v___x_2381_);
lean_dec(v_currRecDepth_2366_);
v___x_2383_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2383_, 0, v_methods_2363_);
lean_ctor_set(v___x_2383_, 1, v_quotContext_2364_);
lean_ctor_set(v___x_2383_, 2, v_currMacroScope_2365_);
lean_ctor_set(v___x_2383_, 3, v___x_2382_);
lean_ctor_set(v___x_2383_, 4, v_maxRecDepth_2367_);
lean_ctor_set(v___x_2383_, 5, v_ref_2369_);
v_sz_2384_ = lean_array_size(v_args_2359_);
v___x_2385_ = l_unsafeCast___redArg(v_args_2359_);
lean_dec_ref(v_args_2359_);
v___x_2386_ = lean_box_usize(v_sz_2384_);
v___x_2387_ = ((lean_object*)(l_Lean_expandMacros___boxed__const__1));
v___x_2388_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed), 6, 4);
lean_closure_set(v___x_2388_, 0, v___x_2360_);
lean_closure_set(v___x_2388_, 1, v___x_2386_);
lean_closure_set(v___x_2388_, 2, v___x_2387_);
lean_closure_set(v___x_2388_, 3, v___x_2385_);
v___x_1762__overap_2389_ = l_unsafeCast___redArg(v___x_2388_);
lean_dec_ref(v___x_2388_);
v___x_2390_ = lean_apply_2(v___x_1762__overap_2389_, v___x_2383_, v_a_2373_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2402_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
v_a_2392_ = lean_ctor_get(v___x_2390_, 1);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2394_ = v___x_2390_;
v_isShared_2395_ = v_isSharedCheck_2402_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_inc(v_a_2391_);
lean_dec(v___x_2390_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2402_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 2, v_a_2391_);
v___x_2397_ = v___x_2379_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_info_2357_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_kind_2358_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v_a_2391_);
v___x_2397_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
lean_object* v___x_2399_; 
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v___x_2397_);
v___x_2399_ = v___x_2394_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2400_, 1, v_a_2392_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_del_object(v___x_2379_);
lean_dec(v_kind_2358_);
lean_dec(v_info_2357_);
v_a_2403_ = lean_ctor_get(v___x_2390_, 0);
v_a_2404_ = lean_ctor_get(v___x_2390_, 1);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2390_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_inc(v_a_2403_);
lean_dec(v___x_2390_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2403_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2419_; 
lean_dec(v_ref_2369_);
lean_dec(v_maxRecDepth_2367_);
lean_dec(v_currRecDepth_2366_);
lean_dec(v_currMacroScope_2365_);
lean_dec(v_quotContext_2364_);
lean_dec(v_methods_2363_);
v___x_2416_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2417_, 0, v_stx_2353_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set_tag(v___x_2375_, 1);
lean_ctor_set(v___x_2375_, 0, v___x_2417_);
v___x_2419_ = v___x_2375_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_a_2373_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v_val_2424_; lean_object* v___f_2425_; 
lean_dec(v_ref_2369_);
lean_dec(v_maxRecDepth_2367_);
lean_dec(v_currRecDepth_2366_);
lean_dec(v_currMacroScope_2365_);
lean_dec(v_quotContext_2364_);
lean_dec(v_methods_2363_);
lean_dec_ref_known(v_stx_2353_, 3);
v_a_2423_ = lean_ctor_get(v___x_2371_, 1);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2371_, 2);
v_val_2424_ = lean_ctor_get(v_a_2372_, 0);
lean_inc(v_val_2424_);
lean_dec_ref_known(v_a_2372_, 1);
v___f_2425_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2425_, 0, v___x_2360_);
v_stx_2353_ = v_val_2424_;
v_p_2354_ = v___f_2425_;
v_a_2355_ = v___x_2370_;
v_a_2356_ = v_a_2423_;
goto _start;
}
}
else
{
lean_object* v_a_2427_; lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
lean_dec_ref_known(v___x_2370_, 6);
lean_dec(v_ref_2369_);
lean_dec(v_maxRecDepth_2367_);
lean_dec(v_currRecDepth_2366_);
lean_dec(v_currMacroScope_2365_);
lean_dec(v_quotContext_2364_);
lean_dec(v_methods_2363_);
lean_dec_ref_known(v_stx_2353_, 3);
v_a_2427_ = lean_ctor_get(v___x_2371_, 0);
v_a_2428_ = lean_ctor_get(v___x_2371_, 1);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2371_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_inc(v_a_2427_);
lean_dec(v___x_2371_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2427_);
lean_ctor_set(v_reuseFailAlloc_2434_, 1, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
}
else
{
lean_object* v___x_2436_; 
lean_dec_ref(v_a_2355_);
lean_dec_ref(v_p_2354_);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v_stx_2353_);
lean_ctor_set(v___x_2436_, 1, v_a_2356_);
return v___x_2436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t v___x_2437_, size_t v_sz_2438_, size_t v_i_2439_, lean_object* v_bs_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
uint8_t v___x_2443_; 
v___x_2443_ = lean_usize_dec_lt(v_i_2439_, v_sz_2438_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = l_unsafeCast___redArg(v_bs_2440_);
lean_dec_ref(v_bs_2440_);
v___x_2445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
lean_ctor_set(v___x_2445_, 1, v___y_2442_);
return v___x_2445_;
}
else
{
lean_object* v___x_2446_; lean_object* v___f_2447_; lean_object* v_v_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2446_ = lean_box(v___x_2437_);
v___f_2447_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2447_, 0, v___x_2446_);
v_v_2448_ = lean_array_uget_borrowed(v_bs_2440_, v_i_2439_);
v___x_2449_ = l_unsafeCast___redArg(v_v_2448_);
lean_inc_ref(v___y_2441_);
v___x_2450_ = l_Lean_expandMacros(v___x_2449_, v___f_2447_, v___y_2441_, v___y_2442_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v_a_2452_; lean_object* v___x_2453_; lean_object* v_bs_x27_2454_; size_t v___x_2455_; size_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
v_a_2452_ = lean_ctor_get(v___x_2450_, 1);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2450_, 2);
v___x_2453_ = lean_unsigned_to_nat(0u);
v_bs_x27_2454_ = lean_array_uset(v_bs_2440_, v_i_2439_, v___x_2453_);
v___x_2455_ = ((size_t)1ULL);
v___x_2456_ = lean_usize_add(v_i_2439_, v___x_2455_);
v___x_2457_ = l_unsafeCast___redArg(v_a_2451_);
lean_dec(v_a_2451_);
v___x_2458_ = lean_array_uset(v_bs_x27_2454_, v_i_2439_, v___x_2457_);
v_i_2439_ = v___x_2456_;
v_bs_2440_ = v___x_2458_;
v___y_2442_ = v_a_2452_;
goto _start;
}
else
{
lean_object* v_a_2460_; lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
lean_dec_ref(v_bs_2440_);
v_a_2460_ = lean_ctor_get(v___x_2450_, 0);
v_a_2461_ = lean_ctor_get(v___x_2450_, 1);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2450_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_inc(v_a_2460_);
lean_dec(v___x_2450_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2460_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object* v_src_2469_, lean_object* v_val_2470_, uint8_t v_canonical_2471_){
_start:
{
lean_object* v___x_2472_; uint8_t v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2472_ = l_Lean_SourceInfo_fromRef(v_src_2469_, v_canonical_2471_);
v___x_2473_ = 1;
lean_inc(v_val_2470_);
v___x_2474_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2470_, v___x_2473_);
v___x_2475_ = lean_unsigned_to_nat(0u);
v___x_2476_ = lean_string_utf8_byte_size(v___x_2474_);
v___x_2477_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2474_);
lean_ctor_set(v___x_2477_, 1, v___x_2475_);
lean_ctor_set(v___x_2477_, 2, v___x_2476_);
v___x_2478_ = lean_box(0);
v___x_2479_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2472_);
lean_ctor_set(v___x_2479_, 1, v___x_2477_);
lean_ctor_set(v___x_2479_, 2, v_val_2470_);
lean_ctor_set(v___x_2479_, 3, v___x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object* v_src_2480_, lean_object* v_val_2481_, lean_object* v_canonical_2482_){
_start:
{
uint8_t v_canonical_boxed_2483_; lean_object* v_res_2484_; 
v_canonical_boxed_2483_ = lean_unbox(v_canonical_2482_);
v_res_2484_ = l_Lean_mkIdentFrom(v_src_2480_, v_val_2481_, v_canonical_boxed_2483_);
lean_dec(v_src_2480_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object* v_val_2485_, uint8_t v_canonical_2486_, lean_object* v_toPure_2487_, lean_object* v_____do__lift_2488_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = l_Lean_mkIdentFrom(v_____do__lift_2488_, v_val_2485_, v_canonical_2486_);
v___x_2490_ = lean_apply_2(v_toPure_2487_, lean_box(0), v___x_2489_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object* v_val_2491_, lean_object* v_canonical_2492_, lean_object* v_toPure_2493_, lean_object* v_____do__lift_2494_){
_start:
{
uint8_t v_canonical_boxed_2495_; lean_object* v_res_2496_; 
v_canonical_boxed_2495_ = lean_unbox(v_canonical_2492_);
v_res_2496_ = l_Lean_mkIdentFromRef___redArg___lam__0(v_val_2491_, v_canonical_boxed_2495_, v_toPure_2493_, v_____do__lift_2494_);
lean_dec(v_____do__lift_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object* v_inst_2497_, lean_object* v_inst_2498_, lean_object* v_val_2499_, uint8_t v_canonical_2500_){
_start:
{
lean_object* v_toApplicative_2501_; lean_object* v_toBind_2502_; lean_object* v_getRef_2503_; lean_object* v_toPure_2504_; lean_object* v___x_2505_; lean_object* v___f_2506_; lean_object* v___x_2507_; 
v_toApplicative_2501_ = lean_ctor_get(v_inst_2497_, 0);
lean_inc_ref(v_toApplicative_2501_);
v_toBind_2502_ = lean_ctor_get(v_inst_2497_, 1);
lean_inc(v_toBind_2502_);
lean_dec_ref(v_inst_2497_);
v_getRef_2503_ = lean_ctor_get(v_inst_2498_, 0);
lean_inc(v_getRef_2503_);
lean_dec_ref(v_inst_2498_);
v_toPure_2504_ = lean_ctor_get(v_toApplicative_2501_, 1);
lean_inc(v_toPure_2504_);
lean_dec_ref(v_toApplicative_2501_);
v___x_2505_ = lean_box(v_canonical_2500_);
v___f_2506_ = lean_alloc_closure((void*)(l_Lean_mkIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2506_, 0, v_val_2499_);
lean_closure_set(v___f_2506_, 1, v___x_2505_);
lean_closure_set(v___f_2506_, 2, v_toPure_2504_);
v___x_2507_ = lean_apply_4(v_toBind_2502_, lean_box(0), lean_box(0), v_getRef_2503_, v___f_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object* v_inst_2508_, lean_object* v_inst_2509_, lean_object* v_val_2510_, lean_object* v_canonical_2511_){
_start:
{
uint8_t v_canonical_boxed_2512_; lean_object* v_res_2513_; 
v_canonical_boxed_2512_ = lean_unbox(v_canonical_2511_);
v_res_2513_ = l_Lean_mkIdentFromRef___redArg(v_inst_2508_, v_inst_2509_, v_val_2510_, v_canonical_boxed_2512_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object* v_m_2514_, lean_object* v_inst_2515_, lean_object* v_inst_2516_, lean_object* v_val_2517_, uint8_t v_canonical_2518_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_mkIdentFromRef___redArg(v_inst_2515_, v_inst_2516_, v_val_2517_, v_canonical_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object* v_m_2520_, lean_object* v_inst_2521_, lean_object* v_inst_2522_, lean_object* v_val_2523_, lean_object* v_canonical_2524_){
_start:
{
uint8_t v_canonical_boxed_2525_; lean_object* v_res_2526_; 
v_canonical_boxed_2525_ = lean_unbox(v_canonical_2524_);
v_res_2526_ = l_Lean_mkIdentFromRef(v_m_2520_, v_inst_2521_, v_inst_2522_, v_val_2523_, v_canonical_boxed_2525_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object* v_src_2530_, lean_object* v_c_2531_, uint8_t v_canonical_2532_){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v_id_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2533_ = ((lean_object*)(l_Lean_mkCIdentFrom___closed__1));
v___x_2534_ = lean_unsigned_to_nat(0u);
lean_inc(v_c_2531_);
v_id_2535_ = l_Lean_addMacroScope(v___x_2533_, v_c_2531_, v___x_2534_);
v___x_2536_ = l_Lean_SourceInfo_fromRef(v_src_2530_, v_canonical_2532_);
v___x_2537_ = 1;
lean_inc(v_id_2535_);
v___x_2538_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_id_2535_, v___x_2537_);
v___x_2539_ = lean_string_utf8_byte_size(v___x_2538_);
v___x_2540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2538_);
lean_ctor_set(v___x_2540_, 1, v___x_2534_);
lean_ctor_set(v___x_2540_, 2, v___x_2539_);
v___x_2541_ = lean_box(0);
v___x_2542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2542_, 0, v_c_2531_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
v___x_2543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v___x_2541_);
v___x_2544_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2536_);
lean_ctor_set(v___x_2544_, 1, v___x_2540_);
lean_ctor_set(v___x_2544_, 2, v_id_2535_);
lean_ctor_set(v___x_2544_, 3, v___x_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object* v_src_2545_, lean_object* v_c_2546_, lean_object* v_canonical_2547_){
_start:
{
uint8_t v_canonical_boxed_2548_; lean_object* v_res_2549_; 
v_canonical_boxed_2548_ = lean_unbox(v_canonical_2547_);
v_res_2549_ = l_Lean_mkCIdentFrom(v_src_2545_, v_c_2546_, v_canonical_boxed_2548_);
lean_dec(v_src_2545_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object* v_c_2550_, uint8_t v_canonical_2551_, lean_object* v_toPure_2552_, lean_object* v_____do__lift_2553_){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = l_Lean_mkCIdentFrom(v_____do__lift_2553_, v_c_2550_, v_canonical_2551_);
v___x_2555_ = lean_apply_2(v_toPure_2552_, lean_box(0), v___x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object* v_c_2556_, lean_object* v_canonical_2557_, lean_object* v_toPure_2558_, lean_object* v_____do__lift_2559_){
_start:
{
uint8_t v_canonical_boxed_2560_; lean_object* v_res_2561_; 
v_canonical_boxed_2560_ = lean_unbox(v_canonical_2557_);
v_res_2561_ = l_Lean_mkCIdentFromRef___redArg___lam__0(v_c_2556_, v_canonical_boxed_2560_, v_toPure_2558_, v_____do__lift_2559_);
lean_dec(v_____do__lift_2559_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object* v_inst_2562_, lean_object* v_inst_2563_, lean_object* v_c_2564_, uint8_t v_canonical_2565_){
_start:
{
lean_object* v_toApplicative_2566_; lean_object* v_toBind_2567_; lean_object* v_getRef_2568_; lean_object* v_toPure_2569_; lean_object* v___x_2570_; lean_object* v___f_2571_; lean_object* v___x_2572_; 
v_toApplicative_2566_ = lean_ctor_get(v_inst_2562_, 0);
lean_inc_ref(v_toApplicative_2566_);
v_toBind_2567_ = lean_ctor_get(v_inst_2562_, 1);
lean_inc(v_toBind_2567_);
lean_dec_ref(v_inst_2562_);
v_getRef_2568_ = lean_ctor_get(v_inst_2563_, 0);
lean_inc(v_getRef_2568_);
lean_dec_ref(v_inst_2563_);
v_toPure_2569_ = lean_ctor_get(v_toApplicative_2566_, 1);
lean_inc(v_toPure_2569_);
lean_dec_ref(v_toApplicative_2566_);
v___x_2570_ = lean_box(v_canonical_2565_);
v___f_2571_ = lean_alloc_closure((void*)(l_Lean_mkCIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2571_, 0, v_c_2564_);
lean_closure_set(v___f_2571_, 1, v___x_2570_);
lean_closure_set(v___f_2571_, 2, v_toPure_2569_);
v___x_2572_ = lean_apply_4(v_toBind_2567_, lean_box(0), lean_box(0), v_getRef_2568_, v___f_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object* v_inst_2573_, lean_object* v_inst_2574_, lean_object* v_c_2575_, lean_object* v_canonical_2576_){
_start:
{
uint8_t v_canonical_boxed_2577_; lean_object* v_res_2578_; 
v_canonical_boxed_2577_ = lean_unbox(v_canonical_2576_);
v_res_2578_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2573_, v_inst_2574_, v_c_2575_, v_canonical_boxed_2577_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object* v_m_2579_, lean_object* v_inst_2580_, lean_object* v_inst_2581_, lean_object* v_c_2582_, uint8_t v_canonical_2583_){
_start:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2580_, v_inst_2581_, v_c_2582_, v_canonical_2583_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object* v_m_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_c_2588_, lean_object* v_canonical_2589_){
_start:
{
uint8_t v_canonical_boxed_2590_; lean_object* v_res_2591_; 
v_canonical_boxed_2590_ = lean_unbox(v_canonical_2589_);
v_res_2591_ = l_Lean_mkCIdentFromRef(v_m_2585_, v_inst_2586_, v_inst_2587_, v_c_2588_, v_canonical_boxed_2590_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object* v_c_2592_){
_start:
{
lean_object* v___x_2593_; uint8_t v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_box(0);
v___x_2594_ = 0;
v___x_2595_ = l_Lean_mkCIdentFrom(v___x_2593_, v_c_2592_, v___x_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object* v_val_2596_){
_start:
{
lean_object* v___x_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2597_ = lean_box(2);
v___x_2598_ = 1;
lean_inc(v_val_2596_);
v___x_2599_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2596_, v___x_2598_);
v___x_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = lean_string_utf8_byte_size(v___x_2599_);
v___x_2602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2599_);
lean_ctor_set(v___x_2602_, 1, v___x_2600_);
lean_ctor_set(v___x_2602_, 2, v___x_2601_);
v___x_2603_ = lean_box(0);
v___x_2604_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2597_);
lean_ctor_set(v___x_2604_, 1, v___x_2602_);
lean_ctor_set(v___x_2604_, 2, v_val_2596_);
lean_ctor_set(v___x_2604_, 3, v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object* v_args_2608_){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2609_ = ((lean_object*)(l_Lean_mkGroupNode___closed__1));
v___x_2610_ = lean_box(2);
v___x_2611_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v___x_2609_);
lean_ctor_set(v___x_2611_, 2, v_args_2608_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object* v_sep_2612_, lean_object* v_as_2613_, size_t v_sz_2614_, size_t v_i_2615_, lean_object* v_b_2616_){
_start:
{
uint8_t v___x_2617_; 
v___x_2617_ = lean_usize_dec_lt(v_i_2615_, v_sz_2614_);
if (v___x_2617_ == 0)
{
lean_dec(v_sep_2612_);
return v_b_2616_;
}
else
{
lean_object* v_fst_2618_; lean_object* v_snd_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2639_; 
v_fst_2618_ = lean_ctor_get(v_b_2616_, 0);
v_snd_2619_ = lean_ctor_get(v_b_2616_, 1);
v_isSharedCheck_2639_ = !lean_is_exclusive(v_b_2616_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2621_ = v_b_2616_;
v_isShared_2622_ = v_isSharedCheck_2639_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_snd_2619_);
lean_inc(v_fst_2618_);
lean_dec(v_b_2616_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2639_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v_r_2624_; lean_object* v_i_2633_; lean_object* v_a_2634_; uint8_t v___x_2635_; 
v_i_2633_ = lean_unsigned_to_nat(0u);
v_a_2634_ = lean_array_uget_borrowed(v_as_2613_, v_i_2615_);
v___x_2635_ = lean_nat_dec_lt(v_i_2633_, v_fst_2618_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; 
lean_inc(v_a_2634_);
v___x_2636_ = lean_array_push(v_snd_2619_, v_a_2634_);
v_r_2624_ = v___x_2636_;
goto v___jp_2623_;
}
else
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_inc(v_sep_2612_);
v___x_2637_ = lean_array_push(v_snd_2619_, v_sep_2612_);
lean_inc(v_a_2634_);
v___x_2638_ = lean_array_push(v___x_2637_, v_a_2634_);
v_r_2624_ = v___x_2638_;
goto v___jp_2623_;
}
v___jp_2623_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
v___x_2625_ = lean_unsigned_to_nat(1u);
v___x_2626_ = lean_nat_add(v_fst_2618_, v___x_2625_);
lean_dec(v_fst_2618_);
if (v_isShared_2622_ == 0)
{
lean_ctor_set(v___x_2621_, 1, v_r_2624_);
lean_ctor_set(v___x_2621_, 0, v___x_2626_);
v___x_2628_ = v___x_2621_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2632_, 1, v_r_2624_);
v___x_2628_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
size_t v___x_2629_; size_t v___x_2630_; 
v___x_2629_ = ((size_t)1ULL);
v___x_2630_ = lean_usize_add(v_i_2615_, v___x_2629_);
v_i_2615_ = v___x_2630_;
v_b_2616_ = v___x_2628_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object* v_sep_2640_, lean_object* v_as_2641_, lean_object* v_sz_2642_, lean_object* v_i_2643_, lean_object* v_b_2644_){
_start:
{
size_t v_sz_boxed_2645_; size_t v_i_boxed_2646_; lean_object* v_res_2647_; 
v_sz_boxed_2645_ = lean_unbox_usize(v_sz_2642_);
lean_dec(v_sz_2642_);
v_i_boxed_2646_ = lean_unbox_usize(v_i_2643_);
lean_dec(v_i_2643_);
v_res_2647_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2640_, v_as_2641_, v_sz_boxed_2645_, v_i_boxed_2646_, v_b_2644_);
lean_dec_ref(v_as_2641_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object* v_as_2653_, lean_object* v_sep_2654_){
_start:
{
lean_object* v___x_2655_; size_t v_sz_2656_; size_t v___x_2657_; lean_object* v___x_2658_; lean_object* v_snd_2659_; 
v___x_2655_ = ((lean_object*)(l_Lean_mkSepArray___closed__1));
v_sz_2656_ = lean_array_size(v_as_2653_);
v___x_2657_ = ((size_t)0ULL);
v___x_2658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2654_, v_as_2653_, v_sz_2656_, v___x_2657_, v___x_2655_);
v_snd_2659_ = lean_ctor_get(v___x_2658_, 1);
lean_inc(v_snd_2659_);
lean_dec_ref(v___x_2658_);
return v_snd_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object* v_as_2660_, lean_object* v_sep_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Lean_mkSepArray(v_as_2660_, v_sep_2661_);
lean_dec_ref(v_as_2660_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object* v_arg_2670_){
_start:
{
if (lean_obj_tag(v_arg_2670_) == 0)
{
lean_object* v___x_2671_; 
v___x_2671_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
return v___x_2671_;
}
else
{
lean_object* v_val_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v_val_2672_ = lean_ctor_get(v_arg_2670_, 0);
lean_inc(v_val_2672_);
lean_dec_ref_known(v_arg_2670_, 1);
v___x_2673_ = lean_unsigned_to_nat(1u);
v___x_2674_ = lean_mk_empty_array_with_capacity(v___x_2673_);
v___x_2675_ = lean_array_push(v___x_2674_, v_val_2672_);
v___x_2676_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2677_ = lean_box(2);
v___x_2678_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v___x_2676_);
lean_ctor_set(v___x_2678_, 2, v___x_2675_);
return v___x_2678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object* v_ref_2685_, uint8_t v_canonical_2686_){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2687_ = ((lean_object*)(l_Lean_mkHole___closed__1));
v___x_2688_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_2689_ = l_Lean_mkAtomFrom(v_ref_2685_, v___x_2688_, v_canonical_2686_);
v___x_2690_ = lean_unsigned_to_nat(1u);
v___x_2691_ = lean_mk_empty_array_with_capacity(v___x_2690_);
v___x_2692_ = lean_array_push(v___x_2691_, v___x_2689_);
v___x_2693_ = lean_box(2);
v___x_2694_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2693_);
lean_ctor_set(v___x_2694_, 1, v___x_2687_);
lean_ctor_set(v___x_2694_, 2, v___x_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object* v_ref_2695_, lean_object* v_canonical_2696_){
_start:
{
uint8_t v_canonical_boxed_2697_; lean_object* v_res_2698_; 
v_canonical_boxed_2697_ = lean_unbox(v_canonical_2696_);
v_res_2698_ = l_Lean_mkHole(v_ref_2695_, v_canonical_boxed_2697_);
lean_dec(v_ref_2695_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object* v_a_2699_, lean_object* v_sep_2700_){
_start:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2701_ = l_Lean_mkSepArray(v_a_2699_, v_sep_2700_);
v___x_2702_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2703_ = lean_box(2);
v___x_2704_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2703_);
lean_ctor_set(v___x_2704_, 1, v___x_2702_);
lean_ctor_set(v___x_2704_, 2, v___x_2701_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object* v_a_2705_, lean_object* v_sep_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_Syntax_mkSep(v_a_2705_, v_sep_2706_);
lean_dec_ref(v_a_2705_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object* v_sep_2714_, lean_object* v_elems_2715_){
_start:
{
uint8_t v___x_2716_; 
lean_inc_ref(v_sep_2714_);
v___x_2716_ = lean_string_isempty(v_sep_2714_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = l_Lean_mkAtom(v_sep_2714_);
v___x_2718_ = l_Lean_mkSepArray(v_elems_2715_, v___x_2717_);
return v___x_2718_;
}
else
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec_ref(v_sep_2714_);
v___x_2719_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___x_2720_ = l_Lean_mkSepArray(v_elems_2715_, v___x_2719_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object* v_sep_2721_, lean_object* v_elems_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2721_, v_elems_2722_);
lean_dec_ref(v_elems_2722_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object* v_elems_2724_, lean_object* v_toPure_2725_, lean_object* v_sep_2726_, lean_object* v_ref_2727_){
_start:
{
lean_object* v___y_2729_; uint8_t v___x_2732_; 
lean_inc_ref(v_sep_2726_);
v___x_2732_ = lean_string_isempty(v_sep_2726_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = l_Lean_mkAtomFrom(v_ref_2727_, v_sep_2726_, v___x_2732_);
v___y_2729_ = v___x_2733_;
goto v___jp_2728_;
}
else
{
lean_object* v___x_2734_; 
lean_dec_ref(v_sep_2726_);
v___x_2734_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___y_2729_ = v___x_2734_;
goto v___jp_2728_;
}
v___jp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = l_Lean_mkSepArray(v_elems_2724_, v___y_2729_);
v___x_2731_ = lean_apply_2(v_toPure_2725_, lean_box(0), v___x_2730_);
return v___x_2731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object* v_elems_2735_, lean_object* v_toPure_2736_, lean_object* v_sep_2737_, lean_object* v_ref_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(v_elems_2735_, v_toPure_2736_, v_sep_2737_, v_ref_2738_);
lean_dec(v_ref_2738_);
lean_dec_ref(v_elems_2735_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object* v_inst_2740_, lean_object* v_inst_2741_, lean_object* v_sep_2742_, lean_object* v_elems_2743_){
_start:
{
lean_object* v_toApplicative_2744_; lean_object* v_toBind_2745_; lean_object* v_getRef_2746_; lean_object* v_toPure_2747_; lean_object* v___f_2748_; lean_object* v___x_2749_; 
v_toApplicative_2744_ = lean_ctor_get(v_inst_2740_, 0);
lean_inc_ref(v_toApplicative_2744_);
v_toBind_2745_ = lean_ctor_get(v_inst_2740_, 1);
lean_inc(v_toBind_2745_);
lean_dec_ref(v_inst_2740_);
v_getRef_2746_ = lean_ctor_get(v_inst_2741_, 0);
lean_inc(v_getRef_2746_);
lean_dec_ref(v_inst_2741_);
v_toPure_2747_ = lean_ctor_get(v_toApplicative_2744_, 1);
lean_inc(v_toPure_2747_);
lean_dec_ref(v_toApplicative_2744_);
v___f_2748_ = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2748_, 0, v_elems_2743_);
lean_closure_set(v___f_2748_, 1, v_toPure_2747_);
lean_closure_set(v___f_2748_, 2, v_sep_2742_);
v___x_2749_ = lean_apply_4(v_toBind_2745_, lean_box(0), lean_box(0), v_getRef_2746_, v___f_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object* v_m_2750_, lean_object* v_inst_2751_, lean_object* v_inst_2752_, lean_object* v_sep_2753_, lean_object* v_elems_2754_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(v_inst_2751_, v_inst_2752_, v_sep_2753_, v_elems_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeArraySepArray(lean_object* v_sep_2756_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElems___boxed), 2, 1);
lean_closure_set(v___x_2757_, 0, v_sep_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object* v_sep_2758_, lean_object* v_elems_2759_){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = l_unsafeCast___redArg(v_elems_2759_);
v___x_2761_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2758_, v___x_2760_);
lean_dec(v___x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object* v_sep_2762_, lean_object* v_elems_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v_sep_2762_, v_elems_2763_);
lean_dec_ref(v_elems_2763_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object* v_k_2765_, lean_object* v_sep_2766_, lean_object* v_elems_2767_){
_start:
{
lean_object* v___x_2768_; 
v___x_2768_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v_sep_2766_, v_elems_2767_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object* v_k_2769_, lean_object* v_sep_2770_, lean_object* v_elems_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l_Lean_Syntax_TSepArray_ofElems(v_k_2769_, v_sep_2770_, v_elems_2771_);
lean_dec_ref(v_elems_2771_);
lean_dec(v_k_2769_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object* v_k_2773_, lean_object* v_sep_2774_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_ofElems___boxed), 3, 2);
lean_closure_set(v___x_2775_, 0, v_k_2773_);
lean_closure_set(v___x_2775_, 1, v_sep_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object* v_fn_2782_, lean_object* v_x_2783_){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2784_ = lean_array_get_size(v_x_2783_);
v___x_2785_ = lean_unsigned_to_nat(0u);
v___x_2786_ = lean_nat_dec_eq(v___x_2784_, v___x_2785_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2787_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_2788_ = l_unsafeCast___redArg(v_x_2783_);
v___x_2789_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2790_ = lean_box(2);
v___x_2791_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
lean_ctor_set(v___x_2791_, 1, v___x_2789_);
lean_ctor_set(v___x_2791_, 2, v___x_2788_);
v___x_2792_ = lean_unsigned_to_nat(2u);
v___x_2793_ = lean_mk_empty_array_with_capacity(v___x_2792_);
v___x_2794_ = lean_array_push(v___x_2793_, v_fn_2782_);
v___x_2795_ = lean_array_push(v___x_2794_, v___x_2791_);
v___x_2796_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2790_);
lean_ctor_set(v___x_2796_, 1, v___x_2787_);
lean_ctor_set(v___x_2796_, 2, v___x_2795_);
return v___x_2796_;
}
else
{
return v_fn_2782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp___boxed(lean_object* v_fn_2797_, lean_object* v_x_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_Syntax_mkApp(v_fn_2797_, v_x_2798_);
lean_dec_ref(v_x_2798_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object* v_fn_2800_, lean_object* v_args_2801_){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = l_Lean_mkCIdent(v_fn_2800_);
v___x_2803_ = l_Lean_Syntax_mkApp(v___x_2802_, v_args_2801_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp___boxed(lean_object* v_fn_2804_, lean_object* v_args_2805_){
_start:
{
lean_object* v_res_2806_; 
v_res_2806_ = l_Lean_Syntax_mkCApp(v_fn_2804_, v_args_2805_);
lean_dec_ref(v_args_2805_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object* v_kind_2807_, lean_object* v_val_2808_, lean_object* v_info_2809_){
_start:
{
lean_object* v_atom_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_atom_2810_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2810_, 0, v_info_2809_);
lean_ctor_set(v_atom_2810_, 1, v_val_2808_);
v___x_2811_ = lean_unsigned_to_nat(1u);
v___x_2812_ = lean_mk_empty_array_with_capacity(v___x_2811_);
v___x_2813_ = lean_array_push(v___x_2812_, v_atom_2810_);
v___x_2814_ = lean_box(2);
v___x_2815_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
lean_ctor_set(v___x_2815_, 1, v_kind_2807_);
lean_ctor_set(v___x_2815_, 2, v___x_2813_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t v_val_2819_, lean_object* v_info_2820_){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2821_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_2822_ = l_Char_quote(v_val_2819_);
v___x_2823_ = l_Lean_Syntax_mkLit(v___x_2821_, v___x_2822_, v_info_2820_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object* v_val_2824_, lean_object* v_info_2825_){
_start:
{
uint32_t v_val_boxed_2826_; lean_object* v_res_2827_; 
v_val_boxed_2826_ = lean_unbox_uint32(v_val_2824_);
lean_dec(v_val_2824_);
v_res_2827_ = l_Lean_Syntax_mkCharLit(v_val_boxed_2826_, v_info_2825_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object* v_val_2831_, lean_object* v_info_2832_){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_2834_ = l_String_quote(v_val_2831_);
v___x_2835_ = l_Lean_Syntax_mkLit(v___x_2833_, v___x_2834_, v_info_2832_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object* v_val_2839_, lean_object* v_info_2840_){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2842_ = l_Lean_Syntax_mkLit(v___x_2841_, v_val_2839_, v_info_2840_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object* v_val_2843_, lean_object* v_info_2844_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2845_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2846_ = l_Nat_reprFast(v_val_2843_);
v___x_2847_ = l_Lean_Syntax_mkLit(v___x_2845_, v___x_2846_, v_info_2844_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object* v_val_2851_, lean_object* v_info_2852_){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2853_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_2854_ = l_Lean_Syntax_mkLit(v___x_2853_, v_val_2851_, v_info_2852_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object* v_val_2858_, lean_object* v_info_2859_){
_start:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2860_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_2861_ = l_Lean_Syntax_mkLit(v___x_2860_, v_val_2858_, v_info_2859_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object* v_s_2862_, lean_object* v_i_2863_, lean_object* v_val_2864_){
_start:
{
uint8_t v___x_2865_; 
v___x_2865_ = lean_string_utf8_at_end(v_s_2862_, v_i_2863_);
if (v___x_2865_ == 0)
{
uint32_t v_c_2866_; uint32_t v___x_2867_; uint8_t v___x_2868_; 
v_c_2866_ = lean_string_utf8_get(v_s_2862_, v_i_2863_);
v___x_2867_ = 48;
v___x_2868_ = lean_uint32_dec_eq(v_c_2866_, v___x_2867_);
if (v___x_2868_ == 0)
{
uint32_t v___x_2869_; uint8_t v___x_2870_; 
v___x_2869_ = 49;
v___x_2870_ = lean_uint32_dec_eq(v_c_2866_, v___x_2869_);
if (v___x_2870_ == 0)
{
uint32_t v___x_2871_; uint8_t v___x_2872_; 
v___x_2871_ = 95;
v___x_2872_ = lean_uint32_dec_eq(v_c_2866_, v___x_2871_);
if (v___x_2872_ == 0)
{
lean_object* v___x_2873_; 
lean_dec(v_val_2864_);
lean_dec(v_i_2863_);
v___x_2873_ = lean_box(0);
return v___x_2873_;
}
else
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_string_utf8_next(v_s_2862_, v_i_2863_);
lean_dec(v_i_2863_);
v_i_2863_ = v___x_2874_;
goto _start;
}
}
else
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2876_ = lean_string_utf8_next(v_s_2862_, v_i_2863_);
lean_dec(v_i_2863_);
v___x_2877_ = lean_unsigned_to_nat(2u);
v___x_2878_ = lean_nat_mul(v___x_2877_, v_val_2864_);
lean_dec(v_val_2864_);
v___x_2879_ = lean_unsigned_to_nat(1u);
v___x_2880_ = lean_nat_add(v___x_2878_, v___x_2879_);
lean_dec(v___x_2878_);
v_i_2863_ = v___x_2876_;
v_val_2864_ = v___x_2880_;
goto _start;
}
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2882_ = lean_string_utf8_next(v_s_2862_, v_i_2863_);
lean_dec(v_i_2863_);
v___x_2883_ = lean_unsigned_to_nat(2u);
v___x_2884_ = lean_nat_mul(v___x_2883_, v_val_2864_);
lean_dec(v_val_2864_);
v_i_2863_ = v___x_2882_;
v_val_2864_ = v___x_2884_;
goto _start;
}
}
else
{
lean_object* v___x_2886_; 
lean_dec(v_i_2863_);
v___x_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2886_, 0, v_val_2864_);
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object* v_s_2887_, lean_object* v_i_2888_, lean_object* v_val_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_2887_, v_i_2888_, v_val_2889_);
lean_dec_ref(v_s_2887_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object* v_s_2891_, lean_object* v_i_2892_, lean_object* v_val_2893_){
_start:
{
uint8_t v___x_2894_; 
v___x_2894_ = lean_string_utf8_at_end(v_s_2891_, v_i_2892_);
if (v___x_2894_ == 0)
{
uint32_t v_c_2895_; uint8_t v___y_2897_; uint32_t v___x_2911_; uint8_t v___x_2912_; 
v_c_2895_ = lean_string_utf8_get(v_s_2891_, v_i_2892_);
v___x_2911_ = 48;
v___x_2912_ = lean_uint32_dec_le(v___x_2911_, v_c_2895_);
if (v___x_2912_ == 0)
{
v___y_2897_ = v___x_2894_;
goto v___jp_2896_;
}
else
{
uint32_t v___x_2913_; uint8_t v___x_2914_; 
v___x_2913_ = 55;
v___x_2914_ = lean_uint32_dec_le(v_c_2895_, v___x_2913_);
v___y_2897_ = v___x_2914_;
goto v___jp_2896_;
}
v___jp_2896_:
{
if (v___y_2897_ == 0)
{
uint32_t v___x_2898_; uint8_t v___x_2899_; 
v___x_2898_ = 95;
v___x_2899_ = lean_uint32_dec_eq(v_c_2895_, v___x_2898_);
if (v___x_2899_ == 0)
{
lean_object* v___x_2900_; 
lean_dec(v_val_2893_);
lean_dec(v_i_2892_);
v___x_2900_ = lean_box(0);
return v___x_2900_;
}
else
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_string_utf8_next(v_s_2891_, v_i_2892_);
lean_dec(v_i_2892_);
v_i_2892_ = v___x_2901_;
goto _start;
}
}
else
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2903_ = lean_string_utf8_next(v_s_2891_, v_i_2892_);
lean_dec(v_i_2892_);
v___x_2904_ = lean_unsigned_to_nat(8u);
v___x_2905_ = lean_nat_mul(v___x_2904_, v_val_2893_);
lean_dec(v_val_2893_);
v___x_2906_ = lean_uint32_to_nat(v_c_2895_);
v___x_2907_ = lean_nat_add(v___x_2905_, v___x_2906_);
lean_dec(v___x_2906_);
lean_dec(v___x_2905_);
v___x_2908_ = lean_unsigned_to_nat(48u);
v___x_2909_ = lean_nat_sub(v___x_2907_, v___x_2908_);
lean_dec(v___x_2907_);
v_i_2892_ = v___x_2903_;
v_val_2893_ = v___x_2909_;
goto _start;
}
}
}
else
{
lean_object* v___x_2915_; 
lean_dec(v_i_2892_);
v___x_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2915_, 0, v_val_2893_);
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object* v_s_2916_, lean_object* v_i_2917_, lean_object* v_val_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_2916_, v_i_2917_, v_val_2918_);
lean_dec_ref(v_s_2916_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object* v_s_2920_, lean_object* v_i_2921_){
_start:
{
uint32_t v_c_2922_; lean_object* v_i_2923_; uint32_t v___x_2950_; uint8_t v___x_2951_; 
v_c_2922_ = lean_string_utf8_get(v_s_2920_, v_i_2921_);
v_i_2923_ = lean_string_utf8_next(v_s_2920_, v_i_2921_);
v___x_2950_ = 48;
v___x_2951_ = lean_uint32_dec_le(v___x_2950_, v_c_2922_);
if (v___x_2951_ == 0)
{
goto v___jp_2938_;
}
else
{
uint32_t v___x_2952_; uint8_t v___x_2953_; 
v___x_2952_ = 57;
v___x_2953_ = lean_uint32_dec_le(v_c_2922_, v___x_2952_);
if (v___x_2953_ == 0)
{
goto v___jp_2938_;
}
else
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2954_ = lean_uint32_to_nat(v_c_2922_);
v___x_2955_ = lean_unsigned_to_nat(48u);
v___x_2956_ = lean_nat_sub(v___x_2954_, v___x_2955_);
lean_dec(v___x_2954_);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
lean_ctor_set(v___x_2957_, 1, v_i_2923_);
v___x_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2957_);
return v___x_2958_;
}
}
v___jp_2924_:
{
uint32_t v___x_2925_; uint8_t v___x_2926_; 
v___x_2925_ = 65;
v___x_2926_ = lean_uint32_dec_le(v___x_2925_, v_c_2922_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; 
lean_dec(v_i_2923_);
v___x_2927_ = lean_box(0);
return v___x_2927_;
}
else
{
uint32_t v___x_2928_; uint8_t v___x_2929_; 
v___x_2928_ = 70;
v___x_2929_ = lean_uint32_dec_le(v_c_2922_, v___x_2928_);
if (v___x_2929_ == 0)
{
lean_object* v___x_2930_; 
lean_dec(v_i_2923_);
v___x_2930_ = lean_box(0);
return v___x_2930_;
}
else
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2931_ = lean_unsigned_to_nat(10u);
v___x_2932_ = lean_uint32_to_nat(v_c_2922_);
v___x_2933_ = lean_nat_add(v___x_2931_, v___x_2932_);
lean_dec(v___x_2932_);
v___x_2934_ = lean_unsigned_to_nat(65u);
v___x_2935_ = lean_nat_sub(v___x_2933_, v___x_2934_);
lean_dec(v___x_2933_);
v___x_2936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
lean_ctor_set(v___x_2936_, 1, v_i_2923_);
v___x_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
return v___x_2937_;
}
}
}
v___jp_2938_:
{
uint32_t v___x_2939_; uint8_t v___x_2940_; 
v___x_2939_ = 97;
v___x_2940_ = lean_uint32_dec_le(v___x_2939_, v_c_2922_);
if (v___x_2940_ == 0)
{
goto v___jp_2924_;
}
else
{
uint32_t v___x_2941_; uint8_t v___x_2942_; 
v___x_2941_ = 102;
v___x_2942_ = lean_uint32_dec_le(v_c_2922_, v___x_2941_);
if (v___x_2942_ == 0)
{
goto v___jp_2924_;
}
else
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2943_ = lean_unsigned_to_nat(10u);
v___x_2944_ = lean_uint32_to_nat(v_c_2922_);
v___x_2945_ = lean_nat_add(v___x_2943_, v___x_2944_);
lean_dec(v___x_2944_);
v___x_2946_ = lean_unsigned_to_nat(97u);
v___x_2947_ = lean_nat_sub(v___x_2945_, v___x_2946_);
lean_dec(v___x_2945_);
v___x_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
lean_ctor_set(v___x_2948_, 1, v_i_2923_);
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object* v_s_2959_, lean_object* v_i_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2959_, v_i_2960_);
lean_dec(v_i_2960_);
lean_dec_ref(v_s_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object* v_s_2962_, lean_object* v_i_2963_, lean_object* v_val_2964_){
_start:
{
uint8_t v___x_2965_; 
v___x_2965_ = lean_string_utf8_at_end(v_s_2962_, v_i_2963_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; 
v___x_2966_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2962_, v_i_2963_);
if (lean_obj_tag(v___x_2966_) == 0)
{
uint32_t v___x_2967_; uint32_t v___x_2968_; uint8_t v___x_2969_; 
v___x_2967_ = lean_string_utf8_get(v_s_2962_, v_i_2963_);
v___x_2968_ = 95;
v___x_2969_ = lean_uint32_dec_eq(v___x_2967_, v___x_2968_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; 
lean_dec(v_val_2964_);
lean_dec(v_i_2963_);
v___x_2970_ = lean_box(0);
return v___x_2970_;
}
else
{
lean_object* v___x_2971_; 
v___x_2971_ = lean_string_utf8_next(v_s_2962_, v_i_2963_);
lean_dec(v_i_2963_);
v_i_2963_ = v___x_2971_;
goto _start;
}
}
else
{
lean_object* v_val_2973_; lean_object* v_fst_2974_; lean_object* v_snd_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec(v_i_2963_);
v_val_2973_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_val_2973_);
lean_dec_ref_known(v___x_2966_, 1);
v_fst_2974_ = lean_ctor_get(v_val_2973_, 0);
lean_inc(v_fst_2974_);
v_snd_2975_ = lean_ctor_get(v_val_2973_, 1);
lean_inc(v_snd_2975_);
lean_dec(v_val_2973_);
v___x_2976_ = lean_unsigned_to_nat(16u);
v___x_2977_ = lean_nat_mul(v___x_2976_, v_val_2964_);
lean_dec(v_val_2964_);
v___x_2978_ = lean_nat_add(v___x_2977_, v_fst_2974_);
lean_dec(v_fst_2974_);
lean_dec(v___x_2977_);
v_i_2963_ = v_snd_2975_;
v_val_2964_ = v___x_2978_;
goto _start;
}
}
else
{
lean_object* v___x_2980_; 
lean_dec(v_i_2963_);
v___x_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_val_2964_);
return v___x_2980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object* v_s_2981_, lean_object* v_i_2982_, lean_object* v_val_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_2981_, v_i_2982_, v_val_2983_);
lean_dec_ref(v_s_2981_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object* v_s_2985_, lean_object* v_i_2986_, lean_object* v_val_2987_){
_start:
{
uint8_t v___x_2988_; 
v___x_2988_ = lean_string_utf8_at_end(v_s_2985_, v_i_2986_);
if (v___x_2988_ == 0)
{
uint32_t v_c_2989_; uint8_t v___y_2991_; uint32_t v___x_3005_; uint8_t v___x_3006_; 
v_c_2989_ = lean_string_utf8_get(v_s_2985_, v_i_2986_);
v___x_3005_ = 48;
v___x_3006_ = lean_uint32_dec_le(v___x_3005_, v_c_2989_);
if (v___x_3006_ == 0)
{
v___y_2991_ = v___x_2988_;
goto v___jp_2990_;
}
else
{
uint32_t v___x_3007_; uint8_t v___x_3008_; 
v___x_3007_ = 57;
v___x_3008_ = lean_uint32_dec_le(v_c_2989_, v___x_3007_);
v___y_2991_ = v___x_3008_;
goto v___jp_2990_;
}
v___jp_2990_:
{
if (v___y_2991_ == 0)
{
uint32_t v___x_2992_; uint8_t v___x_2993_; 
v___x_2992_ = 95;
v___x_2993_ = lean_uint32_dec_eq(v_c_2989_, v___x_2992_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2994_; 
lean_dec(v_val_2987_);
lean_dec(v_i_2986_);
v___x_2994_ = lean_box(0);
return v___x_2994_;
}
else
{
lean_object* v___x_2995_; 
v___x_2995_ = lean_string_utf8_next(v_s_2985_, v_i_2986_);
lean_dec(v_i_2986_);
v_i_2986_ = v___x_2995_;
goto _start;
}
}
else
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_2997_ = lean_string_utf8_next(v_s_2985_, v_i_2986_);
lean_dec(v_i_2986_);
v___x_2998_ = lean_unsigned_to_nat(10u);
v___x_2999_ = lean_nat_mul(v___x_2998_, v_val_2987_);
lean_dec(v_val_2987_);
v___x_3000_ = lean_uint32_to_nat(v_c_2989_);
v___x_3001_ = lean_nat_add(v___x_2999_, v___x_3000_);
lean_dec(v___x_3000_);
lean_dec(v___x_2999_);
v___x_3002_ = lean_unsigned_to_nat(48u);
v___x_3003_ = lean_nat_sub(v___x_3001_, v___x_3002_);
lean_dec(v___x_3001_);
v_i_2986_ = v___x_2997_;
v_val_2987_ = v___x_3003_;
goto _start;
}
}
}
else
{
lean_object* v___x_3009_; 
lean_dec(v_i_2986_);
v___x_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3009_, 0, v_val_2987_);
return v___x_3009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object* v_s_3010_, lean_object* v_i_3011_, lean_object* v_val_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3010_, v_i_3011_, v_val_3012_);
lean_dec_ref(v_s_3010_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object* v_s_3016_){
_start:
{
lean_object* v_len_3017_; lean_object* v___x_3018_; uint8_t v___x_3028_; 
v_len_3017_ = lean_string_length(v_s_3016_);
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3028_ = lean_nat_dec_eq(v_len_3017_, v___x_3018_);
if (v___x_3028_ == 0)
{
uint32_t v_c_3029_; uint32_t v___x_3030_; uint8_t v___x_3031_; 
v_c_3029_ = lean_string_utf8_get(v_s_3016_, v___x_3018_);
v___x_3030_ = 48;
v___x_3031_ = lean_uint32_dec_eq(v_c_3029_, v___x_3030_);
if (v___x_3031_ == 0)
{
uint8_t v___x_3032_; 
lean_dec(v_len_3017_);
v___x_3032_ = lean_uint32_dec_le(v___x_3030_, v_c_3029_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; 
v___x_3033_ = lean_box(0);
return v___x_3033_;
}
else
{
uint32_t v___x_3034_; uint8_t v___x_3035_; 
v___x_3034_ = 57;
v___x_3035_ = lean_uint32_dec_le(v_c_3029_, v___x_3034_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_box(0);
return v___x_3036_;
}
else
{
lean_object* v___x_3037_; 
v___x_3037_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3016_, v___x_3018_, v___x_3018_);
return v___x_3037_;
}
}
}
else
{
lean_object* v___x_3038_; uint8_t v___x_3039_; 
v___x_3038_ = lean_unsigned_to_nat(1u);
v___x_3039_ = lean_nat_dec_eq(v_len_3017_, v___x_3038_);
lean_dec(v_len_3017_);
if (v___x_3039_ == 0)
{
uint32_t v_c_3040_; uint32_t v___x_3041_; uint8_t v___x_3042_; 
v_c_3040_ = lean_string_utf8_get(v_s_3016_, v___x_3038_);
v___x_3041_ = 120;
v___x_3042_ = lean_uint32_dec_eq(v_c_3040_, v___x_3041_);
if (v___x_3042_ == 0)
{
uint32_t v___x_3043_; uint8_t v___x_3044_; 
v___x_3043_ = 88;
v___x_3044_ = lean_uint32_dec_eq(v_c_3040_, v___x_3043_);
if (v___x_3044_ == 0)
{
uint32_t v___x_3045_; uint8_t v___x_3046_; 
v___x_3045_ = 98;
v___x_3046_ = lean_uint32_dec_eq(v_c_3040_, v___x_3045_);
if (v___x_3046_ == 0)
{
uint32_t v___x_3047_; uint8_t v___x_3048_; 
v___x_3047_ = 66;
v___x_3048_ = lean_uint32_dec_eq(v_c_3040_, v___x_3047_);
if (v___x_3048_ == 0)
{
uint32_t v___x_3049_; uint8_t v___x_3050_; 
v___x_3049_ = 111;
v___x_3050_ = lean_uint32_dec_eq(v_c_3040_, v___x_3049_);
if (v___x_3050_ == 0)
{
uint32_t v___x_3051_; uint8_t v___x_3052_; 
v___x_3051_ = 79;
v___x_3052_ = lean_uint32_dec_eq(v_c_3040_, v___x_3051_);
if (v___x_3052_ == 0)
{
uint8_t v___x_3053_; 
v___x_3053_ = lean_uint32_dec_le(v___x_3030_, v_c_3040_);
if (v___x_3053_ == 0)
{
lean_object* v___x_3054_; 
v___x_3054_ = lean_box(0);
return v___x_3054_;
}
else
{
uint32_t v___x_3055_; uint8_t v___x_3056_; 
v___x_3055_ = 57;
v___x_3056_ = lean_uint32_dec_le(v_c_3040_, v___x_3055_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; 
v___x_3057_ = lean_box(0);
return v___x_3057_;
}
else
{
lean_object* v___x_3058_; 
v___x_3058_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3016_, v___x_3018_, v___x_3018_);
return v___x_3058_;
}
}
}
else
{
goto v___jp_3019_;
}
}
else
{
goto v___jp_3019_;
}
}
else
{
goto v___jp_3022_;
}
}
else
{
goto v___jp_3022_;
}
}
else
{
goto v___jp_3025_;
}
}
else
{
goto v___jp_3025_;
}
}
else
{
lean_object* v___x_3059_; 
v___x_3059_ = ((lean_object*)(l_Lean_Syntax_decodeNatLitVal_x3f___closed__0));
return v___x_3059_;
}
}
}
else
{
lean_object* v___x_3060_; 
lean_dec(v_len_3017_);
v___x_3060_ = lean_box(0);
return v___x_3060_;
}
v___jp_3019_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3020_ = lean_unsigned_to_nat(2u);
v___x_3021_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_3016_, v___x_3020_, v___x_3018_);
return v___x_3021_;
}
v___jp_3022_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_unsigned_to_nat(2u);
v___x_3024_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_3016_, v___x_3023_, v___x_3018_);
return v___x_3024_;
}
v___jp_3025_:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = lean_unsigned_to_nat(2u);
v___x_3027_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_3016_, v___x_3026_, v___x_3018_);
return v___x_3027_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object* v_s_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_s_3061_);
lean_dec_ref(v_s_3061_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object* v_litKind_3063_, lean_object* v_stx_3064_){
_start:
{
if (lean_obj_tag(v_stx_3064_) == 1)
{
lean_object* v_kind_3065_; lean_object* v_args_3066_; uint8_t v___y_3068_; uint8_t v___x_3075_; 
v_kind_3065_ = lean_ctor_get(v_stx_3064_, 1);
v_args_3066_ = lean_ctor_get(v_stx_3064_, 2);
v___x_3075_ = lean_name_eq(v_kind_3065_, v_litKind_3063_);
if (v___x_3075_ == 0)
{
v___y_3068_ = v___x_3075_;
goto v___jp_3067_;
}
else
{
lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3076_ = lean_array_get_size(v_args_3066_);
v___x_3077_ = lean_unsigned_to_nat(1u);
v___x_3078_ = lean_nat_dec_eq(v___x_3076_, v___x_3077_);
v___y_3068_ = v___x_3078_;
goto v___jp_3067_;
}
v___jp_3067_:
{
if (v___y_3068_ == 0)
{
lean_object* v___x_3069_; 
v___x_3069_ = lean_box(0);
return v___x_3069_;
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = lean_unsigned_to_nat(0u);
v___x_3071_ = lean_array_fget_borrowed(v_args_3066_, v___x_3070_);
if (lean_obj_tag(v___x_3071_) == 2)
{
lean_object* v_val_3072_; lean_object* v___x_3073_; 
v_val_3072_ = lean_ctor_get(v___x_3071_, 1);
lean_inc_ref(v_val_3072_);
v___x_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3073_, 0, v_val_3072_);
return v___x_3073_;
}
else
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_box(0);
return v___x_3074_;
}
}
}
}
else
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_box(0);
return v___x_3079_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object* v_litKind_3080_, lean_object* v_stx_3081_){
_start:
{
lean_object* v_res_3082_; 
v_res_3082_ = l_Lean_Syntax_isLit_x3f(v_litKind_3080_, v_stx_3081_);
lean_dec(v_stx_3081_);
lean_dec(v_litKind_3080_);
return v_res_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object* v_litKind_3083_, lean_object* v_stx_3084_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = l_Lean_Syntax_isLit_x3f(v_litKind_3083_, v_stx_3084_);
if (lean_obj_tag(v___x_3085_) == 1)
{
lean_object* v_val_3086_; lean_object* v___x_3087_; 
v_val_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_val_3086_);
lean_dec_ref_known(v___x_3085_, 1);
v___x_3087_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_val_3086_);
lean_dec(v_val_3086_);
return v___x_3087_;
}
else
{
lean_object* v___x_3088_; 
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
return v___x_3088_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object* v_litKind_3089_, lean_object* v_stx_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v_litKind_3089_, v_stx_3090_);
lean_dec(v_stx_3090_);
lean_dec(v_litKind_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object* v_s_3092_){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_3094_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3093_, v_s_3092_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object* v_s_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l_Lean_Syntax_isNatLit_x3f(v_s_3095_);
lean_dec(v_s_3095_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object* v_s_3100_){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = ((lean_object*)(l_Lean_Syntax_isFieldIdx_x3f___closed__1));
v___x_3102_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3101_, v_s_3100_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object* v_s_3103_){
_start:
{
lean_object* v_res_3104_; 
v_res_3104_ = l_Lean_Syntax_isFieldIdx_x3f(v_s_3103_);
lean_dec(v_s_3103_);
return v_res_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object* v_s_3105_, lean_object* v_i_3106_, lean_object* v_val_3107_, lean_object* v_e_3108_, uint8_t v_sign_3109_, lean_object* v_exp_3110_){
_start:
{
uint8_t v___x_3111_; 
v___x_3111_ = lean_string_utf8_at_end(v_s_3105_, v_i_3106_);
if (v___x_3111_ == 0)
{
uint32_t v_c_3112_; uint8_t v___y_3114_; uint32_t v___x_3128_; uint8_t v___x_3129_; 
v_c_3112_ = lean_string_utf8_get(v_s_3105_, v_i_3106_);
v___x_3128_ = 48;
v___x_3129_ = lean_uint32_dec_le(v___x_3128_, v_c_3112_);
if (v___x_3129_ == 0)
{
v___y_3114_ = v___x_3111_;
goto v___jp_3113_;
}
else
{
uint32_t v___x_3130_; uint8_t v___x_3131_; 
v___x_3130_ = 57;
v___x_3131_ = lean_uint32_dec_le(v_c_3112_, v___x_3130_);
v___y_3114_ = v___x_3131_;
goto v___jp_3113_;
}
v___jp_3113_:
{
if (v___y_3114_ == 0)
{
uint32_t v___x_3115_; uint8_t v___x_3116_; 
v___x_3115_ = 95;
v___x_3116_ = lean_uint32_dec_eq(v_c_3112_, v___x_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; 
lean_dec(v_exp_3110_);
lean_dec(v_val_3107_);
lean_dec(v_i_3106_);
v___x_3117_ = lean_box(0);
return v___x_3117_;
}
else
{
lean_object* v___x_3118_; 
v___x_3118_ = lean_string_utf8_next(v_s_3105_, v_i_3106_);
lean_dec(v_i_3106_);
v_i_3106_ = v___x_3118_;
goto _start;
}
}
else
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3120_ = lean_string_utf8_next(v_s_3105_, v_i_3106_);
lean_dec(v_i_3106_);
v___x_3121_ = lean_unsigned_to_nat(10u);
v___x_3122_ = lean_nat_mul(v___x_3121_, v_exp_3110_);
lean_dec(v_exp_3110_);
v___x_3123_ = lean_uint32_to_nat(v_c_3112_);
v___x_3124_ = lean_nat_add(v___x_3122_, v___x_3123_);
lean_dec(v___x_3123_);
lean_dec(v___x_3122_);
v___x_3125_ = lean_unsigned_to_nat(48u);
v___x_3126_ = lean_nat_sub(v___x_3124_, v___x_3125_);
lean_dec(v___x_3124_);
v_i_3106_ = v___x_3120_;
v_exp_3110_ = v___x_3126_;
goto _start;
}
}
}
else
{
lean_dec(v_i_3106_);
if (v_sign_3109_ == 0)
{
uint8_t v___x_3132_; 
v___x_3132_ = lean_nat_dec_le(v_e_3108_, v_exp_3110_);
if (v___x_3132_ == 0)
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3133_ = lean_nat_sub(v_e_3108_, v_exp_3110_);
lean_dec(v_exp_3110_);
v___x_3134_ = lean_box(v___x_3111_);
v___x_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
lean_ctor_set(v___x_3135_, 1, v___x_3133_);
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v_val_3107_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
return v___x_3137_;
}
else
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3138_ = lean_nat_sub(v_exp_3110_, v_e_3108_);
lean_dec(v_exp_3110_);
v___x_3139_ = lean_box(v_sign_3109_);
v___x_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___x_3138_);
v___x_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_val_3107_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3143_ = lean_nat_add(v_exp_3110_, v_e_3108_);
lean_dec(v_exp_3110_);
v___x_3144_ = lean_box(v_sign_3109_);
v___x_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
lean_ctor_set(v___x_3145_, 1, v___x_3143_);
v___x_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3146_, 0, v_val_3107_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3146_);
return v___x_3147_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object* v_s_3148_, lean_object* v_i_3149_, lean_object* v_val_3150_, lean_object* v_e_3151_, lean_object* v_sign_3152_, lean_object* v_exp_3153_){
_start:
{
uint8_t v_sign_boxed_3154_; lean_object* v_res_3155_; 
v_sign_boxed_3154_ = lean_unbox(v_sign_3152_);
v_res_3155_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3148_, v_i_3149_, v_val_3150_, v_e_3151_, v_sign_boxed_3154_, v_exp_3153_);
lean_dec(v_e_3151_);
lean_dec_ref(v_s_3148_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object* v_s_3156_, lean_object* v_i_3157_, lean_object* v_val_3158_, lean_object* v_e_3159_){
_start:
{
uint8_t v___x_3160_; 
v___x_3160_ = lean_string_utf8_at_end(v_s_3156_, v_i_3157_);
if (v___x_3160_ == 0)
{
uint32_t v_c_3161_; uint32_t v___x_3162_; uint8_t v___x_3163_; 
v_c_3161_ = lean_string_utf8_get(v_s_3156_, v_i_3157_);
v___x_3162_ = 45;
v___x_3163_ = lean_uint32_dec_eq(v_c_3161_, v___x_3162_);
if (v___x_3163_ == 0)
{
uint32_t v___x_3164_; uint8_t v___x_3165_; 
v___x_3164_ = 43;
v___x_3165_ = lean_uint32_dec_eq(v_c_3161_, v___x_3164_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_unsigned_to_nat(0u);
v___x_3167_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3156_, v_i_3157_, v_val_3158_, v_e_3159_, v___x_3165_, v___x_3166_);
return v___x_3167_;
}
else
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3168_ = lean_string_utf8_next(v_s_3156_, v_i_3157_);
lean_dec(v_i_3157_);
v___x_3169_ = lean_unsigned_to_nat(0u);
v___x_3170_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3156_, v___x_3168_, v_val_3158_, v_e_3159_, v___x_3163_, v___x_3169_);
return v___x_3170_;
}
}
else
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3171_ = lean_string_utf8_next(v_s_3156_, v_i_3157_);
lean_dec(v_i_3157_);
v___x_3172_ = lean_unsigned_to_nat(0u);
v___x_3173_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3156_, v___x_3171_, v_val_3158_, v_e_3159_, v___x_3163_, v___x_3172_);
return v___x_3173_;
}
}
else
{
lean_object* v___x_3174_; 
lean_dec(v_val_3158_);
lean_dec(v_i_3157_);
v___x_3174_ = lean_box(0);
return v___x_3174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object* v_s_3175_, lean_object* v_i_3176_, lean_object* v_val_3177_, lean_object* v_e_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3175_, v_i_3176_, v_val_3177_, v_e_3178_);
lean_dec(v_e_3178_);
lean_dec_ref(v_s_3175_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object* v_s_3180_, lean_object* v_i_3181_, lean_object* v_val_3182_, lean_object* v_e_3183_){
_start:
{
uint8_t v___x_3187_; 
v___x_3187_ = lean_string_utf8_at_end(v_s_3180_, v_i_3181_);
if (v___x_3187_ == 0)
{
uint32_t v_c_3188_; uint8_t v___y_3190_; uint32_t v___x_3210_; uint8_t v___x_3211_; 
v_c_3188_ = lean_string_utf8_get(v_s_3180_, v_i_3181_);
v___x_3210_ = 48;
v___x_3211_ = lean_uint32_dec_le(v___x_3210_, v_c_3188_);
if (v___x_3211_ == 0)
{
v___y_3190_ = v___x_3187_;
goto v___jp_3189_;
}
else
{
uint32_t v___x_3212_; uint8_t v___x_3213_; 
v___x_3212_ = 57;
v___x_3213_ = lean_uint32_dec_le(v_c_3188_, v___x_3212_);
v___y_3190_ = v___x_3213_;
goto v___jp_3189_;
}
v___jp_3189_:
{
if (v___y_3190_ == 0)
{
uint32_t v___x_3191_; uint8_t v___x_3192_; 
v___x_3191_ = 95;
v___x_3192_ = lean_uint32_dec_eq(v_c_3188_, v___x_3191_);
if (v___x_3192_ == 0)
{
uint32_t v___x_3193_; uint8_t v___x_3194_; 
v___x_3193_ = 101;
v___x_3194_ = lean_uint32_dec_eq(v_c_3188_, v___x_3193_);
if (v___x_3194_ == 0)
{
uint32_t v___x_3195_; uint8_t v___x_3196_; 
v___x_3195_ = 69;
v___x_3196_ = lean_uint32_dec_eq(v_c_3188_, v___x_3195_);
if (v___x_3196_ == 0)
{
lean_object* v___x_3197_; 
lean_dec(v_e_3183_);
lean_dec(v_val_3182_);
lean_dec(v_i_3181_);
v___x_3197_ = lean_box(0);
return v___x_3197_;
}
else
{
goto v___jp_3184_;
}
}
else
{
goto v___jp_3184_;
}
}
else
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_string_utf8_next(v_s_3180_, v_i_3181_);
lean_dec(v_i_3181_);
v_i_3181_ = v___x_3198_;
goto _start;
}
}
else
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3200_ = lean_string_utf8_next(v_s_3180_, v_i_3181_);
lean_dec(v_i_3181_);
v___x_3201_ = lean_unsigned_to_nat(10u);
v___x_3202_ = lean_nat_mul(v___x_3201_, v_val_3182_);
lean_dec(v_val_3182_);
v___x_3203_ = lean_uint32_to_nat(v_c_3188_);
v___x_3204_ = lean_nat_add(v___x_3202_, v___x_3203_);
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
v___x_3205_ = lean_unsigned_to_nat(48u);
v___x_3206_ = lean_nat_sub(v___x_3204_, v___x_3205_);
lean_dec(v___x_3204_);
v___x_3207_ = lean_unsigned_to_nat(1u);
v___x_3208_ = lean_nat_add(v_e_3183_, v___x_3207_);
lean_dec(v_e_3183_);
v_i_3181_ = v___x_3200_;
v_val_3182_ = v___x_3206_;
v_e_3183_ = v___x_3208_;
goto _start;
}
}
}
else
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
lean_dec(v_i_3181_);
v___x_3214_ = lean_box(v___x_3187_);
v___x_3215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
lean_ctor_set(v___x_3215_, 1, v_e_3183_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_val_3182_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
v___x_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3216_);
return v___x_3217_;
}
v___jp_3184_:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = lean_string_utf8_next(v_s_3180_, v_i_3181_);
lean_dec(v_i_3181_);
v___x_3186_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3180_, v___x_3185_, v_val_3182_, v_e_3183_);
lean_dec(v_e_3183_);
return v___x_3186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object* v_s_3218_, lean_object* v_i_3219_, lean_object* v_val_3220_, lean_object* v_e_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3218_, v_i_3219_, v_val_3220_, v_e_3221_);
lean_dec_ref(v_s_3218_);
return v_res_3222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object* v_s_3223_, lean_object* v_i_3224_, lean_object* v_val_3225_){
_start:
{
uint8_t v___x_3230_; 
v___x_3230_ = lean_string_utf8_at_end(v_s_3223_, v_i_3224_);
if (v___x_3230_ == 0)
{
uint32_t v_c_3231_; uint8_t v___y_3233_; uint32_t v___x_3256_; uint8_t v___x_3257_; 
v_c_3231_ = lean_string_utf8_get(v_s_3223_, v_i_3224_);
v___x_3256_ = 48;
v___x_3257_ = lean_uint32_dec_le(v___x_3256_, v_c_3231_);
if (v___x_3257_ == 0)
{
v___y_3233_ = v___x_3230_;
goto v___jp_3232_;
}
else
{
uint32_t v___x_3258_; uint8_t v___x_3259_; 
v___x_3258_ = 57;
v___x_3259_ = lean_uint32_dec_le(v_c_3231_, v___x_3258_);
v___y_3233_ = v___x_3259_;
goto v___jp_3232_;
}
v___jp_3232_:
{
if (v___y_3233_ == 0)
{
uint32_t v___x_3234_; uint8_t v___x_3235_; 
v___x_3234_ = 95;
v___x_3235_ = lean_uint32_dec_eq(v_c_3231_, v___x_3234_);
if (v___x_3235_ == 0)
{
uint32_t v___x_3236_; uint8_t v___x_3237_; 
v___x_3236_ = 46;
v___x_3237_ = lean_uint32_dec_eq(v_c_3231_, v___x_3236_);
if (v___x_3237_ == 0)
{
uint32_t v___x_3238_; uint8_t v___x_3239_; 
v___x_3238_ = 101;
v___x_3239_ = lean_uint32_dec_eq(v_c_3231_, v___x_3238_);
if (v___x_3239_ == 0)
{
uint32_t v___x_3240_; uint8_t v___x_3241_; 
v___x_3240_ = 69;
v___x_3241_ = lean_uint32_dec_eq(v_c_3231_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; 
lean_dec(v_val_3225_);
lean_dec(v_i_3224_);
v___x_3242_ = lean_box(0);
return v___x_3242_;
}
else
{
goto v___jp_3226_;
}
}
else
{
goto v___jp_3226_;
}
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3243_ = lean_string_utf8_next(v_s_3223_, v_i_3224_);
lean_dec(v_i_3224_);
v___x_3244_ = lean_unsigned_to_nat(0u);
v___x_3245_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3223_, v___x_3243_, v_val_3225_, v___x_3244_);
return v___x_3245_;
}
}
else
{
lean_object* v___x_3246_; 
v___x_3246_ = lean_string_utf8_next(v_s_3223_, v_i_3224_);
lean_dec(v_i_3224_);
v_i_3224_ = v___x_3246_;
goto _start;
}
}
else
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3248_ = lean_string_utf8_next(v_s_3223_, v_i_3224_);
lean_dec(v_i_3224_);
v___x_3249_ = lean_unsigned_to_nat(10u);
v___x_3250_ = lean_nat_mul(v___x_3249_, v_val_3225_);
lean_dec(v_val_3225_);
v___x_3251_ = lean_uint32_to_nat(v_c_3231_);
v___x_3252_ = lean_nat_add(v___x_3250_, v___x_3251_);
lean_dec(v___x_3251_);
lean_dec(v___x_3250_);
v___x_3253_ = lean_unsigned_to_nat(48u);
v___x_3254_ = lean_nat_sub(v___x_3252_, v___x_3253_);
lean_dec(v___x_3252_);
v_i_3224_ = v___x_3248_;
v_val_3225_ = v___x_3254_;
goto _start;
}
}
}
else
{
lean_object* v___x_3260_; 
lean_dec(v_val_3225_);
lean_dec(v_i_3224_);
v___x_3260_ = lean_box(0);
return v___x_3260_;
}
v___jp_3226_:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___x_3227_ = lean_string_utf8_next(v_s_3223_, v_i_3224_);
lean_dec(v_i_3224_);
v___x_3228_ = lean_unsigned_to_nat(0u);
v___x_3229_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3223_, v___x_3227_, v_val_3225_, v___x_3228_);
return v___x_3229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object* v_s_3261_, lean_object* v_i_3262_, lean_object* v_val_3263_){
_start:
{
lean_object* v_res_3264_; 
v_res_3264_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3261_, v_i_3262_, v_val_3263_);
lean_dec_ref(v_s_3261_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object* v_s_3265_){
_start:
{
lean_object* v_len_3266_; lean_object* v___x_3267_; uint8_t v___x_3268_; 
v_len_3266_ = lean_string_length(v_s_3265_);
v___x_3267_ = lean_unsigned_to_nat(0u);
v___x_3268_ = lean_nat_dec_eq(v_len_3266_, v___x_3267_);
lean_dec(v_len_3266_);
if (v___x_3268_ == 0)
{
uint32_t v_c_3269_; uint32_t v___x_3270_; uint8_t v___x_3271_; 
v_c_3269_ = lean_string_utf8_get(v_s_3265_, v___x_3267_);
v___x_3270_ = 48;
v___x_3271_ = lean_uint32_dec_le(v___x_3270_, v_c_3269_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_box(0);
return v___x_3272_;
}
else
{
uint32_t v___x_3273_; uint8_t v___x_3274_; 
v___x_3273_ = 57;
v___x_3274_ = lean_uint32_dec_le(v_c_3269_, v___x_3273_);
if (v___x_3274_ == 0)
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_box(0);
return v___x_3275_;
}
else
{
lean_object* v___x_3276_; 
v___x_3276_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3265_, v___x_3267_, v___x_3267_);
return v___x_3276_;
}
}
}
else
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_box(0);
return v___x_3277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object* v_s_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_s_3278_);
lean_dec_ref(v_s_3278_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object* v_stx_3280_){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_3282_ = l_Lean_Syntax_isLit_x3f(v___x_3281_, v_stx_3280_);
if (lean_obj_tag(v___x_3282_) == 1)
{
lean_object* v_val_3283_; lean_object* v___x_3284_; 
v_val_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_val_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_val_3283_);
lean_dec(v_val_3283_);
return v___x_3284_;
}
else
{
lean_object* v___x_3285_; 
lean_dec(v___x_3282_);
v___x_3285_ = lean_box(0);
return v___x_3285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object* v_stx_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_Syntax_isScientificLit_x3f(v_stx_3286_);
lean_dec(v_stx_3286_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object* v_x_3288_){
_start:
{
switch(lean_obj_tag(v_x_3288_))
{
case 2:
{
lean_object* v_val_3289_; lean_object* v___x_3290_; 
v_val_3289_ = lean_ctor_get(v_x_3288_, 1);
lean_inc_ref(v_val_3289_);
lean_dec_ref_known(v_x_3288_, 2);
v___x_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3290_, 0, v_val_3289_);
return v___x_3290_;
}
case 3:
{
lean_object* v_rawVal_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v_rawVal_3291_ = lean_ctor_get(v_x_3288_, 1);
lean_inc_ref(v_rawVal_3291_);
lean_dec_ref_known(v_x_3288_, 4);
v___x_3292_ = lean_substring_tostring(v_rawVal_3291_);
v___x_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
default: 
{
lean_object* v___x_3294_; 
lean_dec(v_x_3288_);
v___x_3294_ = lean_box(0);
return v___x_3294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object* v_stx_3295_){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = l_Lean_Syntax_isNatLit_x3f(v_stx_3295_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_unsigned_to_nat(0u);
return v___x_3297_;
}
else
{
lean_object* v_val_3298_; 
v_val_3298_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_val_3298_);
lean_dec_ref_known(v___x_3296_, 1);
return v_val_3298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object* v_stx_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lean_Syntax_toNat(v_stx_3299_);
lean_dec(v_stx_3299_);
return v_res_3300_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = 9;
v___x_3302_ = lean_box_uint32(v___x_3301_);
return v___x_3302_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2(void){
_start:
{
uint32_t v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = 10;
v___x_3304_ = lean_box_uint32(v___x_3303_);
return v___x_3304_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3(void){
_start:
{
uint32_t v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = 13;
v___x_3306_ = lean_box_uint32(v___x_3305_);
return v___x_3306_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4(void){
_start:
{
uint32_t v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = 39;
v___x_3308_ = lean_box_uint32(v___x_3307_);
return v___x_3308_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5(void){
_start:
{
uint32_t v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = 34;
v___x_3310_ = lean_box_uint32(v___x_3309_);
return v___x_3310_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6(void){
_start:
{
uint32_t v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = 92;
v___x_3312_ = lean_box_uint32(v___x_3311_);
return v___x_3312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object* v_s_3313_, lean_object* v_i_3314_){
_start:
{
uint32_t v_c_3315_; lean_object* v_i_3316_; uint32_t v___x_3317_; uint8_t v___x_3318_; 
v_c_3315_ = lean_string_utf8_get(v_s_3313_, v_i_3314_);
v_i_3316_ = lean_string_utf8_next(v_s_3313_, v_i_3314_);
v___x_3317_ = 92;
v___x_3318_ = lean_uint32_dec_eq(v_c_3315_, v___x_3317_);
if (v___x_3318_ == 0)
{
uint32_t v___x_3319_; uint8_t v___x_3320_; 
v___x_3319_ = 34;
v___x_3320_ = lean_uint32_dec_eq(v_c_3315_, v___x_3319_);
if (v___x_3320_ == 0)
{
uint32_t v___x_3321_; uint8_t v___x_3322_; 
v___x_3321_ = 39;
v___x_3322_ = lean_uint32_dec_eq(v_c_3315_, v___x_3321_);
if (v___x_3322_ == 0)
{
uint32_t v___x_3323_; uint8_t v___x_3324_; 
v___x_3323_ = 114;
v___x_3324_ = lean_uint32_dec_eq(v_c_3315_, v___x_3323_);
if (v___x_3324_ == 0)
{
uint32_t v___x_3325_; uint8_t v___x_3326_; 
v___x_3325_ = 110;
v___x_3326_ = lean_uint32_dec_eq(v_c_3315_, v___x_3325_);
if (v___x_3326_ == 0)
{
uint32_t v___x_3327_; uint8_t v___x_3328_; 
v___x_3327_ = 116;
v___x_3328_ = lean_uint32_dec_eq(v_c_3315_, v___x_3327_);
if (v___x_3328_ == 0)
{
uint32_t v___x_3329_; uint8_t v___x_3330_; 
v___x_3329_ = 120;
v___x_3330_ = lean_uint32_dec_eq(v_c_3315_, v___x_3329_);
if (v___x_3330_ == 0)
{
uint32_t v___x_3331_; uint8_t v___x_3332_; 
v___x_3331_ = 117;
v___x_3332_ = lean_uint32_dec_eq(v_c_3315_, v___x_3331_);
if (v___x_3332_ == 0)
{
lean_object* v___x_3333_; 
lean_dec(v_i_3316_);
v___x_3333_ = lean_box(0);
return v___x_3333_;
}
else
{
lean_object* v___x_3334_; 
v___x_3334_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_i_3316_);
lean_dec(v_i_3316_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v___x_3335_; 
v___x_3335_ = lean_box(0);
return v___x_3335_;
}
else
{
lean_object* v_val_3336_; lean_object* v_fst_3337_; lean_object* v_snd_3338_; lean_object* v___x_3339_; 
v_val_3336_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_val_3336_);
lean_dec_ref_known(v___x_3334_, 1);
v_fst_3337_ = lean_ctor_get(v_val_3336_, 0);
lean_inc(v_fst_3337_);
v_snd_3338_ = lean_ctor_get(v_val_3336_, 1);
lean_inc(v_snd_3338_);
lean_dec(v_val_3336_);
v___x_3339_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_snd_3338_);
lean_dec(v_snd_3338_);
if (lean_obj_tag(v___x_3339_) == 0)
{
lean_object* v___x_3340_; 
lean_dec(v_fst_3337_);
v___x_3340_ = lean_box(0);
return v___x_3340_;
}
else
{
lean_object* v_val_3341_; lean_object* v_fst_3342_; lean_object* v_snd_3343_; lean_object* v___x_3344_; 
v_val_3341_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_val_3341_);
lean_dec_ref_known(v___x_3339_, 1);
v_fst_3342_ = lean_ctor_get(v_val_3341_, 0);
lean_inc(v_fst_3342_);
v_snd_3343_ = lean_ctor_get(v_val_3341_, 1);
lean_inc(v_snd_3343_);
lean_dec(v_val_3341_);
v___x_3344_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_snd_3343_);
lean_dec(v_snd_3343_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3345_; 
lean_dec(v_fst_3342_);
lean_dec(v_fst_3337_);
v___x_3345_ = lean_box(0);
return v___x_3345_;
}
else
{
lean_object* v_val_3346_; lean_object* v_fst_3347_; lean_object* v_snd_3348_; lean_object* v___x_3349_; 
v_val_3346_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_val_3346_);
lean_dec_ref_known(v___x_3344_, 1);
v_fst_3347_ = lean_ctor_get(v_val_3346_, 0);
lean_inc(v_fst_3347_);
v_snd_3348_ = lean_ctor_get(v_val_3346_, 1);
lean_inc(v_snd_3348_);
lean_dec(v_val_3346_);
v___x_3349_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_snd_3348_);
lean_dec(v_snd_3348_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v___x_3350_; 
lean_dec(v_fst_3347_);
lean_dec(v_fst_3342_);
lean_dec(v_fst_3337_);
v___x_3350_ = lean_box(0);
return v___x_3350_;
}
else
{
lean_object* v_val_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3376_; 
v_val_3351_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3353_ = v___x_3349_;
v_isShared_3354_ = v_isSharedCheck_3376_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_val_3351_);
lean_dec(v___x_3349_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3376_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v_fst_3355_; lean_object* v_snd_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3375_; 
v_fst_3355_ = lean_ctor_get(v_val_3351_, 0);
v_snd_3356_ = lean_ctor_get(v_val_3351_, 1);
v_isSharedCheck_3375_ = !lean_is_exclusive(v_val_3351_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3358_ = v_val_3351_;
v_isShared_3359_ = v_isSharedCheck_3375_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_snd_3356_);
lean_inc(v_fst_3355_);
lean_dec(v_val_3351_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3375_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; uint32_t v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3370_; 
v___x_3360_ = lean_unsigned_to_nat(16u);
v___x_3361_ = lean_nat_mul(v___x_3360_, v_fst_3337_);
lean_dec(v_fst_3337_);
v___x_3362_ = lean_nat_add(v___x_3361_, v_fst_3342_);
lean_dec(v_fst_3342_);
lean_dec(v___x_3361_);
v___x_3363_ = lean_nat_mul(v___x_3360_, v___x_3362_);
lean_dec(v___x_3362_);
v___x_3364_ = lean_nat_add(v___x_3363_, v_fst_3347_);
lean_dec(v_fst_3347_);
lean_dec(v___x_3363_);
v___x_3365_ = lean_nat_mul(v___x_3360_, v___x_3364_);
lean_dec(v___x_3364_);
v___x_3366_ = lean_nat_add(v___x_3365_, v_fst_3355_);
lean_dec(v_fst_3355_);
lean_dec(v___x_3365_);
v___x_3367_ = l_Char_ofNat(v___x_3366_);
lean_dec(v___x_3366_);
v___x_3368_ = lean_box_uint32(v___x_3367_);
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 0, v___x_3368_);
v___x_3370_ = v___x_3358_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v___x_3368_);
lean_ctor_set(v_reuseFailAlloc_3374_, 1, v_snd_3356_);
v___x_3370_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
lean_object* v___x_3372_; 
if (v_isShared_3354_ == 0)
{
lean_ctor_set(v___x_3353_, 0, v___x_3370_);
v___x_3372_ = v___x_3353_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3370_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
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
else
{
lean_object* v___x_3377_; 
v___x_3377_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_i_3316_);
lean_dec(v_i_3316_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v___x_3378_; 
v___x_3378_ = lean_box(0);
return v___x_3378_;
}
else
{
lean_object* v_val_3379_; lean_object* v_fst_3380_; lean_object* v_snd_3381_; lean_object* v___x_3382_; 
v_val_3379_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_val_3379_);
lean_dec_ref_known(v___x_3377_, 1);
v_fst_3380_ = lean_ctor_get(v_val_3379_, 0);
lean_inc(v_fst_3380_);
v_snd_3381_ = lean_ctor_get(v_val_3379_, 1);
lean_inc(v_snd_3381_);
lean_dec(v_val_3379_);
v___x_3382_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3313_, v_snd_3381_);
lean_dec(v_snd_3381_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v___x_3383_; 
lean_dec(v_fst_3380_);
v___x_3383_ = lean_box(0);
return v___x_3383_;
}
else
{
lean_object* v_val_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3405_; 
v_val_3384_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3386_ = v___x_3382_;
v_isShared_3387_ = v_isSharedCheck_3405_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_val_3384_);
lean_dec(v___x_3382_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3405_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v_fst_3388_; lean_object* v_snd_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3404_; 
v_fst_3388_ = lean_ctor_get(v_val_3384_, 0);
v_snd_3389_ = lean_ctor_get(v_val_3384_, 1);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_val_3384_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3391_ = v_val_3384_;
v_isShared_3392_ = v_isSharedCheck_3404_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_snd_3389_);
lean_inc(v_fst_3388_);
lean_dec(v_val_3384_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3404_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; uint32_t v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3399_; 
v___x_3393_ = lean_unsigned_to_nat(16u);
v___x_3394_ = lean_nat_mul(v___x_3393_, v_fst_3380_);
lean_dec(v_fst_3380_);
v___x_3395_ = lean_nat_add(v___x_3394_, v_fst_3388_);
lean_dec(v_fst_3388_);
lean_dec(v___x_3394_);
v___x_3396_ = l_Char_ofNat(v___x_3395_);
lean_dec(v___x_3395_);
v___x_3397_ = lean_box_uint32(v___x_3396_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3397_);
v___x_3399_ = v___x_3391_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v___x_3397_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v_snd_3389_);
v___x_3399_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
lean_object* v___x_3401_; 
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3399_);
v___x_3401_ = v___x_3386_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v___x_3399_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
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
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
v___x_3407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
lean_ctor_set(v___x_3407_, 1, v_i_3316_);
v___x_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
return v___x_3408_;
}
}
else
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
v___x_3410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
lean_ctor_set(v___x_3410_, 1, v_i_3316_);
v___x_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
else
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3412_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
v___x_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3412_);
lean_ctor_set(v___x_3413_, 1, v_i_3316_);
v___x_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
return v___x_3414_;
}
}
else
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3415_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
v___x_3416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
lean_ctor_set(v___x_3416_, 1, v_i_3316_);
v___x_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
return v___x_3417_;
}
}
else
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3418_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
v___x_3419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3418_);
lean_ctor_set(v___x_3419_, 1, v_i_3316_);
v___x_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
return v___x_3420_;
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
v___x_3422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
lean_ctor_set(v___x_3422_, 1, v_i_3316_);
v___x_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
return v___x_3423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object* v_s_3424_, lean_object* v_i_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l_Lean_Syntax_decodeQuotedChar(v_s_3424_, v_i_3425_);
lean_dec(v_i_3425_);
lean_dec_ref(v_s_3424_);
return v_res_3426_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t v___y_3427_){
_start:
{
uint32_t v___x_3428_; uint8_t v___x_3429_; 
v___x_3428_ = 32;
v___x_3429_ = lean_uint32_dec_eq(v___y_3427_, v___x_3428_);
if (v___x_3429_ == 0)
{
uint32_t v___x_3430_; uint8_t v___x_3431_; 
v___x_3430_ = 9;
v___x_3431_ = lean_uint32_dec_eq(v___y_3427_, v___x_3430_);
if (v___x_3431_ == 0)
{
uint32_t v___x_3432_; uint8_t v___x_3433_; 
v___x_3432_ = 13;
v___x_3433_ = lean_uint32_dec_eq(v___y_3427_, v___x_3432_);
if (v___x_3433_ == 0)
{
uint32_t v___x_3434_; uint8_t v___x_3435_; 
v___x_3434_ = 10;
v___x_3435_ = lean_uint32_dec_eq(v___y_3427_, v___x_3434_);
return v___x_3435_;
}
else
{
return v___x_3433_;
}
}
else
{
return v___x_3431_;
}
}
else
{
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object* v___y_3436_){
_start:
{
uint32_t v___y_264__boxed_3437_; uint8_t v_res_3438_; lean_object* v_r_3439_; 
v___y_264__boxed_3437_ = lean_unbox_uint32(v___y_3436_);
lean_dec(v___y_3436_);
v_res_3438_ = l_Lean_Syntax_decodeStringGap___lam__0(v___y_264__boxed_3437_);
v_r_3439_ = lean_box(v_res_3438_);
return v_r_3439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object* v_s_3441_, lean_object* v_i_3442_){
_start:
{
lean_object* v___f_3443_; uint32_t v___x_3448_; uint32_t v___x_3449_; uint8_t v___x_3450_; 
v___f_3443_ = ((lean_object*)(l_Lean_Syntax_decodeStringGap___closed__0));
v___x_3448_ = lean_string_utf8_get(v_s_3441_, v_i_3442_);
v___x_3449_ = 32;
v___x_3450_ = lean_uint32_dec_eq(v___x_3448_, v___x_3449_);
if (v___x_3450_ == 0)
{
uint32_t v___x_3451_; uint8_t v___x_3452_; 
v___x_3451_ = 9;
v___x_3452_ = lean_uint32_dec_eq(v___x_3448_, v___x_3451_);
if (v___x_3452_ == 0)
{
uint32_t v___x_3453_; uint8_t v___x_3454_; 
v___x_3453_ = 13;
v___x_3454_ = lean_uint32_dec_eq(v___x_3448_, v___x_3453_);
if (v___x_3454_ == 0)
{
uint32_t v___x_3455_; uint8_t v___x_3456_; 
v___x_3455_ = 10;
v___x_3456_ = lean_uint32_dec_eq(v___x_3448_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; 
lean_dec_ref(v_s_3441_);
v___x_3457_ = lean_box(0);
return v___x_3457_;
}
else
{
goto v___jp_3444_;
}
}
else
{
goto v___jp_3444_;
}
}
else
{
goto v___jp_3444_;
}
}
else
{
goto v___jp_3444_;
}
v___jp_3444_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = lean_string_utf8_next(v_s_3441_, v_i_3442_);
v___x_3446_ = lean_string_nextwhile(v_s_3441_, v___f_3443_, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
return v___x_3447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object* v_s_3458_, lean_object* v_i_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lean_Syntax_decodeStringGap(v_s_3458_, v_i_3459_);
lean_dec(v_i_3459_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object* v_s_3461_, lean_object* v_i_3462_, lean_object* v_acc_3463_){
_start:
{
uint32_t v_c_3464_; uint32_t v___x_3465_; uint8_t v___x_3466_; 
v_c_3464_ = lean_string_utf8_get(v_s_3461_, v_i_3462_);
v___x_3465_ = 34;
v___x_3466_ = lean_uint32_dec_eq(v_c_3464_, v___x_3465_);
if (v___x_3466_ == 0)
{
lean_object* v_i_3467_; uint8_t v___x_3468_; 
v_i_3467_ = lean_string_utf8_next(v_s_3461_, v_i_3462_);
lean_dec(v_i_3462_);
v___x_3468_ = lean_string_utf8_at_end(v_s_3461_, v_i_3467_);
if (v___x_3468_ == 0)
{
uint32_t v___x_3469_; uint8_t v___x_3470_; 
v___x_3469_ = 92;
v___x_3470_ = lean_uint32_dec_eq(v_c_3464_, v___x_3469_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3471_; 
v___x_3471_ = lean_string_push(v_acc_3463_, v_c_3464_);
v_i_3462_ = v_i_3467_;
v_acc_3463_ = v___x_3471_;
goto _start;
}
else
{
lean_object* v___x_3473_; 
v___x_3473_ = l_Lean_Syntax_decodeQuotedChar(v_s_3461_, v_i_3467_);
if (lean_obj_tag(v___x_3473_) == 1)
{
lean_object* v_val_3474_; lean_object* v_fst_3475_; lean_object* v_snd_3476_; uint32_t v___x_3477_; lean_object* v___x_3478_; 
lean_dec(v_i_3467_);
v_val_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_val_3474_);
lean_dec_ref_known(v___x_3473_, 1);
v_fst_3475_ = lean_ctor_get(v_val_3474_, 0);
lean_inc(v_fst_3475_);
v_snd_3476_ = lean_ctor_get(v_val_3474_, 1);
lean_inc(v_snd_3476_);
lean_dec(v_val_3474_);
v___x_3477_ = lean_unbox_uint32(v_fst_3475_);
lean_dec(v_fst_3475_);
v___x_3478_ = lean_string_push(v_acc_3463_, v___x_3477_);
v_i_3462_ = v_snd_3476_;
v_acc_3463_ = v___x_3478_;
goto _start;
}
else
{
lean_object* v___x_3480_; 
lean_dec(v___x_3473_);
lean_inc_ref(v_s_3461_);
v___x_3480_ = l_Lean_Syntax_decodeStringGap(v_s_3461_, v_i_3467_);
lean_dec(v_i_3467_);
if (lean_obj_tag(v___x_3480_) == 1)
{
lean_object* v_val_3481_; 
v_val_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_val_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v_i_3462_ = v_val_3481_;
goto _start;
}
else
{
lean_object* v___x_3483_; 
lean_dec(v___x_3480_);
lean_dec_ref(v_acc_3463_);
lean_dec_ref(v_s_3461_);
v___x_3483_ = lean_box(0);
return v___x_3483_;
}
}
}
}
else
{
lean_object* v___x_3484_; 
lean_dec(v_i_3467_);
lean_dec_ref(v_acc_3463_);
lean_dec_ref(v_s_3461_);
v___x_3484_ = lean_box(0);
return v___x_3484_;
}
}
else
{
lean_object* v___x_3485_; 
lean_dec(v_i_3462_);
lean_dec_ref(v_s_3461_);
v___x_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3485_, 0, v_acc_3463_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object* v_s_3486_, lean_object* v_i_3487_, lean_object* v_num_3488_){
_start:
{
uint32_t v_c_3489_; lean_object* v_i_3490_; uint32_t v___x_3491_; uint8_t v___x_3492_; 
v_c_3489_ = lean_string_utf8_get(v_s_3486_, v_i_3487_);
v_i_3490_ = lean_string_utf8_next(v_s_3486_, v_i_3487_);
lean_dec(v_i_3487_);
v___x_3491_ = 35;
v___x_3492_ = lean_uint32_dec_eq(v_c_3489_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3493_ = lean_string_utf8_byte_size(v_s_3486_);
v___x_3494_ = lean_unsigned_to_nat(1u);
v___x_3495_ = lean_nat_add(v_num_3488_, v___x_3494_);
lean_dec(v_num_3488_);
v___x_3496_ = lean_nat_sub(v___x_3493_, v___x_3495_);
lean_dec(v___x_3495_);
v___x_3497_ = lean_string_utf8_extract(v_s_3486_, v_i_3490_, v___x_3496_);
lean_dec(v___x_3496_);
lean_dec(v_i_3490_);
return v___x_3497_;
}
else
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = lean_unsigned_to_nat(1u);
v___x_3499_ = lean_nat_add(v_num_3488_, v___x_3498_);
lean_dec(v_num_3488_);
v_i_3487_ = v_i_3490_;
v_num_3488_ = v___x_3499_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object* v_s_3501_, lean_object* v_i_3502_, lean_object* v_num_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3501_, v_i_3502_, v_num_3503_);
lean_dec_ref(v_s_3501_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object* v_s_3505_){
_start:
{
lean_object* v___x_3506_; uint32_t v___x_3507_; uint32_t v___x_3508_; uint8_t v___x_3509_; 
v___x_3506_ = lean_unsigned_to_nat(0u);
v___x_3507_ = lean_string_utf8_get(v_s_3505_, v___x_3506_);
v___x_3508_ = 114;
v___x_3509_ = lean_uint32_dec_eq(v___x_3507_, v___x_3508_);
if (v___x_3509_ == 0)
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = lean_unsigned_to_nat(1u);
v___x_3511_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_3512_ = l_Lean_Syntax_decodeStrLitAux(v_s_3505_, v___x_3510_, v___x_3511_);
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3513_ = lean_unsigned_to_nat(1u);
v___x_3514_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3505_, v___x_3513_, v___x_3506_);
lean_dec_ref(v_s_3505_);
v___x_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object* v_stx_3516_){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3517_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_3518_ = l_Lean_Syntax_isLit_x3f(v___x_3517_, v_stx_3516_);
if (lean_obj_tag(v___x_3518_) == 1)
{
lean_object* v_val_3519_; lean_object* v___x_3520_; 
v_val_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_val_3519_);
lean_dec_ref_known(v___x_3518_, 1);
v___x_3520_ = l_Lean_Syntax_decodeStrLit(v_val_3519_);
return v___x_3520_;
}
else
{
lean_object* v___x_3521_; 
lean_dec(v___x_3518_);
v___x_3521_ = lean_box(0);
return v___x_3521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object* v_stx_3522_){
_start:
{
lean_object* v_res_3523_; 
v_res_3523_ = l_Lean_Syntax_isStrLit_x3f(v_stx_3522_);
lean_dec(v_stx_3522_);
return v_res_3523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object* v_s_3524_){
_start:
{
lean_object* v___x_3525_; uint32_t v_c_3526_; uint32_t v___x_3527_; uint8_t v___x_3528_; 
v___x_3525_ = lean_unsigned_to_nat(1u);
v_c_3526_ = lean_string_utf8_get(v_s_3524_, v___x_3525_);
v___x_3527_ = 92;
v___x_3528_ = lean_uint32_dec_eq(v_c_3526_, v___x_3527_);
if (v___x_3528_ == 0)
{
lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3529_ = lean_box_uint32(v_c_3526_);
v___x_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
return v___x_3530_;
}
else
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3531_ = lean_unsigned_to_nat(2u);
v___x_3532_ = l_Lean_Syntax_decodeQuotedChar(v_s_3524_, v___x_3531_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v___x_3533_; 
v___x_3533_ = lean_box(0);
return v___x_3533_;
}
else
{
lean_object* v_val_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3542_; 
v_val_3534_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3536_ = v___x_3532_;
v_isShared_3537_ = v_isSharedCheck_3542_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_val_3534_);
lean_dec(v___x_3532_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3542_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v_fst_3538_; lean_object* v___x_3540_; 
v_fst_3538_ = lean_ctor_get(v_val_3534_, 0);
lean_inc(v_fst_3538_);
lean_dec(v_val_3534_);
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v_fst_3538_);
v___x_3540_ = v___x_3536_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_fst_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object* v_s_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Syntax_decodeCharLit(v_s_3543_);
lean_dec_ref(v_s_3543_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object* v_stx_3545_){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_3547_ = l_Lean_Syntax_isLit_x3f(v___x_3546_, v_stx_3545_);
if (lean_obj_tag(v___x_3547_) == 1)
{
lean_object* v_val_3548_; lean_object* v___x_3549_; 
v_val_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_val_3548_);
lean_dec_ref_known(v___x_3547_, 1);
v___x_3549_ = l_Lean_Syntax_decodeCharLit(v_val_3548_);
lean_dec(v_val_3548_);
return v___x_3549_;
}
else
{
lean_object* v___x_3550_; 
lean_dec(v___x_3547_);
v___x_3550_ = lean_box(0);
return v___x_3550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object* v_stx_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Lean_Syntax_isCharLit_x3f(v_stx_3551_);
lean_dec(v_stx_3551_);
return v_res_3552_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t v___y_3553_){
_start:
{
uint8_t v___y_3571_; uint32_t v___x_3576_; uint8_t v___x_3577_; 
v___x_3576_ = 65;
v___x_3577_ = lean_uint32_dec_le(v___x_3576_, v___y_3553_);
if (v___x_3577_ == 0)
{
v___y_3571_ = v___x_3577_;
goto v___jp_3570_;
}
else
{
uint32_t v___x_3578_; uint8_t v___x_3579_; 
v___x_3578_ = 90;
v___x_3579_ = lean_uint32_dec_le(v___y_3553_, v___x_3578_);
v___y_3571_ = v___x_3579_;
goto v___jp_3570_;
}
v___jp_3554_:
{
uint32_t v___x_3555_; uint8_t v___x_3556_; 
v___x_3555_ = 95;
v___x_3556_ = lean_uint32_dec_eq(v___y_3553_, v___x_3555_);
if (v___x_3556_ == 0)
{
uint32_t v___x_3557_; uint8_t v___x_3558_; 
v___x_3557_ = 39;
v___x_3558_ = lean_uint32_dec_eq(v___y_3553_, v___x_3557_);
if (v___x_3558_ == 0)
{
uint32_t v___x_3559_; uint8_t v___x_3560_; 
v___x_3559_ = 33;
v___x_3560_ = lean_uint32_dec_eq(v___y_3553_, v___x_3559_);
if (v___x_3560_ == 0)
{
uint32_t v___x_3561_; uint8_t v___x_3562_; 
v___x_3561_ = 63;
v___x_3562_ = lean_uint32_dec_eq(v___y_3553_, v___x_3561_);
if (v___x_3562_ == 0)
{
uint8_t v___x_3563_; 
v___x_3563_ = l_Lean_isLetterLike(v___y_3553_);
if (v___x_3563_ == 0)
{
uint8_t v___x_3564_; 
v___x_3564_ = l_Lean_isSubScriptAlnum(v___y_3553_);
return v___x_3564_;
}
else
{
return v___x_3563_;
}
}
else
{
return v___x_3562_;
}
}
else
{
return v___x_3560_;
}
}
else
{
return v___x_3558_;
}
}
else
{
return v___x_3556_;
}
}
v___jp_3565_:
{
uint32_t v___x_3566_; uint8_t v___x_3567_; 
v___x_3566_ = 48;
v___x_3567_ = lean_uint32_dec_le(v___x_3566_, v___y_3553_);
if (v___x_3567_ == 0)
{
goto v___jp_3554_;
}
else
{
uint32_t v___x_3568_; uint8_t v___x_3569_; 
v___x_3568_ = 57;
v___x_3569_ = lean_uint32_dec_le(v___y_3553_, v___x_3568_);
if (v___x_3569_ == 0)
{
goto v___jp_3554_;
}
else
{
return v___x_3569_;
}
}
}
v___jp_3570_:
{
if (v___y_3571_ == 0)
{
uint32_t v___x_3572_; uint8_t v___x_3573_; 
v___x_3572_ = 97;
v___x_3573_ = lean_uint32_dec_le(v___x_3572_, v___y_3553_);
if (v___x_3573_ == 0)
{
goto v___jp_3565_;
}
else
{
uint32_t v___x_3574_; uint8_t v___x_3575_; 
v___x_3574_ = 122;
v___x_3575_ = lean_uint32_dec_le(v___y_3553_, v___x_3574_);
if (v___x_3575_ == 0)
{
goto v___jp_3565_;
}
else
{
return v___x_3575_;
}
}
}
else
{
return v___y_3571_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object* v___y_3580_){
_start:
{
uint32_t v___y_509__boxed_3581_; uint8_t v_res_3582_; lean_object* v_r_3583_; 
v___y_509__boxed_3581_ = lean_unbox_uint32(v___y_3580_);
lean_dec(v___y_3580_);
v_res_3582_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(v___y_509__boxed_3581_);
v_r_3583_ = lean_box(v_res_3582_);
return v_r_3583_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t v___x_3584_, uint32_t v___x_3585_, uint32_t v___y_3586_){
_start:
{
uint8_t v___x_3587_; 
v___x_3587_ = lean_uint32_dec_le(v___x_3584_, v___y_3586_);
if (v___x_3587_ == 0)
{
return v___x_3587_;
}
else
{
uint8_t v___x_3588_; 
v___x_3588_ = lean_uint32_dec_le(v___y_3586_, v___x_3585_);
return v___x_3588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object* v___x_3589_, lean_object* v___x_3590_, lean_object* v___y_3591_){
_start:
{
uint32_t v___x_564__boxed_3592_; uint32_t v___x_565__boxed_3593_; uint32_t v___y_566__boxed_3594_; uint8_t v_res_3595_; lean_object* v_r_3596_; 
v___x_564__boxed_3592_ = lean_unbox_uint32(v___x_3589_);
lean_dec(v___x_3589_);
v___x_565__boxed_3593_ = lean_unbox_uint32(v___x_3590_);
lean_dec(v___x_3590_);
v___y_566__boxed_3594_ = lean_unbox_uint32(v___y_3591_);
lean_dec(v___y_3591_);
v_res_3595_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(v___x_564__boxed_3592_, v___x_565__boxed_3593_, v___y_566__boxed_3594_);
v_r_3596_ = lean_box(v_res_3595_);
return v_r_3596_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t v___x_3597_, uint8_t v___x_3598_, uint32_t v_x_3599_){
_start:
{
uint32_t v___x_3600_; uint8_t v___x_3601_; 
v___x_3600_ = 187;
v___x_3601_ = lean_uint32_dec_eq(v_x_3599_, v___x_3600_);
if (v___x_3601_ == 0)
{
return v___x_3597_;
}
else
{
return v___x_3598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object* v___x_3602_, lean_object* v___x_3603_, lean_object* v_x_3604_){
_start:
{
uint8_t v___x_577__boxed_3605_; uint8_t v___x_578__boxed_3606_; uint32_t v_x_579__boxed_3607_; uint8_t v_res_3608_; lean_object* v_r_3609_; 
v___x_577__boxed_3605_ = lean_unbox(v___x_3602_);
v___x_578__boxed_3606_ = lean_unbox(v___x_3603_);
v_x_579__boxed_3607_ = lean_unbox_uint32(v_x_3604_);
lean_dec(v_x_3604_);
v_res_3608_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(v___x_577__boxed_3605_, v___x_578__boxed_3606_, v_x_579__boxed_3607_);
v_r_3609_ = lean_box(v_res_3608_);
return v_r_3609_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_3611_; lean_object* v___x_3612_; 
v___x_3611_ = 48;
v___x_3612_ = lean_box_uint32(v___x_3611_);
return v___x_3612_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2(void){
_start:
{
uint32_t v___x_3613_; lean_object* v___x_3614_; 
v___x_3613_ = 57;
v___x_3614_ = lean_box_uint32(v___x_3613_);
return v___x_3614_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1(void){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___f_3617_; 
v___x_3615_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
v___x_3616_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
v___f_3617_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3617_, 0, v___x_3615_);
lean_closure_set(v___f_3617_, 1, v___x_3616_);
return v___f_3617_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object* v_ss_3618_, lean_object* v_acc_3619_){
_start:
{
lean_object* v_ss_3621_; lean_object* v_acc_3622_; uint8_t v___x_3631_; 
lean_inc_ref(v_ss_3618_);
v___x_3631_ = lean_substring_isempty(v_ss_3618_);
if (v___x_3631_ == 0)
{
uint32_t v_curr_3632_; uint32_t v___x_3633_; uint8_t v___x_3634_; 
lean_inc_ref(v_ss_3618_);
v_curr_3632_ = lean_substring_front(v_ss_3618_);
v___x_3633_ = 171;
v___x_3634_ = lean_uint32_dec_eq(v_curr_3632_, v___x_3633_);
if (v___x_3634_ == 0)
{
lean_object* v___f_3635_; uint8_t v___y_3667_; uint32_t v___x_3672_; uint8_t v___x_3673_; 
v___f_3635_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0));
v___x_3672_ = 65;
v___x_3673_ = lean_uint32_dec_le(v___x_3672_, v_curr_3632_);
if (v___x_3673_ == 0)
{
v___y_3667_ = v___x_3673_;
goto v___jp_3666_;
}
else
{
uint32_t v___x_3674_; uint8_t v___x_3675_; 
v___x_3674_ = 90;
v___x_3675_ = lean_uint32_dec_le(v_curr_3632_, v___x_3674_);
v___y_3667_ = v___x_3675_;
goto v___jp_3666_;
}
v___jp_3636_:
{
lean_object* v_idPart_3637_; lean_object* v_startPos_3638_; lean_object* v_stopPos_3639_; lean_object* v_startPos_3640_; lean_object* v_stopPos_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
lean_inc_ref(v_ss_3618_);
v_idPart_3637_ = lean_substring_takewhile(v_ss_3618_, v___f_3635_);
v_startPos_3638_ = lean_ctor_get(v_idPart_3637_, 1);
lean_inc(v_startPos_3638_);
v_stopPos_3639_ = lean_ctor_get(v_idPart_3637_, 2);
lean_inc(v_stopPos_3639_);
v_startPos_3640_ = lean_ctor_get(v_ss_3618_, 1);
v_stopPos_3641_ = lean_ctor_get(v_ss_3618_, 2);
v___x_3642_ = lean_nat_sub(v_stopPos_3639_, v_startPos_3638_);
lean_dec(v_startPos_3638_);
lean_dec(v_stopPos_3639_);
v___x_3643_ = lean_nat_sub(v_stopPos_3641_, v_startPos_3640_);
v___x_3644_ = lean_substring_extract(v_ss_3618_, v___x_3642_, v___x_3643_);
v___x_3645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3645_, 0, v_idPart_3637_);
lean_ctor_set(v___x_3645_, 1, v_acc_3619_);
v_ss_3621_ = v___x_3644_;
v_acc_3622_ = v___x_3645_;
goto v___jp_3620_;
}
v___jp_3646_:
{
uint32_t v___x_3647_; uint8_t v___x_3648_; 
v___x_3647_ = 95;
v___x_3648_ = lean_uint32_dec_eq(v_curr_3632_, v___x_3647_);
if (v___x_3648_ == 0)
{
uint8_t v___x_3649_; 
v___x_3649_ = l_Lean_isLetterLike(v_curr_3632_);
if (v___x_3649_ == 0)
{
uint32_t v___x_3650_; uint8_t v___x_3651_; 
v___x_3650_ = 48;
v___x_3651_ = lean_uint32_dec_le(v___x_3650_, v_curr_3632_);
if (v___x_3651_ == 0)
{
lean_object* v___x_3652_; 
lean_dec(v_acc_3619_);
lean_dec_ref(v_ss_3618_);
v___x_3652_ = lean_box(0);
return v___x_3652_;
}
else
{
uint32_t v___x_3653_; uint8_t v___x_3654_; 
v___x_3653_ = 57;
v___x_3654_ = lean_uint32_dec_le(v_curr_3632_, v___x_3653_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; 
lean_dec(v_acc_3619_);
lean_dec_ref(v_ss_3618_);
v___x_3655_ = lean_box(0);
return v___x_3655_;
}
else
{
lean_object* v___f_3656_; lean_object* v_idPart_3657_; lean_object* v_startPos_3658_; lean_object* v_stopPos_3659_; lean_object* v_startPos_3660_; lean_object* v_stopPos_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___f_3656_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1, &l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1);
lean_inc_ref(v_ss_3618_);
v_idPart_3657_ = lean_substring_takewhile(v_ss_3618_, v___f_3656_);
v_startPos_3658_ = lean_ctor_get(v_idPart_3657_, 1);
lean_inc(v_startPos_3658_);
v_stopPos_3659_ = lean_ctor_get(v_idPart_3657_, 2);
lean_inc(v_stopPos_3659_);
v_startPos_3660_ = lean_ctor_get(v_ss_3618_, 1);
v_stopPos_3661_ = lean_ctor_get(v_ss_3618_, 2);
v___x_3662_ = lean_nat_sub(v_stopPos_3659_, v_startPos_3658_);
lean_dec(v_startPos_3658_);
lean_dec(v_stopPos_3659_);
v___x_3663_ = lean_nat_sub(v_stopPos_3661_, v_startPos_3660_);
v___x_3664_ = lean_substring_extract(v_ss_3618_, v___x_3662_, v___x_3663_);
v___x_3665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3665_, 0, v_idPart_3657_);
lean_ctor_set(v___x_3665_, 1, v_acc_3619_);
v_ss_3621_ = v___x_3664_;
v_acc_3622_ = v___x_3665_;
goto v___jp_3620_;
}
}
}
else
{
goto v___jp_3636_;
}
}
else
{
goto v___jp_3636_;
}
}
v___jp_3666_:
{
if (v___y_3667_ == 0)
{
uint32_t v___x_3668_; uint8_t v___x_3669_; 
v___x_3668_ = 97;
v___x_3669_ = lean_uint32_dec_le(v___x_3668_, v_curr_3632_);
if (v___x_3669_ == 0)
{
goto v___jp_3646_;
}
else
{
uint32_t v___x_3670_; uint8_t v___x_3671_; 
v___x_3670_ = 122;
v___x_3671_ = lean_uint32_dec_le(v_curr_3632_, v___x_3670_);
if (v___x_3671_ == 0)
{
goto v___jp_3646_;
}
else
{
goto v___jp_3636_;
}
}
}
else
{
goto v___jp_3636_;
}
}
}
else
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___f_3678_; lean_object* v_escapedPart_3679_; lean_object* v_str_3680_; lean_object* v_startPos_3681_; lean_object* v_stopPos_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3703_; 
v___x_3676_ = lean_box(v___x_3634_);
v___x_3677_ = lean_box(v___x_3631_);
v___f_3678_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed), 3, 2);
lean_closure_set(v___f_3678_, 0, v___x_3676_);
lean_closure_set(v___f_3678_, 1, v___x_3677_);
lean_inc_ref(v_ss_3618_);
v_escapedPart_3679_ = lean_substring_takewhile(v_ss_3618_, v___f_3678_);
v_str_3680_ = lean_ctor_get(v_escapedPart_3679_, 0);
v_startPos_3681_ = lean_ctor_get(v_escapedPart_3679_, 1);
v_stopPos_3682_ = lean_ctor_get(v_escapedPart_3679_, 2);
v_isSharedCheck_3703_ = !lean_is_exclusive(v_escapedPart_3679_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3684_ = v_escapedPart_3679_;
v_isShared_3685_ = v_isSharedCheck_3703_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_stopPos_3682_);
lean_inc(v_startPos_3681_);
lean_inc(v_str_3680_);
lean_dec(v_escapedPart_3679_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3703_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v_startPos_3686_; lean_object* v_stopPos_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v_escapedPart_3691_; 
v_startPos_3686_ = lean_ctor_get(v_ss_3618_, 1);
v_stopPos_3687_ = lean_ctor_get(v_ss_3618_, 2);
v___x_3688_ = lean_string_utf8_next(v_str_3680_, v_stopPos_3682_);
lean_dec(v_stopPos_3682_);
lean_inc(v_stopPos_3687_);
v___x_3689_ = lean_string_pos_min(v_stopPos_3687_, v___x_3688_);
lean_inc(v___x_3689_);
lean_inc(v_startPos_3681_);
if (v_isShared_3685_ == 0)
{
lean_ctor_set(v___x_3684_, 2, v___x_3689_);
v_escapedPart_3691_ = v___x_3684_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_str_3680_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v_startPos_3681_);
lean_ctor_set(v_reuseFailAlloc_3702_, 2, v___x_3689_);
v_escapedPart_3691_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; uint32_t v___x_3694_; uint32_t v___x_3695_; uint8_t v___x_3696_; 
v___x_3692_ = lean_nat_sub(v___x_3689_, v_startPos_3681_);
lean_dec(v_startPos_3681_);
lean_dec(v___x_3689_);
lean_inc(v___x_3692_);
lean_inc_ref_n(v_escapedPart_3691_, 2);
v___x_3693_ = lean_substring_prev(v_escapedPart_3691_, v___x_3692_);
v___x_3694_ = lean_substring_get(v_escapedPart_3691_, v___x_3693_);
v___x_3695_ = 187;
v___x_3696_ = lean_uint32_dec_eq(v___x_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; 
lean_dec(v___x_3692_);
lean_dec_ref(v_escapedPart_3691_);
lean_dec(v_acc_3619_);
lean_dec_ref(v_ss_3618_);
v___x_3697_ = lean_box(0);
return v___x_3697_;
}
else
{
if (v___x_3631_ == 0)
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3698_ = lean_nat_sub(v_stopPos_3687_, v_startPos_3686_);
v___x_3699_ = lean_substring_extract(v_ss_3618_, v___x_3692_, v___x_3698_);
v___x_3700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3700_, 0, v_escapedPart_3691_);
lean_ctor_set(v___x_3700_, 1, v_acc_3619_);
v_ss_3621_ = v___x_3699_;
v_acc_3622_ = v___x_3700_;
goto v___jp_3620_;
}
else
{
lean_object* v___x_3701_; 
lean_dec(v___x_3692_);
lean_dec_ref(v_escapedPart_3691_);
lean_dec(v_acc_3619_);
lean_dec_ref(v_ss_3618_);
v___x_3701_ = lean_box(0);
return v___x_3701_;
}
}
}
}
}
}
else
{
lean_object* v___x_3704_; 
lean_dec(v_acc_3619_);
lean_dec_ref(v_ss_3618_);
v___x_3704_ = lean_box(0);
return v___x_3704_;
}
v___jp_3620_:
{
uint32_t v___x_3623_; uint32_t v___x_3624_; uint8_t v___x_3625_; 
lean_inc_ref(v_ss_3621_);
v___x_3623_ = lean_substring_front(v_ss_3621_);
v___x_3624_ = 46;
v___x_3625_ = lean_uint32_dec_eq(v___x_3623_, v___x_3624_);
if (v___x_3625_ == 0)
{
uint8_t v___x_3626_; 
v___x_3626_ = lean_substring_isempty(v_ss_3621_);
if (v___x_3626_ == 0)
{
lean_object* v___x_3627_; 
lean_dec(v_acc_3622_);
v___x_3627_ = lean_box(0);
return v___x_3627_;
}
else
{
return v_acc_3622_;
}
}
else
{
lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3628_ = lean_unsigned_to_nat(1u);
v___x_3629_ = lean_substring_drop(v_ss_3621_, v___x_3628_);
v_ss_3618_ = v___x_3629_;
v_acc_3619_ = v_acc_3622_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object* v_ss_3705_){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3706_ = lean_box(0);
v___x_3707_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_ss_3705_, v___x_3706_);
v___x_3708_ = l_List_reverse___redArg(v___x_3707_);
return v___x_3708_;
}
}
static lean_object* _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3712_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2));
v___x_3713_ = lean_unsigned_to_nat(10u);
v___x_3714_ = lean_unsigned_to_nat(1240u);
v___x_3715_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1));
v___x_3716_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0));
v___x_3717_ = l_mkPanicMessageWithDecl(v___x_3716_, v___x_3715_, v___x_3714_, v___x_3713_, v___x_3712_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object* v_init_3718_, lean_object* v_x_3719_){
_start:
{
if (lean_obj_tag(v_x_3719_) == 0)
{
lean_inc(v_init_3718_);
return v_init_3718_;
}
else
{
lean_object* v_head_3720_; lean_object* v_tail_3721_; lean_object* v___x_3722_; lean_object* v_comp_3723_; uint32_t v___x_3724_; uint32_t v___x_3725_; uint8_t v___x_3726_; 
v_head_3720_ = lean_ctor_get(v_x_3719_, 0);
lean_inc(v_head_3720_);
v_tail_3721_ = lean_ctor_get(v_x_3719_, 1);
lean_inc(v_tail_3721_);
lean_dec_ref_known(v_x_3719_, 2);
v___x_3722_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3718_, v_tail_3721_);
v_comp_3723_ = lean_substring_tostring(v_head_3720_);
lean_inc_ref(v_comp_3723_);
v___x_3724_ = lean_string_front(v_comp_3723_);
v___x_3725_ = 171;
v___x_3726_ = lean_uint32_dec_eq(v___x_3724_, v___x_3725_);
if (v___x_3726_ == 0)
{
uint32_t v___x_3727_; uint8_t v___x_3728_; 
v___x_3727_ = 48;
v___x_3728_ = lean_uint32_dec_le(v___x_3727_, v___x_3724_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; 
v___x_3729_ = l_Lean_Name_str___override(v___x_3722_, v_comp_3723_);
return v___x_3729_;
}
else
{
uint32_t v___x_3730_; uint8_t v___x_3731_; 
v___x_3730_ = 57;
v___x_3731_ = lean_uint32_dec_le(v___x_3724_, v___x_3730_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Lean_Name_str___override(v___x_3722_, v_comp_3723_);
return v___x_3732_;
}
else
{
lean_object* v___x_3733_; 
v___x_3733_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_comp_3723_);
lean_dec_ref(v_comp_3723_);
if (lean_obj_tag(v___x_3733_) == 1)
{
lean_object* v_val_3734_; lean_object* v___x_3735_; 
v_val_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_val_3734_);
lean_dec_ref_known(v___x_3733_, 1);
v___x_3735_ = l_Lean_Name_num___override(v___x_3722_, v_val_3734_);
return v___x_3735_;
}
else
{
lean_object* v___x_3736_; lean_object* v___x_3737_; 
lean_dec(v___x_3733_);
lean_dec(v___x_3722_);
v___x_3736_ = lean_obj_once(&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3, &l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once, _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3);
v___x_3737_ = l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(v___x_3736_);
return v___x_3737_;
}
}
}
}
else
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3738_ = lean_unsigned_to_nat(1u);
v___x_3739_ = lean_string_drop(v_comp_3723_, v___x_3738_);
v___x_3740_ = lean_string_dropright(v___x_3739_, v___x_3738_);
v___x_3741_ = l_Lean_Name_str___override(v___x_3722_, v___x_3740_);
return v___x_3741_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object* v_init_3742_, lean_object* v_x_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3742_, v_x_3743_);
lean_dec(v_init_3742_);
return v_res_3744_;
}
}
static lean_object* _init_l_Substring_Raw_toName___closed__0(void){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = lean_box(0);
v___x_3746_ = l_unsafeCast___redArg(v___x_3745_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object* v_s_3747_){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3748_ = lean_box(0);
v___x_3749_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_s_3747_, v___x_3748_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v___x_3750_; 
v___x_3750_ = lean_obj_once(&l_Substring_Raw_toName___closed__0, &l_Substring_Raw_toName___closed__0_once, _init_l_Substring_Raw_toName___closed__0);
return v___x_3750_;
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3751_ = lean_obj_once(&l_Substring_Raw_toName___closed__0, &l_Substring_Raw_toName___closed__0_once, _init_l_Substring_Raw_toName___closed__0);
v___x_3752_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v___x_3751_, v___x_3749_);
return v___x_3752_;
}
}
}
LEAN_EXPORT lean_object* l_String_toName(lean_object* v_s_3753_){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3754_ = lean_unsigned_to_nat(0u);
v___x_3755_ = lean_string_utf8_byte_size(v_s_3753_);
v___x_3756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3756_, 0, v_s_3753_);
lean_ctor_set(v___x_3756_, 1, v___x_3754_);
lean_ctor_set(v___x_3756_, 2, v___x_3755_);
v___x_3757_ = l_Substring_Raw_toName(v___x_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object* v_s_3758_){
_start:
{
lean_object* v___x_3759_; uint32_t v___x_3760_; uint32_t v___x_3761_; uint8_t v___x_3762_; 
v___x_3759_ = lean_unsigned_to_nat(0u);
v___x_3760_ = lean_string_utf8_get(v_s_3758_, v___x_3759_);
v___x_3761_ = 96;
v___x_3762_ = lean_uint32_dec_eq(v___x_3760_, v___x_3761_);
if (v___x_3762_ == 0)
{
lean_object* v___x_3763_; 
lean_dec_ref(v_s_3758_);
v___x_3763_ = lean_box(0);
return v___x_3763_;
}
else
{
lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3764_ = lean_string_utf8_byte_size(v_s_3758_);
v___x_3765_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3765_, 0, v_s_3758_);
lean_ctor_set(v___x_3765_, 1, v___x_3759_);
lean_ctor_set(v___x_3765_, 2, v___x_3764_);
v___x_3766_ = lean_unsigned_to_nat(1u);
v___x_3767_ = lean_substring_drop(v___x_3765_, v___x_3766_);
v___x_3768_ = l_Substring_Raw_toName(v___x_3767_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v___x_3769_; 
v___x_3769_ = lean_box(0);
return v___x_3769_;
}
else
{
lean_object* v___x_3770_; 
v___x_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3768_);
return v___x_3770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object* v_stx_3771_){
_start:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_3773_ = l_Lean_Syntax_isLit_x3f(v___x_3772_, v_stx_3771_);
if (lean_obj_tag(v___x_3773_) == 1)
{
lean_object* v_val_3774_; lean_object* v___x_3775_; 
v_val_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_val_3774_);
lean_dec_ref_known(v___x_3773_, 1);
v___x_3775_ = l_Lean_Syntax_decodeNameLit(v_val_3774_);
return v___x_3775_;
}
else
{
lean_object* v___x_3776_; 
lean_dec(v___x_3773_);
v___x_3776_ = lean_box(0);
return v___x_3776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object* v_stx_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l_Lean_Syntax_isNameLit_x3f(v_stx_3777_);
lean_dec(v_stx_3777_);
return v_res_3778_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object* v_x_3779_){
_start:
{
if (lean_obj_tag(v_x_3779_) == 1)
{
lean_object* v_args_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; uint8_t v___x_3783_; 
v_args_3780_ = lean_ctor_get(v_x_3779_, 2);
v___x_3781_ = lean_unsigned_to_nat(0u);
v___x_3782_ = lean_array_get_size(v_args_3780_);
v___x_3783_ = lean_nat_dec_lt(v___x_3781_, v___x_3782_);
return v___x_3783_;
}
else
{
uint8_t v___x_3784_; 
v___x_3784_ = 0;
return v___x_3784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object* v_x_3785_){
_start:
{
uint8_t v_res_3786_; lean_object* v_r_3787_; 
v_res_3786_ = l_Lean_Syntax_hasArgs(v_x_3785_);
lean_dec(v_x_3785_);
v_r_3787_ = lean_box(v_res_3786_);
return v_r_3787_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object* v_x_3788_){
_start:
{
if (lean_obj_tag(v_x_3788_) == 2)
{
uint8_t v___x_3789_; 
v___x_3789_ = 1;
return v___x_3789_;
}
else
{
uint8_t v___x_3790_; 
v___x_3790_ = 0;
return v___x_3790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object* v_x_3791_){
_start:
{
uint8_t v_res_3792_; lean_object* v_r_3793_; 
v_res_3792_ = l_Lean_Syntax_isAtom(v_x_3791_);
lean_dec(v_x_3791_);
v_r_3793_ = lean_box(v_res_3792_);
return v_r_3793_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object* v_token_3794_, lean_object* v_x_3795_){
_start:
{
if (lean_obj_tag(v_x_3795_) == 2)
{
lean_object* v_val_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; uint8_t v___x_3799_; 
v_val_3796_ = lean_ctor_get(v_x_3795_, 1);
lean_inc_ref(v_val_3796_);
lean_dec_ref_known(v_x_3795_, 2);
v___x_3797_ = lean_string_trim(v_val_3796_);
v___x_3798_ = lean_string_trim(v_token_3794_);
v___x_3799_ = lean_string_dec_eq(v___x_3797_, v___x_3798_);
lean_dec_ref(v___x_3798_);
lean_dec_ref(v___x_3797_);
return v___x_3799_;
}
else
{
uint8_t v___x_3800_; 
lean_dec(v_x_3795_);
lean_dec_ref(v_token_3794_);
v___x_3800_ = 0;
return v___x_3800_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object* v_token_3801_, lean_object* v_x_3802_){
_start:
{
uint8_t v_res_3803_; lean_object* v_r_3804_; 
v_res_3803_ = l_Lean_Syntax_isToken(v_token_3801_, v_x_3802_);
v_r_3804_ = lean_box(v_res_3803_);
return v_r_3804_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object* v_stx_3805_){
_start:
{
switch(lean_obj_tag(v_stx_3805_))
{
case 1:
{
lean_object* v_kind_3806_; lean_object* v_args_3807_; lean_object* v___x_3808_; uint8_t v___x_3809_; 
v_kind_3806_ = lean_ctor_get(v_stx_3805_, 1);
v_args_3807_ = lean_ctor_get(v_stx_3805_, 2);
v___x_3808_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_3809_ = lean_name_eq(v_kind_3806_, v___x_3808_);
if (v___x_3809_ == 0)
{
return v___x_3809_;
}
else
{
lean_object* v___x_3810_; lean_object* v___x_3811_; uint8_t v___x_3812_; 
v___x_3810_ = lean_array_get_size(v_args_3807_);
v___x_3811_ = lean_unsigned_to_nat(0u);
v___x_3812_ = lean_nat_dec_eq(v___x_3810_, v___x_3811_);
return v___x_3812_;
}
}
case 0:
{
uint8_t v___x_3813_; 
v___x_3813_ = 1;
return v___x_3813_;
}
default: 
{
uint8_t v___x_3814_; 
v___x_3814_ = 0;
return v___x_3814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object* v_stx_3815_){
_start:
{
uint8_t v_res_3816_; lean_object* v_r_3817_; 
v_res_3816_ = l_Lean_Syntax_isNone(v_stx_3815_);
lean_dec(v_stx_3815_);
v_r_3817_ = lean_box(v_res_3816_);
return v_r_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object* v_stx_3818_){
_start:
{
lean_object* v___x_3819_; 
v___x_3819_ = l_Lean_Syntax_getOptional_x3f(v_stx_3818_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v___x_3820_; 
v___x_3820_ = lean_box(0);
return v___x_3820_;
}
else
{
lean_object* v_val_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3829_; 
v_val_3821_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3823_ = v___x_3819_;
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_val_3821_);
lean_dec(v___x_3819_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3825_ = l_Lean_Syntax_getId(v_val_3821_);
lean_dec(v_val_3821_);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3825_);
v___x_3827_ = v___x_3823_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object* v_stx_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Lean_Syntax_getOptionalIdent_x3f(v_stx_3830_);
lean_dec(v_stx_3830_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object* v_p_3832_, lean_object* v_x_3833_){
_start:
{
if (lean_obj_tag(v_x_3833_) == 1)
{
lean_object* v_args_3834_; lean_object* v___x_3835_; uint8_t v___x_3836_; 
v_args_3834_ = lean_ctor_get(v_x_3833_, 2);
lean_inc_ref(v_p_3832_);
lean_inc_ref(v_x_3833_);
v___x_3835_ = lean_apply_1(v_p_3832_, v_x_3833_);
v___x_3836_ = lean_unbox(v___x_3835_);
if (v___x_3836_ == 0)
{
lean_object* v___x_3837_; lean_object* v___x_3838_; size_t v_sz_3839_; size_t v___x_3840_; lean_object* v___x_3841_; lean_object* v_fst_3842_; 
lean_inc_ref(v_args_3834_);
lean_dec_ref_known(v_x_3833_, 3);
v___x_3837_ = lean_box(0);
v___x_3838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_3839_ = lean_array_size(v_args_3834_);
v___x_3840_ = ((size_t)0ULL);
v___x_3841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3832_, v_args_3834_, v_sz_3839_, v___x_3840_, v___x_3838_);
lean_dec_ref(v_args_3834_);
v_fst_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_fst_3842_);
lean_dec_ref(v___x_3841_);
if (lean_obj_tag(v_fst_3842_) == 0)
{
return v___x_3837_;
}
else
{
lean_object* v_val_3843_; 
v_val_3843_ = lean_ctor_get(v_fst_3842_, 0);
lean_inc(v_val_3843_);
lean_dec_ref_known(v_fst_3842_, 1);
return v_val_3843_;
}
}
else
{
lean_object* v___x_3844_; 
lean_dec_ref(v_p_3832_);
v___x_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3844_, 0, v_x_3833_);
return v___x_3844_;
}
}
else
{
lean_object* v___x_3845_; uint8_t v___x_3846_; 
lean_inc(v_x_3833_);
v___x_3845_ = lean_apply_1(v_p_3832_, v_x_3833_);
v___x_3846_ = lean_unbox(v___x_3845_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; 
lean_dec(v_x_3833_);
v___x_3847_ = lean_box(0);
return v___x_3847_;
}
else
{
lean_object* v___x_3848_; 
v___x_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3848_, 0, v_x_3833_);
return v___x_3848_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object* v_p_3849_, lean_object* v_as_3850_, size_t v_sz_3851_, size_t v_i_3852_, lean_object* v_b_3853_){
_start:
{
uint8_t v___x_3854_; 
v___x_3854_ = lean_usize_dec_lt(v_i_3852_, v_sz_3851_);
if (v___x_3854_ == 0)
{
lean_dec_ref(v_p_3849_);
lean_inc_ref(v_b_3853_);
return v_b_3853_;
}
else
{
lean_object* v___x_3855_; lean_object* v_a_3856_; lean_object* v___x_3857_; 
v___x_3855_ = lean_box(0);
v_a_3856_ = lean_array_uget_borrowed(v_as_3850_, v_i_3852_);
lean_inc(v_a_3856_);
lean_inc_ref(v_p_3849_);
v___x_3857_ = l_Lean_Syntax_findAux(v_p_3849_, v_a_3856_);
if (lean_obj_tag(v___x_3857_) == 1)
{
lean_object* v___x_3858_; lean_object* v___x_3859_; 
lean_dec_ref(v_p_3849_);
v___x_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
v___x_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
lean_ctor_set(v___x_3859_, 1, v___x_3855_);
return v___x_3859_;
}
else
{
lean_object* v___x_3860_; size_t v___x_3861_; size_t v___x_3862_; 
lean_dec(v___x_3857_);
v___x_3860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_3861_ = ((size_t)1ULL);
v___x_3862_ = lean_usize_add(v_i_3852_, v___x_3861_);
v_i_3852_ = v___x_3862_;
v_b_3853_ = v___x_3860_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object* v_p_3864_, lean_object* v_as_3865_, lean_object* v_sz_3866_, lean_object* v_i_3867_, lean_object* v_b_3868_){
_start:
{
size_t v_sz_boxed_3869_; size_t v_i_boxed_3870_; lean_object* v_res_3871_; 
v_sz_boxed_3869_ = lean_unbox_usize(v_sz_3866_);
lean_dec(v_sz_3866_);
v_i_boxed_3870_ = lean_unbox_usize(v_i_3867_);
lean_dec(v_i_3867_);
v_res_3871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3864_, v_as_3865_, v_sz_boxed_3869_, v_i_boxed_3870_, v_b_3868_);
lean_dec_ref(v_b_3868_);
lean_dec_ref(v_as_3865_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object* v_stx_3872_, lean_object* v_p_3873_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l_Lean_Syntax_findAux(v_p_3873_, v_stx_3872_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object* v_s_3875_){
_start:
{
lean_object* v___x_3876_; 
v___x_3876_ = l_Lean_Syntax_isNatLit_x3f(v_s_3875_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v___x_3877_; 
v___x_3877_ = lean_unsigned_to_nat(0u);
return v___x_3877_;
}
else
{
lean_object* v_val_3878_; 
v_val_3878_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_val_3878_);
lean_dec_ref_known(v___x_3876_, 1);
return v_val_3878_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object* v_s_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_Lean_TSyntax_getNat(v_s_3879_);
lean_dec(v_s_3879_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object* v_stx_3884_){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3886_ = l_Lean_Syntax_isLit_x3f(v___x_3885_, v_stx_3884_);
if (lean_obj_tag(v___x_3886_) == 1)
{
lean_object* v_val_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v_val_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_val_3887_);
lean_dec_ref_known(v___x_3886_, 1);
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_val_3887_, v___x_3888_, v___x_3888_);
lean_dec(v_val_3887_);
return v___x_3889_;
}
else
{
lean_object* v___x_3890_; 
lean_dec(v___x_3886_);
v___x_3890_ = lean_box(0);
return v___x_3890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object* v_stx_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_stx_3891_);
lean_dec(v_stx_3891_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object* v_s_3893_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_s_3893_);
if (lean_obj_tag(v___x_3894_) == 0)
{
lean_object* v___x_3895_; 
v___x_3895_ = lean_unsigned_to_nat(0u);
return v___x_3895_;
}
else
{
lean_object* v_val_3896_; 
v_val_3896_ = lean_ctor_get(v___x_3894_, 0);
lean_inc(v_val_3896_);
lean_dec_ref_known(v___x_3894_, 1);
return v_val_3896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object* v_s_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_TSyntax_getHexNumVal(v_s_3897_);
lean_dec(v_s_3897_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object* v_s_3899_, lean_object* v_p_3900_, lean_object* v_n_3901_){
_start:
{
uint8_t v___x_3902_; 
v___x_3902_ = lean_string_utf8_at_end(v_s_3899_, v_p_3900_);
if (v___x_3902_ == 0)
{
lean_object* v___x_3903_; uint32_t v___x_3904_; uint32_t v___x_3905_; uint8_t v___x_3906_; 
v___x_3903_ = lean_string_utf8_next(v_s_3899_, v_p_3900_);
v___x_3904_ = lean_string_utf8_get(v_s_3899_, v_p_3900_);
lean_dec(v_p_3900_);
v___x_3905_ = 95;
v___x_3906_ = lean_uint32_dec_eq(v___x_3904_, v___x_3905_);
if (v___x_3906_ == 0)
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_nat_add(v_n_3901_, v___x_3907_);
lean_dec(v_n_3901_);
v_p_3900_ = v___x_3903_;
v_n_3901_ = v___x_3908_;
goto _start;
}
else
{
v_p_3900_ = v___x_3903_;
goto _start;
}
}
else
{
lean_dec(v_p_3900_);
return v_n_3901_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object* v_s_3911_, lean_object* v_p_3912_, lean_object* v_n_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_s_3911_, v_p_3912_, v_n_3913_);
lean_dec_ref(v_s_3911_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object* v_s_3915_){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3916_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3917_ = l_Lean_Syntax_isLit_x3f(v___x_3916_, v_s_3915_);
if (lean_obj_tag(v___x_3917_) == 1)
{
lean_object* v_val_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v_val_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_val_3918_);
lean_dec_ref_known(v___x_3917_, 1);
v___x_3919_ = lean_unsigned_to_nat(0u);
v___x_3920_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_val_3918_, v___x_3919_, v___x_3919_);
lean_dec(v_val_3918_);
return v___x_3920_;
}
else
{
lean_object* v___x_3921_; 
lean_dec(v___x_3917_);
v___x_3921_ = lean_unsigned_to_nat(0u);
return v___x_3921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object* v_s_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lean_TSyntax_getHexNumSize(v_s_3922_);
lean_dec(v_s_3922_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object* v_s_3924_){
_start:
{
lean_object* v___x_3925_; 
v___x_3925_ = l_Lean_Syntax_getId(v_s_3924_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object* v_s_3926_){
_start:
{
lean_object* v_res_3927_; 
v_res_3927_ = l_Lean_TSyntax_getId(v_s_3926_);
lean_dec(v_s_3926_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object* v_s_3935_){
_start:
{
lean_object* v___x_3936_; 
v___x_3936_ = l_Lean_Syntax_isScientificLit_x3f(v_s_3935_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v___x_3937_; 
v___x_3937_ = ((lean_object*)(l_Lean_TSyntax_getScientific___closed__1));
return v___x_3937_;
}
else
{
lean_object* v_val_3938_; 
v_val_3938_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_val_3938_);
lean_dec_ref_known(v___x_3936_, 1);
return v_val_3938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object* v_s_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = l_Lean_TSyntax_getScientific(v_s_3939_);
lean_dec(v_s_3939_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object* v_s_3941_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lean_Syntax_isStrLit_x3f(v_s_3941_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v___x_3943_; 
v___x_3943_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_3943_;
}
else
{
lean_object* v_val_3944_; 
v_val_3944_ = lean_ctor_get(v___x_3942_, 0);
lean_inc(v_val_3944_);
lean_dec_ref_known(v___x_3942_, 1);
return v_val_3944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object* v_s_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lean_TSyntax_getString(v_s_3945_);
lean_dec(v_s_3945_);
return v_res_3946_;
}
}
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object* v_s_3947_){
_start:
{
lean_object* v___x_3948_; 
v___x_3948_ = l_Lean_Syntax_isCharLit_x3f(v_s_3947_);
if (lean_obj_tag(v___x_3948_) == 0)
{
uint32_t v___x_3949_; 
v___x_3949_ = 65;
return v___x_3949_;
}
else
{
lean_object* v_val_3950_; uint32_t v___x_3951_; 
v_val_3950_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_val_3950_);
lean_dec_ref_known(v___x_3948_, 1);
v___x_3951_ = lean_unbox_uint32(v_val_3950_);
lean_dec(v_val_3950_);
return v___x_3951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object* v_s_3952_){
_start:
{
uint32_t v_res_3953_; lean_object* v_r_3954_; 
v_res_3953_ = l_Lean_TSyntax_getChar(v_s_3952_);
lean_dec(v_s_3952_);
v_r_3954_ = lean_box_uint32(v_res_3953_);
return v_r_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object* v_s_3955_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l_Lean_Syntax_isNameLit_x3f(v_s_3955_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v___x_3957_; 
v___x_3957_ = lean_obj_once(&l_Substring_Raw_toName___closed__0, &l_Substring_Raw_toName___closed__0_once, _init_l_Substring_Raw_toName___closed__0);
return v___x_3957_;
}
else
{
lean_object* v_val_3958_; 
v_val_3958_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_val_3958_);
lean_dec_ref_known(v___x_3956_, 1);
return v_val_3958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object* v_s_3959_){
_start:
{
lean_object* v_res_3960_; 
v_res_3960_ = l_Lean_TSyntax_getName(v_s_3959_);
lean_dec(v_s_3959_);
return v_res_3960_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object* v_s_3961_){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3962_ = lean_unsigned_to_nat(0u);
v___x_3963_ = l_Lean_Syntax_getArg(v_s_3961_, v___x_3962_);
v___x_3964_ = l_Lean_Syntax_getId(v___x_3963_);
lean_dec(v___x_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object* v_s_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lean_TSyntax_getHygieneInfo(v_s_3965_);
lean_dec(v_s_3965_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object* v_sep_3967_, lean_object* v_a_3968_){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3969_ = l_unsafeCast___redArg(v_a_3968_);
v___x_3970_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v_sep_3967_, v___x_3969_);
lean_dec(v___x_3969_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object* v_sep_3971_, lean_object* v_a_3972_){
_start:
{
lean_object* v_res_3973_; 
v_res_3973_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(v_sep_3971_, v_a_3972_);
lean_dec_ref(v_a_3972_);
return v_res_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object* v_sep_3974_){
_start:
{
lean_object* v___f_3975_; 
v___f_3975_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3975_, 0, v_sep_3974_);
return v___f_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object* v_k_3976_, lean_object* v_sep_3977_){
_start:
{
lean_object* v___f_3978_; 
v___f_3978_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3978_, 0, v_sep_3977_);
return v___f_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object* v_k_3979_, lean_object* v_sep_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(v_k_3979_, v_sep_3980_);
lean_dec(v_k_3979_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object* v_s_3982_, lean_object* v_val_3983_, uint8_t v_canonical_3984_){
_start:
{
lean_object* v___x_3985_; lean_object* v_src_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v_imported_3989_; lean_object* v_ctx_3990_; lean_object* v_scopes_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4007_; 
v___x_3985_ = lean_unsigned_to_nat(0u);
v_src_3986_ = l_Lean_Syntax_getArg(v_s_3982_, v___x_3985_);
v___x_3987_ = l_Lean_Syntax_getId(v_src_3986_);
v___x_3988_ = l_Lean_extractMacroScopes(v___x_3987_);
v_imported_3989_ = lean_ctor_get(v___x_3988_, 1);
v_ctx_3990_ = lean_ctor_get(v___x_3988_, 2);
v_scopes_3991_ = lean_ctor_get(v___x_3988_, 3);
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3988_);
if (v_isSharedCheck_4007_ == 0)
{
lean_object* v_unused_4008_; 
v_unused_4008_ = lean_ctor_get(v___x_3988_, 0);
lean_dec(v_unused_4008_);
v___x_3993_ = v___x_3988_;
v_isShared_3994_ = v_isSharedCheck_4007_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_scopes_3991_);
lean_inc(v_ctx_3990_);
lean_inc(v_imported_3989_);
lean_dec(v___x_3988_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4007_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3995_; lean_object* v___x_3997_; 
v___x_3995_ = l_Lean_Name_eraseMacroScopes(v_val_3983_);
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 0, v___x_3995_);
v___x_3997_ = v___x_3993_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v___x_3995_);
lean_ctor_set(v_reuseFailAlloc_4006_, 1, v_imported_3989_);
lean_ctor_set(v_reuseFailAlloc_4006_, 2, v_ctx_3990_);
lean_ctor_set(v_reuseFailAlloc_4006_, 3, v_scopes_3991_);
v___x_3997_ = v_reuseFailAlloc_4006_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v_id_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v_id_3998_ = l_Lean_MacroScopesView_review(v___x_3997_);
v___x_3999_ = l_Lean_SourceInfo_fromRef(v_src_3986_, v_canonical_3984_);
lean_dec(v_src_3986_);
v___x_4000_ = 1;
v___x_4001_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_3983_, v___x_4000_);
v___x_4002_ = lean_string_utf8_byte_size(v___x_4001_);
v___x_4003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4001_);
lean_ctor_set(v___x_4003_, 1, v___x_3985_);
lean_ctor_set(v___x_4003_, 2, v___x_4002_);
v___x_4004_ = lean_box(0);
v___x_4005_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4005_, 0, v___x_3999_);
lean_ctor_set(v___x_4005_, 1, v___x_4003_);
lean_ctor_set(v___x_4005_, 2, v_id_3998_);
lean_ctor_set(v___x_4005_, 3, v___x_4004_);
return v___x_4005_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object* v_s_4009_, lean_object* v_val_4010_, lean_object* v_canonical_4011_){
_start:
{
uint8_t v_canonical_boxed_4012_; lean_object* v_res_4013_; 
v_canonical_boxed_4012_ = lean_unbox(v_canonical_4011_);
v_res_4013_ = l_Lean_HygieneInfo_mkIdent(v_s_4009_, v_val_4010_, v_canonical_boxed_4012_);
lean_dec(v_s_4009_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_inst_4014_, lean_object* v_inst_4015_, lean_object* v_a_4016_){
_start:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4017_ = lean_apply_1(v_inst_4014_, v_a_4016_);
v___x_4018_ = lean_apply_1(v_inst_4015_, v___x_4017_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object* v_inst_4019_, lean_object* v_inst_4020_){
_start:
{
lean_object* v___f_4021_; 
v___f_4021_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4021_, 0, v_inst_4019_);
lean_closure_set(v___f_4021_, 1, v_inst_4020_);
return v___f_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object* v_00_u03b1_4022_, lean_object* v_k_4023_, lean_object* v_k_x27_4024_, lean_object* v_inst_4025_, lean_object* v_inst_4026_){
_start:
{
lean_object* v___f_4027_; 
v___f_4027_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4027_, 0, v_inst_4025_);
lean_closure_set(v___f_4027_, 1, v_inst_4026_);
return v___f_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object* v_00_u03b1_4028_, lean_object* v_k_4029_, lean_object* v_k_x27_4030_, lean_object* v_inst_4031_, lean_object* v_inst_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(v_00_u03b1_4028_, v_k_4029_, v_k_x27_4030_, v_inst_4031_, v_inst_4032_);
lean_dec(v_k_x27_4030_);
lean_dec(v_k_4029_);
return v_res_4033_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; 
v___x_4041_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__2));
v___x_4042_ = l_Lean_mkCIdent(v___x_4041_);
return v___x_4042_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4047_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__5));
v___x_4048_ = l_Lean_mkCIdent(v___x_4047_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t v_x_4049_){
_start:
{
if (v_x_4049_ == 0)
{
lean_object* v___x_4050_; 
v___x_4050_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__3, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3);
return v___x_4050_;
}
else
{
lean_object* v___x_4051_; 
v___x_4051_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__6, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6);
return v___x_4051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object* v_x_4052_){
_start:
{
uint8_t v_x_85__boxed_4053_; lean_object* v_res_4054_; 
v_x_85__boxed_4053_ = lean_unbox(v_x_4052_);
v_res_4054_ = l_Lean_instQuoteBoolMkStr1___lam__0(v_x_85__boxed_4053_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t v_val_4057_){
_start:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4058_ = lean_box(2);
v___x_4059_ = l_Lean_Syntax_mkCharLit(v_val_4057_, v___x_4058_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object* v_val_4060_){
_start:
{
uint32_t v_val_boxed_4061_; lean_object* v_res_4062_; 
v_val_boxed_4061_ = lean_unbox_uint32(v_val_4060_);
lean_dec(v_val_4060_);
v_res_4062_ = l_Lean_instQuoteCharCharLitKind___lam__0(v_val_boxed_4061_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object* v_val_4065_){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; 
v___x_4066_ = lean_box(2);
v___x_4067_ = l_Lean_Syntax_mkStrLit(v_val_4065_, v___x_4066_);
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object* v_n_4070_){
_start:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4071_ = l_Nat_reprFast(v_n_4070_);
v___x_4072_ = lean_box(2);
v___x_4073_ = l_Lean_Syntax_mkNumLit(v___x_4071_, v___x_4072_);
return v___x_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object* v_s_4081_){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4082_ = ((lean_object*)(l_Lean_instQuoteRawMkStr1___lam__0___closed__2));
v___x_4083_ = lean_substring_tostring(v_s_4081_);
v___x_4084_ = lean_box(2);
v___x_4085_ = l_Lean_Syntax_mkStrLit(v___x_4083_, v___x_4084_);
v___x_4086_ = lean_unsigned_to_nat(1u);
v___x_4087_ = lean_mk_empty_array_with_capacity(v___x_4086_);
v___x_4088_ = lean_array_push(v___x_4087_, v___x_4085_);
v___x_4089_ = l_Lean_Syntax_mkCApp(v___x_4082_, v___x_4088_);
lean_dec_ref(v___x_4088_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object* v_acc_4092_, lean_object* v_x_4093_){
_start:
{
switch(lean_obj_tag(v_x_4093_))
{
case 0:
{
uint8_t v___x_4094_; 
v___x_4094_ = l_List_isEmpty___redArg(v_acc_4092_);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; 
v___x_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4095_, 0, v_acc_4092_);
return v___x_4095_;
}
else
{
lean_object* v___x_4096_; 
lean_dec(v_acc_4092_);
v___x_4096_ = lean_box(0);
return v___x_4096_;
}
}
case 1:
{
lean_object* v_pre_4097_; lean_object* v_str_4098_; lean_object* v_val_4100_; lean_object* v___x_4103_; lean_object* v___x_4104_; uint8_t v___x_4105_; 
v_pre_4097_ = lean_ctor_get(v_x_4093_, 0);
lean_inc(v_pre_4097_);
v_str_4098_ = lean_ctor_get(v_x_4093_, 1);
lean_inc_ref(v_str_4098_);
lean_dec_ref_known(v_x_4093_, 2);
v___x_4103_ = lean_unsigned_to_nat(0u);
v___x_4104_ = lean_string_utf8_byte_size(v_str_4098_);
v___x_4105_ = lean_nat_dec_lt(v___x_4103_, v___x_4104_);
if (v___x_4105_ == 0)
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4106_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_4107_ = lean_string_append(v___x_4106_, v_str_4098_);
lean_dec_ref(v_str_4098_);
v___x_4108_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_4109_ = lean_string_append(v___x_4107_, v___x_4108_);
v_val_4100_ = v___x_4109_;
goto v___jp_4099_;
}
else
{
lean_object* v___f_4110_; uint8_t v___y_4112_; lean_object* v___f_4119_; uint32_t v___y_4126_; uint32_t v___y_4131_; uint8_t v___y_4132_; uint8_t v_c_4146_; uint8_t v___x_4155_; uint8_t v___x_4156_; 
v___f_4110_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
v___f_4119_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_4146_ = lean_string_get_byte_fast(v_str_4098_, v___x_4103_);
v___x_4155_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__2);
v___x_4156_ = lean_uint8_dec_le(v___x_4155_, v_c_4146_);
if (v___x_4156_ == 0)
{
goto v___jp_4150_;
}
else
{
uint8_t v___x_4157_; uint8_t v___x_4158_; 
v___x_4157_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__3);
v___x_4158_ = lean_uint8_dec_le(v_c_4146_, v___x_4157_);
if (v___x_4158_ == 0)
{
goto v___jp_4150_;
}
else
{
goto v___jp_4143_;
}
}
v___jp_4111_:
{
if (v___y_4112_ == 0)
{
uint8_t v___x_4113_; 
lean_inc_ref(v_str_4098_);
v___x_4113_ = lean_string_any(v_str_4098_, v___f_4110_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4114_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0);
v___x_4115_ = lean_string_append(v___x_4114_, v_str_4098_);
lean_dec_ref(v_str_4098_);
v___x_4116_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1, &l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1);
v___x_4117_ = lean_string_append(v___x_4115_, v___x_4116_);
v_val_4100_ = v___x_4117_;
goto v___jp_4099_;
}
else
{
lean_object* v___x_4118_; 
lean_dec_ref(v_str_4098_);
lean_dec(v_pre_4097_);
lean_dec(v_acc_4092_);
v___x_4118_ = lean_box(0);
return v___x_4118_;
}
}
else
{
v_val_4100_ = v_str_4098_;
goto v___jp_4099_;
}
}
v___jp_4120_:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; uint8_t v___x_4124_; 
lean_inc_ref(v_str_4098_);
v___x_4121_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4121_, 0, v_str_4098_);
lean_ctor_set(v___x_4121_, 1, v___x_4103_);
lean_ctor_set(v___x_4121_, 2, v___x_4104_);
v___x_4122_ = lean_unsigned_to_nat(1u);
v___x_4123_ = lean_substring_drop(v___x_4121_, v___x_4122_);
v___x_4124_ = lean_substring_all(v___x_4123_, v___f_4119_);
v___y_4112_ = v___x_4124_;
goto v___jp_4111_;
}
v___jp_4125_:
{
uint32_t v___x_4127_; uint8_t v___x_4128_; 
v___x_4127_ = 95;
v___x_4128_ = lean_uint32_dec_eq(v___y_4126_, v___x_4127_);
if (v___x_4128_ == 0)
{
uint8_t v___x_4129_; 
v___x_4129_ = l_Lean_isLetterLike(v___y_4126_);
if (v___x_4129_ == 0)
{
v___y_4112_ = v___x_4129_;
goto v___jp_4111_;
}
else
{
goto v___jp_4120_;
}
}
else
{
goto v___jp_4120_;
}
}
v___jp_4130_:
{
if (v___y_4132_ == 0)
{
uint32_t v___x_4133_; uint8_t v___x_4134_; 
v___x_4133_ = 97;
v___x_4134_ = lean_uint32_dec_le(v___x_4133_, v___y_4131_);
if (v___x_4134_ == 0)
{
v___y_4126_ = v___y_4131_;
goto v___jp_4125_;
}
else
{
uint32_t v___x_4135_; uint8_t v___x_4136_; 
v___x_4135_ = 122;
v___x_4136_ = lean_uint32_dec_le(v___y_4131_, v___x_4135_);
if (v___x_4136_ == 0)
{
v___y_4126_ = v___y_4131_;
goto v___jp_4125_;
}
else
{
goto v___jp_4120_;
}
}
}
else
{
goto v___jp_4120_;
}
}
v___jp_4137_:
{
uint32_t v___x_4138_; uint32_t v___x_4139_; uint8_t v___x_4140_; 
v___x_4138_ = lean_string_utf8_get(v_str_4098_, v___x_4103_);
v___x_4139_ = 65;
v___x_4140_ = lean_uint32_dec_le(v___x_4139_, v___x_4138_);
if (v___x_4140_ == 0)
{
v___y_4131_ = v___x_4138_;
v___y_4132_ = v___x_4140_;
goto v___jp_4130_;
}
else
{
uint32_t v___x_4141_; uint8_t v___x_4142_; 
v___x_4141_ = 90;
v___x_4142_ = lean_uint32_dec_le(v___x_4138_, v___x_4141_);
v___y_4131_ = v___x_4138_;
v___y_4132_ = v___x_4142_;
goto v___jp_4130_;
}
}
v___jp_4143_:
{
lean_object* v___x_4144_; uint8_t v___x_4145_; 
v___x_4144_ = lean_unsigned_to_nat(1u);
v___x_4145_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_str_4098_, v___x_4144_);
if (v___x_4145_ == 0)
{
goto v___jp_4137_;
}
else
{
v___y_4112_ = v___x_4145_;
goto v___jp_4111_;
}
}
v___jp_4147_:
{
uint8_t v___x_4148_; uint8_t v___x_4149_; 
v___x_4148_ = lean_uint8_once(&l_Lean_isIdFirstAscii___closed__0, &l_Lean_isIdFirstAscii___closed__0_once, _init_l_Lean_isIdFirstAscii___closed__0);
v___x_4149_ = lean_uint8_dec_eq(v_c_4146_, v___x_4148_);
if (v___x_4149_ == 0)
{
goto v___jp_4137_;
}
else
{
goto v___jp_4143_;
}
}
v___jp_4150_:
{
uint8_t v___x_4151_; uint8_t v___x_4152_; 
v___x_4151_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__0);
v___x_4152_ = lean_uint8_dec_le(v___x_4151_, v_c_4146_);
if (v___x_4152_ == 0)
{
goto v___jp_4147_;
}
else
{
uint8_t v___x_4153_; uint8_t v___x_4154_; 
v___x_4153_ = lean_uint8_once(&l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1, &l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___closed__1);
v___x_4154_ = lean_uint8_dec_le(v_c_4146_, v___x_4153_);
if (v___x_4154_ == 0)
{
goto v___jp_4147_;
}
else
{
goto v___jp_4143_;
}
}
}
}
v___jp_4099_:
{
lean_object* v___x_4101_; 
v___x_4101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4101_, 0, v_val_4100_);
lean_ctor_set(v___x_4101_, 1, v_acc_4092_);
v_acc_4092_ = v___x_4101_;
v_x_4093_ = v_pre_4097_;
goto _start;
}
}
default: 
{
lean_object* v___x_4159_; 
lean_dec_ref_known(v_x_4093_, 2);
lean_dec(v_acc_4092_);
v___x_4159_ = lean_box(0);
return v___x_4159_;
}
}
}
}
static lean_object* _init_l_Lean_quoteNameMk___closed__3(void){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; 
v___x_4166_ = ((lean_object*)(l_Lean_quoteNameMk___closed__2));
v___x_4167_ = l_Lean_mkCIdent(v___x_4166_);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object* v_x_4178_){
_start:
{
switch(lean_obj_tag(v_x_4178_))
{
case 0:
{
lean_object* v___x_4179_; 
v___x_4179_ = lean_obj_once(&l_Lean_quoteNameMk___closed__3, &l_Lean_quoteNameMk___closed__3_once, _init_l_Lean_quoteNameMk___closed__3);
return v___x_4179_;
}
case 1:
{
lean_object* v_pre_4180_; lean_object* v_str_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v_pre_4180_ = lean_ctor_get(v_x_4178_, 0);
lean_inc(v_pre_4180_);
v_str_4181_ = lean_ctor_get(v_x_4178_, 1);
lean_inc_ref(v_str_4181_);
lean_dec_ref_known(v_x_4178_, 2);
v___x_4182_ = ((lean_object*)(l_Lean_quoteNameMk___closed__5));
v___x_4183_ = l_Lean_quoteNameMk(v_pre_4180_);
v___x_4184_ = lean_box(2);
v___x_4185_ = l_Lean_Syntax_mkStrLit(v_str_4181_, v___x_4184_);
v___x_4186_ = lean_unsigned_to_nat(2u);
v___x_4187_ = lean_mk_empty_array_with_capacity(v___x_4186_);
v___x_4188_ = lean_array_push(v___x_4187_, v___x_4183_);
v___x_4189_ = lean_array_push(v___x_4188_, v___x_4185_);
v___x_4190_ = l_Lean_Syntax_mkCApp(v___x_4182_, v___x_4189_);
lean_dec_ref(v___x_4189_);
return v___x_4190_;
}
default: 
{
lean_object* v_pre_4191_; lean_object* v_i_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v_pre_4191_ = lean_ctor_get(v_x_4178_, 0);
lean_inc(v_pre_4191_);
v_i_4192_ = lean_ctor_get(v_x_4178_, 1);
lean_inc(v_i_4192_);
lean_dec_ref_known(v_x_4178_, 2);
v___x_4193_ = ((lean_object*)(l_Lean_quoteNameMk___closed__7));
v___x_4194_ = l_Lean_quoteNameMk(v_pre_4191_);
v___x_4195_ = l_Nat_reprFast(v_i_4192_);
v___x_4196_ = lean_box(2);
v___x_4197_ = l_Lean_Syntax_mkNumLit(v___x_4195_, v___x_4196_);
v___x_4198_ = lean_unsigned_to_nat(2u);
v___x_4199_ = lean_mk_empty_array_with_capacity(v___x_4198_);
v___x_4200_ = lean_array_push(v___x_4199_, v___x_4194_);
v___x_4201_ = lean_array_push(v___x_4200_, v___x_4197_);
v___x_4202_ = l_Lean_Syntax_mkCApp(v___x_4193_, v___x_4201_);
lean_dec_ref(v___x_4201_);
return v___x_4202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object* v_n_4209_){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4210_ = lean_box(0);
lean_inc(v_n_4209_);
v___x_4211_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4210_, v_n_4209_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v___x_4212_; 
v___x_4212_ = l_Lean_quoteNameMk(v_n_4209_);
return v___x_4212_;
}
else
{
lean_object* v_val_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
lean_dec(v_n_4209_);
v_val_4213_ = lean_ctor_get(v___x_4211_, 0);
lean_inc(v_val_4213_);
lean_dec_ref_known(v___x_4211_, 1);
v___x_4214_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4215_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4216_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4217_ = lean_string_intercalate(v___x_4216_, v_val_4213_);
v___x_4218_ = lean_string_append(v___x_4215_, v___x_4217_);
lean_dec_ref(v___x_4217_);
v___x_4219_ = lean_box(2);
v___x_4220_ = l_Lean_Syntax_mkNameLit(v___x_4218_, v___x_4219_);
v___x_4221_ = lean_unsigned_to_nat(1u);
v___x_4222_ = lean_mk_empty_array_with_capacity(v___x_4221_);
v___x_4223_ = lean_array_push(v___x_4222_, v___x_4220_);
v___x_4224_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4219_);
lean_ctor_set(v___x_4224_, 1, v___x_4214_);
lean_ctor_set(v___x_4224_, 2, v___x_4223_);
return v___x_4224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object* v_n_4225_){
_start:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4226_ = lean_box(0);
lean_inc(v_n_4225_);
v___x_4227_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4226_, v_n_4225_);
if (lean_obj_tag(v___x_4227_) == 0)
{
lean_object* v___x_4228_; 
v___x_4228_ = l_Lean_quoteNameMk(v_n_4225_);
return v___x_4228_;
}
else
{
lean_object* v_val_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
lean_dec(v_n_4225_);
v_val_4229_ = lean_ctor_get(v___x_4227_, 0);
lean_inc(v_val_4229_);
lean_dec_ref_known(v___x_4227_, 1);
v___x_4230_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4231_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4232_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4233_ = lean_string_intercalate(v___x_4232_, v_val_4229_);
v___x_4234_ = lean_string_append(v___x_4231_, v___x_4233_);
lean_dec_ref(v___x_4233_);
v___x_4235_ = lean_box(2);
v___x_4236_ = l_Lean_Syntax_mkNameLit(v___x_4234_, v___x_4235_);
v___x_4237_ = lean_unsigned_to_nat(1u);
v___x_4238_ = lean_mk_empty_array_with_capacity(v___x_4237_);
v___x_4239_ = lean_array_push(v___x_4238_, v___x_4236_);
v___x_4240_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4235_);
lean_ctor_set(v___x_4240_, 1, v___x_4230_);
lean_ctor_set(v___x_4240_, 2, v___x_4239_);
return v___x_4240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object* v_inst_4248_, lean_object* v_inst_4249_, lean_object* v_x_4250_){
_start:
{
lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; 
v_fst_4251_ = lean_ctor_get(v_x_4250_, 0);
lean_inc(v_fst_4251_);
v_snd_4252_ = lean_ctor_get(v_x_4250_, 1);
lean_inc(v_snd_4252_);
lean_dec_ref(v_x_4250_);
v___x_4253_ = ((lean_object*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2));
v___x_4254_ = lean_apply_1(v_inst_4248_, v_fst_4251_);
v___x_4255_ = lean_apply_1(v_inst_4249_, v_snd_4252_);
v___x_4256_ = lean_unsigned_to_nat(2u);
v___x_4257_ = lean_mk_empty_array_with_capacity(v___x_4256_);
v___x_4258_ = lean_array_push(v___x_4257_, v___x_4254_);
v___x_4259_ = lean_array_push(v___x_4258_, v___x_4255_);
v___x_4260_ = l_Lean_Syntax_mkCApp(v___x_4253_, v___x_4259_);
lean_dec_ref(v___x_4259_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object* v_inst_4261_, lean_object* v_inst_4262_){
_start:
{
lean_object* v___f_4263_; 
v___f_4263_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4263_, 0, v_inst_4261_);
lean_closure_set(v___f_4263_, 1, v_inst_4262_);
return v___f_4263_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object* v_00_u03b1_4264_, lean_object* v_00_u03b2_4265_, lean_object* v_inst_4266_, lean_object* v_inst_4267_){
_start:
{
lean_object* v___f_4268_; 
v___f_4268_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4268_, 0, v_inst_4266_);
lean_closure_set(v___f_4268_, 1, v_inst_4267_);
return v___f_4268_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3(void){
_start:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; 
v___x_4274_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2));
v___x_4275_ = l_Lean_mkCIdent(v___x_4274_);
return v___x_4275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object* v_inst_4280_, lean_object* v_x_4281_){
_start:
{
if (lean_obj_tag(v_x_4281_) == 0)
{
lean_object* v___x_4282_; 
lean_dec_ref(v_inst_4280_);
v___x_4282_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3, &l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3);
return v___x_4282_;
}
else
{
lean_object* v_head_4283_; lean_object* v_tail_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v_head_4283_ = lean_ctor_get(v_x_4281_, 0);
lean_inc(v_head_4283_);
v_tail_4284_ = lean_ctor_get(v_x_4281_, 1);
lean_inc(v_tail_4284_);
lean_dec_ref_known(v_x_4281_, 2);
v___x_4285_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5));
lean_inc_ref(v_inst_4280_);
v___x_4286_ = lean_apply_1(v_inst_4280_, v_head_4283_);
v___x_4287_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4280_, v_tail_4284_);
v___x_4288_ = lean_unsigned_to_nat(2u);
v___x_4289_ = lean_mk_empty_array_with_capacity(v___x_4288_);
v___x_4290_ = lean_array_push(v___x_4289_, v___x_4286_);
v___x_4291_ = lean_array_push(v___x_4290_, v___x_4287_);
v___x_4292_ = l_Lean_Syntax_mkCApp(v___x_4285_, v___x_4291_);
lean_dec_ref(v___x_4291_);
return v___x_4292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object* v_00_u03b1_4293_, lean_object* v_inst_4294_, lean_object* v_x_4295_){
_start:
{
lean_object* v___x_4296_; 
v___x_4296_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4294_, v_x_4295_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object* v_inst_4297_, lean_object* v_a_4298_){
_start:
{
lean_object* v___x_4299_; 
v___x_4299_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4297_, v_a_4298_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object* v_00_u03b1_4300_, lean_object* v_inst_4301_, lean_object* v_a_4302_){
_start:
{
lean_object* v___x_4303_; 
v___x_4303_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4301_, v_a_4302_);
return v___x_4303_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object* v_inst_4304_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4305_, 0, lean_box(0));
lean_closure_set(v___x_4305_, 1, v_inst_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object* v_00_u03b1_4306_, lean_object* v_inst_4307_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4308_, 0, lean_box(0));
lean_closure_set(v___x_4308_, 1, v_inst_4307_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object* v_inst_4311_, lean_object* v_xs_4312_, lean_object* v_i_4313_, lean_object* v_args_4314_){
_start:
{
lean_object* v___x_4315_; uint8_t v___x_4316_; 
v___x_4315_ = lean_array_get_size(v_xs_4312_);
v___x_4316_ = lean_nat_dec_lt(v_i_4313_, v___x_4315_);
if (v___x_4316_ == 0)
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
lean_dec(v_i_4313_);
lean_dec_ref(v_inst_4311_);
v___x_4317_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0));
v___x_4318_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1));
v___x_4319_ = l_Nat_reprFast(v___x_4315_);
v___x_4320_ = lean_string_append(v___x_4318_, v___x_4319_);
lean_dec_ref(v___x_4319_);
v___x_4321_ = l_Lean_Name_mkStr2(v___x_4317_, v___x_4320_);
v___x_4322_ = l_Lean_Syntax_mkCApp(v___x_4321_, v_args_4314_);
lean_dec_ref(v_args_4314_);
return v___x_4322_;
}
else
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4323_ = lean_unsigned_to_nat(1u);
v___x_4324_ = lean_nat_add(v_i_4313_, v___x_4323_);
v___x_4325_ = lean_array_fget_borrowed(v_xs_4312_, v_i_4313_);
lean_dec(v_i_4313_);
lean_inc_ref(v_inst_4311_);
lean_inc(v___x_4325_);
v___x_4326_ = lean_apply_1(v_inst_4311_, v___x_4325_);
v___x_4327_ = lean_array_push(v_args_4314_, v___x_4326_);
v_i_4313_ = v___x_4324_;
v_args_4314_ = v___x_4327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object* v_inst_4329_, lean_object* v_xs_4330_, lean_object* v_i_4331_, lean_object* v_args_4332_){
_start:
{
lean_object* v_res_4333_; 
v_res_4333_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4329_, v_xs_4330_, v_i_4331_, v_args_4332_);
lean_dec_ref(v_xs_4330_);
return v_res_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object* v_00_u03b1_4334_, lean_object* v_inst_4335_, lean_object* v_xs_4336_, lean_object* v_i_4337_, lean_object* v_args_4338_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4335_, v_xs_4336_, v_i_4337_, v_args_4338_);
return v___x_4339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object* v_00_u03b1_4340_, lean_object* v_inst_4341_, lean_object* v_xs_4342_, lean_object* v_i_4343_, lean_object* v_args_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go(v_00_u03b1_4340_, v_inst_4341_, v_xs_4342_, v_i_4343_, v_args_4344_);
lean_dec_ref(v_xs_4342_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object* v_inst_4350_, lean_object* v_xs_4351_){
_start:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; uint8_t v___x_4354_; 
v___x_4352_ = lean_array_get_size(v_xs_4351_);
v___x_4353_ = lean_unsigned_to_nat(8u);
v___x_4354_ = lean_nat_dec_le(v___x_4352_, v___x_4353_);
if (v___x_4354_ == 0)
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4355_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1));
v___x_4356_ = lean_array_to_list(v_xs_4351_);
v___x_4357_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4350_, v___x_4356_);
v___x_4358_ = lean_unsigned_to_nat(1u);
v___x_4359_ = lean_mk_empty_array_with_capacity(v___x_4358_);
v___x_4360_ = lean_array_push(v___x_4359_, v___x_4357_);
v___x_4361_ = l_Lean_Syntax_mkCApp(v___x_4355_, v___x_4360_);
lean_dec_ref(v___x_4360_);
return v___x_4361_;
}
else
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = lean_unsigned_to_nat(0u);
v___x_4363_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4364_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4350_, v_xs_4351_, v___x_4362_, v___x_4363_);
lean_dec_ref(v_xs_4351_);
return v___x_4364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object* v_00_u03b1_4365_, lean_object* v_inst_4366_, lean_object* v_xs_4367_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4366_, v_xs_4367_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object* v_inst_4369_, lean_object* v_xs_4370_){
_start:
{
lean_object* v___x_4371_; 
v___x_4371_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4369_, v_xs_4370_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object* v_00_u03b1_4372_, lean_object* v_inst_4373_, lean_object* v_xs_4374_){
_start:
{
lean_object* v___x_4375_; 
v___x_4375_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4373_, v_xs_4374_);
return v___x_4375_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object* v_inst_4376_){
_start:
{
lean_object* v___x_4377_; 
v___x_4377_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4377_, 0, lean_box(0));
lean_closure_set(v___x_4377_, 1, v_inst_4376_);
return v___x_4377_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object* v_00_u03b1_4378_, lean_object* v_inst_4379_){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4380_, 0, lean_box(0));
lean_closure_set(v___x_4380_, 1, v_inst_4379_);
return v___x_4380_;
}
}
static lean_object* _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4386_; lean_object* v___x_4387_; 
v___x_4386_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__2));
v___x_4387_ = l_Lean_mkIdent(v___x_4386_);
return v___x_4387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object* v_inst_4392_, lean_object* v_x_4393_){
_start:
{
if (lean_obj_tag(v_x_4393_) == 0)
{
lean_object* v___x_4394_; 
lean_dec_ref(v_inst_4392_);
v___x_4394_ = lean_obj_once(&l_Lean_Option_hasQuote___redArg___lam__0___closed__3, &l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once, _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3);
return v___x_4394_;
}
else
{
lean_object* v_val_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v_val_4395_ = lean_ctor_get(v_x_4393_, 0);
lean_inc(v_val_4395_);
lean_dec_ref_known(v_x_4393_, 1);
v___x_4396_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__5));
v___x_4397_ = lean_apply_1(v_inst_4392_, v_val_4395_);
v___x_4398_ = lean_unsigned_to_nat(1u);
v___x_4399_ = lean_mk_empty_array_with_capacity(v___x_4398_);
v___x_4400_ = lean_array_push(v___x_4399_, v___x_4397_);
v___x_4401_ = l_Lean_Syntax_mkCApp(v___x_4396_, v___x_4400_);
lean_dec_ref(v___x_4400_);
return v___x_4401_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object* v_inst_4402_){
_start:
{
lean_object* v___f_4403_; 
v___f_4403_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4403_, 0, v_inst_4402_);
return v___f_4403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object* v_00_u03b1_4404_, lean_object* v_inst_4405_){
_start:
{
lean_object* v___f_4406_; 
v___f_4406_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4406_, 0, v_inst_4405_);
return v___f_4406_;
}
}
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(uint8_t v___x_4407_, lean_object* v_k_4408_){
_start:
{
lean_object* v___x_4409_; uint8_t v___x_4410_; 
v___x_4409_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_4410_ = lean_name_eq(v_k_4408_, v___x_4409_);
if (v___x_4410_ == 0)
{
uint8_t v___x_4411_; 
v___x_4411_ = 1;
return v___x_4411_;
}
else
{
return v___x_4407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object* v___x_4412_, lean_object* v_k_4413_){
_start:
{
uint8_t v___x_442__boxed_4414_; uint8_t v_res_4415_; lean_object* v_r_4416_; 
v___x_442__boxed_4414_ = lean_unbox(v___x_4412_);
v_res_4415_ = l_Lean_evalPrec___lam__0(v___x_442__boxed_4414_, v_k_4413_);
lean_dec(v_k_4413_);
v_r_4416_ = lean_box(v_res_4415_);
return v_r_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object* v_stx_4418_, lean_object* v_a_4419_, lean_object* v_a_4420_){
_start:
{
lean_object* v_methods_4421_; lean_object* v_quotContext_4422_; lean_object* v_currMacroScope_4423_; lean_object* v_currRecDepth_4424_; lean_object* v_maxRecDepth_4425_; lean_object* v_ref_4426_; uint8_t v___x_4427_; 
v_methods_4421_ = lean_ctor_get(v_a_4419_, 0);
v_quotContext_4422_ = lean_ctor_get(v_a_4419_, 1);
v_currMacroScope_4423_ = lean_ctor_get(v_a_4419_, 2);
v_currRecDepth_4424_ = lean_ctor_get(v_a_4419_, 3);
v_maxRecDepth_4425_ = lean_ctor_get(v_a_4419_, 4);
v_ref_4426_ = lean_ctor_get(v_a_4419_, 5);
v___x_4427_ = lean_nat_dec_eq(v_currRecDepth_4424_, v_maxRecDepth_4425_);
if (v___x_4427_ == 0)
{
lean_object* v___x_4428_; lean_object* v___f_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4428_ = lean_box(v___x_4427_);
v___f_4429_ = lean_alloc_closure((void*)(l_Lean_evalPrec___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4429_, 0, v___x_4428_);
v___x_4430_ = lean_unsigned_to_nat(1u);
v___x_4431_ = lean_nat_add(v_currRecDepth_4424_, v___x_4430_);
lean_inc(v_ref_4426_);
lean_inc(v_maxRecDepth_4425_);
lean_inc(v_currMacroScope_4423_);
lean_inc(v_quotContext_4422_);
lean_inc(v_methods_4421_);
v___x_4432_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4432_, 0, v_methods_4421_);
lean_ctor_set(v___x_4432_, 1, v_quotContext_4422_);
lean_ctor_set(v___x_4432_, 2, v_currMacroScope_4423_);
lean_ctor_set(v___x_4432_, 3, v___x_4431_);
lean_ctor_set(v___x_4432_, 4, v_maxRecDepth_4425_);
lean_ctor_set(v___x_4432_, 5, v_ref_4426_);
lean_inc_ref(v___x_4432_);
v___x_4433_ = l_Lean_expandMacros(v_stx_4418_, v___f_4429_, v___x_4432_, v_a_4420_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4447_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
v_a_4435_ = lean_ctor_get(v___x_4433_, 1);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4437_ = v___x_4433_;
v_isShared_4438_ = v_isSharedCheck_4447_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_inc(v_a_4434_);
lean_dec(v___x_4433_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4447_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4439_; uint8_t v___x_4440_; 
v___x_4439_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4434_);
v___x_4440_ = l_Lean_Syntax_isOfKind(v_a_4434_, v___x_4439_);
if (v___x_4440_ == 0)
{
lean_object* v___x_4441_; lean_object* v___x_4442_; 
lean_del_object(v___x_4437_);
v___x_4441_ = ((lean_object*)(l_Lean_evalPrec___closed__0));
v___x_4442_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4434_, v___x_4441_, v___x_4432_, v_a_4435_);
lean_dec_ref_known(v___x_4432_, 6);
lean_dec(v_a_4434_);
return v___x_4442_;
}
else
{
lean_object* v___x_4443_; lean_object* v___x_4445_; 
lean_dec_ref_known(v___x_4432_, 6);
v___x_4443_ = l_Lean_TSyntax_getNat(v_a_4434_);
lean_dec(v_a_4434_);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 0, v___x_4443_);
v___x_4445_ = v___x_4437_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v___x_4443_);
lean_ctor_set(v_reuseFailAlloc_4446_, 1, v_a_4435_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
}
}
else
{
lean_object* v_a_4448_; lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref_known(v___x_4432_, 6);
v_a_4448_ = lean_ctor_get(v___x_4433_, 0);
v_a_4449_ = lean_ctor_get(v___x_4433_, 1);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4433_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_inc(v_a_4448_);
lean_dec(v___x_4433_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4448_);
lean_ctor_set(v_reuseFailAlloc_4455_, 1, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
else
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4457_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4458_, 0, v_stx_4418_);
lean_ctor_set(v___x_4458_, 1, v___x_4457_);
v___x_4459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
lean_ctor_set(v___x_4459_, 1, v_a_4420_);
return v___x_4459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object* v_stx_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = l_Lean_evalPrec(v_stx_4460_, v_a_4461_, v_a_4462_);
lean_dec_ref(v_a_4461_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object* v_stx_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_){
_start:
{
lean_object* v_methods_4468_; lean_object* v_quotContext_4469_; lean_object* v_currMacroScope_4470_; lean_object* v_currRecDepth_4471_; lean_object* v_maxRecDepth_4472_; lean_object* v_ref_4473_; uint8_t v___x_4474_; 
v_methods_4468_ = lean_ctor_get(v_a_4466_, 0);
v_quotContext_4469_ = lean_ctor_get(v_a_4466_, 1);
v_currMacroScope_4470_ = lean_ctor_get(v_a_4466_, 2);
v_currRecDepth_4471_ = lean_ctor_get(v_a_4466_, 3);
v_maxRecDepth_4472_ = lean_ctor_get(v_a_4466_, 4);
v_ref_4473_ = lean_ctor_get(v_a_4466_, 5);
v___x_4474_ = lean_nat_dec_eq(v_currRecDepth_4471_, v_maxRecDepth_4472_);
if (v___x_4474_ == 0)
{
lean_object* v___x_4475_; lean_object* v___f_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4475_ = lean_box(v___x_4474_);
v___f_4476_ = lean_alloc_closure((void*)(l_Lean_evalPrec___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4476_, 0, v___x_4475_);
v___x_4477_ = lean_unsigned_to_nat(1u);
v___x_4478_ = lean_nat_add(v_currRecDepth_4471_, v___x_4477_);
lean_inc(v_ref_4473_);
lean_inc(v_maxRecDepth_4472_);
lean_inc(v_currMacroScope_4470_);
lean_inc(v_quotContext_4469_);
lean_inc(v_methods_4468_);
v___x_4479_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4479_, 0, v_methods_4468_);
lean_ctor_set(v___x_4479_, 1, v_quotContext_4469_);
lean_ctor_set(v___x_4479_, 2, v_currMacroScope_4470_);
lean_ctor_set(v___x_4479_, 3, v___x_4478_);
lean_ctor_set(v___x_4479_, 4, v_maxRecDepth_4472_);
lean_ctor_set(v___x_4479_, 5, v_ref_4473_);
lean_inc_ref(v___x_4479_);
v___x_4480_ = l_Lean_expandMacros(v_stx_4465_, v___f_4476_, v___x_4479_, v_a_4467_);
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_object* v_a_4481_; lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4494_; 
v_a_4481_ = lean_ctor_get(v___x_4480_, 0);
v_a_4482_ = lean_ctor_get(v___x_4480_, 1);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4484_ = v___x_4480_;
v_isShared_4485_ = v_isSharedCheck_4494_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_inc(v_a_4481_);
lean_dec(v___x_4480_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4494_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4486_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4481_);
v___x_4487_ = l_Lean_Syntax_isOfKind(v_a_4481_, v___x_4486_);
if (v___x_4487_ == 0)
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
lean_del_object(v___x_4484_);
v___x_4488_ = ((lean_object*)(l_Lean_evalPrio___closed__0));
v___x_4489_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4481_, v___x_4488_, v___x_4479_, v_a_4482_);
lean_dec_ref_known(v___x_4479_, 6);
lean_dec(v_a_4481_);
return v___x_4489_;
}
else
{
lean_object* v___x_4490_; lean_object* v___x_4492_; 
lean_dec_ref_known(v___x_4479_, 6);
v___x_4490_ = l_Lean_TSyntax_getNat(v_a_4481_);
lean_dec(v_a_4481_);
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 0, v___x_4490_);
v___x_4492_ = v___x_4484_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v___x_4490_);
lean_ctor_set(v_reuseFailAlloc_4493_, 1, v_a_4482_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
}
else
{
lean_object* v_a_4495_; lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
lean_dec_ref_known(v___x_4479_, 6);
v_a_4495_ = lean_ctor_get(v___x_4480_, 0);
v_a_4496_ = lean_ctor_get(v___x_4480_, 1);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4480_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_inc(v_a_4495_);
lean_dec(v___x_4480_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4495_);
lean_ctor_set(v_reuseFailAlloc_4502_, 1, v_a_4496_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
}
}
else
{
lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4504_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4505_, 0, v_stx_4465_);
lean_ctor_set(v___x_4505_, 1, v___x_4504_);
v___x_4506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4505_);
lean_ctor_set(v___x_4506_, 1, v_a_4467_);
return v___x_4506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object* v_stx_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_evalPrio(v_stx_4507_, v_a_4508_, v_a_4509_);
lean_dec_ref(v_a_4508_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object* v_x_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_){
_start:
{
if (lean_obj_tag(v_x_4511_) == 0)
{
lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4514_ = lean_unsigned_to_nat(1000u);
v___x_4515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
lean_ctor_set(v___x_4515_, 1, v_a_4513_);
return v___x_4515_;
}
else
{
lean_object* v_val_4516_; lean_object* v___x_4517_; 
v_val_4516_ = lean_ctor_get(v_x_4511_, 0);
lean_inc(v_val_4516_);
lean_dec_ref_known(v_x_4511_, 1);
v___x_4517_ = l_Lean_evalPrio(v_val_4516_, v_a_4512_, v_a_4513_);
return v___x_4517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object* v_x_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_){
_start:
{
lean_object* v_res_4521_; 
v_res_4521_ = l_Lean_evalOptPrio(v_x_4518_, v_a_4519_, v_a_4520_);
lean_dec_ref(v_a_4519_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t v___x_4522_, lean_object* v_x1_4523_, lean_object* v_x2_4524_){
_start:
{
lean_object* v_fst_4525_; uint8_t v___x_4526_; 
v_fst_4525_ = lean_ctor_get(v_x1_4523_, 0);
v___x_4526_ = lean_unbox(v_fst_4525_);
if (v___x_4526_ == 0)
{
lean_object* v_snd_4527_; lean_object* v___x_4529_; uint8_t v_isShared_4530_; uint8_t v_isSharedCheck_4535_; 
lean_dec(v_x2_4524_);
v_snd_4527_ = lean_ctor_get(v_x1_4523_, 1);
v_isSharedCheck_4535_ = !lean_is_exclusive(v_x1_4523_);
if (v_isSharedCheck_4535_ == 0)
{
lean_object* v_unused_4536_; 
v_unused_4536_ = lean_ctor_get(v_x1_4523_, 0);
lean_dec(v_unused_4536_);
v___x_4529_ = v_x1_4523_;
v_isShared_4530_ = v_isSharedCheck_4535_;
goto v_resetjp_4528_;
}
else
{
lean_inc(v_snd_4527_);
lean_dec(v_x1_4523_);
v___x_4529_ = lean_box(0);
v_isShared_4530_ = v_isSharedCheck_4535_;
goto v_resetjp_4528_;
}
v_resetjp_4528_:
{
lean_object* v___x_4531_; lean_object* v___x_4533_; 
v___x_4531_ = lean_box(v___x_4522_);
if (v_isShared_4530_ == 0)
{
lean_ctor_set(v___x_4529_, 0, v___x_4531_);
v___x_4533_ = v___x_4529_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4531_);
lean_ctor_set(v_reuseFailAlloc_4534_, 1, v_snd_4527_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
}
else
{
lean_object* v_snd_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4547_; 
v_snd_4537_ = lean_ctor_get(v_x1_4523_, 1);
v_isSharedCheck_4547_ = !lean_is_exclusive(v_x1_4523_);
if (v_isSharedCheck_4547_ == 0)
{
lean_object* v_unused_4548_; 
v_unused_4548_ = lean_ctor_get(v_x1_4523_, 0);
lean_dec(v_unused_4548_);
v___x_4539_ = v_x1_4523_;
v_isShared_4540_ = v_isSharedCheck_4547_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_snd_4537_);
lean_dec(v_x1_4523_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4547_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
uint8_t v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4545_; 
v___x_4541_ = 0;
v___x_4542_ = lean_array_push(v_snd_4537_, v_x2_4524_);
v___x_4543_ = lean_box(v___x_4541_);
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 1, v___x_4542_);
lean_ctor_set(v___x_4539_, 0, v___x_4543_);
v___x_4545_ = v___x_4539_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v___x_4543_);
lean_ctor_set(v_reuseFailAlloc_4546_, 1, v___x_4542_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
return v___x_4545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object* v___x_4549_, lean_object* v_x1_4550_, lean_object* v_x2_4551_){
_start:
{
uint8_t v___x_87__boxed_4552_; lean_object* v_res_4553_; 
v___x_87__boxed_4552_ = lean_unbox(v___x_4549_);
v_res_4553_ = l_Array_getSepElems___redArg___lam__0(v___x_87__boxed_4552_, v_x1_4550_, v_x2_4551_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object* v_as_4575_){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; uint8_t v___x_4580_; 
v___x_4576_ = lean_unsigned_to_nat(0u);
v___x_4577_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4578_ = lean_array_get_size(v_as_4575_);
v___x_4579_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4580_ = lean_nat_dec_lt(v___x_4576_, v___x_4578_);
if (v___x_4580_ == 0)
{
lean_dec_ref(v_as_4575_);
return v___x_4577_;
}
else
{
lean_object* v___x_4581_; lean_object* v___f_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; size_t v___x_4585_; size_t v___x_4586_; lean_object* v___x_4587_; lean_object* v_snd_4588_; 
v___x_4581_ = lean_box(v___x_4580_);
v___f_4582_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4582_, 0, v___x_4581_);
v___x_4583_ = lean_box(v___x_4580_);
v___x_4584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4584_, 0, v___x_4583_);
lean_ctor_set(v___x_4584_, 1, v___x_4577_);
v___x_4585_ = ((size_t)0ULL);
v___x_4586_ = lean_usize_of_nat(v___x_4578_);
v___x_4587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4579_, v___f_4582_, v_as_4575_, v___x_4585_, v___x_4586_, v___x_4584_);
v_snd_4588_ = lean_ctor_get(v___x_4587_, 1);
lean_inc(v_snd_4588_);
lean_dec(v___x_4587_);
return v_snd_4588_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object* v_00_u03b1_4589_, lean_object* v_as_4590_){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; uint8_t v___x_4595_; 
v___x_4591_ = lean_unsigned_to_nat(0u);
v___x_4592_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4593_ = lean_array_get_size(v_as_4590_);
v___x_4594_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4595_ = lean_nat_dec_lt(v___x_4591_, v___x_4593_);
if (v___x_4595_ == 0)
{
lean_dec_ref(v_as_4590_);
return v___x_4592_;
}
else
{
lean_object* v___x_4596_; lean_object* v___f_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; size_t v___x_4600_; size_t v___x_4601_; lean_object* v___x_4602_; lean_object* v_snd_4603_; 
v___x_4596_ = lean_box(v___x_4595_);
v___f_4597_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4597_, 0, v___x_4596_);
v___x_4598_ = lean_box(v___x_4595_);
v___x_4599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
lean_ctor_set(v___x_4599_, 1, v___x_4592_);
v___x_4600_ = ((size_t)0ULL);
v___x_4601_ = lean_usize_of_nat(v___x_4593_);
v___x_4602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4594_, v___f_4597_, v_as_4590_, v___x_4600_, v___x_4601_, v___x_4599_);
v_snd_4603_ = lean_ctor_get(v___x_4602_, 1);
lean_inc(v_snd_4603_);
lean_dec(v___x_4602_);
return v_snd_4603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object* v_i_4604_, lean_object* v_inst_4605_, lean_object* v_a_4606_, lean_object* v_p_4607_, lean_object* v_acc_4608_, lean_object* v_stx_4609_, uint8_t v_____do__lift_4610_){
_start:
{
if (v_____do__lift_4610_ == 0)
{
lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; 
lean_dec(v_stx_4609_);
v___x_4619_ = lean_unsigned_to_nat(2u);
v___x_4620_ = lean_nat_add(v_i_4604_, v___x_4619_);
v___x_4621_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4605_, v_a_4606_, v_p_4607_, v___x_4620_, v_acc_4608_);
return v___x_4621_;
}
else
{
lean_object* v___x_4622_; lean_object* v___x_4623_; uint8_t v___x_4624_; 
v___x_4622_ = lean_array_get_size(v_acc_4608_);
v___x_4623_ = lean_unsigned_to_nat(0u);
v___x_4624_ = lean_nat_dec_eq(v___x_4622_, v___x_4623_);
if (v___x_4624_ == 0)
{
uint8_t v___x_4625_; 
v___x_4625_ = lean_nat_dec_eq(v_i_4604_, v___x_4623_);
if (v___x_4625_ == 0)
{
goto v___jp_4611_;
}
else
{
if (v___x_4624_ == 0)
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4626_ = lean_unsigned_to_nat(2u);
v___x_4627_ = lean_nat_add(v_i_4604_, v___x_4626_);
v___x_4628_ = lean_array_push(v_acc_4608_, v_stx_4609_);
v___x_4629_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4605_, v_a_4606_, v_p_4607_, v___x_4627_, v___x_4628_);
return v___x_4629_;
}
else
{
goto v___jp_4611_;
}
}
}
else
{
lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4630_ = lean_unsigned_to_nat(2u);
v___x_4631_ = lean_nat_add(v_i_4604_, v___x_4630_);
v___x_4632_ = lean_array_push(v_acc_4608_, v_stx_4609_);
v___x_4633_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4605_, v_a_4606_, v_p_4607_, v___x_4631_, v___x_4632_);
return v___x_4633_;
}
}
v___jp_4611_:
{
lean_object* v___x_4612_; lean_object* v_sepStx_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4612_ = lean_nat_pred(v_i_4604_);
v_sepStx_4613_ = lean_array_fget_borrowed(v_a_4606_, v___x_4612_);
lean_dec(v___x_4612_);
v___x_4614_ = lean_unsigned_to_nat(2u);
v___x_4615_ = lean_nat_add(v_i_4604_, v___x_4614_);
lean_inc(v_sepStx_4613_);
v___x_4616_ = lean_array_push(v_acc_4608_, v_sepStx_4613_);
v___x_4617_ = lean_array_push(v___x_4616_, v_stx_4609_);
v___x_4618_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4605_, v_a_4606_, v_p_4607_, v___x_4615_, v___x_4617_);
return v___x_4618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4634_, lean_object* v_inst_4635_, lean_object* v_a_4636_, lean_object* v_p_4637_, lean_object* v_acc_4638_, lean_object* v_stx_4639_, lean_object* v_____do__lift_4640_){
_start:
{
uint8_t v_____do__lift_208__boxed_4641_; lean_object* v_res_4642_; 
v_____do__lift_208__boxed_4641_ = lean_unbox(v_____do__lift_4640_);
v_res_4642_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(v_i_4634_, v_inst_4635_, v_a_4636_, v_p_4637_, v_acc_4638_, v_stx_4639_, v_____do__lift_208__boxed_4641_);
lean_dec(v_i_4634_);
return v_res_4642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object* v_inst_4643_, lean_object* v_a_4644_, lean_object* v_p_4645_, lean_object* v_i_4646_, lean_object* v_acc_4647_){
_start:
{
lean_object* v_toApplicative_4648_; lean_object* v_toBind_4649_; lean_object* v_toPure_4650_; lean_object* v___x_4651_; uint8_t v___x_4652_; 
v_toApplicative_4648_ = lean_ctor_get(v_inst_4643_, 0);
v_toBind_4649_ = lean_ctor_get(v_inst_4643_, 1);
lean_inc(v_toBind_4649_);
v_toPure_4650_ = lean_ctor_get(v_toApplicative_4648_, 1);
v___x_4651_ = lean_array_get_size(v_a_4644_);
v___x_4652_ = lean_nat_dec_lt(v_i_4646_, v___x_4651_);
if (v___x_4652_ == 0)
{
lean_object* v___x_4653_; 
lean_inc(v_toPure_4650_);
lean_dec(v_toBind_4649_);
lean_dec(v_i_4646_);
lean_dec(v_p_4645_);
lean_dec_ref(v_a_4644_);
lean_dec_ref(v_inst_4643_);
v___x_4653_ = lean_apply_2(v_toPure_4650_, lean_box(0), v_acc_4647_);
return v___x_4653_;
}
else
{
lean_object* v_stx_4654_; lean_object* v___f_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; 
v_stx_4654_ = lean_array_fget(v_a_4644_, v_i_4646_);
lean_inc(v_stx_4654_);
lean_inc(v_p_4645_);
v___f_4655_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4655_, 0, v_i_4646_);
lean_closure_set(v___f_4655_, 1, v_inst_4643_);
lean_closure_set(v___f_4655_, 2, v_a_4644_);
lean_closure_set(v___f_4655_, 3, v_p_4645_);
lean_closure_set(v___f_4655_, 4, v_acc_4647_);
lean_closure_set(v___f_4655_, 5, v_stx_4654_);
v___x_4656_ = lean_apply_1(v_p_4645_, v_stx_4654_);
v___x_4657_ = lean_apply_4(v_toBind_4649_, lean_box(0), lean_box(0), v___x_4656_, v___f_4655_);
return v___x_4657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object* v_m_4658_, lean_object* v_inst_4659_, lean_object* v_a_4660_, lean_object* v_p_4661_, lean_object* v_i_4662_, lean_object* v_acc_4663_){
_start:
{
lean_object* v___x_4664_; 
v___x_4664_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4659_, v_a_4660_, v_p_4661_, v_i_4662_, v_acc_4663_);
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object* v_inst_4665_, lean_object* v_a_4666_, lean_object* v_p_4667_){
_start:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; 
v___x_4668_ = lean_unsigned_to_nat(0u);
v___x_4669_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4670_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4665_, v_a_4666_, v_p_4667_, v___x_4668_, v___x_4669_);
return v___x_4670_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object* v_m_4671_, lean_object* v_inst_4672_, lean_object* v_a_4673_, lean_object* v_p_4674_){
_start:
{
lean_object* v___x_4675_; 
v___x_4675_ = l_Array_filterSepElemsM___redArg(v_inst_4672_, v_a_4673_, v_p_4674_);
return v___x_4675_;
}
}
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object* v_p_4676_, lean_object* v_x_4677_){
_start:
{
lean_object* v___x_4678_; uint8_t v___x_4679_; 
v___x_4678_ = lean_apply_1(v_p_4676_, v_x_4677_);
v___x_4679_ = lean_unbox(v___x_4678_);
return v___x_4679_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object* v_p_4680_, lean_object* v_x_4681_){
_start:
{
uint8_t v_res_4682_; lean_object* v_r_4683_; 
v_res_4682_ = l_Array_filterSepElems___lam__0(v_p_4680_, v_x_4681_);
v_r_4683_ = lean_box(v_res_4682_);
return v_r_4683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object* v_a_4684_, lean_object* v_p_4685_, lean_object* v_i_4686_, lean_object* v_acc_4687_){
_start:
{
lean_object* v___x_4688_; uint8_t v___x_4689_; 
v___x_4688_ = lean_array_get_size(v_a_4684_);
v___x_4689_ = lean_nat_dec_lt(v_i_4686_, v___x_4688_);
if (v___x_4689_ == 0)
{
lean_dec(v_i_4686_);
lean_dec_ref(v_p_4685_);
return v_acc_4687_;
}
else
{
lean_object* v_stx_4690_; lean_object* v___x_4699_; uint8_t v___x_4700_; 
v_stx_4690_ = lean_array_fget_borrowed(v_a_4684_, v_i_4686_);
lean_inc_ref(v_p_4685_);
lean_inc(v_stx_4690_);
v___x_4699_ = lean_apply_1(v_p_4685_, v_stx_4690_);
v___x_4700_ = lean_unbox(v___x_4699_);
if (v___x_4700_ == 0)
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = lean_unsigned_to_nat(2u);
v___x_4702_ = lean_nat_add(v_i_4686_, v___x_4701_);
lean_dec(v_i_4686_);
v_i_4686_ = v___x_4702_;
goto _start;
}
else
{
lean_object* v___x_4704_; lean_object* v___x_4705_; uint8_t v___x_4706_; 
v___x_4704_ = lean_array_get_size(v_acc_4687_);
v___x_4705_ = lean_unsigned_to_nat(0u);
v___x_4706_ = lean_nat_dec_eq(v___x_4704_, v___x_4705_);
if (v___x_4706_ == 0)
{
uint8_t v___x_4707_; 
v___x_4707_ = lean_nat_dec_eq(v_i_4686_, v___x_4705_);
if (v___x_4707_ == 0)
{
goto v___jp_4691_;
}
else
{
if (v___x_4706_ == 0)
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v___x_4708_ = lean_unsigned_to_nat(2u);
v___x_4709_ = lean_nat_add(v_i_4686_, v___x_4708_);
lean_dec(v_i_4686_);
lean_inc(v_stx_4690_);
v___x_4710_ = lean_array_push(v_acc_4687_, v_stx_4690_);
v_i_4686_ = v___x_4709_;
v_acc_4687_ = v___x_4710_;
goto _start;
}
else
{
goto v___jp_4691_;
}
}
}
else
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4712_ = lean_unsigned_to_nat(2u);
v___x_4713_ = lean_nat_add(v_i_4686_, v___x_4712_);
lean_dec(v_i_4686_);
lean_inc(v_stx_4690_);
v___x_4714_ = lean_array_push(v_acc_4687_, v_stx_4690_);
v_i_4686_ = v___x_4713_;
v_acc_4687_ = v___x_4714_;
goto _start;
}
}
v___jp_4691_:
{
lean_object* v___x_4692_; lean_object* v_sepStx_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4692_ = lean_nat_pred(v_i_4686_);
v_sepStx_4693_ = lean_array_fget_borrowed(v_a_4684_, v___x_4692_);
lean_dec(v___x_4692_);
v___x_4694_ = lean_unsigned_to_nat(2u);
v___x_4695_ = lean_nat_add(v_i_4686_, v___x_4694_);
lean_dec(v_i_4686_);
lean_inc(v_sepStx_4693_);
v___x_4696_ = lean_array_push(v_acc_4687_, v_sepStx_4693_);
lean_inc(v_stx_4690_);
v___x_4697_ = lean_array_push(v___x_4696_, v_stx_4690_);
v_i_4686_ = v___x_4695_;
v_acc_4687_ = v___x_4697_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object* v_a_4716_, lean_object* v_p_4717_, lean_object* v_i_4718_, lean_object* v_acc_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4716_, v_p_4717_, v_i_4718_, v_acc_4719_);
lean_dec_ref(v_a_4716_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object* v_a_4721_, lean_object* v_p_4722_){
_start:
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; 
v___x_4723_ = lean_unsigned_to_nat(0u);
v___x_4724_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4725_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4721_, v_p_4722_, v___x_4723_, v___x_4724_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object* v_a_4726_, lean_object* v_p_4727_){
_start:
{
lean_object* v_res_4728_; 
v_res_4728_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4726_, v_p_4727_);
lean_dec_ref(v_a_4726_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object* v_a_4729_, lean_object* v_p_4730_){
_start:
{
lean_object* v___f_4731_; lean_object* v___x_4732_; 
v___f_4731_ = lean_alloc_closure((void*)(l_Array_filterSepElems___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4731_, 0, v_p_4730_);
v___x_4732_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4729_, v___f_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object* v_a_4733_, lean_object* v_p_4734_){
_start:
{
lean_object* v_res_4735_; 
v_res_4735_ = l_Array_filterSepElems(v_a_4733_, v_p_4734_);
lean_dec_ref(v_a_4733_);
return v_res_4735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4736_, lean_object* v_acc_4737_, lean_object* v_inst_4738_, lean_object* v_a_4739_, lean_object* v_f_4740_, lean_object* v_stx_4741_){
_start:
{
lean_object* v_res_4742_; 
v_res_4742_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(v_i_4736_, v_acc_4737_, v_inst_4738_, v_a_4739_, v_f_4740_, v_stx_4741_);
lean_dec(v_i_4736_);
return v_res_4742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object* v_inst_4743_, lean_object* v_a_4744_, lean_object* v_f_4745_, lean_object* v_i_4746_, lean_object* v_acc_4747_){
_start:
{
lean_object* v_toApplicative_4748_; lean_object* v_toBind_4749_; lean_object* v_toPure_4750_; lean_object* v___x_4751_; uint8_t v___x_4752_; 
v_toApplicative_4748_ = lean_ctor_get(v_inst_4743_, 0);
v_toBind_4749_ = lean_ctor_get(v_inst_4743_, 1);
v_toPure_4750_ = lean_ctor_get(v_toApplicative_4748_, 1);
v___x_4751_ = lean_array_get_size(v_a_4744_);
v___x_4752_ = lean_nat_dec_lt(v_i_4746_, v___x_4751_);
if (v___x_4752_ == 0)
{
lean_object* v___x_4753_; 
lean_inc(v_toPure_4750_);
lean_dec(v_i_4746_);
lean_dec(v_f_4745_);
lean_dec_ref(v_a_4744_);
lean_dec_ref(v_inst_4743_);
v___x_4753_ = lean_apply_2(v_toPure_4750_, lean_box(0), v_acc_4747_);
return v___x_4753_;
}
else
{
lean_object* v_stx_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; uint8_t v___x_4758_; 
v_stx_4754_ = lean_array_fget_borrowed(v_a_4744_, v_i_4746_);
v___x_4755_ = lean_unsigned_to_nat(2u);
v___x_4756_ = lean_nat_mod(v_i_4746_, v___x_4755_);
v___x_4757_ = lean_unsigned_to_nat(0u);
v___x_4758_ = lean_nat_dec_eq(v___x_4756_, v___x_4757_);
lean_dec(v___x_4756_);
if (v___x_4758_ == 0)
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; 
v___x_4759_ = lean_unsigned_to_nat(1u);
v___x_4760_ = lean_nat_add(v_i_4746_, v___x_4759_);
lean_dec(v_i_4746_);
lean_inc(v_stx_4754_);
v___x_4761_ = lean_array_push(v_acc_4747_, v_stx_4754_);
v_i_4746_ = v___x_4760_;
v_acc_4747_ = v___x_4761_;
goto _start;
}
else
{
lean_object* v___f_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; 
lean_inc(v_stx_4754_);
lean_inc(v_toBind_4749_);
lean_inc(v_f_4745_);
v___f_4763_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_4763_, 0, v_i_4746_);
lean_closure_set(v___f_4763_, 1, v_acc_4747_);
lean_closure_set(v___f_4763_, 2, v_inst_4743_);
lean_closure_set(v___f_4763_, 3, v_a_4744_);
lean_closure_set(v___f_4763_, 4, v_f_4745_);
v___x_4764_ = lean_apply_1(v_f_4745_, v_stx_4754_);
v___x_4765_ = lean_apply_4(v_toBind_4749_, lean_box(0), lean_box(0), v___x_4764_, v___f_4763_);
return v___x_4765_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object* v_i_4766_, lean_object* v_acc_4767_, lean_object* v_inst_4768_, lean_object* v_a_4769_, lean_object* v_f_4770_, lean_object* v_stx_4771_){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4772_ = lean_unsigned_to_nat(1u);
v___x_4773_ = lean_nat_add(v_i_4766_, v___x_4772_);
v___x_4774_ = lean_array_push(v_acc_4767_, v_stx_4771_);
v___x_4775_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4768_, v_a_4769_, v_f_4770_, v___x_4773_, v___x_4774_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object* v_m_4776_, lean_object* v_inst_4777_, lean_object* v_a_4778_, lean_object* v_f_4779_, lean_object* v_i_4780_, lean_object* v_acc_4781_){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4777_, v_a_4778_, v_f_4779_, v_i_4780_, v_acc_4781_);
return v___x_4782_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object* v_inst_4783_, lean_object* v_a_4784_, lean_object* v_f_4785_){
_start:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4786_ = lean_unsigned_to_nat(0u);
v___x_4787_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4788_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4783_, v_a_4784_, v_f_4785_, v___x_4786_, v___x_4787_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object* v_m_4789_, lean_object* v_inst_4790_, lean_object* v_a_4791_, lean_object* v_f_4792_){
_start:
{
lean_object* v___x_4793_; 
v___x_4793_ = l_Array_mapSepElemsM___redArg(v_inst_4790_, v_a_4791_, v_f_4792_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object* v_f_4794_, lean_object* v_x_4795_){
_start:
{
lean_object* v___x_4796_; 
v___x_4796_ = lean_apply_1(v_f_4794_, v_x_4795_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object* v_a_4797_, lean_object* v_f_4798_, lean_object* v_i_4799_, lean_object* v_acc_4800_){
_start:
{
lean_object* v___x_4801_; uint8_t v___x_4802_; 
v___x_4801_ = lean_array_get_size(v_a_4797_);
v___x_4802_ = lean_nat_dec_lt(v_i_4799_, v___x_4801_);
if (v___x_4802_ == 0)
{
lean_dec(v_i_4799_);
lean_dec_ref(v_f_4798_);
return v_acc_4800_;
}
else
{
lean_object* v_stx_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; uint8_t v___x_4807_; 
v_stx_4803_ = lean_array_fget_borrowed(v_a_4797_, v_i_4799_);
v___x_4804_ = lean_unsigned_to_nat(2u);
v___x_4805_ = lean_nat_mod(v_i_4799_, v___x_4804_);
v___x_4806_ = lean_unsigned_to_nat(0u);
v___x_4807_ = lean_nat_dec_eq(v___x_4805_, v___x_4806_);
lean_dec(v___x_4805_);
if (v___x_4807_ == 0)
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4808_ = lean_unsigned_to_nat(1u);
v___x_4809_ = lean_nat_add(v_i_4799_, v___x_4808_);
lean_dec(v_i_4799_);
lean_inc(v_stx_4803_);
v___x_4810_ = lean_array_push(v_acc_4800_, v_stx_4803_);
v_i_4799_ = v___x_4809_;
v_acc_4800_ = v___x_4810_;
goto _start;
}
else
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
lean_inc_ref(v_f_4798_);
lean_inc(v_stx_4803_);
v___x_4812_ = lean_apply_1(v_f_4798_, v_stx_4803_);
v___x_4813_ = lean_unsigned_to_nat(1u);
v___x_4814_ = lean_nat_add(v_i_4799_, v___x_4813_);
lean_dec(v_i_4799_);
v___x_4815_ = lean_array_push(v_acc_4800_, v___x_4812_);
v_i_4799_ = v___x_4814_;
v_acc_4800_ = v___x_4815_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object* v_a_4817_, lean_object* v_f_4818_, lean_object* v_i_4819_, lean_object* v_acc_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4817_, v_f_4818_, v_i_4819_, v_acc_4820_);
lean_dec_ref(v_a_4817_);
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object* v_a_4822_, lean_object* v_f_4823_){
_start:
{
lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4824_ = lean_unsigned_to_nat(0u);
v___x_4825_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4826_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4822_, v_f_4823_, v___x_4824_, v___x_4825_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object* v_a_4827_, lean_object* v_f_4828_){
_start:
{
lean_object* v_res_4829_; 
v_res_4829_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4827_, v_f_4828_);
lean_dec_ref(v_a_4827_);
return v_res_4829_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object* v_a_4830_, lean_object* v_f_4831_){
_start:
{
lean_object* v___f_4832_; lean_object* v___x_4833_; 
v___f_4832_ = lean_alloc_closure((void*)(l_Array_mapSepElems___lam__0), 2, 1);
lean_closure_set(v___f_4832_, 0, v_f_4831_);
v___x_4833_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4830_, v___f_4832_);
return v___x_4833_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object* v_a_4834_, lean_object* v_f_4835_){
_start:
{
lean_object* v_res_4836_; 
v_res_4836_ = l_Array_mapSepElems(v_a_4834_, v_f_4835_);
lean_dec_ref(v_a_4834_);
return v_res_4836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object* v_as_4837_, size_t v_i_4838_, size_t v_stop_4839_, lean_object* v_b_4840_){
_start:
{
lean_object* v___y_4842_; uint8_t v___x_4846_; 
v___x_4846_ = lean_usize_dec_eq(v_i_4838_, v_stop_4839_);
if (v___x_4846_ == 0)
{
lean_object* v_fst_4847_; uint8_t v___x_4848_; 
v_fst_4847_ = lean_ctor_get(v_b_4840_, 0);
v___x_4848_ = lean_unbox(v_fst_4847_);
if (v___x_4848_ == 0)
{
lean_object* v_snd_4849_; lean_object* v___x_4851_; uint8_t v_isShared_4852_; uint8_t v_isSharedCheck_4858_; 
v_snd_4849_ = lean_ctor_get(v_b_4840_, 1);
v_isSharedCheck_4858_ = !lean_is_exclusive(v_b_4840_);
if (v_isSharedCheck_4858_ == 0)
{
lean_object* v_unused_4859_; 
v_unused_4859_ = lean_ctor_get(v_b_4840_, 0);
lean_dec(v_unused_4859_);
v___x_4851_ = v_b_4840_;
v_isShared_4852_ = v_isSharedCheck_4858_;
goto v_resetjp_4850_;
}
else
{
lean_inc(v_snd_4849_);
lean_dec(v_b_4840_);
v___x_4851_ = lean_box(0);
v_isShared_4852_ = v_isSharedCheck_4858_;
goto v_resetjp_4850_;
}
v_resetjp_4850_:
{
uint8_t v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4856_; 
v___x_4853_ = 1;
v___x_4854_ = lean_box(v___x_4853_);
if (v_isShared_4852_ == 0)
{
lean_ctor_set(v___x_4851_, 0, v___x_4854_);
v___x_4856_ = v___x_4851_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v___x_4854_);
lean_ctor_set(v_reuseFailAlloc_4857_, 1, v_snd_4849_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
v___y_4842_ = v___x_4856_;
goto v___jp_4841_;
}
}
}
else
{
lean_object* v_snd_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4870_; 
v_snd_4860_ = lean_ctor_get(v_b_4840_, 1);
v_isSharedCheck_4870_ = !lean_is_exclusive(v_b_4840_);
if (v_isSharedCheck_4870_ == 0)
{
lean_object* v_unused_4871_; 
v_unused_4871_ = lean_ctor_get(v_b_4840_, 0);
lean_dec(v_unused_4871_);
v___x_4862_ = v_b_4840_;
v_isShared_4863_ = v_isSharedCheck_4870_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_snd_4860_);
lean_dec(v_b_4840_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4870_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4868_; 
v___x_4864_ = lean_array_uget_borrowed(v_as_4837_, v_i_4838_);
lean_inc(v___x_4864_);
v___x_4865_ = lean_array_push(v_snd_4860_, v___x_4864_);
v___x_4866_ = lean_box(v___x_4846_);
if (v_isShared_4863_ == 0)
{
lean_ctor_set(v___x_4862_, 1, v___x_4865_);
lean_ctor_set(v___x_4862_, 0, v___x_4866_);
v___x_4868_ = v___x_4862_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v___x_4866_);
lean_ctor_set(v_reuseFailAlloc_4869_, 1, v___x_4865_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
v___y_4842_ = v___x_4868_;
goto v___jp_4841_;
}
}
}
}
else
{
return v_b_4840_;
}
v___jp_4841_:
{
size_t v___x_4843_; size_t v___x_4844_; 
v___x_4843_ = ((size_t)1ULL);
v___x_4844_ = lean_usize_add(v_i_4838_, v___x_4843_);
v_i_4838_ = v___x_4844_;
v_b_4840_ = v___y_4842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object* v_as_4872_, lean_object* v_i_4873_, lean_object* v_stop_4874_, lean_object* v_b_4875_){
_start:
{
size_t v_i_boxed_4876_; size_t v_stop_boxed_4877_; lean_object* v_res_4878_; 
v_i_boxed_4876_ = lean_unbox_usize(v_i_4873_);
lean_dec(v_i_4873_);
v_stop_boxed_4877_ = lean_unbox_usize(v_stop_4874_);
lean_dec(v_stop_4874_);
v_res_4878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_as_4872_, v_i_boxed_4876_, v_stop_boxed_4877_, v_b_4875_);
lean_dec_ref(v_as_4872_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object* v_sa_4879_){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; uint8_t v___x_4883_; 
v___x_4880_ = lean_unsigned_to_nat(0u);
v___x_4881_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4882_ = lean_array_get_size(v_sa_4879_);
v___x_4883_ = lean_nat_dec_lt(v___x_4880_, v___x_4882_);
if (v___x_4883_ == 0)
{
return v___x_4881_;
}
else
{
lean_object* v___x_4884_; lean_object* v___x_4885_; size_t v___x_4886_; size_t v___x_4887_; lean_object* v___x_4888_; lean_object* v_snd_4889_; 
v___x_4884_ = lean_box(v___x_4883_);
v___x_4885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4884_);
lean_ctor_set(v___x_4885_, 1, v___x_4881_);
v___x_4886_ = ((size_t)0ULL);
v___x_4887_ = lean_usize_of_nat(v___x_4882_);
v___x_4888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4879_, v___x_4886_, v___x_4887_, v___x_4885_);
v_snd_4889_ = lean_ctor_get(v___x_4888_, 1);
lean_inc(v_snd_4889_);
lean_dec_ref(v___x_4888_);
return v_snd_4889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object* v_sa_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4890_);
lean_dec_ref(v_sa_4890_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object* v_sep_4892_, lean_object* v_sa_4893_){
_start:
{
lean_object* v___x_4894_; 
v___x_4894_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4893_);
return v___x_4894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object* v_sep_4895_, lean_object* v_sa_4896_){
_start:
{
lean_object* v_res_4897_; 
v_res_4897_ = l_Lean_Syntax_SepArray_getElems(v_sep_4895_, v_sa_4896_);
lean_dec_ref(v_sa_4896_);
lean_dec_ref(v_sep_4895_);
return v_res_4897_;
}
}
static lean_object* _init_l_Lean_Syntax_TSepArray_getElems___redArg___closed__0(void){
_start:
{
lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4898_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4899_ = l_unsafeCast___redArg(v___x_4898_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object* v_sa_4900_){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; uint8_t v___x_4904_; 
v___x_4901_ = lean_unsigned_to_nat(0u);
v___x_4902_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4903_ = lean_array_get_size(v_sa_4900_);
v___x_4904_ = lean_nat_dec_lt(v___x_4901_, v___x_4903_);
if (v___x_4904_ == 0)
{
lean_object* v___x_4905_; 
v___x_4905_ = lean_obj_once(&l_Lean_Syntax_TSepArray_getElems___redArg___closed__0, &l_Lean_Syntax_TSepArray_getElems___redArg___closed__0_once, _init_l_Lean_Syntax_TSepArray_getElems___redArg___closed__0);
return v___x_4905_;
}
else
{
lean_object* v___x_4906_; lean_object* v___x_4907_; size_t v___x_4908_; size_t v___x_4909_; lean_object* v___x_4910_; lean_object* v_snd_4911_; lean_object* v___x_4912_; 
v___x_4906_ = lean_box(v___x_4904_);
v___x_4907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4907_, 0, v___x_4906_);
lean_ctor_set(v___x_4907_, 1, v___x_4902_);
v___x_4908_ = ((size_t)0ULL);
v___x_4909_ = lean_usize_of_nat(v___x_4903_);
v___x_4910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4900_, v___x_4908_, v___x_4909_, v___x_4907_);
v_snd_4911_ = lean_ctor_get(v___x_4910_, 1);
lean_inc(v_snd_4911_);
lean_dec_ref(v___x_4910_);
v___x_4912_ = l_unsafeCast___redArg(v_snd_4911_);
lean_dec(v_snd_4911_);
return v___x_4912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object* v_sa_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4913_);
lean_dec_ref(v_sa_4913_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object* v_k_4915_, lean_object* v_sep_4916_, lean_object* v_sa_4917_){
_start:
{
lean_object* v___x_4918_; 
v___x_4918_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4917_);
return v___x_4918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object* v_k_4919_, lean_object* v_sep_4920_, lean_object* v_sa_4921_){
_start:
{
lean_object* v_res_4922_; 
v_res_4922_ = l_Lean_Syntax_TSepArray_getElems(v_k_4919_, v_sep_4920_, v_sa_4921_);
lean_dec_ref(v_sa_4921_);
lean_dec_ref(v_sep_4920_);
lean_dec(v_k_4919_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object* v_sep_4923_, lean_object* v_sa_4924_, lean_object* v_e_4925_){
_start:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; uint8_t v___x_4928_; 
v___x_4926_ = lean_array_get_size(v_sa_4924_);
v___x_4927_ = lean_unsigned_to_nat(0u);
v___x_4928_ = lean_nat_dec_eq(v___x_4926_, v___x_4927_);
if (v___x_4928_ == 0)
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v___x_4929_ = l_Lean_mkAtom(v_sep_4923_);
v___x_4930_ = lean_array_push(v_sa_4924_, v___x_4929_);
v___x_4931_ = lean_array_push(v___x_4930_, v_e_4925_);
return v___x_4931_;
}
else
{
lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
lean_dec_ref(v_sa_4924_);
lean_dec_ref(v_sep_4923_);
v___x_4932_ = lean_unsigned_to_nat(1u);
v___x_4933_ = lean_mk_empty_array_with_capacity(v___x_4932_);
v___x_4934_ = lean_array_push(v___x_4933_, v_e_4925_);
return v___x_4934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object* v_k_4935_, lean_object* v_sep_4936_, lean_object* v_sa_4937_, lean_object* v_e_4938_){
_start:
{
lean_object* v___x_4939_; 
v___x_4939_ = l_Lean_Syntax_TSepArray_push___redArg(v_sep_4936_, v_sa_4937_, v_e_4938_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object* v_k_4940_, lean_object* v_sep_4941_, lean_object* v_sa_4942_, lean_object* v_e_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l_Lean_Syntax_TSepArray_push(v_k_4940_, v_sep_4941_, v_sa_4942_, v_e_4943_);
lean_dec(v_k_4940_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg(){
_start:
{
lean_object* v___x_4946_; 
v___x_4946_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object* v___dummy_4947_){
_start:
{
lean_object* v_res_4948_; 
v_res_4948_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v_res_4948_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0(void){
_start:
{
lean_object* v___x_4949_; 
v___x_4949_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v___x_4949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object* v_sep_4950_){
_start:
{
lean_object* v___x_4951_; 
v___x_4951_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0);
return v___x_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object* v_sep_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l_Lean_Syntax_instEmptyCollectionSepArray(v_sep_4952_);
lean_dec_ref(v_sep_4952_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg(){
_start:
{
lean_object* v___x_4955_; 
v___x_4955_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object* v___dummy_4956_){
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v_res_4957_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0(void){
_start:
{
lean_object* v___x_4958_; 
v___x_4958_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v___x_4958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object* v_sep_4959_, lean_object* v_k_4960_){
_start:
{
lean_object* v___x_4961_; 
v___x_4961_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0);
return v___x_4961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object* v_sep_4962_, lean_object* v_k_4963_){
_start:
{
lean_object* v_res_4964_; 
v_res_4964_ = l_Lean_Syntax_instEmptyCollectionTSepArray(v_sep_4962_, v_k_4963_);
lean_dec_ref(v_k_4963_);
lean_dec(v_sep_4962_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutSepArrayArray(lean_object* v_sep_4965_){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_getElems___boxed), 2, 1);
lean_closure_set(v___x_4966_, 0, v_sep_4965_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object* v_k_4967_, lean_object* v_sep_4968_){
_start:
{
lean_object* v___x_4969_; 
v___x_4969_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_getElems___boxed), 3, 2);
lean_closure_set(v___x_4969_, 0, v_k_4967_);
lean_closure_set(v___x_4969_, 1, v_sep_4968_);
return v___x_4969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object* v_inst_4970_, lean_object* v_x_4971_){
_start:
{
lean_object* v___x_4972_; 
v___x_4972_ = lean_apply_1(v_inst_4970_, v_x_4971_);
return v___x_4972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object* v___f_4973_, lean_object* v_a_4974_){
_start:
{
lean_object* v___x_4975_; size_t v_sz_4976_; size_t v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v___x_4975_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v_sz_4976_ = lean_array_size(v_a_4974_);
v___x_4977_ = ((size_t)0ULL);
v___x_4978_ = l_unsafeCast___redArg(v_a_4974_);
v___x_4979_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4975_, v___f_4973_, v_sz_4976_, v___x_4977_, v___x_4978_);
v___x_4980_ = l_unsafeCast___redArg(v___x_4979_);
lean_dec(v___x_4979_);
return v___x_4980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1___boxed(lean_object* v___f_4981_, lean_object* v_a_4982_){
_start:
{
lean_object* v_res_4983_; 
v_res_4983_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(v___f_4981_, v_a_4982_);
lean_dec_ref(v_a_4982_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object* v_inst_4984_){
_start:
{
lean_object* v___f_4985_; lean_object* v___f_4986_; 
v___f_4985_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4985_, 0, v_inst_4984_);
v___f_4986_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4986_, 0, v___f_4985_);
return v___f_4986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object* v_k_4987_, lean_object* v_k_x27_4988_, lean_object* v_inst_4989_){
_start:
{
lean_object* v___x_4990_; 
v___x_4990_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(v_inst_4989_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object* v_k_4991_, lean_object* v_k_x27_4992_, lean_object* v_inst_4993_){
_start:
{
lean_object* v_res_4994_; 
v_res_4994_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(v_k_4991_, v_k_x27_4992_, v_inst_4993_);
lean_dec(v_k_x27_4992_);
lean_dec(v_k_4991_);
return v_res_4994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg(){
_start:
{
lean_object* v___f_4997_; 
v___f_4997_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object* v___dummy_4998_){
_start:
{
lean_object* v_res_4999_; 
v_res_4999_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object* v_k_5000_){
_start:
{
lean_object* v___f_5001_; 
v___f_5001_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_5001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object* v_k_5002_){
_start:
{
lean_object* v_res_5003_; 
v_res_5003_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray(v_k_5002_);
lean_dec(v_k_5002_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object* v_id_5011_){
_start:
{
lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; 
v___x_5012_ = ((lean_object*)(l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__2));
v___x_5013_ = lean_box(2);
v___x_5014_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
v___x_5015_ = lean_unsigned_to_nat(2u);
v___x_5016_ = lean_mk_empty_array_with_capacity(v___x_5015_);
v___x_5017_ = lean_array_push(v___x_5016_, v_id_5011_);
v___x_5018_ = lean_array_push(v___x_5017_, v___x_5014_);
v___x_5019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5013_);
lean_ctor_set(v___x_5019_, 1, v___x_5012_);
lean_ctor_set(v___x_5019_, 2, v___x_5018_);
return v___x_5019_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_5023_; lean_object* v___x_5024_; 
v___x_5023_ = 123;
v___x_5024_ = lean_box_uint32(v___x_5023_);
return v___x_5024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object* v_s_5025_, lean_object* v_i_5026_){
_start:
{
lean_object* v___x_5027_; 
v___x_5027_ = l_Lean_Syntax_decodeQuotedChar(v_s_5025_, v_i_5026_);
if (lean_obj_tag(v___x_5027_) == 0)
{
uint32_t v_c_5028_; uint32_t v___x_5029_; uint8_t v___x_5030_; 
v_c_5028_ = lean_string_utf8_get(v_s_5025_, v_i_5026_);
v___x_5029_ = 123;
v___x_5030_ = lean_uint32_dec_eq(v_c_5028_, v___x_5029_);
if (v___x_5030_ == 0)
{
return v___x_5027_;
}
else
{
lean_object* v_i_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; 
v_i_5031_ = lean_string_utf8_next(v_s_5025_, v_i_5026_);
v___x_5032_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
v___x_5033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5033_, 0, v___x_5032_);
lean_ctor_set(v___x_5033_, 1, v_i_5031_);
v___x_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5033_);
return v___x_5034_;
}
}
else
{
return v___x_5027_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object* v_s_5035_, lean_object* v_i_5036_){
_start:
{
lean_object* v_res_5037_; 
v_res_5037_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5035_, v_i_5036_);
lean_dec(v_i_5036_);
lean_dec_ref(v_s_5035_);
return v_res_5037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object* v_s_5038_, lean_object* v_i_5039_, lean_object* v_acc_5040_){
_start:
{
uint32_t v_c_5041_; uint32_t v___x_5042_; uint8_t v___x_5043_; 
v_c_5041_ = lean_string_utf8_get(v_s_5038_, v_i_5039_);
v___x_5042_ = 34;
v___x_5043_ = lean_uint32_dec_eq(v_c_5041_, v___x_5042_);
if (v___x_5043_ == 0)
{
uint32_t v___x_5044_; uint8_t v___x_5045_; 
v___x_5044_ = 123;
v___x_5045_ = lean_uint32_dec_eq(v_c_5041_, v___x_5044_);
if (v___x_5045_ == 0)
{
lean_object* v_i_5046_; uint8_t v___x_5047_; 
v_i_5046_ = lean_string_utf8_next(v_s_5038_, v_i_5039_);
lean_dec(v_i_5039_);
v___x_5047_ = lean_string_utf8_at_end(v_s_5038_, v_i_5046_);
if (v___x_5047_ == 0)
{
uint32_t v___x_5048_; uint8_t v___x_5049_; 
v___x_5048_ = 92;
v___x_5049_ = lean_uint32_dec_eq(v_c_5041_, v___x_5048_);
if (v___x_5049_ == 0)
{
lean_object* v___x_5050_; 
v___x_5050_ = lean_string_push(v_acc_5040_, v_c_5041_);
v_i_5039_ = v_i_5046_;
v_acc_5040_ = v___x_5050_;
goto _start;
}
else
{
lean_object* v___x_5052_; 
v___x_5052_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5038_, v_i_5046_);
if (lean_obj_tag(v___x_5052_) == 1)
{
lean_object* v_val_5053_; lean_object* v_fst_5054_; lean_object* v_snd_5055_; uint32_t v___x_5056_; lean_object* v___x_5057_; 
lean_dec(v_i_5046_);
v_val_5053_ = lean_ctor_get(v___x_5052_, 0);
lean_inc(v_val_5053_);
lean_dec_ref_known(v___x_5052_, 1);
v_fst_5054_ = lean_ctor_get(v_val_5053_, 0);
lean_inc(v_fst_5054_);
v_snd_5055_ = lean_ctor_get(v_val_5053_, 1);
lean_inc(v_snd_5055_);
lean_dec(v_val_5053_);
v___x_5056_ = lean_unbox_uint32(v_fst_5054_);
lean_dec(v_fst_5054_);
v___x_5057_ = lean_string_push(v_acc_5040_, v___x_5056_);
v_i_5039_ = v_snd_5055_;
v_acc_5040_ = v___x_5057_;
goto _start;
}
else
{
lean_object* v___x_5059_; 
lean_dec(v___x_5052_);
lean_inc_ref(v_s_5038_);
v___x_5059_ = l_Lean_Syntax_decodeStringGap(v_s_5038_, v_i_5046_);
lean_dec(v_i_5046_);
if (lean_obj_tag(v___x_5059_) == 1)
{
lean_object* v_val_5060_; 
v_val_5060_ = lean_ctor_get(v___x_5059_, 0);
lean_inc(v_val_5060_);
lean_dec_ref_known(v___x_5059_, 1);
v_i_5039_ = v_val_5060_;
goto _start;
}
else
{
lean_object* v___x_5062_; 
lean_dec(v___x_5059_);
lean_dec_ref(v_acc_5040_);
lean_dec_ref(v_s_5038_);
v___x_5062_ = lean_box(0);
return v___x_5062_;
}
}
}
}
else
{
lean_object* v___x_5063_; 
lean_dec(v_i_5046_);
lean_dec_ref(v_acc_5040_);
lean_dec_ref(v_s_5038_);
v___x_5063_ = lean_box(0);
return v___x_5063_;
}
}
else
{
lean_object* v___x_5064_; 
lean_dec(v_i_5039_);
lean_dec_ref(v_s_5038_);
v___x_5064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5064_, 0, v_acc_5040_);
return v___x_5064_;
}
}
else
{
lean_object* v___x_5065_; 
lean_dec(v_i_5039_);
lean_dec_ref(v_s_5038_);
v___x_5065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5065_, 0, v_acc_5040_);
return v___x_5065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object* v_s_5066_){
_start:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5067_ = lean_unsigned_to_nat(1u);
v___x_5068_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5069_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(v_s_5066_, v___x_5067_, v___x_5068_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object* v_stx_5073_){
_start:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; 
v___x_5074_ = ((lean_object*)(l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1));
v___x_5075_ = l_Lean_Syntax_isLit_x3f(v___x_5074_, v_stx_5073_);
if (lean_obj_tag(v___x_5075_) == 0)
{
return v___x_5075_;
}
else
{
lean_object* v_val_5076_; lean_object* v___x_5077_; 
v_val_5076_ = lean_ctor_get(v___x_5075_, 0);
lean_inc(v_val_5076_);
lean_dec_ref_known(v___x_5075_, 1);
v___x_5077_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(v_val_5076_);
return v___x_5077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object* v_stx_5078_){
_start:
{
lean_object* v_res_5079_; 
v_res_5079_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_stx_5078_);
lean_dec(v_stx_5078_);
return v_res_5079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object* v_stx_5080_){
_start:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; uint8_t v___x_5085_; 
v___x_5081_ = l_Lean_Syntax_getArgs(v_stx_5080_);
v___x_5082_ = lean_unsigned_to_nat(0u);
v___x_5083_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_5084_ = lean_array_get_size(v___x_5081_);
v___x_5085_ = lean_nat_dec_lt(v___x_5082_, v___x_5084_);
if (v___x_5085_ == 0)
{
lean_dec_ref(v___x_5081_);
return v___x_5083_;
}
else
{
lean_object* v___x_5086_; lean_object* v___x_5087_; size_t v___x_5088_; size_t v___x_5089_; lean_object* v___x_5090_; lean_object* v_snd_5091_; 
v___x_5086_ = lean_box(v___x_5085_);
v___x_5087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5087_, 0, v___x_5086_);
lean_ctor_set(v___x_5087_, 1, v___x_5083_);
v___x_5088_ = ((size_t)0ULL);
v___x_5089_ = lean_usize_of_nat(v___x_5084_);
v___x_5090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v___x_5081_, v___x_5088_, v___x_5089_, v___x_5087_);
lean_dec_ref(v___x_5081_);
v_snd_5091_ = lean_ctor_get(v___x_5090_, 1);
lean_inc(v_snd_5091_);
lean_dec_ref(v___x_5090_);
return v_snd_5091_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object* v_stx_5092_){
_start:
{
lean_object* v_res_5093_; 
v_res_5093_ = l_Lean_Syntax_getSepArgs(v_stx_5092_);
lean_dec(v_stx_5092_);
return v_res_5093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object* v_mkAppend_5094_, lean_object* v_mkElem_5095_, lean_object* v_mkLit_5096_, lean_object* v_as_5097_, size_t v_sz_5098_, size_t v_i_5099_, lean_object* v_b_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_){
_start:
{
lean_object* v_a_5104_; lean_object* v_a_5105_; lean_object* v_elem_5110_; lean_object* v___y_5111_; lean_object* v___y_5112_; uint8_t v___x_5117_; 
v___x_5117_ = lean_usize_dec_lt(v_i_5099_, v_sz_5098_);
if (v___x_5117_ == 0)
{
lean_object* v___x_5118_; 
lean_dec_ref(v_mkLit_5096_);
lean_dec_ref(v_mkElem_5095_);
lean_dec_ref(v_mkAppend_5094_);
v___x_5118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5118_, 0, v_b_5100_);
lean_ctor_set(v___x_5118_, 1, v___y_5102_);
return v___x_5118_;
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5120_; 
v_a_5119_ = lean_array_uget_borrowed(v_as_5097_, v_i_5099_);
v___x_5120_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_a_5119_);
if (lean_obj_tag(v___x_5120_) == 0)
{
lean_object* v_methods_5121_; lean_object* v_quotContext_5122_; lean_object* v_currMacroScope_5123_; lean_object* v_currRecDepth_5124_; lean_object* v_maxRecDepth_5125_; lean_object* v_ref_5126_; lean_object* v_ref_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v_methods_5121_ = lean_ctor_get(v___y_5101_, 0);
v_quotContext_5122_ = lean_ctor_get(v___y_5101_, 1);
v_currMacroScope_5123_ = lean_ctor_get(v___y_5101_, 2);
v_currRecDepth_5124_ = lean_ctor_get(v___y_5101_, 3);
v_maxRecDepth_5125_ = lean_ctor_get(v___y_5101_, 4);
v_ref_5126_ = lean_ctor_get(v___y_5101_, 5);
v_ref_5127_ = l_Lean_replaceRef(v_a_5119_, v_ref_5126_);
lean_inc(v_maxRecDepth_5125_);
lean_inc(v_currRecDepth_5124_);
lean_inc(v_currMacroScope_5123_);
lean_inc(v_quotContext_5122_);
lean_inc(v_methods_5121_);
v___x_5128_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5128_, 0, v_methods_5121_);
lean_ctor_set(v___x_5128_, 1, v_quotContext_5122_);
lean_ctor_set(v___x_5128_, 2, v_currMacroScope_5123_);
lean_ctor_set(v___x_5128_, 3, v_currRecDepth_5124_);
lean_ctor_set(v___x_5128_, 4, v_maxRecDepth_5125_);
lean_ctor_set(v___x_5128_, 5, v_ref_5127_);
lean_inc_ref(v_mkElem_5095_);
lean_inc(v_a_5119_);
v___x_5129_ = lean_apply_3(v_mkElem_5095_, v_a_5119_, v___x_5128_, v___y_5102_);
if (lean_obj_tag(v___x_5129_) == 0)
{
lean_object* v_a_5130_; lean_object* v_a_5131_; 
v_a_5130_ = lean_ctor_get(v___x_5129_, 0);
lean_inc(v_a_5130_);
v_a_5131_ = lean_ctor_get(v___x_5129_, 1);
lean_inc(v_a_5131_);
lean_dec_ref_known(v___x_5129_, 2);
v_elem_5110_ = v_a_5130_;
v___y_5111_ = v___y_5101_;
v___y_5112_ = v_a_5131_;
goto v___jp_5109_;
}
else
{
lean_dec(v_b_5100_);
lean_dec_ref(v_mkLit_5096_);
lean_dec_ref(v_mkElem_5095_);
lean_dec_ref(v_mkAppend_5094_);
return v___x_5129_;
}
}
else
{
lean_object* v_val_5132_; uint8_t v___x_5133_; 
v_val_5132_ = lean_ctor_get(v___x_5120_, 0);
lean_inc_n(v_val_5132_, 2);
lean_dec_ref_known(v___x_5120_, 1);
v___x_5133_ = lean_string_isempty(v_val_5132_);
if (v___x_5133_ == 0)
{
lean_object* v_methods_5134_; lean_object* v_quotContext_5135_; lean_object* v_currMacroScope_5136_; lean_object* v_currRecDepth_5137_; lean_object* v_maxRecDepth_5138_; lean_object* v_ref_5139_; lean_object* v_ref_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; 
v_methods_5134_ = lean_ctor_get(v___y_5101_, 0);
v_quotContext_5135_ = lean_ctor_get(v___y_5101_, 1);
v_currMacroScope_5136_ = lean_ctor_get(v___y_5101_, 2);
v_currRecDepth_5137_ = lean_ctor_get(v___y_5101_, 3);
v_maxRecDepth_5138_ = lean_ctor_get(v___y_5101_, 4);
v_ref_5139_ = lean_ctor_get(v___y_5101_, 5);
v_ref_5140_ = l_Lean_replaceRef(v_a_5119_, v_ref_5139_);
lean_inc(v_maxRecDepth_5138_);
lean_inc(v_currRecDepth_5137_);
lean_inc(v_currMacroScope_5136_);
lean_inc(v_quotContext_5135_);
lean_inc(v_methods_5134_);
v___x_5141_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5141_, 0, v_methods_5134_);
lean_ctor_set(v___x_5141_, 1, v_quotContext_5135_);
lean_ctor_set(v___x_5141_, 2, v_currMacroScope_5136_);
lean_ctor_set(v___x_5141_, 3, v_currRecDepth_5137_);
lean_ctor_set(v___x_5141_, 4, v_maxRecDepth_5138_);
lean_ctor_set(v___x_5141_, 5, v_ref_5140_);
lean_inc_ref(v_mkLit_5096_);
v___x_5142_ = lean_apply_3(v_mkLit_5096_, v_val_5132_, v___x_5141_, v___y_5102_);
if (lean_obj_tag(v___x_5142_) == 0)
{
lean_object* v_a_5143_; lean_object* v_a_5144_; 
v_a_5143_ = lean_ctor_get(v___x_5142_, 0);
lean_inc(v_a_5143_);
v_a_5144_ = lean_ctor_get(v___x_5142_, 1);
lean_inc(v_a_5144_);
lean_dec_ref_known(v___x_5142_, 2);
v_elem_5110_ = v_a_5143_;
v___y_5111_ = v___y_5101_;
v___y_5112_ = v_a_5144_;
goto v___jp_5109_;
}
else
{
lean_dec(v_b_5100_);
lean_dec_ref(v_mkLit_5096_);
lean_dec_ref(v_mkElem_5095_);
lean_dec_ref(v_mkAppend_5094_);
return v___x_5142_;
}
}
else
{
lean_dec(v_val_5132_);
v_a_5104_ = v_b_5100_;
v_a_5105_ = v___y_5102_;
goto v___jp_5103_;
}
}
}
v___jp_5103_:
{
size_t v___x_5106_; size_t v___x_5107_; 
v___x_5106_ = ((size_t)1ULL);
v___x_5107_ = lean_usize_add(v_i_5099_, v___x_5106_);
v_i_5099_ = v___x_5107_;
v_b_5100_ = v_a_5104_;
v___y_5102_ = v_a_5105_;
goto _start;
}
v___jp_5109_:
{
uint8_t v___x_5113_; 
v___x_5113_ = l_Lean_Syntax_isMissing(v_b_5100_);
if (v___x_5113_ == 0)
{
lean_object* v___x_5114_; 
lean_inc_ref(v_mkAppend_5094_);
lean_inc_ref(v___y_5111_);
v___x_5114_ = lean_apply_4(v_mkAppend_5094_, v_b_5100_, v_elem_5110_, v___y_5111_, v___y_5112_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; lean_object* v_a_5116_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5115_);
v_a_5116_ = lean_ctor_get(v___x_5114_, 1);
lean_inc(v_a_5116_);
lean_dec_ref_known(v___x_5114_, 2);
v_a_5104_ = v_a_5115_;
v_a_5105_ = v_a_5116_;
goto v___jp_5103_;
}
else
{
lean_dec_ref(v_mkLit_5096_);
lean_dec_ref(v_mkElem_5095_);
lean_dec_ref(v_mkAppend_5094_);
return v___x_5114_;
}
}
else
{
lean_dec(v_b_5100_);
v_a_5104_ = v_elem_5110_;
v_a_5105_ = v___y_5112_;
goto v___jp_5103_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object* v_mkAppend_5145_, lean_object* v_mkElem_5146_, lean_object* v_mkLit_5147_, lean_object* v_as_5148_, lean_object* v_sz_5149_, lean_object* v_i_5150_, lean_object* v_b_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_){
_start:
{
size_t v_sz_boxed_5154_; size_t v_i_boxed_5155_; lean_object* v_res_5156_; 
v_sz_boxed_5154_ = lean_unbox_usize(v_sz_5149_);
lean_dec(v_sz_5149_);
v_i_boxed_5155_ = lean_unbox_usize(v_i_5150_);
lean_dec(v_i_5150_);
v_res_5156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5145_, v_mkElem_5146_, v_mkLit_5147_, v_as_5148_, v_sz_boxed_5154_, v_i_boxed_5155_, v_b_5151_, v___y_5152_, v___y_5153_);
lean_dec_ref(v___y_5152_);
lean_dec_ref(v_as_5148_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object* v_chunks_5157_, lean_object* v_mkAppend_5158_, lean_object* v_mkElem_5159_, lean_object* v_mkLit_5160_, lean_object* v_a_5161_, lean_object* v_a_5162_){
_start:
{
lean_object* v_result_5163_; size_t v_sz_5164_; size_t v___x_5165_; lean_object* v___x_5166_; 
v_result_5163_ = lean_box(0);
v_sz_5164_ = lean_array_size(v_chunks_5157_);
v___x_5165_ = ((size_t)0ULL);
lean_inc_ref(v_mkLit_5160_);
v___x_5166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5158_, v_mkElem_5159_, v_mkLit_5160_, v_chunks_5157_, v_sz_5164_, v___x_5165_, v_result_5163_, v_a_5161_, v_a_5162_);
if (lean_obj_tag(v___x_5166_) == 0)
{
lean_object* v_a_5167_; lean_object* v_a_5168_; uint8_t v___x_5169_; 
v_a_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc(v_a_5167_);
v_a_5168_ = lean_ctor_get(v___x_5166_, 1);
lean_inc(v_a_5168_);
v___x_5169_ = l_Lean_Syntax_isMissing(v_a_5167_);
lean_dec(v_a_5167_);
if (v___x_5169_ == 0)
{
lean_dec(v_a_5168_);
lean_dec_ref(v_mkLit_5160_);
return v___x_5166_;
}
else
{
lean_object* v___x_5170_; lean_object* v___x_5171_; 
lean_dec_ref_known(v___x_5166_, 2);
v___x_5170_ = ((lean_object*)(l_Lean_versionString___closed__0));
lean_inc_ref(v_a_5161_);
v___x_5171_ = lean_apply_3(v_mkLit_5160_, v___x_5170_, v_a_5161_, v_a_5168_);
return v___x_5171_;
}
}
else
{
lean_dec_ref(v_mkLit_5160_);
return v___x_5166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object* v_chunks_5172_, lean_object* v_mkAppend_5173_, lean_object* v_mkElem_5174_, lean_object* v_mkLit_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v_chunks_5172_, v_mkAppend_5173_, v_mkElem_5174_, v_mkLit_5175_, v_a_5176_, v_a_5177_);
lean_dec_ref(v_a_5176_);
lean_dec_ref(v_chunks_5172_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object* v_a_5183_, lean_object* v_b_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_){
_start:
{
lean_object* v_ref_5187_; uint8_t v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v_ref_5187_ = lean_ctor_get(v___y_5185_, 5);
v___x_5188_ = 0;
v___x_5189_ = l_Lean_SourceInfo_fromRef(v_ref_5187_, v___x_5188_);
v___x_5190_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1));
v___x_5191_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2));
lean_inc(v___x_5189_);
v___x_5192_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5189_);
lean_ctor_set(v___x_5192_, 1, v___x_5191_);
v___x_5193_ = l_Lean_Syntax_node3(v___x_5189_, v___x_5190_, v_a_5183_, v___x_5192_, v_b_5184_);
v___x_5194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5194_, 0, v___x_5193_);
lean_ctor_set(v___x_5194_, 1, v___y_5186_);
return v___x_5194_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object* v_a_5195_, lean_object* v_b_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_){
_start:
{
lean_object* v_res_5199_; 
v_res_5199_ = l_Lean_TSyntax_expandInterpolatedStr___lam__0(v_a_5195_, v_b_5196_, v___y_5197_, v___y_5198_);
lean_dec_ref(v___y_5197_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object* v_ofInterpFn_5200_, lean_object* v_a_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_){
_start:
{
lean_object* v_ref_5204_; uint8_t v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; 
v_ref_5204_ = lean_ctor_get(v___y_5202_, 5);
v___x_5205_ = 0;
v___x_5206_ = l_Lean_SourceInfo_fromRef(v_ref_5204_, v___x_5205_);
v___x_5207_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5208_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v___x_5206_);
v___x_5209_ = l_Lean_Syntax_node1(v___x_5206_, v___x_5208_, v_a_5201_);
v___x_5210_ = l_Lean_Syntax_node2(v___x_5206_, v___x_5207_, v_ofInterpFn_5200_, v___x_5209_);
v___x_5211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5211_, 0, v___x_5210_);
lean_ctor_set(v___x_5211_, 1, v___y_5203_);
return v___x_5211_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object* v_ofInterpFn_5212_, lean_object* v_a_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_){
_start:
{
lean_object* v_res_5216_; 
v_res_5216_ = l_Lean_TSyntax_expandInterpolatedStr___lam__1(v_ofInterpFn_5212_, v_a_5213_, v___y_5214_, v___y_5215_);
lean_dec_ref(v___y_5214_);
return v_res_5216_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object* v_ofLitFn_5217_, lean_object* v_s_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_){
_start:
{
lean_object* v_ref_5221_; uint8_t v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v_ref_5221_ = lean_ctor_get(v___y_5219_, 5);
v___x_5222_ = 0;
v___x_5223_ = l_Lean_SourceInfo_fromRef(v_ref_5221_, v___x_5222_);
v___x_5224_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5225_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5226_ = lean_box(2);
v___x_5227_ = l_Lean_Syntax_mkStrLit(v_s_5218_, v___x_5226_);
lean_inc(v___x_5223_);
v___x_5228_ = l_Lean_Syntax_node1(v___x_5223_, v___x_5225_, v___x_5227_);
v___x_5229_ = l_Lean_Syntax_node2(v___x_5223_, v___x_5224_, v_ofLitFn_5217_, v___x_5228_);
v___x_5230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5230_, 0, v___x_5229_);
lean_ctor_set(v___x_5230_, 1, v___y_5220_);
return v___x_5230_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object* v_ofLitFn_5231_, lean_object* v_s_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_){
_start:
{
lean_object* v_res_5235_; 
v_res_5235_ = l_Lean_TSyntax_expandInterpolatedStr___lam__2(v_ofLitFn_5231_, v_s_5232_, v___y_5233_, v___y_5234_);
lean_dec_ref(v___y_5233_);
return v_res_5235_;
}
}
static lean_object* _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8(void){
_start:
{
lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5253_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5254_ = l_String_toRawSubstring_x27(v___x_5253_);
return v___x_5254_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object* v_interpStr_5275_, lean_object* v_type_5276_, lean_object* v_ofInterpFn_5277_, lean_object* v_ofLitFn_5278_, lean_object* v_a_5279_, lean_object* v_a_5280_){
_start:
{
lean_object* v___f_5281_; lean_object* v___f_5282_; lean_object* v___f_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
v___f_5281_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__0));
v___f_5282_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed), 4, 1);
lean_closure_set(v___f_5282_, 0, v_ofInterpFn_5277_);
v___f_5283_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed), 4, 1);
lean_closure_set(v___f_5283_, 0, v_ofLitFn_5278_);
v___x_5284_ = l_Lean_Syntax_getArgs(v_interpStr_5275_);
v___x_5285_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v___x_5284_, v___f_5281_, v___f_5282_, v___f_5283_, v_a_5279_, v_a_5280_);
lean_dec_ref(v___x_5284_);
if (lean_obj_tag(v___x_5285_) == 0)
{
lean_object* v_a_5286_; lean_object* v_a_5287_; lean_object* v___x_5289_; uint8_t v_isShared_5290_; uint8_t v_isSharedCheck_5318_; 
v_a_5286_ = lean_ctor_get(v___x_5285_, 0);
v_a_5287_ = lean_ctor_get(v___x_5285_, 1);
v_isSharedCheck_5318_ = !lean_is_exclusive(v___x_5285_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5289_ = v___x_5285_;
v_isShared_5290_ = v_isSharedCheck_5318_;
goto v_resetjp_5288_;
}
else
{
lean_inc(v_a_5287_);
lean_inc(v_a_5286_);
lean_dec(v___x_5285_);
v___x_5289_ = lean_box(0);
v_isShared_5290_ = v_isSharedCheck_5318_;
goto v_resetjp_5288_;
}
v_resetjp_5288_:
{
lean_object* v_quotContext_5291_; lean_object* v_currMacroScope_5292_; lean_object* v_ref_5293_; uint8_t v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5316_; 
v_quotContext_5291_ = lean_ctor_get(v_a_5279_, 1);
v_currMacroScope_5292_ = lean_ctor_get(v_a_5279_, 2);
v_ref_5293_ = lean_ctor_get(v_a_5279_, 5);
v___x_5294_ = 0;
v___x_5295_ = l_Lean_SourceInfo_fromRef(v_ref_5293_, v___x_5294_);
v___x_5296_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__2));
v___x_5297_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__4));
v___x_5298_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__5));
lean_inc_n(v___x_5295_, 7);
v___x_5299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5299_, 0, v___x_5295_);
lean_ctor_set(v___x_5299_, 1, v___x_5298_);
v___x_5300_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__7));
v___x_5301_ = lean_obj_once(&l_Lean_TSyntax_expandInterpolatedStr___closed__8, &l_Lean_TSyntax_expandInterpolatedStr___closed__8_once, _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8);
v___x_5302_ = lean_obj_once(&l_Substring_Raw_toName___closed__0, &l_Substring_Raw_toName___closed__0_once, _init_l_Substring_Raw_toName___closed__0);
lean_inc(v_currMacroScope_5292_);
lean_inc(v_quotContext_5291_);
v___x_5303_ = l_Lean_addMacroScope(v_quotContext_5291_, v___x_5302_, v_currMacroScope_5292_);
v___x_5304_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__16));
v___x_5305_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5305_, 0, v___x_5295_);
lean_ctor_set(v___x_5305_, 1, v___x_5301_);
lean_ctor_set(v___x_5305_, 2, v___x_5303_);
lean_ctor_set(v___x_5305_, 3, v___x_5304_);
v___x_5306_ = l_Lean_Syntax_node1(v___x_5295_, v___x_5300_, v___x_5305_);
v___x_5307_ = l_Lean_Syntax_node2(v___x_5295_, v___x_5297_, v___x_5299_, v___x_5306_);
v___x_5308_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_5309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5295_);
lean_ctor_set(v___x_5309_, 1, v___x_5308_);
v___x_5310_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5311_ = l_Lean_Syntax_node1(v___x_5295_, v___x_5310_, v_type_5276_);
v___x_5312_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__17));
v___x_5313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5295_);
lean_ctor_set(v___x_5313_, 1, v___x_5312_);
v___x_5314_ = l_Lean_Syntax_node5(v___x_5295_, v___x_5296_, v___x_5307_, v_a_5286_, v___x_5309_, v___x_5311_, v___x_5313_);
if (v_isShared_5290_ == 0)
{
lean_ctor_set(v___x_5289_, 0, v___x_5314_);
v___x_5316_ = v___x_5289_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v___x_5314_);
lean_ctor_set(v_reuseFailAlloc_5317_, 1, v_a_5287_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
}
else
{
lean_object* v_a_5319_; lean_object* v_a_5320_; lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5327_; 
lean_dec(v_type_5276_);
v_a_5319_ = lean_ctor_get(v___x_5285_, 0);
v_a_5320_ = lean_ctor_get(v___x_5285_, 1);
v_isSharedCheck_5327_ = !lean_is_exclusive(v___x_5285_);
if (v_isSharedCheck_5327_ == 0)
{
v___x_5322_ = v___x_5285_;
v_isShared_5323_ = v_isSharedCheck_5327_;
goto v_resetjp_5321_;
}
else
{
lean_inc(v_a_5320_);
lean_inc(v_a_5319_);
lean_dec(v___x_5285_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5327_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
lean_object* v___x_5325_; 
if (v_isShared_5323_ == 0)
{
v___x_5325_ = v___x_5322_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5326_; 
v_reuseFailAlloc_5326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5326_, 0, v_a_5319_);
lean_ctor_set(v_reuseFailAlloc_5326_, 1, v_a_5320_);
v___x_5325_ = v_reuseFailAlloc_5326_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
return v___x_5325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object* v_interpStr_5328_, lean_object* v_type_5329_, lean_object* v_ofInterpFn_5330_, lean_object* v_ofLitFn_5331_, lean_object* v_a_5332_, lean_object* v_a_5333_){
_start:
{
lean_object* v_res_5334_; 
v_res_5334_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_5328_, v_type_5329_, v_ofInterpFn_5330_, v_ofLitFn_5331_, v_a_5332_, v_a_5333_);
lean_dec_ref(v_a_5332_);
lean_dec(v_interpStr_5328_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object* v_stx_5335_){
_start:
{
lean_object* v___x_5336_; lean_object* v___x_5337_; 
v___x_5336_ = lean_unsigned_to_nat(1u);
v___x_5337_ = l_Lean_Syntax_getArg(v_stx_5335_, v___x_5336_);
if (lean_obj_tag(v___x_5337_) == 2)
{
lean_object* v_val_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
v_val_5338_ = lean_ctor_get(v___x_5337_, 1);
lean_inc_ref(v_val_5338_);
lean_dec_ref_known(v___x_5337_, 2);
v___x_5339_ = lean_unsigned_to_nat(0u);
v___x_5340_ = lean_string_utf8_byte_size(v_val_5338_);
v___x_5341_ = lean_unsigned_to_nat(2u);
v___x_5342_ = lean_string_pos_sub(v___x_5340_, v___x_5341_);
v___x_5343_ = lean_string_utf8_extract(v_val_5338_, v___x_5339_, v___x_5342_);
lean_dec(v___x_5342_);
lean_dec_ref(v_val_5338_);
return v___x_5343_;
}
else
{
lean_object* v___x_5344_; 
lean_dec(v___x_5337_);
v___x_5344_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5344_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object* v_stx_5345_){
_start:
{
lean_object* v_res_5346_; 
v_res_5346_ = l_Lean_TSyntax_getDocString(v_stx_5345_);
lean_dec(v_stx_5345_);
return v_res_5346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t v_x_5365_, lean_object* v_prec_5366_){
_start:
{
lean_object* v___y_5368_; lean_object* v___y_5375_; lean_object* v___y_5382_; lean_object* v___y_5389_; lean_object* v___y_5396_; lean_object* v___y_5403_; 
switch(v_x_5365_)
{
case 0:
{
lean_object* v___x_5409_; uint8_t v___x_5410_; 
v___x_5409_ = lean_unsigned_to_nat(1024u);
v___x_5410_ = lean_nat_dec_le(v___x_5409_, v_prec_5366_);
if (v___x_5410_ == 0)
{
lean_object* v___x_5411_; 
v___x_5411_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5368_ = v___x_5411_;
goto v___jp_5367_;
}
else
{
lean_object* v___x_5412_; 
v___x_5412_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5368_ = v___x_5412_;
goto v___jp_5367_;
}
}
case 1:
{
lean_object* v___x_5413_; uint8_t v___x_5414_; 
v___x_5413_ = lean_unsigned_to_nat(1024u);
v___x_5414_ = lean_nat_dec_le(v___x_5413_, v_prec_5366_);
if (v___x_5414_ == 0)
{
lean_object* v___x_5415_; 
v___x_5415_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5375_ = v___x_5415_;
goto v___jp_5374_;
}
else
{
lean_object* v___x_5416_; 
v___x_5416_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5375_ = v___x_5416_;
goto v___jp_5374_;
}
}
case 2:
{
lean_object* v___x_5417_; uint8_t v___x_5418_; 
v___x_5417_ = lean_unsigned_to_nat(1024u);
v___x_5418_ = lean_nat_dec_le(v___x_5417_, v_prec_5366_);
if (v___x_5418_ == 0)
{
lean_object* v___x_5419_; 
v___x_5419_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5382_ = v___x_5419_;
goto v___jp_5381_;
}
else
{
lean_object* v___x_5420_; 
v___x_5420_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5382_ = v___x_5420_;
goto v___jp_5381_;
}
}
case 3:
{
lean_object* v___x_5421_; uint8_t v___x_5422_; 
v___x_5421_ = lean_unsigned_to_nat(1024u);
v___x_5422_ = lean_nat_dec_le(v___x_5421_, v_prec_5366_);
if (v___x_5422_ == 0)
{
lean_object* v___x_5423_; 
v___x_5423_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5389_ = v___x_5423_;
goto v___jp_5388_;
}
else
{
lean_object* v___x_5424_; 
v___x_5424_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5389_ = v___x_5424_;
goto v___jp_5388_;
}
}
case 4:
{
lean_object* v___x_5425_; uint8_t v___x_5426_; 
v___x_5425_ = lean_unsigned_to_nat(1024u);
v___x_5426_ = lean_nat_dec_le(v___x_5425_, v_prec_5366_);
if (v___x_5426_ == 0)
{
lean_object* v___x_5427_; 
v___x_5427_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5396_ = v___x_5427_;
goto v___jp_5395_;
}
else
{
lean_object* v___x_5428_; 
v___x_5428_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5396_ = v___x_5428_;
goto v___jp_5395_;
}
}
default: 
{
lean_object* v___x_5429_; uint8_t v___x_5430_; 
v___x_5429_ = lean_unsigned_to_nat(1024u);
v___x_5430_ = lean_nat_dec_le(v___x_5429_, v_prec_5366_);
if (v___x_5430_ == 0)
{
lean_object* v___x_5431_; 
v___x_5431_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5403_ = v___x_5431_;
goto v___jp_5402_;
}
else
{
lean_object* v___x_5432_; 
v___x_5432_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5403_ = v___x_5432_;
goto v___jp_5402_;
}
}
}
v___jp_5367_:
{
lean_object* v___x_5369_; lean_object* v___x_5370_; uint8_t v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; 
v___x_5369_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__1));
lean_inc(v___y_5368_);
v___x_5370_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5370_, 0, v___y_5368_);
lean_ctor_set(v___x_5370_, 1, v___x_5369_);
v___x_5371_ = 0;
v___x_5372_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5372_, 0, v___x_5370_);
lean_ctor_set_uint8(v___x_5372_, sizeof(void*)*1, v___x_5371_);
v___x_5373_ = l_Repr_addAppParen(v___x_5372_, v_prec_5366_);
return v___x_5373_;
}
v___jp_5374_:
{
lean_object* v___x_5376_; lean_object* v___x_5377_; uint8_t v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; 
v___x_5376_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__3));
lean_inc(v___y_5375_);
v___x_5377_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5377_, 0, v___y_5375_);
lean_ctor_set(v___x_5377_, 1, v___x_5376_);
v___x_5378_ = 0;
v___x_5379_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5379_, 0, v___x_5377_);
lean_ctor_set_uint8(v___x_5379_, sizeof(void*)*1, v___x_5378_);
v___x_5380_ = l_Repr_addAppParen(v___x_5379_, v_prec_5366_);
return v___x_5380_;
}
v___jp_5381_:
{
lean_object* v___x_5383_; lean_object* v___x_5384_; uint8_t v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; 
v___x_5383_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__5));
lean_inc(v___y_5382_);
v___x_5384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5384_, 0, v___y_5382_);
lean_ctor_set(v___x_5384_, 1, v___x_5383_);
v___x_5385_ = 0;
v___x_5386_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5386_, 0, v___x_5384_);
lean_ctor_set_uint8(v___x_5386_, sizeof(void*)*1, v___x_5385_);
v___x_5387_ = l_Repr_addAppParen(v___x_5386_, v_prec_5366_);
return v___x_5387_;
}
v___jp_5388_:
{
lean_object* v___x_5390_; lean_object* v___x_5391_; uint8_t v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; 
v___x_5390_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__7));
lean_inc(v___y_5389_);
v___x_5391_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5391_, 0, v___y_5389_);
lean_ctor_set(v___x_5391_, 1, v___x_5390_);
v___x_5392_ = 0;
v___x_5393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5393_, 0, v___x_5391_);
lean_ctor_set_uint8(v___x_5393_, sizeof(void*)*1, v___x_5392_);
v___x_5394_ = l_Repr_addAppParen(v___x_5393_, v_prec_5366_);
return v___x_5394_;
}
v___jp_5395_:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; uint8_t v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5397_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__9));
lean_inc(v___y_5396_);
v___x_5398_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5398_, 0, v___y_5396_);
lean_ctor_set(v___x_5398_, 1, v___x_5397_);
v___x_5399_ = 0;
v___x_5400_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5400_, 0, v___x_5398_);
lean_ctor_set_uint8(v___x_5400_, sizeof(void*)*1, v___x_5399_);
v___x_5401_ = l_Repr_addAppParen(v___x_5400_, v_prec_5366_);
return v___x_5401_;
}
v___jp_5402_:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; uint8_t v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; 
v___x_5404_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__11));
lean_inc(v___y_5403_);
v___x_5405_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5405_, 0, v___y_5403_);
lean_ctor_set(v___x_5405_, 1, v___x_5404_);
v___x_5406_ = 0;
v___x_5407_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5407_, 0, v___x_5405_);
lean_ctor_set_uint8(v___x_5407_, sizeof(void*)*1, v___x_5406_);
v___x_5408_ = l_Repr_addAppParen(v___x_5407_, v_prec_5366_);
return v___x_5408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object* v_x_5433_, lean_object* v_prec_5434_){
_start:
{
uint8_t v_x_329__boxed_5435_; lean_object* v_res_5436_; 
v_x_329__boxed_5435_ = lean_unbox(v_x_5433_);
v_res_5436_ = l_Lean_Meta_instReprTransparencyMode_repr(v_x_329__boxed_5435_, v_prec_5434_);
lean_dec(v_prec_5434_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t v_x_5448_, lean_object* v_prec_5449_){
_start:
{
lean_object* v___y_5451_; lean_object* v___y_5458_; lean_object* v___y_5465_; 
switch(v_x_5448_)
{
case 0:
{
lean_object* v___x_5471_; uint8_t v___x_5472_; 
v___x_5471_ = lean_unsigned_to_nat(1024u);
v___x_5472_ = lean_nat_dec_le(v___x_5471_, v_prec_5449_);
if (v___x_5472_ == 0)
{
lean_object* v___x_5473_; 
v___x_5473_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5451_ = v___x_5473_;
goto v___jp_5450_;
}
else
{
lean_object* v___x_5474_; 
v___x_5474_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5451_ = v___x_5474_;
goto v___jp_5450_;
}
}
case 1:
{
lean_object* v___x_5475_; uint8_t v___x_5476_; 
v___x_5475_ = lean_unsigned_to_nat(1024u);
v___x_5476_ = lean_nat_dec_le(v___x_5475_, v_prec_5449_);
if (v___x_5476_ == 0)
{
lean_object* v___x_5477_; 
v___x_5477_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5458_ = v___x_5477_;
goto v___jp_5457_;
}
else
{
lean_object* v___x_5478_; 
v___x_5478_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5458_ = v___x_5478_;
goto v___jp_5457_;
}
}
default: 
{
lean_object* v___x_5479_; uint8_t v___x_5480_; 
v___x_5479_ = lean_unsigned_to_nat(1024u);
v___x_5480_ = lean_nat_dec_le(v___x_5479_, v_prec_5449_);
if (v___x_5480_ == 0)
{
lean_object* v___x_5481_; 
v___x_5481_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5465_ = v___x_5481_;
goto v___jp_5464_;
}
else
{
lean_object* v___x_5482_; 
v___x_5482_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5465_ = v___x_5482_;
goto v___jp_5464_;
}
}
}
v___jp_5450_:
{
lean_object* v___x_5452_; lean_object* v___x_5453_; uint8_t v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; 
v___x_5452_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__1));
lean_inc(v___y_5451_);
v___x_5453_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5453_, 0, v___y_5451_);
lean_ctor_set(v___x_5453_, 1, v___x_5452_);
v___x_5454_ = 0;
v___x_5455_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5455_, 0, v___x_5453_);
lean_ctor_set_uint8(v___x_5455_, sizeof(void*)*1, v___x_5454_);
v___x_5456_ = l_Repr_addAppParen(v___x_5455_, v_prec_5449_);
return v___x_5456_;
}
v___jp_5457_:
{
lean_object* v___x_5459_; lean_object* v___x_5460_; uint8_t v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___x_5459_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__3));
lean_inc(v___y_5458_);
v___x_5460_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5460_, 0, v___y_5458_);
lean_ctor_set(v___x_5460_, 1, v___x_5459_);
v___x_5461_ = 0;
v___x_5462_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5462_, 0, v___x_5460_);
lean_ctor_set_uint8(v___x_5462_, sizeof(void*)*1, v___x_5461_);
v___x_5463_ = l_Repr_addAppParen(v___x_5462_, v_prec_5449_);
return v___x_5463_;
}
v___jp_5464_:
{
lean_object* v___x_5466_; lean_object* v___x_5467_; uint8_t v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5466_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__5));
lean_inc(v___y_5465_);
v___x_5467_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5467_, 0, v___y_5465_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
v___x_5468_ = 0;
v___x_5469_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5469_, 0, v___x_5467_);
lean_ctor_set_uint8(v___x_5469_, sizeof(void*)*1, v___x_5468_);
v___x_5470_ = l_Repr_addAppParen(v___x_5469_, v_prec_5449_);
return v___x_5470_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object* v_x_5483_, lean_object* v_prec_5484_){
_start:
{
uint8_t v_x_167__boxed_5485_; lean_object* v_res_5486_; 
v_x_167__boxed_5485_ = lean_unbox(v_x_5483_);
v_res_5486_ = l_Lean_Meta_instReprEtaStructMode_repr(v_x_167__boxed_5485_, v_prec_5484_);
lean_dec(v_prec_5484_);
return v_res_5486_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_5498_; lean_object* v___x_5499_; 
v___x_5498_ = lean_unsigned_to_nat(8u);
v___x_5499_ = lean_nat_to_int(v___x_5498_);
return v___x_5499_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5509_; lean_object* v___x_5510_; 
v___x_5509_ = lean_unsigned_to_nat(13u);
v___x_5510_ = lean_nat_to_int(v___x_5509_);
return v___x_5510_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_5520_; lean_object* v___x_5521_; 
v___x_5520_ = lean_unsigned_to_nat(10u);
v___x_5521_ = lean_nat_to_int(v___x_5520_);
return v___x_5521_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_5525_; lean_object* v___x_5526_; 
v___x_5525_ = lean_unsigned_to_nat(14u);
v___x_5526_ = lean_nat_to_int(v___x_5525_);
return v___x_5526_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_5530_; lean_object* v___x_5531_; 
v___x_5530_ = lean_unsigned_to_nat(19u);
v___x_5531_ = lean_nat_to_int(v___x_5530_);
return v___x_5531_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; 
v___x_5535_ = lean_unsigned_to_nat(20u);
v___x_5536_ = lean_nat_to_int(v___x_5535_);
return v___x_5536_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_5543_; lean_object* v___x_5544_; 
v___x_5543_ = lean_unsigned_to_nat(9u);
v___x_5544_ = lean_nat_to_int(v___x_5543_);
return v___x_5544_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5551_ = lean_unsigned_to_nat(12u);
v___x_5552_ = lean_nat_to_int(v___x_5551_);
return v___x_5552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object* v_x_5559_){
_start:
{
uint8_t v_zeta_5560_; uint8_t v_beta_5561_; uint8_t v_eta_5562_; uint8_t v_etaStruct_5563_; uint8_t v_iota_5564_; uint8_t v_proj_5565_; uint8_t v_decide_5566_; uint8_t v_autoUnfold_5567_; uint8_t v_failIfUnchanged_5568_; uint8_t v_unfoldPartialApp_5569_; uint8_t v_zetaDelta_5570_; uint8_t v_index_5571_; uint8_t v_zetaUnused_5572_; uint8_t v_zetaHave_5573_; uint8_t v_locals_5574_; uint8_t v_instances_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; uint8_t v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; 
v_zeta_5560_ = lean_ctor_get_uint8(v_x_5559_, 0);
v_beta_5561_ = lean_ctor_get_uint8(v_x_5559_, 1);
v_eta_5562_ = lean_ctor_get_uint8(v_x_5559_, 2);
v_etaStruct_5563_ = lean_ctor_get_uint8(v_x_5559_, 3);
v_iota_5564_ = lean_ctor_get_uint8(v_x_5559_, 4);
v_proj_5565_ = lean_ctor_get_uint8(v_x_5559_, 5);
v_decide_5566_ = lean_ctor_get_uint8(v_x_5559_, 6);
v_autoUnfold_5567_ = lean_ctor_get_uint8(v_x_5559_, 7);
v_failIfUnchanged_5568_ = lean_ctor_get_uint8(v_x_5559_, 8);
v_unfoldPartialApp_5569_ = lean_ctor_get_uint8(v_x_5559_, 9);
v_zetaDelta_5570_ = lean_ctor_get_uint8(v_x_5559_, 10);
v_index_5571_ = lean_ctor_get_uint8(v_x_5559_, 11);
v_zetaUnused_5572_ = lean_ctor_get_uint8(v_x_5559_, 12);
v_zetaHave_5573_ = lean_ctor_get_uint8(v_x_5559_, 13);
v_locals_5574_ = lean_ctor_get_uint8(v_x_5559_, 14);
v_instances_5575_ = lean_ctor_get_uint8(v_x_5559_, 15);
v___x_5576_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5577_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__3));
v___x_5578_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5579_ = lean_unsigned_to_nat(0u);
v___x_5580_ = l_Bool_repr___redArg(v_zeta_5560_);
v___x_5581_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5581_, 0, v___x_5578_);
lean_ctor_set(v___x_5581_, 1, v___x_5580_);
v___x_5582_ = 0;
v___x_5583_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5583_, 0, v___x_5581_);
lean_ctor_set_uint8(v___x_5583_, sizeof(void*)*1, v___x_5582_);
v___x_5584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5584_, 0, v___x_5577_);
lean_ctor_set(v___x_5584_, 1, v___x_5583_);
v___x_5585_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5586_, 0, v___x_5584_);
lean_ctor_set(v___x_5586_, 1, v___x_5585_);
v___x_5587_ = lean_box(1);
v___x_5588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5588_, 0, v___x_5586_);
lean_ctor_set(v___x_5588_, 1, v___x_5587_);
v___x_5589_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5590_, 0, v___x_5588_);
lean_ctor_set(v___x_5590_, 1, v___x_5589_);
v___x_5591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5590_);
lean_ctor_set(v___x_5591_, 1, v___x_5576_);
v___x_5592_ = l_Bool_repr___redArg(v_beta_5561_);
v___x_5593_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5593_, 0, v___x_5578_);
lean_ctor_set(v___x_5593_, 1, v___x_5592_);
v___x_5594_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5594_, 0, v___x_5593_);
lean_ctor_set_uint8(v___x_5594_, sizeof(void*)*1, v___x_5582_);
v___x_5595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5595_, 0, v___x_5591_);
lean_ctor_set(v___x_5595_, 1, v___x_5594_);
v___x_5596_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5595_);
lean_ctor_set(v___x_5596_, 1, v___x_5585_);
v___x_5597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5597_, 0, v___x_5596_);
lean_ctor_set(v___x_5597_, 1, v___x_5587_);
v___x_5598_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5599_, 0, v___x_5597_);
lean_ctor_set(v___x_5599_, 1, v___x_5598_);
v___x_5600_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5599_);
lean_ctor_set(v___x_5600_, 1, v___x_5576_);
v___x_5601_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5602_ = l_Bool_repr___redArg(v_eta_5562_);
v___x_5603_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5603_, 0, v___x_5601_);
lean_ctor_set(v___x_5603_, 1, v___x_5602_);
v___x_5604_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5604_, 0, v___x_5603_);
lean_ctor_set_uint8(v___x_5604_, sizeof(void*)*1, v___x_5582_);
v___x_5605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5605_, 0, v___x_5600_);
lean_ctor_set(v___x_5605_, 1, v___x_5604_);
v___x_5606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5606_, 0, v___x_5605_);
lean_ctor_set(v___x_5606_, 1, v___x_5585_);
v___x_5607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5607_, 0, v___x_5606_);
lean_ctor_set(v___x_5607_, 1, v___x_5587_);
v___x_5608_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5609_, 0, v___x_5607_);
lean_ctor_set(v___x_5609_, 1, v___x_5608_);
v___x_5610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5610_, 0, v___x_5609_);
lean_ctor_set(v___x_5610_, 1, v___x_5576_);
v___x_5611_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5612_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5563_, v___x_5579_);
v___x_5613_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5613_, 0, v___x_5611_);
lean_ctor_set(v___x_5613_, 1, v___x_5612_);
v___x_5614_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5614_, 0, v___x_5613_);
lean_ctor_set_uint8(v___x_5614_, sizeof(void*)*1, v___x_5582_);
v___x_5615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5615_, 0, v___x_5610_);
lean_ctor_set(v___x_5615_, 1, v___x_5614_);
v___x_5616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5616_, 0, v___x_5615_);
lean_ctor_set(v___x_5616_, 1, v___x_5585_);
v___x_5617_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5617_, 0, v___x_5616_);
lean_ctor_set(v___x_5617_, 1, v___x_5587_);
v___x_5618_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5619_, 0, v___x_5617_);
lean_ctor_set(v___x_5619_, 1, v___x_5618_);
v___x_5620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5620_, 0, v___x_5619_);
lean_ctor_set(v___x_5620_, 1, v___x_5576_);
v___x_5621_ = l_Bool_repr___redArg(v_iota_5564_);
v___x_5622_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5622_, 0, v___x_5578_);
lean_ctor_set(v___x_5622_, 1, v___x_5621_);
v___x_5623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5623_, 0, v___x_5622_);
lean_ctor_set_uint8(v___x_5623_, sizeof(void*)*1, v___x_5582_);
v___x_5624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5624_, 0, v___x_5620_);
lean_ctor_set(v___x_5624_, 1, v___x_5623_);
v___x_5625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5625_, 0, v___x_5624_);
lean_ctor_set(v___x_5625_, 1, v___x_5585_);
v___x_5626_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5626_, 0, v___x_5625_);
lean_ctor_set(v___x_5626_, 1, v___x_5587_);
v___x_5627_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_5628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5626_);
lean_ctor_set(v___x_5628_, 1, v___x_5627_);
v___x_5629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5629_, 0, v___x_5628_);
lean_ctor_set(v___x_5629_, 1, v___x_5576_);
v___x_5630_ = l_Bool_repr___redArg(v_proj_5565_);
v___x_5631_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5631_, 0, v___x_5578_);
lean_ctor_set(v___x_5631_, 1, v___x_5630_);
v___x_5632_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5632_, 0, v___x_5631_);
lean_ctor_set_uint8(v___x_5632_, sizeof(void*)*1, v___x_5582_);
v___x_5633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5633_, 0, v___x_5629_);
lean_ctor_set(v___x_5633_, 1, v___x_5632_);
v___x_5634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5634_, 0, v___x_5633_);
lean_ctor_set(v___x_5634_, 1, v___x_5585_);
v___x_5635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5635_, 0, v___x_5634_);
lean_ctor_set(v___x_5635_, 1, v___x_5587_);
v___x_5636_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_5637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5637_, 0, v___x_5635_);
lean_ctor_set(v___x_5637_, 1, v___x_5636_);
v___x_5638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5638_, 0, v___x_5637_);
lean_ctor_set(v___x_5638_, 1, v___x_5576_);
v___x_5639_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_5640_ = l_Bool_repr___redArg(v_decide_5566_);
v___x_5641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5641_, 0, v___x_5639_);
lean_ctor_set(v___x_5641_, 1, v___x_5640_);
v___x_5642_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5642_, 0, v___x_5641_);
lean_ctor_set_uint8(v___x_5642_, sizeof(void*)*1, v___x_5582_);
v___x_5643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5643_, 0, v___x_5638_);
lean_ctor_set(v___x_5643_, 1, v___x_5642_);
v___x_5644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5644_, 0, v___x_5643_);
lean_ctor_set(v___x_5644_, 1, v___x_5585_);
v___x_5645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5645_, 0, v___x_5644_);
lean_ctor_set(v___x_5645_, 1, v___x_5587_);
v___x_5646_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_5647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5647_, 0, v___x_5645_);
lean_ctor_set(v___x_5647_, 1, v___x_5646_);
v___x_5648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5648_, 0, v___x_5647_);
lean_ctor_set(v___x_5648_, 1, v___x_5576_);
v___x_5649_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5650_ = l_Bool_repr___redArg(v_autoUnfold_5567_);
v___x_5651_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5651_, 0, v___x_5649_);
lean_ctor_set(v___x_5651_, 1, v___x_5650_);
v___x_5652_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5652_, 0, v___x_5651_);
lean_ctor_set_uint8(v___x_5652_, sizeof(void*)*1, v___x_5582_);
v___x_5653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5653_, 0, v___x_5648_);
lean_ctor_set(v___x_5653_, 1, v___x_5652_);
v___x_5654_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5654_, 0, v___x_5653_);
lean_ctor_set(v___x_5654_, 1, v___x_5585_);
v___x_5655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5655_, 0, v___x_5654_);
lean_ctor_set(v___x_5655_, 1, v___x_5587_);
v___x_5656_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_5657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5655_);
lean_ctor_set(v___x_5657_, 1, v___x_5656_);
v___x_5658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5657_);
lean_ctor_set(v___x_5658_, 1, v___x_5576_);
v___x_5659_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_5660_ = l_Bool_repr___redArg(v_failIfUnchanged_5568_);
v___x_5661_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5661_, 0, v___x_5659_);
lean_ctor_set(v___x_5661_, 1, v___x_5660_);
v___x_5662_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5662_, 0, v___x_5661_);
lean_ctor_set_uint8(v___x_5662_, sizeof(void*)*1, v___x_5582_);
v___x_5663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5663_, 0, v___x_5658_);
lean_ctor_set(v___x_5663_, 1, v___x_5662_);
v___x_5664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5664_, 0, v___x_5663_);
lean_ctor_set(v___x_5664_, 1, v___x_5585_);
v___x_5665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5665_, 0, v___x_5664_);
lean_ctor_set(v___x_5665_, 1, v___x_5587_);
v___x_5666_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_5667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5667_, 0, v___x_5665_);
lean_ctor_set(v___x_5667_, 1, v___x_5666_);
v___x_5668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5668_, 0, v___x_5667_);
lean_ctor_set(v___x_5668_, 1, v___x_5576_);
v___x_5669_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_5670_ = l_Bool_repr___redArg(v_unfoldPartialApp_5569_);
v___x_5671_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5671_, 0, v___x_5669_);
lean_ctor_set(v___x_5671_, 1, v___x_5670_);
v___x_5672_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5672_, 0, v___x_5671_);
lean_ctor_set_uint8(v___x_5672_, sizeof(void*)*1, v___x_5582_);
v___x_5673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5673_, 0, v___x_5668_);
lean_ctor_set(v___x_5673_, 1, v___x_5672_);
v___x_5674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5674_, 0, v___x_5673_);
lean_ctor_set(v___x_5674_, 1, v___x_5585_);
v___x_5675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5675_, 0, v___x_5674_);
lean_ctor_set(v___x_5675_, 1, v___x_5587_);
v___x_5676_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_5677_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5677_, 0, v___x_5675_);
lean_ctor_set(v___x_5677_, 1, v___x_5676_);
v___x_5678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5678_, 0, v___x_5677_);
lean_ctor_set(v___x_5678_, 1, v___x_5576_);
v___x_5679_ = l_Bool_repr___redArg(v_zetaDelta_5570_);
v___x_5680_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5680_, 0, v___x_5611_);
lean_ctor_set(v___x_5680_, 1, v___x_5679_);
v___x_5681_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5681_, 0, v___x_5680_);
lean_ctor_set_uint8(v___x_5681_, sizeof(void*)*1, v___x_5582_);
v___x_5682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5682_, 0, v___x_5678_);
lean_ctor_set(v___x_5682_, 1, v___x_5681_);
v___x_5683_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5683_, 0, v___x_5682_);
lean_ctor_set(v___x_5683_, 1, v___x_5585_);
v___x_5684_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5684_, 0, v___x_5683_);
lean_ctor_set(v___x_5684_, 1, v___x_5587_);
v___x_5685_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_5686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5686_, 0, v___x_5684_);
lean_ctor_set(v___x_5686_, 1, v___x_5685_);
v___x_5687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5686_);
lean_ctor_set(v___x_5687_, 1, v___x_5576_);
v___x_5688_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_5689_ = l_Bool_repr___redArg(v_index_5571_);
v___x_5690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5690_, 0, v___x_5688_);
lean_ctor_set(v___x_5690_, 1, v___x_5689_);
v___x_5691_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5691_, 0, v___x_5690_);
lean_ctor_set_uint8(v___x_5691_, sizeof(void*)*1, v___x_5582_);
v___x_5692_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5692_, 0, v___x_5687_);
lean_ctor_set(v___x_5692_, 1, v___x_5691_);
v___x_5693_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5693_, 0, v___x_5692_);
lean_ctor_set(v___x_5693_, 1, v___x_5585_);
v___x_5694_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5694_, 0, v___x_5693_);
lean_ctor_set(v___x_5694_, 1, v___x_5587_);
v___x_5695_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_5696_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5696_, 0, v___x_5694_);
lean_ctor_set(v___x_5696_, 1, v___x_5695_);
v___x_5697_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5697_, 0, v___x_5696_);
lean_ctor_set(v___x_5697_, 1, v___x_5576_);
v___x_5698_ = l_Bool_repr___redArg(v_zetaUnused_5572_);
v___x_5699_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5699_, 0, v___x_5649_);
lean_ctor_set(v___x_5699_, 1, v___x_5698_);
v___x_5700_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5700_, 0, v___x_5699_);
lean_ctor_set_uint8(v___x_5700_, sizeof(void*)*1, v___x_5582_);
v___x_5701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5701_, 0, v___x_5697_);
lean_ctor_set(v___x_5701_, 1, v___x_5700_);
v___x_5702_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5702_, 0, v___x_5701_);
lean_ctor_set(v___x_5702_, 1, v___x_5585_);
v___x_5703_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5703_, 0, v___x_5702_);
lean_ctor_set(v___x_5703_, 1, v___x_5587_);
v___x_5704_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_5705_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5705_, 0, v___x_5703_);
lean_ctor_set(v___x_5705_, 1, v___x_5704_);
v___x_5706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5705_);
lean_ctor_set(v___x_5706_, 1, v___x_5576_);
v___x_5707_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5708_ = l_Bool_repr___redArg(v_zetaHave_5573_);
v___x_5709_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5709_, 0, v___x_5707_);
lean_ctor_set(v___x_5709_, 1, v___x_5708_);
v___x_5710_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5710_, 0, v___x_5709_);
lean_ctor_set_uint8(v___x_5710_, sizeof(void*)*1, v___x_5582_);
v___x_5711_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5711_, 0, v___x_5706_);
lean_ctor_set(v___x_5711_, 1, v___x_5710_);
v___x_5712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5712_, 0, v___x_5711_);
lean_ctor_set(v___x_5712_, 1, v___x_5585_);
v___x_5713_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5712_);
lean_ctor_set(v___x_5713_, 1, v___x_5587_);
v___x_5714_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_5715_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5713_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5716_, 0, v___x_5715_);
lean_ctor_set(v___x_5716_, 1, v___x_5576_);
v___x_5717_ = l_Bool_repr___redArg(v_locals_5574_);
v___x_5718_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5639_);
lean_ctor_set(v___x_5718_, 1, v___x_5717_);
v___x_5719_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5719_, 0, v___x_5718_);
lean_ctor_set_uint8(v___x_5719_, sizeof(void*)*1, v___x_5582_);
v___x_5720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5720_, 0, v___x_5716_);
lean_ctor_set(v___x_5720_, 1, v___x_5719_);
v___x_5721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5720_);
lean_ctor_set(v___x_5721_, 1, v___x_5585_);
v___x_5722_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5722_, 0, v___x_5721_);
lean_ctor_set(v___x_5722_, 1, v___x_5587_);
v___x_5723_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_5724_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5722_);
lean_ctor_set(v___x_5724_, 1, v___x_5723_);
v___x_5725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5725_, 0, v___x_5724_);
lean_ctor_set(v___x_5725_, 1, v___x_5576_);
v___x_5726_ = l_Bool_repr___redArg(v_instances_5575_);
v___x_5727_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5611_);
lean_ctor_set(v___x_5727_, 1, v___x_5726_);
v___x_5728_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5728_, 0, v___x_5727_);
lean_ctor_set_uint8(v___x_5728_, sizeof(void*)*1, v___x_5582_);
v___x_5729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5729_, 0, v___x_5725_);
lean_ctor_set(v___x_5729_, 1, v___x_5728_);
v___x_5730_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_5731_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_5732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5732_, 0, v___x_5731_);
lean_ctor_set(v___x_5732_, 1, v___x_5729_);
v___x_5733_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_5734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5734_, 0, v___x_5732_);
lean_ctor_set(v___x_5734_, 1, v___x_5733_);
v___x_5735_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5735_, 0, v___x_5730_);
lean_ctor_set(v___x_5735_, 1, v___x_5734_);
v___x_5736_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5736_, 0, v___x_5735_);
lean_ctor_set_uint8(v___x_5736_, sizeof(void*)*1, v___x_5582_);
return v___x_5736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object* v_x_5737_){
_start:
{
lean_object* v_res_5738_; 
v_res_5738_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5737_);
lean_dec_ref(v_x_5737_);
return v_res_5738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object* v_x_5739_, lean_object* v_prec_5740_){
_start:
{
lean_object* v___x_5741_; 
v___x_5741_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5739_);
return v___x_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object* v_x_5742_, lean_object* v_prec_5743_){
_start:
{
lean_object* v_res_5744_; 
v_res_5744_ = l_Lean_Meta_instReprConfig_repr(v_x_5742_, v_prec_5743_);
lean_dec(v_prec_5743_);
lean_dec_ref(v_x_5742_);
return v_res_5744_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object* v_x_5752_, lean_object* v_x_5753_){
_start:
{
if (lean_obj_tag(v_x_5752_) == 0)
{
lean_object* v___x_5754_; 
v___x_5754_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0));
return v___x_5754_;
}
else
{
lean_object* v_val_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5766_; 
v_val_5755_ = lean_ctor_get(v_x_5752_, 0);
v_isSharedCheck_5766_ = !lean_is_exclusive(v_x_5752_);
if (v_isSharedCheck_5766_ == 0)
{
v___x_5757_ = v_x_5752_;
v_isShared_5758_ = v_isSharedCheck_5766_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_val_5755_);
lean_dec(v_x_5752_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5766_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5762_; 
v___x_5759_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2));
v___x_5760_ = l_Nat_reprFast(v_val_5755_);
if (v_isShared_5758_ == 0)
{
lean_ctor_set_tag(v___x_5757_, 3);
lean_ctor_set(v___x_5757_, 0, v___x_5760_);
v___x_5762_ = v___x_5757_;
goto v_reusejp_5761_;
}
else
{
lean_object* v_reuseFailAlloc_5765_; 
v_reuseFailAlloc_5765_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5765_, 0, v___x_5760_);
v___x_5762_ = v_reuseFailAlloc_5765_;
goto v_reusejp_5761_;
}
v_reusejp_5761_:
{
lean_object* v___x_5763_; lean_object* v___x_5764_; 
v___x_5763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5763_, 0, v___x_5759_);
lean_ctor_set(v___x_5763_, 1, v___x_5762_);
v___x_5764_ = l_Repr_addAppParen(v___x_5763_, v_x_5753_);
return v___x_5764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object* v_x_5767_, lean_object* v_x_5768_){
_start:
{
lean_object* v_res_5769_; 
v_res_5769_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_x_5767_, v_x_5768_);
lean_dec(v_x_5768_);
return v_res_5769_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___x_5782_ = lean_unsigned_to_nat(21u);
v___x_5783_ = lean_nat_to_int(v___x_5782_);
return v___x_5783_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5790_; lean_object* v___x_5791_; 
v___x_5790_ = lean_unsigned_to_nat(11u);
v___x_5791_ = lean_nat_to_int(v___x_5790_);
return v___x_5791_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_5807_; lean_object* v___x_5808_; 
v___x_5807_ = lean_unsigned_to_nat(23u);
v___x_5808_ = lean_nat_to_int(v___x_5807_);
return v___x_5808_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_5812_; lean_object* v___x_5813_; 
v___x_5812_ = lean_unsigned_to_nat(16u);
v___x_5813_ = lean_nat_to_int(v___x_5812_);
return v___x_5813_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30(void){
_start:
{
lean_object* v___x_5820_; lean_object* v___x_5821_; 
v___x_5820_ = lean_unsigned_to_nat(15u);
v___x_5821_ = lean_nat_to_int(v___x_5820_);
return v___x_5821_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35(void){
_start:
{
lean_object* v___x_5828_; lean_object* v___x_5829_; 
v___x_5828_ = lean_unsigned_to_nat(17u);
v___x_5829_ = lean_nat_to_int(v___x_5828_);
return v___x_5829_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40(void){
_start:
{
lean_object* v___x_5836_; lean_object* v___x_5837_; 
v___x_5836_ = lean_unsigned_to_nat(18u);
v___x_5837_ = lean_nat_to_int(v___x_5836_);
return v___x_5837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object* v_x_5838_){
_start:
{
lean_object* v_maxSteps_5839_; lean_object* v_maxDischargeDepth_5840_; uint8_t v_contextual_5841_; uint8_t v_memoize_5842_; uint8_t v_singlePass_5843_; uint8_t v_zeta_5844_; uint8_t v_beta_5845_; uint8_t v_eta_5846_; uint8_t v_etaStruct_5847_; uint8_t v_iota_5848_; uint8_t v_proj_5849_; uint8_t v_decide_5850_; uint8_t v_arith_5851_; uint8_t v_autoUnfold_5852_; uint8_t v_dsimp_5853_; uint8_t v_failIfUnchanged_5854_; uint8_t v_ground_5855_; uint8_t v_unfoldPartialApp_5856_; uint8_t v_zetaDelta_5857_; uint8_t v_index_5858_; uint8_t v_implicitDefEqProofs_5859_; uint8_t v_zetaUnused_5860_; uint8_t v_catchRuntime_5861_; uint8_t v_zetaHave_5862_; uint8_t v_letToHave_5863_; uint8_t v_congrConsts_5864_; uint8_t v_bitVecOfNat_5865_; uint8_t v_warnExponents_5866_; uint8_t v_suggestions_5867_; lean_object* v_maxSuggestions_5868_; uint8_t v_locals_5869_; uint8_t v_instances_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; uint8_t v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; 
v_maxSteps_5839_ = lean_ctor_get(v_x_5838_, 0);
lean_inc(v_maxSteps_5839_);
v_maxDischargeDepth_5840_ = lean_ctor_get(v_x_5838_, 1);
lean_inc(v_maxDischargeDepth_5840_);
v_contextual_5841_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3);
v_memoize_5842_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 1);
v_singlePass_5843_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 2);
v_zeta_5844_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 3);
v_beta_5845_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 4);
v_eta_5846_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 5);
v_etaStruct_5847_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 6);
v_iota_5848_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 7);
v_proj_5849_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 8);
v_decide_5850_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 9);
v_arith_5851_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 10);
v_autoUnfold_5852_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 11);
v_dsimp_5853_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 12);
v_failIfUnchanged_5854_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 13);
v_ground_5855_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_5856_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 15);
v_zetaDelta_5857_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 16);
v_index_5858_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_5859_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 18);
v_zetaUnused_5860_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 19);
v_catchRuntime_5861_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 20);
v_zetaHave_5862_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 21);
v_letToHave_5863_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 22);
v_congrConsts_5864_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 23);
v_bitVecOfNat_5865_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 24);
v_warnExponents_5866_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 25);
v_suggestions_5867_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 26);
v_maxSuggestions_5868_ = lean_ctor_get(v_x_5838_, 2);
lean_inc(v_maxSuggestions_5868_);
v_locals_5869_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 27);
v_instances_5870_ = lean_ctor_get_uint8(v_x_5838_, sizeof(void*)*3 + 28);
lean_dec_ref(v_x_5838_);
v___x_5871_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5872_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3));
v___x_5873_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5874_ = l_Nat_reprFast(v_maxSteps_5839_);
v___x_5875_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5875_, 0, v___x_5874_);
v___x_5876_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5876_, 0, v___x_5873_);
lean_ctor_set(v___x_5876_, 1, v___x_5875_);
v___x_5877_ = 0;
v___x_5878_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5878_, 0, v___x_5876_);
lean_ctor_set_uint8(v___x_5878_, sizeof(void*)*1, v___x_5877_);
v___x_5879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5879_, 0, v___x_5872_);
lean_ctor_set(v___x_5879_, 1, v___x_5878_);
v___x_5880_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5881_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5881_, 0, v___x_5879_);
lean_ctor_set(v___x_5881_, 1, v___x_5880_);
v___x_5882_ = lean_box(1);
v___x_5883_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5883_, 0, v___x_5881_);
lean_ctor_set(v___x_5883_, 1, v___x_5882_);
v___x_5884_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5));
v___x_5885_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5885_, 0, v___x_5883_);
lean_ctor_set(v___x_5885_, 1, v___x_5884_);
v___x_5886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5886_, 0, v___x_5885_);
lean_ctor_set(v___x_5886_, 1, v___x_5871_);
v___x_5887_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6);
v___x_5888_ = l_Nat_reprFast(v_maxDischargeDepth_5840_);
v___x_5889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5889_, 0, v___x_5888_);
v___x_5890_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5887_);
lean_ctor_set(v___x_5890_, 1, v___x_5889_);
v___x_5891_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5891_, 0, v___x_5890_);
lean_ctor_set_uint8(v___x_5891_, sizeof(void*)*1, v___x_5877_);
v___x_5892_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5892_, 0, v___x_5886_);
lean_ctor_set(v___x_5892_, 1, v___x_5891_);
v___x_5893_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5892_);
lean_ctor_set(v___x_5893_, 1, v___x_5880_);
v___x_5894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5893_);
lean_ctor_set(v___x_5894_, 1, v___x_5882_);
v___x_5895_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8));
v___x_5896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5894_);
lean_ctor_set(v___x_5896_, 1, v___x_5895_);
v___x_5897_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5896_);
lean_ctor_set(v___x_5897_, 1, v___x_5871_);
v___x_5898_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5899_ = lean_unsigned_to_nat(0u);
v___x_5900_ = l_Bool_repr___redArg(v_contextual_5841_);
v___x_5901_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5901_, 0, v___x_5898_);
lean_ctor_set(v___x_5901_, 1, v___x_5900_);
v___x_5902_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5902_, 0, v___x_5901_);
lean_ctor_set_uint8(v___x_5902_, sizeof(void*)*1, v___x_5877_);
v___x_5903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5897_);
lean_ctor_set(v___x_5903_, 1, v___x_5902_);
v___x_5904_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5904_, 0, v___x_5903_);
lean_ctor_set(v___x_5904_, 1, v___x_5880_);
v___x_5905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5905_, 0, v___x_5904_);
lean_ctor_set(v___x_5905_, 1, v___x_5882_);
v___x_5906_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10));
v___x_5907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5907_, 0, v___x_5905_);
lean_ctor_set(v___x_5907_, 1, v___x_5906_);
v___x_5908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
lean_ctor_set(v___x_5908_, 1, v___x_5871_);
v___x_5909_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11);
v___x_5910_ = l_Bool_repr___redArg(v_memoize_5842_);
v___x_5911_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5911_, 0, v___x_5909_);
lean_ctor_set(v___x_5911_, 1, v___x_5910_);
v___x_5912_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5912_, 0, v___x_5911_);
lean_ctor_set_uint8(v___x_5912_, sizeof(void*)*1, v___x_5877_);
v___x_5913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5913_, 0, v___x_5908_);
lean_ctor_set(v___x_5913_, 1, v___x_5912_);
v___x_5914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5913_);
lean_ctor_set(v___x_5914_, 1, v___x_5880_);
v___x_5915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5915_, 0, v___x_5914_);
lean_ctor_set(v___x_5915_, 1, v___x_5882_);
v___x_5916_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13));
v___x_5917_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5917_, 0, v___x_5915_);
lean_ctor_set(v___x_5917_, 1, v___x_5916_);
v___x_5918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5918_, 0, v___x_5917_);
lean_ctor_set(v___x_5918_, 1, v___x_5871_);
v___x_5919_ = l_Bool_repr___redArg(v_singlePass_5843_);
v___x_5920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5920_, 0, v___x_5898_);
lean_ctor_set(v___x_5920_, 1, v___x_5919_);
v___x_5921_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5921_, 0, v___x_5920_);
lean_ctor_set_uint8(v___x_5921_, sizeof(void*)*1, v___x_5877_);
v___x_5922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5918_);
lean_ctor_set(v___x_5922_, 1, v___x_5921_);
v___x_5923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5922_);
lean_ctor_set(v___x_5923_, 1, v___x_5880_);
v___x_5924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5924_, 0, v___x_5923_);
lean_ctor_set(v___x_5924_, 1, v___x_5882_);
v___x_5925_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__1));
v___x_5926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5926_, 0, v___x_5924_);
lean_ctor_set(v___x_5926_, 1, v___x_5925_);
v___x_5927_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5927_, 0, v___x_5926_);
lean_ctor_set(v___x_5927_, 1, v___x_5871_);
v___x_5928_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5929_ = l_Bool_repr___redArg(v_zeta_5844_);
v___x_5930_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5928_);
lean_ctor_set(v___x_5930_, 1, v___x_5929_);
v___x_5931_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5931_, 0, v___x_5930_);
lean_ctor_set_uint8(v___x_5931_, sizeof(void*)*1, v___x_5877_);
v___x_5932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5932_, 0, v___x_5927_);
lean_ctor_set(v___x_5932_, 1, v___x_5931_);
v___x_5933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5933_, 0, v___x_5932_);
lean_ctor_set(v___x_5933_, 1, v___x_5880_);
v___x_5934_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5934_, 0, v___x_5933_);
lean_ctor_set(v___x_5934_, 1, v___x_5882_);
v___x_5935_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5936_, 0, v___x_5934_);
lean_ctor_set(v___x_5936_, 1, v___x_5935_);
v___x_5937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5936_);
lean_ctor_set(v___x_5937_, 1, v___x_5871_);
v___x_5938_ = l_Bool_repr___redArg(v_beta_5845_);
v___x_5939_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5928_);
lean_ctor_set(v___x_5939_, 1, v___x_5938_);
v___x_5940_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5940_, 0, v___x_5939_);
lean_ctor_set_uint8(v___x_5940_, sizeof(void*)*1, v___x_5877_);
v___x_5941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5937_);
lean_ctor_set(v___x_5941_, 1, v___x_5940_);
v___x_5942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5942_, 0, v___x_5941_);
lean_ctor_set(v___x_5942_, 1, v___x_5880_);
v___x_5943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5942_);
lean_ctor_set(v___x_5943_, 1, v___x_5882_);
v___x_5944_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5945_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5945_, 0, v___x_5943_);
lean_ctor_set(v___x_5945_, 1, v___x_5944_);
v___x_5946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
lean_ctor_set(v___x_5946_, 1, v___x_5871_);
v___x_5947_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5948_ = l_Bool_repr___redArg(v_eta_5846_);
v___x_5949_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5947_);
lean_ctor_set(v___x_5949_, 1, v___x_5948_);
v___x_5950_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5950_, 0, v___x_5949_);
lean_ctor_set_uint8(v___x_5950_, sizeof(void*)*1, v___x_5877_);
v___x_5951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5946_);
lean_ctor_set(v___x_5951_, 1, v___x_5950_);
v___x_5952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5952_, 0, v___x_5951_);
lean_ctor_set(v___x_5952_, 1, v___x_5880_);
v___x_5953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5953_, 0, v___x_5952_);
lean_ctor_set(v___x_5953_, 1, v___x_5882_);
v___x_5954_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5955_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5955_, 0, v___x_5953_);
lean_ctor_set(v___x_5955_, 1, v___x_5954_);
v___x_5956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5956_, 0, v___x_5955_);
lean_ctor_set(v___x_5956_, 1, v___x_5871_);
v___x_5957_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5958_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5847_, v___x_5899_);
v___x_5959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5959_, 0, v___x_5957_);
lean_ctor_set(v___x_5959_, 1, v___x_5958_);
v___x_5960_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5960_, 0, v___x_5959_);
lean_ctor_set_uint8(v___x_5960_, sizeof(void*)*1, v___x_5877_);
v___x_5961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5961_, 0, v___x_5956_);
lean_ctor_set(v___x_5961_, 1, v___x_5960_);
v___x_5962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5962_, 0, v___x_5961_);
lean_ctor_set(v___x_5962_, 1, v___x_5880_);
v___x_5963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5963_, 0, v___x_5962_);
lean_ctor_set(v___x_5963_, 1, v___x_5882_);
v___x_5964_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5965_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5965_, 0, v___x_5963_);
lean_ctor_set(v___x_5965_, 1, v___x_5964_);
v___x_5966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
lean_ctor_set(v___x_5966_, 1, v___x_5871_);
v___x_5967_ = l_Bool_repr___redArg(v_iota_5848_);
v___x_5968_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5968_, 0, v___x_5928_);
lean_ctor_set(v___x_5968_, 1, v___x_5967_);
v___x_5969_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5969_, 0, v___x_5968_);
lean_ctor_set_uint8(v___x_5969_, sizeof(void*)*1, v___x_5877_);
v___x_5970_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5970_, 0, v___x_5966_);
lean_ctor_set(v___x_5970_, 1, v___x_5969_);
v___x_5971_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5971_, 0, v___x_5970_);
lean_ctor_set(v___x_5971_, 1, v___x_5880_);
v___x_5972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5972_, 0, v___x_5971_);
lean_ctor_set(v___x_5972_, 1, v___x_5882_);
v___x_5973_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_5974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5972_);
lean_ctor_set(v___x_5974_, 1, v___x_5973_);
v___x_5975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5975_, 0, v___x_5974_);
lean_ctor_set(v___x_5975_, 1, v___x_5871_);
v___x_5976_ = l_Bool_repr___redArg(v_proj_5849_);
v___x_5977_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5977_, 0, v___x_5928_);
lean_ctor_set(v___x_5977_, 1, v___x_5976_);
v___x_5978_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5978_, 0, v___x_5977_);
lean_ctor_set_uint8(v___x_5978_, sizeof(void*)*1, v___x_5877_);
v___x_5979_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5979_, 0, v___x_5975_);
lean_ctor_set(v___x_5979_, 1, v___x_5978_);
v___x_5980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5979_);
lean_ctor_set(v___x_5980_, 1, v___x_5880_);
v___x_5981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5981_, 0, v___x_5980_);
lean_ctor_set(v___x_5981_, 1, v___x_5882_);
v___x_5982_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_5983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5983_, 0, v___x_5981_);
lean_ctor_set(v___x_5983_, 1, v___x_5982_);
v___x_5984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5984_, 0, v___x_5983_);
lean_ctor_set(v___x_5984_, 1, v___x_5871_);
v___x_5985_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_5986_ = l_Bool_repr___redArg(v_decide_5850_);
v___x_5987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5987_, 0, v___x_5985_);
lean_ctor_set(v___x_5987_, 1, v___x_5986_);
v___x_5988_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5988_, 0, v___x_5987_);
lean_ctor_set_uint8(v___x_5988_, sizeof(void*)*1, v___x_5877_);
v___x_5989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5989_, 0, v___x_5984_);
lean_ctor_set(v___x_5989_, 1, v___x_5988_);
v___x_5990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5990_, 0, v___x_5989_);
lean_ctor_set(v___x_5990_, 1, v___x_5880_);
v___x_5991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5991_, 0, v___x_5990_);
lean_ctor_set(v___x_5991_, 1, v___x_5882_);
v___x_5992_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15));
v___x_5993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5993_, 0, v___x_5991_);
lean_ctor_set(v___x_5993_, 1, v___x_5992_);
v___x_5994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5994_, 0, v___x_5993_);
lean_ctor_set(v___x_5994_, 1, v___x_5871_);
v___x_5995_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_5996_ = l_Bool_repr___redArg(v_arith_5851_);
v___x_5997_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5997_, 0, v___x_5995_);
lean_ctor_set(v___x_5997_, 1, v___x_5996_);
v___x_5998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5998_, 0, v___x_5997_);
lean_ctor_set_uint8(v___x_5998_, sizeof(void*)*1, v___x_5877_);
v___x_5999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5999_, 0, v___x_5994_);
lean_ctor_set(v___x_5999_, 1, v___x_5998_);
v___x_6000_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6000_, 0, v___x_5999_);
lean_ctor_set(v___x_6000_, 1, v___x_5880_);
v___x_6001_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6001_, 0, v___x_6000_);
lean_ctor_set(v___x_6001_, 1, v___x_5882_);
v___x_6002_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_6003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6003_, 0, v___x_6001_);
lean_ctor_set(v___x_6003_, 1, v___x_6002_);
v___x_6004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6003_);
lean_ctor_set(v___x_6004_, 1, v___x_5871_);
v___x_6005_ = l_Bool_repr___redArg(v_autoUnfold_5852_);
v___x_6006_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6006_, 0, v___x_5898_);
lean_ctor_set(v___x_6006_, 1, v___x_6005_);
v___x_6007_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6007_, 0, v___x_6006_);
lean_ctor_set_uint8(v___x_6007_, sizeof(void*)*1, v___x_5877_);
v___x_6008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6008_, 0, v___x_6004_);
lean_ctor_set(v___x_6008_, 1, v___x_6007_);
v___x_6009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6009_, 0, v___x_6008_);
lean_ctor_set(v___x_6009_, 1, v___x_5880_);
v___x_6010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6010_, 0, v___x_6009_);
lean_ctor_set(v___x_6010_, 1, v___x_5882_);
v___x_6011_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17));
v___x_6012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6012_, 0, v___x_6010_);
lean_ctor_set(v___x_6012_, 1, v___x_6011_);
v___x_6013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6013_, 0, v___x_6012_);
lean_ctor_set(v___x_6013_, 1, v___x_5871_);
v___x_6014_ = l_Bool_repr___redArg(v_dsimp_5853_);
v___x_6015_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6015_, 0, v___x_5995_);
lean_ctor_set(v___x_6015_, 1, v___x_6014_);
v___x_6016_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6016_, 0, v___x_6015_);
lean_ctor_set_uint8(v___x_6016_, sizeof(void*)*1, v___x_5877_);
v___x_6017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6017_, 0, v___x_6013_);
lean_ctor_set(v___x_6017_, 1, v___x_6016_);
v___x_6018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6017_);
lean_ctor_set(v___x_6018_, 1, v___x_5880_);
v___x_6019_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6018_);
lean_ctor_set(v___x_6019_, 1, v___x_5882_);
v___x_6020_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_6021_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6021_, 0, v___x_6019_);
lean_ctor_set(v___x_6021_, 1, v___x_6020_);
v___x_6022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6022_, 0, v___x_6021_);
lean_ctor_set(v___x_6022_, 1, v___x_5871_);
v___x_6023_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_6024_ = l_Bool_repr___redArg(v_failIfUnchanged_5854_);
v___x_6025_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6025_, 0, v___x_6023_);
lean_ctor_set(v___x_6025_, 1, v___x_6024_);
v___x_6026_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6026_, 0, v___x_6025_);
lean_ctor_set_uint8(v___x_6026_, sizeof(void*)*1, v___x_5877_);
v___x_6027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6027_, 0, v___x_6022_);
lean_ctor_set(v___x_6027_, 1, v___x_6026_);
v___x_6028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6028_, 0, v___x_6027_);
lean_ctor_set(v___x_6028_, 1, v___x_5880_);
v___x_6029_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6029_, 0, v___x_6028_);
lean_ctor_set(v___x_6029_, 1, v___x_5882_);
v___x_6030_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19));
v___x_6031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6031_, 0, v___x_6029_);
lean_ctor_set(v___x_6031_, 1, v___x_6030_);
v___x_6032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6031_);
lean_ctor_set(v___x_6032_, 1, v___x_5871_);
v___x_6033_ = l_Bool_repr___redArg(v_ground_5855_);
v___x_6034_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6034_, 0, v___x_5985_);
lean_ctor_set(v___x_6034_, 1, v___x_6033_);
v___x_6035_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6035_, 0, v___x_6034_);
lean_ctor_set_uint8(v___x_6035_, sizeof(void*)*1, v___x_5877_);
v___x_6036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6036_, 0, v___x_6032_);
lean_ctor_set(v___x_6036_, 1, v___x_6035_);
v___x_6037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6037_, 0, v___x_6036_);
lean_ctor_set(v___x_6037_, 1, v___x_5880_);
v___x_6038_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6038_, 0, v___x_6037_);
lean_ctor_set(v___x_6038_, 1, v___x_5882_);
v___x_6039_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_6040_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6040_, 0, v___x_6038_);
lean_ctor_set(v___x_6040_, 1, v___x_6039_);
v___x_6041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6041_, 0, v___x_6040_);
lean_ctor_set(v___x_6041_, 1, v___x_5871_);
v___x_6042_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_6043_ = l_Bool_repr___redArg(v_unfoldPartialApp_5856_);
v___x_6044_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6042_);
lean_ctor_set(v___x_6044_, 1, v___x_6043_);
v___x_6045_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6045_, 0, v___x_6044_);
lean_ctor_set_uint8(v___x_6045_, sizeof(void*)*1, v___x_5877_);
v___x_6046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6041_);
lean_ctor_set(v___x_6046_, 1, v___x_6045_);
v___x_6047_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6047_, 0, v___x_6046_);
lean_ctor_set(v___x_6047_, 1, v___x_5880_);
v___x_6048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6048_, 0, v___x_6047_);
lean_ctor_set(v___x_6048_, 1, v___x_5882_);
v___x_6049_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_6050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6050_, 0, v___x_6048_);
lean_ctor_set(v___x_6050_, 1, v___x_6049_);
v___x_6051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6051_, 0, v___x_6050_);
lean_ctor_set(v___x_6051_, 1, v___x_5871_);
v___x_6052_ = l_Bool_repr___redArg(v_zetaDelta_5857_);
v___x_6053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6053_, 0, v___x_5957_);
lean_ctor_set(v___x_6053_, 1, v___x_6052_);
v___x_6054_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6054_, 0, v___x_6053_);
lean_ctor_set_uint8(v___x_6054_, sizeof(void*)*1, v___x_5877_);
v___x_6055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6055_, 0, v___x_6051_);
lean_ctor_set(v___x_6055_, 1, v___x_6054_);
v___x_6056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6056_, 0, v___x_6055_);
lean_ctor_set(v___x_6056_, 1, v___x_5880_);
v___x_6057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6057_, 0, v___x_6056_);
lean_ctor_set(v___x_6057_, 1, v___x_5882_);
v___x_6058_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_6059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6059_, 0, v___x_6057_);
lean_ctor_set(v___x_6059_, 1, v___x_6058_);
v___x_6060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6060_, 0, v___x_6059_);
lean_ctor_set(v___x_6060_, 1, v___x_5871_);
v___x_6061_ = l_Bool_repr___redArg(v_index_5858_);
v___x_6062_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6062_, 0, v___x_5995_);
lean_ctor_set(v___x_6062_, 1, v___x_6061_);
v___x_6063_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6063_, 0, v___x_6062_);
lean_ctor_set_uint8(v___x_6063_, sizeof(void*)*1, v___x_5877_);
v___x_6064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6064_, 0, v___x_6060_);
lean_ctor_set(v___x_6064_, 1, v___x_6063_);
v___x_6065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6065_, 0, v___x_6064_);
lean_ctor_set(v___x_6065_, 1, v___x_5880_);
v___x_6066_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6065_);
lean_ctor_set(v___x_6066_, 1, v___x_5882_);
v___x_6067_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21));
v___x_6068_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6068_, 0, v___x_6066_);
lean_ctor_set(v___x_6068_, 1, v___x_6067_);
v___x_6069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6069_, 0, v___x_6068_);
lean_ctor_set(v___x_6069_, 1, v___x_5871_);
v___x_6070_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22);
v___x_6071_ = l_Bool_repr___redArg(v_implicitDefEqProofs_5859_);
v___x_6072_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6072_, 0, v___x_6070_);
lean_ctor_set(v___x_6072_, 1, v___x_6071_);
v___x_6073_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6073_, 0, v___x_6072_);
lean_ctor_set_uint8(v___x_6073_, sizeof(void*)*1, v___x_5877_);
v___x_6074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6074_, 0, v___x_6069_);
lean_ctor_set(v___x_6074_, 1, v___x_6073_);
v___x_6075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6075_, 0, v___x_6074_);
lean_ctor_set(v___x_6075_, 1, v___x_5880_);
v___x_6076_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6076_, 0, v___x_6075_);
lean_ctor_set(v___x_6076_, 1, v___x_5882_);
v___x_6077_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_6078_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6078_, 0, v___x_6076_);
lean_ctor_set(v___x_6078_, 1, v___x_6077_);
v___x_6079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6079_, 0, v___x_6078_);
lean_ctor_set(v___x_6079_, 1, v___x_5871_);
v___x_6080_ = l_Bool_repr___redArg(v_zetaUnused_5860_);
v___x_6081_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6081_, 0, v___x_5898_);
lean_ctor_set(v___x_6081_, 1, v___x_6080_);
v___x_6082_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6082_, 0, v___x_6081_);
lean_ctor_set_uint8(v___x_6082_, sizeof(void*)*1, v___x_5877_);
v___x_6083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6079_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6084_, 0, v___x_6083_);
lean_ctor_set(v___x_6084_, 1, v___x_5880_);
v___x_6085_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6085_, 0, v___x_6084_);
lean_ctor_set(v___x_6085_, 1, v___x_5882_);
v___x_6086_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24));
v___x_6087_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6087_, 0, v___x_6085_);
lean_ctor_set(v___x_6087_, 1, v___x_6086_);
v___x_6088_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6088_, 0, v___x_6087_);
lean_ctor_set(v___x_6088_, 1, v___x_5871_);
v___x_6089_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25);
v___x_6090_ = l_Bool_repr___redArg(v_catchRuntime_5861_);
v___x_6091_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6091_, 0, v___x_6089_);
lean_ctor_set(v___x_6091_, 1, v___x_6090_);
v___x_6092_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6092_, 0, v___x_6091_);
lean_ctor_set_uint8(v___x_6092_, sizeof(void*)*1, v___x_5877_);
v___x_6093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6093_, 0, v___x_6088_);
lean_ctor_set(v___x_6093_, 1, v___x_6092_);
v___x_6094_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6094_, 0, v___x_6093_);
lean_ctor_set(v___x_6094_, 1, v___x_5880_);
v___x_6095_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6094_);
lean_ctor_set(v___x_6095_, 1, v___x_5882_);
v___x_6096_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_6097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6097_, 0, v___x_6095_);
lean_ctor_set(v___x_6097_, 1, v___x_6096_);
v___x_6098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6097_);
lean_ctor_set(v___x_6098_, 1, v___x_5871_);
v___x_6099_ = l_Bool_repr___redArg(v_zetaHave_5862_);
v___x_6100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6100_, 0, v___x_5873_);
lean_ctor_set(v___x_6100_, 1, v___x_6099_);
v___x_6101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6101_, 0, v___x_6100_);
lean_ctor_set_uint8(v___x_6101_, sizeof(void*)*1, v___x_5877_);
v___x_6102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6102_, 0, v___x_6098_);
lean_ctor_set(v___x_6102_, 1, v___x_6101_);
v___x_6103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6103_, 0, v___x_6102_);
lean_ctor_set(v___x_6103_, 1, v___x_5880_);
v___x_6104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6104_, 0, v___x_6103_);
lean_ctor_set(v___x_6104_, 1, v___x_5882_);
v___x_6105_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27));
v___x_6106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6106_, 0, v___x_6104_);
lean_ctor_set(v___x_6106_, 1, v___x_6105_);
v___x_6107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6106_);
lean_ctor_set(v___x_6107_, 1, v___x_5871_);
v___x_6108_ = l_Bool_repr___redArg(v_letToHave_5863_);
v___x_6109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6109_, 0, v___x_5957_);
lean_ctor_set(v___x_6109_, 1, v___x_6108_);
v___x_6110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6110_, 0, v___x_6109_);
lean_ctor_set_uint8(v___x_6110_, sizeof(void*)*1, v___x_5877_);
v___x_6111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6111_, 0, v___x_6107_);
lean_ctor_set(v___x_6111_, 1, v___x_6110_);
v___x_6112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6111_);
lean_ctor_set(v___x_6112_, 1, v___x_5880_);
v___x_6113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6113_, 0, v___x_6112_);
lean_ctor_set(v___x_6113_, 1, v___x_5882_);
v___x_6114_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29));
v___x_6115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6115_, 0, v___x_6113_);
lean_ctor_set(v___x_6115_, 1, v___x_6114_);
v___x_6116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6116_, 0, v___x_6115_);
lean_ctor_set(v___x_6116_, 1, v___x_5871_);
v___x_6117_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30);
v___x_6118_ = l_Bool_repr___redArg(v_congrConsts_5864_);
v___x_6119_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6119_, 0, v___x_6117_);
lean_ctor_set(v___x_6119_, 1, v___x_6118_);
v___x_6120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6120_, 0, v___x_6119_);
lean_ctor_set_uint8(v___x_6120_, sizeof(void*)*1, v___x_5877_);
v___x_6121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6116_);
lean_ctor_set(v___x_6121_, 1, v___x_6120_);
v___x_6122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6122_, 0, v___x_6121_);
lean_ctor_set(v___x_6122_, 1, v___x_5880_);
v___x_6123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6123_, 0, v___x_6122_);
lean_ctor_set(v___x_6123_, 1, v___x_5882_);
v___x_6124_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32));
v___x_6125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6125_, 0, v___x_6123_);
lean_ctor_set(v___x_6125_, 1, v___x_6124_);
v___x_6126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6126_, 0, v___x_6125_);
lean_ctor_set(v___x_6126_, 1, v___x_5871_);
v___x_6127_ = l_Bool_repr___redArg(v_bitVecOfNat_5865_);
v___x_6128_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6128_, 0, v___x_6117_);
lean_ctor_set(v___x_6128_, 1, v___x_6127_);
v___x_6129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6129_, 0, v___x_6128_);
lean_ctor_set_uint8(v___x_6129_, sizeof(void*)*1, v___x_5877_);
v___x_6130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6130_, 0, v___x_6126_);
lean_ctor_set(v___x_6130_, 1, v___x_6129_);
v___x_6131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6130_);
lean_ctor_set(v___x_6131_, 1, v___x_5880_);
v___x_6132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6132_, 0, v___x_6131_);
lean_ctor_set(v___x_6132_, 1, v___x_5882_);
v___x_6133_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34));
v___x_6134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6134_, 0, v___x_6132_);
lean_ctor_set(v___x_6134_, 1, v___x_6133_);
v___x_6135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6135_, 0, v___x_6134_);
lean_ctor_set(v___x_6135_, 1, v___x_5871_);
v___x_6136_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35);
v___x_6137_ = l_Bool_repr___redArg(v_warnExponents_5866_);
v___x_6138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6138_, 0, v___x_6136_);
lean_ctor_set(v___x_6138_, 1, v___x_6137_);
v___x_6139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6139_, 0, v___x_6138_);
lean_ctor_set_uint8(v___x_6139_, sizeof(void*)*1, v___x_5877_);
v___x_6140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6135_);
lean_ctor_set(v___x_6140_, 1, v___x_6139_);
v___x_6141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6141_, 0, v___x_6140_);
lean_ctor_set(v___x_6141_, 1, v___x_5880_);
v___x_6142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6142_, 0, v___x_6141_);
lean_ctor_set(v___x_6142_, 1, v___x_5882_);
v___x_6143_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37));
v___x_6144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6144_, 0, v___x_6142_);
lean_ctor_set(v___x_6144_, 1, v___x_6143_);
v___x_6145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6144_);
lean_ctor_set(v___x_6145_, 1, v___x_5871_);
v___x_6146_ = l_Bool_repr___redArg(v_suggestions_5867_);
v___x_6147_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6147_, 0, v___x_6117_);
lean_ctor_set(v___x_6147_, 1, v___x_6146_);
v___x_6148_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6148_, 0, v___x_6147_);
lean_ctor_set_uint8(v___x_6148_, sizeof(void*)*1, v___x_5877_);
v___x_6149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6145_);
lean_ctor_set(v___x_6149_, 1, v___x_6148_);
v___x_6150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6150_, 0, v___x_6149_);
lean_ctor_set(v___x_6150_, 1, v___x_5880_);
v___x_6151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6151_, 0, v___x_6150_);
lean_ctor_set(v___x_6151_, 1, v___x_5882_);
v___x_6152_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39));
v___x_6153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6153_, 0, v___x_6151_);
lean_ctor_set(v___x_6153_, 1, v___x_6152_);
v___x_6154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6154_, 0, v___x_6153_);
lean_ctor_set(v___x_6154_, 1, v___x_5871_);
v___x_6155_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40);
v___x_6156_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_maxSuggestions_5868_, v___x_5899_);
v___x_6157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6157_, 0, v___x_6155_);
lean_ctor_set(v___x_6157_, 1, v___x_6156_);
v___x_6158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6158_, 0, v___x_6157_);
lean_ctor_set_uint8(v___x_6158_, sizeof(void*)*1, v___x_5877_);
v___x_6159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6154_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
v___x_6160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6160_, 0, v___x_6159_);
lean_ctor_set(v___x_6160_, 1, v___x_5880_);
v___x_6161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6161_, 0, v___x_6160_);
lean_ctor_set(v___x_6161_, 1, v___x_5882_);
v___x_6162_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_6163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6163_, 0, v___x_6161_);
lean_ctor_set(v___x_6163_, 1, v___x_6162_);
v___x_6164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6164_, 0, v___x_6163_);
lean_ctor_set(v___x_6164_, 1, v___x_5871_);
v___x_6165_ = l_Bool_repr___redArg(v_locals_5869_);
v___x_6166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6166_, 0, v___x_5985_);
lean_ctor_set(v___x_6166_, 1, v___x_6165_);
v___x_6167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6167_, 0, v___x_6166_);
lean_ctor_set_uint8(v___x_6167_, sizeof(void*)*1, v___x_5877_);
v___x_6168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6168_, 0, v___x_6164_);
lean_ctor_set(v___x_6168_, 1, v___x_6167_);
v___x_6169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6169_, 0, v___x_6168_);
lean_ctor_set(v___x_6169_, 1, v___x_5880_);
v___x_6170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6170_, 0, v___x_6169_);
lean_ctor_set(v___x_6170_, 1, v___x_5882_);
v___x_6171_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_6172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6170_);
lean_ctor_set(v___x_6172_, 1, v___x_6171_);
v___x_6173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6173_, 0, v___x_6172_);
lean_ctor_set(v___x_6173_, 1, v___x_5871_);
v___x_6174_ = l_Bool_repr___redArg(v_instances_5870_);
v___x_6175_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6175_, 0, v___x_5957_);
lean_ctor_set(v___x_6175_, 1, v___x_6174_);
v___x_6176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6176_, 0, v___x_6175_);
lean_ctor_set_uint8(v___x_6176_, sizeof(void*)*1, v___x_5877_);
v___x_6177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6177_, 0, v___x_6173_);
lean_ctor_set(v___x_6177_, 1, v___x_6176_);
v___x_6178_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_6179_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_6180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6180_, 0, v___x_6179_);
lean_ctor_set(v___x_6180_, 1, v___x_6177_);
v___x_6181_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_6182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6182_, 0, v___x_6180_);
lean_ctor_set(v___x_6182_, 1, v___x_6181_);
v___x_6183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6183_, 0, v___x_6178_);
lean_ctor_set(v___x_6183_, 1, v___x_6182_);
v___x_6184_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6184_, 0, v___x_6183_);
lean_ctor_set_uint8(v___x_6184_, sizeof(void*)*1, v___x_5877_);
return v___x_6184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object* v_x_6185_, lean_object* v_prec_6186_){
_start:
{
lean_object* v___x_6187_; 
v___x_6187_ = l_Lean_Meta_instReprConfig__1_repr___redArg(v_x_6185_);
return v___x_6187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object* v_x_6188_, lean_object* v_prec_6189_){
_start:
{
lean_object* v_res_6190_; 
v_res_6190_ = l_Lean_Meta_instReprConfig__1_repr(v_x_6188_, v_prec_6189_);
lean_dec(v_prec_6189_);
return v_res_6190_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object* v_a_6193_, lean_object* v_x_6194_){
_start:
{
if (lean_obj_tag(v_x_6194_) == 0)
{
uint8_t v___x_6195_; 
v___x_6195_ = 0;
return v___x_6195_;
}
else
{
lean_object* v_head_6196_; lean_object* v_tail_6197_; uint8_t v___x_6198_; 
v_head_6196_ = lean_ctor_get(v_x_6194_, 0);
v_tail_6197_ = lean_ctor_get(v_x_6194_, 1);
v___x_6198_ = lean_nat_dec_eq(v_a_6193_, v_head_6196_);
if (v___x_6198_ == 0)
{
v_x_6194_ = v_tail_6197_;
goto _start;
}
else
{
return v___x_6198_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object* v_a_6200_, lean_object* v_x_6201_){
_start:
{
uint8_t v_res_6202_; lean_object* v_r_6203_; 
v_res_6202_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_a_6200_, v_x_6201_);
lean_dec(v_x_6201_);
lean_dec(v_a_6200_);
v_r_6203_ = lean_box(v_res_6202_);
return v_r_6203_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object* v_x_6204_, lean_object* v_x_6205_){
_start:
{
switch(lean_obj_tag(v_x_6204_))
{
case 0:
{
uint8_t v___x_6206_; 
v___x_6206_ = 1;
return v___x_6206_;
}
case 1:
{
lean_object* v_idxs_6207_; uint8_t v___x_6208_; 
v_idxs_6207_ = lean_ctor_get(v_x_6204_, 0);
v___x_6208_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6205_, v_idxs_6207_);
return v___x_6208_;
}
default: 
{
lean_object* v_idxs_6209_; uint8_t v___x_6210_; 
v_idxs_6209_ = lean_ctor_get(v_x_6204_, 0);
v___x_6210_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6205_, v_idxs_6209_);
if (v___x_6210_ == 0)
{
uint8_t v___x_6211_; 
v___x_6211_ = 1;
return v___x_6211_;
}
else
{
uint8_t v___x_6212_; 
v___x_6212_ = 0;
return v___x_6212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object* v_x_6213_, lean_object* v_x_6214_){
_start:
{
uint8_t v_res_6215_; lean_object* v_r_6216_; 
v_res_6215_ = l_Lean_Meta_Occurrences_contains(v_x_6213_, v_x_6214_);
lean_dec(v_x_6214_);
lean_dec(v_x_6213_);
v_r_6216_ = lean_box(v_res_6215_);
return v_r_6216_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object* v_x_6217_){
_start:
{
if (lean_obj_tag(v_x_6217_) == 0)
{
uint8_t v___x_6218_; 
v___x_6218_ = 1;
return v___x_6218_;
}
else
{
uint8_t v___x_6219_; 
v___x_6219_ = 0;
return v___x_6219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object* v_x_6220_){
_start:
{
uint8_t v_res_6221_; lean_object* v_r_6222_; 
v_res_6221_ = l_Lean_Meta_Occurrences_isAll(v_x_6220_);
lean_dec(v_x_6220_);
v_r_6222_ = lean_box(v_res_6221_);
return v_r_6222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx(uint8_t v_x_6223_){
_start:
{
switch(v_x_6223_)
{
case 0:
{
lean_object* v___x_6224_; 
v___x_6224_ = lean_unsigned_to_nat(0u);
return v___x_6224_;
}
case 1:
{
lean_object* v___x_6225_; 
v___x_6225_ = lean_unsigned_to_nat(1u);
return v___x_6225_;
}
default: 
{
lean_object* v___x_6226_; 
v___x_6226_ = lean_unsigned_to_nat(2u);
return v___x_6226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___boxed(lean_object* v_x_6227_){
_start:
{
uint8_t v_x_boxed_6228_; lean_object* v_res_6229_; 
v_x_boxed_6228_ = lean_unbox(v_x_6227_);
v_res_6229_ = l_Lean_Meta_ApplyNewGoals_ctorIdx(v_x_boxed_6228_);
return v_res_6229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object* v_k_6230_){
_start:
{
lean_inc(v_k_6230_);
return v_k_6230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object* v_k_6231_){
_start:
{
lean_object* v_res_6232_; 
v_res_6232_ = l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(v_k_6231_);
lean_dec(v_k_6231_);
return v_res_6232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object* v_motive_6233_, lean_object* v_ctorIdx_6234_, uint8_t v_t_6235_, lean_object* v_h_6236_, lean_object* v_k_6237_){
_start:
{
lean_inc(v_k_6237_);
return v_k_6237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object* v_motive_6238_, lean_object* v_ctorIdx_6239_, lean_object* v_t_6240_, lean_object* v_h_6241_, lean_object* v_k_6242_){
_start:
{
uint8_t v_t_boxed_6243_; lean_object* v_res_6244_; 
v_t_boxed_6243_ = lean_unbox(v_t_6240_);
v_res_6244_ = l_Lean_Meta_ApplyNewGoals_ctorElim(v_motive_6238_, v_ctorIdx_6239_, v_t_boxed_6243_, v_h_6241_, v_k_6242_);
lean_dec(v_k_6242_);
lean_dec(v_ctorIdx_6239_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object* v_nonDependentFirst_6245_){
_start:
{
lean_inc(v_nonDependentFirst_6245_);
return v_nonDependentFirst_6245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object* v_nonDependentFirst_6246_){
_start:
{
lean_object* v_res_6247_; 
v_res_6247_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(v_nonDependentFirst_6246_);
lean_dec(v_nonDependentFirst_6246_);
return v_res_6247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object* v_motive_6248_, uint8_t v_t_6249_, lean_object* v_h_6250_, lean_object* v_nonDependentFirst_6251_){
_start:
{
lean_inc(v_nonDependentFirst_6251_);
return v_nonDependentFirst_6251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object* v_motive_6252_, lean_object* v_t_6253_, lean_object* v_h_6254_, lean_object* v_nonDependentFirst_6255_){
_start:
{
uint8_t v_t_boxed_6256_; lean_object* v_res_6257_; 
v_t_boxed_6256_ = lean_unbox(v_t_6253_);
v_res_6257_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(v_motive_6252_, v_t_boxed_6256_, v_h_6254_, v_nonDependentFirst_6255_);
lean_dec(v_nonDependentFirst_6255_);
return v_res_6257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object* v_nonDependentOnly_6258_){
_start:
{
lean_inc(v_nonDependentOnly_6258_);
return v_nonDependentOnly_6258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object* v_nonDependentOnly_6259_){
_start:
{
lean_object* v_res_6260_; 
v_res_6260_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(v_nonDependentOnly_6259_);
lean_dec(v_nonDependentOnly_6259_);
return v_res_6260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object* v_motive_6261_, uint8_t v_t_6262_, lean_object* v_h_6263_, lean_object* v_nonDependentOnly_6264_){
_start:
{
lean_inc(v_nonDependentOnly_6264_);
return v_nonDependentOnly_6264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object* v_motive_6265_, lean_object* v_t_6266_, lean_object* v_h_6267_, lean_object* v_nonDependentOnly_6268_){
_start:
{
uint8_t v_t_boxed_6269_; lean_object* v_res_6270_; 
v_t_boxed_6269_ = lean_unbox(v_t_6266_);
v_res_6270_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(v_motive_6265_, v_t_boxed_6269_, v_h_6267_, v_nonDependentOnly_6268_);
lean_dec(v_nonDependentOnly_6268_);
return v_res_6270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object* v_all_6271_){
_start:
{
lean_inc(v_all_6271_);
return v_all_6271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object* v_all_6272_){
_start:
{
lean_object* v_res_6273_; 
v_res_6273_ = l_Lean_Meta_ApplyNewGoals_all_elim___redArg(v_all_6272_);
lean_dec(v_all_6272_);
return v_res_6273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object* v_motive_6274_, uint8_t v_t_6275_, lean_object* v_h_6276_, lean_object* v_all_6277_){
_start:
{
lean_inc(v_all_6277_);
return v_all_6277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object* v_motive_6278_, lean_object* v_t_6279_, lean_object* v_h_6280_, lean_object* v_all_6281_){
_start:
{
uint8_t v_t_boxed_6282_; lean_object* v_res_6283_; 
v_t_boxed_6282_ = lean_unbox(v_t_6279_);
v_res_6283_ = l_Lean_Meta_ApplyNewGoals_all_elim(v_motive_6278_, v_t_boxed_6282_, v_h_6280_, v_all_6281_);
lean_dec(v_all_6281_);
return v_res_6283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object* v_c_6297_){
_start:
{
lean_object* v___x_6298_; uint8_t v___x_6299_; 
v___x_6298_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v_c_6297_);
v___x_6299_ = l_Lean_Syntax_isOfKind(v_c_6297_, v___x_6298_);
if (v___x_6299_ == 0)
{
lean_object* v___x_6300_; uint8_t v___x_6301_; 
v___x_6300_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
lean_inc(v_c_6297_);
v___x_6301_ = l_Lean_Syntax_isOfKind(v_c_6297_, v___x_6300_);
if (v___x_6301_ == 0)
{
lean_object* v___x_6302_; uint8_t v___x_6303_; 
v___x_6302_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__4));
lean_inc(v_c_6297_);
v___x_6303_ = l_Lean_Syntax_isOfKind(v_c_6297_, v___x_6302_);
if (v___x_6303_ == 0)
{
lean_object* v___x_6304_; 
lean_dec(v_c_6297_);
v___x_6304_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
return v___x_6304_;
}
else
{
lean_object* v___x_6305_; lean_object* v___x_6306_; lean_object* v___x_6307_; 
v___x_6305_ = lean_unsigned_to_nat(1u);
v___x_6306_ = lean_mk_empty_array_with_capacity(v___x_6305_);
v___x_6307_ = lean_array_push(v___x_6306_, v_c_6297_);
return v___x_6307_;
}
}
else
{
lean_object* v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; 
v___x_6308_ = lean_unsigned_to_nat(0u);
v___x_6309_ = l_Lean_Syntax_getArg(v_c_6297_, v___x_6308_);
lean_dec(v_c_6297_);
v___x_6310_ = l_Lean_Syntax_getArgs(v___x_6309_);
lean_dec(v___x_6309_);
v___x_6311_ = l_unsafeCast___redArg(v___x_6310_);
lean_dec_ref(v___x_6310_);
return v___x_6311_;
}
}
else
{
lean_object* v___x_6312_; lean_object* v___x_6313_; lean_object* v___x_6314_; lean_object* v___x_6315_; uint8_t v___x_6316_; 
v___x_6312_ = l_Lean_Syntax_getArgs(v_c_6297_);
lean_dec(v_c_6297_);
v___x_6313_ = lean_unsigned_to_nat(0u);
v___x_6314_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_6315_ = lean_array_get_size(v___x_6312_);
v___x_6316_ = lean_nat_dec_lt(v___x_6313_, v___x_6315_);
if (v___x_6316_ == 0)
{
lean_dec_ref(v___x_6312_);
return v___x_6314_;
}
else
{
size_t v___x_6317_; size_t v___x_6318_; lean_object* v___x_6319_; 
v___x_6317_ = ((size_t)0ULL);
v___x_6318_ = lean_usize_of_nat(v___x_6315_);
v___x_6319_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v___x_6312_, v___x_6317_, v___x_6318_, v___x_6314_);
lean_dec_ref(v___x_6312_);
return v___x_6319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object* v_as_6320_, size_t v_i_6321_, size_t v_stop_6322_, lean_object* v_b_6323_){
_start:
{
uint8_t v___x_6324_; 
v___x_6324_ = lean_usize_dec_eq(v_i_6321_, v_stop_6322_);
if (v___x_6324_ == 0)
{
lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; size_t v___x_6328_; size_t v___x_6329_; 
v___x_6325_ = lean_array_uget_borrowed(v_as_6320_, v_i_6321_);
lean_inc(v___x_6325_);
v___x_6326_ = l_Lean_Parser_Tactic_getConfigItems(v___x_6325_);
v___x_6327_ = l_Array_append___redArg(v_b_6323_, v___x_6326_);
lean_dec_ref(v___x_6326_);
v___x_6328_ = ((size_t)1ULL);
v___x_6329_ = lean_usize_add(v_i_6321_, v___x_6328_);
v_i_6321_ = v___x_6329_;
v_b_6323_ = v___x_6327_;
goto _start;
}
else
{
return v_b_6323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object* v_as_6331_, lean_object* v_i_6332_, lean_object* v_stop_6333_, lean_object* v_b_6334_){
_start:
{
size_t v_i_boxed_6335_; size_t v_stop_boxed_6336_; lean_object* v_res_6337_; 
v_i_boxed_6335_ = lean_unbox_usize(v_i_6332_);
lean_dec(v_i_6332_);
v_stop_boxed_6336_ = lean_unbox_usize(v_stop_6333_);
lean_dec(v_stop_6333_);
v_res_6337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v_as_6331_, v_i_boxed_6335_, v_stop_boxed_6336_, v_b_6334_);
lean_dec_ref(v_as_6331_);
return v_res_6337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object* v_items_6338_){
_start:
{
lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; 
v___x_6339_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
v___x_6340_ = lean_box(2);
v___x_6341_ = l_unsafeCast___redArg(v_items_6338_);
v___x_6342_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_6343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6343_, 0, v___x_6340_);
lean_ctor_set(v___x_6343_, 1, v___x_6342_);
lean_ctor_set(v___x_6343_, 2, v___x_6341_);
v___x_6344_ = l_Lean_Syntax_node1(v___x_6340_, v___x_6339_, v___x_6343_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig___boxed(lean_object* v_items_6345_){
_start:
{
lean_object* v_res_6346_; 
v_res_6346_ = l_Lean_Parser_Tactic_mkOptConfig(v_items_6345_);
lean_dec_ref(v_items_6345_);
return v_res_6346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object* v_cfg_6347_, lean_object* v_cfg_x27_6348_){
_start:
{
lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; 
v___x_6349_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_6347_);
v___x_6350_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_x27_6348_);
v___x_6351_ = l_Array_append___redArg(v___x_6349_, v___x_6350_);
lean_dec_ref(v___x_6350_);
v___x_6352_ = l_Lean_Parser_Tactic_mkOptConfig(v___x_6351_);
lean_dec_ref(v___x_6351_);
return v___x_6352_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_version_major = _init_l_Lean_version_major();
lean_mark_persistent(l_Lean_version_major);
l_Lean_version_minor = _init_l_Lean_version_minor();
lean_mark_persistent(l_Lean_version_minor);
l_Lean_version_patch = _init_l_Lean_version_patch();
lean_mark_persistent(l_Lean_version_patch);
l_Lean_githash = _init_l_Lean_githash();
lean_mark_persistent(l_Lean_githash);
l_Lean_version_isRelease = _init_l_Lean_version_isRelease();
l_Lean_version_specialDesc = _init_l_Lean_version_specialDesc();
lean_mark_persistent(l_Lean_version_specialDesc);
l_Lean_versionStringCore = _init_l_Lean_versionStringCore();
lean_mark_persistent(l_Lean_versionStringCore);
l_Lean_versionString = _init_l_Lean_versionString();
lean_mark_persistent(l_Lean_versionString);
l_Lean_toolchain = _init_l_Lean_toolchain();
lean_mark_persistent(l_Lean_toolchain);
l_Lean_idBeginEscape = _init_l_Lean_idBeginEscape();
l_Lean_idEndEscape = _init_l_Lean_idEndEscape();
l_Lean_Syntax_decodeQuotedChar___boxed__const__1 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__1);
l_Lean_Syntax_decodeQuotedChar___boxed__const__2 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__2);
l_Lean_Syntax_decodeQuotedChar___boxed__const__3 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__3);
l_Lean_Syntax_decodeQuotedChar___boxed__const__4 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__4);
l_Lean_Syntax_decodeQuotedChar___boxed__const__5 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__5);
l_Lean_Syntax_decodeQuotedChar___boxed__const__6 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__6);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2);
l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Meta_Defs(builtin);
}
#ifdef __cplusplus
}
#endif

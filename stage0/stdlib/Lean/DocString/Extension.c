// Lean compiler output
// Module: Lean.DocString.Extension
// Imports: public import Lean.DeclarationRange public import Lean.DocString.Types public import Lean.DocString.DeferredCheck public import Init.Data.String.Extra public import Init.Data.String.TakeDrop public import Init.Data.String.Search public import Init.Data.String.Length import Init.Omega
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_instReprDeclarationRange_repr___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Doc_instReprMathMode_repr(uint8_t, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRange_default;
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ElabInline.custom"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "(.mk "};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__2_value),((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " _)"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__7 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__7_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ElabInline.deferred"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__8 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__8_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__9 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__10 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabInline___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabInline___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabInline = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprElabBlock___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ElabBlock.custom"};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__2_value),((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__3_value;
static const lean_string_object l_Lean_instReprElabBlock___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ElabBlock.deferred"};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabBlock___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabBlock___closed__0 = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabBlock = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_deferred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_deferred(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedVersoDocString_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedVersoDocString_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedVersoDocString_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value),((lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedVersoDocString_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVersoDocString_default = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVersoDocString = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "doc"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "verso"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "whether to use Verso syntax in docstrings"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(237, 134, 110, 210, 89, 29, 102, 103)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "whether to use Verso syntax in module docstrings (falls back to `doc.verso` if not set)"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(228, 159, 139, 71, 221, 243, 206, 45)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso_module;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "docStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(220, 176, 252, 112, 223, 70, 141, 135)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_docStringExt;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Extension"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inheritDocStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__13_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__13_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__13_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoDocStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 29, 13, 95, 132, 33, 43, 178)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringExt;
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings();
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addDocStringCore___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_addDocStringCore___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__1;
static const lean_string_object l_Lean_addDocStringCore___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_addDocStringCore___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_addDocStringCore___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "invalid `[inherit_doc]` attribute, cycle detected"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "invalid `[inherit_doc]` attribute, declaration `"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` already has an `[inherit_doc]` attribute"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addInheritedDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addInheritedDocString___redArg___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_findInternalDocString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_findInternalDocString_x3f___closed__0 = (const lean_object*)&l_Lean_findInternalDocString_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_push___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moduleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getMainModuleDoc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getMainModuleDoc___closed__0;
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object*);
static lean_once_cell_t l_Lean_getModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__0 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___redArg___closed__1;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__2 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__3 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__4 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_isVersoDocComment___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__0_value_aux_0),((lean_object*)&l_Lean_getDocStringText___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__0_value_aux_1),((lean_object*)&l_Lean_getDocStringText___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__0_value_aux_2),((lean_object*)&l_Lean_getDocStringText___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_isVersoDocComment___closed__0 = (const lean_object*)&l_Lean_isVersoDocComment___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_isVersoDocComment(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isVersoDocComment___boxed(lean_object*);
static const lean_array_object l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.text"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.emph"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.bold"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.code"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.math"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Inline.linebreak"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.link"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Doc.Inline.footnote"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.image"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Doc.Inline.concat"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.other"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.para"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.code"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ul"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "contents"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object*);
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ol"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.dl"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "desc"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Block.blockquote"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Block.concat"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Block.other"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object*);
static const lean_string_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "titleString"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "metadata"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "subParts"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "sections"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "declarationRange"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_VersoModuleDocs_instReprSnippet = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object*);
static lean_once_cell_t l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snippets := "};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprVersoModuleDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprVersoModuleDocs___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value)} };
static const lean_object* l_Lean_instReprVersoModuleDocs___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprVersoModuleDocs = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Can't nest this snippet here"};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_add___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.DocString.Extension"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__0_value;
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.VersoModuleDocs.add!"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__1_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_add_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_add_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Can't close a section: none are open"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Invalid nesting: expected at most "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " but got "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Can't add content after sub-parts"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_VersoModuleDocs_assemble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value),((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value),((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_assemble___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_assemble___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_add_x21, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoModuleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object*);
static lean_once_cell_t l_Lean_getVersoModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getVersoModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Can't add - incorrect nesting "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__0 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__0_value;
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "(expected at most "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__1 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_ElabInline_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_val_8_; lean_object* v___x_9_; 
v_val_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_val_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_ElabInline_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_ElabInline_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim___redArg(lean_object* v_t_22_, lean_object* v_custom_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_ElabInline_ctorElim___redArg(v_t_22_, v_custom_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_custom_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_ElabInline_ctorElim___redArg(v_t_26_, v_custom_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim___redArg(lean_object* v_t_30_, lean_object* v_deferred_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_ElabInline_ctorElim___redArg(v_t_30_, v_deferred_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_deferred_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_ElabInline_ctorElim___redArg(v_t_34_, v_deferred_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object* v_v_59_, lean_object* v_x_60_){
_start:
{
if (lean_obj_tag(v_v_59_) == 0)
{
lean_object* v_val_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; 
v_val_61_ = lean_ctor_get(v_v_59_, 0);
lean_inc(v_val_61_);
lean_dec_ref_known(v_v_59_, 1);
v___x_62_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__5));
v___x_63_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_61_);
lean_dec(v_val_61_);
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = l_Lean_Name_reprPrec(v___x_63_, v___x_64_);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_62_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = 0;
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___x_69_);
return v___x_70_;
}
else
{
lean_object* v_index_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_83_; 
v_index_71_ = lean_ctor_get(v_v_59_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_v_59_);
if (v_isSharedCheck_83_ == 0)
{
v___x_73_ = v_v_59_;
v_isShared_74_ = v_isSharedCheck_83_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_index_71_);
lean_dec(v_v_59_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_83_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_75_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_76_ = l_Nat_reprFast(v_index_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 3);
lean_ctor_set(v___x_73_, 0, v___x_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_82_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_75_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = 0;
v___x_81_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*1, v___x_80_);
return v___x_81_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object* v_v_84_, lean_object* v_x_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_instReprElabInline___lam__0(v_v_84_, v_x_85_);
lean_dec(v_x_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx(lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
lean_object* v___x_90_; 
v___x_90_ = lean_unsigned_to_nat(0u);
return v___x_90_;
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_unsigned_to_nat(1u);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___boxed(lean_object* v_x_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_ElabBlock_ctorIdx(v_x_92_);
lean_dec_ref(v_x_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___redArg(lean_object* v_t_94_, lean_object* v_k_95_){
_start:
{
lean_object* v_val_96_; lean_object* v___x_97_; 
v_val_96_ = lean_ctor_get(v_t_94_, 0);
lean_inc(v_val_96_);
lean_dec_ref(v_t_94_);
v___x_97_ = lean_apply_1(v_k_95_, v_val_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim(lean_object* v_motive_98_, lean_object* v_ctorIdx_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_k_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_100_, v_k_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___boxed(lean_object* v_motive_104_, lean_object* v_ctorIdx_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_k_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_ElabBlock_ctorElim(v_motive_104_, v_ctorIdx_105_, v_t_106_, v_h_107_, v_k_108_);
lean_dec(v_ctorIdx_105_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim___redArg(lean_object* v_t_110_, lean_object* v_custom_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_110_, v_custom_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_custom_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_114_, v_custom_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim___redArg(lean_object* v_t_118_, lean_object* v_deferred_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_118_, v_deferred_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim(lean_object* v_motive_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_deferred_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_122_, v_deferred_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object* v_v_141_, lean_object* v_x_142_){
_start:
{
if (lean_obj_tag(v_v_141_) == 0)
{
lean_object* v_val_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; 
v_val_143_ = lean_ctor_get(v_v_141_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v_v_141_, 1);
v___x_144_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__3));
v___x_145_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_143_);
lean_dec(v_val_143_);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = l_Lean_Name_reprPrec(v___x_145_, v___x_146_);
v___x_148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_144_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = 0;
v___x_152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*1, v___x_151_);
return v___x_152_;
}
else
{
lean_object* v_index_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_165_; 
v_index_153_ = lean_ctor_get(v_v_141_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v_v_141_);
if (v_isSharedCheck_165_ == 0)
{
v___x_155_ = v_v_141_;
v_isShared_156_ = v_isSharedCheck_165_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_index_153_);
lean_dec(v_v_141_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_165_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_157_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__6));
v___x_158_ = l_Nat_reprFast(v_index_153_);
if (v_isShared_156_ == 0)
{
lean_ctor_set_tag(v___x_155_, 3);
lean_ctor_set(v___x_155_, 0, v___x_158_);
v___x_160_ = v___x_155_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_164_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = 0;
v___x_163_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*1, v___x_162_);
return v___x_163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object* v_v_166_, lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_instReprElabBlock___lam__0(v_v_166_, v_x_167_);
lean_dec(v_x_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg(lean_object* v_inst_171_, lean_object* v_val_172_, lean_object* v_content_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_171_, v_val_172_);
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
v___x_176_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v_content_173_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg___boxed(lean_object* v_inst_177_, lean_object* v_val_178_, lean_object* v_content_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Doc_Inline_custom___redArg(v_inst_177_, v_val_178_, v_content_179_);
lean_dec(v_val_178_);
lean_dec(v_inst_177_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom(lean_object* v_00_u03b1_181_, lean_object* v_inst_182_, lean_object* v_val_183_, lean_object* v_content_184_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_182_, v_val_183_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
v___x_187_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v_content_184_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___boxed(lean_object* v_00_u03b1_188_, lean_object* v_inst_189_, lean_object* v_val_190_, lean_object* v_content_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_Doc_Inline_custom(v_00_u03b1_188_, v_inst_189_, v_val_190_, v_content_191_);
lean_dec(v_val_190_);
lean_dec(v_inst_189_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_deferred(lean_object* v_index_193_, lean_object* v_content_194_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_195_, 0, v_index_193_);
v___x_196_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v_content_194_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg(lean_object* v_inst_197_, lean_object* v_val_198_, lean_object* v_content_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_197_, v_val_198_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
v___x_202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v_content_199_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg___boxed(lean_object* v_inst_203_, lean_object* v_val_204_, lean_object* v_content_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Doc_Block_custom___redArg(v_inst_203_, v_val_204_, v_content_205_);
lean_dec(v_val_204_);
lean_dec(v_inst_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom(lean_object* v_00_u03b1_207_, lean_object* v_inst_208_, lean_object* v_val_209_, lean_object* v_content_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_208_, v_val_209_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
v___x_213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v_content_210_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___boxed(lean_object* v_00_u03b1_214_, lean_object* v_inst_215_, lean_object* v_val_216_, lean_object* v_content_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Doc_Block_custom(v_00_u03b1_214_, v_inst_215_, v_val_216_, v_content_217_);
lean_dec(v_val_216_);
lean_dec(v_inst_215_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_deferred(lean_object* v_index_219_, lean_object* v_content_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_index_219_);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_content_220_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object* v_name_229_, lean_object* v_decl_230_, lean_object* v_ref_231_){
_start:
{
lean_object* v_defValue_233_; lean_object* v_descr_234_; lean_object* v_deprecation_x3f_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_defValue_233_ = lean_ctor_get(v_decl_230_, 0);
v_descr_234_ = lean_ctor_get(v_decl_230_, 1);
v_deprecation_x3f_235_ = lean_ctor_get(v_decl_230_, 2);
v___x_236_ = lean_alloc_ctor(1, 0, 1);
v___x_237_ = lean_unbox(v_defValue_233_);
lean_ctor_set_uint8(v___x_236_, 0, v___x_237_);
lean_inc(v_deprecation_x3f_235_);
lean_inc_ref(v_descr_234_);
lean_inc_n(v_name_229_, 2);
v___x_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_238_, 0, v_name_229_);
lean_ctor_set(v___x_238_, 1, v_ref_231_);
lean_ctor_set(v___x_238_, 2, v___x_236_);
lean_ctor_set(v___x_238_, 3, v_descr_234_);
lean_ctor_set(v___x_238_, 4, v_deprecation_x3f_235_);
v___x_239_ = lean_register_option(v_name_229_, v___x_238_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_247_; 
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v___x_239_, 0);
lean_dec(v_unused_248_);
v___x_241_ = v___x_239_;
v_isShared_242_ = v_isSharedCheck_247_;
goto v_resetjp_240_;
}
else
{
lean_dec(v___x_239_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_247_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; lean_object* v___x_245_; 
lean_inc(v_defValue_233_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v_name_229_);
lean_ctor_set(v___x_243_, 1, v_defValue_233_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___x_243_);
v___x_245_ = v___x_241_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec(v_name_229_);
v_a_249_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_239_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_239_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_257_, lean_object* v_decl_258_, lean_object* v_ref_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v_name_257_, v_decl_258_, v_ref_259_);
lean_dec_ref(v_decl_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_279_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_280_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_281_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_282_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_279_, v___x_280_, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_302_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_303_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_304_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_305_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_302_, v___x_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_box(1);
v___x_310_ = lean_st_mk_ref(v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_314_, lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 0)
{
lean_object* v_k_316_; lean_object* v_v_317_; lean_object* v_l_318_; lean_object* v_r_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_k_316_ = lean_ctor_get(v_x_315_, 1);
v_v_317_ = lean_ctor_get(v_x_315_, 2);
v_l_318_ = lean_ctor_get(v_x_315_, 3);
v_r_319_ = lean_ctor_get(v_x_315_, 4);
v___x_320_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_314_, v_l_318_);
lean_inc(v_v_317_);
lean_inc(v_k_316_);
v___x_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_321_, 0, v_k_316_);
lean_ctor_set(v___x_321_, 1, v_v_317_);
v___x_322_ = lean_array_push(v___x_320_, v___x_321_);
v_init_314_ = v___x_322_;
v_x_315_ = v_r_319_;
goto _start;
}
else
{
return v_init_314_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_324_, v_x_325_);
lean_dec(v_x_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(lean_object* v_x_331_, lean_object* v_s_332_){
_start:
{
lean_object* v___x_333_; lean_object* v_ents_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v_ents_334_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v___x_333_, v_s_332_);
v___x_335_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
lean_inc_ref(v_ents_334_);
v___x_336_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v_ents_334_);
lean_ctor_set(v___x_336_, 2, v_ents_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object* v_x_337_, lean_object* v_s_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(v_x_337_, v_s_338_);
lean_dec(v_s_338_);
lean_dec_ref(v_x_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___f_348_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_349_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_350_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_351_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_349_, v___x_350_, v___f_348_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(lean_object* v_init_354_, lean_object* v_t_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_354_, v_t_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_357_, lean_object* v_t_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(v_init_357_, v_t_358_);
lean_dec(v_t_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_360_, lean_object* v_x_361_){
_start:
{
if (lean_obj_tag(v_x_361_) == 0)
{
lean_object* v_k_362_; lean_object* v_v_363_; lean_object* v_l_364_; lean_object* v_r_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_k_362_ = lean_ctor_get(v_x_361_, 1);
v_v_363_ = lean_ctor_get(v_x_361_, 2);
v_l_364_ = lean_ctor_get(v_x_361_, 3);
v_r_365_ = lean_ctor_get(v_x_361_, 4);
v___x_366_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_360_, v_l_364_);
lean_inc(v_v_363_);
lean_inc(v_k_362_);
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v_k_362_);
lean_ctor_set(v___x_367_, 1, v_v_363_);
v___x_368_ = lean_array_push(v___x_366_, v___x_367_);
v_init_360_ = v___x_368_;
v_x_361_ = v_r_365_;
goto _start;
}
else
{
return v_init_360_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_370_, lean_object* v_x_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_370_, v_x_371_);
lean_dec(v_x_371_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(lean_object* v_x_377_, lean_object* v_s_378_){
_start:
{
lean_object* v___x_379_; lean_object* v_ents_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v_ents_380_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v___x_379_, v_s_378_);
v___x_381_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
lean_inc_ref(v_ents_380_);
v___x_382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v_ents_380_);
lean_ctor_set(v___x_382_, 2, v_ents_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object* v_x_383_, lean_object* v_s_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(v_x_383_, v_s_384_);
lean_dec(v_s_384_);
lean_dec_ref(v_x_383_);
return v_res_385_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_box(0);
v___x_388_ = l_unsafeCast___redArg(v___x_387_);
return v___x_388_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_391_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_392_ = l_Lean_Name_str___override(v___x_391_, v___x_390_);
return v___x_392_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_394_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_395_ = l_Lean_Name_str___override(v___x_394_, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_398_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_399_ = l_Lean_Name_str___override(v___x_398_, v___x_397_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_402_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_403_ = l_Lean_Name_str___override(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_406_ = l_Lean_Name_num___override(v___x_405_, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_408_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_409_ = l_Lean_Name_str___override(v___x_408_, v___x_407_);
return v___x_409_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_412_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_413_ = l_Lean_Name_str___override(v___x_412_, v___x_411_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___f_417_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_418_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_419_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__13_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_420_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_418_, v___x_419_, v___f_417_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(lean_object* v_init_423_, lean_object* v_t_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_423_, v_t_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_426_, lean_object* v_t_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(v_init_426_, v_t_427_);
lean_dec(v_t_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_box(1);
v___x_431_ = lean_st_mk_ref(v___x_430_);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_435_, lean_object* v_x_436_){
_start:
{
if (lean_obj_tag(v_x_436_) == 0)
{
lean_object* v_k_437_; lean_object* v_v_438_; lean_object* v_l_439_; lean_object* v_r_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_k_437_ = lean_ctor_get(v_x_436_, 1);
v_v_438_ = lean_ctor_get(v_x_436_, 2);
v_l_439_ = lean_ctor_get(v_x_436_, 3);
v_r_440_ = lean_ctor_get(v_x_436_, 4);
v___x_441_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_435_, v_l_439_);
lean_inc(v_v_438_);
lean_inc(v_k_437_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v_k_437_);
lean_ctor_set(v___x_442_, 1, v_v_438_);
v___x_443_ = lean_array_push(v___x_441_, v___x_442_);
v_init_435_ = v___x_443_;
v_x_436_ = v_r_440_;
goto _start;
}
else
{
return v_init_435_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_445_, lean_object* v_x_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_445_, v_x_446_);
lean_dec(v_x_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(lean_object* v_x_452_, lean_object* v_s_453_){
_start:
{
lean_object* v___x_454_; lean_object* v_ents_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_454_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v_ents_455_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v___x_454_, v_s_453_);
v___x_456_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
lean_inc_ref(v_ents_455_);
v___x_457_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v_ents_455_);
lean_ctor_set(v___x_457_, 2, v_ents_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object* v_x_458_, lean_object* v_s_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(v_x_458_, v_s_459_);
lean_dec(v_s_459_);
lean_dec_ref(v_x_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___f_467_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v___x_468_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v___x_469_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_470_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_468_, v___x_469_, v___f_467_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(lean_object* v_init_473_, lean_object* v_t_474_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_473_, v_t_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_476_, lean_object* v_t_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(v_init_476_, v_t_477_);
lean_dec(v_t_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object* v_declName_479_, lean_object* v_docString_480_){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_482_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_483_ = lean_st_ref_take(v___x_482_);
v___x_484_ = l_String_removeLeadingSpaces(v_docString_480_);
v___x_485_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_479_, v___x_484_, v___x_483_);
v___x_486_ = lean_st_ref_put(v___x_482_, v___x_485_);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object* v_declName_488_, lean_object* v_docString_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_addBuiltinDocString(v_declName_488_, v_docString_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object* v_k_492_, lean_object* v_t_493_){
_start:
{
if (lean_obj_tag(v_t_493_) == 0)
{
lean_object* v_k_494_; lean_object* v_v_495_; lean_object* v_l_496_; lean_object* v_r_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_1151_; 
v_k_494_ = lean_ctor_get(v_t_493_, 1);
v_v_495_ = lean_ctor_get(v_t_493_, 2);
v_l_496_ = lean_ctor_get(v_t_493_, 3);
v_r_497_ = lean_ctor_get(v_t_493_, 4);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_t_493_);
if (v_isSharedCheck_1151_ == 0)
{
lean_object* v_unused_1152_; 
v_unused_1152_ = lean_ctor_get(v_t_493_, 0);
lean_dec(v_unused_1152_);
v___x_499_ = v_t_493_;
v_isShared_500_ = v_isSharedCheck_1151_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_r_497_);
lean_inc(v_l_496_);
lean_inc(v_v_495_);
lean_inc(v_k_494_);
lean_dec(v_t_493_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_1151_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v___x_501_; 
v___x_501_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_492_, v_k_494_);
switch(v___x_501_)
{
case 0:
{
lean_object* v_impl_502_; lean_object* v___x_503_; 
v_impl_502_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_492_, v_l_496_);
v___x_503_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_502_) == 0)
{
if (lean_obj_tag(v_r_497_) == 0)
{
lean_object* v_size_504_; lean_object* v_size_505_; lean_object* v_k_506_; lean_object* v_v_507_; lean_object* v_l_508_; lean_object* v_r_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_size_504_ = lean_ctor_get(v_impl_502_, 0);
lean_inc(v_size_504_);
v_size_505_ = lean_ctor_get(v_r_497_, 0);
v_k_506_ = lean_ctor_get(v_r_497_, 1);
v_v_507_ = lean_ctor_get(v_r_497_, 2);
v_l_508_ = lean_ctor_get(v_r_497_, 3);
lean_inc(v_l_508_);
v_r_509_ = lean_ctor_get(v_r_497_, 4);
v___x_510_ = lean_unsigned_to_nat(3u);
v___x_511_ = lean_nat_mul(v___x_510_, v_size_504_);
v___x_512_ = lean_nat_dec_lt(v___x_511_, v_size_505_);
lean_dec(v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
lean_dec(v_l_508_);
v___x_513_ = lean_nat_add(v___x_503_, v_size_504_);
lean_dec(v_size_504_);
v___x_514_ = lean_nat_add(v___x_513_, v_size_505_);
lean_dec(v___x_513_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 3, v_impl_502_);
lean_ctor_set(v___x_499_, 0, v___x_514_);
v___x_516_ = v___x_499_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_517_, 4, v_r_497_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
else
{
lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_581_; 
lean_inc(v_r_509_);
lean_inc(v_v_507_);
lean_inc(v_k_506_);
lean_inc(v_size_505_);
v_isSharedCheck_581_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; lean_object* v_unused_583_; lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; 
v_unused_582_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_r_497_, 2);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_r_497_, 1);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_586_);
v___x_519_ = v_r_497_;
v_isShared_520_ = v_isSharedCheck_581_;
goto v_resetjp_518_;
}
else
{
lean_dec(v_r_497_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_581_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v_size_521_; lean_object* v_k_522_; lean_object* v_v_523_; lean_object* v_l_524_; lean_object* v_r_525_; lean_object* v_size_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v_size_521_ = lean_ctor_get(v_l_508_, 0);
v_k_522_ = lean_ctor_get(v_l_508_, 1);
v_v_523_ = lean_ctor_get(v_l_508_, 2);
v_l_524_ = lean_ctor_get(v_l_508_, 3);
v_r_525_ = lean_ctor_get(v_l_508_, 4);
v_size_526_ = lean_ctor_get(v_r_509_, 0);
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_nat_mul(v___x_527_, v_size_526_);
v___x_529_ = lean_nat_dec_lt(v_size_521_, v___x_528_);
lean_dec(v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_557_; 
lean_inc(v_r_525_);
lean_inc(v_l_524_);
lean_inc(v_v_523_);
lean_inc(v_k_522_);
v_isSharedCheck_557_ = !lean_is_exclusive(v_l_508_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; lean_object* v_unused_559_; lean_object* v_unused_560_; lean_object* v_unused_561_; lean_object* v_unused_562_; 
v_unused_558_ = lean_ctor_get(v_l_508_, 4);
lean_dec(v_unused_558_);
v_unused_559_ = lean_ctor_get(v_l_508_, 3);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_l_508_, 2);
lean_dec(v_unused_560_);
v_unused_561_ = lean_ctor_get(v_l_508_, 1);
lean_dec(v_unused_561_);
v_unused_562_ = lean_ctor_get(v_l_508_, 0);
lean_dec(v_unused_562_);
v___x_531_ = v_l_508_;
v_isShared_532_ = v_isSharedCheck_557_;
goto v_resetjp_530_;
}
else
{
lean_dec(v_l_508_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_557_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_547_; 
v___x_533_ = lean_nat_add(v___x_503_, v_size_504_);
lean_dec(v_size_504_);
v___x_534_ = lean_nat_add(v___x_533_, v_size_505_);
lean_dec(v_size_505_);
if (lean_obj_tag(v_l_524_) == 0)
{
lean_object* v_size_555_; 
v_size_555_ = lean_ctor_get(v_l_524_, 0);
lean_inc(v_size_555_);
v___y_547_ = v_size_555_;
goto v___jp_546_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_unsigned_to_nat(0u);
v___y_547_ = v___x_556_;
goto v___jp_546_;
}
v___jp_535_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = lean_nat_add(v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec(v___y_537_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 4, v_r_509_);
lean_ctor_set(v___x_531_, 3, v_r_525_);
lean_ctor_set(v___x_531_, 2, v_v_507_);
lean_ctor_set(v___x_531_, 1, v_k_506_);
lean_ctor_set(v___x_531_, 0, v___x_539_);
v___x_541_ = v___x_531_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_k_506_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_v_507_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v_r_525_);
lean_ctor_set(v_reuseFailAlloc_545_, 4, v_r_509_);
v___x_541_ = v_reuseFailAlloc_545_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 4, v___x_541_);
lean_ctor_set(v___x_519_, 3, v___y_536_);
lean_ctor_set(v___x_519_, 2, v_v_523_);
lean_ctor_set(v___x_519_, 1, v_k_522_);
lean_ctor_set(v___x_519_, 0, v___x_534_);
v___x_543_ = v___x_519_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_k_522_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_v_523_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v___y_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
v___jp_546_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_nat_add(v___x_533_, v___y_547_);
lean_dec(v___y_547_);
lean_dec(v___x_533_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_524_);
lean_ctor_set(v___x_499_, 3, v_impl_502_);
lean_ctor_set(v___x_499_, 0, v___x_548_);
v___x_550_ = v___x_499_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_l_524_);
v___x_550_ = v_reuseFailAlloc_554_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; 
v___x_551_ = lean_nat_add(v___x_503_, v_size_526_);
if (lean_obj_tag(v_r_525_) == 0)
{
lean_object* v_size_552_; 
v_size_552_ = lean_ctor_get(v_r_525_, 0);
lean_inc(v_size_552_);
v___y_536_ = v___x_550_;
v___y_537_ = v___x_551_;
v___y_538_ = v_size_552_;
goto v___jp_535_;
}
else
{
lean_object* v___x_553_; 
v___x_553_ = lean_unsigned_to_nat(0u);
v___y_536_ = v___x_550_;
v___y_537_ = v___x_551_;
v___y_538_ = v___x_553_;
goto v___jp_535_;
}
}
}
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
lean_del_object(v___x_499_);
v___x_563_ = lean_nat_add(v___x_503_, v_size_504_);
lean_dec(v_size_504_);
v___x_564_ = lean_nat_add(v___x_563_, v_size_505_);
lean_dec(v_size_505_);
v___x_565_ = lean_nat_add(v___x_563_, v_size_521_);
lean_dec(v___x_563_);
lean_inc_ref(v_impl_502_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 4, v_l_508_);
lean_ctor_set(v___x_519_, 3, v_impl_502_);
lean_ctor_set(v___x_519_, 2, v_v_495_);
lean_ctor_set(v___x_519_, 1, v_k_494_);
lean_ctor_set(v___x_519_, 0, v___x_565_);
v___x_567_ = v___x_519_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_580_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_580_, 4, v_l_508_);
v___x_567_ = v_reuseFailAlloc_580_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_isSharedCheck_574_ = !lean_is_exclusive(v_impl_502_);
if (v_isSharedCheck_574_ == 0)
{
lean_object* v_unused_575_; lean_object* v_unused_576_; lean_object* v_unused_577_; lean_object* v_unused_578_; lean_object* v_unused_579_; 
v_unused_575_ = lean_ctor_get(v_impl_502_, 4);
lean_dec(v_unused_575_);
v_unused_576_ = lean_ctor_get(v_impl_502_, 3);
lean_dec(v_unused_576_);
v_unused_577_ = lean_ctor_get(v_impl_502_, 2);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_impl_502_, 1);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_impl_502_, 0);
lean_dec(v_unused_579_);
v___x_569_ = v_impl_502_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_dec(v_impl_502_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 4, v_r_509_);
lean_ctor_set(v___x_569_, 3, v___x_567_);
lean_ctor_set(v___x_569_, 2, v_v_507_);
lean_ctor_set(v___x_569_, 1, v_k_506_);
lean_ctor_set(v___x_569_, 0, v___x_564_);
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_k_506_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v_v_507_);
lean_ctor_set(v_reuseFailAlloc_573_, 3, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_573_, 4, v_r_509_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v_size_587_ = lean_ctor_get(v_impl_502_, 0);
lean_inc(v_size_587_);
v___x_588_ = lean_nat_add(v___x_503_, v_size_587_);
lean_dec(v_size_587_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 3, v_impl_502_);
lean_ctor_set(v___x_499_, 0, v___x_588_);
v___x_590_ = v___x_499_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_591_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_591_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_591_, 4, v_r_497_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
else
{
if (lean_obj_tag(v_r_497_) == 0)
{
lean_object* v_l_592_; 
v_l_592_ = lean_ctor_get(v_r_497_, 3);
lean_inc(v_l_592_);
if (lean_obj_tag(v_l_592_) == 0)
{
lean_object* v_r_593_; 
v_r_593_ = lean_ctor_get(v_r_497_, 4);
lean_inc(v_r_593_);
if (lean_obj_tag(v_r_593_) == 0)
{
lean_object* v_size_594_; lean_object* v_k_595_; lean_object* v_v_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_609_; 
v_size_594_ = lean_ctor_get(v_r_497_, 0);
v_k_595_ = lean_ctor_get(v_r_497_, 1);
v_v_596_ = lean_ctor_get(v_r_497_, 2);
v_isSharedCheck_609_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_609_ == 0)
{
lean_object* v_unused_610_; lean_object* v_unused_611_; 
v_unused_610_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_610_);
v_unused_611_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_611_);
v___x_598_ = v_r_497_;
v_isShared_599_ = v_isSharedCheck_609_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_v_596_);
lean_inc(v_k_595_);
lean_inc(v_size_594_);
lean_dec(v_r_497_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_609_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v_size_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v_size_600_ = lean_ctor_get(v_l_592_, 0);
v___x_601_ = lean_nat_add(v___x_503_, v_size_594_);
lean_dec(v_size_594_);
v___x_602_ = lean_nat_add(v___x_503_, v_size_600_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 4, v_l_592_);
lean_ctor_set(v___x_598_, 3, v_impl_502_);
lean_ctor_set(v___x_598_, 2, v_v_495_);
lean_ctor_set(v___x_598_, 1, v_k_494_);
lean_ctor_set(v___x_598_, 0, v___x_602_);
v___x_604_ = v___x_598_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_608_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_608_, 4, v_l_592_);
v___x_604_ = v_reuseFailAlloc_608_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_r_593_);
lean_ctor_set(v___x_499_, 3, v___x_604_);
lean_ctor_set(v___x_499_, 2, v_v_596_);
lean_ctor_set(v___x_499_, 1, v_k_595_);
lean_ctor_set(v___x_499_, 0, v___x_601_);
v___x_606_ = v___x_499_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_r_593_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
else
{
lean_object* v_k_612_; lean_object* v_v_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_636_; 
v_k_612_ = lean_ctor_get(v_r_497_, 1);
v_v_613_ = lean_ctor_get(v_r_497_, 2);
v_isSharedCheck_636_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_636_ == 0)
{
lean_object* v_unused_637_; lean_object* v_unused_638_; lean_object* v_unused_639_; 
v_unused_637_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_637_);
v_unused_638_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_639_);
v___x_615_ = v_r_497_;
v_isShared_616_ = v_isSharedCheck_636_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_v_613_);
lean_inc(v_k_612_);
lean_dec(v_r_497_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_636_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v_k_617_; lean_object* v_v_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_632_; 
v_k_617_ = lean_ctor_get(v_l_592_, 1);
v_v_618_ = lean_ctor_get(v_l_592_, 2);
v_isSharedCheck_632_ = !lean_is_exclusive(v_l_592_);
if (v_isSharedCheck_632_ == 0)
{
lean_object* v_unused_633_; lean_object* v_unused_634_; lean_object* v_unused_635_; 
v_unused_633_ = lean_ctor_get(v_l_592_, 4);
lean_dec(v_unused_633_);
v_unused_634_ = lean_ctor_get(v_l_592_, 3);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_l_592_, 0);
lean_dec(v_unused_635_);
v___x_620_ = v_l_592_;
v_isShared_621_ = v_isSharedCheck_632_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_v_618_);
lean_inc(v_k_617_);
lean_dec(v_l_592_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_632_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = lean_unsigned_to_nat(3u);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_r_593_);
lean_ctor_set(v___x_620_, 3, v_r_593_);
lean_ctor_set(v___x_620_, 2, v_v_495_);
lean_ctor_set(v___x_620_, 1, v_k_494_);
lean_ctor_set(v___x_620_, 0, v___x_503_);
v___x_624_ = v___x_620_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_631_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_631_, 3, v_r_593_);
lean_ctor_set(v_reuseFailAlloc_631_, 4, v_r_593_);
v___x_624_ = v_reuseFailAlloc_631_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 3, v_r_593_);
lean_ctor_set(v___x_615_, 0, v___x_503_);
v___x_626_ = v___x_615_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_k_612_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_v_613_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v_r_593_);
lean_ctor_set(v_reuseFailAlloc_630_, 4, v_r_593_);
v___x_626_ = v_reuseFailAlloc_630_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_628_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_626_);
lean_ctor_set(v___x_499_, 3, v___x_624_);
lean_ctor_set(v___x_499_, 2, v_v_618_);
lean_ctor_set(v___x_499_, 1, v_k_617_);
lean_ctor_set(v___x_499_, 0, v___x_622_);
v___x_628_ = v___x_499_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v_k_617_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v_v_618_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_629_, 4, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_640_; 
v_r_640_ = lean_ctor_get(v_r_497_, 4);
lean_inc(v_r_640_);
if (lean_obj_tag(v_r_640_) == 0)
{
lean_object* v_k_641_; lean_object* v_v_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_653_; 
v_k_641_ = lean_ctor_get(v_r_497_, 1);
v_v_642_ = lean_ctor_get(v_r_497_, 2);
v_isSharedCheck_653_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; lean_object* v_unused_655_; lean_object* v_unused_656_; 
v_unused_654_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_654_);
v_unused_655_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_656_);
v___x_644_ = v_r_497_;
v_isShared_645_ = v_isSharedCheck_653_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_v_642_);
lean_inc(v_k_641_);
lean_dec(v_r_497_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_653_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_646_ = lean_unsigned_to_nat(3u);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 4, v_l_592_);
lean_ctor_set(v___x_644_, 2, v_v_495_);
lean_ctor_set(v___x_644_, 1, v_k_494_);
lean_ctor_set(v___x_644_, 0, v___x_503_);
v___x_648_ = v___x_644_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v_l_592_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_l_592_);
v___x_648_ = v_reuseFailAlloc_652_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_650_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_r_640_);
lean_ctor_set(v___x_499_, 3, v___x_648_);
lean_ctor_set(v___x_499_, 2, v_v_642_);
lean_ctor_set(v___x_499_, 1, v_k_641_);
lean_ctor_set(v___x_499_, 0, v___x_646_);
v___x_650_ = v___x_499_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_k_641_);
lean_ctor_set(v_reuseFailAlloc_651_, 2, v_v_642_);
lean_ctor_set(v_reuseFailAlloc_651_, 3, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_651_, 4, v_r_640_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v_size_657_; lean_object* v_k_658_; lean_object* v_v_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_670_; 
v_size_657_ = lean_ctor_get(v_r_497_, 0);
v_k_658_ = lean_ctor_get(v_r_497_, 1);
v_v_659_ = lean_ctor_get(v_r_497_, 2);
v_isSharedCheck_670_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; lean_object* v_unused_672_; 
v_unused_671_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_671_);
v_unused_672_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_672_);
v___x_661_ = v_r_497_;
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_v_659_);
lean_inc(v_k_658_);
lean_inc(v_size_657_);
lean_dec(v_r_497_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 3, v_r_640_);
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_size_657_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_658_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_659_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_r_640_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v_r_640_);
v___x_664_ = v_reuseFailAlloc_669_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_665_ = lean_unsigned_to_nat(2u);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_664_);
lean_ctor_set(v___x_499_, 3, v_r_640_);
lean_ctor_set(v___x_499_, 0, v___x_665_);
v___x_667_ = v___x_499_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_668_, 3, v_r_640_);
lean_ctor_set(v_reuseFailAlloc_668_, 4, v___x_664_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
else
{
lean_object* v___x_674_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 3, v_r_497_);
lean_ctor_set(v___x_499_, 0, v___x_503_);
v___x_674_ = v___x_499_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_675_, 3, v_r_497_);
lean_ctor_set(v_reuseFailAlloc_675_, 4, v_r_497_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
case 1:
{
lean_del_object(v___x_499_);
lean_dec(v_v_495_);
lean_dec(v_k_494_);
if (lean_obj_tag(v_l_496_) == 0)
{
if (lean_obj_tag(v_r_497_) == 0)
{
lean_object* v_size_676_; lean_object* v_k_677_; lean_object* v_v_678_; lean_object* v_l_679_; lean_object* v_r_680_; lean_object* v_size_681_; lean_object* v_k_682_; lean_object* v_v_683_; lean_object* v_l_684_; lean_object* v_r_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v_size_676_ = lean_ctor_get(v_l_496_, 0);
v_k_677_ = lean_ctor_get(v_l_496_, 1);
v_v_678_ = lean_ctor_get(v_l_496_, 2);
v_l_679_ = lean_ctor_get(v_l_496_, 3);
v_r_680_ = lean_ctor_get(v_l_496_, 4);
lean_inc(v_r_680_);
v_size_681_ = lean_ctor_get(v_r_497_, 0);
v_k_682_ = lean_ctor_get(v_r_497_, 1);
v_v_683_ = lean_ctor_get(v_r_497_, 2);
v_l_684_ = lean_ctor_get(v_r_497_, 3);
lean_inc(v_l_684_);
v_r_685_ = lean_ctor_get(v_r_497_, 4);
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = lean_nat_dec_lt(v_size_676_, v_size_681_);
if (v___x_687_ == 0)
{
lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_823_; 
lean_inc(v_l_679_);
lean_inc(v_v_678_);
lean_inc(v_k_677_);
v_isSharedCheck_823_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; lean_object* v_unused_825_; lean_object* v_unused_826_; lean_object* v_unused_827_; lean_object* v_unused_828_; 
v_unused_824_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_826_);
v_unused_827_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_827_);
v_unused_828_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_828_);
v___x_689_ = v_l_496_;
v_isShared_690_ = v_isSharedCheck_823_;
goto v_resetjp_688_;
}
else
{
lean_dec(v_l_496_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_823_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v_tree_692_; 
v___x_691_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_677_, v_v_678_, v_l_679_, v_r_680_);
v_tree_692_ = lean_ctor_get(v___x_691_, 2);
lean_inc(v_tree_692_);
if (lean_obj_tag(v_tree_692_) == 0)
{
lean_object* v_k_693_; lean_object* v_v_694_; lean_object* v_size_695_; lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_k_693_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_k_693_);
v_v_694_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_v_694_);
lean_dec_ref(v___x_691_);
v_size_695_ = lean_ctor_get(v_tree_692_, 0);
v___x_696_ = lean_unsigned_to_nat(3u);
v___x_697_ = lean_nat_mul(v___x_696_, v_size_695_);
v___x_698_ = lean_nat_dec_lt(v___x_697_, v_size_681_);
lean_dec(v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
lean_dec(v_l_684_);
v___x_699_ = lean_nat_add(v___x_686_, v_size_695_);
v___x_700_ = lean_nat_add(v___x_699_, v_size_681_);
lean_dec(v___x_699_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v_r_497_);
lean_ctor_set(v___x_689_, 3, v_tree_692_);
lean_ctor_set(v___x_689_, 2, v_v_694_);
lean_ctor_set(v___x_689_, 1, v_k_693_);
lean_ctor_set(v___x_689_, 0, v___x_700_);
v___x_702_ = v___x_689_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_703_, 3, v_tree_692_);
lean_ctor_set(v_reuseFailAlloc_703_, 4, v_r_497_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
else
{
lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_758_; 
lean_inc(v_r_685_);
lean_inc(v_v_683_);
lean_inc(v_k_682_);
lean_inc(v_size_681_);
v_isSharedCheck_758_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; 
v_unused_759_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_r_497_, 2);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_r_497_, 1);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_763_);
v___x_705_ = v_r_497_;
v_isShared_706_ = v_isSharedCheck_758_;
goto v_resetjp_704_;
}
else
{
lean_dec(v_r_497_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_758_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v_size_707_; lean_object* v_k_708_; lean_object* v_v_709_; lean_object* v_l_710_; lean_object* v_r_711_; lean_object* v_size_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_size_707_ = lean_ctor_get(v_l_684_, 0);
v_k_708_ = lean_ctor_get(v_l_684_, 1);
v_v_709_ = lean_ctor_get(v_l_684_, 2);
v_l_710_ = lean_ctor_get(v_l_684_, 3);
v_r_711_ = lean_ctor_get(v_l_684_, 4);
v_size_712_ = lean_ctor_get(v_r_685_, 0);
v___x_713_ = lean_unsigned_to_nat(2u);
v___x_714_ = lean_nat_mul(v___x_713_, v_size_712_);
v___x_715_ = lean_nat_dec_lt(v_size_707_, v___x_714_);
lean_dec(v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_743_; 
lean_inc(v_r_711_);
lean_inc(v_l_710_);
lean_inc(v_v_709_);
lean_inc(v_k_708_);
v_isSharedCheck_743_ = !lean_is_exclusive(v_l_684_);
if (v_isSharedCheck_743_ == 0)
{
lean_object* v_unused_744_; lean_object* v_unused_745_; lean_object* v_unused_746_; lean_object* v_unused_747_; lean_object* v_unused_748_; 
v_unused_744_ = lean_ctor_get(v_l_684_, 4);
lean_dec(v_unused_744_);
v_unused_745_ = lean_ctor_get(v_l_684_, 3);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_l_684_, 2);
lean_dec(v_unused_746_);
v_unused_747_ = lean_ctor_get(v_l_684_, 1);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v_l_684_, 0);
lean_dec(v_unused_748_);
v___x_717_ = v_l_684_;
v_isShared_718_ = v_isSharedCheck_743_;
goto v_resetjp_716_;
}
else
{
lean_dec(v_l_684_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_743_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_733_; 
v___x_719_ = lean_nat_add(v___x_686_, v_size_695_);
v___x_720_ = lean_nat_add(v___x_719_, v_size_681_);
lean_dec(v_size_681_);
if (lean_obj_tag(v_l_710_) == 0)
{
lean_object* v_size_741_; 
v_size_741_ = lean_ctor_get(v_l_710_, 0);
lean_inc(v_size_741_);
v___y_733_ = v_size_741_;
goto v___jp_732_;
}
else
{
lean_object* v___x_742_; 
v___x_742_ = lean_unsigned_to_nat(0u);
v___y_733_ = v___x_742_;
goto v___jp_732_;
}
v___jp_721_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_725_ = lean_nat_add(v___y_722_, v___y_724_);
lean_dec(v___y_724_);
lean_dec(v___y_722_);
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 4, v_r_685_);
lean_ctor_set(v___x_717_, 3, v_r_711_);
lean_ctor_set(v___x_717_, 2, v_v_683_);
lean_ctor_set(v___x_717_, 1, v_k_682_);
lean_ctor_set(v___x_717_, 0, v___x_725_);
v___x_727_ = v___x_717_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_731_, 3, v_r_711_);
lean_ctor_set(v_reuseFailAlloc_731_, 4, v_r_685_);
v___x_727_ = v_reuseFailAlloc_731_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_729_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v___x_727_);
lean_ctor_set(v___x_705_, 3, v___y_723_);
lean_ctor_set(v___x_705_, 2, v_v_709_);
lean_ctor_set(v___x_705_, 1, v_k_708_);
lean_ctor_set(v___x_705_, 0, v___x_720_);
v___x_729_ = v___x_705_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_k_708_);
lean_ctor_set(v_reuseFailAlloc_730_, 2, v_v_709_);
lean_ctor_set(v_reuseFailAlloc_730_, 3, v___y_723_);
lean_ctor_set(v_reuseFailAlloc_730_, 4, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
v___jp_732_:
{
lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_734_ = lean_nat_add(v___x_719_, v___y_733_);
lean_dec(v___y_733_);
lean_dec(v___x_719_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v_l_710_);
lean_ctor_set(v___x_689_, 3, v_tree_692_);
lean_ctor_set(v___x_689_, 2, v_v_694_);
lean_ctor_set(v___x_689_, 1, v_k_693_);
lean_ctor_set(v___x_689_, 0, v___x_734_);
v___x_736_ = v___x_689_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_740_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_740_, 3, v_tree_692_);
lean_ctor_set(v_reuseFailAlloc_740_, 4, v_l_710_);
v___x_736_ = v_reuseFailAlloc_740_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_737_; 
v___x_737_ = lean_nat_add(v___x_686_, v_size_712_);
if (lean_obj_tag(v_r_711_) == 0)
{
lean_object* v_size_738_; 
v_size_738_ = lean_ctor_get(v_r_711_, 0);
lean_inc(v_size_738_);
v___y_722_ = v___x_737_;
v___y_723_ = v___x_736_;
v___y_724_ = v_size_738_;
goto v___jp_721_;
}
else
{
lean_object* v___x_739_; 
v___x_739_ = lean_unsigned_to_nat(0u);
v___y_722_ = v___x_737_;
v___y_723_ = v___x_736_;
v___y_724_ = v___x_739_;
goto v___jp_721_;
}
}
}
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_749_ = lean_nat_add(v___x_686_, v_size_695_);
v___x_750_ = lean_nat_add(v___x_749_, v_size_681_);
lean_dec(v_size_681_);
v___x_751_ = lean_nat_add(v___x_749_, v_size_707_);
lean_dec(v___x_749_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_l_684_);
lean_ctor_set(v___x_705_, 3, v_tree_692_);
lean_ctor_set(v___x_705_, 2, v_v_694_);
lean_ctor_set(v___x_705_, 1, v_k_693_);
lean_ctor_set(v___x_705_, 0, v___x_751_);
v___x_753_ = v___x_705_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_tree_692_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v_l_684_);
v___x_753_ = v_reuseFailAlloc_757_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v_r_685_);
lean_ctor_set(v___x_689_, 3, v___x_753_);
lean_ctor_set(v___x_689_, 2, v_v_683_);
lean_ctor_set(v___x_689_, 1, v_k_682_);
lean_ctor_set(v___x_689_, 0, v___x_750_);
v___x_755_ = v___x_689_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_756_, 3, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_756_, 4, v_r_685_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
}
else
{
lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_817_; 
lean_inc(v_r_685_);
lean_inc(v_v_683_);
lean_inc(v_k_682_);
lean_inc(v_size_681_);
v_isSharedCheck_817_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; lean_object* v_unused_819_; lean_object* v_unused_820_; lean_object* v_unused_821_; lean_object* v_unused_822_; 
v_unused_818_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_818_);
v_unused_819_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_r_497_, 2);
lean_dec(v_unused_820_);
v_unused_821_ = lean_ctor_get(v_r_497_, 1);
lean_dec(v_unused_821_);
v_unused_822_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_822_);
v___x_765_ = v_r_497_;
v_isShared_766_ = v_isSharedCheck_817_;
goto v_resetjp_764_;
}
else
{
lean_dec(v_r_497_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_817_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
if (lean_obj_tag(v_l_684_) == 0)
{
if (lean_obj_tag(v_r_685_) == 0)
{
lean_object* v_k_767_; lean_object* v_v_768_; lean_object* v_size_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v_k_767_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_k_767_);
v_v_768_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_v_768_);
lean_dec_ref(v___x_691_);
v_size_769_ = lean_ctor_get(v_l_684_, 0);
v___x_770_ = lean_nat_add(v___x_686_, v_size_681_);
lean_dec(v_size_681_);
v___x_771_ = lean_nat_add(v___x_686_, v_size_769_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 4, v_l_684_);
lean_ctor_set(v___x_765_, 3, v_tree_692_);
lean_ctor_set(v___x_765_, 2, v_v_768_);
lean_ctor_set(v___x_765_, 1, v_k_767_);
lean_ctor_set(v___x_765_, 0, v___x_771_);
v___x_773_ = v___x_765_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_k_767_);
lean_ctor_set(v_reuseFailAlloc_777_, 2, v_v_768_);
lean_ctor_set(v_reuseFailAlloc_777_, 3, v_tree_692_);
lean_ctor_set(v_reuseFailAlloc_777_, 4, v_l_684_);
v___x_773_ = v_reuseFailAlloc_777_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_775_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v_r_685_);
lean_ctor_set(v___x_689_, 3, v___x_773_);
lean_ctor_set(v___x_689_, 2, v_v_683_);
lean_ctor_set(v___x_689_, 1, v_k_682_);
lean_ctor_set(v___x_689_, 0, v___x_770_);
v___x_775_ = v___x_689_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_770_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v_r_685_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
else
{
lean_object* v_k_778_; lean_object* v_v_779_; lean_object* v_k_780_; lean_object* v_v_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_795_; 
lean_dec(v_size_681_);
v_k_778_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_k_778_);
v_v_779_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_v_779_);
lean_dec_ref(v___x_691_);
v_k_780_ = lean_ctor_get(v_l_684_, 1);
v_v_781_ = lean_ctor_get(v_l_684_, 2);
v_isSharedCheck_795_ = !lean_is_exclusive(v_l_684_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; lean_object* v_unused_797_; lean_object* v_unused_798_; 
v_unused_796_ = lean_ctor_get(v_l_684_, 4);
lean_dec(v_unused_796_);
v_unused_797_ = lean_ctor_get(v_l_684_, 3);
lean_dec(v_unused_797_);
v_unused_798_ = lean_ctor_get(v_l_684_, 0);
lean_dec(v_unused_798_);
v___x_783_ = v_l_684_;
v_isShared_784_ = v_isSharedCheck_795_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_v_781_);
lean_inc(v_k_780_);
lean_dec(v_l_684_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_795_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = lean_unsigned_to_nat(3u);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 4, v_r_685_);
lean_ctor_set(v___x_783_, 3, v_r_685_);
lean_ctor_set(v___x_783_, 2, v_v_779_);
lean_ctor_set(v___x_783_, 1, v_k_778_);
lean_ctor_set(v___x_783_, 0, v___x_686_);
v___x_787_ = v___x_783_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_k_778_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_v_779_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v_r_685_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v_r_685_);
v___x_787_ = v_reuseFailAlloc_794_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_789_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 3, v_r_685_);
lean_ctor_set(v___x_765_, 0, v___x_686_);
v___x_789_ = v___x_765_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_793_, 3, v_r_685_);
lean_ctor_set(v_reuseFailAlloc_793_, 4, v_r_685_);
v___x_789_ = v_reuseFailAlloc_793_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_791_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v___x_789_);
lean_ctor_set(v___x_689_, 3, v___x_787_);
lean_ctor_set(v___x_689_, 2, v_v_781_);
lean_ctor_set(v___x_689_, 1, v_k_780_);
lean_ctor_set(v___x_689_, 0, v___x_785_);
v___x_791_ = v___x_689_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_785_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_k_780_);
lean_ctor_set(v_reuseFailAlloc_792_, 2, v_v_781_);
lean_ctor_set(v_reuseFailAlloc_792_, 3, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_792_, 4, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_685_) == 0)
{
lean_object* v_k_799_; lean_object* v_v_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
lean_dec(v_size_681_);
v_k_799_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_k_799_);
v_v_800_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_v_800_);
lean_dec_ref(v___x_691_);
v___x_801_ = lean_unsigned_to_nat(3u);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 4, v_l_684_);
lean_ctor_set(v___x_765_, 2, v_v_800_);
lean_ctor_set(v___x_765_, 1, v_k_799_);
lean_ctor_set(v___x_765_, 0, v___x_686_);
v___x_803_ = v___x_765_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_k_799_);
lean_ctor_set(v_reuseFailAlloc_807_, 2, v_v_800_);
lean_ctor_set(v_reuseFailAlloc_807_, 3, v_l_684_);
lean_ctor_set(v_reuseFailAlloc_807_, 4, v_l_684_);
v___x_803_ = v_reuseFailAlloc_807_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_805_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v_r_685_);
lean_ctor_set(v___x_689_, 3, v___x_803_);
lean_ctor_set(v___x_689_, 2, v_v_683_);
lean_ctor_set(v___x_689_, 1, v_k_682_);
lean_ctor_set(v___x_689_, 0, v___x_801_);
v___x_805_ = v___x_689_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_806_, 3, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_806_, 4, v_r_685_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
else
{
lean_object* v_k_808_; lean_object* v_v_809_; lean_object* v___x_811_; 
v_k_808_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_k_808_);
v_v_809_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_v_809_);
lean_dec_ref(v___x_691_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 3, v_r_685_);
v___x_811_ = v___x_765_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_size_681_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_r_685_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v_r_685_);
v___x_811_ = v_reuseFailAlloc_816_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_812_ = lean_unsigned_to_nat(2u);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 4, v___x_811_);
lean_ctor_set(v___x_689_, 3, v_r_685_);
lean_ctor_set(v___x_689_, 2, v_v_809_);
lean_ctor_set(v___x_689_, 1, v_k_808_);
lean_ctor_set(v___x_689_, 0, v___x_812_);
v___x_814_ = v___x_689_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_k_808_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_v_809_);
lean_ctor_set(v_reuseFailAlloc_815_, 3, v_r_685_);
lean_ctor_set(v_reuseFailAlloc_815_, 4, v___x_811_);
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
}
}
}
}
else
{
lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_981_; 
lean_inc(v_r_685_);
lean_inc(v_v_683_);
lean_inc(v_k_682_);
v_isSharedCheck_981_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; lean_object* v_unused_983_; lean_object* v_unused_984_; lean_object* v_unused_985_; lean_object* v_unused_986_; 
v_unused_982_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_982_);
v_unused_983_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_983_);
v_unused_984_ = lean_ctor_get(v_r_497_, 2);
lean_dec(v_unused_984_);
v_unused_985_ = lean_ctor_get(v_r_497_, 1);
lean_dec(v_unused_985_);
v_unused_986_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_986_);
v___x_830_ = v_r_497_;
v_isShared_831_ = v_isSharedCheck_981_;
goto v_resetjp_829_;
}
else
{
lean_dec(v_r_497_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_981_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_832_; lean_object* v_tree_833_; 
v___x_832_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_682_, v_v_683_, v_l_684_, v_r_685_);
v_tree_833_ = lean_ctor_get(v___x_832_, 2);
lean_inc(v_tree_833_);
if (lean_obj_tag(v_tree_833_) == 0)
{
lean_object* v_k_834_; lean_object* v_v_835_; lean_object* v_size_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_k_834_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_k_834_);
v_v_835_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_v_835_);
lean_dec_ref(v___x_832_);
v_size_836_ = lean_ctor_get(v_tree_833_, 0);
v___x_837_ = lean_unsigned_to_nat(3u);
v___x_838_ = lean_nat_mul(v___x_837_, v_size_836_);
v___x_839_ = lean_nat_dec_lt(v___x_838_, v_size_676_);
lean_dec(v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
lean_dec(v_r_680_);
v___x_840_ = lean_nat_add(v___x_686_, v_size_676_);
v___x_841_ = lean_nat_add(v___x_840_, v_size_836_);
lean_dec(v___x_840_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_tree_833_);
lean_ctor_set(v___x_830_, 3, v_l_496_);
lean_ctor_set(v___x_830_, 2, v_v_835_);
lean_ctor_set(v___x_830_, 1, v_k_834_);
lean_ctor_set(v___x_830_, 0, v___x_841_);
v___x_843_ = v___x_830_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_k_834_);
lean_ctor_set(v_reuseFailAlloc_844_, 2, v_v_835_);
lean_ctor_set(v_reuseFailAlloc_844_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_844_, 4, v_tree_833_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
else
{
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_910_; 
lean_inc(v_l_679_);
lean_inc(v_v_678_);
lean_inc(v_k_677_);
lean_inc(v_size_676_);
v_isSharedCheck_910_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_910_ == 0)
{
lean_object* v_unused_911_; lean_object* v_unused_912_; lean_object* v_unused_913_; lean_object* v_unused_914_; lean_object* v_unused_915_; 
v_unused_911_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_911_);
v_unused_912_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_912_);
v_unused_913_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_914_);
v_unused_915_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_915_);
v___x_846_ = v_l_496_;
v_isShared_847_ = v_isSharedCheck_910_;
goto v_resetjp_845_;
}
else
{
lean_dec(v_l_496_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_910_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v_size_848_; lean_object* v_size_849_; lean_object* v_k_850_; lean_object* v_v_851_; lean_object* v_l_852_; lean_object* v_r_853_; lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_size_848_ = lean_ctor_get(v_l_679_, 0);
v_size_849_ = lean_ctor_get(v_r_680_, 0);
v_k_850_ = lean_ctor_get(v_r_680_, 1);
v_v_851_ = lean_ctor_get(v_r_680_, 2);
v_l_852_ = lean_ctor_get(v_r_680_, 3);
v_r_853_ = lean_ctor_get(v_r_680_, 4);
v___x_854_ = lean_unsigned_to_nat(2u);
v___x_855_ = lean_nat_mul(v___x_854_, v_size_848_);
v___x_856_ = lean_nat_dec_lt(v_size_849_, v___x_855_);
lean_dec(v___x_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_894_; 
lean_inc(v_r_853_);
lean_inc(v_l_852_);
lean_inc(v_v_851_);
lean_inc(v_k_850_);
lean_del_object(v___x_846_);
v_isSharedCheck_894_ = !lean_is_exclusive(v_r_680_);
if (v_isSharedCheck_894_ == 0)
{
lean_object* v_unused_895_; lean_object* v_unused_896_; lean_object* v_unused_897_; lean_object* v_unused_898_; lean_object* v_unused_899_; 
v_unused_895_ = lean_ctor_get(v_r_680_, 4);
lean_dec(v_unused_895_);
v_unused_896_ = lean_ctor_get(v_r_680_, 3);
lean_dec(v_unused_896_);
v_unused_897_ = lean_ctor_get(v_r_680_, 2);
lean_dec(v_unused_897_);
v_unused_898_ = lean_ctor_get(v_r_680_, 1);
lean_dec(v_unused_898_);
v_unused_899_ = lean_ctor_get(v_r_680_, 0);
lean_dec(v_unused_899_);
v___x_858_ = v_r_680_;
v_isShared_859_ = v_isSharedCheck_894_;
goto v_resetjp_857_;
}
else
{
lean_dec(v_r_680_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_894_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___x_882_; lean_object* v___y_884_; 
v___x_860_ = lean_nat_add(v___x_686_, v_size_676_);
lean_dec(v_size_676_);
v___x_861_ = lean_nat_add(v___x_860_, v_size_836_);
lean_dec(v___x_860_);
v___x_882_ = lean_nat_add(v___x_686_, v_size_848_);
if (lean_obj_tag(v_l_852_) == 0)
{
lean_object* v_size_892_; 
v_size_892_ = lean_ctor_get(v_l_852_, 0);
lean_inc(v_size_892_);
v___y_884_ = v_size_892_;
goto v___jp_883_;
}
else
{
lean_object* v___x_893_; 
v___x_893_ = lean_unsigned_to_nat(0u);
v___y_884_ = v___x_893_;
goto v___jp_883_;
}
v___jp_862_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_nat_add(v___y_863_, v___y_865_);
lean_dec(v___y_865_);
lean_dec(v___y_863_);
lean_inc_ref(v_tree_833_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 4, v_tree_833_);
lean_ctor_set(v___x_858_, 3, v_r_853_);
lean_ctor_set(v___x_858_, 2, v_v_835_);
lean_ctor_set(v___x_858_, 1, v_k_834_);
lean_ctor_set(v___x_858_, 0, v___x_866_);
v___x_868_ = v___x_858_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_k_834_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_v_835_);
lean_ctor_set(v_reuseFailAlloc_881_, 3, v_r_853_);
lean_ctor_set(v_reuseFailAlloc_881_, 4, v_tree_833_);
v___x_868_ = v_reuseFailAlloc_881_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_isSharedCheck_875_ = !lean_is_exclusive(v_tree_833_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; lean_object* v_unused_877_; lean_object* v_unused_878_; lean_object* v_unused_879_; lean_object* v_unused_880_; 
v_unused_876_ = lean_ctor_get(v_tree_833_, 4);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_tree_833_, 3);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_tree_833_, 2);
lean_dec(v_unused_878_);
v_unused_879_ = lean_ctor_get(v_tree_833_, 1);
lean_dec(v_unused_879_);
v_unused_880_ = lean_ctor_get(v_tree_833_, 0);
lean_dec(v_unused_880_);
v___x_870_ = v_tree_833_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_dec(v_tree_833_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 4, v___x_868_);
lean_ctor_set(v___x_870_, 3, v___y_864_);
lean_ctor_set(v___x_870_, 2, v_v_851_);
lean_ctor_set(v___x_870_, 1, v_k_850_);
lean_ctor_set(v___x_870_, 0, v___x_861_);
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_k_850_);
lean_ctor_set(v_reuseFailAlloc_874_, 2, v_v_851_);
lean_ctor_set(v_reuseFailAlloc_874_, 3, v___y_864_);
lean_ctor_set(v_reuseFailAlloc_874_, 4, v___x_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
v___jp_883_:
{
lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_885_ = lean_nat_add(v___x_882_, v___y_884_);
lean_dec(v___y_884_);
lean_dec(v___x_882_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_l_852_);
lean_ctor_set(v___x_830_, 3, v_l_679_);
lean_ctor_set(v___x_830_, 2, v_v_678_);
lean_ctor_set(v___x_830_, 1, v_k_677_);
lean_ctor_set(v___x_830_, 0, v___x_885_);
v___x_887_ = v___x_830_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v_v_678_);
lean_ctor_set(v_reuseFailAlloc_891_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_891_, 4, v_l_852_);
v___x_887_ = v_reuseFailAlloc_891_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; 
v___x_888_ = lean_nat_add(v___x_686_, v_size_836_);
if (lean_obj_tag(v_r_853_) == 0)
{
lean_object* v_size_889_; 
v_size_889_ = lean_ctor_get(v_r_853_, 0);
lean_inc(v_size_889_);
v___y_863_ = v___x_888_;
v___y_864_ = v___x_887_;
v___y_865_ = v_size_889_;
goto v___jp_862_;
}
else
{
lean_object* v___x_890_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___y_863_ = v___x_888_;
v___y_864_ = v___x_887_;
v___y_865_ = v___x_890_;
goto v___jp_862_;
}
}
}
}
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v___x_900_ = lean_nat_add(v___x_686_, v_size_676_);
lean_dec(v_size_676_);
v___x_901_ = lean_nat_add(v___x_900_, v_size_836_);
lean_dec(v___x_900_);
v___x_902_ = lean_nat_add(v___x_686_, v_size_836_);
v___x_903_ = lean_nat_add(v___x_902_, v_size_849_);
lean_dec(v___x_902_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_tree_833_);
lean_ctor_set(v___x_830_, 3, v_r_680_);
lean_ctor_set(v___x_830_, 2, v_v_835_);
lean_ctor_set(v___x_830_, 1, v_k_834_);
lean_ctor_set(v___x_830_, 0, v___x_903_);
v___x_905_ = v___x_830_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_k_834_);
lean_ctor_set(v_reuseFailAlloc_909_, 2, v_v_835_);
lean_ctor_set(v_reuseFailAlloc_909_, 3, v_r_680_);
lean_ctor_set(v_reuseFailAlloc_909_, 4, v_tree_833_);
v___x_905_ = v_reuseFailAlloc_909_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_907_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v___x_905_);
lean_ctor_set(v___x_846_, 0, v___x_901_);
v___x_907_ = v___x_846_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_678_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_679_) == 0)
{
lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_939_; 
lean_inc_ref(v_l_679_);
lean_inc(v_v_678_);
lean_inc(v_k_677_);
lean_inc(v_size_676_);
v_isSharedCheck_939_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; lean_object* v_unused_941_; lean_object* v_unused_942_; lean_object* v_unused_943_; lean_object* v_unused_944_; 
v_unused_940_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_940_);
v_unused_941_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_943_);
v_unused_944_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_944_);
v___x_917_ = v_l_496_;
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
else
{
lean_dec(v_l_496_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
if (lean_obj_tag(v_r_680_) == 0)
{
lean_object* v_k_919_; lean_object* v_v_920_; lean_object* v_size_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v_k_919_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_k_919_);
v_v_920_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_v_920_);
lean_dec_ref(v___x_832_);
v_size_921_ = lean_ctor_get(v_r_680_, 0);
v___x_922_ = lean_nat_add(v___x_686_, v_size_676_);
lean_dec(v_size_676_);
v___x_923_ = lean_nat_add(v___x_686_, v_size_921_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_tree_833_);
lean_ctor_set(v___x_830_, 3, v_r_680_);
lean_ctor_set(v___x_830_, 2, v_v_920_);
lean_ctor_set(v___x_830_, 1, v_k_919_);
lean_ctor_set(v___x_830_, 0, v___x_923_);
v___x_925_ = v___x_830_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_k_919_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_v_920_);
lean_ctor_set(v_reuseFailAlloc_929_, 3, v_r_680_);
lean_ctor_set(v_reuseFailAlloc_929_, 4, v_tree_833_);
v___x_925_ = v_reuseFailAlloc_929_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_927_; 
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 4, v___x_925_);
lean_ctor_set(v___x_917_, 0, v___x_922_);
v___x_927_ = v___x_917_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_922_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_v_678_);
lean_ctor_set(v_reuseFailAlloc_928_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_928_, 4, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
lean_object* v_k_930_; lean_object* v_v_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
lean_dec(v_size_676_);
v_k_930_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_k_930_);
v_v_931_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_v_931_);
lean_dec_ref(v___x_832_);
v___x_932_ = lean_unsigned_to_nat(3u);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_r_680_);
lean_ctor_set(v___x_830_, 3, v_r_680_);
lean_ctor_set(v___x_830_, 2, v_v_931_);
lean_ctor_set(v___x_830_, 1, v_k_930_);
lean_ctor_set(v___x_830_, 0, v___x_686_);
v___x_934_ = v___x_830_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_k_930_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v_v_931_);
lean_ctor_set(v_reuseFailAlloc_938_, 3, v_r_680_);
lean_ctor_set(v_reuseFailAlloc_938_, 4, v_r_680_);
v___x_934_ = v_reuseFailAlloc_938_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_936_; 
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 4, v___x_934_);
lean_ctor_set(v___x_917_, 0, v___x_932_);
v___x_936_ = v___x_917_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_937_, 2, v_v_678_);
lean_ctor_set(v_reuseFailAlloc_937_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_937_, 4, v___x_934_);
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
}
else
{
if (lean_obj_tag(v_r_680_) == 0)
{
lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_969_; 
lean_inc(v_l_679_);
lean_inc(v_v_678_);
lean_inc(v_k_677_);
v_isSharedCheck_969_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; lean_object* v_unused_971_; lean_object* v_unused_972_; lean_object* v_unused_973_; lean_object* v_unused_974_; 
v_unused_970_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_970_);
v_unused_971_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_971_);
v_unused_972_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_972_);
v_unused_973_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_974_);
v___x_946_ = v_l_496_;
v_isShared_947_ = v_isSharedCheck_969_;
goto v_resetjp_945_;
}
else
{
lean_dec(v_l_496_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_969_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v_k_948_; lean_object* v_v_949_; lean_object* v_k_950_; lean_object* v_v_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_965_; 
v_k_948_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_k_948_);
v_v_949_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_v_949_);
lean_dec_ref(v___x_832_);
v_k_950_ = lean_ctor_get(v_r_680_, 1);
v_v_951_ = lean_ctor_get(v_r_680_, 2);
v_isSharedCheck_965_ = !lean_is_exclusive(v_r_680_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; lean_object* v_unused_967_; lean_object* v_unused_968_; 
v_unused_966_ = lean_ctor_get(v_r_680_, 4);
lean_dec(v_unused_966_);
v_unused_967_ = lean_ctor_get(v_r_680_, 3);
lean_dec(v_unused_967_);
v_unused_968_ = lean_ctor_get(v_r_680_, 0);
lean_dec(v_unused_968_);
v___x_953_ = v_r_680_;
v_isShared_954_ = v_isSharedCheck_965_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_v_951_);
lean_inc(v_k_950_);
lean_dec(v_r_680_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_965_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_955_ = lean_unsigned_to_nat(3u);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 4, v_l_679_);
lean_ctor_set(v___x_953_, 3, v_l_679_);
lean_ctor_set(v___x_953_, 2, v_v_678_);
lean_ctor_set(v___x_953_, 1, v_k_677_);
lean_ctor_set(v___x_953_, 0, v___x_686_);
v___x_957_ = v___x_953_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_678_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_l_679_);
v___x_957_ = v_reuseFailAlloc_964_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_959_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_l_679_);
lean_ctor_set(v___x_830_, 3, v_l_679_);
lean_ctor_set(v___x_830_, 2, v_v_949_);
lean_ctor_set(v___x_830_, 1, v_k_948_);
lean_ctor_set(v___x_830_, 0, v___x_686_);
v___x_959_ = v___x_830_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_k_948_);
lean_ctor_set(v_reuseFailAlloc_963_, 2, v_v_949_);
lean_ctor_set(v_reuseFailAlloc_963_, 3, v_l_679_);
lean_ctor_set(v_reuseFailAlloc_963_, 4, v_l_679_);
v___x_959_ = v_reuseFailAlloc_963_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
lean_object* v___x_961_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 4, v___x_959_);
lean_ctor_set(v___x_946_, 3, v___x_957_);
lean_ctor_set(v___x_946_, 2, v_v_951_);
lean_ctor_set(v___x_946_, 1, v_k_950_);
lean_ctor_set(v___x_946_, 0, v___x_955_);
v___x_961_ = v___x_946_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_k_950_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_v_951_);
lean_ctor_set(v_reuseFailAlloc_962_, 3, v___x_957_);
lean_ctor_set(v_reuseFailAlloc_962_, 4, v___x_959_);
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
else
{
lean_object* v_k_975_; lean_object* v_v_976_; lean_object* v___x_977_; lean_object* v___x_979_; 
v_k_975_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_k_975_);
v_v_976_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_v_976_);
lean_dec_ref(v___x_832_);
v___x_977_ = lean_unsigned_to_nat(2u);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 4, v_r_680_);
lean_ctor_set(v___x_830_, 3, v_l_496_);
lean_ctor_set(v___x_830_, 2, v_v_976_);
lean_ctor_set(v___x_830_, 1, v_k_975_);
lean_ctor_set(v___x_830_, 0, v___x_977_);
v___x_979_ = v___x_830_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_k_975_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_v_976_);
lean_ctor_set(v_reuseFailAlloc_980_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_980_, 4, v_r_680_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
}
}
else
{
return v_l_496_;
}
}
else
{
return v_r_497_;
}
}
default: 
{
lean_object* v_impl_987_; lean_object* v___x_988_; 
v_impl_987_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_492_, v_r_497_);
v___x_988_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_987_) == 0)
{
if (lean_obj_tag(v_l_496_) == 0)
{
lean_object* v_size_989_; lean_object* v_size_990_; lean_object* v_k_991_; lean_object* v_v_992_; lean_object* v_l_993_; lean_object* v_r_994_; lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v_size_989_ = lean_ctor_get(v_impl_987_, 0);
lean_inc(v_size_989_);
v_size_990_ = lean_ctor_get(v_l_496_, 0);
v_k_991_ = lean_ctor_get(v_l_496_, 1);
v_v_992_ = lean_ctor_get(v_l_496_, 2);
v_l_993_ = lean_ctor_get(v_l_496_, 3);
v_r_994_ = lean_ctor_get(v_l_496_, 4);
lean_inc(v_r_994_);
v___x_995_ = lean_unsigned_to_nat(3u);
v___x_996_ = lean_nat_mul(v___x_995_, v_size_989_);
v___x_997_ = lean_nat_dec_lt(v___x_996_, v_size_990_);
lean_dec(v___x_996_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1001_; 
lean_dec(v_r_994_);
v___x_998_ = lean_nat_add(v___x_988_, v_size_990_);
v___x_999_ = lean_nat_add(v___x_998_, v_size_989_);
lean_dec(v_size_989_);
lean_dec(v___x_998_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_impl_987_);
lean_ctor_set(v___x_499_, 0, v___x_999_);
v___x_1001_ = v___x_499_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1002_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_1002_, 4, v_impl_987_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
else
{
lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1068_; 
lean_inc(v_l_993_);
lean_inc(v_v_992_);
lean_inc(v_k_991_);
lean_inc(v_size_990_);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_1068_ == 0)
{
lean_object* v_unused_1069_; lean_object* v_unused_1070_; lean_object* v_unused_1071_; lean_object* v_unused_1072_; lean_object* v_unused_1073_; 
v_unused_1069_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_1069_);
v_unused_1070_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_1070_);
v_unused_1071_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_1071_);
v_unused_1072_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_1072_);
v_unused_1073_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_1073_);
v___x_1004_ = v_l_496_;
v_isShared_1005_ = v_isSharedCheck_1068_;
goto v_resetjp_1003_;
}
else
{
lean_dec(v_l_496_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1068_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_size_1006_; lean_object* v_size_1007_; lean_object* v_k_1008_; lean_object* v_v_1009_; lean_object* v_l_1010_; lean_object* v_r_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v_size_1006_ = lean_ctor_get(v_l_993_, 0);
v_size_1007_ = lean_ctor_get(v_r_994_, 0);
v_k_1008_ = lean_ctor_get(v_r_994_, 1);
v_v_1009_ = lean_ctor_get(v_r_994_, 2);
v_l_1010_ = lean_ctor_get(v_r_994_, 3);
v_r_1011_ = lean_ctor_get(v_r_994_, 4);
v___x_1012_ = lean_unsigned_to_nat(2u);
v___x_1013_ = lean_nat_mul(v___x_1012_, v_size_1006_);
v___x_1014_ = lean_nat_dec_lt(v_size_1007_, v___x_1013_);
lean_dec(v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1043_; 
lean_inc(v_r_1011_);
lean_inc(v_l_1010_);
lean_inc(v_v_1009_);
lean_inc(v_k_1008_);
v_isSharedCheck_1043_ = !lean_is_exclusive(v_r_994_);
if (v_isSharedCheck_1043_ == 0)
{
lean_object* v_unused_1044_; lean_object* v_unused_1045_; lean_object* v_unused_1046_; lean_object* v_unused_1047_; lean_object* v_unused_1048_; 
v_unused_1044_ = lean_ctor_get(v_r_994_, 4);
lean_dec(v_unused_1044_);
v_unused_1045_ = lean_ctor_get(v_r_994_, 3);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v_r_994_, 2);
lean_dec(v_unused_1046_);
v_unused_1047_ = lean_ctor_get(v_r_994_, 1);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v_r_994_, 0);
lean_dec(v_unused_1048_);
v___x_1016_ = v_r_994_;
v_isShared_1017_ = v_isSharedCheck_1043_;
goto v_resetjp_1015_;
}
else
{
lean_dec(v_r_994_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1043_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___x_1031_; lean_object* v___y_1033_; 
v___x_1018_ = lean_nat_add(v___x_988_, v_size_990_);
lean_dec(v_size_990_);
v___x_1019_ = lean_nat_add(v___x_1018_, v_size_989_);
lean_dec(v___x_1018_);
v___x_1031_ = lean_nat_add(v___x_988_, v_size_1006_);
if (lean_obj_tag(v_l_1010_) == 0)
{
lean_object* v_size_1041_; 
v_size_1041_ = lean_ctor_get(v_l_1010_, 0);
lean_inc(v_size_1041_);
v___y_1033_ = v_size_1041_;
goto v___jp_1032_;
}
else
{
lean_object* v___x_1042_; 
v___x_1042_ = lean_unsigned_to_nat(0u);
v___y_1033_ = v___x_1042_;
goto v___jp_1032_;
}
v___jp_1020_:
{
lean_object* v___x_1024_; lean_object* v___x_1026_; 
v___x_1024_ = lean_nat_add(v___y_1021_, v___y_1023_);
lean_dec(v___y_1023_);
lean_dec(v___y_1021_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 4, v_impl_987_);
lean_ctor_set(v___x_1016_, 3, v_r_1011_);
lean_ctor_set(v___x_1016_, 2, v_v_495_);
lean_ctor_set(v___x_1016_, 1, v_k_494_);
lean_ctor_set(v___x_1016_, 0, v___x_1024_);
v___x_1026_ = v___x_1016_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1030_, 3, v_r_1011_);
lean_ctor_set(v_reuseFailAlloc_1030_, 4, v_impl_987_);
v___x_1026_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1028_; 
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 4, v___x_1026_);
lean_ctor_set(v___x_1004_, 3, v___y_1022_);
lean_ctor_set(v___x_1004_, 2, v_v_1009_);
lean_ctor_set(v___x_1004_, 1, v_k_1008_);
lean_ctor_set(v___x_1004_, 0, v___x_1019_);
v___x_1028_ = v___x_1004_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_k_1008_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v_v_1009_);
lean_ctor_set(v_reuseFailAlloc_1029_, 3, v___y_1022_);
lean_ctor_set(v_reuseFailAlloc_1029_, 4, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
v___jp_1032_:
{
lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1034_ = lean_nat_add(v___x_1031_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec(v___x_1031_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_1010_);
lean_ctor_set(v___x_499_, 3, v_l_993_);
lean_ctor_set(v___x_499_, 2, v_v_992_);
lean_ctor_set(v___x_499_, 1, v_k_991_);
lean_ctor_set(v___x_499_, 0, v___x_1034_);
v___x_1036_ = v___x_499_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_k_991_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v_v_992_);
lean_ctor_set(v_reuseFailAlloc_1040_, 3, v_l_993_);
lean_ctor_set(v_reuseFailAlloc_1040_, 4, v_l_1010_);
v___x_1036_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_nat_add(v___x_988_, v_size_989_);
lean_dec(v_size_989_);
if (lean_obj_tag(v_r_1011_) == 0)
{
lean_object* v_size_1038_; 
v_size_1038_ = lean_ctor_get(v_r_1011_, 0);
lean_inc(v_size_1038_);
v___y_1021_ = v___x_1037_;
v___y_1022_ = v___x_1036_;
v___y_1023_ = v_size_1038_;
goto v___jp_1020_;
}
else
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_unsigned_to_nat(0u);
v___y_1021_ = v___x_1037_;
v___y_1022_ = v___x_1036_;
v___y_1023_ = v___x_1039_;
goto v___jp_1020_;
}
}
}
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
lean_del_object(v___x_499_);
v___x_1049_ = lean_nat_add(v___x_988_, v_size_990_);
lean_dec(v_size_990_);
v___x_1050_ = lean_nat_add(v___x_1049_, v_size_989_);
lean_dec(v___x_1049_);
v___x_1051_ = lean_nat_add(v___x_988_, v_size_989_);
lean_dec(v_size_989_);
v___x_1052_ = lean_nat_add(v___x_1051_, v_size_1007_);
lean_dec(v___x_1051_);
lean_inc_ref(v_impl_987_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 4, v_impl_987_);
lean_ctor_set(v___x_1004_, 3, v_r_994_);
lean_ctor_set(v___x_1004_, 2, v_v_495_);
lean_ctor_set(v___x_1004_, 1, v_k_494_);
lean_ctor_set(v___x_1004_, 0, v___x_1052_);
v___x_1054_ = v___x_1004_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1067_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1067_, 3, v_r_994_);
lean_ctor_set(v_reuseFailAlloc_1067_, 4, v_impl_987_);
v___x_1054_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_isSharedCheck_1061_ = !lean_is_exclusive(v_impl_987_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; lean_object* v_unused_1063_; lean_object* v_unused_1064_; lean_object* v_unused_1065_; lean_object* v_unused_1066_; 
v_unused_1062_ = lean_ctor_get(v_impl_987_, 4);
lean_dec(v_unused_1062_);
v_unused_1063_ = lean_ctor_get(v_impl_987_, 3);
lean_dec(v_unused_1063_);
v_unused_1064_ = lean_ctor_get(v_impl_987_, 2);
lean_dec(v_unused_1064_);
v_unused_1065_ = lean_ctor_get(v_impl_987_, 1);
lean_dec(v_unused_1065_);
v_unused_1066_ = lean_ctor_get(v_impl_987_, 0);
lean_dec(v_unused_1066_);
v___x_1056_ = v_impl_987_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_dec(v_impl_987_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 4, v___x_1054_);
lean_ctor_set(v___x_1056_, 3, v_l_993_);
lean_ctor_set(v___x_1056_, 2, v_v_992_);
lean_ctor_set(v___x_1056_, 1, v_k_991_);
lean_ctor_set(v___x_1056_, 0, v___x_1050_);
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_k_991_);
lean_ctor_set(v_reuseFailAlloc_1060_, 2, v_v_992_);
lean_ctor_set(v_reuseFailAlloc_1060_, 3, v_l_993_);
lean_ctor_set(v_reuseFailAlloc_1060_, 4, v___x_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v_size_1074_ = lean_ctor_get(v_impl_987_, 0);
lean_inc(v_size_1074_);
v___x_1075_ = lean_nat_add(v___x_988_, v_size_1074_);
lean_dec(v_size_1074_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_impl_987_);
lean_ctor_set(v___x_499_, 0, v___x_1075_);
v___x_1077_ = v___x_499_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v_impl_987_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
else
{
if (lean_obj_tag(v_l_496_) == 0)
{
lean_object* v_l_1079_; 
v_l_1079_ = lean_ctor_get(v_l_496_, 3);
if (lean_obj_tag(v_l_1079_) == 0)
{
lean_object* v_r_1080_; 
lean_inc_ref(v_l_1079_);
v_r_1080_ = lean_ctor_get(v_l_496_, 4);
lean_inc(v_r_1080_);
if (lean_obj_tag(v_r_1080_) == 0)
{
lean_object* v_size_1081_; lean_object* v_k_1082_; lean_object* v_v_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1096_; 
v_size_1081_ = lean_ctor_get(v_l_496_, 0);
v_k_1082_ = lean_ctor_get(v_l_496_, 1);
v_v_1083_ = lean_ctor_get(v_l_496_, 2);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; lean_object* v_unused_1098_; 
v_unused_1097_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_1098_);
v___x_1085_ = v_l_496_;
v_isShared_1086_ = v_isSharedCheck_1096_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_v_1083_);
lean_inc(v_k_1082_);
lean_inc(v_size_1081_);
lean_dec(v_l_496_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1096_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_size_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1091_; 
v_size_1087_ = lean_ctor_get(v_r_1080_, 0);
v___x_1088_ = lean_nat_add(v___x_988_, v_size_1081_);
lean_dec(v_size_1081_);
v___x_1089_ = lean_nat_add(v___x_988_, v_size_1087_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 4, v_impl_987_);
lean_ctor_set(v___x_1085_, 3, v_r_1080_);
lean_ctor_set(v___x_1085_, 2, v_v_495_);
lean_ctor_set(v___x_1085_, 1, v_k_494_);
lean_ctor_set(v___x_1085_, 0, v___x_1089_);
v___x_1091_ = v___x_1085_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1095_, 3, v_r_1080_);
lean_ctor_set(v_reuseFailAlloc_1095_, 4, v_impl_987_);
v___x_1091_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1093_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_1091_);
lean_ctor_set(v___x_499_, 3, v_l_1079_);
lean_ctor_set(v___x_499_, 2, v_v_1083_);
lean_ctor_set(v___x_499_, 1, v_k_1082_);
lean_ctor_set(v___x_499_, 0, v___x_1088_);
v___x_1093_ = v___x_499_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_k_1082_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_v_1083_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v_l_1079_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v_k_1099_; lean_object* v_v_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1111_; 
v_k_1099_ = lean_ctor_get(v_l_496_, 1);
v_v_1100_ = lean_ctor_get(v_l_496_, 2);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; lean_object* v_unused_1113_; lean_object* v_unused_1114_; 
v_unused_1112_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_1112_);
v_unused_1113_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_1113_);
v_unused_1114_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_1114_);
v___x_1102_ = v_l_496_;
v_isShared_1103_ = v_isSharedCheck_1111_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_v_1100_);
lean_inc(v_k_1099_);
lean_dec(v_l_496_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1111_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_unsigned_to_nat(3u);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 3, v_r_1080_);
lean_ctor_set(v___x_1102_, 2, v_v_495_);
lean_ctor_set(v___x_1102_, 1, v_k_494_);
lean_ctor_set(v___x_1102_, 0, v___x_988_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1110_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1110_, 3, v_r_1080_);
lean_ctor_set(v_reuseFailAlloc_1110_, 4, v_r_1080_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1108_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_1106_);
lean_ctor_set(v___x_499_, 3, v_l_1079_);
lean_ctor_set(v___x_499_, 2, v_v_1100_);
lean_ctor_set(v___x_499_, 1, v_k_1099_);
lean_ctor_set(v___x_499_, 0, v___x_1104_);
v___x_1108_ = v___x_499_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_k_1099_);
lean_ctor_set(v_reuseFailAlloc_1109_, 2, v_v_1100_);
lean_ctor_set(v_reuseFailAlloc_1109_, 3, v_l_1079_);
lean_ctor_set(v_reuseFailAlloc_1109_, 4, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
else
{
lean_object* v_r_1115_; 
v_r_1115_ = lean_ctor_get(v_l_496_, 4);
lean_inc(v_r_1115_);
if (lean_obj_tag(v_r_1115_) == 0)
{
lean_object* v_k_1116_; lean_object* v_v_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1140_; 
lean_inc(v_l_1079_);
v_k_1116_ = lean_ctor_get(v_l_496_, 1);
v_v_1117_ = lean_ctor_get(v_l_496_, 2);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; lean_object* v_unused_1142_; lean_object* v_unused_1143_; 
v_unused_1141_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_1141_);
v_unused_1142_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_1142_);
v_unused_1143_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_1143_);
v___x_1119_ = v_l_496_;
v_isShared_1120_ = v_isSharedCheck_1140_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_v_1117_);
lean_inc(v_k_1116_);
lean_dec(v_l_496_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1140_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v_k_1121_; lean_object* v_v_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1136_; 
v_k_1121_ = lean_ctor_get(v_r_1115_, 1);
v_v_1122_ = lean_ctor_get(v_r_1115_, 2);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1136_ == 0)
{
lean_object* v_unused_1137_; lean_object* v_unused_1138_; lean_object* v_unused_1139_; 
v_unused_1137_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1139_);
v___x_1124_ = v_r_1115_;
v_isShared_1125_ = v_isSharedCheck_1136_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_v_1122_);
lean_inc(v_k_1121_);
lean_dec(v_r_1115_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1136_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1126_ = lean_unsigned_to_nat(3u);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 4, v_l_1079_);
lean_ctor_set(v___x_1124_, 3, v_l_1079_);
lean_ctor_set(v___x_1124_, 2, v_v_1117_);
lean_ctor_set(v___x_1124_, 1, v_k_1116_);
lean_ctor_set(v___x_1124_, 0, v___x_988_);
v___x_1128_ = v___x_1124_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_k_1116_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_v_1117_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_l_1079_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_l_1079_);
v___x_1128_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1130_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 4, v_l_1079_);
lean_ctor_set(v___x_1119_, 2, v_v_495_);
lean_ctor_set(v___x_1119_, 1, v_k_494_);
lean_ctor_set(v___x_1119_, 0, v___x_988_);
v___x_1130_ = v___x_1119_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1134_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1134_, 3, v_l_1079_);
lean_ctor_set(v_reuseFailAlloc_1134_, 4, v_l_1079_);
v___x_1130_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_1130_);
lean_ctor_set(v___x_499_, 3, v___x_1128_);
lean_ctor_set(v___x_499_, 2, v_v_1122_);
lean_ctor_set(v___x_499_, 1, v_k_1121_);
lean_ctor_set(v___x_499_, 0, v___x_1126_);
v___x_1132_ = v___x_499_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_k_1121_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v_v_1122_);
lean_ctor_set(v_reuseFailAlloc_1133_, 3, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1133_, 4, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1144_ = lean_unsigned_to_nat(2u);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_r_1115_);
lean_ctor_set(v___x_499_, 0, v___x_1144_);
v___x_1146_ = v___x_499_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_1147_, 4, v_r_1115_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
else
{
lean_object* v___x_1149_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_496_);
lean_ctor_set(v___x_499_, 0, v___x_988_);
v___x_1149_ = v___x_499_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_1150_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_1150_, 4, v_l_496_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
}
}
else
{
return v_t_493_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object* v_k_1153_, lean_object* v_t_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1153_, v_t_1154_);
lean_dec(v_k_1153_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object* v_declName_1156_){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1158_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1159_ = lean_st_ref_take(v___x_1158_);
v___x_1160_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_declName_1156_, v___x_1159_);
v___x_1161_ = lean_st_ref_put(v___x_1158_, v___x_1160_);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object* v_declName_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_removeBuiltinDocString(v_declName_1163_);
lean_dec(v_declName_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object* v_00_u03b2_1166_, lean_object* v_k_1167_, lean_object* v_t_1168_, lean_object* v_h_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1167_, v_t_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object* v_00_u03b2_1171_, lean_object* v_k_1172_, lean_object* v_t_1173_, lean_object* v_h_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(v_00_u03b2_1171_, v_k_1172_, v_t_1173_, v_h_1174_);
lean_dec(v_k_1172_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings(){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1178_ = lean_st_ref_get(v___x_1177_);
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_getBuiltinVersoDocStrings();
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object* v_docString_1182_, lean_object* v_declName_1183_, lean_object* v_env_1184_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = l_Lean_docStringExt;
v___x_1186_ = l_String_removeLeadingSpaces(v_docString_1182_);
v___x_1187_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1185_, v_env_1184_, v_declName_1183_, v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_1188_, lean_object* v___f_1189_, lean_object* v_____r_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_apply_1(v_modifyEnv_1188_, v___f_1189_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(l_Lean_addDocStringCore___redArg___lam__2___closed__0));
v___x_1194_ = l_Lean_stringToMessageData(v___x_1193_);
return v___x_1194_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_Lean_addDocStringCore___redArg___lam__2___closed__2));
v___x_1197_ = l_Lean_stringToMessageData(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object* v_declName_1198_, lean_object* v_modifyEnv_1199_, lean_object* v___f_1200_, lean_object* v_inst_1201_, lean_object* v_inst_1202_, lean_object* v_toBind_1203_, lean_object* v___f_1204_, lean_object* v_____do__lift_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1205_, v_declName_1198_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v___x_1207_; 
lean_dec(v___f_1204_);
lean_dec(v_toBind_1203_);
lean_dec_ref(v_inst_1202_);
lean_dec_ref(v_inst_1201_);
lean_dec(v_declName_1198_);
v___x_1207_ = lean_apply_1(v_modifyEnv_1199_, v___f_1200_);
return v___x_1207_;
}
else
{
uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
lean_dec_ref_known(v___x_1206_, 1);
lean_dec_ref(v___f_1200_);
lean_dec(v_modifyEnv_1199_);
v___x_1208_ = 0;
v___x_1209_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__1, &l_Lean_addDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1);
v___x_1210_ = l_Lean_MessageData_ofConstName(v_declName_1198_, v___x_1208_);
v___x_1211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1209_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1211_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = l_Lean_throwError___redArg(v_inst_1201_, v_inst_1202_, v___x_1213_);
v___x_1215_ = lean_apply_4(v_toBind_1203_, lean_box(0), lean_box(0), v___x_1214_, v___f_1204_);
return v___x_1215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_1216_, lean_object* v_modifyEnv_1217_, lean_object* v___f_1218_, lean_object* v_inst_1219_, lean_object* v_inst_1220_, lean_object* v_toBind_1221_, lean_object* v___f_1222_, lean_object* v_____do__lift_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_addDocStringCore___redArg___lam__2(v_declName_1216_, v_modifyEnv_1217_, v___f_1218_, v_inst_1219_, v_inst_1220_, v_toBind_1221_, v___f_1222_, v_____do__lift_1223_);
lean_dec_ref(v_____do__lift_1223_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object* v_inst_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_declName_1228_, lean_object* v_docString_1229_){
_start:
{
lean_object* v_toBind_1230_; lean_object* v_getEnv_1231_; lean_object* v_modifyEnv_1232_; lean_object* v___f_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___x_1236_; 
v_toBind_1230_ = lean_ctor_get(v_inst_1225_, 1);
lean_inc_n(v_toBind_1230_, 2);
v_getEnv_1231_ = lean_ctor_get(v_inst_1227_, 0);
lean_inc(v_getEnv_1231_);
v_modifyEnv_1232_ = lean_ctor_get(v_inst_1227_, 1);
lean_inc_n(v_modifyEnv_1232_, 2);
lean_dec_ref(v_inst_1227_);
lean_inc(v_declName_1228_);
v___f_1233_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1233_, 0, v_docString_1229_);
lean_closure_set(v___f_1233_, 1, v_declName_1228_);
lean_inc_ref(v___f_1233_);
v___f_1234_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1234_, 0, v_modifyEnv_1232_);
lean_closure_set(v___f_1234_, 1, v___f_1233_);
v___f_1235_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1235_, 0, v_declName_1228_);
lean_closure_set(v___f_1235_, 1, v_modifyEnv_1232_);
lean_closure_set(v___f_1235_, 2, v___f_1233_);
lean_closure_set(v___f_1235_, 3, v_inst_1225_);
lean_closure_set(v___f_1235_, 4, v_inst_1226_);
lean_closure_set(v___f_1235_, 5, v_toBind_1230_);
lean_closure_set(v___f_1235_, 6, v___f_1234_);
v___x_1236_ = lean_apply_4(v_toBind_1230_, lean_box(0), lean_box(0), v_getEnv_1231_, v___f_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object* v_m_1237_, lean_object* v_inst_1238_, lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_declName_1242_, lean_object* v_docString_1243_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_addDocStringCore___redArg(v_inst_1238_, v_inst_1239_, v_inst_1240_, v_declName_1242_, v_docString_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object* v_m_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_inst_1249_, lean_object* v_declName_1250_, lean_object* v_docString_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_addDocStringCore(v_m_1245_, v_inst_1246_, v_inst_1247_, v_inst_1248_, v_inst_1249_, v_declName_1250_, v_docString_1251_);
lean_dec(v_inst_1249_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object* v_declName_1254_, lean_object* v_x_1255_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__0___closed__0));
v___x_1257_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___x_1256_, v_declName_1254_, v_x_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object* v___f_1258_, lean_object* v_env_1259_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1260_ = l_Lean_docStringExt;
v___x_1261_ = lean_box(2);
v___x_1262_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_1263_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_1260_, v_env_1259_, v___f_1258_, v___x_1261_, v___x_1262_);
return v___x_1263_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__3___closed__0));
v___x_1266_ = l_Lean_stringToMessageData(v___x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object* v_declName_1267_, lean_object* v_modifyEnv_1268_, lean_object* v___f_1269_, lean_object* v_inst_1270_, lean_object* v_inst_1271_, lean_object* v_toBind_1272_, lean_object* v___f_1273_, lean_object* v_____do__lift_1274_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1274_, v_declName_1267_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v___x_1276_; 
lean_dec(v___f_1273_);
lean_dec(v_toBind_1272_);
lean_dec_ref(v_inst_1271_);
lean_dec_ref(v_inst_1270_);
lean_dec(v_declName_1267_);
v___x_1276_ = lean_apply_1(v_modifyEnv_1268_, v___f_1269_);
return v___x_1276_;
}
else
{
uint8_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_dec_ref_known(v___x_1275_, 1);
lean_dec_ref(v___f_1269_);
lean_dec(v_modifyEnv_1268_);
v___x_1277_ = 0;
v___x_1278_ = lean_obj_once(&l_Lean_removeDocStringCore___redArg___lam__3___closed__1, &l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1);
v___x_1279_ = l_Lean_MessageData_ofConstName(v_declName_1267_, v___x_1277_);
v___x_1280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1280_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = l_Lean_throwError___redArg(v_inst_1270_, v_inst_1271_, v___x_1282_);
v___x_1284_ = lean_apply_4(v_toBind_1272_, lean_box(0), lean_box(0), v___x_1283_, v___f_1273_);
return v___x_1284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object* v_declName_1285_, lean_object* v_modifyEnv_1286_, lean_object* v___f_1287_, lean_object* v_inst_1288_, lean_object* v_inst_1289_, lean_object* v_toBind_1290_, lean_object* v___f_1291_, lean_object* v_____do__lift_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lean_removeDocStringCore___redArg___lam__3(v_declName_1285_, v_modifyEnv_1286_, v___f_1287_, v_inst_1288_, v_inst_1289_, v_toBind_1290_, v___f_1291_, v_____do__lift_1292_);
lean_dec_ref(v_____do__lift_1292_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object* v_inst_1294_, lean_object* v_inst_1295_, lean_object* v_inst_1296_, lean_object* v_declName_1297_){
_start:
{
lean_object* v_toBind_1298_; lean_object* v_getEnv_1299_; lean_object* v_modifyEnv_1300_; lean_object* v___f_1301_; lean_object* v___f_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; 
v_toBind_1298_ = lean_ctor_get(v_inst_1294_, 1);
lean_inc_n(v_toBind_1298_, 2);
v_getEnv_1299_ = lean_ctor_get(v_inst_1296_, 0);
lean_inc(v_getEnv_1299_);
v_modifyEnv_1300_ = lean_ctor_get(v_inst_1296_, 1);
lean_inc_n(v_modifyEnv_1300_, 2);
lean_dec_ref(v_inst_1296_);
lean_inc(v_declName_1297_);
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1301_, 0, v_declName_1297_);
v___f_1302_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1302_, 0, v___f_1301_);
lean_inc_ref(v___f_1302_);
v___f_1303_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1303_, 0, v_modifyEnv_1300_);
lean_closure_set(v___f_1303_, 1, v___f_1302_);
v___f_1304_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_1304_, 0, v_declName_1297_);
lean_closure_set(v___f_1304_, 1, v_modifyEnv_1300_);
lean_closure_set(v___f_1304_, 2, v___f_1302_);
lean_closure_set(v___f_1304_, 3, v_inst_1294_);
lean_closure_set(v___f_1304_, 4, v_inst_1295_);
lean_closure_set(v___f_1304_, 5, v_toBind_1298_);
lean_closure_set(v___f_1304_, 6, v___f_1303_);
v___x_1305_ = lean_apply_4(v_toBind_1298_, lean_box(0), lean_box(0), v_getEnv_1299_, v___f_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object* v_m_1306_, lean_object* v_inst_1307_, lean_object* v_inst_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_declName_1311_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lean_removeDocStringCore___redArg(v_inst_1307_, v_inst_1308_, v_inst_1309_, v_declName_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object* v_m_1313_, lean_object* v_inst_1314_, lean_object* v_inst_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_declName_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_removeDocStringCore(v_m_1313_, v_inst_1314_, v_inst_1315_, v_inst_1316_, v_inst_1317_, v_declName_1318_);
lean_dec(v_inst_1317_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object* v_inst_1320_, lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_declName_1323_, lean_object* v_docString_x3f_1324_){
_start:
{
if (lean_obj_tag(v_docString_x3f_1324_) == 0)
{
lean_object* v_toApplicative_1325_; lean_object* v_toPure_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v_toApplicative_1325_ = lean_ctor_get(v_inst_1320_, 0);
lean_inc_ref(v_toApplicative_1325_);
lean_dec(v_declName_1323_);
lean_dec_ref(v_inst_1322_);
lean_dec_ref(v_inst_1321_);
lean_dec_ref(v_inst_1320_);
v_toPure_1326_ = lean_ctor_get(v_toApplicative_1325_, 1);
lean_inc(v_toPure_1326_);
lean_dec_ref(v_toApplicative_1325_);
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_apply_2(v_toPure_1326_, lean_box(0), v___x_1327_);
return v___x_1328_;
}
else
{
lean_object* v_val_1329_; lean_object* v___x_1330_; 
v_val_1329_ = lean_ctor_get(v_docString_x3f_1324_, 0);
lean_inc(v_val_1329_);
lean_dec_ref_known(v_docString_x3f_1324_, 1);
v___x_1330_ = l_Lean_addDocStringCore___redArg(v_inst_1320_, v_inst_1321_, v_inst_1322_, v_declName_1323_, v_val_1329_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object* v_m_1331_, lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_inst_1335_, lean_object* v_declName_1336_, lean_object* v_docString_x3f_1337_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_Lean_addDocStringCore_x27___redArg(v_inst_1332_, v_inst_1333_, v_inst_1334_, v_declName_1336_, v_docString_x3f_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object* v_m_1339_, lean_object* v_inst_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_declName_1344_, lean_object* v_docString_x3f_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_addDocStringCore_x27(v_m_1339_, v_inst_1340_, v_inst_1341_, v_inst_1342_, v_inst_1343_, v_declName_1344_, v_docString_x3f_1345_);
lean_dec(v_inst_1343_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object* v_declName_1347_, lean_object* v_target_1348_, lean_object* v_env_1349_){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v___x_1351_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1350_, v_env_1349_, v_declName_1347_, v_target_1348_);
return v___x_1351_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__2___closed__0));
v___x_1354_ = l_Lean_stringToMessageData(v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object* v___x_1355_, lean_object* v_target_1356_, lean_object* v_declName_1357_, lean_object* v___x_1358_, lean_object* v_modifyEnv_1359_, lean_object* v___f_1360_, lean_object* v_inst_1361_, lean_object* v_inst_1362_, lean_object* v_toBind_1363_, lean_object* v___f_1364_, lean_object* v_____do__lift_1365_){
_start:
{
lean_object* v___x_1366_; lean_object* v_toEnvExtension_1367_; lean_object* v_asyncMode_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1366_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1367_ = lean_ctor_get(v___x_1366_, 0);
v_asyncMode_1368_ = lean_ctor_get(v_toEnvExtension_1367_, 2);
v___x_1369_ = 1;
v___x_1370_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1355_, v___x_1366_, v_____do__lift_1365_, v_target_1356_, v_asyncMode_1368_, v___x_1369_);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_declName_1357_);
v___x_1372_ = l_Option_instBEq_beq___redArg(v___x_1358_, v___x_1370_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; 
lean_dec(v___f_1364_);
lean_dec(v_toBind_1363_);
lean_dec_ref(v_inst_1362_);
lean_dec_ref(v_inst_1361_);
v___x_1373_ = lean_apply_1(v_modifyEnv_1359_, v___f_1360_);
return v___x_1373_;
}
else
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec_ref(v___f_1360_);
lean_dec(v_modifyEnv_1359_);
v___x_1374_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__2___closed__1, &l_Lean_addInheritedDocString___redArg___lam__2___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__2___closed__1);
v___x_1375_ = l_Lean_throwError___redArg(v_inst_1361_, v_inst_1362_, v___x_1374_);
v___x_1376_ = lean_apply_4(v_toBind_1363_, lean_box(0), lean_box(0), v___x_1375_, v___f_1364_);
return v___x_1376_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object* v_toBind_1377_, lean_object* v_getEnv_1378_, lean_object* v___f_1379_, lean_object* v_____r_1380_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_apply_4(v_toBind_1377_, lean_box(0), lean_box(0), v_getEnv_1378_, v___f_1379_);
return v___x_1381_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__3___closed__0));
v___x_1384_ = l_Lean_stringToMessageData(v___x_1383_);
return v___x_1384_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__3___closed__2));
v___x_1387_ = l_Lean_stringToMessageData(v___x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object* v___x_1388_, lean_object* v_declName_1389_, lean_object* v_toBind_1390_, lean_object* v_getEnv_1391_, lean_object* v___f_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v___f_1395_, lean_object* v_____do__lift_1396_){
_start:
{
lean_object* v___x_1397_; lean_object* v_toEnvExtension_1398_; lean_object* v_asyncMode_1399_; uint8_t v___x_1400_; lean_object* v___x_1401_; 
v___x_1397_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1398_ = lean_ctor_get(v___x_1397_, 0);
v_asyncMode_1399_ = lean_ctor_get(v_toEnvExtension_1398_, 2);
v___x_1400_ = 1;
lean_inc(v_declName_1389_);
v___x_1401_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1388_, v___x_1397_, v_____do__lift_1396_, v_declName_1389_, v_asyncMode_1399_, v___x_1400_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v___x_1402_; 
lean_dec(v___f_1395_);
lean_dec_ref(v_inst_1394_);
lean_dec_ref(v_inst_1393_);
lean_dec(v_declName_1389_);
v___x_1402_ = lean_apply_4(v_toBind_1390_, lean_box(0), lean_box(0), v_getEnv_1391_, v___f_1392_);
return v___x_1402_;
}
else
{
lean_object* v___x_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_dec_ref_known(v___x_1401_, 1);
lean_dec(v___f_1392_);
lean_dec(v_getEnv_1391_);
v___x_1403_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__1, &l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1);
v___x_1404_ = 0;
v___x_1405_ = l_Lean_MessageData_ofConstName(v_declName_1389_, v___x_1404_);
v___x_1406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1403_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__3, &l_Lean_addInheritedDocString___redArg___lam__3___closed__3_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__3);
v___x_1408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = l_Lean_throwError___redArg(v_inst_1393_, v_inst_1394_, v___x_1408_);
v___x_1410_ = lean_apply_4(v_toBind_1390_, lean_box(0), lean_box(0), v___x_1409_, v___f_1395_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object* v_declName_1411_, lean_object* v_toBind_1412_, lean_object* v_getEnv_1413_, lean_object* v___f_1414_, lean_object* v_inst_1415_, lean_object* v_inst_1416_, lean_object* v___f_1417_, lean_object* v_____do__lift_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1418_, v_declName_1411_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1420_; 
lean_dec(v___f_1417_);
lean_dec_ref(v_inst_1416_);
lean_dec_ref(v_inst_1415_);
lean_dec(v_declName_1411_);
v___x_1420_ = lean_apply_4(v_toBind_1412_, lean_box(0), lean_box(0), v_getEnv_1413_, v___f_1414_);
return v___x_1420_;
}
else
{
uint8_t v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_dec_ref_known(v___x_1419_, 1);
lean_dec(v___f_1414_);
lean_dec(v_getEnv_1413_);
v___x_1421_ = 0;
v___x_1422_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__3___closed__1, &l_Lean_addInheritedDocString___redArg___lam__3___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__3___closed__1);
v___x_1423_ = l_Lean_MessageData_ofConstName(v_declName_1411_, v___x_1421_);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__3, &l_Lean_addDocStringCore___redArg___lam__2___closed__3_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__3);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = l_Lean_throwError___redArg(v_inst_1415_, v_inst_1416_, v___x_1426_);
v___x_1428_ = lean_apply_4(v_toBind_1412_, lean_box(0), lean_box(0), v___x_1427_, v___f_1417_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object* v_declName_1429_, lean_object* v_toBind_1430_, lean_object* v_getEnv_1431_, lean_object* v___f_1432_, lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v___f_1435_, lean_object* v_____do__lift_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lean_addInheritedDocString___redArg___lam__5(v_declName_1429_, v_toBind_1430_, v_getEnv_1431_, v___f_1432_, v_inst_1433_, v_inst_1434_, v___f_1435_, v_____do__lift_1436_);
lean_dec_ref(v_____do__lift_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object* v_inst_1439_, lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_declName_1442_, lean_object* v_target_1443_){
_start:
{
lean_object* v_toBind_1444_; lean_object* v_getEnv_1445_; lean_object* v_modifyEnv_1446_; lean_object* v___f_1447_; lean_object* v___f_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___f_1451_; lean_object* v___f_1452_; lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___f_1455_; lean_object* v___x_1456_; 
v_toBind_1444_ = lean_ctor_get(v_inst_1439_, 1);
lean_inc_n(v_toBind_1444_, 6);
v_getEnv_1445_ = lean_ctor_get(v_inst_1441_, 0);
lean_inc_n(v_getEnv_1445_, 5);
v_modifyEnv_1446_ = lean_ctor_get(v_inst_1441_, 1);
lean_inc_n(v_modifyEnv_1446_, 2);
lean_dec_ref(v_inst_1441_);
lean_inc(v_target_1443_);
lean_inc_n(v_declName_1442_, 3);
v___f_1447_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1447_, 0, v_declName_1442_);
lean_closure_set(v___f_1447_, 1, v_target_1443_);
lean_inc_ref(v___f_1447_);
v___f_1448_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1448_, 0, v_modifyEnv_1446_);
lean_closure_set(v___f_1448_, 1, v___f_1447_);
v___x_1449_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___closed__0));
v___x_1450_ = l_Lean_instInhabitedName;
lean_inc_ref_n(v_inst_1440_, 2);
lean_inc_ref_n(v_inst_1439_, 2);
v___f_1451_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__2), 11, 10);
lean_closure_set(v___f_1451_, 0, v___x_1450_);
lean_closure_set(v___f_1451_, 1, v_target_1443_);
lean_closure_set(v___f_1451_, 2, v_declName_1442_);
lean_closure_set(v___f_1451_, 3, v___x_1449_);
lean_closure_set(v___f_1451_, 4, v_modifyEnv_1446_);
lean_closure_set(v___f_1451_, 5, v___f_1447_);
lean_closure_set(v___f_1451_, 6, v_inst_1439_);
lean_closure_set(v___f_1451_, 7, v_inst_1440_);
lean_closure_set(v___f_1451_, 8, v_toBind_1444_);
lean_closure_set(v___f_1451_, 9, v___f_1448_);
lean_inc_ref(v___f_1451_);
v___f_1452_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1452_, 0, v_toBind_1444_);
lean_closure_set(v___f_1452_, 1, v_getEnv_1445_);
lean_closure_set(v___f_1452_, 2, v___f_1451_);
v___f_1453_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__3), 9, 8);
lean_closure_set(v___f_1453_, 0, v___x_1450_);
lean_closure_set(v___f_1453_, 1, v_declName_1442_);
lean_closure_set(v___f_1453_, 2, v_toBind_1444_);
lean_closure_set(v___f_1453_, 3, v_getEnv_1445_);
lean_closure_set(v___f_1453_, 4, v___f_1451_);
lean_closure_set(v___f_1453_, 5, v_inst_1439_);
lean_closure_set(v___f_1453_, 6, v_inst_1440_);
lean_closure_set(v___f_1453_, 7, v___f_1452_);
lean_inc_ref(v___f_1453_);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1454_, 0, v_toBind_1444_);
lean_closure_set(v___f_1454_, 1, v_getEnv_1445_);
lean_closure_set(v___f_1454_, 2, v___f_1453_);
v___f_1455_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_1455_, 0, v_declName_1442_);
lean_closure_set(v___f_1455_, 1, v_toBind_1444_);
lean_closure_set(v___f_1455_, 2, v_getEnv_1445_);
lean_closure_set(v___f_1455_, 3, v___f_1453_);
lean_closure_set(v___f_1455_, 4, v_inst_1439_);
lean_closure_set(v___f_1455_, 5, v_inst_1440_);
lean_closure_set(v___f_1455_, 6, v___f_1454_);
v___x_1456_ = lean_apply_4(v_toBind_1444_, lean_box(0), lean_box(0), v_getEnv_1445_, v___f_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object* v_m_1457_, lean_object* v_inst_1458_, lean_object* v_inst_1459_, lean_object* v_inst_1460_, lean_object* v_declName_1461_, lean_object* v_target_1462_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_addInheritedDocString___redArg(v_inst_1458_, v_inst_1459_, v_inst_1460_, v_declName_1461_, v_target_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object* v_env_1465_, lean_object* v_declName_1466_, uint8_t v_includeBuiltin_1467_){
_start:
{
lean_object* v_md_1470_; lean_object* v_v_1475_; lean_object* v___x_1482_; lean_object* v_toEnvExtension_1483_; lean_object* v_asyncMode_1484_; lean_object* v___x_1485_; uint8_t v___x_1486_; lean_object* v___x_1487_; 
v___x_1482_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1483_ = lean_ctor_get(v___x_1482_, 0);
v_asyncMode_1484_ = lean_ctor_get(v_toEnvExtension_1483_, 2);
v___x_1485_ = l_Lean_instInhabitedName;
v___x_1486_ = 1;
lean_inc(v_declName_1466_);
lean_inc_ref(v_env_1465_);
v___x_1487_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1485_, v___x_1482_, v_env_1465_, v_declName_1466_, v_asyncMode_1484_, v___x_1486_);
if (lean_obj_tag(v___x_1487_) == 1)
{
lean_object* v_val_1488_; 
lean_dec(v_declName_1466_);
v_val_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_val_1488_);
lean_dec_ref_known(v___x_1487_, 1);
v_declName_1466_ = v_val_1488_;
goto _start;
}
else
{
lean_object* v___x_1490_; lean_object* v_toEnvExtension_1491_; lean_object* v_asyncMode_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
lean_dec(v___x_1487_);
v___x_1490_ = l_Lean_docStringExt;
v_toEnvExtension_1491_ = lean_ctor_get(v___x_1490_, 0);
v_asyncMode_1492_ = lean_ctor_get(v_toEnvExtension_1491_, 2);
v___x_1493_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
lean_inc(v_declName_1466_);
lean_inc_ref(v_env_1465_);
v___x_1494_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1493_, v___x_1490_, v_env_1465_, v_declName_1466_, v_asyncMode_1492_, v___x_1486_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v___x_1495_; lean_object* v_toEnvExtension_1496_; lean_object* v_asyncMode_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1495_ = l_Lean_versoDocStringExt;
v_toEnvExtension_1496_ = lean_ctor_get(v___x_1495_, 0);
v_asyncMode_1497_ = lean_ctor_get(v_toEnvExtension_1496_, 2);
v___x_1498_ = ((lean_object*)(l_Lean_instInhabitedVersoDocString_default));
lean_inc(v_declName_1466_);
v___x_1499_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1498_, v___x_1495_, v_env_1465_, v_declName_1466_, v_asyncMode_1497_, v___x_1486_);
if (lean_obj_tag(v___x_1499_) == 0)
{
if (v_includeBuiltin_1467_ == 0)
{
lean_dec(v_declName_1466_);
goto v___jp_1479_;
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1500_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1501_ = lean_st_ref_get(v___x_1500_);
v___x_1502_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1501_, v_declName_1466_);
lean_dec(v___x_1501_);
if (lean_obj_tag(v___x_1502_) == 1)
{
lean_object* v_val_1503_; 
lean_dec(v_declName_1466_);
v_val_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_val_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v_md_1470_ = v_val_1503_;
goto v___jp_1469_;
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v___x_1502_);
v___x_1504_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1505_ = lean_st_ref_get(v___x_1504_);
v___x_1506_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1505_, v_declName_1466_);
lean_dec(v_declName_1466_);
lean_dec(v___x_1505_);
if (lean_obj_tag(v___x_1506_) == 1)
{
lean_object* v_val_1507_; 
v_val_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_val_1507_);
lean_dec_ref_known(v___x_1506_, 1);
v_v_1475_ = v_val_1507_;
goto v___jp_1474_;
}
else
{
lean_dec(v___x_1506_);
goto v___jp_1479_;
}
}
}
}
else
{
lean_object* v_val_1508_; 
lean_dec(v_declName_1466_);
v_val_1508_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_val_1508_);
lean_dec_ref_known(v___x_1499_, 1);
v_v_1475_ = v_val_1508_;
goto v___jp_1474_;
}
}
else
{
lean_object* v_val_1509_; 
lean_dec(v_declName_1466_);
lean_dec_ref(v_env_1465_);
v_val_1509_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_val_1509_);
lean_dec_ref_known(v___x_1494_, 1);
v_md_1470_ = v_val_1509_;
goto v___jp_1469_;
}
}
v___jp_1469_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1471_, 0, v_md_1470_);
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
v___jp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1476_, 0, v_v_1475_);
v___x_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
v___jp_1479_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = lean_box(0);
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
return v___x_1481_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object* v_env_1510_, lean_object* v_declName_1511_, lean_object* v_includeBuiltin_1512_, lean_object* v_a_1513_){
_start:
{
uint8_t v_includeBuiltin_boxed_1514_; lean_object* v_res_1515_; 
v_includeBuiltin_boxed_1514_ = lean_unbox(v_includeBuiltin_1512_);
v_res_1515_ = l_Lean_findInternalDocString_x3f(v_env_1510_, v_declName_1511_, v_includeBuiltin_boxed_1514_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v_es_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_array_mk(v_es_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v_x_1520_, lean_object* v_x_1521_, lean_object* v_es_1522_){
_start:
{
lean_object* v_ents_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_ents_1523_ = lean_array_mk(v_es_1522_);
v___x_1524_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
lean_inc_ref(v_ents_1523_);
v___x_1525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v_ents_1523_);
lean_ctor_set(v___x_1525_, 2, v_ents_1523_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v_x_1526_, lean_object* v_x_1527_, lean_object* v_es_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(v_x_1526_, v_x_1527_, v_es_1528_);
lean_dec_ref(v_x_1527_);
lean_dec_ref(v_x_1526_);
return v_res_1529_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(32u);
v___x_1531_ = lean_mk_empty_array_with_capacity(v___x_1530_);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v___x_1533_, lean_object* v_x_1534_){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; size_t v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = lean_unsigned_to_nat(32u);
v___x_1536_ = lean_mk_empty_array_with_capacity(v___x_1535_);
v___x_1537_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_);
v___x_1538_ = ((size_t)5ULL);
lean_inc(v___x_1533_);
v___x_1539_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1539_, 0, v___x_1537_);
lean_ctor_set(v___x_1539_, 1, v___x_1536_);
lean_ctor_set(v___x_1539_, 2, v___x_1533_);
lean_ctor_set(v___x_1539_, 3, v___x_1533_);
lean_ctor_set_usize(v___x_1539_, 4, v___x_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v___x_1540_, lean_object* v_x_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(v___x_1540_, v_x_1541_);
lean_dec_ref(v_x_1541_);
return v_res_1542_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1549_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___x_1550_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_1551_ = l_Lean_Name_str___override(v___x_1550_, v___x_1549_);
return v___x_1551_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___f_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1554_ = lean_box(0);
v___x_1555_ = lean_box(2);
v___x_1556_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___f_1557_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___f_1558_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___f_1559_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___x_1560_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_);
v___x_1561_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
lean_ctor_set(v___x_1561_, 1, v___f_1559_);
lean_ctor_set(v___x_1561_, 2, v___f_1558_);
lean_ctor_set(v___x_1561_, 3, v___f_1557_);
lean_ctor_set(v___x_1561_, 4, v___x_1556_);
lean_ctor_set(v___x_1561_, 5, v___x_1555_);
lean_ctor_set(v___x_1561_, 6, v___x_1554_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_);
v___x_1564_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object* v_env_1567_, lean_object* v_doc_1568_){
_start:
{
lean_object* v___x_1569_; lean_object* v_toEnvExtension_1570_; lean_object* v_asyncMode_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1569_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_1570_ = lean_ctor_get(v___x_1569_, 0);
v_asyncMode_1571_ = lean_ctor_get(v_toEnvExtension_1570_, 2);
v___x_1572_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_1573_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1569_, v_env_1567_, v_doc_1568_, v_asyncMode_1571_, v___x_1572_);
return v___x_1573_;
}
}
static lean_object* _init_l_Lean_getMainModuleDoc___closed__0(void){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object* v_env_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v_toEnvExtension_1577_; lean_object* v_asyncMode_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1576_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_1577_ = lean_ctor_get(v___x_1576_, 0);
v_asyncMode_1578_ = lean_ctor_get(v_toEnvExtension_1577_, 2);
v___x_1579_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_1580_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_1581_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1579_, v___x_1576_, v_env_1575_, v_asyncMode_1578_, v___x_1580_);
return v___x_1581_;
}
}
static lean_object* _init_l_Lean_getModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1582_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_1583_ = lean_box(0);
v___x_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
lean_ctor_set(v___x_1584_, 1, v___x_1582_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object* v_env_1585_, lean_object* v_moduleName_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Environment_getModuleIdx_x3f(v_env_1585_, v_moduleName_1586_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_box(0);
return v___x_1588_;
}
else
{
lean_object* v_val_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1600_; 
v_val_1589_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1591_ = v___x_1587_;
v_isShared_1592_ = v_isSharedCheck_1600_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_val_1589_);
lean_dec(v___x_1587_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1600_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1593_ = lean_obj_once(&l_Lean_getModuleDoc_x3f___closed__0, &l_Lean_getModuleDoc_x3f___closed__0_once, _init_l_Lean_getModuleDoc_x3f___closed__0);
v___x_1594_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v___x_1595_ = 1;
v___x_1596_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1593_, v___x_1594_, v_env_1585_, v_val_1589_, v___x_1595_);
lean_dec(v_val_1589_);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v___x_1596_);
v___x_1598_ = v___x_1591_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1596_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object* v_env_1601_, lean_object* v_moduleName_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_getModuleDoc_x3f(v_env_1601_, v_moduleName_1602_);
lean_dec(v_moduleName_1602_);
lean_dec_ref(v_env_1601_);
return v_res_1603_;
}
}
static lean_object* _init_l_Lean_getDocStringText___redArg___closed__1(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__0));
v___x_1606_ = l_Lean_stringToMessageData(v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object* v_inst_1610_, lean_object* v_inst_1611_, lean_object* v_stx_1612_){
_start:
{
lean_object* v_toApplicative_1619_; lean_object* v_toPure_1620_; lean_object* v_val_1622_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_toApplicative_1619_ = lean_ctor_get(v_inst_1610_, 0);
v_toPure_1620_ = lean_ctor_get(v_toApplicative_1619_, 1);
v___x_1629_ = lean_unsigned_to_nat(1u);
v___x_1630_ = l_Lean_Syntax_getArg(v_stx_1612_, v___x_1629_);
switch(lean_obj_tag(v___x_1630_))
{
case 2:
{
lean_object* v_val_1631_; 
lean_inc(v_toPure_1620_);
lean_dec(v_stx_1612_);
lean_dec_ref(v_inst_1611_);
lean_dec_ref(v_inst_1610_);
v_val_1631_ = lean_ctor_get(v___x_1630_, 1);
lean_inc_ref(v_val_1631_);
lean_dec_ref_known(v___x_1630_, 2);
v_val_1622_ = v_val_1631_;
goto v___jp_1621_;
}
case 1:
{
lean_object* v_kind_1632_; 
v_kind_1632_ = lean_ctor_get(v___x_1630_, 1);
lean_inc(v_kind_1632_);
if (lean_obj_tag(v_kind_1632_) == 1)
{
lean_object* v_pre_1633_; 
v_pre_1633_ = lean_ctor_get(v_kind_1632_, 0);
lean_inc(v_pre_1633_);
if (lean_obj_tag(v_pre_1633_) == 1)
{
lean_object* v_pre_1634_; 
v_pre_1634_ = lean_ctor_get(v_pre_1633_, 0);
lean_inc(v_pre_1634_);
if (lean_obj_tag(v_pre_1634_) == 1)
{
lean_object* v_pre_1635_; 
v_pre_1635_ = lean_ctor_get(v_pre_1634_, 0);
lean_inc(v_pre_1635_);
if (lean_obj_tag(v_pre_1635_) == 1)
{
lean_object* v_pre_1636_; 
v_pre_1636_ = lean_ctor_get(v_pre_1635_, 0);
if (lean_obj_tag(v_pre_1636_) == 0)
{
lean_object* v_str_1637_; lean_object* v_str_1638_; lean_object* v_str_1639_; lean_object* v_str_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; 
v_str_1637_ = lean_ctor_get(v_kind_1632_, 1);
lean_inc_ref(v_str_1637_);
lean_dec_ref_known(v_kind_1632_, 2);
v_str_1638_ = lean_ctor_get(v_pre_1633_, 1);
lean_inc_ref(v_str_1638_);
lean_dec_ref_known(v_pre_1633_, 2);
v_str_1639_ = lean_ctor_get(v_pre_1634_, 1);
lean_inc_ref(v_str_1639_);
lean_dec_ref_known(v_pre_1634_, 2);
v_str_1640_ = lean_ctor_get(v_pre_1635_, 1);
lean_inc_ref(v_str_1640_);
lean_dec_ref_known(v_pre_1635_, 2);
v___x_1641_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_1642_ = lean_string_dec_eq(v_str_1640_, v___x_1641_);
lean_dec_ref(v_str_1640_);
if (v___x_1642_ == 0)
{
lean_dec_ref(v_str_1639_);
lean_dec_ref(v_str_1638_);
lean_dec_ref(v_str_1637_);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__2));
v___x_1644_ = lean_string_dec_eq(v_str_1639_, v___x_1643_);
lean_dec_ref(v_str_1639_);
if (v___x_1644_ == 0)
{
lean_dec_ref(v_str_1638_);
lean_dec_ref(v_str_1637_);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1645_; uint8_t v___x_1646_; 
v___x_1645_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__3));
v___x_1646_ = lean_string_dec_eq(v_str_1638_, v___x_1645_);
lean_dec_ref(v_str_1638_);
if (v___x_1646_ == 0)
{
lean_dec_ref(v_str_1637_);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1647_; uint8_t v___x_1648_; 
v___x_1647_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__4));
v___x_1648_ = lean_string_dec_eq(v_str_1637_, v___x_1647_);
lean_dec_ref(v_str_1637_);
if (v___x_1648_ == 0)
{
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
else
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_unsigned_to_nat(0u);
v___x_1650_ = l_Lean_Syntax_getArg(v___x_1630_, v___x_1649_);
lean_dec_ref_known(v___x_1630_, 3);
if (lean_obj_tag(v___x_1650_) == 2)
{
lean_object* v_val_1651_; 
lean_inc(v_toPure_1620_);
lean_dec(v_stx_1612_);
lean_dec_ref(v_inst_1611_);
lean_dec_ref(v_inst_1610_);
v_val_1651_ = lean_ctor_get(v___x_1650_, 1);
lean_inc_ref(v_val_1651_);
lean_dec_ref_known(v___x_1650_, 2);
v_val_1622_ = v_val_1651_;
goto v___jp_1621_;
}
else
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
lean_dec(v___x_1650_);
v___x_1652_ = lean_obj_once(&l_Lean_getDocStringText___redArg___closed__1, &l_Lean_getDocStringText___redArg___closed__1_once, _init_l_Lean_getDocStringText___redArg___closed__1);
lean_inc(v_stx_1612_);
v___x_1653_ = l_Lean_MessageData_ofSyntax(v_stx_1612_);
v___x_1654_ = l_Lean_indentD(v___x_1653_);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1652_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = l_Lean_throwErrorAt___redArg(v_inst_1610_, v_inst_1611_, v_stx_1612_, v___x_1655_);
return v___x_1656_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1635_, 2);
lean_dec_ref_known(v_pre_1634_, 2);
lean_dec_ref_known(v_pre_1633_, 2);
lean_dec_ref_known(v_kind_1632_, 2);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
}
else
{
lean_dec_ref_known(v_pre_1634_, 2);
lean_dec(v_pre_1635_);
lean_dec_ref_known(v_pre_1633_, 2);
lean_dec_ref_known(v_kind_1632_, 2);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
}
else
{
lean_dec_ref_known(v_pre_1633_, 2);
lean_dec(v_pre_1634_);
lean_dec_ref_known(v_kind_1632_, 2);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
}
else
{
lean_dec_ref_known(v_kind_1632_, 2);
lean_dec(v_pre_1633_);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
}
else
{
lean_dec(v_kind_1632_);
lean_dec_ref_known(v___x_1630_, 3);
goto v___jp_1613_;
}
}
default: 
{
lean_dec(v___x_1630_);
goto v___jp_1613_;
}
}
v___jp_1613_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1614_ = lean_obj_once(&l_Lean_getDocStringText___redArg___closed__1, &l_Lean_getDocStringText___redArg___closed__1_once, _init_l_Lean_getDocStringText___redArg___closed__1);
lean_inc(v_stx_1612_);
v___x_1615_ = l_Lean_MessageData_ofSyntax(v_stx_1612_);
v___x_1616_ = l_Lean_indentD(v___x_1615_);
v___x_1617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1614_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = l_Lean_throwErrorAt___redArg(v_inst_1610_, v_inst_1611_, v_stx_1612_, v___x_1617_);
return v___x_1618_;
}
v___jp_1621_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1623_ = lean_unsigned_to_nat(0u);
v___x_1624_ = lean_string_utf8_byte_size(v_val_1622_);
v___x_1625_ = lean_unsigned_to_nat(2u);
v___x_1626_ = lean_nat_sub(v___x_1624_, v___x_1625_);
v___x_1627_ = lean_string_utf8_extract(v_val_1622_, v___x_1623_, v___x_1626_);
lean_dec(v___x_1626_);
lean_dec_ref(v_val_1622_);
v___x_1628_ = lean_apply_2(v_toPure_1620_, lean_box(0), v___x_1627_);
return v___x_1628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object* v_m_1657_, lean_object* v_inst_1658_, lean_object* v_inst_1659_, lean_object* v_stx_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_getDocStringText___redArg(v_inst_1658_, v_inst_1659_, v_stx_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT uint8_t l_Lean_isVersoDocComment(lean_object* v_stx_1667_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; uint8_t v___x_1671_; 
v___x_1668_ = lean_unsigned_to_nat(1u);
v___x_1669_ = l_Lean_Syntax_getArg(v_stx_1667_, v___x_1668_);
v___x_1670_ = ((lean_object*)(l_Lean_isVersoDocComment___closed__0));
v___x_1671_ = l_Lean_Syntax_isOfKind(v___x_1669_, v___x_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_isVersoDocComment___boxed(lean_object* v_stx_1672_){
_start:
{
uint8_t v_res_1673_; lean_object* v_r_1674_; 
v_res_1673_ = l_Lean_isVersoDocComment(v_stx_1672_);
lean_dec(v_stx_1672_);
v_r_1674_ = lean_box(v_res_1673_);
return v_r_1674_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = l_Lean_instInhabitedDeclarationRange_default;
v___x_1678_ = ((lean_object*)(l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0));
v___x_1679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
lean_ctor_set(v___x_1679_, 2, v___x_1677_);
return v___x_1679_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default(void){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = lean_obj_once(&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1, &l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1_once, _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1);
return v___x_1680_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet(void){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object* v_a_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_nat_to_int(v_a_1682_);
return v___x_1683_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_unsigned_to_nat(2u);
v___x_1691_ = lean_nat_to_int(v___x_1690_);
return v___x_1691_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = lean_nat_to_int(v___x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object* v_x_1706_, lean_object* v_x_1707_, lean_object* v_x_1708_){
_start:
{
if (lean_obj_tag(v_x_1708_) == 0)
{
lean_dec(v_x_1706_);
return v_x_1707_;
}
else
{
lean_object* v_head_1709_; lean_object* v_tail_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1721_; 
v_head_1709_ = lean_ctor_get(v_x_1708_, 0);
v_tail_1710_ = lean_ctor_get(v_x_1708_, 1);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_x_1708_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1712_ = v_x_1708_;
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_tail_1710_);
lean_inc(v_head_1709_);
lean_dec(v_x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1721_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
lean_inc(v_x_1706_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 5);
lean_ctor_set(v___x_1712_, 1, v_x_1706_);
lean_ctor_set(v___x_1712_, 0, v_x_1707_);
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_x_1707_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_x_1706_);
v___x_1715_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = lean_unsigned_to_nat(0u);
v___x_1717_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_1709_, v___x_1716_);
v___x_1718_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1715_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
v_x_1707_ = v___x_1718_;
v_x_1708_ = v_tail_1710_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object* v_x_1722_, lean_object* v_x_1723_, lean_object* v_x_1724_){
_start:
{
if (lean_obj_tag(v_x_1724_) == 0)
{
lean_dec(v_x_1722_);
return v_x_1723_;
}
else
{
lean_object* v_head_1725_; lean_object* v_tail_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1737_; 
v_head_1725_ = lean_ctor_get(v_x_1724_, 0);
v_tail_1726_ = lean_ctor_get(v_x_1724_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_x_1724_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1728_ = v_x_1724_;
v_isShared_1729_ = v_isSharedCheck_1737_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_tail_1726_);
lean_inc(v_head_1725_);
lean_dec(v_x_1724_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1737_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
lean_inc(v_x_1722_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set_tag(v___x_1728_, 5);
lean_ctor_set(v___x_1728_, 1, v_x_1722_);
lean_ctor_set(v___x_1728_, 0, v_x_1723_);
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_x_1723_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_x_1722_);
v___x_1731_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_1725_, v___x_1732_);
v___x_1734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1731_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(v_x_1722_, v___x_1734_, v_tail_1726_);
return v___x_1735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_1738_, lean_object* v_x_1739_){
_start:
{
if (lean_obj_tag(v_x_1738_) == 0)
{
lean_object* v___x_1740_; 
lean_dec(v_x_1739_);
v___x_1740_ = lean_box(0);
return v___x_1740_;
}
else
{
lean_object* v_tail_1741_; 
v_tail_1741_ = lean_ctor_get(v_x_1738_, 1);
if (lean_obj_tag(v_tail_1741_) == 0)
{
lean_object* v_head_1742_; lean_object* v___x_1743_; 
lean_dec(v_x_1739_);
v_head_1742_ = lean_ctor_get(v_x_1738_, 0);
lean_inc(v_head_1742_);
lean_dec_ref_known(v_x_1738_, 2);
v___x_1743_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_1742_);
return v___x_1743_;
}
else
{
lean_object* v_head_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_inc(v_tail_1741_);
v_head_1744_ = lean_ctor_get(v_x_1738_, 0);
lean_inc(v_head_1744_);
lean_dec_ref_known(v_x_1738_, 2);
v___x_1745_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_1744_);
v___x_1746_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(v_x_1739_, v___x_1745_, v_tail_1741_);
return v___x_1746_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0));
v___x_1749_ = lean_string_length(v___x_1748_);
return v___x_1749_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1750_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_1751_ = lean_nat_to_int(v___x_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_xs_1760_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; uint8_t v___x_1763_; 
v___x_1761_ = lean_array_get_size(v_xs_1760_);
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = lean_nat_dec_eq(v___x_1761_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1764_ = lean_array_to_list(v_xs_1760_);
v___x_1765_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_1766_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_1764_, v___x_1765_);
v___x_1767_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_1768_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_1769_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
lean_ctor_set(v___x_1769_, 1, v___x_1766_);
v___x_1770_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_1771_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1767_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = l_Std_Format_fill(v___x_1772_);
return v___x_1773_;
}
else
{
lean_object* v___x_1774_; 
lean_dec_ref(v_xs_1760_);
v___x_1774_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_1774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1829_, lean_object* v_prec_1830_){
_start:
{
switch(lean_obj_tag(v_x_1829_))
{
case 0:
{
lean_object* v_string_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1851_; 
v_string_1831_ = lean_ctor_get(v_x_1829_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1833_ = v_x_1829_;
v_isShared_1834_ = v_isSharedCheck_1851_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_string_1831_);
lean_dec(v_x_1829_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1851_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___y_1836_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = lean_unsigned_to_nat(1024u);
v___x_1848_ = lean_nat_dec_le(v___x_1847_, v_prec_1830_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1836_ = v___x_1849_;
goto v___jp_1835_;
}
else
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1836_ = v___x_1850_;
goto v___jp_1835_;
}
v___jp_1835_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1840_; 
v___x_1837_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2));
v___x_1838_ = l_String_quote(v_string_1831_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set_tag(v___x_1833_, 3);
lean_ctor_set(v___x_1833_, 0, v___x_1838_);
v___x_1840_ = v___x_1833_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1838_);
v___x_1840_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1841_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1837_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
lean_inc(v___y_1836_);
v___x_1842_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___y_1836_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = 0;
v___x_1844_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set_uint8(v___x_1844_, sizeof(void*)*1, v___x_1843_);
v___x_1845_ = l_Repr_addAppParen(v___x_1844_, v_prec_1830_);
return v___x_1845_;
}
}
}
}
case 1:
{
lean_object* v_content_1852_; lean_object* v___y_1854_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v_content_1852_ = lean_ctor_get(v_x_1829_, 0);
lean_inc_ref(v_content_1852_);
lean_dec_ref_known(v_x_1829_, 1);
v___x_1862_ = lean_unsigned_to_nat(1024u);
v___x_1863_ = lean_nat_dec_le(v___x_1862_, v_prec_1830_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1854_ = v___x_1864_;
goto v___jp_1853_;
}
else
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1854_ = v___x_1865_;
goto v___jp_1853_;
}
v___jp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1855_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7));
v___x_1856_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1852_);
v___x_1857_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1855_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
lean_inc(v___y_1854_);
v___x_1858_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___y_1854_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___x_1859_ = 0;
v___x_1860_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1860_, 0, v___x_1858_);
lean_ctor_set_uint8(v___x_1860_, sizeof(void*)*1, v___x_1859_);
v___x_1861_ = l_Repr_addAppParen(v___x_1860_, v_prec_1830_);
return v___x_1861_;
}
}
case 2:
{
lean_object* v_content_1866_; lean_object* v___y_1868_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v_content_1866_ = lean_ctor_get(v_x_1829_, 0);
lean_inc_ref(v_content_1866_);
lean_dec_ref_known(v_x_1829_, 1);
v___x_1876_ = lean_unsigned_to_nat(1024u);
v___x_1877_ = lean_nat_dec_le(v___x_1876_, v_prec_1830_);
if (v___x_1877_ == 0)
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1868_ = v___x_1878_;
goto v___jp_1867_;
}
else
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1868_ = v___x_1879_;
goto v___jp_1867_;
}
v___jp_1867_:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; uint8_t v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1869_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10));
v___x_1870_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1866_);
v___x_1871_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1869_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
lean_inc(v___y_1868_);
v___x_1872_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___y_1868_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = 0;
v___x_1874_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1874_, 0, v___x_1872_);
lean_ctor_set_uint8(v___x_1874_, sizeof(void*)*1, v___x_1873_);
v___x_1875_ = l_Repr_addAppParen(v___x_1874_, v_prec_1830_);
return v___x_1875_;
}
}
case 3:
{
lean_object* v_string_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1900_; 
v_string_1880_ = lean_ctor_get(v_x_1829_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1882_ = v_x_1829_;
v_isShared_1883_ = v_isSharedCheck_1900_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_string_1880_);
lean_dec(v_x_1829_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1900_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___y_1885_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1896_ = lean_unsigned_to_nat(1024u);
v___x_1897_ = lean_nat_dec_le(v___x_1896_, v_prec_1830_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1885_ = v___x_1898_;
goto v___jp_1884_;
}
else
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1885_ = v___x_1899_;
goto v___jp_1884_;
}
v___jp_1884_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1889_; 
v___x_1886_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13));
v___x_1887_ = l_String_quote(v_string_1880_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1887_);
v___x_1889_ = v___x_1882_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1886_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
lean_inc(v___y_1885_);
v___x_1891_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___y_1885_);
lean_ctor_set(v___x_1891_, 1, v___x_1890_);
v___x_1892_ = 0;
v___x_1893_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1893_, 0, v___x_1891_);
lean_ctor_set_uint8(v___x_1893_, sizeof(void*)*1, v___x_1892_);
v___x_1894_ = l_Repr_addAppParen(v___x_1893_, v_prec_1830_);
return v___x_1894_;
}
}
}
}
case 4:
{
uint8_t v_mode_1901_; lean_object* v_string_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1927_; 
v_mode_1901_ = lean_ctor_get_uint8(v_x_1829_, sizeof(void*)*1);
v_string_1902_ = lean_ctor_get(v_x_1829_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1904_ = v_x_1829_;
v_isShared_1905_ = v_isSharedCheck_1927_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_string_1902_);
lean_dec(v_x_1829_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1927_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___y_1907_; lean_object* v___x_1923_; uint8_t v___x_1924_; 
v___x_1923_ = lean_unsigned_to_nat(1024u);
v___x_1924_ = lean_nat_dec_le(v___x_1923_, v_prec_1830_);
if (v___x_1924_ == 0)
{
lean_object* v___x_1925_; 
v___x_1925_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1907_ = v___x_1925_;
goto v___jp_1906_;
}
else
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1907_ = v___x_1926_;
goto v___jp_1906_;
}
v___jp_1906_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; lean_object* v___x_1920_; 
v___x_1908_ = lean_box(1);
v___x_1909_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16));
v___x_1910_ = lean_unsigned_to_nat(1024u);
v___x_1911_ = l_Lean_Doc_instReprMathMode_repr(v_mode_1901_, v___x_1910_);
v___x_1912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1909_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_ctor_set(v___x_1913_, 1, v___x_1908_);
v___x_1914_ = l_String_quote(v_string_1902_);
v___x_1915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
v___x_1916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1913_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
lean_inc(v___y_1907_);
v___x_1917_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___y_1907_);
lean_ctor_set(v___x_1917_, 1, v___x_1916_);
v___x_1918_ = 0;
if (v_isShared_1905_ == 0)
{
lean_ctor_set_tag(v___x_1904_, 6);
lean_ctor_set(v___x_1904_, 0, v___x_1917_);
v___x_1920_ = v___x_1904_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1917_);
v___x_1920_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1921_; 
lean_ctor_set_uint8(v___x_1920_, sizeof(void*)*1, v___x_1918_);
v___x_1921_ = l_Repr_addAppParen(v___x_1920_, v_prec_1830_);
return v___x_1921_;
}
}
}
}
case 5:
{
lean_object* v_string_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1948_; 
v_string_1928_ = lean_ctor_get(v_x_1829_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1930_ = v_x_1829_;
v_isShared_1931_ = v_isSharedCheck_1948_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_string_1928_);
lean_dec(v_x_1829_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1948_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___y_1933_; lean_object* v___x_1944_; uint8_t v___x_1945_; 
v___x_1944_ = lean_unsigned_to_nat(1024u);
v___x_1945_ = lean_nat_dec_le(v___x_1944_, v_prec_1830_);
if (v___x_1945_ == 0)
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1933_ = v___x_1946_;
goto v___jp_1932_;
}
else
{
lean_object* v___x_1947_; 
v___x_1947_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1933_ = v___x_1947_;
goto v___jp_1932_;
}
v___jp_1932_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1937_; 
v___x_1934_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19));
v___x_1935_ = l_String_quote(v_string_1928_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set_tag(v___x_1930_, 3);
lean_ctor_set(v___x_1930_, 0, v___x_1935_);
v___x_1937_ = v___x_1930_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; uint8_t v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1934_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
lean_inc(v___y_1933_);
v___x_1939_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___y_1933_);
lean_ctor_set(v___x_1939_, 1, v___x_1938_);
v___x_1940_ = 0;
v___x_1941_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set_uint8(v___x_1941_, sizeof(void*)*1, v___x_1940_);
v___x_1942_ = l_Repr_addAppParen(v___x_1941_, v_prec_1830_);
return v___x_1942_;
}
}
}
}
case 6:
{
lean_object* v_content_1949_; lean_object* v_url_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1974_; 
v_content_1949_ = lean_ctor_get(v_x_1829_, 0);
v_url_1950_ = lean_ctor_get(v_x_1829_, 1);
v_isSharedCheck_1974_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1952_ = v_x_1829_;
v_isShared_1953_ = v_isSharedCheck_1974_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_url_1950_);
lean_inc(v_content_1949_);
lean_dec(v_x_1829_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1974_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___y_1955_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1970_ = lean_unsigned_to_nat(1024u);
v___x_1971_ = lean_nat_dec_le(v___x_1970_, v_prec_1830_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1955_ = v___x_1972_;
goto v___jp_1954_;
}
else
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1955_ = v___x_1973_;
goto v___jp_1954_;
}
v___jp_1954_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1960_; 
v___x_1956_ = lean_box(1);
v___x_1957_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22));
v___x_1958_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1949_);
if (v_isShared_1953_ == 0)
{
lean_ctor_set_tag(v___x_1952_, 5);
lean_ctor_set(v___x_1952_, 1, v___x_1958_);
lean_ctor_set(v___x_1952_, 0, v___x_1957_);
v___x_1960_ = v___x_1952_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___x_1958_);
v___x_1960_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; uint8_t v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
lean_ctor_set(v___x_1961_, 1, v___x_1956_);
v___x_1962_ = l_String_quote(v_url_1950_);
v___x_1963_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1961_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
lean_inc(v___y_1955_);
v___x_1965_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___y_1955_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
v___x_1966_ = 0;
v___x_1967_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1967_, 0, v___x_1965_);
lean_ctor_set_uint8(v___x_1967_, sizeof(void*)*1, v___x_1966_);
v___x_1968_ = l_Repr_addAppParen(v___x_1967_, v_prec_1830_);
return v___x_1968_;
}
}
}
}
case 7:
{
lean_object* v_name_1975_; lean_object* v_content_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_2000_; 
v_name_1975_ = lean_ctor_get(v_x_1829_, 0);
v_content_1976_ = lean_ctor_get(v_x_1829_, 1);
v_isSharedCheck_2000_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1978_ = v_x_1829_;
v_isShared_1979_ = v_isSharedCheck_2000_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_content_1976_);
lean_inc(v_name_1975_);
lean_dec(v_x_1829_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_2000_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___y_1981_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v___x_1996_ = lean_unsigned_to_nat(1024u);
v___x_1997_ = lean_nat_dec_le(v___x_1996_, v_prec_1830_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1981_ = v___x_1998_;
goto v___jp_1980_;
}
else
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1981_ = v___x_1999_;
goto v___jp_1980_;
}
v___jp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1982_ = lean_box(1);
v___x_1983_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25));
v___x_1984_ = l_String_quote(v_name_1975_);
v___x_1985_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set_tag(v___x_1978_, 5);
lean_ctor_set(v___x_1978_, 1, v___x_1985_);
lean_ctor_set(v___x_1978_, 0, v___x_1983_);
v___x_1987_ = v___x_1978_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1983_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
lean_ctor_set(v___x_1988_, 1, v___x_1982_);
v___x_1989_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1976_);
v___x_1990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
lean_inc(v___y_1981_);
v___x_1991_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___y_1981_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = 0;
v___x_1993_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*1, v___x_1992_);
v___x_1994_ = l_Repr_addAppParen(v___x_1993_, v_prec_1830_);
return v___x_1994_;
}
}
}
}
case 8:
{
lean_object* v_alt_2001_; lean_object* v_url_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2027_; 
v_alt_2001_ = lean_ctor_get(v_x_1829_, 0);
v_url_2002_ = lean_ctor_get(v_x_1829_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2004_ = v_x_1829_;
v_isShared_2005_ = v_isSharedCheck_2027_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_url_2002_);
lean_inc(v_alt_2001_);
lean_dec(v_x_1829_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2027_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___y_2007_; lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = lean_unsigned_to_nat(1024u);
v___x_2024_ = lean_nat_dec_le(v___x_2023_, v_prec_1830_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2007_ = v___x_2025_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2007_ = v___x_2026_;
goto v___jp_2006_;
}
v___jp_2006_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2008_ = lean_box(1);
v___x_2009_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28));
v___x_2010_ = l_String_quote(v_alt_2001_);
v___x_2011_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set_tag(v___x_2004_, 5);
lean_ctor_set(v___x_2004_, 1, v___x_2011_);
lean_ctor_set(v___x_2004_, 0, v___x_2009_);
v___x_2013_ = v___x_2004_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2013_);
lean_ctor_set(v___x_2014_, 1, v___x_2008_);
v___x_2015_ = l_String_quote(v_url_2002_);
v___x_2016_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
v___x_2017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2014_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
lean_inc(v___y_2007_);
v___x_2018_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___y_2007_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = 0;
v___x_2020_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2020_, 0, v___x_2018_);
lean_ctor_set_uint8(v___x_2020_, sizeof(void*)*1, v___x_2019_);
v___x_2021_ = l_Repr_addAppParen(v___x_2020_, v_prec_1830_);
return v___x_2021_;
}
}
}
}
case 9:
{
lean_object* v_content_2028_; lean_object* v___y_2030_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v_content_2028_ = lean_ctor_get(v_x_1829_, 0);
lean_inc_ref(v_content_2028_);
lean_dec_ref_known(v_x_1829_, 1);
v___x_2038_ = lean_unsigned_to_nat(1024u);
v___x_2039_ = lean_nat_dec_le(v___x_2038_, v_prec_1830_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; 
v___x_2040_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2030_ = v___x_2040_;
goto v___jp_2029_;
}
else
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2030_ = v___x_2041_;
goto v___jp_2029_;
}
v___jp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2031_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31));
v___x_2032_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2028_);
v___x_2033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2031_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
lean_inc(v___y_2030_);
v___x_2034_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___y_2030_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
v___x_2035_ = 0;
v___x_2036_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2036_, 0, v___x_2034_);
lean_ctor_set_uint8(v___x_2036_, sizeof(void*)*1, v___x_2035_);
v___x_2037_ = l_Repr_addAppParen(v___x_2036_, v_prec_1830_);
return v___x_2037_;
}
}
default: 
{
lean_object* v_container_2042_; lean_object* v_content_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2093_; 
v_container_2042_ = lean_ctor_get(v_x_1829_, 0);
v_content_2043_ = lean_ctor_get(v_x_1829_, 1);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_x_1829_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2045_ = v_x_1829_;
v_isShared_2046_ = v_isSharedCheck_2093_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_content_2043_);
lean_inc(v_container_2042_);
lean_dec(v_x_1829_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2093_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2063_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = lean_unsigned_to_nat(1024u);
v___x_2090_ = lean_nat_dec_le(v___x_2089_, v_prec_1830_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; 
v___x_2091_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2063_ = v___x_2091_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2063_ = v___x_2092_;
goto v___jp_2062_;
}
v___jp_2047_:
{
lean_object* v___x_2053_; 
lean_inc(v___y_2048_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set_tag(v___x_2045_, 5);
lean_ctor_set(v___x_2045_, 1, v___y_2051_);
lean_ctor_set(v___x_2045_, 0, v___y_2048_);
v___x_2053_ = v___x_2045_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___y_2048_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v___y_2051_);
v___x_2053_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_inc(v___y_2049_);
v___x_2054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
lean_ctor_set(v___x_2054_, 1, v___y_2049_);
v___x_2055_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2043_);
v___x_2056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2054_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
lean_inc(v___y_2050_);
v___x_2057_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___y_2050_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = 0;
v___x_2059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2059_, 0, v___x_2057_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*1, v___x_2058_);
v___x_2060_ = l_Repr_addAppParen(v___x_2059_, v_prec_1830_);
return v___x_2060_;
}
}
v___jp_2062_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = lean_box(1);
v___x_2065_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34));
if (lean_obj_tag(v_container_2042_) == 0)
{
lean_object* v_val_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; 
v_val_2066_ = lean_ctor_get(v_container_2042_, 0);
lean_inc(v_val_2066_);
lean_dec_ref_known(v_container_2042_, 1);
v___x_2067_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__5));
v___x_2068_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2066_);
lean_dec(v_val_2066_);
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = l_Lean_Name_reprPrec(v___x_2068_, v___x_2069_);
v___x_2071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2067_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_2073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2071_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
v___x_2074_ = 0;
v___x_2075_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
lean_ctor_set_uint8(v___x_2075_, sizeof(void*)*1, v___x_2074_);
v___y_2048_ = v___x_2065_;
v___y_2049_ = v___x_2064_;
v___y_2050_ = v___y_2063_;
v___y_2051_ = v___x_2075_;
goto v___jp_2047_;
}
else
{
lean_object* v_index_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2088_; 
v_index_2076_ = lean_ctor_get(v_container_2042_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_container_2042_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2078_ = v_container_2042_;
v_isShared_2079_ = v_isSharedCheck_2088_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_index_2076_);
lean_dec(v_container_2042_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2088_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___x_2080_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_2081_ = l_Nat_reprFast(v_index_2076_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set_tag(v___x_2078_, 3);
lean_ctor_set(v___x_2078_, 0, v___x_2081_);
v___x_2083_ = v___x_2078_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; uint8_t v___x_2085_; lean_object* v___x_2086_; 
v___x_2084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2080_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = 0;
v___x_2086_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*1, v___x_2085_);
v___y_2048_ = v___x_2065_;
v___y_2049_ = v___x_2064_;
v___y_2050_ = v___y_2063_;
v___y_2051_ = v___x_2086_;
goto v___jp_2047_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_unsigned_to_nat(0u);
v___x_2096_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v___y_2094_, v___x_2095_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_2097_, lean_object* v_prec_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_x_2097_, v_prec_2098_);
lean_dec(v_prec_2098_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object* v_xs_2100_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v___x_2101_ = lean_array_get_size(v_xs_2100_);
v___x_2102_ = lean_unsigned_to_nat(0u);
v___x_2103_ = lean_nat_dec_eq(v___x_2101_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2104_ = lean_array_to_list(v_xs_2100_);
v___x_2105_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2106_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_2104_, v___x_2105_);
v___x_2107_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2108_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
lean_ctor_set(v___x_2109_, 1, v___x_2106_);
v___x_2110_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2107_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = l_Std_Format_fill(v___x_2112_);
return v___x_2113_;
}
else
{
lean_object* v___x_2114_; 
lean_dec_ref(v_xs_2100_);
v___x_2114_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2114_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = lean_unsigned_to_nat(12u);
v___x_2146_ = lean_nat_to_int(v___x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
lean_dec(v_x_2147_);
return v_x_2148_;
}
else
{
lean_object* v_head_2150_; lean_object* v_tail_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2162_; 
v_head_2150_ = lean_ctor_get(v_x_2149_, 0);
v_tail_2151_ = lean_ctor_get(v_x_2149_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_x_2149_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2153_ = v_x_2149_;
v_isShared_2154_ = v_isSharedCheck_2162_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_tail_2151_);
lean_inc(v_head_2150_);
lean_dec(v_x_2149_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2162_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
lean_inc(v_x_2147_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 5);
lean_ctor_set(v___x_2153_, 1, v_x_2147_);
lean_ctor_set(v___x_2153_, 0, v_x_2148_);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_x_2148_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_x_2147_);
v___x_2156_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = lean_unsigned_to_nat(0u);
v___x_2158_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_2150_, v___x_2157_);
v___x_2159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2156_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v_x_2148_ = v___x_2159_;
v_x_2149_ = v_tail_2151_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object* v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_){
_start:
{
if (lean_obj_tag(v_x_2165_) == 0)
{
lean_dec(v_x_2163_);
return v_x_2164_;
}
else
{
lean_object* v_head_2166_; lean_object* v_tail_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2178_; 
v_head_2166_ = lean_ctor_get(v_x_2165_, 0);
v_tail_2167_ = lean_ctor_get(v_x_2165_, 1);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_x_2165_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2169_ = v_x_2165_;
v_isShared_2170_ = v_isSharedCheck_2178_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_tail_2167_);
lean_inc(v_head_2166_);
lean_dec(v_x_2165_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2178_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
lean_inc(v_x_2163_);
if (v_isShared_2170_ == 0)
{
lean_ctor_set_tag(v___x_2169_, 5);
lean_ctor_set(v___x_2169_, 1, v_x_2163_);
lean_ctor_set(v___x_2169_, 0, v_x_2164_);
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_x_2164_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_x_2163_);
v___x_2172_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_2166_, v___x_2173_);
v___x_2175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2172_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(v_x_2163_, v___x_2175_, v_tail_2167_);
return v___x_2176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
if (lean_obj_tag(v_x_2179_) == 0)
{
lean_object* v___x_2181_; 
lean_dec(v_x_2180_);
v___x_2181_ = lean_box(0);
return v___x_2181_;
}
else
{
lean_object* v_tail_2182_; 
v_tail_2182_ = lean_ctor_get(v_x_2179_, 1);
if (lean_obj_tag(v_tail_2182_) == 0)
{
lean_object* v_head_2183_; lean_object* v___x_2184_; 
lean_dec(v_x_2180_);
v_head_2183_ = lean_ctor_get(v_x_2179_, 0);
lean_inc(v_head_2183_);
lean_dec_ref_known(v_x_2179_, 2);
v___x_2184_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_2183_);
return v___x_2184_;
}
else
{
lean_object* v_head_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
lean_inc(v_tail_2182_);
v_head_2185_ = lean_ctor_get(v_x_2179_, 0);
lean_inc(v_head_2185_);
lean_dec_ref_known(v_x_2179_, 2);
v___x_2186_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_2185_);
v___x_2187_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(v_x_2180_, v___x_2186_, v_tail_2182_);
return v___x_2187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object* v_xs_2188_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2189_ = lean_array_get_size(v_xs_2188_);
v___x_2190_ = lean_unsigned_to_nat(0u);
v___x_2191_ = lean_nat_dec_eq(v___x_2189_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2192_ = lean_array_to_list(v_xs_2188_);
v___x_2193_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2194_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_2192_, v___x_2193_);
v___x_2195_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2196_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v___x_2194_);
v___x_2198_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2195_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = l_Std_Format_fill(v___x_2200_);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; 
lean_dec_ref(v_xs_2188_);
v___x_2202_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2202_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0));
v___x_2205_ = lean_string_length(v___x_2204_);
return v___x_2205_;
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9);
v___x_2207_ = lean_nat_to_int(v___x_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object* v_x_2213_){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2214_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6));
v___x_2215_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_2216_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_x_2213_);
v___x_2217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2215_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = 0;
v___x_2219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2219_, 0, v___x_2217_);
lean_ctor_set_uint8(v___x_2219_, sizeof(void*)*1, v___x_2218_);
v___x_2220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2214_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2222_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
lean_ctor_set(v___x_2223_, 1, v___x_2220_);
v___x_2224_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2225_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2223_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
v___x_2226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2221_);
lean_ctor_set(v___x_2226_, 1, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set_uint8(v___x_2227_, sizeof(void*)*1, v___x_2218_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object* v_x_2228_, lean_object* v_x_2229_, lean_object* v_x_2230_){
_start:
{
if (lean_obj_tag(v_x_2230_) == 0)
{
lean_dec(v_x_2228_);
return v_x_2229_;
}
else
{
lean_object* v_head_2231_; lean_object* v_tail_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2242_; 
v_head_2231_ = lean_ctor_get(v_x_2230_, 0);
v_tail_2232_ = lean_ctor_get(v_x_2230_, 1);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_x_2230_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2234_ = v_x_2230_;
v_isShared_2235_ = v_isSharedCheck_2242_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_tail_2232_);
lean_inc(v_head_2231_);
lean_dec(v_x_2230_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2242_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
lean_inc(v_x_2228_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set_tag(v___x_2234_, 5);
lean_ctor_set(v___x_2234_, 1, v_x_2228_);
lean_ctor_set(v___x_2234_, 0, v_x_2229_);
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_x_2229_);
lean_ctor_set(v_reuseFailAlloc_2241_, 1, v_x_2228_);
v___x_2237_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2238_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2231_);
v___x_2239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2237_);
lean_ctor_set(v___x_2239_, 1, v___x_2238_);
v_x_2229_ = v___x_2239_;
v_x_2230_ = v_tail_2232_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object* v_x_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
if (lean_obj_tag(v_x_2245_) == 0)
{
lean_dec(v_x_2243_);
return v_x_2244_;
}
else
{
lean_object* v_head_2246_; lean_object* v_tail_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2257_; 
v_head_2246_ = lean_ctor_get(v_x_2245_, 0);
v_tail_2247_ = lean_ctor_get(v_x_2245_, 1);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_x_2245_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2249_ = v_x_2245_;
v_isShared_2250_ = v_isSharedCheck_2257_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_tail_2247_);
lean_inc(v_head_2246_);
lean_dec(v_x_2245_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2257_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2252_; 
lean_inc(v_x_2243_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set_tag(v___x_2249_, 5);
lean_ctor_set(v___x_2249_, 1, v_x_2243_);
lean_ctor_set(v___x_2249_, 0, v_x_2244_);
v___x_2252_ = v___x_2249_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_x_2244_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_x_2243_);
v___x_2252_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2253_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2246_);
v___x_2254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2252_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(v_x_2243_, v___x_2254_, v_tail_2247_);
return v___x_2255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object* v_x_2258_, lean_object* v_x_2259_){
_start:
{
if (lean_obj_tag(v_x_2258_) == 0)
{
lean_object* v___x_2260_; 
lean_dec(v_x_2259_);
v___x_2260_ = lean_box(0);
return v___x_2260_;
}
else
{
lean_object* v_tail_2261_; 
v_tail_2261_ = lean_ctor_get(v_x_2258_, 1);
if (lean_obj_tag(v_tail_2261_) == 0)
{
lean_object* v_head_2262_; lean_object* v___x_2263_; 
lean_dec(v_x_2259_);
v_head_2262_ = lean_ctor_get(v_x_2258_, 0);
lean_inc(v_head_2262_);
lean_dec_ref_known(v_x_2258_, 2);
v___x_2263_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2262_);
return v___x_2263_;
}
else
{
lean_object* v_head_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_inc(v_tail_2261_);
v_head_2264_ = lean_ctor_get(v_x_2258_, 0);
lean_inc(v_head_2264_);
lean_dec_ref_known(v_x_2258_, 2);
v___x_2265_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2264_);
v___x_2266_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(v_x_2259_, v___x_2265_, v_tail_2261_);
return v___x_2266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object* v_xs_2267_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2268_ = lean_array_get_size(v_xs_2267_);
v___x_2269_ = lean_unsigned_to_nat(0u);
v___x_2270_ = lean_nat_dec_eq(v___x_2268_, v___x_2269_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2271_ = lean_array_to_list(v_xs_2267_);
v___x_2272_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2273_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(v___x_2271_, v___x_2272_);
v___x_2274_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2275_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2273_);
v___x_2277_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2276_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2274_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = l_Std_Format_fill(v___x_2279_);
return v___x_2280_;
}
else
{
lean_object* v___x_2281_; 
lean_dec_ref(v_xs_2267_);
v___x_2281_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2281_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_unsigned_to_nat(0u);
v___x_2289_ = lean_nat_to_int(v___x_2288_);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2305_ = lean_unsigned_to_nat(8u);
v___x_2306_ = lean_nat_to_int(v___x_2305_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object* v_x_2310_){
_start:
{
lean_object* v_term_2311_; lean_object* v_desc_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2344_; 
v_term_2311_ = lean_ctor_get(v_x_2310_, 0);
v_desc_2312_ = lean_ctor_get(v_x_2310_, 1);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_x_2310_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2314_ = v_x_2310_;
v_isShared_2315_ = v_isSharedCheck_2344_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_desc_2312_);
lean_inc(v_term_2311_);
lean_dec(v_x_2310_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2344_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2321_; 
v___x_2316_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_2317_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3));
v___x_2318_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_2319_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_term_2311_);
if (v_isShared_2315_ == 0)
{
lean_ctor_set_tag(v___x_2314_, 4);
lean_ctor_set(v___x_2314_, 1, v___x_2319_);
lean_ctor_set(v___x_2314_, 0, v___x_2318_);
v___x_2321_ = v___x_2314_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2318_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v___x_2319_);
v___x_2321_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
uint8_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2322_ = 0;
v___x_2323_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set_uint8(v___x_2323_, sizeof(void*)*1, v___x_2322_);
v___x_2324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2317_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_2326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = lean_box(1);
v___x_2328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2326_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6));
v___x_2330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
lean_ctor_set(v___x_2331_, 1, v___x_2316_);
v___x_2332_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_desc_2312_);
v___x_2333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2318_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
lean_ctor_set_uint8(v___x_2334_, sizeof(void*)*1, v___x_2322_);
v___x_2335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2331_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2337_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
lean_ctor_set(v___x_2338_, 1, v___x_2335_);
v___x_2339_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2336_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
lean_ctor_set_uint8(v___x_2342_, sizeof(void*)*1, v___x_2322_);
return v___x_2342_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object* v_x_2345_, lean_object* v_x_2346_, lean_object* v_x_2347_){
_start:
{
if (lean_obj_tag(v_x_2347_) == 0)
{
lean_dec(v_x_2345_);
return v_x_2346_;
}
else
{
lean_object* v_head_2348_; lean_object* v_tail_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2359_; 
v_head_2348_ = lean_ctor_get(v_x_2347_, 0);
v_tail_2349_ = lean_ctor_get(v_x_2347_, 1);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_x_2347_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2351_ = v_x_2347_;
v_isShared_2352_ = v_isSharedCheck_2359_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_tail_2349_);
lean_inc(v_head_2348_);
lean_dec(v_x_2347_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2359_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
lean_inc(v_x_2345_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set_tag(v___x_2351_, 5);
lean_ctor_set(v___x_2351_, 1, v_x_2345_);
lean_ctor_set(v___x_2351_, 0, v_x_2346_);
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_x_2346_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_x_2345_);
v___x_2354_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2348_);
v___x_2356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2354_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
v_x_2346_ = v___x_2356_;
v_x_2347_ = v_tail_2349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object* v_x_2360_, lean_object* v_x_2361_, lean_object* v_x_2362_){
_start:
{
if (lean_obj_tag(v_x_2362_) == 0)
{
lean_dec(v_x_2360_);
return v_x_2361_;
}
else
{
lean_object* v_head_2363_; lean_object* v_tail_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2374_; 
v_head_2363_ = lean_ctor_get(v_x_2362_, 0);
v_tail_2364_ = lean_ctor_get(v_x_2362_, 1);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_x_2362_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2366_ = v_x_2362_;
v_isShared_2367_ = v_isSharedCheck_2374_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_tail_2364_);
lean_inc(v_head_2363_);
lean_dec(v_x_2362_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2374_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
lean_inc(v_x_2360_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set_tag(v___x_2366_, 5);
lean_ctor_set(v___x_2366_, 1, v_x_2360_);
lean_ctor_set(v___x_2366_, 0, v_x_2361_);
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_x_2361_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v_x_2360_);
v___x_2369_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2370_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2363_);
v___x_2371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
v___x_2372_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(v_x_2360_, v___x_2371_, v_tail_2364_);
return v___x_2372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object* v_x_2375_, lean_object* v_x_2376_){
_start:
{
if (lean_obj_tag(v_x_2375_) == 0)
{
lean_object* v___x_2377_; 
lean_dec(v_x_2376_);
v___x_2377_ = lean_box(0);
return v___x_2377_;
}
else
{
lean_object* v_tail_2378_; 
v_tail_2378_ = lean_ctor_get(v_x_2375_, 1);
if (lean_obj_tag(v_tail_2378_) == 0)
{
lean_object* v_head_2379_; lean_object* v___x_2380_; 
lean_dec(v_x_2376_);
v_head_2379_ = lean_ctor_get(v_x_2375_, 0);
lean_inc(v_head_2379_);
lean_dec_ref_known(v_x_2375_, 2);
v___x_2380_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2379_);
return v___x_2380_;
}
else
{
lean_object* v_head_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
lean_inc(v_tail_2378_);
v_head_2381_ = lean_ctor_get(v_x_2375_, 0);
lean_inc(v_head_2381_);
lean_dec_ref_known(v_x_2375_, 2);
v___x_2382_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2381_);
v___x_2383_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(v_x_2376_, v___x_2382_, v_tail_2378_);
return v___x_2383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object* v_xs_2384_){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; uint8_t v___x_2387_; 
v___x_2385_ = lean_array_get_size(v_xs_2384_);
v___x_2386_ = lean_unsigned_to_nat(0u);
v___x_2387_ = lean_nat_dec_eq(v___x_2385_, v___x_2386_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2388_ = lean_array_to_list(v_xs_2384_);
v___x_2389_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2390_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(v___x_2388_, v___x_2389_);
v___x_2391_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2392_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2393_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2392_);
lean_ctor_set(v___x_2393_, 1, v___x_2390_);
v___x_2394_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2393_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2391_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Std_Format_fill(v___x_2396_);
return v___x_2397_;
}
else
{
lean_object* v___x_2398_; 
lean_dec_ref(v_xs_2384_);
v___x_2398_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object* v_x_2417_, lean_object* v_prec_2418_){
_start:
{
switch(lean_obj_tag(v_x_2417_))
{
case 0:
{
lean_object* v_contents_2419_; lean_object* v___y_2421_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v_contents_2419_ = lean_ctor_get(v_x_2417_, 0);
lean_inc_ref(v_contents_2419_);
lean_dec_ref_known(v_x_2417_, 1);
v___x_2429_ = lean_unsigned_to_nat(1024u);
v___x_2430_ = lean_nat_dec_le(v___x_2429_, v_prec_2418_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; 
v___x_2431_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2421_ = v___x_2431_;
goto v___jp_2420_;
}
else
{
lean_object* v___x_2432_; 
v___x_2432_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2421_ = v___x_2432_;
goto v___jp_2420_;
}
v___jp_2420_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2422_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2));
v___x_2423_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_contents_2419_);
v___x_2424_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2422_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
lean_inc(v___y_2421_);
v___x_2425_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___y_2421_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = 0;
v___x_2427_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2427_, 0, v___x_2425_);
lean_ctor_set_uint8(v___x_2427_, sizeof(void*)*1, v___x_2426_);
v___x_2428_ = l_Repr_addAppParen(v___x_2427_, v_prec_2418_);
return v___x_2428_;
}
}
case 1:
{
lean_object* v_content_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2453_; 
v_content_2433_ = lean_ctor_get(v_x_2417_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v_x_2417_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2435_ = v_x_2417_;
v_isShared_2436_ = v_isSharedCheck_2453_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_content_2433_);
lean_dec(v_x_2417_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2453_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___y_2438_; lean_object* v___x_2449_; uint8_t v___x_2450_; 
v___x_2449_ = lean_unsigned_to_nat(1024u);
v___x_2450_ = lean_nat_dec_le(v___x_2449_, v_prec_2418_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2438_ = v___x_2451_;
goto v___jp_2437_;
}
else
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2438_ = v___x_2452_;
goto v___jp_2437_;
}
v___jp_2437_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2442_; 
v___x_2439_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5));
v___x_2440_ = l_String_quote(v_content_2433_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 3);
lean_ctor_set(v___x_2435_, 0, v___x_2440_);
v___x_2442_ = v___x_2435_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2443_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2439_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
lean_inc(v___y_2438_);
v___x_2444_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___y_2438_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = 0;
v___x_2446_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2446_, 0, v___x_2444_);
lean_ctor_set_uint8(v___x_2446_, sizeof(void*)*1, v___x_2445_);
v___x_2447_ = l_Repr_addAppParen(v___x_2446_, v_prec_2418_);
return v___x_2447_;
}
}
}
}
case 2:
{
lean_object* v_items_2454_; lean_object* v___y_2456_; lean_object* v___x_2464_; uint8_t v___x_2465_; 
v_items_2454_ = lean_ctor_get(v_x_2417_, 0);
lean_inc_ref(v_items_2454_);
lean_dec_ref_known(v_x_2417_, 1);
v___x_2464_ = lean_unsigned_to_nat(1024u);
v___x_2465_ = lean_nat_dec_le(v___x_2464_, v_prec_2418_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2456_ = v___x_2466_;
goto v___jp_2455_;
}
else
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2456_ = v___x_2467_;
goto v___jp_2455_;
}
v___jp_2455_:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2457_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8));
v___x_2458_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_2454_);
v___x_2459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2457_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
lean_inc(v___y_2456_);
v___x_2460_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___y_2456_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
v___x_2461_ = 0;
v___x_2462_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2462_, 0, v___x_2460_);
lean_ctor_set_uint8(v___x_2462_, sizeof(void*)*1, v___x_2461_);
v___x_2463_ = l_Repr_addAppParen(v___x_2462_, v_prec_2418_);
return v___x_2463_;
}
}
case 3:
{
lean_object* v_start_2468_; lean_object* v_items_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2504_; 
v_start_2468_ = lean_ctor_get(v_x_2417_, 0);
v_items_2469_ = lean_ctor_get(v_x_2417_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v_x_2417_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2471_ = v_x_2417_;
v_isShared_2472_ = v_isSharedCheck_2504_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_items_2469_);
lean_inc(v_start_2468_);
lean_dec(v_x_2417_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2504_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2489_; lean_object* v___x_2500_; uint8_t v___x_2501_; 
v___x_2500_ = lean_unsigned_to_nat(1024u);
v___x_2501_ = lean_nat_dec_le(v___x_2500_, v_prec_2418_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2489_ = v___x_2502_;
goto v___jp_2488_;
}
else
{
lean_object* v___x_2503_; 
v___x_2503_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2489_ = v___x_2503_;
goto v___jp_2488_;
}
v___jp_2473_:
{
lean_object* v___x_2479_; 
lean_inc(v___y_2476_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set_tag(v___x_2471_, 5);
lean_ctor_set(v___x_2471_, 1, v___y_2477_);
lean_ctor_set(v___x_2471_, 0, v___y_2476_);
v___x_2479_ = v___x_2471_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___y_2476_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v___y_2477_);
v___x_2479_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
lean_inc(v___y_2474_);
v___x_2480_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
lean_ctor_set(v___x_2480_, 1, v___y_2474_);
v___x_2481_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_2469_);
v___x_2482_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
lean_inc(v___y_2475_);
v___x_2483_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___y_2475_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = 0;
v___x_2485_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2485_, 0, v___x_2483_);
lean_ctor_set_uint8(v___x_2485_, sizeof(void*)*1, v___x_2484_);
v___x_2486_ = l_Repr_addAppParen(v___x_2485_, v_prec_2418_);
return v___x_2486_;
}
}
v___jp_2488_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2490_ = lean_box(1);
v___x_2491_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11));
v___x_2492_ = lean_obj_once(&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12, &l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once, _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12);
v___x_2493_ = lean_int_dec_lt(v_start_2468_, v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = l_Int_repr(v_start_2468_);
lean_dec(v_start_2468_);
v___x_2495_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
v___y_2474_ = v___x_2490_;
v___y_2475_ = v___y_2489_;
v___y_2476_ = v___x_2491_;
v___y_2477_ = v___x_2495_;
goto v___jp_2473_;
}
else
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2496_ = lean_unsigned_to_nat(1024u);
v___x_2497_ = l_Int_repr(v_start_2468_);
lean_dec(v_start_2468_);
v___x_2498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
v___x_2499_ = l_Repr_addAppParen(v___x_2498_, v___x_2496_);
v___y_2474_ = v___x_2490_;
v___y_2475_ = v___y_2489_;
v___y_2476_ = v___x_2491_;
v___y_2477_ = v___x_2499_;
goto v___jp_2473_;
}
}
}
}
case 4:
{
lean_object* v_items_2505_; lean_object* v___y_2507_; lean_object* v___x_2515_; uint8_t v___x_2516_; 
v_items_2505_ = lean_ctor_get(v_x_2417_, 0);
lean_inc_ref(v_items_2505_);
lean_dec_ref_known(v_x_2417_, 1);
v___x_2515_ = lean_unsigned_to_nat(1024u);
v___x_2516_ = lean_nat_dec_le(v___x_2515_, v_prec_2418_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; 
v___x_2517_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2507_ = v___x_2517_;
goto v___jp_2506_;
}
else
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2507_ = v___x_2518_;
goto v___jp_2506_;
}
v___jp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2508_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15));
v___x_2509_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(v_items_2505_);
v___x_2510_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2508_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
lean_inc(v___y_2507_);
v___x_2511_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___y_2507_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
v___x_2512_ = 0;
v___x_2513_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2513_, 0, v___x_2511_);
lean_ctor_set_uint8(v___x_2513_, sizeof(void*)*1, v___x_2512_);
v___x_2514_ = l_Repr_addAppParen(v___x_2513_, v_prec_2418_);
return v___x_2514_;
}
}
case 5:
{
lean_object* v_items_2519_; lean_object* v___y_2521_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v_items_2519_ = lean_ctor_get(v_x_2417_, 0);
lean_inc_ref(v_items_2519_);
lean_dec_ref_known(v_x_2417_, 1);
v___x_2529_ = lean_unsigned_to_nat(1024u);
v___x_2530_ = lean_nat_dec_le(v___x_2529_, v_prec_2418_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2521_ = v___x_2531_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2521_ = v___x_2532_;
goto v___jp_2520_;
}
v___jp_2520_:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2522_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18));
v___x_2523_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_items_2519_);
v___x_2524_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
lean_inc(v___y_2521_);
v___x_2525_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___y_2521_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = 0;
v___x_2527_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set_uint8(v___x_2527_, sizeof(void*)*1, v___x_2526_);
v___x_2528_ = l_Repr_addAppParen(v___x_2527_, v_prec_2418_);
return v___x_2528_;
}
}
case 6:
{
lean_object* v_content_2533_; lean_object* v___y_2535_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v_content_2533_ = lean_ctor_get(v_x_2417_, 0);
lean_inc_ref(v_content_2533_);
lean_dec_ref_known(v_x_2417_, 1);
v___x_2543_ = lean_unsigned_to_nat(1024u);
v___x_2544_ = lean_nat_dec_le(v___x_2543_, v_prec_2418_);
if (v___x_2544_ == 0)
{
lean_object* v___x_2545_; 
v___x_2545_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2535_ = v___x_2545_;
goto v___jp_2534_;
}
else
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2535_ = v___x_2546_;
goto v___jp_2534_;
}
v___jp_2534_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2536_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21));
v___x_2537_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_2533_);
v___x_2538_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2536_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
lean_inc(v___y_2535_);
v___x_2539_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___y_2535_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
v___x_2540_ = 0;
v___x_2541_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2541_, 0, v___x_2539_);
lean_ctor_set_uint8(v___x_2541_, sizeof(void*)*1, v___x_2540_);
v___x_2542_ = l_Repr_addAppParen(v___x_2541_, v_prec_2418_);
return v___x_2542_;
}
}
default: 
{
lean_object* v_container_2547_; lean_object* v_content_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2598_; 
v_container_2547_ = lean_ctor_get(v_x_2417_, 0);
v_content_2548_ = lean_ctor_get(v_x_2417_, 1);
v_isSharedCheck_2598_ = !lean_is_exclusive(v_x_2417_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2550_ = v_x_2417_;
v_isShared_2551_ = v_isSharedCheck_2598_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_content_2548_);
lean_inc(v_container_2547_);
lean_dec(v_x_2417_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2598_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2568_; lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2594_ = lean_unsigned_to_nat(1024u);
v___x_2595_ = lean_nat_dec_le(v___x_2594_, v_prec_2418_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2568_ = v___x_2596_;
goto v___jp_2567_;
}
else
{
lean_object* v___x_2597_; 
v___x_2597_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2568_ = v___x_2597_;
goto v___jp_2567_;
}
v___jp_2552_:
{
lean_object* v___x_2558_; 
lean_inc(v___y_2555_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set_tag(v___x_2550_, 5);
lean_ctor_set(v___x_2550_, 1, v___y_2556_);
lean_ctor_set(v___x_2550_, 0, v___y_2555_);
v___x_2558_ = v___x_2550_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v___y_2555_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v___y_2556_);
v___x_2558_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
lean_inc(v___y_2553_);
v___x_2559_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v___y_2553_);
v___x_2560_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_2548_);
v___x_2561_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2559_);
lean_ctor_set(v___x_2561_, 1, v___x_2560_);
lean_inc(v___y_2554_);
v___x_2562_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___y_2554_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = 0;
v___x_2564_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2564_, 0, v___x_2562_);
lean_ctor_set_uint8(v___x_2564_, sizeof(void*)*1, v___x_2563_);
v___x_2565_ = l_Repr_addAppParen(v___x_2564_, v_prec_2418_);
return v___x_2565_;
}
}
v___jp_2567_:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2569_ = lean_box(1);
v___x_2570_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24));
if (lean_obj_tag(v_container_2547_) == 0)
{
lean_object* v_val_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; uint8_t v___x_2579_; lean_object* v___x_2580_; 
v_val_2571_ = lean_ctor_get(v_container_2547_, 0);
lean_inc(v_val_2571_);
lean_dec_ref_known(v_container_2547_, 1);
v___x_2572_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__3));
v___x_2573_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2571_);
lean_dec(v_val_2571_);
v___x_2574_ = lean_unsigned_to_nat(0u);
v___x_2575_ = l_Lean_Name_reprPrec(v___x_2573_, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2572_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_2578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = 0;
v___x_2580_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set_uint8(v___x_2580_, sizeof(void*)*1, v___x_2579_);
v___y_2553_ = v___x_2569_;
v___y_2554_ = v___y_2568_;
v___y_2555_ = v___x_2570_;
v___y_2556_ = v___x_2580_;
goto v___jp_2552_;
}
else
{
lean_object* v_index_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2593_; 
v_index_2581_ = lean_ctor_get(v_container_2547_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_container_2547_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2583_ = v_container_2547_;
v_isShared_2584_ = v_isSharedCheck_2593_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_index_2581_);
lean_dec(v_container_2547_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2593_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2585_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__6));
v___x_2586_ = l_Nat_reprFast(v_index_2581_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set_tag(v___x_2583_, 3);
lean_ctor_set(v___x_2583_, 0, v___x_2586_);
v___x_2588_ = v___x_2583_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
lean_object* v___x_2589_; uint8_t v___x_2590_; lean_object* v___x_2591_; 
v___x_2589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2585_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = 0;
v___x_2591_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2591_, 0, v___x_2589_);
lean_ctor_set_uint8(v___x_2591_, sizeof(void*)*1, v___x_2590_);
v___y_2553_ = v___x_2569_;
v___y_2554_ = v___y_2568_;
v___y_2555_ = v___x_2570_;
v___y_2556_ = v___x_2591_;
goto v___jp_2552_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object* v___y_2599_){
_start:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v___y_2599_, v___x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object* v_x_2602_, lean_object* v_prec_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_x_2602_, v_prec_2603_);
lean_dec(v_prec_2603_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object* v_xs_2605_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2606_ = lean_array_get_size(v_xs_2605_);
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = lean_nat_dec_eq(v___x_2606_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2609_ = lean_array_to_list(v_xs_2605_);
v___x_2610_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2611_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_2609_, v___x_2610_);
v___x_2612_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2613_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___x_2611_);
v___x_2615_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2614_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2612_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = l_Std_Format_fill(v___x_2617_);
return v___x_2618_;
}
else
{
lean_object* v___x_2619_; 
lean_dec_ref(v_xs_2605_);
v___x_2619_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2619_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object* v_x_2623_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = ((lean_object*)(l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1));
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object* v_x_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_2625_);
lean_dec(v_x_2625_);
return v_res_2626_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4(void){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = lean_unsigned_to_nat(9u);
v___x_2637_ = lean_nat_to_int(v___x_2636_);
return v___x_2637_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7(void){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2641_ = lean_unsigned_to_nat(15u);
v___x_2642_ = lean_nat_to_int(v___x_2641_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = lean_unsigned_to_nat(11u);
v___x_2650_ = lean_nat_to_int(v___x_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v_x_2656_){
_start:
{
if (lean_obj_tag(v_x_2656_) == 0)
{
lean_dec(v_x_2654_);
return v_x_2655_;
}
else
{
lean_object* v_head_2657_; lean_object* v_tail_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2668_; 
v_head_2657_ = lean_ctor_get(v_x_2656_, 0);
v_tail_2658_ = lean_ctor_get(v_x_2656_, 1);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_x_2656_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2660_ = v_x_2656_;
v_isShared_2661_ = v_isSharedCheck_2668_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tail_2658_);
lean_inc(v_head_2657_);
lean_dec(v_x_2656_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2668_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
lean_inc(v_x_2654_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set_tag(v___x_2660_, 5);
lean_ctor_set(v___x_2660_, 1, v_x_2654_);
lean_ctor_set(v___x_2660_, 0, v_x_2655_);
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_x_2655_);
lean_ctor_set(v_reuseFailAlloc_2667_, 1, v_x_2654_);
v___x_2663_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2664_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2657_);
v___x_2665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(v_x_2654_, v___x_2665_, v_tail_2658_);
return v___x_2666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object* v_x_2669_, lean_object* v_x_2670_){
_start:
{
if (lean_obj_tag(v_x_2669_) == 0)
{
lean_object* v___x_2671_; 
lean_dec(v_x_2670_);
v___x_2671_ = lean_box(0);
return v___x_2671_;
}
else
{
lean_object* v_tail_2672_; 
v_tail_2672_ = lean_ctor_get(v_x_2669_, 1);
if (lean_obj_tag(v_tail_2672_) == 0)
{
lean_object* v_head_2673_; lean_object* v___x_2674_; 
lean_dec(v_x_2670_);
v_head_2673_ = lean_ctor_get(v_x_2669_, 0);
lean_inc(v_head_2673_);
lean_dec_ref_known(v_x_2669_, 2);
v___x_2674_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2673_);
return v___x_2674_;
}
else
{
lean_object* v_head_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
lean_inc(v_tail_2672_);
v_head_2675_ = lean_ctor_get(v_x_2669_, 0);
lean_inc(v_head_2675_);
lean_dec_ref_known(v_x_2669_, 2);
v___x_2676_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2675_);
v___x_2677_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(v_x_2670_, v___x_2676_, v_tail_2672_);
return v___x_2677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object* v_xs_2678_){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2679_ = lean_array_get_size(v_xs_2678_);
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = lean_nat_dec_eq(v___x_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2682_ = lean_array_to_list(v_xs_2678_);
v___x_2683_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2684_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(v___x_2682_, v___x_2683_);
v___x_2685_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2686_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
lean_ctor_set(v___x_2687_, 1, v___x_2684_);
v___x_2688_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2685_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
v___x_2691_ = l_Std_Format_fill(v___x_2690_);
return v___x_2691_;
}
else
{
lean_object* v___x_2692_; 
lean_dec_ref(v_xs_2678_);
v___x_2692_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object* v_x_2693_){
_start:
{
lean_object* v_title_2694_; lean_object* v_titleString_2695_; lean_object* v_metadata_2696_; lean_object* v_content_2697_; lean_object* v_subParts_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v_title_2694_ = lean_ctor_get(v_x_2693_, 0);
lean_inc_ref(v_title_2694_);
v_titleString_2695_ = lean_ctor_get(v_x_2693_, 1);
lean_inc_ref(v_titleString_2695_);
v_metadata_2696_ = lean_ctor_get(v_x_2693_, 2);
lean_inc(v_metadata_2696_);
v_content_2697_ = lean_ctor_get(v_x_2693_, 3);
lean_inc_ref(v_content_2697_);
v_subParts_2698_ = lean_ctor_get(v_x_2693_, 4);
lean_inc_ref(v_subParts_2698_);
lean_dec_ref(v_x_2693_);
v___x_2699_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_2700_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3));
v___x_2701_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4);
v___x_2702_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_title_2694_);
v___x_2703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = 0;
v___x_2705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2705_, 0, v___x_2703_);
lean_ctor_set_uint8(v___x_2705_, sizeof(void*)*1, v___x_2704_);
v___x_2706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2700_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_2708_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = lean_box(1);
v___x_2710_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2708_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6));
v___x_2712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
lean_ctor_set(v___x_2713_, 1, v___x_2699_);
v___x_2714_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7);
v___x_2715_ = l_String_quote(v_titleString_2695_);
v___x_2716_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
v___x_2717_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2714_);
lean_ctor_set(v___x_2717_, 1, v___x_2716_);
v___x_2718_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
lean_ctor_set_uint8(v___x_2718_, sizeof(void*)*1, v___x_2704_);
v___x_2719_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2713_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
v___x_2720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
lean_ctor_set(v___x_2720_, 1, v___x_2707_);
v___x_2721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
lean_ctor_set(v___x_2721_, 1, v___x_2709_);
v___x_2722_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9));
v___x_2723_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2721_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
lean_ctor_set(v___x_2724_, 1, v___x_2699_);
v___x_2725_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_2726_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_metadata_2696_);
lean_dec(v_metadata_2696_);
v___x_2727_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
v___x_2728_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
lean_ctor_set_uint8(v___x_2728_, sizeof(void*)*1, v___x_2704_);
v___x_2729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2724_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
v___x_2730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
lean_ctor_set(v___x_2730_, 1, v___x_2707_);
v___x_2731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
lean_ctor_set(v___x_2731_, 1, v___x_2709_);
v___x_2732_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11));
v___x_2733_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2731_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
v___x_2734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2733_);
lean_ctor_set(v___x_2734_, 1, v___x_2699_);
v___x_2735_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12);
v___x_2736_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_content_2697_);
v___x_2737_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2735_);
lean_ctor_set(v___x_2737_, 1, v___x_2736_);
v___x_2738_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*1, v___x_2704_);
v___x_2739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2734_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2739_);
lean_ctor_set(v___x_2740_, 1, v___x_2707_);
v___x_2741_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2740_);
lean_ctor_set(v___x_2741_, 1, v___x_2709_);
v___x_2742_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14));
v___x_2743_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2741_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
lean_ctor_set(v___x_2744_, 1, v___x_2699_);
v___x_2745_ = l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(v_subParts_2698_);
v___x_2746_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2725_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
lean_ctor_set_uint8(v___x_2747_, sizeof(void*)*1, v___x_2704_);
v___x_2748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2744_);
lean_ctor_set(v___x_2748_, 1, v___x_2747_);
v___x_2749_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2750_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
lean_ctor_set(v___x_2751_, 1, v___x_2748_);
v___x_2752_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2749_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
lean_ctor_set_uint8(v___x_2755_, sizeof(void*)*1, v___x_2704_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object* v_x_2756_, lean_object* v_x_2757_, lean_object* v_x_2758_){
_start:
{
if (lean_obj_tag(v_x_2758_) == 0)
{
lean_dec(v_x_2756_);
return v_x_2757_;
}
else
{
lean_object* v_head_2759_; lean_object* v_tail_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2770_; 
v_head_2759_ = lean_ctor_get(v_x_2758_, 0);
v_tail_2760_ = lean_ctor_get(v_x_2758_, 1);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_x_2758_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2762_ = v_x_2758_;
v_isShared_2763_ = v_isSharedCheck_2770_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_tail_2760_);
lean_inc(v_head_2759_);
lean_dec(v_x_2758_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2770_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2765_; 
lean_inc(v_x_2756_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set_tag(v___x_2762_, 5);
lean_ctor_set(v___x_2762_, 1, v_x_2756_);
lean_ctor_set(v___x_2762_, 0, v_x_2757_);
v___x_2765_ = v___x_2762_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_x_2757_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v_x_2756_);
v___x_2765_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2766_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2759_);
v___x_2767_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v_x_2757_ = v___x_2767_;
v_x_2758_ = v_tail_2760_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object* v_x_2771_, lean_object* v_x_2772_){
_start:
{
lean_object* v_fst_2773_; lean_object* v_snd_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2784_; 
v_fst_2773_ = lean_ctor_get(v_x_2771_, 0);
v_snd_2774_ = lean_ctor_get(v_x_2771_, 1);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_x_2771_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2776_ = v_x_2771_;
v_isShared_2777_ = v_isSharedCheck_2784_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_snd_2774_);
lean_inc(v_fst_2773_);
lean_dec(v_x_2771_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2784_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2778_; lean_object* v___x_2780_; 
v___x_2778_ = l_Lean_instReprDeclarationRange_repr___redArg(v_fst_2773_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set_tag(v___x_2776_, 1);
lean_ctor_set(v___x_2776_, 1, v_x_2772_);
lean_ctor_set(v___x_2776_, 0, v___x_2778_);
v___x_2780_ = v___x_2776_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2778_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v_x_2772_);
v___x_2780_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_snd_2774_);
v___x_2782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
lean_ctor_set(v___x_2782_, 1, v___x_2780_);
return v___x_2782_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object* v_x_2785_, lean_object* v_x_2786_, lean_object* v_x_2787_){
_start:
{
if (lean_obj_tag(v_x_2787_) == 0)
{
lean_dec(v_x_2785_);
return v_x_2786_;
}
else
{
lean_object* v_head_2788_; lean_object* v_tail_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2798_; 
v_head_2788_ = lean_ctor_get(v_x_2787_, 0);
v_tail_2789_ = lean_ctor_get(v_x_2787_, 1);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_x_2787_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2791_ = v_x_2787_;
v_isShared_2792_ = v_isSharedCheck_2798_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_tail_2789_);
lean_inc(v_head_2788_);
lean_dec(v_x_2787_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2798_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
lean_inc(v_x_2785_);
if (v_isShared_2792_ == 0)
{
lean_ctor_set_tag(v___x_2791_, 5);
lean_ctor_set(v___x_2791_, 1, v_x_2785_);
lean_ctor_set(v___x_2791_, 0, v_x_2786_);
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_x_2786_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v_x_2785_);
v___x_2794_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; 
v___x_2795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v_head_2788_);
v_x_2786_ = v___x_2795_;
v_x_2787_ = v_tail_2789_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object* v_x_2799_, lean_object* v_x_2800_){
_start:
{
if (lean_obj_tag(v_x_2799_) == 0)
{
lean_object* v___x_2801_; 
lean_dec(v_x_2800_);
v___x_2801_ = lean_box(0);
return v___x_2801_;
}
else
{
lean_object* v_tail_2802_; 
v_tail_2802_ = lean_ctor_get(v_x_2799_, 1);
if (lean_obj_tag(v_tail_2802_) == 0)
{
lean_object* v_head_2803_; 
lean_dec(v_x_2800_);
v_head_2803_ = lean_ctor_get(v_x_2799_, 0);
lean_inc(v_head_2803_);
lean_dec_ref_known(v_x_2799_, 2);
return v_head_2803_;
}
else
{
lean_object* v_head_2804_; lean_object* v___x_2805_; 
lean_inc(v_tail_2802_);
v_head_2804_ = lean_ctor_get(v_x_2799_, 0);
lean_inc(v_head_2804_);
lean_dec_ref_known(v_x_2799_, 2);
v___x_2805_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(v_x_2800_, v_head_2804_, v_tail_2802_);
return v___x_2805_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2808_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0));
v___x_2809_ = lean_string_length(v___x_2808_);
return v___x_2809_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2);
v___x_2811_ = lean_nat_to_int(v___x_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object* v_x_2816_){
_start:
{
lean_object* v_fst_2817_; lean_object* v_snd_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2840_; 
v_fst_2817_ = lean_ctor_get(v_x_2816_, 0);
v_snd_2818_ = lean_ctor_get(v_x_2816_, 1);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_x_2816_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2820_ = v_x_2816_;
v_isShared_2821_ = v_isSharedCheck_2840_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_snd_2818_);
lean_inc(v_fst_2817_);
lean_dec(v_x_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2840_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2826_; 
v___x_2822_ = l_Nat_reprFast(v_fst_2817_);
v___x_2823_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
v___x_2824_ = lean_box(0);
if (v_isShared_2821_ == 0)
{
lean_ctor_set_tag(v___x_2820_, 1);
lean_ctor_set(v___x_2820_, 1, v___x_2824_);
lean_ctor_set(v___x_2820_, 0, v___x_2823_);
v___x_2826_ = v___x_2820_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v___x_2823_);
lean_ctor_set(v_reuseFailAlloc_2839_, 1, v___x_2824_);
v___x_2826_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; lean_object* v___x_2838_; 
v___x_2827_ = l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(v_snd_2818_, v___x_2826_);
v___x_2828_ = l_List_reverse___redArg(v___x_2827_);
v___x_2829_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2830_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(v___x_2828_, v___x_2829_);
v___x_2831_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3);
v___x_2832_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4));
v___x_2833_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
lean_ctor_set(v___x_2833_, 1, v___x_2830_);
v___x_2834_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5));
v___x_2835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2831_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
v___x_2837_ = 0;
v___x_2838_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2838_, 0, v___x_2836_);
lean_ctor_set_uint8(v___x_2838_, sizeof(void*)*1, v___x_2837_);
return v___x_2838_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object* v_x_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_){
_start:
{
if (lean_obj_tag(v_x_2843_) == 0)
{
lean_dec(v_x_2841_);
return v_x_2842_;
}
else
{
lean_object* v_head_2844_; lean_object* v_tail_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2855_; 
v_head_2844_ = lean_ctor_get(v_x_2843_, 0);
v_tail_2845_ = lean_ctor_get(v_x_2843_, 1);
v_isSharedCheck_2855_ = !lean_is_exclusive(v_x_2843_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2847_ = v_x_2843_;
v_isShared_2848_ = v_isSharedCheck_2855_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_tail_2845_);
lean_inc(v_head_2844_);
lean_dec(v_x_2843_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2855_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
lean_inc(v_x_2841_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set_tag(v___x_2847_, 5);
lean_ctor_set(v___x_2847_, 1, v_x_2841_);
lean_ctor_set(v___x_2847_, 0, v_x_2842_);
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_x_2842_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_x_2841_);
v___x_2850_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2844_);
v___x_2852_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v_x_2842_ = v___x_2852_;
v_x_2843_ = v_tail_2845_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object* v_x_2856_, lean_object* v_x_2857_, lean_object* v_x_2858_){
_start:
{
if (lean_obj_tag(v_x_2858_) == 0)
{
lean_dec(v_x_2856_);
return v_x_2857_;
}
else
{
lean_object* v_head_2859_; lean_object* v_tail_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2870_; 
v_head_2859_ = lean_ctor_get(v_x_2858_, 0);
v_tail_2860_ = lean_ctor_get(v_x_2858_, 1);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_x_2858_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2862_ = v_x_2858_;
v_isShared_2863_ = v_isSharedCheck_2870_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_tail_2860_);
lean_inc(v_head_2859_);
lean_dec(v_x_2858_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2870_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
lean_inc(v_x_2856_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set_tag(v___x_2862_, 5);
lean_ctor_set(v___x_2862_, 1, v_x_2856_);
lean_ctor_set(v___x_2862_, 0, v_x_2857_);
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_x_2857_);
lean_ctor_set(v_reuseFailAlloc_2869_, 1, v_x_2856_);
v___x_2865_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2859_);
v___x_2867_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2865_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v___x_2868_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(v_x_2856_, v___x_2867_, v_tail_2860_);
return v___x_2868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object* v_x_2871_, lean_object* v_x_2872_){
_start:
{
if (lean_obj_tag(v_x_2871_) == 0)
{
lean_object* v___x_2873_; 
lean_dec(v_x_2872_);
v___x_2873_ = lean_box(0);
return v___x_2873_;
}
else
{
lean_object* v_tail_2874_; 
v_tail_2874_ = lean_ctor_get(v_x_2871_, 1);
if (lean_obj_tag(v_tail_2874_) == 0)
{
lean_object* v_head_2875_; lean_object* v___x_2876_; 
lean_dec(v_x_2872_);
v_head_2875_ = lean_ctor_get(v_x_2871_, 0);
lean_inc(v_head_2875_);
lean_dec_ref_known(v_x_2871_, 2);
v___x_2876_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2875_);
return v___x_2876_;
}
else
{
lean_object* v_head_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
lean_inc(v_tail_2874_);
v_head_2877_ = lean_ctor_get(v_x_2871_, 0);
lean_inc(v_head_2877_);
lean_dec_ref_known(v_x_2871_, 2);
v___x_2878_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2877_);
v___x_2879_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(v_x_2872_, v___x_2878_, v_tail_2874_);
return v___x_2879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object* v_xs_2880_){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2881_ = lean_array_get_size(v_xs_2880_);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_nat_dec_eq(v___x_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2884_ = lean_array_to_list(v_xs_2880_);
v___x_2885_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2886_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(v___x_2884_, v___x_2885_);
v___x_2887_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2888_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2888_);
lean_ctor_set(v___x_2889_, 1, v___x_2886_);
v___x_2890_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2887_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = l_Std_Format_fill(v___x_2892_);
return v___x_2893_;
}
else
{
lean_object* v___x_2894_; 
lean_dec_ref(v_xs_2880_);
v___x_2894_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2894_;
}
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = lean_unsigned_to_nat(20u);
v___x_2911_ = lean_nat_to_int(v___x_2910_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object* v_x_2912_){
_start:
{
lean_object* v_text_2913_; lean_object* v_sections_2914_; lean_object* v_declarationRange_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; uint8_t v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_text_2913_ = lean_ctor_get(v_x_2912_, 0);
lean_inc_ref(v_text_2913_);
v_sections_2914_ = lean_ctor_get(v_x_2912_, 1);
lean_inc_ref(v_sections_2914_);
v_declarationRange_2915_ = lean_ctor_get(v_x_2912_, 2);
lean_inc_ref(v_declarationRange_2915_);
lean_dec_ref(v_x_2912_);
v___x_2916_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_2917_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3));
v___x_2918_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_2919_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_text_2913_);
v___x_2920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2918_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___x_2921_ = 0;
v___x_2922_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2922_, 0, v___x_2920_);
lean_ctor_set_uint8(v___x_2922_, sizeof(void*)*1, v___x_2921_);
v___x_2923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2917_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_2925_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = lean_box(1);
v___x_2927_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2925_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5));
v___x_2929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2927_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
v___x_2930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
lean_ctor_set(v___x_2930_, 1, v___x_2916_);
v___x_2931_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_2932_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(v_sections_2914_);
v___x_2933_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2931_);
lean_ctor_set(v___x_2933_, 1, v___x_2932_);
v___x_2934_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
lean_ctor_set_uint8(v___x_2934_, sizeof(void*)*1, v___x_2921_);
v___x_2935_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2930_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
lean_ctor_set(v___x_2936_, 1, v___x_2924_);
v___x_2937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set(v___x_2937_, 1, v___x_2926_);
v___x_2938_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7));
v___x_2939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2937_);
lean_ctor_set(v___x_2939_, 1, v___x_2938_);
v___x_2940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
lean_ctor_set(v___x_2940_, 1, v___x_2916_);
v___x_2941_ = lean_obj_once(&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8, &l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once, _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8);
v___x_2942_ = l_Lean_instReprDeclarationRange_repr___redArg(v_declarationRange_2915_);
v___x_2943_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2941_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
v___x_2944_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
lean_ctor_set_uint8(v___x_2944_, sizeof(void*)*1, v___x_2921_);
v___x_2945_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2940_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2947_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
lean_ctor_set(v___x_2948_, 1, v___x_2945_);
v___x_2949_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2946_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
v___x_2952_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
lean_ctor_set_uint8(v___x_2952_, sizeof(void*)*1, v___x_2921_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object* v_x_2953_, lean_object* v_prec_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(v_x_2953_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object* v_x_2956_, lean_object* v_prec_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l_Lean_VersoModuleDocs_instReprSnippet_repr(v_x_2956_, v_prec_2957_);
lean_dec(v_prec_2957_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object* v_x_2959_, lean_object* v_x_2960_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_x_2959_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object* v_x_2962_, lean_object* v_x_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(v_x_2962_, v_x_2963_);
lean_dec(v_x_2963_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_2965_, lean_object* v_prec_2966_){
_start:
{
lean_object* v___x_2967_; 
v___x_2967_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_x_2965_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_2968_, lean_object* v_prec_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(v_x_2968_, v_prec_2969_);
lean_dec(v_prec_2969_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object* v_x_2971_, lean_object* v_prec_2972_){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_x_2971_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object* v_x_2974_, lean_object* v_prec_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(v_x_2974_, v_prec_2975_);
lean_dec(v_prec_2975_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object* v_x_2977_, lean_object* v_x_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_2977_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object* v_x_2980_, lean_object* v_x_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(v_x_2980_, v_x_2981_);
lean_dec(v_x_2981_);
lean_dec(v_x_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object* v_x_2983_, lean_object* v_prec_2984_){
_start:
{
lean_object* v___x_2985_; 
v___x_2985_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_x_2983_);
return v___x_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object* v_x_2986_, lean_object* v_prec_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(v_x_2986_, v_prec_2987_);
lean_dec(v_prec_2987_);
return v_res_2988_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object* v_level_2991_, lean_object* v_snippet_2992_){
_start:
{
lean_object* v_sections_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v_sections_2993_ = lean_ctor_get(v_snippet_2992_, 1);
v___x_2994_ = lean_unsigned_to_nat(0u);
v___x_2995_ = lean_array_get_size(v_sections_2993_);
v___x_2996_ = lean_nat_dec_lt(v___x_2994_, v___x_2995_);
if (v___x_2996_ == 0)
{
uint8_t v___x_2997_; 
v___x_2997_ = 1;
return v___x_2997_;
}
else
{
lean_object* v___x_2998_; lean_object* v_fst_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; 
v___x_2998_ = lean_array_fget_borrowed(v_sections_2993_, v___x_2994_);
v_fst_2999_ = lean_ctor_get(v___x_2998_, 0);
v___x_3000_ = lean_unsigned_to_nat(1u);
v___x_3001_ = lean_nat_add(v_level_2991_, v___x_3000_);
v___x_3002_ = lean_nat_dec_le(v_fst_2999_, v___x_3001_);
lean_dec(v___x_3001_);
return v___x_3002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object* v_level_3003_, lean_object* v_snippet_3004_){
_start:
{
uint8_t v_res_3005_; lean_object* v_r_3006_; 
v_res_3005_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_level_3003_, v_snippet_3004_);
lean_dec_ref(v_snippet_3004_);
lean_dec(v_level_3003_);
v_r_3006_ = lean_box(v_res_3005_);
return v_r_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object* v_snippet_3007_){
_start:
{
lean_object* v_sections_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v_sections_3008_ = lean_ctor_get(v_snippet_3007_, 1);
v___x_3009_ = lean_array_get_size(v_sections_3008_);
v___x_3010_ = lean_unsigned_to_nat(1u);
v___x_3011_ = lean_nat_sub(v___x_3009_, v___x_3010_);
v___x_3012_ = lean_nat_dec_lt(v___x_3011_, v___x_3009_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3013_; 
lean_dec(v___x_3011_);
v___x_3013_ = lean_box(0);
return v___x_3013_;
}
else
{
lean_object* v___x_3014_; lean_object* v_fst_3015_; lean_object* v___x_3016_; 
v___x_3014_ = lean_array_fget_borrowed(v_sections_3008_, v___x_3011_);
lean_dec(v___x_3011_);
v_fst_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_fst_3015_);
v___x_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3016_, 0, v_fst_3015_);
return v___x_3016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object* v_snippet_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v_snippet_3017_);
lean_dec_ref(v_snippet_3017_);
return v_res_3018_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0(void){
_start:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3019_ = lean_box(0);
v___x_3020_ = l_unsafeCast___redArg(v___x_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object* v_snippet_3021_, lean_object* v_block_3022_){
_start:
{
lean_object* v_text_3023_; lean_object* v_sections_3024_; lean_object* v_declarationRange_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; uint8_t v___x_3028_; 
v_text_3023_ = lean_ctor_get(v_snippet_3021_, 0);
v_sections_3024_ = lean_ctor_get(v_snippet_3021_, 1);
v_declarationRange_3025_ = lean_ctor_get(v_snippet_3021_, 2);
v___x_3026_ = lean_array_get_size(v_sections_3024_);
v___x_3027_ = lean_unsigned_to_nat(0u);
v___x_3028_ = lean_nat_dec_eq(v___x_3026_, v___x_3027_);
if (v___x_3028_ == 0)
{
lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; 
v___x_3029_ = lean_unsigned_to_nat(1u);
v___x_3030_ = lean_nat_sub(v___x_3026_, v___x_3029_);
v___x_3031_ = lean_nat_dec_lt(v___x_3030_, v___x_3026_);
if (v___x_3031_ == 0)
{
lean_dec(v___x_3030_);
lean_dec_ref(v_block_3022_);
return v_snippet_3021_;
}
else
{
lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3075_; 
lean_inc_ref(v_declarationRange_3025_);
lean_inc_ref(v_sections_3024_);
lean_inc_ref(v_text_3023_);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_snippet_3021_);
if (v_isSharedCheck_3075_ == 0)
{
lean_object* v_unused_3076_; lean_object* v_unused_3077_; lean_object* v_unused_3078_; 
v_unused_3076_ = lean_ctor_get(v_snippet_3021_, 2);
lean_dec(v_unused_3076_);
v_unused_3077_ = lean_ctor_get(v_snippet_3021_, 1);
lean_dec(v_unused_3077_);
v_unused_3078_ = lean_ctor_get(v_snippet_3021_, 0);
lean_dec(v_unused_3078_);
v___x_3033_ = v_snippet_3021_;
v_isShared_3034_ = v_isSharedCheck_3075_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v_snippet_3021_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3075_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v_v_3035_; lean_object* v_snd_3036_; lean_object* v_snd_3037_; lean_object* v_fst_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3073_; 
v_v_3035_ = lean_array_fget(v_sections_3024_, v___x_3030_);
v_snd_3036_ = lean_ctor_get(v_v_3035_, 1);
lean_inc(v_snd_3036_);
v_snd_3037_ = lean_ctor_get(v_snd_3036_, 1);
lean_inc(v_snd_3037_);
v_fst_3038_ = lean_ctor_get(v_v_3035_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_v_3035_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v_v_3035_, 1);
lean_dec(v_unused_3074_);
v___x_3040_ = v_v_3035_;
v_isShared_3041_ = v_isSharedCheck_3073_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_fst_3038_);
lean_dec(v_v_3035_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3073_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v_fst_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3071_; 
v_fst_3042_ = lean_ctor_get(v_snd_3036_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_snd_3036_);
if (v_isSharedCheck_3071_ == 0)
{
lean_object* v_unused_3072_; 
v_unused_3072_ = lean_ctor_get(v_snd_3036_, 1);
lean_dec(v_unused_3072_);
v___x_3044_ = v_snd_3036_;
v_isShared_3045_ = v_isSharedCheck_3071_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_fst_3042_);
lean_dec(v_snd_3036_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3071_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v_title_3046_; lean_object* v_titleString_3047_; lean_object* v_metadata_3048_; lean_object* v_content_3049_; lean_object* v_subParts_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3070_; 
v_title_3046_ = lean_ctor_get(v_snd_3037_, 0);
v_titleString_3047_ = lean_ctor_get(v_snd_3037_, 1);
v_metadata_3048_ = lean_ctor_get(v_snd_3037_, 2);
v_content_3049_ = lean_ctor_get(v_snd_3037_, 3);
v_subParts_3050_ = lean_ctor_get(v_snd_3037_, 4);
v_isSharedCheck_3070_ = !lean_is_exclusive(v_snd_3037_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3052_ = v_snd_3037_;
v_isShared_3053_ = v_isSharedCheck_3070_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_subParts_3050_);
lean_inc(v_content_3049_);
lean_inc(v_metadata_3048_);
lean_inc(v_titleString_3047_);
lean_inc(v_title_3046_);
lean_dec(v_snd_3037_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3070_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3054_; lean_object* v_xs_x27_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3054_ = lean_obj_once(&l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0, &l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0_once, _init_l_Lean_VersoModuleDocs_Snippet_addBlock___closed__0);
v_xs_x27_3055_ = lean_array_fset(v_sections_3024_, v___x_3030_, v___x_3054_);
v___x_3056_ = lean_array_push(v_content_3049_, v_block_3022_);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 3, v___x_3056_);
v___x_3058_ = v___x_3052_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_title_3046_);
lean_ctor_set(v_reuseFailAlloc_3069_, 1, v_titleString_3047_);
lean_ctor_set(v_reuseFailAlloc_3069_, 2, v_metadata_3048_);
lean_ctor_set(v_reuseFailAlloc_3069_, 3, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3069_, 4, v_subParts_3050_);
v___x_3058_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 1, v___x_3058_);
v___x_3060_ = v___x_3044_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_fst_3042_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3062_; 
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 1, v___x_3060_);
v___x_3062_ = v___x_3040_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_fst_3038_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v___x_3060_);
v___x_3062_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3063_; lean_object* v___x_3065_; 
v___x_3063_ = lean_array_fset(v_xs_x27_3055_, v___x_3030_, v___x_3062_);
lean_dec(v___x_3030_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___x_3063_);
v___x_3065_ = v___x_3033_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_text_3023_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v___x_3063_);
lean_ctor_set(v_reuseFailAlloc_3066_, 2, v_declarationRange_3025_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
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
lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3086_; 
lean_inc_ref(v_declarationRange_3025_);
lean_inc_ref(v_sections_3024_);
lean_inc_ref(v_text_3023_);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_snippet_3021_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; lean_object* v_unused_3088_; lean_object* v_unused_3089_; 
v_unused_3087_ = lean_ctor_get(v_snippet_3021_, 2);
lean_dec(v_unused_3087_);
v_unused_3088_ = lean_ctor_get(v_snippet_3021_, 1);
lean_dec(v_unused_3088_);
v_unused_3089_ = lean_ctor_get(v_snippet_3021_, 0);
lean_dec(v_unused_3089_);
v___x_3080_ = v_snippet_3021_;
v_isShared_3081_ = v_isSharedCheck_3086_;
goto v_resetjp_3079_;
}
else
{
lean_dec(v_snippet_3021_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3086_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3082_; lean_object* v___x_3084_; 
v___x_3082_ = lean_array_push(v_text_3023_, v_block_3022_);
if (v_isShared_3081_ == 0)
{
lean_ctor_set(v___x_3080_, 0, v___x_3082_);
v___x_3084_ = v___x_3080_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3082_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v_sections_3024_);
lean_ctor_set(v_reuseFailAlloc_3085_, 2, v_declarationRange_3025_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object* v_snippet_3090_, lean_object* v_level_3091_, lean_object* v_range_3092_, lean_object* v_part_3093_){
_start:
{
lean_object* v_text_3094_; lean_object* v_sections_3095_; lean_object* v_declarationRange_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3106_; 
v_text_3094_ = lean_ctor_get(v_snippet_3090_, 0);
v_sections_3095_ = lean_ctor_get(v_snippet_3090_, 1);
v_declarationRange_3096_ = lean_ctor_get(v_snippet_3090_, 2);
v_isSharedCheck_3106_ = !lean_is_exclusive(v_snippet_3090_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3098_ = v_snippet_3090_;
v_isShared_3099_ = v_isSharedCheck_3106_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_declarationRange_3096_);
lean_inc(v_sections_3095_);
lean_inc(v_text_3094_);
lean_dec(v_snippet_3090_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3106_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
v___x_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3100_, 0, v_range_3092_);
lean_ctor_set(v___x_3100_, 1, v_part_3093_);
v___x_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3101_, 0, v_level_3091_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = lean_array_push(v_sections_3095_, v___x_3101_);
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 1, v___x_3102_);
v___x_3104_ = v___x_3098_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_text_3094_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3105_, 2, v_declarationRange_3096_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3107_ = lean_unsigned_to_nat(32u);
v___x_3108_ = lean_mk_empty_array_with_capacity(v___x_3107_);
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
return v___x_3109_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1(void){
_start:
{
size_t v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3110_ = ((size_t)5ULL);
v___x_3111_ = lean_unsigned_to_nat(0u);
v___x_3112_ = lean_unsigned_to_nat(32u);
v___x_3113_ = lean_mk_empty_array_with_capacity(v___x_3112_);
v___x_3114_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__0, &l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0);
v___x_3115_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
lean_ctor_set(v___x_3115_, 1, v___x_3113_);
lean_ctor_set(v___x_3115_, 2, v___x_3111_);
lean_ctor_set(v___x_3115_, 3, v___x_3111_);
lean_ctor_set_usize(v___x_3115_, 4, v___x_3110_);
return v___x_3115_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default(void){
_start:
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__1, &l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1);
return v___x_3116_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs(void){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Lean_instInhabitedVersoModuleDocs_default;
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(lean_object* v_as_3118_, lean_object* v_i_3119_){
_start:
{
lean_object* v_zero_3120_; uint8_t v_isZero_3121_; 
v_zero_3120_ = lean_unsigned_to_nat(0u);
v_isZero_3121_ = lean_nat_dec_eq(v_i_3119_, v_zero_3120_);
if (v_isZero_3121_ == 1)
{
lean_object* v___x_3122_; 
lean_dec(v_i_3119_);
v___x_3122_ = lean_box(0);
return v___x_3122_;
}
else
{
lean_object* v_one_3123_; lean_object* v_n_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_one_3123_ = lean_unsigned_to_nat(1u);
v_n_3124_ = lean_nat_sub(v_i_3119_, v_one_3123_);
lean_dec(v_i_3119_);
v___x_3125_ = lean_array_fget_borrowed(v_as_3118_, v_n_3124_);
v___x_3126_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v___x_3125_);
if (lean_obj_tag(v___x_3126_) == 0)
{
v_i_3119_ = v_n_3124_;
goto _start;
}
else
{
lean_dec(v_n_3124_);
return v___x_3126_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg___boxed(lean_object* v_as_3128_, lean_object* v_i_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_as_3128_, v_i_3129_);
lean_dec_ref(v_as_3128_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3131_, lean_object* v_i_3132_){
_start:
{
lean_object* v_zero_3133_; uint8_t v_isZero_3134_; 
v_zero_3133_ = lean_unsigned_to_nat(0u);
v_isZero_3134_ = lean_nat_dec_eq(v_i_3132_, v_zero_3133_);
if (v_isZero_3134_ == 1)
{
lean_object* v___x_3135_; 
lean_dec(v_i_3132_);
v___x_3135_ = lean_box(0);
return v___x_3135_;
}
else
{
lean_object* v_one_3136_; lean_object* v_n_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_one_3136_ = lean_unsigned_to_nat(1u);
v_n_3137_ = lean_nat_sub(v_i_3132_, v_one_3136_);
lean_dec(v_i_3132_);
v___x_3138_ = lean_array_fget_borrowed(v_as_3131_, v_n_3137_);
v___x_3139_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v___x_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
v_i_3132_ = v_n_3137_;
goto _start;
}
else
{
lean_dec(v_n_3137_);
return v___x_3139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(lean_object* v_x_3141_){
_start:
{
if (lean_obj_tag(v_x_3141_) == 0)
{
lean_object* v_cs_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v_cs_3142_ = lean_ctor_get(v_x_3141_, 0);
v___x_3143_ = lean_array_get_size(v_cs_3142_);
v___x_3144_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_cs_3142_, v___x_3143_);
return v___x_3144_;
}
else
{
lean_object* v_vs_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v_vs_3145_ = lean_ctor_get(v_x_3141_, 0);
v___x_3146_ = lean_array_get_size(v_vs_3145_);
v___x_3147_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_vs_3145_, v___x_3146_);
return v___x_3147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1___boxed(lean_object* v_x_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v_x_3148_);
lean_dec_ref(v_x_3148_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3150_, lean_object* v_i_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_as_3150_, v_i_3151_);
lean_dec_ref(v_as_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(lean_object* v_t_3153_){
_start:
{
lean_object* v_root_3154_; lean_object* v_tail_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v_root_3154_ = lean_ctor_get(v_t_3153_, 0);
v_tail_3155_ = lean_ctor_get(v_t_3153_, 1);
v___x_3156_ = lean_array_get_size(v_tail_3155_);
v___x_3157_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_tail_3155_, v___x_3156_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v___x_3158_; 
v___x_3158_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v_root_3154_);
return v___x_3158_;
}
else
{
return v___x_3157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0___boxed(lean_object* v_t_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_t_3159_);
lean_dec_ref(v_t_3159_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object* v_x_3161_){
_start:
{
lean_object* v___x_3162_; 
v___x_3162_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting___boxed(lean_object* v_x_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lean_VersoModuleDocs_terminalNesting(v_x_3163_);
lean_dec_ref(v_x_3163_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(lean_object* v_as_3165_, lean_object* v_i_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_as_3165_, v_i_3166_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___boxed(lean_object* v_as_3169_, lean_object* v_i_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(v_as_3169_, v_i_3170_, v_a_3171_);
lean_dec_ref(v_as_3169_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(lean_object* v_as_3173_, lean_object* v_i_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v___x_3176_; 
v___x_3176_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_as_3173_, v_i_3174_);
return v___x_3176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___boxed(lean_object* v_as_3177_, lean_object* v_i_3178_, lean_object* v_a_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(v_as_3177_, v_i_3178_, v_a_3179_);
lean_dec_ref(v_as_3177_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object* v___x_3187_, lean_object* v_v_3188_, lean_object* v_x_3189_){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; uint8_t v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3190_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___x_3191_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3192_ = lean_box(1);
v___x_3193_ = ((lean_object*)(l_Lean_instReprVersoModuleDocs___lam__0___closed__2));
v___x_3194_ = l_Lean_PersistentArray_toArray___redArg(v_v_3188_);
v___x_3195_ = l_Array_repr___redArg(v___x_3187_, v___x_3194_);
v___x_3196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3193_);
lean_ctor_set(v___x_3196_, 1, v___x_3195_);
v___x_3197_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3190_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
v___x_3198_ = 0;
v___x_3199_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3199_, 0, v___x_3197_);
lean_ctor_set_uint8(v___x_3199_, sizeof(void*)*1, v___x_3198_);
lean_inc_ref(v___x_3199_);
v___x_3200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3191_);
lean_ctor_set(v___x_3200_, 1, v___x_3199_);
v___x_3201_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
lean_ctor_set(v___x_3201_, 1, v___x_3192_);
v___x_3202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
lean_ctor_set(v___x_3202_, 1, v___x_3199_);
v___x_3203_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3202_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3190_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
lean_ctor_set_uint8(v___x_3206_, sizeof(void*)*1, v___x_3198_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object* v___x_3207_, lean_object* v_v_3208_, lean_object* v_x_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_Lean_instReprVersoModuleDocs___lam__0(v___x_3207_, v_v_3208_, v_x_3209_);
lean_dec(v_x_3209_);
lean_dec_ref(v_v_3208_);
return v_res_3210_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object* v_docs_3214_){
_start:
{
uint8_t v___x_3215_; 
v___x_3215_ = l_Lean_PersistentArray_isEmpty___redArg(v_docs_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object* v_docs_3216_){
_start:
{
uint8_t v_res_3217_; lean_object* v_r_3218_; 
v_res_3217_ = l_Lean_VersoModuleDocs_isEmpty(v_docs_3216_);
lean_dec_ref(v_docs_3216_);
v_r_3218_ = lean_box(v_res_3217_);
return v_r_3218_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object* v_docs_3219_, lean_object* v_snippet_3220_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3219_);
if (lean_obj_tag(v___x_3221_) == 1)
{
lean_object* v_val_3222_; uint8_t v___x_3223_; 
v_val_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_val_3222_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3223_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_3222_, v_snippet_3220_);
lean_dec(v_val_3222_);
return v___x_3223_;
}
else
{
uint8_t v___x_3224_; 
lean_dec(v___x_3221_);
v___x_3224_ = 1;
return v___x_3224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object* v_docs_3225_, lean_object* v_snippet_3226_){
_start:
{
uint8_t v_res_3227_; lean_object* v_r_3228_; 
v_res_3227_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3225_, v_snippet_3226_);
lean_dec_ref(v_snippet_3226_);
lean_dec_ref(v_docs_3225_);
v_r_3228_ = lean_box(v_res_3227_);
return v_r_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object* v_docs_3232_, lean_object* v_snippet_3233_){
_start:
{
uint8_t v___x_3234_; 
v___x_3234_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3232_, v_snippet_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; 
lean_dec_ref(v_snippet_3233_);
lean_dec_ref(v_docs_3232_);
v___x_3235_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__1));
return v___x_3235_;
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = l_Lean_PersistentArray_push___redArg(v_docs_3232_, v_snippet_3233_);
v___x_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3236_);
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object* v_msg_3238_){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3239_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3240_ = lean_panic_fn_borrowed(v___x_3239_, v_msg_3238_);
return v___x_3240_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_add_x21___closed__2(void){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3243_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__0));
v___x_3244_ = lean_unsigned_to_nat(4u);
v___x_3245_ = lean_unsigned_to_nat(346u);
v___x_3246_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__1));
v___x_3247_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__0));
v___x_3248_ = l_mkPanicMessageWithDecl(v___x_3247_, v___x_3246_, v___x_3245_, v___x_3244_, v___x_3243_);
return v___x_3248_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object* v_docs_3249_, lean_object* v_snippet_3250_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3249_);
if (lean_obj_tag(v___x_3251_) == 1)
{
lean_object* v_val_3252_; uint8_t v___x_3253_; 
v_val_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_val_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_3252_, v_snippet_3250_);
lean_dec(v_val_3252_);
if (v___x_3253_ == 0)
{
lean_object* v___x_3254_; lean_object* v___x_3255_; 
lean_dec_ref(v_snippet_3250_);
lean_dec_ref(v_docs_3249_);
v___x_3254_ = lean_obj_once(&l_Lean_VersoModuleDocs_add_x21___closed__2, &l_Lean_VersoModuleDocs_add_x21___closed__2_once, _init_l_Lean_VersoModuleDocs_add_x21___closed__2);
v___x_3255_ = l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(v___x_3254_);
return v___x_3255_;
}
else
{
lean_object* v___x_3256_; 
v___x_3256_ = l_Lean_PersistentArray_push___redArg(v_docs_3249_, v_snippet_3250_);
return v___x_3256_;
}
}
else
{
lean_object* v___x_3257_; 
lean_dec(v___x_3251_);
v___x_3257_ = l_Lean_PersistentArray_push___redArg(v_docs_3249_, v_snippet_3250_);
return v___x_3257_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object* v_ctx_3258_){
_start:
{
lean_object* v_context_3259_; lean_object* v___x_3260_; 
v_context_3259_ = lean_ctor_get(v_ctx_3258_, 2);
v___x_3260_ = lean_array_get_size(v_context_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object* v_ctx_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_3261_);
lean_dec_ref(v_ctx_3261_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object* v_ctx_3266_){
_start:
{
lean_object* v_content_3267_; lean_object* v_priorParts_3268_; lean_object* v_context_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3292_; 
v_content_3267_ = lean_ctor_get(v_ctx_3266_, 0);
v_priorParts_3268_ = lean_ctor_get(v_ctx_3266_, 1);
v_context_3269_ = lean_ctor_get(v_ctx_3266_, 2);
v_isSharedCheck_3292_ = !lean_is_exclusive(v_ctx_3266_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3271_ = v_ctx_3266_;
v_isShared_3272_ = v_isSharedCheck_3292_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_context_3269_);
lean_inc(v_priorParts_3268_);
lean_inc(v_content_3267_);
lean_dec(v_ctx_3266_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3292_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; 
v___x_3273_ = lean_array_get_size(v_context_3269_);
v___x_3274_ = lean_unsigned_to_nat(0u);
v___x_3275_ = lean_nat_dec_eq(v___x_3273_, v___x_3274_);
if (v___x_3275_ == 0)
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v_last_3278_; lean_object* v_content_3279_; lean_object* v_priorParts_3280_; lean_object* v_titleString_3281_; lean_object* v_title_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3288_; 
v___x_3276_ = lean_unsigned_to_nat(1u);
v___x_3277_ = lean_nat_sub(v___x_3273_, v___x_3276_);
v_last_3278_ = lean_array_fget_borrowed(v_context_3269_, v___x_3277_);
lean_dec(v___x_3277_);
v_content_3279_ = lean_ctor_get(v_last_3278_, 0);
lean_inc_ref(v_content_3279_);
v_priorParts_3280_ = lean_ctor_get(v_last_3278_, 1);
v_titleString_3281_ = lean_ctor_get(v_last_3278_, 2);
v_title_3282_ = lean_ctor_get(v_last_3278_, 3);
v___x_3283_ = lean_box(0);
lean_inc_ref(v_titleString_3281_);
lean_inc_ref(v_title_3282_);
v___x_3284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3284_, 0, v_title_3282_);
lean_ctor_set(v___x_3284_, 1, v_titleString_3281_);
lean_ctor_set(v___x_3284_, 2, v___x_3283_);
lean_ctor_set(v___x_3284_, 3, v_content_3267_);
lean_ctor_set(v___x_3284_, 4, v_priorParts_3268_);
lean_inc_ref(v_priorParts_3280_);
v___x_3285_ = lean_array_push(v_priorParts_3280_, v___x_3284_);
v___x_3286_ = lean_array_pop(v_context_3269_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 2, v___x_3286_);
lean_ctor_set(v___x_3271_, 1, v___x_3285_);
lean_ctor_set(v___x_3271_, 0, v_content_3279_);
v___x_3288_ = v___x_3271_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_content_3279_);
lean_ctor_set(v_reuseFailAlloc_3290_, 1, v___x_3285_);
lean_ctor_set(v_reuseFailAlloc_3290_, 2, v___x_3286_);
v___x_3288_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
}
else
{
lean_object* v___x_3291_; 
lean_del_object(v___x_3271_);
lean_dec_ref(v_context_3269_);
lean_dec_ref(v_priorParts_3268_);
lean_dec_ref(v_content_3267_);
v___x_3291_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1));
return v___x_3291_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object* v_ctx_3293_){
_start:
{
lean_object* v_context_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v_context_3294_ = lean_ctor_get(v_ctx_3293_, 2);
v___x_3295_ = lean_array_get_size(v_context_3294_);
v___x_3296_ = lean_unsigned_to_nat(0u);
v___x_3297_ = lean_nat_dec_eq(v___x_3295_, v___x_3296_);
if (v___x_3297_ == 0)
{
lean_object* v___x_3298_; 
v___x_3298_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_3293_);
if (lean_obj_tag(v___x_3298_) == 0)
{
return v___x_3298_;
}
else
{
lean_object* v_a_3299_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v_ctx_3293_ = v_a_3299_;
goto _start;
}
}
else
{
lean_object* v___x_3301_; 
v___x_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3301_, 0, v_ctx_3293_);
return v___x_3301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object* v_ctx_3304_, lean_object* v_partLevel_3305_, lean_object* v_part_3306_){
_start:
{
lean_object* v___x_3307_; uint8_t v___x_3308_; 
v___x_3307_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_3304_);
v___x_3308_ = lean_nat_dec_lt(v___x_3307_, v_partLevel_3305_);
if (v___x_3308_ == 0)
{
uint8_t v___x_3309_; 
v___x_3309_ = lean_nat_dec_eq(v_partLevel_3305_, v___x_3307_);
lean_dec(v___x_3307_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; 
v___x_3310_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_3304_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_dec_ref(v_part_3306_);
lean_dec(v_partLevel_3305_);
return v___x_3310_;
}
else
{
lean_object* v_a_3311_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v_ctx_3304_ = v_a_3311_;
goto _start;
}
}
else
{
lean_object* v_content_3313_; lean_object* v_priorParts_3314_; lean_object* v_context_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3324_; 
lean_dec(v_partLevel_3305_);
v_content_3313_ = lean_ctor_get(v_ctx_3304_, 0);
v_priorParts_3314_ = lean_ctor_get(v_ctx_3304_, 1);
v_context_3315_ = lean_ctor_get(v_ctx_3304_, 2);
v_isSharedCheck_3324_ = !lean_is_exclusive(v_ctx_3304_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3317_ = v_ctx_3304_;
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_context_3315_);
lean_inc(v_priorParts_3314_);
lean_inc(v_content_3313_);
lean_dec(v_ctx_3304_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3319_ = lean_array_push(v_priorParts_3314_, v_part_3306_);
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 1, v___x_3319_);
v___x_3321_ = v___x_3317_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_content_3313_);
lean_ctor_set(v_reuseFailAlloc_3323_, 1, v___x_3319_);
lean_ctor_set(v_reuseFailAlloc_3323_, 2, v_context_3315_);
v___x_3321_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3322_; 
v___x_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3322_, 0, v___x_3321_);
return v___x_3322_;
}
}
}
}
else
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
lean_dec_ref(v_part_3306_);
lean_dec_ref(v_ctx_3304_);
v___x_3325_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0));
v___x_3326_ = l_Nat_reprFast(v___x_3307_);
v___x_3327_ = lean_string_append(v___x_3325_, v___x_3326_);
lean_dec_ref(v___x_3326_);
v___x_3328_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1));
v___x_3329_ = lean_string_append(v___x_3327_, v___x_3328_);
v___x_3330_ = l_Nat_reprFast(v_partLevel_3305_);
v___x_3331_ = lean_string_append(v___x_3329_, v___x_3330_);
lean_dec_ref(v___x_3330_);
v___x_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
return v___x_3332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object* v_ctx_3336_, lean_object* v_blocks_3337_){
_start:
{
lean_object* v_content_3338_; lean_object* v_priorParts_3339_; lean_object* v_context_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3353_; 
v_content_3338_ = lean_ctor_get(v_ctx_3336_, 0);
v_priorParts_3339_ = lean_ctor_get(v_ctx_3336_, 1);
v_context_3340_ = lean_ctor_get(v_ctx_3336_, 2);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_ctx_3336_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3342_ = v_ctx_3336_;
v_isShared_3343_ = v_isSharedCheck_3353_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_context_3340_);
lean_inc(v_priorParts_3339_);
lean_inc(v_content_3338_);
lean_dec(v_ctx_3336_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3353_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; uint8_t v___x_3346_; 
v___x_3344_ = lean_array_get_size(v_priorParts_3339_);
v___x_3345_ = lean_unsigned_to_nat(0u);
v___x_3346_ = lean_nat_dec_eq(v___x_3344_, v___x_3345_);
if (v___x_3346_ == 0)
{
lean_object* v___x_3347_; 
lean_del_object(v___x_3342_);
lean_dec_ref(v_context_3340_);
lean_dec_ref(v_priorParts_3339_);
lean_dec_ref(v_content_3338_);
v___x_3347_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1));
return v___x_3347_;
}
else
{
lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3348_ = l_Array_append___redArg(v_content_3338_, v_blocks_3337_);
if (v_isShared_3343_ == 0)
{
lean_ctor_set(v___x_3342_, 0, v___x_3348_);
v___x_3350_ = v___x_3342_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3348_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_priorParts_3339_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_context_3340_);
v___x_3350_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3351_; 
v___x_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
return v___x_3351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object* v_ctx_3354_, lean_object* v_blocks_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_3354_, v_blocks_3355_);
lean_dec_ref(v_blocks_3355_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object* v_as_3357_, size_t v_sz_3358_, size_t v_i_3359_, lean_object* v_b_3360_){
_start:
{
uint8_t v___x_3361_; 
v___x_3361_ = lean_usize_dec_lt(v_i_3359_, v_sz_3358_);
if (v___x_3361_ == 0)
{
lean_object* v___x_3362_; 
v___x_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3362_, 0, v_b_3360_);
return v___x_3362_;
}
else
{
lean_object* v_a_3363_; lean_object* v_snd_3364_; lean_object* v_fst_3365_; lean_object* v_snd_3366_; lean_object* v___x_3367_; 
v_a_3363_ = lean_array_uget_borrowed(v_as_3357_, v_i_3359_);
v_snd_3364_ = lean_ctor_get(v_a_3363_, 1);
v_fst_3365_ = lean_ctor_get(v_a_3363_, 0);
v_snd_3366_ = lean_ctor_get(v_snd_3364_, 1);
lean_inc(v_snd_3366_);
lean_inc(v_fst_3365_);
v___x_3367_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(v_b_3360_, v_fst_3365_, v_snd_3366_);
if (lean_obj_tag(v___x_3367_) == 0)
{
return v___x_3367_;
}
else
{
lean_object* v_a_3368_; size_t v___x_3369_; size_t v___x_3370_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v___x_3369_ = ((size_t)1ULL);
v___x_3370_ = lean_usize_add(v_i_3359_, v___x_3369_);
v_i_3359_ = v___x_3370_;
v_b_3360_ = v_a_3368_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object* v_as_3372_, lean_object* v_sz_3373_, lean_object* v_i_3374_, lean_object* v_b_3375_){
_start:
{
size_t v_sz_boxed_3376_; size_t v_i_boxed_3377_; lean_object* v_res_3378_; 
v_sz_boxed_3376_ = lean_unbox_usize(v_sz_3373_);
lean_dec(v_sz_3373_);
v_i_boxed_3377_ = lean_unbox_usize(v_i_3374_);
lean_dec(v_i_3374_);
v_res_3378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_as_3372_, v_sz_boxed_3376_, v_i_boxed_3377_, v_b_3375_);
lean_dec_ref(v_as_3372_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object* v_ctx_3379_, lean_object* v_snippet_3380_){
_start:
{
lean_object* v_text_3381_; lean_object* v_sections_3382_; lean_object* v___x_3383_; 
v_text_3381_ = lean_ctor_get(v_snippet_3380_, 0);
v_sections_3382_ = lean_ctor_get(v_snippet_3380_, 1);
v___x_3383_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_3379_, v_text_3381_);
if (lean_obj_tag(v___x_3383_) == 0)
{
return v___x_3383_;
}
else
{
lean_object* v_a_3384_; size_t v_sz_3385_; size_t v___x_3386_; lean_object* v___x_3387_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3383_, 1);
v_sz_3385_ = lean_array_size(v_sections_3382_);
v___x_3386_ = ((size_t)0ULL);
v___x_3387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_sections_3382_, v_sz_3385_, v___x_3386_, v_a_3384_);
return v___x_3387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object* v_ctx_3388_, lean_object* v_snippet_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_ctx_3388_, v_snippet_3389_);
lean_dec_ref(v_snippet_3389_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object* v_as_3391_, size_t v_sz_3392_, size_t v_i_3393_, lean_object* v_b_3394_){
_start:
{
uint8_t v___x_3395_; 
v___x_3395_ = lean_usize_dec_lt(v_i_3393_, v_sz_3392_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; 
v___x_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3396_, 0, v_b_3394_);
return v___x_3396_;
}
else
{
lean_object* v_snd_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3419_; 
v_snd_3397_ = lean_ctor_get(v_b_3394_, 1);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_b_3394_);
if (v_isSharedCheck_3419_ == 0)
{
lean_object* v_unused_3420_; 
v_unused_3420_ = lean_ctor_get(v_b_3394_, 0);
lean_dec(v_unused_3420_);
v___x_3399_ = v_b_3394_;
v_isShared_3400_ = v_isSharedCheck_3419_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_snd_3397_);
lean_dec(v_b_3394_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3419_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v_a_3401_; lean_object* v___x_3402_; 
v_a_3401_ = lean_array_uget_borrowed(v_as_3391_, v_i_3393_);
v___x_3402_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3397_, v_a_3401_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_del_object(v___x_3399_);
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
v_a_3411_ = lean_ctor_get(v___x_3402_, 0);
lean_inc(v_a_3411_);
lean_dec_ref_known(v___x_3402_, 1);
v___x_3412_ = lean_box(0);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 1, v_a_3411_);
lean_ctor_set(v___x_3399_, 0, v___x_3412_);
v___x_3414_ = v___x_3399_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v___x_3412_);
lean_ctor_set(v_reuseFailAlloc_3418_, 1, v_a_3411_);
v___x_3414_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
size_t v___x_3415_; size_t v___x_3416_; 
v___x_3415_ = ((size_t)1ULL);
v___x_3416_ = lean_usize_add(v_i_3393_, v___x_3415_);
v_i_3393_ = v___x_3416_;
v_b_3394_ = v___x_3414_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object* v_as_3421_, lean_object* v_sz_3422_, lean_object* v_i_3423_, lean_object* v_b_3424_){
_start:
{
size_t v_sz_boxed_3425_; size_t v_i_boxed_3426_; lean_object* v_res_3427_; 
v_sz_boxed_3425_ = lean_unbox_usize(v_sz_3422_);
lean_dec(v_sz_3422_);
v_i_boxed_3426_ = lean_unbox_usize(v_i_3423_);
lean_dec(v_i_3423_);
v_res_3427_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_3421_, v_sz_boxed_3425_, v_i_boxed_3426_, v_b_3424_);
lean_dec_ref(v_as_3421_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object* v_as_3428_, size_t v_sz_3429_, size_t v_i_3430_, lean_object* v_b_3431_){
_start:
{
uint8_t v___x_3432_; 
v___x_3432_ = lean_usize_dec_lt(v_i_3430_, v_sz_3429_);
if (v___x_3432_ == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3433_, 0, v_b_3431_);
return v___x_3433_;
}
else
{
lean_object* v_snd_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3456_; 
v_snd_3434_ = lean_ctor_get(v_b_3431_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_b_3431_);
if (v_isSharedCheck_3456_ == 0)
{
lean_object* v_unused_3457_; 
v_unused_3457_ = lean_ctor_get(v_b_3431_, 0);
lean_dec(v_unused_3457_);
v___x_3436_ = v_b_3431_;
v_isShared_3437_ = v_isSharedCheck_3456_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_snd_3434_);
lean_dec(v_b_3431_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3456_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_a_3438_; lean_object* v___x_3439_; 
v_a_3438_ = lean_array_uget_borrowed(v_as_3428_, v_i_3430_);
v___x_3439_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3434_, v_a_3438_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
lean_del_object(v___x_3436_);
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3439_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3439_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3449_; lean_object* v___x_3451_; 
v_a_3448_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3439_, 1);
v___x_3449_ = lean_box(0);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v_a_3448_);
lean_ctor_set(v___x_3436_, 0, v___x_3449_);
v___x_3451_ = v___x_3436_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3449_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_a_3448_);
v___x_3451_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
size_t v___x_3452_; size_t v___x_3453_; lean_object* v___x_3454_; 
v___x_3452_ = ((size_t)1ULL);
v___x_3453_ = lean_usize_add(v_i_3430_, v___x_3452_);
v___x_3454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_3428_, v_sz_3429_, v___x_3453_, v___x_3451_);
return v___x_3454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object* v_as_3458_, lean_object* v_sz_3459_, lean_object* v_i_3460_, lean_object* v_b_3461_){
_start:
{
size_t v_sz_boxed_3462_; size_t v_i_boxed_3463_; lean_object* v_res_3464_; 
v_sz_boxed_3462_ = lean_unbox_usize(v_sz_3459_);
lean_dec(v_sz_3459_);
v_i_boxed_3463_ = lean_unbox_usize(v_i_3460_);
lean_dec(v_i_3460_);
v_res_3464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_as_3458_, v_sz_boxed_3462_, v_i_boxed_3463_, v_b_3461_);
lean_dec_ref(v_as_3458_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_3465_, size_t v_sz_3466_, size_t v_i_3467_, lean_object* v_b_3468_){
_start:
{
uint8_t v___x_3469_; 
v___x_3469_ = lean_usize_dec_lt(v_i_3467_, v_sz_3466_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; 
v___x_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3470_, 0, v_b_3468_);
return v___x_3470_;
}
else
{
lean_object* v_snd_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3493_; 
v_snd_3471_ = lean_ctor_get(v_b_3468_, 1);
v_isSharedCheck_3493_ = !lean_is_exclusive(v_b_3468_);
if (v_isSharedCheck_3493_ == 0)
{
lean_object* v_unused_3494_; 
v_unused_3494_ = lean_ctor_get(v_b_3468_, 0);
lean_dec(v_unused_3494_);
v___x_3473_ = v_b_3468_;
v_isShared_3474_ = v_isSharedCheck_3493_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_snd_3471_);
lean_dec(v_b_3468_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3493_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v_a_3475_; lean_object* v___x_3476_; 
v_a_3475_ = lean_array_uget_borrowed(v_as_3465_, v_i_3467_);
v___x_3476_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3471_, v_a_3475_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_del_object(v___x_3473_);
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3476_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3476_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3486_; lean_object* v___x_3488_; 
v_a_3485_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v___x_3476_, 1);
v___x_3486_ = lean_box(0);
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v_a_3485_);
lean_ctor_set(v___x_3473_, 0, v___x_3486_);
v___x_3488_ = v___x_3473_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v_a_3485_);
v___x_3488_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
size_t v___x_3489_; size_t v___x_3490_; 
v___x_3489_ = ((size_t)1ULL);
v___x_3490_ = lean_usize_add(v_i_3467_, v___x_3489_);
v_i_3467_ = v___x_3490_;
v_b_3468_ = v___x_3488_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_3495_, lean_object* v_sz_3496_, lean_object* v_i_3497_, lean_object* v_b_3498_){
_start:
{
size_t v_sz_boxed_3499_; size_t v_i_boxed_3500_; lean_object* v_res_3501_; 
v_sz_boxed_3499_ = lean_unbox_usize(v_sz_3496_);
lean_dec(v_sz_3496_);
v_i_boxed_3500_ = lean_unbox_usize(v_i_3497_);
lean_dec(v_i_3497_);
v_res_3501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_3495_, v_sz_boxed_3499_, v_i_boxed_3500_, v_b_3498_);
lean_dec_ref(v_as_3495_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object* v_as_3502_, size_t v_sz_3503_, size_t v_i_3504_, lean_object* v_b_3505_){
_start:
{
uint8_t v___x_3506_; 
v___x_3506_ = lean_usize_dec_lt(v_i_3504_, v_sz_3503_);
if (v___x_3506_ == 0)
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3507_, 0, v_b_3505_);
return v___x_3507_;
}
else
{
lean_object* v_snd_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3530_; 
v_snd_3508_ = lean_ctor_get(v_b_3505_, 1);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_b_3505_);
if (v_isSharedCheck_3530_ == 0)
{
lean_object* v_unused_3531_; 
v_unused_3531_ = lean_ctor_get(v_b_3505_, 0);
lean_dec(v_unused_3531_);
v___x_3510_ = v_b_3505_;
v_isShared_3511_ = v_isSharedCheck_3530_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_snd_3508_);
lean_dec(v_b_3505_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3530_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v_a_3512_; lean_object* v___x_3513_; 
v_a_3512_ = lean_array_uget_borrowed(v_as_3502_, v_i_3504_);
v___x_3513_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3508_, v_a_3512_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_del_object(v___x_3510_);
v_a_3514_ = lean_ctor_get(v___x_3513_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3513_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3513_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3513_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3523_; lean_object* v___x_3525_; 
v_a_3522_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3513_, 1);
v___x_3523_ = lean_box(0);
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 1, v_a_3522_);
lean_ctor_set(v___x_3510_, 0, v___x_3523_);
v___x_3525_ = v___x_3510_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3529_, 1, v_a_3522_);
v___x_3525_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
size_t v___x_3526_; size_t v___x_3527_; lean_object* v___x_3528_; 
v___x_3526_ = ((size_t)1ULL);
v___x_3527_ = lean_usize_add(v_i_3504_, v___x_3526_);
v___x_3528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_3502_, v_sz_3503_, v___x_3527_, v___x_3525_);
return v___x_3528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3532_, lean_object* v_sz_3533_, lean_object* v_i_3534_, lean_object* v_b_3535_){
_start:
{
size_t v_sz_boxed_3536_; size_t v_i_boxed_3537_; lean_object* v_res_3538_; 
v_sz_boxed_3536_ = lean_unbox_usize(v_sz_3533_);
lean_dec(v_sz_3533_);
v_i_boxed_3537_ = lean_unbox_usize(v_i_3534_);
lean_dec(v_i_3534_);
v_res_3538_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_as_3532_, v_sz_boxed_3536_, v_i_boxed_3537_, v_b_3535_);
lean_dec_ref(v_as_3532_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object* v_init_3539_, lean_object* v_n_3540_, lean_object* v_b_3541_){
_start:
{
if (lean_obj_tag(v_n_3540_) == 0)
{
lean_object* v_cs_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; size_t v_sz_3545_; size_t v___x_3546_; lean_object* v___x_3547_; 
v_cs_3542_ = lean_ctor_get(v_n_3540_, 0);
v___x_3543_ = lean_box(0);
v___x_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3543_);
lean_ctor_set(v___x_3544_, 1, v_b_3541_);
v_sz_3545_ = lean_array_size(v_cs_3542_);
v___x_3546_ = ((size_t)0ULL);
v___x_3547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_init_3539_, v_cs_3542_, v_sz_3545_, v___x_3546_, v___x_3544_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3555_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3550_ = v___x_3547_;
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3547_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3553_; 
if (v_isShared_3551_ == 0)
{
v___x_3553_ = v___x_3550_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_a_3548_);
v___x_3553_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
return v___x_3553_;
}
}
}
else
{
lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3570_; 
v_a_3556_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3558_ = v___x_3547_;
v_isShared_3559_ = v_isSharedCheck_3570_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3547_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3570_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v_fst_3560_; 
v_fst_3560_ = lean_ctor_get(v_a_3556_, 0);
if (lean_obj_tag(v_fst_3560_) == 0)
{
lean_object* v_snd_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v_snd_3561_ = lean_ctor_get(v_a_3556_, 1);
lean_inc(v_snd_3561_);
lean_dec(v_a_3556_);
v___x_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3562_, 0, v_snd_3561_);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 0, v___x_3562_);
v___x_3564_ = v___x_3558_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
else
{
lean_object* v_val_3566_; lean_object* v___x_3568_; 
lean_inc_ref(v_fst_3560_);
lean_dec(v_a_3556_);
v_val_3566_ = lean_ctor_get(v_fst_3560_, 0);
lean_inc(v_val_3566_);
lean_dec_ref_known(v_fst_3560_, 1);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 0, v_val_3566_);
v___x_3568_ = v___x_3558_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_val_3566_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
}
}
}
else
{
lean_object* v_vs_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; size_t v_sz_3574_; size_t v___x_3575_; lean_object* v___x_3576_; 
v_vs_3571_ = lean_ctor_get(v_n_3540_, 0);
v___x_3572_ = lean_box(0);
v___x_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
lean_ctor_set(v___x_3573_, 1, v_b_3541_);
v_sz_3574_ = lean_array_size(v_vs_3571_);
v___x_3575_ = ((size_t)0ULL);
v___x_3576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_vs_3571_, v_sz_3574_, v___x_3575_, v___x_3573_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3576_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3599_; 
v_a_3585_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3587_ = v___x_3576_;
v_isShared_3588_ = v_isSharedCheck_3599_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3576_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3599_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v_fst_3589_; 
v_fst_3589_ = lean_ctor_get(v_a_3585_, 0);
if (lean_obj_tag(v_fst_3589_) == 0)
{
lean_object* v_snd_3590_; lean_object* v___x_3591_; lean_object* v___x_3593_; 
v_snd_3590_ = lean_ctor_get(v_a_3585_, 1);
lean_inc(v_snd_3590_);
lean_dec(v_a_3585_);
v___x_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_snd_3590_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v___x_3591_);
v___x_3593_ = v___x_3587_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
else
{
lean_object* v_val_3595_; lean_object* v___x_3597_; 
lean_inc_ref(v_fst_3589_);
lean_dec(v_a_3585_);
v_val_3595_ = lean_ctor_get(v_fst_3589_, 0);
lean_inc(v_val_3595_);
lean_dec_ref_known(v_fst_3589_, 1);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v_val_3595_);
v___x_3597_ = v___x_3587_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_val_3595_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object* v_init_3600_, lean_object* v_as_3601_, size_t v_sz_3602_, size_t v_i_3603_, lean_object* v_b_3604_){
_start:
{
uint8_t v___x_3605_; 
v___x_3605_ = lean_usize_dec_lt(v_i_3603_, v_sz_3602_);
if (v___x_3605_ == 0)
{
lean_object* v___x_3606_; 
v___x_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3606_, 0, v_b_3604_);
return v___x_3606_;
}
else
{
lean_object* v_snd_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3641_; 
v_snd_3607_ = lean_ctor_get(v_b_3604_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v_b_3604_);
if (v_isSharedCheck_3641_ == 0)
{
lean_object* v_unused_3642_; 
v_unused_3642_ = lean_ctor_get(v_b_3604_, 0);
lean_dec(v_unused_3642_);
v___x_3609_ = v_b_3604_;
v_isShared_3610_ = v_isSharedCheck_3641_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_snd_3607_);
lean_dec(v_b_3604_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3641_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v_a_3611_; lean_object* v___x_3612_; 
v_a_3611_ = lean_array_uget_borrowed(v_as_3601_, v_i_3603_);
lean_inc(v_snd_3607_);
v___x_3612_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3600_, v_a_3611_, v_snd_3607_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_del_object(v___x_3609_);
lean_dec(v_snd_3607_);
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3640_; 
v_a_3621_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3623_ = v___x_3612_;
v_isShared_3624_ = v_isSharedCheck_3640_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3612_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3640_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
if (lean_obj_tag(v_a_3621_) == 0)
{
lean_object* v___x_3625_; lean_object* v___x_3627_; 
v___x_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3625_, 0, v_a_3621_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v___x_3625_);
v___x_3627_ = v___x_3609_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3625_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v_snd_3607_);
v___x_3627_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3629_; 
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v___x_3627_);
v___x_3629_ = v___x_3623_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v___x_3627_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
else
{
lean_object* v_a_3632_; lean_object* v___x_3633_; lean_object* v___x_3635_; 
lean_del_object(v___x_3623_);
lean_dec(v_snd_3607_);
v_a_3632_ = lean_ctor_get(v_a_3621_, 0);
lean_inc(v_a_3632_);
lean_dec_ref_known(v_a_3621_, 1);
v___x_3633_ = lean_box(0);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 1, v_a_3632_);
lean_ctor_set(v___x_3609_, 0, v___x_3633_);
v___x_3635_ = v___x_3609_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3633_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v_a_3632_);
v___x_3635_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
size_t v___x_3636_; size_t v___x_3637_; 
v___x_3636_ = ((size_t)1ULL);
v___x_3637_ = lean_usize_add(v_i_3603_, v___x_3636_);
v_i_3603_ = v___x_3637_;
v_b_3604_ = v___x_3635_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3643_, lean_object* v_as_3644_, lean_object* v_sz_3645_, lean_object* v_i_3646_, lean_object* v_b_3647_){
_start:
{
size_t v_sz_boxed_3648_; size_t v_i_boxed_3649_; lean_object* v_res_3650_; 
v_sz_boxed_3648_ = lean_unbox_usize(v_sz_3645_);
lean_dec(v_sz_3645_);
v_i_boxed_3649_ = lean_unbox_usize(v_i_3646_);
lean_dec(v_i_3646_);
v_res_3650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_init_3643_, v_as_3644_, v_sz_boxed_3648_, v_i_boxed_3649_, v_b_3647_);
lean_dec_ref(v_as_3644_);
lean_dec_ref(v_init_3643_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object* v_init_3651_, lean_object* v_n_3652_, lean_object* v_b_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3651_, v_n_3652_, v_b_3653_);
lean_dec_ref(v_n_3652_);
lean_dec_ref(v_init_3651_);
return v_res_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object* v_t_3655_, lean_object* v_init_3656_){
_start:
{
lean_object* v_root_3657_; lean_object* v_tail_3658_; lean_object* v___x_3659_; 
v_root_3657_ = lean_ctor_get(v_t_3655_, 0);
v_tail_3658_ = lean_ctor_get(v_t_3655_, 1);
lean_inc_ref(v_init_3656_);
v___x_3659_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3656_, v_root_3657_, v_init_3656_);
lean_dec_ref(v_init_3656_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3659_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3659_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
else
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3704_; 
v_a_3668_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3670_ = v___x_3659_;
v_isShared_3671_ = v_isSharedCheck_3704_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3659_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3704_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
if (lean_obj_tag(v_a_3668_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; 
v_a_3672_ = lean_ctor_get(v_a_3668_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v_a_3668_, 1);
if (v_isShared_3671_ == 0)
{
lean_ctor_set(v___x_3670_, 0, v_a_3672_);
v___x_3674_ = v___x_3670_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_a_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
else
{
lean_object* v_a_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; size_t v_sz_3679_; size_t v___x_3680_; lean_object* v___x_3681_; 
lean_del_object(v___x_3670_);
v_a_3676_ = lean_ctor_get(v_a_3668_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v_a_3668_, 1);
v___x_3677_ = lean_box(0);
v___x_3678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
lean_ctor_set(v___x_3678_, 1, v_a_3676_);
v_sz_3679_ = lean_array_size(v_tail_3658_);
v___x_3680_ = ((size_t)0ULL);
v___x_3681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_tail_3658_, v_sz_3679_, v___x_3680_, v___x_3678_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3681_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3703_; 
v_a_3690_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3692_ = v___x_3681_;
v_isShared_3693_ = v_isSharedCheck_3703_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3681_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3703_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v_fst_3694_; 
v_fst_3694_ = lean_ctor_get(v_a_3690_, 0);
if (lean_obj_tag(v_fst_3694_) == 0)
{
lean_object* v_snd_3695_; lean_object* v___x_3697_; 
v_snd_3695_ = lean_ctor_get(v_a_3690_, 1);
lean_inc(v_snd_3695_);
lean_dec(v_a_3690_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v_snd_3695_);
v___x_3697_ = v___x_3692_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_snd_3695_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
else
{
lean_object* v_val_3699_; lean_object* v___x_3701_; 
lean_inc_ref(v_fst_3694_);
lean_dec(v_a_3690_);
v_val_3699_ = lean_ctor_get(v_fst_3694_, 0);
lean_inc(v_val_3699_);
lean_dec_ref_known(v_fst_3694_, 1);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v_val_3699_);
v___x_3701_ = v___x_3692_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_val_3699_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0___boxed(lean_object* v_t_3705_, lean_object* v_init_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(v_t_3705_, v_init_3706_);
lean_dec_ref(v_t_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object* v_docs_3710_){
_start:
{
lean_object* v_ctx_3711_; lean_object* v___x_3712_; 
v_ctx_3711_ = ((lean_object*)(l_Lean_VersoModuleDocs_assemble___closed__0));
v___x_3712_ = l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(v_docs_3710_, v_ctx_3711_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3722_; 
v_a_3721_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3721_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3722_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(v_a_3721_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3722_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3741_; 
v_a_3731_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3733_ = v___x_3722_;
v_isShared_3734_ = v_isSharedCheck_3741_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3722_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3741_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v_content_3735_; lean_object* v_priorParts_3736_; lean_object* v___x_3737_; lean_object* v___x_3739_; 
v_content_3735_ = lean_ctor_get(v_a_3731_, 0);
lean_inc_ref(v_content_3735_);
v_priorParts_3736_ = lean_ctor_get(v_a_3731_, 1);
lean_inc_ref(v_priorParts_3736_);
lean_dec(v_a_3731_);
v___x_3737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3737_, 0, v_content_3735_);
lean_ctor_set(v___x_3737_, 1, v_priorParts_3736_);
if (v_isShared_3734_ == 0)
{
lean_ctor_set(v___x_3733_, 0, v___x_3737_);
v___x_3739_ = v___x_3733_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3737_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble___boxed(lean_object* v_docs_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lean_VersoModuleDocs_assemble(v_docs_3742_);
lean_dec_ref(v_docs_3742_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v_es_3744_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = lean_array_mk(v_es_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v_x_3748_, lean_object* v_x_3749_, lean_object* v_es_3750_){
_start:
{
lean_object* v_ents_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v_ents_3751_ = lean_array_mk(v_es_3750_);
v___x_3752_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
lean_inc_ref(v_ents_3751_);
v___x_3753_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set(v___x_3753_, 1, v_ents_3751_);
lean_ctor_set(v___x_3753_, 2, v_ents_3751_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v_x_3754_, lean_object* v_x_3755_, lean_object* v_es_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(v_x_3754_, v_x_3755_, v_es_3756_);
lean_dec_ref(v_x_3755_);
lean_dec_ref(v_x_3754_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v___x_3758_, lean_object* v_x_3759_){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; size_t v___x_3763_; lean_object* v___x_3764_; 
v___x_3760_ = lean_unsigned_to_nat(32u);
v___x_3761_ = lean_mk_empty_array_with_capacity(v___x_3760_);
v___x_3762_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__0, &l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0);
v___x_3763_ = ((size_t)5ULL);
lean_inc(v___x_3758_);
v___x_3764_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3764_, 0, v___x_3762_);
lean_ctor_set(v___x_3764_, 1, v___x_3761_);
lean_ctor_set(v___x_3764_, 2, v___x_3758_);
lean_ctor_set(v___x_3764_, 3, v___x_3758_);
lean_ctor_set_usize(v___x_3764_, 4, v___x_3763_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v___x_3765_, lean_object* v_x_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(v___x_3765_, v_x_3766_);
lean_dec_ref(v_x_3766_);
return v_res_3767_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3774_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___x_3775_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_3776_ = l_Lean_Name_str___override(v___x_3775_, v___x_3774_);
return v___x_3776_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___f_3782_; lean_object* v___f_3783_; lean_object* v___f_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3779_ = lean_box(0);
v___x_3780_ = lean_box(2);
v___x_3781_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___f_3782_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___f_3783_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___f_3784_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___x_3785_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_);
v___x_3786_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
lean_ctor_set(v___x_3786_, 1, v___f_3784_);
lean_ctor_set(v___x_3786_, 2, v___f_3783_);
lean_ctor_set(v___x_3786_, 3, v___f_3782_);
lean_ctor_set(v___x_3786_, 4, v___x_3781_);
lean_ctor_set(v___x_3786_, 5, v___x_3780_);
lean_ctor_set(v___x_3786_, 6, v___x_3779_);
return v___x_3786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3788_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_);
v___x_3789_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_3788_);
return v___x_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v_a_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object* v_env_3792_){
_start:
{
lean_object* v___x_3793_; lean_object* v_toEnvExtension_3794_; lean_object* v_asyncMode_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3793_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_3794_ = lean_ctor_get(v___x_3793_, 0);
v_asyncMode_3795_ = lean_ctor_get(v_toEnvExtension_3794_, 2);
v___x_3796_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3797_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_3798_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3796_, v___x_3793_, v_env_3792_, v_asyncMode_3795_, v___x_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object* v_env_3799_){
_start:
{
lean_object* v___x_3800_; 
v___x_3800_ = l_Lean_getMainVersoModuleDocs(v_env_3799_);
return v___x_3800_;
}
}
static lean_object* _init_l_Lean_getVersoModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3801_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3802_ = lean_box(0);
v___x_3803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3802_);
lean_ctor_set(v___x_3803_, 1, v___x_3801_);
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object* v_env_3804_, lean_object* v_moduleName_3805_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l_Lean_Environment_getModuleIdx_x3f(v_env_3804_, v_moduleName_3805_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v___x_3807_; 
v___x_3807_ = lean_box(0);
return v___x_3807_;
}
else
{
lean_object* v_val_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3819_; 
v_val_3808_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3810_ = v___x_3806_;
v_isShared_3811_ = v_isSharedCheck_3819_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_val_3808_);
lean_dec(v___x_3806_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3819_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; uint8_t v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3817_; 
v___x_3812_ = lean_obj_once(&l_Lean_getVersoModuleDoc_x3f___closed__0, &l_Lean_getVersoModuleDoc_x3f___closed__0_once, _init_l_Lean_getVersoModuleDoc_x3f___closed__0);
v___x_3813_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v___x_3814_ = 1;
v___x_3815_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3812_, v___x_3813_, v_env_3804_, v_val_3808_, v___x_3814_);
lean_dec(v_val_3808_);
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3815_);
v___x_3817_ = v___x_3810_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v___x_3815_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object* v_env_3820_, lean_object* v_moduleName_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lean_getVersoModuleDoc_x3f(v_env_3820_, v_moduleName_3821_);
lean_dec(v_moduleName_3821_);
lean_dec_ref(v_env_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object* v_env_3825_, lean_object* v_snippet_3826_){
_start:
{
lean_object* v_docs_3827_; uint8_t v___x_3828_; 
lean_inc_ref(v_env_3825_);
v_docs_3827_ = l_Lean_getMainVersoModuleDocs(v_env_3825_);
v___x_3828_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3827_, v_snippet_3826_);
if (v___x_3828_ == 0)
{
lean_object* v___x_3829_; lean_object* v___y_3831_; lean_object* v___x_3836_; 
lean_dec_ref(v_snippet_3826_);
lean_dec_ref(v_env_3825_);
v___x_3829_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__0));
v___x_3836_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3827_);
lean_dec_ref(v_docs_3827_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v___x_3837_; 
v___x_3837_ = ((lean_object*)(l_Lean_findInternalDocString_x3f___closed__0));
v___y_3831_ = v___x_3837_;
goto v___jp_3830_;
}
else
{
lean_object* v_val_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v_val_3838_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_val_3838_);
lean_dec_ref_known(v___x_3836_, 1);
v___x_3839_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__1));
v___x_3840_ = l_Nat_reprFast(v_val_3838_);
v___x_3841_ = lean_string_append(v___x_3839_, v___x_3840_);
lean_dec_ref(v___x_3840_);
v___x_3842_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1));
v___x_3843_ = lean_string_append(v___x_3841_, v___x_3842_);
v___y_3831_ = v___x_3843_;
goto v___jp_3830_;
}
v___jp_3830_:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3832_ = lean_string_append(v___x_3829_, v___y_3831_);
lean_dec_ref(v___y_3831_);
v___x_3833_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1));
v___x_3834_ = lean_string_append(v___x_3832_, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
return v___x_3835_;
}
}
else
{
lean_object* v___x_3844_; lean_object* v_toEnvExtension_3845_; lean_object* v_asyncMode_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
lean_dec_ref(v_docs_3827_);
v___x_3844_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_3845_ = lean_ctor_get(v___x_3844_, 0);
v_asyncMode_3846_ = lean_ctor_get(v_toEnvExtension_3845_, 2);
v___x_3847_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_);
v___x_3848_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3844_, v_env_3825_, v_snippet_3826_, v_asyncMode_3846_, v___x_3847_);
v___x_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
}
}
lean_object* runtime_initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso_module);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_docStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_docStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_versoDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_versoDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_moduleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_moduleDocExt);
lean_dec_ref(res);
l_Lean_VersoModuleDocs_instInhabitedSnippet_default = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet_default);
l_Lean_VersoModuleDocs_instInhabitedSnippet = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet);
l_Lean_instInhabitedVersoModuleDocs_default = _init_l_Lean_instInhabitedVersoModuleDocs_default();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs_default);
l_Lean_instInhabitedVersoModuleDocs = _init_l_Lean_instInhabitedVersoModuleDocs();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Extension(builtin);
}
#ifdef __cplusplus
}
#endif

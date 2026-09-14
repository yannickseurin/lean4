// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Scopes
// Imports: public import Lean.Elab.DocString public import Lean.Elab.DocString.Builtin.Parsing
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
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
extern lean_object* l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadLogCoreM;
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadEnvMetaM;
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Builtin"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Scopes"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imports"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM;
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(120, 104, 189, 185, 38, 81, 44, 71)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27_value;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Unexpected identifier, expected `local` or a string of imports"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unexpected number `"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_getId___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42_value;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Expected comma-separated imports list, got `"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed, .m_arity = 10, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___closed__0 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instFromDocArgDocScope = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Doc_DocScope_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
return v_k_7_;
}
else
{
lean_object* v_mods_8_; lean_object* v___x_9_; 
v_mods_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_mods_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_mods_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Doc_DocScope_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim___redArg(lean_object* v_t_22_, lean_object* v_local_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_22_, v_local_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_local_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_26_, v_local_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim___redArg(lean_object* v_t_30_, lean_object* v_import_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_30_, v_import_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_import_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_34_, v_import_36_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_box(0);
v___x_39_ = l_unsafeCast___redArg(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1));
v___x_42_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0);
v___x_43_ = l_Lean_Name_str___override(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3));
v___x_46_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2);
v___x_47_ = l_Lean_Name_str___override(v___x_46_, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5));
v___x_50_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4);
v___x_51_ = l_Lean_Name_str___override(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7));
v___x_54_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9));
v___x_58_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8);
v___x_59_ = l_Lean_Name_str___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11));
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10);
v___x_63_ = l_Lean_Name_str___override(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12);
v___x_66_ = l_Lean_Name_num___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3));
v___x_68_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13);
v___x_69_ = l_Lean_Name_str___override(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15));
v___x_72_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14);
v___x_73_ = l_Lean_Name_str___override(v___x_72_, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
v___x_76_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16);
v___x_77_ = l_Lean_Name_str___override(v___x_76_, v___x_75_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19(void){
_start:
{
uint8_t v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = 0;
v___x_79_ = 1;
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
v___x_81_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
v___x_82_ = l_Lean_Parser_mkAntiquot(v___x_81_, v___x_80_, v___x_79_, v___x_78_);
return v___x_82_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20));
v___x_85_ = l_Lean_Parser_symbol(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22(void){
_start:
{
uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = 0;
v___x_87_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21);
v___x_88_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20));
v___x_89_ = l_Lean_Parser_ident;
v___x_90_ = l_Lean_Parser_sepBy1(v___x_89_, v___x_88_, v___x_87_, v___x_86_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22);
v___x_92_ = lean_unsigned_to_nat(1024u);
v___x_93_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
v___x_94_ = l_Lean_Parser_leadingNode(v___x_93_, v___x_92_, v___x_91_);
return v___x_94_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23);
v___x_96_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19);
v___x_97_ = l_Lean_Parser_withAntiquot(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24);
v___x_99_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
v___x_100_ = l_Lean_Parser_withCache(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__25);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0(lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___x_105_; lean_object* v_fn_106_; lean_object* v___x_107_; 
v___x_105_ = l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
v_fn_106_ = lean_ctor_get(v___x_105_, 1);
lean_inc_ref(v_fn_106_);
v___x_107_ = lean_apply_2(v_fn_106_, v___y_103_, v___y_104_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1(lean_object* v___x_108_, lean_object* v___f_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_Parser_andthenFn(v___x_108_, v___f_109_, v___y_110_, v___y_111_);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0(void){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l_instMonadEIO___redArg();
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0);
v___x_115_ = l_StateRefT_x27_instMonad___redArg(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = l_Lean_Core_instMonadLogCoreM;
v___x_125_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9));
v___x_126_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_125_, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11(void){
_start:
{
lean_object* v___x_127_; lean_object* v___f_128_; lean_object* v___x_129_; 
v___x_127_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10);
v___f_128_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8));
v___x_129_ = l_Lean_instMonadLogOfMonadLift___redArg(v___f_128_, v___x_127_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11);
v___x_131_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9));
v___x_132_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_131_, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13(void){
_start:
{
lean_object* v___x_133_; lean_object* v___f_134_; lean_object* v___x_135_; 
v___x_133_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12);
v___f_134_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8));
v___x_135_ = l_Lean_instMonadLogOfMonadLift___redArg(v___f_134_, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14(void){
_start:
{
lean_object* v___x_136_; lean_object* v___f_137_; 
v___x_136_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_137_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_137_, 0, v___x_136_);
return v___f_137_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15(void){
_start:
{
lean_object* v___x_138_; lean_object* v___f_139_; 
v___x_138_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_139_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_139_, 0, v___x_138_);
return v___f_139_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16(void){
_start:
{
lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_142_; 
v___f_140_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15);
v___f_141_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___f_141_);
lean_ctor_set(v___x_142_, 1, v___f_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17(void){
_start:
{
lean_object* v___x_143_; lean_object* v___f_144_; 
v___x_143_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16);
v___f_144_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_144_, 0, v___x_143_);
return v___f_144_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18(void){
_start:
{
lean_object* v___x_145_; lean_object* v___f_146_; 
v___x_145_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_146_, 0, v___x_145_);
return v___f_146_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19(void){
_start:
{
lean_object* v___f_147_; lean_object* v___f_148_; lean_object* v___x_149_; 
v___f_147_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18);
v___f_148_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17);
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v___f_148_);
lean_ctor_set(v___x_149_, 1, v___f_147_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20(void){
_start:
{
lean_object* v___x_150_; lean_object* v___f_151_; 
v___x_150_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19);
v___f_151_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_151_, 0, v___x_150_);
return v___f_151_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21(void){
_start:
{
lean_object* v___x_152_; lean_object* v___f_153_; 
v___x_152_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19);
v___f_153_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_153_, 0, v___x_152_);
return v___f_153_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22(void){
_start:
{
lean_object* v___f_154_; lean_object* v___f_155_; lean_object* v___x_156_; 
v___f_154_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21);
v___f_155_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___f_155_);
lean_ctor_set(v___x_156_, 1, v___f_154_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23(void){
_start:
{
lean_object* v___x_157_; lean_object* v___f_158_; 
v___x_157_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22);
v___f_158_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_158_, 0, v___x_157_);
return v___f_158_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24(void){
_start:
{
lean_object* v___x_159_; lean_object* v___f_160_; 
v___x_159_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22);
v___f_160_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_160_, 0, v___x_159_);
return v___f_160_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25(void){
_start:
{
lean_object* v___f_161_; lean_object* v___f_162_; lean_object* v___x_163_; 
v___f_161_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24);
v___f_162_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___f_162_);
lean_ctor_set(v___x_163_, 1, v___f_161_);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28));
v___x_169_ = l_Lean_stringToMessageData(v___x_168_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30));
v___x_172_ = l_Lean_stringToMessageData(v___x_171_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32));
v___x_175_ = l_Lean_stringToMessageData(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43));
v___x_193_ = l_Lean_stringToMessageData(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1(lean_object* v_v_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v___x_221_; lean_object* v_toApplicative_222_; lean_object* v_toFunctor_223_; lean_object* v_toSeq_224_; lean_object* v_toSeqLeft_225_; lean_object* v_toSeqRight_226_; lean_object* v___f_227_; lean_object* v___f_228_; lean_object* v___f_229_; lean_object* v___f_230_; lean_object* v___x_231_; lean_object* v___f_232_; lean_object* v___f_233_; lean_object* v___f_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v_toApplicative_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_392_; 
v___x_221_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1);
v_toApplicative_222_ = lean_ctor_get(v___x_221_, 0);
v_toFunctor_223_ = lean_ctor_get(v_toApplicative_222_, 0);
v_toSeq_224_ = lean_ctor_get(v_toApplicative_222_, 2);
v_toSeqLeft_225_ = lean_ctor_get(v_toApplicative_222_, 3);
v_toSeqRight_226_ = lean_ctor_get(v_toApplicative_222_, 4);
v___f_227_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2));
v___f_228_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3));
lean_inc_ref_n(v_toFunctor_223_, 2);
v___f_229_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_229_, 0, v_toFunctor_223_);
v___f_230_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_230_, 0, v_toFunctor_223_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___f_229_);
lean_ctor_set(v___x_231_, 1, v___f_230_);
lean_inc(v_toSeqRight_226_);
v___f_232_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_232_, 0, v_toSeqRight_226_);
lean_inc(v_toSeqLeft_225_);
v___f_233_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_233_, 0, v_toSeqLeft_225_);
lean_inc(v_toSeq_224_);
v___f_234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_234_, 0, v_toSeq_224_);
v___x_235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_235_, 0, v___x_231_);
lean_ctor_set(v___x_235_, 1, v___f_227_);
lean_ctor_set(v___x_235_, 2, v___f_234_);
lean_ctor_set(v___x_235_, 3, v___f_233_);
lean_ctor_set(v___x_235_, 4, v___f_232_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v___f_228_);
v___x_237_ = l_StateRefT_x27_instMonad___redArg(v___x_236_);
v_toApplicative_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_392_ == 0)
{
lean_object* v_unused_393_; 
v_unused_393_ = lean_ctor_get(v___x_237_, 1);
lean_dec(v_unused_393_);
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_392_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_toApplicative_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_392_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v_toFunctor_242_; lean_object* v_toSeq_243_; lean_object* v_toSeqLeft_244_; lean_object* v_toSeqRight_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_390_; 
v_toFunctor_242_ = lean_ctor_get(v_toApplicative_238_, 0);
v_toSeq_243_ = lean_ctor_get(v_toApplicative_238_, 2);
v_toSeqLeft_244_ = lean_ctor_get(v_toApplicative_238_, 3);
v_toSeqRight_245_ = lean_ctor_get(v_toApplicative_238_, 4);
v_isSharedCheck_390_ = !lean_is_exclusive(v_toApplicative_238_);
if (v_isSharedCheck_390_ == 0)
{
lean_object* v_unused_391_; 
v_unused_391_ = lean_ctor_get(v_toApplicative_238_, 1);
lean_dec(v_unused_391_);
v___x_247_ = v_toApplicative_238_;
v_isShared_248_ = v_isSharedCheck_390_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_toSeqRight_245_);
lean_inc(v_toSeqLeft_244_);
lean_inc(v_toSeq_243_);
lean_inc(v_toFunctor_242_);
lean_dec(v_toApplicative_238_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_390_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___f_249_; lean_object* v___f_250_; lean_object* v___f_251_; lean_object* v___f_252_; lean_object* v___x_253_; lean_object* v___f_254_; lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___x_258_; 
v___f_249_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4));
v___f_250_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5));
lean_inc_ref(v_toFunctor_242_);
v___f_251_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_251_, 0, v_toFunctor_242_);
v___f_252_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_252_, 0, v_toFunctor_242_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___f_251_);
lean_ctor_set(v___x_253_, 1, v___f_252_);
v___f_254_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_254_, 0, v_toSeqRight_245_);
v___f_255_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_255_, 0, v_toSeqLeft_244_);
v___f_256_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_256_, 0, v_toSeq_243_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 4, v___f_254_);
lean_ctor_set(v___x_247_, 3, v___f_255_);
lean_ctor_set(v___x_247_, 2, v___f_256_);
lean_ctor_set(v___x_247_, 1, v___f_249_);
lean_ctor_set(v___x_247_, 0, v___x_253_);
v___x_258_ = v___x_247_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___f_249_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v___f_256_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v___f_255_);
lean_ctor_set(v_reuseFailAlloc_389_, 4, v___f_254_);
v___x_258_ = v_reuseFailAlloc_389_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_260_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 1, v___f_250_);
lean_ctor_set(v___x_240_, 0, v___x_258_);
v___x_260_ = v___x_240_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v___f_250_);
v___x_260_ = v_reuseFailAlloc_388_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; lean_object* v_toApplicative_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_386_; 
v___x_261_ = l_StateRefT_x27_instMonad___redArg(v___x_260_);
v_toApplicative_262_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_386_ == 0)
{
lean_object* v_unused_387_; 
v_unused_387_ = lean_ctor_get(v___x_261_, 1);
lean_dec(v_unused_387_);
v___x_264_ = v___x_261_;
v_isShared_265_ = v_isSharedCheck_386_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_toApplicative_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_386_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v_toFunctor_266_; lean_object* v_toSeq_267_; lean_object* v_toSeqLeft_268_; lean_object* v_toSeqRight_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_384_; 
v_toFunctor_266_ = lean_ctor_get(v_toApplicative_262_, 0);
v_toSeq_267_ = lean_ctor_get(v_toApplicative_262_, 2);
v_toSeqLeft_268_ = lean_ctor_get(v_toApplicative_262_, 3);
v_toSeqRight_269_ = lean_ctor_get(v_toApplicative_262_, 4);
v_isSharedCheck_384_ = !lean_is_exclusive(v_toApplicative_262_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v_toApplicative_262_, 1);
lean_dec(v_unused_385_);
v___x_271_ = v_toApplicative_262_;
v_isShared_272_ = v_isSharedCheck_384_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_toSeqRight_269_);
lean_inc(v_toSeqLeft_268_);
lean_inc(v_toSeq_267_);
lean_inc(v_toFunctor_266_);
lean_dec(v_toApplicative_262_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_384_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___f_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___x_277_; lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___x_282_; 
v___f_273_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6));
v___f_274_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7));
lean_inc_ref(v_toFunctor_266_);
v___f_275_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_275_, 0, v_toFunctor_266_);
v___f_276_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_276_, 0, v_toFunctor_266_);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v___f_275_);
lean_ctor_set(v___x_277_, 1, v___f_276_);
v___f_278_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_278_, 0, v_toSeqRight_269_);
v___f_279_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_279_, 0, v_toSeqLeft_268_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_280_, 0, v_toSeq_267_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 4, v___f_278_);
lean_ctor_set(v___x_271_, 3, v___f_279_);
lean_ctor_set(v___x_271_, 2, v___f_280_);
lean_ctor_set(v___x_271_, 1, v___f_273_);
lean_ctor_set(v___x_271_, 0, v___x_277_);
v___x_282_ = v___x_271_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_277_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___f_273_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v___f_280_);
lean_ctor_set(v_reuseFailAlloc_383_, 3, v___f_279_);
lean_ctor_set(v_reuseFailAlloc_383_, 4, v___f_278_);
v___x_282_ = v_reuseFailAlloc_383_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v___f_274_);
lean_ctor_set(v___x_264_, 0, v___x_282_);
v___x_284_ = v___x_264_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v___f_274_);
v___x_284_ = v_reuseFailAlloc_382_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v_toMonadQuotation_286_; lean_object* v_toMonadRef_287_; lean_object* v___f_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_toMonadFileMap_291_; lean_object* v___x_292_; lean_object* v_getEnv_293_; lean_object* v_modifyEnv_294_; lean_object* v___f_295_; lean_object* v___x_296_; lean_object* v___f_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_285_ = l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
v_toMonadQuotation_286_ = lean_ctor_get(v___x_285_, 0);
v_toMonadRef_287_ = lean_ctor_get(v_toMonadQuotation_286_, 0);
v___f_288_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8));
v___x_289_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9));
v___x_290_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13);
v_toMonadFileMap_291_ = lean_ctor_get(v___x_290_, 0);
v___x_292_ = l_Lean_Meta_instMonadEnvMetaM;
v_getEnv_293_ = lean_ctor_get(v___x_292_, 0);
v_modifyEnv_294_ = lean_ctor_get(v___x_292_, 1);
lean_inc(v_modifyEnv_294_);
v___f_295_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_295_, 0, v_modifyEnv_294_);
lean_closure_set(v___f_295_, 1, v___x_289_);
lean_inc(v_getEnv_293_);
v___x_296_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_296_, 0, lean_box(0));
lean_closure_set(v___x_296_, 1, lean_box(0));
lean_closure_set(v___x_296_, 2, lean_box(0));
lean_closure_set(v___x_296_, 3, lean_box(0));
lean_closure_set(v___x_296_, 4, v_getEnv_293_);
v___f_297_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_297_, 0, v___f_295_);
lean_closure_set(v___f_297_, 1, v___f_288_);
v___x_298_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_298_, 0, lean_box(0));
lean_closure_set(v___x_298_, 1, v___x_296_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___f_297_);
v___x_300_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25);
v___x_301_ = l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_inc_ref(v_toMonadRef_287_);
v___x_302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v_toMonadRef_287_);
lean_ctor_set(v___x_302_, 2, v___x_301_);
switch(lean_obj_tag(v_v_213_))
{
case 0:
{
lean_object* v_val_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_318_; 
lean_dec_ref_known(v___x_299_, 2);
v_val_303_ = lean_ctor_get(v_v_213_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_v_213_);
if (v_isSharedCheck_318_ == 0)
{
v___x_305_ = v_v_213_;
v_isShared_306_ = v_isSharedCheck_318_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_val_303_);
lean_dec(v_v_213_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_318_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v_y_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_307_ = l_Lean_TSyntax_getId(v_val_303_);
v_y_308_ = l_Lean_Name_eraseMacroScopes(v___x_307_);
lean_dec(v___x_307_);
v___x_309_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27));
v___x_310_ = lean_name_eq(v_y_308_, v___x_309_);
lean_dec(v_y_308_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; lean_object* v___x_2007__overap_312_; lean_object* v___x_313_; 
lean_del_object(v___x_305_);
v___x_311_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29);
v___x_2007__overap_312_ = l_Lean_throwErrorAt___redArg(v___x_284_, v___x_302_, v_val_303_, v___x_311_);
lean_inc(v_a_219_);
lean_inc_ref(v_a_218_);
lean_inc(v_a_217_);
lean_inc_ref(v_a_216_);
lean_inc(v_a_215_);
lean_inc_ref(v_a_214_);
v___x_313_ = lean_apply_7(v___x_2007__overap_312_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, lean_box(0));
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_316_; 
lean_dec(v_val_303_);
lean_dec_ref_known(v___x_302_, 3);
lean_dec_ref(v___x_284_);
v___x_314_ = lean_box(0);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_314_);
v___x_316_ = v___x_305_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
case 1:
{
lean_object* v_val_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_2009__overap_325_; lean_object* v___x_326_; 
lean_dec_ref_known(v___x_299_, 2);
v_val_319_ = lean_ctor_get(v_v_213_, 0);
lean_inc_n(v_val_319_, 2);
lean_dec_ref_known(v_v_213_, 1);
v___x_320_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31);
v___x_321_ = l_Lean_MessageData_ofSyntax(v_val_319_);
v___x_322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33);
v___x_324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_322_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_2009__overap_325_ = l_Lean_throwErrorAt___redArg(v___x_284_, v___x_302_, v_val_319_, v___x_324_);
lean_inc(v_a_219_);
lean_inc_ref(v_a_218_);
lean_inc(v_a_217_);
lean_inc_ref(v_a_216_);
lean_inc(v_a_215_);
lean_inc_ref(v_a_214_);
v___x_326_ = lean_apply_7(v___x_2009__overap_325_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, lean_box(0));
return v___x_326_;
}
default: 
{
lean_object* v_val_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_381_; 
v_val_327_ = lean_ctor_get(v_v_213_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v_v_213_);
if (v_isSharedCheck_381_ == 0)
{
v___x_329_ = v_v_213_;
v_isShared_330_ = v_isSharedCheck_381_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_val_327_);
lean_dec(v_v_213_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_381_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_toCold_331_; lean_object* v_currRecDepth_332_; lean_object* v_ref_333_; uint8_t v_diag_334_; uint8_t v_suppressElabErrors_335_; lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___f_338_; lean_object* v_ref_339_; lean_object* v___x_340_; lean_object* v___x_2011__overap_341_; lean_object* v___x_342_; 
v_toCold_331_ = lean_ctor_get(v_a_218_, 0);
v_currRecDepth_332_ = lean_ctor_get(v_a_218_, 1);
v_ref_333_ = lean_ctor_get(v_a_218_, 2);
v_diag_334_ = lean_ctor_get_uint8(v_a_218_, sizeof(void*)*3);
v_suppressElabErrors_335_ = lean_ctor_get_uint8(v_a_218_, sizeof(void*)*3 + 1);
v___f_336_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35));
v___x_337_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40));
v___f_338_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42));
v_ref_339_ = l_Lean_replaceRef(v_val_327_, v_ref_333_);
lean_inc(v_currRecDepth_332_);
lean_inc_ref(v_toCold_331_);
v___x_340_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_340_, 0, v_toCold_331_);
lean_ctor_set(v___x_340_, 1, v_currRecDepth_332_);
lean_ctor_set(v___x_340_, 2, v_ref_339_);
lean_ctor_set_uint8(v___x_340_, sizeof(void*)*3, v_diag_334_);
lean_ctor_set_uint8(v___x_340_, sizeof(void*)*3 + 1, v_suppressElabErrors_335_);
lean_inc_ref(v___x_302_);
lean_inc(v_toMonadFileMap_291_);
lean_inc_ref(v___x_284_);
v___x_2011__overap_341_ = l_Lean_Doc_parseQuotedStrLit___redArg(v___x_284_, v_toMonadFileMap_291_, v___x_299_, v___x_302_, v___x_290_, v___x_337_, v___f_338_, v_val_327_);
lean_inc(v_a_219_);
lean_inc(v_a_217_);
lean_inc_ref(v_a_216_);
lean_inc(v_a_215_);
lean_inc_ref(v_a_214_);
v___x_342_ = lean_apply_7(v___x_2011__overap_341_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v___x_340_, v_a_219_, lean_box(0));
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_372_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_372_ == 0)
{
v___x_345_ = v___x_342_;
v_isShared_346_ = v_isSharedCheck_372_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_342_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_372_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
lean_inc(v_a_343_);
v___x_349_ = l_Lean_Syntax_isOfKind(v_a_343_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_2015__overap_355_; lean_object* v___x_356_; 
lean_del_object(v___x_345_);
lean_del_object(v___x_329_);
v___x_350_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44);
lean_inc(v_a_343_);
v___x_351_ = l_Lean_MessageData_ofSyntax(v_a_343_);
v___x_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33);
v___x_354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v___x_2015__overap_355_ = l_Lean_throwErrorAt___redArg(v___x_284_, v___x_302_, v_a_343_, v___x_354_);
lean_inc(v_a_219_);
lean_inc_ref(v_a_218_);
lean_inc(v_a_217_);
lean_inc_ref(v_a_216_);
lean_inc(v_a_215_);
lean_inc_ref(v_a_214_);
v___x_356_ = lean_apply_7(v___x_2015__overap_355_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, lean_box(0));
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; size_t v_sz_361_; size_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
lean_dec_ref_known(v___x_302_, 3);
lean_dec_ref(v___x_284_);
v___x_357_ = l_Lean_Syntax_getArg(v_a_343_, v___x_347_);
lean_dec(v_a_343_);
v___x_358_ = l_Lean_Syntax_getArgs(v___x_357_);
lean_dec(v___x_357_);
v___x_359_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_358_);
lean_dec_ref(v___x_358_);
v___x_360_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54));
v_sz_361_ = lean_array_size(v___x_359_);
v___x_362_ = ((size_t)0ULL);
v___x_363_ = l_unsafeCast___redArg(v___x_359_);
lean_dec_ref(v___x_359_);
v___x_364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_360_, v___f_336_, v_sz_361_, v___x_362_, v___x_363_);
v___x_365_ = l_unsafeCast___redArg(v___x_364_);
lean_dec(v___x_364_);
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 1);
lean_ctor_set(v___x_329_, 0, v___x_365_);
v___x_367_ = v___x_329_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_371_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_369_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 0, v___x_367_);
v___x_369_ = v___x_345_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_del_object(v___x_329_);
lean_dec_ref_known(v___x_302_, 3);
lean_dec_ref(v___x_284_);
v_a_373_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_342_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_342_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___boxed(lean_object* v_v_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lean_Doc_instFromDocArgDocScope___private__1(v_v_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
lean_dec(v_a_398_);
lean_dec_ref(v_a_397_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2(lean_object* v___f_403_, lean_object* v___f_404_, lean_object* v_v_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v___x_413_; lean_object* v_toApplicative_414_; lean_object* v_toFunctor_415_; lean_object* v_toSeq_416_; lean_object* v_toSeqLeft_417_; lean_object* v_toSeqRight_418_; lean_object* v___f_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___f_422_; lean_object* v___x_423_; lean_object* v___f_424_; lean_object* v___f_425_; lean_object* v___f_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v_toApplicative_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_584_; 
v___x_413_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1);
v_toApplicative_414_ = lean_ctor_get(v___x_413_, 0);
v_toFunctor_415_ = lean_ctor_get(v_toApplicative_414_, 0);
v_toSeq_416_ = lean_ctor_get(v_toApplicative_414_, 2);
v_toSeqLeft_417_ = lean_ctor_get(v_toApplicative_414_, 3);
v_toSeqRight_418_ = lean_ctor_get(v_toApplicative_414_, 4);
v___f_419_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2));
v___f_420_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3));
lean_inc_ref_n(v_toFunctor_415_, 2);
v___f_421_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_421_, 0, v_toFunctor_415_);
v___f_422_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_422_, 0, v_toFunctor_415_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___f_421_);
lean_ctor_set(v___x_423_, 1, v___f_422_);
lean_inc(v_toSeqRight_418_);
v___f_424_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_424_, 0, v_toSeqRight_418_);
lean_inc(v_toSeqLeft_417_);
v___f_425_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_425_, 0, v_toSeqLeft_417_);
lean_inc(v_toSeq_416_);
v___f_426_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_426_, 0, v_toSeq_416_);
v___x_427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_427_, 0, v___x_423_);
lean_ctor_set(v___x_427_, 1, v___f_419_);
lean_ctor_set(v___x_427_, 2, v___f_426_);
lean_ctor_set(v___x_427_, 3, v___f_425_);
lean_ctor_set(v___x_427_, 4, v___f_424_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set(v___x_428_, 1, v___f_420_);
v___x_429_ = l_StateRefT_x27_instMonad___redArg(v___x_428_);
v_toApplicative_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; 
v_unused_585_ = lean_ctor_get(v___x_429_, 1);
lean_dec(v_unused_585_);
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_584_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_toApplicative_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_584_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v_toFunctor_434_; lean_object* v_toSeq_435_; lean_object* v_toSeqLeft_436_; lean_object* v_toSeqRight_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_582_; 
v_toFunctor_434_ = lean_ctor_get(v_toApplicative_430_, 0);
v_toSeq_435_ = lean_ctor_get(v_toApplicative_430_, 2);
v_toSeqLeft_436_ = lean_ctor_get(v_toApplicative_430_, 3);
v_toSeqRight_437_ = lean_ctor_get(v_toApplicative_430_, 4);
v_isSharedCheck_582_ = !lean_is_exclusive(v_toApplicative_430_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v_toApplicative_430_, 1);
lean_dec(v_unused_583_);
v___x_439_ = v_toApplicative_430_;
v_isShared_440_ = v_isSharedCheck_582_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_toSeqRight_437_);
lean_inc(v_toSeqLeft_436_);
lean_inc(v_toSeq_435_);
lean_inc(v_toFunctor_434_);
lean_dec(v_toApplicative_430_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_582_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___f_441_; lean_object* v___f_442_; lean_object* v___f_443_; lean_object* v___f_444_; lean_object* v___x_445_; lean_object* v___f_446_; lean_object* v___f_447_; lean_object* v___f_448_; lean_object* v___x_450_; 
v___f_441_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4));
v___f_442_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5));
lean_inc_ref(v_toFunctor_434_);
v___f_443_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_443_, 0, v_toFunctor_434_);
v___f_444_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_444_, 0, v_toFunctor_434_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___f_443_);
lean_ctor_set(v___x_445_, 1, v___f_444_);
v___f_446_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_446_, 0, v_toSeqRight_437_);
v___f_447_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_447_, 0, v_toSeqLeft_436_);
v___f_448_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_448_, 0, v_toSeq_435_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 4, v___f_446_);
lean_ctor_set(v___x_439_, 3, v___f_447_);
lean_ctor_set(v___x_439_, 2, v___f_448_);
lean_ctor_set(v___x_439_, 1, v___f_441_);
lean_ctor_set(v___x_439_, 0, v___x_445_);
v___x_450_ = v___x_439_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___f_441_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v___f_448_);
lean_ctor_set(v_reuseFailAlloc_581_, 3, v___f_447_);
lean_ctor_set(v_reuseFailAlloc_581_, 4, v___f_446_);
v___x_450_ = v_reuseFailAlloc_581_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_452_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 1, v___f_442_);
lean_ctor_set(v___x_432_, 0, v___x_450_);
v___x_452_ = v___x_432_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___f_442_);
v___x_452_ = v_reuseFailAlloc_580_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v_toApplicative_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_578_; 
v___x_453_ = l_StateRefT_x27_instMonad___redArg(v___x_452_);
v_toApplicative_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_453_, 1);
lean_dec(v_unused_579_);
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_578_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_toApplicative_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_578_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v_toFunctor_458_; lean_object* v_toSeq_459_; lean_object* v_toSeqLeft_460_; lean_object* v_toSeqRight_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_576_; 
v_toFunctor_458_ = lean_ctor_get(v_toApplicative_454_, 0);
v_toSeq_459_ = lean_ctor_get(v_toApplicative_454_, 2);
v_toSeqLeft_460_ = lean_ctor_get(v_toApplicative_454_, 3);
v_toSeqRight_461_ = lean_ctor_get(v_toApplicative_454_, 4);
v_isSharedCheck_576_ = !lean_is_exclusive(v_toApplicative_454_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_toApplicative_454_, 1);
lean_dec(v_unused_577_);
v___x_463_ = v_toApplicative_454_;
v_isShared_464_ = v_isSharedCheck_576_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_toSeqRight_461_);
lean_inc(v_toSeqLeft_460_);
lean_inc(v_toSeq_459_);
lean_inc(v_toFunctor_458_);
lean_dec(v_toApplicative_454_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_576_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___f_465_; lean_object* v___f_466_; lean_object* v___f_467_; lean_object* v___f_468_; lean_object* v___x_469_; lean_object* v___f_470_; lean_object* v___f_471_; lean_object* v___f_472_; lean_object* v___x_474_; 
v___f_465_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6));
v___f_466_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7));
lean_inc_ref(v_toFunctor_458_);
v___f_467_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_467_, 0, v_toFunctor_458_);
v___f_468_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_468_, 0, v_toFunctor_458_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___f_467_);
lean_ctor_set(v___x_469_, 1, v___f_468_);
v___f_470_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_470_, 0, v_toSeqRight_461_);
v___f_471_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_471_, 0, v_toSeqLeft_460_);
v___f_472_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_472_, 0, v_toSeq_459_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 4, v___f_470_);
lean_ctor_set(v___x_463_, 3, v___f_471_);
lean_ctor_set(v___x_463_, 2, v___f_472_);
lean_ctor_set(v___x_463_, 1, v___f_465_);
lean_ctor_set(v___x_463_, 0, v___x_469_);
v___x_474_ = v___x_463_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v___f_465_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v___f_472_);
lean_ctor_set(v_reuseFailAlloc_575_, 3, v___f_471_);
lean_ctor_set(v_reuseFailAlloc_575_, 4, v___f_470_);
v___x_474_ = v_reuseFailAlloc_575_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_476_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 1, v___f_466_);
lean_ctor_set(v___x_456_, 0, v___x_474_);
v___x_476_ = v___x_456_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v___f_466_);
v___x_476_ = v_reuseFailAlloc_574_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v_toMonadQuotation_478_; lean_object* v_toMonadRef_479_; lean_object* v___f_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_toMonadFileMap_483_; lean_object* v___x_484_; lean_object* v_getEnv_485_; lean_object* v_modifyEnv_486_; lean_object* v___f_487_; lean_object* v___x_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_477_ = l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
v_toMonadQuotation_478_ = lean_ctor_get(v___x_477_, 0);
v_toMonadRef_479_ = lean_ctor_get(v_toMonadQuotation_478_, 0);
v___f_480_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8));
v___x_481_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9));
v___x_482_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13);
v_toMonadFileMap_483_ = lean_ctor_get(v___x_482_, 0);
v___x_484_ = l_Lean_Meta_instMonadEnvMetaM;
v_getEnv_485_ = lean_ctor_get(v___x_484_, 0);
v_modifyEnv_486_ = lean_ctor_get(v___x_484_, 1);
lean_inc(v_modifyEnv_486_);
v___f_487_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_487_, 0, v_modifyEnv_486_);
lean_closure_set(v___f_487_, 1, v___x_481_);
lean_inc(v_getEnv_485_);
v___x_488_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_488_, 0, lean_box(0));
lean_closure_set(v___x_488_, 1, lean_box(0));
lean_closure_set(v___x_488_, 2, lean_box(0));
lean_closure_set(v___x_488_, 3, lean_box(0));
lean_closure_set(v___x_488_, 4, v_getEnv_485_);
v___f_489_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_489_, 0, v___f_487_);
lean_closure_set(v___f_489_, 1, v___f_480_);
v___x_490_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_490_, 0, lean_box(0));
lean_closure_set(v___x_490_, 1, v___x_488_);
v___x_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___f_489_);
v___x_492_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25);
v___x_493_ = l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_inc_ref(v_toMonadRef_479_);
v___x_494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v_toMonadRef_479_);
lean_ctor_set(v___x_494_, 2, v___x_493_);
switch(lean_obj_tag(v_v_405_))
{
case 0:
{
lean_object* v_val_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_510_; 
lean_dec_ref_known(v___x_491_, 2);
lean_dec_ref(v___f_404_);
lean_dec_ref(v___f_403_);
v_val_495_ = lean_ctor_get(v_v_405_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_v_405_);
if (v_isSharedCheck_510_ == 0)
{
v___x_497_ = v_v_405_;
v_isShared_498_ = v_isSharedCheck_510_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_val_495_);
lean_dec(v_v_405_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_510_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v_y_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_499_ = l_Lean_TSyntax_getId(v_val_495_);
v_y_500_ = l_Lean_Name_eraseMacroScopes(v___x_499_);
lean_dec(v___x_499_);
v___x_501_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27));
v___x_502_ = lean_name_eq(v_y_500_, v___x_501_);
lean_dec(v_y_500_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_313__overap_504_; lean_object* v___x_505_; 
lean_del_object(v___x_497_);
v___x_503_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29);
v___x_313__overap_504_ = l_Lean_throwErrorAt___redArg(v___x_476_, v___x_494_, v_val_495_, v___x_503_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
v___x_505_ = lean_apply_7(v___x_313__overap_504_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, lean_box(0));
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_508_; 
lean_dec(v_val_495_);
lean_dec_ref_known(v___x_494_, 3);
lean_dec_ref(v___x_476_);
v___x_506_ = lean_box(0);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v___x_506_);
v___x_508_ = v___x_497_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
case 1:
{
lean_object* v_val_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_324__overap_517_; lean_object* v___x_518_; 
lean_dec_ref_known(v___x_491_, 2);
lean_dec_ref(v___f_404_);
lean_dec_ref(v___f_403_);
v_val_511_ = lean_ctor_get(v_v_405_, 0);
lean_inc_n(v_val_511_, 2);
lean_dec_ref_known(v_v_405_, 1);
v___x_512_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31);
v___x_513_ = l_Lean_MessageData_ofSyntax(v_val_511_);
v___x_514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33);
v___x_516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_324__overap_517_ = l_Lean_throwErrorAt___redArg(v___x_476_, v___x_494_, v_val_511_, v___x_516_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
v___x_518_ = lean_apply_7(v___x_324__overap_517_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, lean_box(0));
return v___x_518_;
}
default: 
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_573_; 
v_val_519_ = lean_ctor_get(v_v_405_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v_v_405_);
if (v_isSharedCheck_573_ == 0)
{
v___x_521_ = v_v_405_;
v_isShared_522_ = v_isSharedCheck_573_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v_v_405_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_573_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v_toCold_523_; lean_object* v_currRecDepth_524_; lean_object* v_ref_525_; uint8_t v_diag_526_; uint8_t v_suppressElabErrors_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___f_530_; lean_object* v_ref_531_; lean_object* v___x_532_; lean_object* v___x_334__overap_533_; lean_object* v___x_534_; 
v_toCold_523_ = lean_ctor_get(v___y_410_, 0);
v_currRecDepth_524_ = lean_ctor_get(v___y_410_, 1);
v_ref_525_ = lean_ctor_get(v___y_410_, 2);
v_diag_526_ = lean_ctor_get_uint8(v___y_410_, sizeof(void*)*3);
v_suppressElabErrors_527_ = lean_ctor_get_uint8(v___y_410_, sizeof(void*)*3 + 1);
v___x_528_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40));
v___x_529_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41));
v___f_530_ = lean_alloc_closure((void*)(l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1), 4, 2);
lean_closure_set(v___f_530_, 0, v___x_529_);
lean_closure_set(v___f_530_, 1, v___f_403_);
v_ref_531_ = l_Lean_replaceRef(v_val_519_, v_ref_525_);
lean_inc(v_currRecDepth_524_);
lean_inc_ref(v_toCold_523_);
v___x_532_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_532_, 0, v_toCold_523_);
lean_ctor_set(v___x_532_, 1, v_currRecDepth_524_);
lean_ctor_set(v___x_532_, 2, v_ref_531_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*3, v_diag_526_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*3 + 1, v_suppressElabErrors_527_);
lean_inc_ref(v___x_494_);
lean_inc(v_toMonadFileMap_483_);
lean_inc_ref(v___x_476_);
v___x_334__overap_533_ = l_Lean_Doc_parseQuotedStrLit___redArg(v___x_476_, v_toMonadFileMap_483_, v___x_491_, v___x_494_, v___x_482_, v___x_528_, v___f_530_, v_val_519_);
lean_inc(v___y_411_);
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
v___x_534_ = lean_apply_7(v___x_334__overap_533_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___x_532_, v___y_411_, lean_box(0));
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_564_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_564_ == 0)
{
v___x_537_ = v___x_534_;
v_isShared_538_ = v_isSharedCheck_564_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_534_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_564_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
lean_inc(v_a_535_);
v___x_541_ = l_Lean_Syntax_isOfKind(v_a_535_, v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_366__overap_547_; lean_object* v___x_548_; 
lean_del_object(v___x_537_);
lean_del_object(v___x_521_);
lean_dec_ref(v___f_404_);
v___x_542_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44);
lean_inc(v_a_535_);
v___x_543_ = l_Lean_MessageData_ofSyntax(v_a_535_);
v___x_544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33);
v___x_546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_544_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
v___x_366__overap_547_ = l_Lean_throwErrorAt___redArg(v___x_476_, v___x_494_, v_a_535_, v___x_546_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
v___x_548_ = lean_apply_7(v___x_366__overap_547_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, lean_box(0));
return v___x_548_;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; size_t v_sz_553_; size_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
lean_dec_ref_known(v___x_494_, 3);
lean_dec_ref(v___x_476_);
v___x_549_ = l_Lean_Syntax_getArg(v_a_535_, v___x_539_);
lean_dec(v_a_535_);
v___x_550_ = l_Lean_Syntax_getArgs(v___x_549_);
lean_dec(v___x_549_);
v___x_551_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_550_);
lean_dec_ref(v___x_550_);
v___x_552_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54));
v_sz_553_ = lean_array_size(v___x_551_);
v___x_554_ = ((size_t)0ULL);
v___x_555_ = l_unsafeCast___redArg(v___x_551_);
lean_dec_ref(v___x_551_);
v___x_556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_552_, v___f_404_, v_sz_553_, v___x_554_, v___x_555_);
v___x_557_ = l_unsafeCast___redArg(v___x_556_);
lean_dec(v___x_556_);
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 1);
lean_ctor_set(v___x_521_, 0, v___x_557_);
v___x_559_ = v___x_521_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_557_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_559_);
v___x_561_ = v___x_537_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_del_object(v___x_521_);
lean_dec_ref_known(v___x_494_, 3);
lean_dec_ref(v___x_476_);
lean_dec_ref(v___f_404_);
v_a_565_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_534_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_534_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed(lean_object* v___f_586_, lean_object* v___f_587_, lean_object* v_v_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Doc_instFromDocArgDocScope___lam__2(v___f_586_, v___f_587_, v_v_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
return v_res_596_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports = _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports();
lean_mark_persistent(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM = _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM();
lean_mark_persistent(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
}
#ifdef __cplusplus
}
#endif
